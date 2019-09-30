#pragma once

#include "../object.h"
#include "../../graph/graph.h"

class Viewport : public Object
{
private:
	double scale;
	Graph* graph;

public:
	Viewport(HWND hwnd, HDC parent_hdc, Rect size);


public:
	void render();
	void setup();

public: _set
	void shift_scale(double dx);

public: _get
	double get_scale();
	Graph* const get_graph();

public: _event
	void mouseButtonDown(Event* e);
	void mouseButtonUp(Event* e);
	void mouseMotion(Event* e);
	void mouseWheel(Event* e);

private:
	void draw_left_branch(const double& each, const double& scale_size, const HFONT& hFont);
	void draw_right_branch(const double& each, const double& scale_size, const HFONT& hFont);
	void draw_bottom_branch(const double& each, const double& scale_size, const HFONT& hFont);
	void draw_top_branch(const double& each, const double& scale_size, const HFONT& hFont);

	double each_by_scale(double scale);
	double delta_by_scale(double scale);

public:
	//void notify(UEvent* ue);
};
