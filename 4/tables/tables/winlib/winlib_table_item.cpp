#include "winlib_table_item.h"
#include "winlib_table_row.h"
#include "winlib_table.h"

winlib::TableItem::TableItem(string text)
{
	this->parent = nullptr;
	this->_text = text;

	this->x = -1;
	this->y = -1;
}

void winlib::TableItem::text(string text)
{
	this->_text = text;
	ListView_SetItemText(parent->parent->hwnd, x, y, (LPSTR)_text.c_str());
}

const winlib::string& winlib::TableItem::text() const
{
	return _text;
}
