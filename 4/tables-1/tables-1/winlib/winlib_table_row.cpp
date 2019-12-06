#include "winlib_table_row.h"

winlib::TableRow::TableRow()
{
	this->id = 0;
	this->parent = nullptr;
	this->items = {};
}

winlib::TableRow::~TableRow()
{
	for (auto& item : items)
	{
		delete item;
	}
}

winlib::TableItem& winlib::TableRow::at(size_t index)
{
	return *items.at(index);
}

winlib::TableItem& winlib::TableRow::operator[](size_t index)
{
	return at(index);
}
