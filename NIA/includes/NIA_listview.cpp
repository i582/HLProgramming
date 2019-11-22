#include "NIA_listview.h"

int _stdcall LView::comp_func(LPARAM lp1, LPARAM lp2, LPARAM sortParam)
{
	LVRow* row1 = (LVRow*)lp1;
	LVRow* row2 = (LVRow*)lp2;
	
	SortType type = row1->header_sort->at(sortParam);

	wstring text1 = row1->items.at(sortParam)->get_text();
	wstring text2 = row2->items.at(sortParam)->get_text();

	if (NIA::is_number(text1) && NIA::is_number(text2))
	{
		int one = NIA::to_integer(row1->items.at(sortParam)->get_text());
		int two = NIA::to_integer(row2->items.at(sortParam)->get_text());


		if (type == ASC)
		{
			if (one > two)
				return -1;
			else if (one < two)
				return 1;
			else if (one == two)
				return 0;
		}
		else if (type == DESC)
		{
			if (one > two)
				return 1;
			else if (one < two)
				return -1;
			else if (one == two)
				return 0;
		}
	}
	else
	{
		if (type == ASC)
		{
			if (text1 > text2)
				return -1;
			else if (text1 < text2)
				return 1;
			else if (text1 == text2)
				return 0;
		}
		else if (type == DESC)
		{
			if (text1 > text2)
				return 1;
			else if (text1 < text2)
				return -1;
			else if (text1 == text2)
				return 0;
		}
	}
	
	
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

	//InitCommonControls();

	this->hwnd = CreateWindow(WC_LISTVIEW, L"",
		WS_VISIBLE | WS_BORDER | WS_CHILD | LVS_REPORT | LVS_ALIGNTOP,
		size.x, size.y, size.w, size.h,
		parent, (HMENU)id, nullptr, nullptr);


	ListView_SetExtendedListViewStyle(this->hwnd,
		LVS_EX_FULLROWSELECT |
		LVS_EX_GRIDLINES | 
		LVS_EX_AUTOSIZECOLUMNS |
		LVS_EX_DOUBLEBUFFER |
		LVS_EX_HEADERDRAGDROP |
		LVS_EX_UNDERLINECOLD);
	//NIA::Error::show_last();

	//ListView_EnableGroupView(this->hwnd, TRUE);

	
}

HWND LView::get_hwnd()
{
	return this->hwnd;
}

LVRow* LView::at(unsigned int index)
{
	return index < rows.size() ? rows.at(index) : nullptr;
}

LVRow* LView::operator[](unsigned int index)
{
	return at(index);
}

LVHeaderItem* LView::add_in_header(LVHeaderItem* item, SortType type)
{
	item->parent = this;
	item->hwnd = this->hwnd;
	item->id = header.size();

	if (item->init())
	{
		header.push_back(item);
		header_sort.push_back(type);
	}

	return item;
}

LVRow* LView::add_row(LVRow* row, int group_id)
{
	

	int iLastIndex = ListView_GetItemCount(this->hwnd);

	LVITEM lvi = { 0 };
	lvi.mask = LVIF_TEXT | LVIF_GROUPID | LVIF_PARAM;
	lvi.cchTextMax = 255;
	lvi.iItem = iLastIndex;
	lvi.pszText = NULL;
	lvi.iSubItem = 0;
	lvi.iImage = 0;
	lvi.iIndent = 0;
	lvi.lParam = (LPARAM)row;

	if (group_id != -1)
	{
		lvi.iGroupId = group_id;
	}
		

	ListView_InsertItem(this->hwnd, &lvi);


	row->id = iLastIndex;
	row->max_count = header.size();
	row->set_header_sort(&header_sort);

	for (size_t i = 0; i < header.size(); i++)
	{
		row->add(new LVItem(row, L""));
	}


	rows.push_back(row);

	return row;
}

void LView::add_group(wstring text, int group_id)
{
	LVGROUP group = {0};
		
	wstring* str = new wstring;
	*str = text;

	group.cbSize = sizeof(LVGROUP);
	group.mask = LVGF_HEADER | LVGF_GROUPID;
	group.pszHeader = (LPWSTR)str->c_str();
	group.cchHeader = str->length();

	
	group.iGroupId = group_id;

	
	ListView_InsertGroup(this->hwnd, -1, &group);



}
