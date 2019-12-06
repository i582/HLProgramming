#include "winlib_csv.h"

winlib::csv::csv()
{
	this->header = {};
	this->matrix = {};
}

winlib::csv::csv(string path, char separator, csv_property type)
{
	setlocale(LC_ALL, "ru-RU.utf-8");

	char* data_raw = (char*)winlib::File::read(
		winlib::File::open(path)
	);


	string data(data_raw);

	vector <string>* lines = winlib::Utils::split(data, '\n');

	size_t start_index = 0;

	if (type == csv_property::USE_FIRST_LINE_AS_TITLE)
	{
		header = winlib::Utils::split(lines->at(0), separator);
		start_index = 1;
	}

	for (size_t i = start_index; i < lines->size(); i++)
	{
		matrix.push_back(winlib::Utils::split(lines->at(i), separator));
	}
}

winlib::csv::csv(csv_header& header, csv_matrix& matrix)
{
	this->header = header;
	this->matrix = matrix;
}

const winlib::csv_matrix& winlib::csv::get_matrix() const
{
	return matrix;
}

const winlib::csv_header& winlib::csv::get_header() const
{
	return header;
}

winlib::csv& winlib::csv::sort(size_t collumn, csv_sort_item_type item_type, csv_sort_type sort_type)
{
	if (collumn == -1)
	{
		collumn = header->size() - 1;
	}

	if (collumn >= header->size())
		return *new csv();

	csv_matrix temp_matrix = matrix;

	std::sort(temp_matrix.begin(), temp_matrix.end(), [&collumn, &item_type, &sort_type](csv_line line1, csv_line line2)
	{
		switch (item_type)
		{
		case winlib::csv_sort_item_type::STRING:
		{
			if (sort_type == winlib::csv_sort_type::DESC)
			{
				return line1->at(collumn) > line2->at(collumn);
			}
			else
			{
				return line1->at(collumn) < line2->at(collumn);
			}
			break;
		}
				
		case winlib::csv_sort_item_type::INT:
		{
			if (sort_type == winlib::csv_sort_type::DESC)
			{
				return stoi(line1->at(collumn)) > stoi(line2->at(collumn));
			}
			else
			{
				return stoi(line1->at(collumn)) < stoi(line2->at(collumn));
			}
			break;
		}
		case winlib::csv_sort_item_type::DOUBLE:
		{
			if (sort_type == winlib::csv_sort_type::DESC)
			{
				return stod(line1->at(collumn)) > stod(line2->at(collumn));
			}
			else
			{
				return stod(line1->at(collumn)) < stod(line2->at(collumn));
			}
			break;
		}

		default:
			return false;
			break;
		}

		
	});


	return *new csv(header, temp_matrix);
}

winlib::csv& winlib::csv::select_collumns(vector<size_t> collumns)
{
	csv_matrix new_matrix;

	for (auto& line : matrix)
	{
		csv_line new_line = new vector<string>;

		for (auto& collumn : collumns)
		{
			if (collumn >= header->size())
				continue;

			new_line->push_back(line->at(collumn));
		}

		new_matrix.push_back(new_line);
	}

	csv_header new_header = new vector<string>;

	for (auto& collumn : collumns)
	{
		if (collumn >= header->size())
			continue;

		new_header->push_back(header->at(collumn));
	}

	return *new csv(new_header, new_matrix);
}

winlib::csv& winlib::csv::select_rows(size_t start, size_t end)
{
	csv_matrix new_matrix;

	if (start > end)
		std::swap(start, end);

	if (end > matrix.size())
		end = matrix.size();

	for (size_t i = start; i < end; i++)
	{
		new_matrix.push_back(matrix.at(i));
	}

	return *new csv(header, new_matrix);
}

winlib::csv& winlib::csv::add_collumn(string title)
{
	header->push_back(title);

	for (auto& row : matrix)
	{
		row->push_back("");
	}

	return *this;
}

winlib::csv& winlib::csv::fill_collumn(size_t collumn, string fill_text)
{
	if (collumn == -1)
	{
		collumn = header->size() - 1;
	}

	for (auto& row : matrix)
	{
		row->at(collumn) = fill_text;
	}

	return *this;
}

winlib::csv& winlib::csv::fill_collumn(size_t collumn, std::function<string(csv_line)> callback)
{
	if (collumn == -1)
	{
		collumn = header->size() - 1;
	}

	for (auto& row : matrix)
	{
		row->at(collumn) = callback(row);
	}

	return *this;
}

winlib::csv& winlib::csv::filter(size_t collumn, std::function<bool(string)> callback)
{
	if (collumn == -1)
	{
		collumn = header->size() - 1;
	}

	csv_matrix new_matrix;

	for (auto& row : matrix)
	{
		if (callback(row->at(collumn)))
		{
			new_matrix.push_back(row);
		}
	}

	return *new csv(header, new_matrix);
}

winlib::csv& winlib::csv::copy()
{
	return *new csv(header, matrix);
}
