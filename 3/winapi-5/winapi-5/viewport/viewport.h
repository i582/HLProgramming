#pragma once
#include "../lib/lib.h"
#include "../canvas/canvas.h"

#include "../object/object.h"

class Viewport : public Object
{
private:
	Canvas* canvas;

	int scale;

public:
	Viewport(HWND hwnd, HDC parent_hdc, Rect size) : Object(hwnd, parent_hdc, size) { this->setup(); };


public:
	void render();
	void setup();

public: _set
	void shift_scale(int dx);

public: _get
	int get_scale();
	Canvas* get_canvas();

public: _event
	void mouseButtonDown(Event* e);
	void mouseButtonUp(Event* e);
	void mouseMotion(Event* e);
	void mouseWheel(Event* e);

public:
	void notify(UEvent* ue);
};
