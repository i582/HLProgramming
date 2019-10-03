#include "NIA_mouse.h"
using namespace NIA;

Mouse* Mouse::instance = nullptr;

Mouse* Mouse::get_instance()
{
	if (instance == nullptr)
		instance = new Mouse;

	return instance;
}

Mouse::Mouse()
{
	this->_position = { -1, -1 };
	this->_position_prev = { -1, -1 };
	this->_delta = { -1, -1 };
}

Point Mouse::position(Event* e)
{
	Mouse* mouse = Mouse::get_instance();

	POINT point;
	GetCursorPos(&point);
	ScreenToClient(e->hwnd, &point);
	mouse->_position = mouse->_position_prev = { point.x, point.y };

	return mouse->_position;
}

Point NIA::Mouse::delta(Event* e)
{
	Mouse* mouse = Mouse::get_instance();

	Point invalid = { -1, -1 };
	if (mouse->_position_prev == invalid)
		__getposition(e, &mouse->_position_prev);
	

	__getposition(e, &mouse->_position);

	Point delta = mouse->_position - mouse->_position_prev;
	__getposition(e, &mouse->_position_prev);
	return delta;
}

Point NIA::Mouse::position(HDC hdc)
{
	Mouse* mouse = Mouse::get_instance();

	POINT point;
	HWND hwnd = WindowFromDC(hdc);
	GetCursorPos(&point);
	ScreenToClient(hwnd, &point);

	mouse->_position = mouse->_position_prev = { point.x, point.y };

	return mouse->_position;
}

Point NIA::Mouse::delta(HDC hdc)
{
	Mouse* mouse = Mouse::get_instance();

	Point invalid = { -1, -1 };
	if (mouse->_position_prev == invalid)
		__getposition(hdc, &mouse->_position_prev);


	__getposition(hdc, &mouse->_position);

	Point delta = mouse->_position - mouse->_position_prev;
	__getposition(hdc, &mouse->_position_prev);
	return delta;
}

void NIA::Mouse::__getposition(Event* e, Point* p)
{
	POINT point;
	GetCursorPos(&point);
	ScreenToClient(e->hwnd, &point);
	*p = { point.x, point.y };
}

void NIA::Mouse::__getposition(HDC hdc, Point* p)
{
	POINT point;
	HWND hwnd = WindowFromDC(hdc);
	GetCursorPos(&point);
	ScreenToClient(hwnd, &point);
	*p = { point.x, point.y };
}
