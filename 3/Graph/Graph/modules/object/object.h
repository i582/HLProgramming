#pragma once

#include "NIA.h"

class Object
{
protected:
	HWND hwnd;
	HDC parent_hdc;
	HDC hdc;
	HBITMAP bitmap;
	HFONT font;

	Rect size;

	Point mouse;

public:
	Object(HWND hwnd, HDC parent_hdc, Rect size);

private:
	void init();

public:
	virtual void render() = 0;
	virtual void setup() = 0;

public: _set
	void shift_position(Point& delta);

public: _get
	Rect const get_size();
	HDC const get_hdc();
	HDC const get_parent_hdc();
	HBITMAP const get_bitmap();

public:
	bool on_hover(Point& p);
	void adjust(Point& p);

public: _event
	virtual void mouseButtonDown(Event* e) = 0;
	virtual void mouseButtonUp(Event* e) = 0;
	virtual void mouseMotion(Event* e) = 0;
	virtual void mouseWheel(Event* e) = 0;


public:
	//virtual void notify(UEvent* ue) = 0;
};
