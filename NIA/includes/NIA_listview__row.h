#pragma once

#include "NIA_main.h"
#include "NIA.h"
#include "NIA_rect.h"

#include "NIA_listview__row_item.h"

class LView;

class LVRow
{
private:
	int id;
	
	int max_count;

	LView* parent;
	HWND hwnd;

	vector <LVItem* > items;

public:
	LVRow(LView* parent);

public:
	friend LView;
	friend LVItem;

public:
	LVItem* at(unsigned int index);
	LVItem* operator[](unsigned int index);

public:
	LVItem* add(LVItem* item);

};
