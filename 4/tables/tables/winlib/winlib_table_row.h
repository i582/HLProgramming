#pragma once

#include "functional"
#include "string"
#include "vector"

#include "winlib_main.h"
#include "winlib_rect.h"

#include "winlib_table_item.h"

namespace winlib
{

using std::function;
using std::string;
using std::vector;

class Table;

class TableRow
{
private:
	size_t id;
	Table* parent;
	vector <TableItem*> items;

public:
	TableRow();
	~TableRow();

public:
	friend Table;
	friend TableItem;

public:
	TableItem& at(size_t index);
	TableItem& operator[](size_t index);

};

}