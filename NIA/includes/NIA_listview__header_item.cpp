#include "NIA_listview__header_item.h"
#include "NIA_listview.h"


LVHeaderItem::LVHeaderItem(wstring title, int width)
{
	this->parent = nullptr;
	this->hwnd = nullptr;
	this->id = 0;
	this->title = title;
	this->width = width;
	this->align = LVAlign::LEFT;
	this->is_fixed = false;

}

bool LVHeaderItem::init()
{
	int index = -1;
	wstring* d_title = new wstring;
	*d_title = this->title;

	LVCOLUMN lvc;
	lvc.mask = LVCF_TEXT | LVCF_WIDTH | LVCF_FMT;
	lvc.fmt = this->align | LVCFMT_SPLITBUTTON;
	lvc.cx = this->width;
	lvc.cchTextMax = 255;
	lvc.pszText = (WCHAR*)d_title->c_str();


	index = ListView_InsertColumn(hwnd, id, &lvc);

	if (index == -1)
	{
		return false;
	}

	return true;
}

void LVHeaderItem::set_id(int id)
{
	this->id = id;
}
