#pragma once

#include "windows.h"
#include "../lib/lib.h"
#include "../user_event/user_event.h"

class Object
{
protected:
	HWND hwnd;
	HDC parent_hdc;
	HDC hdc;
	HBITMAP bitmap;
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
	void shift_position(int dx, int dy);

public: _get
	Rect get_size();
	HDC get_hdc();
	HDC get_parent_hdc();
	HBITMAP get_bitmap();
	
public:
	bool on_hover(int x, int y);
	bool on_hover(Point p);
	void mouse_coord_adjust(Point* p);

public: _event
	virtual void mouseButtonDown(Event* e) = 0;
	virtual void mouseButtonUp(Event* e) = 0;
	virtual void mouseMotion(Event* e) = 0;
	virtual void mouseWheel(Event* e) = 0;


public:
	virtual void notify(UEvent* ue) = 0;
};
