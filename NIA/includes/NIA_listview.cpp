#include "NIA_listview.h"

NIA::ListView::ListView(HWND parent, Rect size, int id)
{
	this->parent = parent;
	this->hwndList = nullptr;
	this->size = size;
	this->id = id;

	this->init();
}

void NIA::ListView::init()
{
	INITCOMMONCONTROLSEX icex;
	icex.dwSize = sizeof(INITCOMMONCONTROLSEX);
	icex.dwICC = ICC_LISTVIEW_CLASSES;
	InitCommonControlsEx(&icex);

	hwndList = CreateWindow(WC_LISTVIEW, L"",
		WS_VISIBLE | WS_BORDER | WS_CHILD | LVS_REPORT | LVS_EDITLABELS,
		size.x, size.y, size.w, size.h,
		parent, (HMENU)id, nullptr, nullptr);

	ListView_SetExtendedListViewStyleEx(hwndList, 0, 
		LVS_EX_FULLROWSELECT |
		LVS_EX_GRIDLINES |
		LVS_EX_DOUBLEBUFFER |
		LVS_EX_HEADERDRAGDROP |
		LVS_EX_UNDERLINECOLD);
}

_get HWND const NIA::ListView::get_hwnd()
{
	return hwndList;
}

NIA::ListViewHeaderCollumn* NIA::ListView::add_header_collumn(ListViewHeaderCollumn* col)
{
	col->set_id(collumns.size());

	if (col->init())
	{
		collumns.push_back(col);
	}

	return col;
}

void NIA::ListView::add_row()
{

	int iLastIndex = ListView_GetItemCount(hwndList);

	LVITEM lvi;
	lvi.mask = LVIF_TEXT;
	lvi.cchTextMax = 255;
	lvi.iItem = iLastIndex;
	lvi.pszText = NULL;
	lvi.iSubItem = 0;

	ListView_InsertItem(hwndList, &lvi);
		

}

void NIA::ListView::set_collumn_title(int col_id, wstring title)
{
}

NIA::ListViewHeaderCollumn::ListViewHeaderCollumn(ListView* list_view, wstring title, int width)
{
	this->list_view = list_view;
	this->id = 0;
	this->title = title;
	this->width = width;
	this->align = ListViewCollumnAlign::LEFT;
	this->is_fixed = false;

}

bool NIA::ListViewHeaderCollumn::init()
{

	int index = -1;
	wstring* d_title = new wstring;
	*d_title = this->title;

	LVCOLUMN lvc;
	lvc.mask = LVCF_TEXT | LVCF_WIDTH | LVCF_FMT;
	lvc.fmt = this->align;
	lvc.cx = this->width;
	lvc.cchTextMax = 255;
	lvc.pszText = (WCHAR*)d_title->c_str();

	if (this->is_fixed)
	{
		lvc.fmt |= LVCFMT_FIXED_WIDTH;
	}

	index = ListView_InsertColumn(list_view->get_hwnd(), id, &lvc);

	if (index == -1)
	{
		return false;
	}

	return true;
}

void NIA::ListViewHeaderCollumn::set_id(int id)
{
	this->id = id;
}

NIA::ListViewHeaderCollumn* NIA::ListViewHeaderCollumn::fixed()
{
	is_fixed = true;

	HWND hw = list_view->get_hwnd();

	LVCOLUMN* lvc = new LVCOLUMN;
	ListView_GetColumn(hw, id, lvc);

	/*lvc->fmt |= LVCFMT_FIXED_WIDTH;

	LVCOLUMN lvca = *lvc;*/

	//ListView_SetColumn(hw, 0, lvc);

	return this;
}

NIA::ListViewHeaderCollumn* NIA::ListViewHeaderCollumn::unfixed()
{
	is_fixed = false;
	return this;
}
