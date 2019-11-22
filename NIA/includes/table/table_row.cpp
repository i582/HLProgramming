#include "table_row.h"
#include "table.h"

Nia::TableRow::TableRow(Table* parent)
{
	this->parent = parent;
	this->hwnd = parent->getHwnd();
}

Nia::TableRowItem* Nia::TableRow::add(TableRowItem* item)
{
	if (items.size() < max_count)
	{
		items.push_back(item);
		return item;
	}

	return nullptr;
}
