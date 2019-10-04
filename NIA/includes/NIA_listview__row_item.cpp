#include "NIA_listview__row_item.h"
#include "NIA_listview__row.h"

LVItem::LVItem(LVRow* parent, wstring text)
{
	this->hwnd = parent->hwnd;
	this->parent = parent;
	this->text = text;

	this->x = parent->id;
	this->y = parent->items.size();
}

void LVItem::set_text(wstring text)
{
	this->text = text;
	wstring* text_item = new wstring;
	*text_item = text;
	WCHAR* wchar_text = (LPWSTR)text_item->c_str();
	
	ListView_SetItemText(hwnd, x, y, wchar_text);
}

wstring LVItem::get_text()
{
	return text;
}
