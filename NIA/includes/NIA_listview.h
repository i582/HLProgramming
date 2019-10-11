#pragma once


#include "NIA_main.h"
#include "NIA_rect.h"
<<<<<<< HEAD


namespace NIA
{

constexpr int AUTO = -1;



enum ListViewCollumnAlign
{
	LEFT = LVCFMT_LEFT,
	CENTERED = LVCFMT_CENTER,
	RIGHT = LVCFMT_RIGHT
};

class ListView;

class ListViewHeaderCollumn
{
private:
	int id;
	int width;
	bool is_fixed;

	ListView* list_view;
		
		
	wstring title;
	ListViewCollumnAlign align;
		
		
public:
	ListViewHeaderCollumn(ListView* list_view, wstring title, int width);

public:
	friend ListView;

private:
	bool init();
	void set_id(int id);

public:
	ListViewHeaderCollumn* fixed();
	ListViewHeaderCollumn* unfixed();

};


class ListView
{
private:
	Rect size;
	HWND parent;
	HWND hwndList;
	int id;


	vector <ListViewHeaderCollumn*> collumns;


public:
	ListView(HWND parent, Rect size, int id);

public:
	friend ListViewHeaderCollumn;
=======
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
>>>>>>> 0902d78024232a5ec8e9cd8246f5b686ad75716d

private:
	void init();

<<<<<<< HEAD
public:
	void set_collumn_title(int col_id, wstring title);

public: _get
	HWND const get_hwnd();

public:
	ListViewHeaderCollumn* add_header_collumn(ListViewHeaderCollumn* col);
		
	void add_row();
};
















}
=======
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

>>>>>>> 0902d78024232a5ec8e9cd8246f5b686ad75716d
