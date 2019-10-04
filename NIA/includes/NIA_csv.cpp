#include "NIA_csv.h"

NIA::CSV::CSV(wstring path, wchar_t separator, bool first_line)
{
	this->path = path;
	this->separator = separator;
	this->first_line = first_line;

	this->init();
}

void NIA::CSV::init()
{

	char* data = (char*)NIA::File::read(
		NIA::File::open(path)
	);

	wstring datas = NIA::to_wstring(data);

	vector <wstring>* lines = NIA::split(datas, L'\n');

	for (size_t i = 0; i < lines->size(); i++)
	{
		matrix.push_back(NIA::split(lines->at(i), L';'));
	}

}

void NIA::CSV::make_out()
{
}

LView* NIA::CSV::make_table(HWND hwnd, Rect size, int id, vector<int> widths)
{

	list = new LView(hwnd, size, id);


	for (size_t i = 0; i < matrix.at(0)->size(); i++)
	{
		auto& header_item = matrix.at(0)->at(i);
		list->add_in_header(new LVHeaderItem(header_item, widths.at(i)), i == 0 ? DESC : ASC);
	}

	// fictive group
	list->add_group(L"", 1);

	for (size_t i = 1; i < matrix.size(); i++)
	{
		list->add_row(new LVRow(list), 1);
	}

	
	for (size_t i = 1; i < matrix.size(); i++)
	{
		auto& item = matrix.at(i);

		for (size_t j = 0; j < item->size(); j++)
		{
			auto& item_part = item->at(j);

			list->at(i - 1)->at(j)->set_text(item_part);
		}
	}

	return list;
}
