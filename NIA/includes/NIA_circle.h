#pragma once

#include "NIA_main.h"

struct Circle
{
	int x, y, r;

	Circle() : x(0), y(0), r(1) {}
	Circle(int x, int y, int r) : x(x), y(y), r(r) {}
};