#include "table.h"

Nia::Table::Table(HWND parent, Rect size)
{
	this->parent = parent;
	this->hwnd = nullptr;
	this->size = size;
}

HWND Nia::Table::getHwnd()
{
	return hwnd;
}
