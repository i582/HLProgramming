#pragma once

#include "../NIA/NIA.h"
#include "../u_event/user_event.h"

class Viewport;

class Graph
{
private:
	vector <Point2D> points;

	HexColor point_color;
	int point_size;

	Point start_point;

	Viewport* parent;

	Point mouse;

public:
	Graph(Viewport* parent);

public:
	void render();


public:
	size_t on_hover(Point& mouse);

	Point2D normalize(Point2D& point);
	Point normalize(Point& point);

public: _set
	void set_point_color(HexColor& color);
	void set_point_size(int size);

	void shift_start_position(Point& delta);
	void set_start_position(Point& start);
	void restore_start_point();
	void adjust_by_start(Point2D& p);
	void adjust_by_start(Point& p);
	void back_adjust_by_start(Point2D& p);
	void back_adjust_by_start(Point& p);

	void set_points(vector<Point2D>* points);

public: _get
	Point2D get_point(int point_id);
	Point get_start_point();

public: _state
	Graph* save_state();
	void restore_state(Graph* saved_state);

public:
	void delete_point(int id);
	void add_point(Point p);


public: _event
	void mouseButtonDown(Event* e);


public:
	void notify(UEvent* ue);
};

