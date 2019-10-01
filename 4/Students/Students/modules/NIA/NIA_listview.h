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
	LVHeaderItem* add_in_header(LVHeaderItem* item);
	
	LVRow* add_row(LVRow* row);
};


