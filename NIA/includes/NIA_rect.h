#pragma once

#include "NIA_main.h"

struct Rect
{
	int x, y;
	int w, h;

	Rect() : x(0), y(0), w(1), h(1) {};
	Rect(int x, int y, int w, int h) : x(x), y(y), w(w), h(h) {};

	RECT to_rect() { return { x, y, x + w, y + h }; }
};
