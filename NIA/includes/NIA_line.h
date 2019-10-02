#pragma once

#include "NIA_main.h"
#include "NIA_point.h"

struct Line
{
	int x1, y1;
	int x2, y2;


	Line(int x1, int y1, int x2, int y2) : x1(x1), y1(y1), x2(x2), y2(y2) {};
	Line(Point p1, Point p2) : x1(p1.x), y1(p1.y), x2(p2.x), y2(p2.y) {};
};