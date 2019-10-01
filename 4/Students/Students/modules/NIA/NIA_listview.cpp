#include "NIA_listview.h"

int _stdcall LView::comp_func(LPARAM lp1, LPARAM lp2, LPARAM sortParam)
{
	WCHAR* text = (WCHAR*)lp1;
	//MessageBox(NULL, text, L"Предупреждение", MB_ICONINFORMATION);

	return 0;
}

LView::LView(HWND parent, Rect size, int id)
{
	this->parent = parent;
	this->hwnd = nullptr;
	this->size = size;
	this->id = id;

	this->init();
}

void LView::init()
{
	INITCOMMONCONTROLSEX icex;
	icex.dwSize = sizeof(INITCOMMONCONTROLSEX);
	icex.dwICC = ICC_LISTVIEW_CLASSES;
	InitCommonControlsEx(&icex);

	hwnd = CreateWindow(WC_LISTVIEW, L"",
		WS_VISIBLE | WS_BORDER | WS_CHILD | LVS_REPORT | LVS_EDITLABELS | LVS_SORTDESCENDING,
		size.x, size.y, size.w, size.h,
		parent, (HMENU)id, nullptr, nullptr);


	/*ListView_SetExtendedListViewStyleEx(hwnd, 0,
		LVS_EX_FULLROWSELECT |
		LVS_EX_GRIDLINES |
		LVS_EX_DOUBLEBUFFER |
		LVS_EX_HEADERDRAGDROP |
		LVS_EX_UNDERLINECOLD);*/

	NIA_ShowErrorDescriptionByErrorId(GetLastError());
}

HWND LView::get_hwnd()
{
	return hwnd;
}

LVRow* LView::at(unsigned int index)
{
	return index < rows.size() ? rows.at(index) : nullptr;
}

LVRow* LView::operator[](unsigned int index)
{
	return at(index);
}

LVHeaderItem* LView::add_in_header(LVHeaderItem* item)
{
	item->parent = this;
	item->hwnd = hwnd;
	item->id = header.size();

	if (item->init())
	{
		header.push_back(item);
	}

	return item;
}

LVRow* LView::add_row(LVRow* row)
{
	int iLastIndex = ListView_GetItemCount(hwnd);

	LVITEM lvi;
	lvi.mask = LVIF_TEXT;
	lvi.cchTextMax = 255;
	lvi.iItem = iLastIndex;
	lvi.pszText = NULL;
	lvi.iSubItem = 0;

	ListView_InsertItem(hwnd, &lvi);

	

	row->id = iLastIndex;
	row->max_count = header.size();

	for (size_t i = 0; i < header.size(); i++)
	{
		row->add(new LVItem(row, L""));
	}


	rows.push_back(row);

	return row;
}

