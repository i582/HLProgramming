#pragma once


#include "NIA_main.h"
#include "NIA_rect.h"


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

private:
	void init();

public:
	void set_collumn_title(int col_id, wstring title);

public: _get
	HWND const get_hwnd();

public:
	ListViewHeaderCollumn* add_header_collumn(ListViewHeaderCollumn* col);
		
	void add_row();
};
















}