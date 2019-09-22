#pragma once
#include "../lib/lib.h"
#include "../graph/graph.h"

#include "../object/object.h"

class Viewport;

class Canvas : public Object
{
private:
	Viewport* parent;
	Graph* graph;
	Point start_point;

public:
	Canvas(HWND hwnd, HDC parent_hdc, Viewport* parent, Rect size);

public:
	void render();
	void setup();

	Point coord_adjust_by_start_point(Point p);
	Point back_coord_adjust_by_start_point(Point p);

private:
	void draw_left_branch(const double& each, const int& scale_size, const HFONT& hFont);
	void draw_right_branch(const double& each, const int& scale_size, const HFONT& hFont);
	void draw_bottom_branch(const double& each, const int& scale_size, const HFONT& hFont);
	void draw_top_branch(const double& each, const int& scale_size, const HFONT& hFont);


public: _set
	void set_start_point(Point coord);
	void shift_start_point(int dx, int dy);

public: _get
	Point get_start_point();

public: _event
	void mouseButtonDown(Event* e);
	void mouseButtonUp(Event* e);
	void mouseMotion(Event* e);
	void mouseWheel(Event* e);

public:
	void notify(UEvent* ue);
};
