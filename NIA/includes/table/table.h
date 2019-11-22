#pragma once

#include "table_general.h"

#include "table_header.h"
#include "table_row.h"

namespace Nia
{

using TableHeader = vector <TableHeaderItem*>;
using TableRows = vector <TableRow*>;

class Table
{
private:
	Rect size;

	HWND parent;
	HWND hwnd;

	TableHeader header;
	TableRows rows;


public:
	Table(HWND parent, Rect size);

public:
	friend TableHeaderItem;
	friend TableRow;

public:
	HWND getHwnd();

};




}
