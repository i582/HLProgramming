#pragma once

#include "NIA.h"
#include "NIA_point.h"

namespace NIA
{


class Mouse
{
public:
	static Mouse* instance;
	static Mouse* get_instance();

private:
	Mouse();

private:
	Point _position;
	Point _position_prev;
	Point _delta;

public:
	static Point position(Event* e);
	static Point delta(Event* e);

	static Point position(HDC hdc);
	static Point delta(HDC hdc);

private:
	static void __getposition(Event* e, Point* p);
	static void __getposition(HDC hdc, Point* p);
};


}
