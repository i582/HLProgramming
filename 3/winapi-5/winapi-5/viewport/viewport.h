#pragma once
#include "../lib/lib.h"
#include "../canvas/canvas.h"

#include "../object/object.h"

class Viewport : public Object
{
private:
	Canvas* canvas;
	HFONT font;
	double scale;

public:
	Viewport(HWND hwnd, HDC parent_hdc, Rect size) : Object(hwnd, parent_hdc, size) 
	{ 
		this->scale = 1;
		this->setup(); 
	};


public:
	void render();
	void setup();

public: _set
	void shift_scale(double dx);

public: _get
	double get_scale();
	Canvas* get_canvas();

public: _event
	void mouseButtonDown(Event* e);
	void mouseButtonUp(Event* e);
	void mouseMotion(Event* e);
	void mouseWheel(Event* e);

public:
	void notify(UEvent* ue);
};
