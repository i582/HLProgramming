#include "NIA_statusbar.h"

StatusBar::StatusBar(HWND parent, int id)
{
	this->parent = parent;
	this->id = id;
	this->count_part = 0;
	this->init();
}

void StatusBar::init()
{

	hwnd = CreateWindow(STATUSCLASSNAME, L"",
		WS_CHILD | WS_VISIBLE | WS_BORDER | CCS_BOTTOM | SBT_TOOLTIPS,
		0, 0, 0, 0, parent, (HMENU)id, nullptr, nullptr);

	set_parts(1, { -1 });
}

void StatusBar::set_parts(int count, vector<int> widths)
{
	if (widths.size() < count || count > 255)
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

void StatusBar::set_text(int part, wstring text)
{
	if (part >= this->count_part)
		return;

	SendMessage(hwnd, SB_SETTEXT, part, (LPARAM)text.c_str());

}

void StatusBar::set_tooltip(int part, wstring text)
{
	if (part >= this->count_part)
		return;

	SendMessage(hwnd, SB_SETTIPTEXT, part, (LPARAM)text.c_str());
}

void StatusBar::set_icon(int part, HICON icon)
{
	if (part >= this->count_part)
		return;

	SendMessage(hwnd, SB_SETICON, part, (LPARAM)icon);
}

void StatusBar::setup()
{
}

HWND StatusBar::get_hwnd()
{
	return hwnd;
}
