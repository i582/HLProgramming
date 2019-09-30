#pragma once

#include "../lib/lib.h"

#include "graph-point.h"

#include "vector"
#include "string"
using namespace std;

class Canvas;

class Graph
{
private:
	vector <Point> points;

	vector <GraphPoint*> graph_points;

	HexColor point_color;
	HexColor line_color;

	int point_size;

	double scale;

	Canvas* parent;

public:
	Graph(Canvas* parent);
	~Graph();

public:
	void load_from_file(string path);
	void render();

public: _set
	void set_point_color(HexColor color);
	void set_point_size(int size);
	void set_line_color(HexColor color);

	void set_scale(double scale);

	void set_points(vector<Point> points);

public: _get
	int get_scale();
	vector <Point>* get_points();
	Point get_point(int point_id);

	string* get_point_str();
	
	Canvas* const get_canvas();

public: _state
	Graph* save_state();
	void restore_state(Graph* saved_state);

public:
	void delete_point(int id);
	void add_point(Point p);
};

