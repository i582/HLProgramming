#pragma once

#include "table_general.h"
#include "table_item.h"

namespace Nia
{


class Table;

class TableRow
{
private:
	HWND hwnd;
	Table* parent;

	int id;

	vector <TableRowItem* > items;

public:
	TableRow(Table* parent);

public:
	friend TableRowItem;

private:
	TableRowItem* add(TableRowItem* item);

};


}