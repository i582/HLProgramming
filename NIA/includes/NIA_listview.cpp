// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com

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


	ListView_SetExtendedListViewStyleEx(hwnd, 0,
		LVS_EX_FULLROWSELECT |
		LVS_EX_GRIDLINES |
		LVS_EX_DOUBLEBUFFER |
		LVS_EX_HEADERDRAGDROP |
		LVS_EX_UNDERLINECOLD);


	
	//NIA_ShowErrorDescriptionByErrorId(GetLastError());
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
	lvi.iImage = 0;
	lvi.iIndent = 0;

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

LRESULT __stdcall LView::proc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{

	LView* lview;

	if (msg == WM_CREATE)
	{
		lview = (LView*)((CREATESTRUCT*)lParam)->lpCreateParams;
		SetLastError(0);
		if (!SetWindowLongPtr(hwnd, GWLP_USERDATA, (LONG_PTR)lview))
		{
			if (GetLastError() != 0)
				return 0;
		}
	}
	else
	{
		lview = (LView*)GetWindowLongPtr(hwnd, GWLP_USERDATA);
	}

	if (lview != nullptr)
	{






		lview->hwnd = hwnd;
		

		switch (msg)
		{
		case WM_NOTIFY:
		{
			LPNMHDR lpnmh = (LPNMHDR)lParam;

			if (lpnmh->code == LVN_COLUMNCLICK)
			{
				
				MessageBox(NULL, L"text", L"Предупреждение", MB_ICONINFORMATION);

				return 0;
			}

			return 0;
		}
		
		
		}


		return CallWindowProc(lview->oldProc, hwnd, msg, wParam, lParam);



	}

	return DefWindowProc(hwnd, msg, wParam, lParam);



	
}

void LView::set_callback(WNDPROC new_proc)
{
	oldProc = (WNDPROC)SetWindowLong(hwnd, GWL_WNDPROC, (LONG)new_proc);
}

