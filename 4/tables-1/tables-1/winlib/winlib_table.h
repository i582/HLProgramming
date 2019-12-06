#pragma once

#include "functional"
#include "string"
#include "vector"
#include "locale"

#include "winlib_main.h"
#include "winlib_rect.h"

#include "winlib_table_collumn.h"
#include "winlib_table_row.h"

#include "winlib_file.h"
#include "winlib_utils.h"
#include "winlib_csv.h"

namespace winlib
{

using std::function;
using std::string;
using std::vector;

enum class TableCSV
{
	NONE,
	USE_FIRST_LINE_AS_TITLE
};	

class Table
{
private:
	Rect size;

	HWND parent;
	HWND hwnd;

	size_t id;

	vector<TableCollumn*> collumns;
	vector<TableRow*> rows;

	csv csv_data;

public:
	Table(HWND parent, Rect size, int id);
	Table(HWND parent, Rect size, int id, csv& csv_data);
	~Table();

private:
	void init();

public:
	friend TableCollumn;
	friend TableRow;
	friend TableItem;

private:
	HWND getHwnd() const;
	void createFromCSV();

public:
	static int _stdcall sortFunction(LPARAM lp1, LPARAM lp2, LPARAM collumn);

public:
	void handleSort(LPARAM lParam);

public:
	void addCollumn(TableCollumn* collumn);
	void addCollumn(string title, size_t id, size_t width);

	void addRow(TableRow* row, int group_id = -1);
	void addRow(int group_id = -1);

	void addRow(TableRow* row, vector<string>* items, int group_id = -1);
	void addRow(vector<string>* items, int group_id = -1);
	void addRow(vector<string> items, int group_id = -1);

	void addGroup(string groupTitle, int groupId);

	void enableGroups();
	void disableGroups();

	void setCollumnSortFunction(size_t collumn, sort_f sortFunction);

	void setCollumnWidth(vector<int> widths);

	TableRow& at(size_t index);
	TableRow& operator[](size_t index);



public:
	void openCSV(string path, char separator, TableCSV type = TableCSV::USE_FIRST_LINE_AS_TITLE);

};

}