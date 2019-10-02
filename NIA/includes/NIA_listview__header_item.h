#pragma once

#include "NIA_main.h"
#include "NIA_rect.h"

class LView;

class LVHeaderItem
{
private:
	int id;
	int width;
	bool is_fixed;

	LView* parent;
	HWND hwnd;

	wstring title;
	LVAlign align;


public:
	LVHeaderItem(wstring title, int width);

public:
	friend LView;

private:
	bool init();
	void set_id(int id);

public:


};
