#pragma once

#include "NIA.h"
#include "NIA_main.h"
#include "NIA_error.h"

class StatusBar
{
private:
	int id;
	HWND parent;
	HWND hwnd;

	int count_part;

public:
	StatusBar(HWND parent, int id);

private:
	void init();


public:
	void set_parts(int count, vector<int> widths);
	void set_text(int part, wstring text);
	void set_tooltip(int part, wstring text);
	void set_icon(int part, HICON icon);

public:
	void setup();
	HWND get_hwnd();

};


#define InitStatusBarEvent(msg, status_bar) \
\
switch(msg)\
{\
\
case WM_CREATE:\
{\
	status_bar->setup();\
	return 0;\
} \
\
case WM_SIZE: \
{\
	SendMessage(status_bar->get_hwnd(), WM_SIZE, 0, 0);\
	break;\
}\
\
}