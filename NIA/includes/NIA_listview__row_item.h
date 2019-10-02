#pragma once

#include "NIA_main.h"
#include "NIA_rect.h"

class LVRow;

class LVItem
{
private:
	int x;
	int y;

	LVRow* parent;
	HWND hwnd;

	wstring text;

public:
	LVItem(LVRow* parent, wstring text);

public:
	friend LVRow;

public:
	void set_text(wstring text);

};
