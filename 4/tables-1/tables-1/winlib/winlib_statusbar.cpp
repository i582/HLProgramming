#include "winlib_statusbar.h"


winlib::StatusBar::StatusBar(HWND parent, size_t id)
{
	this->parent = parent;
	this->id = id;
	this->count_part = 0;
	this->init();
}

void winlib::StatusBar::init()
{
	hwnd = CreateWindow(STATUSCLASSNAME, "",
		WS_CHILD | WS_VISIBLE | WS_BORDER | CCS_BOTTOM | SBT_TOOLTIPS,
		0, 0, 0, 0, parent, (HMENU)id, nullptr, nullptr);

	setParts(1, { 0 });
}

void winlib::StatusBar::setParts(size_t count, vector<int> widths)
{
	if (widths.size() != count || count > 255)
		return;

	int shift = 0;

	int* parts = new int[count];

	for (size_t i = 0; i < count; i++)
	{
		parts[i] = widths.at(i) + shift;
		shift += widths.at(i);
	}


	SendMessage(hwnd, SB_SETPARTS, count, (LPARAM)parts);

	this->count_part = count;

	delete[] parts;
}

void winlib::StatusBar::setText(size_t part, string text)
{
	if (part >= this->count_part)
		return;

	SendMessage(hwnd, SB_SETTEXT, part, (LPARAM)text.c_str());
}


void winlib::StatusBar::setIcon(size_t part, HICON icon)
{
	if (part >= this->count_part)
		return;

	SendMessage(hwnd, SB_SETICON, part, (LPARAM)icon);
}

HWND winlib::StatusBar::getHwnd()
{
	return hwnd;
}
