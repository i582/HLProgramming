#pragma once

#include "winlib_main.h"

#include "vector"
#include "string"

namespace winlib
{

using std::vector;
using std::string;

class StatusBar
{
private:
	size_t id;
	HWND parent;
	HWND hwnd;

	size_t count_part;

public:
	StatusBar(HWND parent, size_t id);

private:
	void init();

public:
	void setParts(size_t count, vector<int> widths);
	void setText(size_t part, string text);
	void setIcon(size_t part, HICON icon);

public:
	void setup();
	HWND getHwnd();

};

}