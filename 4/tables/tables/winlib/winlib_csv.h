#pragma once

#include "functional"
#include "string"
#include "vector"
#include "locale"
#include "algorithm"

#include "winlib_main.h"
#include "winlib_file.h"
#include "winlib_utils.h"

namespace winlib
{

	using std::function;
	using std::string;
	using std::vector;
	using std::sort;

	enum class csv_property
	{
		NONE,
		USE_FIRST_LINE_AS_TITLE
	};

	enum class csv_sort_type
	{
		DESC, // убывание
		ASC   // возрастание
	};

	enum class csv_sort_item_type
	{
		STRING,
		INT,
		DOUBLE
	};

	using csv_line = vector<string>*;
	using csv_matrix = vector < csv_line >;
	using csv_header = csv_line;

	class csv
	{
	private:
		csv_matrix matrix;
		csv_header header;

	public:
		csv();
		csv(string file, char separator, csv_property type);
		csv(csv_header& header, csv_matrix& matrix);

	public:
		const csv_matrix& get_matrix() const;
		const csv_header& get_header() const;


		csv& sort(size_t collumn, csv_sort_item_type item_type = csv_sort_item_type::INT, csv_sort_type type = csv_sort_type::DESC);

		csv& select_collumns(vector<size_t> collumns);
		csv& select_rows(size_t start, size_t end);

		csv& add_collumn(string title);

		csv& fill_collumn(size_t collumn, string fill_text);
		csv& fill_collumn(size_t collumn, std::function<string(csv_line)>);

		csv& filter(size_t collumn, std::function<bool(string)>);
	};
}