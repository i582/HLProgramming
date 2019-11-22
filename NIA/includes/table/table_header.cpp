#include "table_header.h"
#include "table.h"

Nia::TableHeaderItem::TableHeaderItem(wstring text, int width)
{
	this->hwnd = nullptr;
	this->id = 0;
	this->text = text;
	this->width = width;
	this->align = TableAlign::LEFT;
}

bool Nia::TableHeaderItem::init()
{
	int index = -1;

	LVCOLUMN lvc;
	lvc.mask = LVCF_TEXT | LVCF_WIDTH | LVCF_FMT;
	lvc.fmt = (int)this->align | LVCFMT_SPLITBUTTON;
	lvc.cx = this->width;
	lvc.cchTextMax = 255;
	lvc.pszText = (WCHAR*)text.c_str();
	
	
	index = ListView_InsertColumn(hwnd, id, &lvc);

	if (index == -1)
	{
		return false;
	}

	return true;

}
