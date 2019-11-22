#include "table_item.h"
#include "table.h"

Nia::TableRowItem::TableRowItem(TableRow* parent, wstring text)
{
	this->hwnd = parent->hwnd;
	this->parent = parent;
	this->_text = text;

	this->x = parent->id;
	this->y = parent->items.size();
}

void Nia::TableRowItem::text(wstring text)
{
	this->_text = text;

	WCHAR* wchar_text = (LPWSTR)_text.c_str();

	ListView_SetItemText(hwnd, x, y, wchar_text);
}

wstring Nia::TableRowItem::text()
{
	return _text;
}
