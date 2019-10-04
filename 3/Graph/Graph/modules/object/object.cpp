#include "object.h"

Object::Object(HWND hwnd, HDC parent_hdc, Rect size)
{
	this->hwnd = hwnd;
	this->parent_hdc = parent_hdc;
	this->hdc = nullptr;
	this->bitmap = nullptr;
	this->font = nullptr;
	this->size = size;

	this->init();
}

void Object::init()
{
	hdc = CreateCompatibleDC(parent_hdc);
	bitmap = CreateCompatibleBitmap(parent_hdc, size.w, size.h);
	NIA::Render::setCurrentBitmap(hdc, bitmap);
}

void Object::adjust(Point& p)
{
	p.x -= size.x;
	p.y -= size.y;
}

void Object::shift_position(Point& delta)
{
	size.x += delta.x;
	size.y += delta.y;
}

Rect const Object::get_size()
{
	return size;
}

HDC const Object::get_hdc()
{
	return hdc;
}

HDC const Object::get_parent_hdc()
{
	return parent_hdc;
}

HBITMAP const Object::get_bitmap()
{
	return bitmap;
}

bool Object::on_hover(Point& p)
{
	return p.in(size);
}
