#pragma once


#include "NIA_main.h"
#include "NIA_rect.h"
#include "NIA_listview__header_item.h"
#include "NIA_listview__row.h"

constexpr int AUTO = -1;

using LVHeader = vector <LVHeaderItem*>;
using LVRows = vector <LVRow*>;

class LView
{
public:
	static int _stdcall comp_func(LPARAM lp1, LPARAM lp2, LPARAM sortParam);

private:
	Rect size;
	HWND parent;
	HWND hwnd;
	LVHeader header;
	LVRows rows;

	LVHeaderSort header_sort;

	int id;

	
public:
	LView(HWND parent, Rect size, int id);

public:
	friend LVHeaderItem;

private:
	void init();

_get
public:
	HWND get_hwnd();

public:
	LVRow* at(unsigned int index);
	LVRow* operator[](unsigned int index);

public:
	LVHeaderItem* add_in_header(LVHeaderItem* item, SortType type = ASC);
	
	LVRow* add_row(LVRow* row, int group_id = -1);
	void add_group(wstring text, int group_id);


};


#define InitListViewEvent(list, comp_func) \
\
LPNMHDR lpnmh = (LPNMHDR)lParam;\
\
if (lpnmh->code == LVN_COLUMNCLICK)\
{\
	NMLISTVIEW* pListView = (NMLISTVIEW*)lParam;\
	HWND list_hwnd = list->get_hwnd();\
	ListView_SortItems(list_hwnd, comp_func, (LPARAM)pListView->iSubItem);\
	\
	return 0;\
}\

