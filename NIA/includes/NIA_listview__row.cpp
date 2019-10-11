#include "NIA_listview__row.h"
#include "NIA_listview.h"

LVRow::LVRow(LView* parent)
{
	this->parent = parent;
	this->hwnd = parent->get_hwnd();
	this->header_sort = nullptr;
}

LVItem* LVRow::at(unsigned int index)
{
	return index < items.size() ? items.at(index) : nullptr;
}

LVItem* LVRow::operator[](unsigned int index)
{
	return at(index);
}

LVItem* LVRow::add(LVItem* item)
{
	if (items.size() < max_count)
	{
		items.push_back(item);
		return item;
	}

	return nullptr;
}

void LVRow::set_header_sort(LVHeaderSort* header_sort)
{
	this->header_sort = header_sort;
}
