#include "object.h"

Object::Object(HWND hwnd, HDC parent_hdc, Rect size)
{
	this->hwnd = hwnd;
	this->parent_hdc = parent_hdc;
	this->size = size;

	this->init();
}

void Object::init()
{
	hdc = CreateCompatibleDC(parent_hdc);
	bitmap = CreateCompatibleBitmap(parent_hdc, size.w, size.h);
	NIA_SetHdcBitmap(hdc, bitmap);
}

void Object::mouse_coord_adjust(Point* p)
{
	p->x -= size.x;
	p->y -= size.y;
}

void Object::shift_position(int dx, int dy)
{
	size.x += dx;
	size.y += dy;
}

Rect Object::get_size()
{
	return size;
}

HDC Object::get_hdc()
{
	return hdc;
}

HDC Object::get_parent_hdc()
{
	return parent_hdc;
}

HBITMAP Object::get_bitmap()
{
	return bitmap;
}

bool Object::on_hover(int x, int y)
{
	return NIA_PointInRect({ x, y }, &(size.to_rect()));
}

bool Object::on_hover(Point p)
{
	return on_hover(p.x, p.y);
}
