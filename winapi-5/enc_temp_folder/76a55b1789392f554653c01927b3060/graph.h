#pragma once

#include "../lib/lib.h"

#include "vector"
#include "string"
using namespace std;

class Canvas;

class Graph
{
private:
	vector <Point> points;

	HexColor point_color;
	HexColor line_color;

	int point_size;

	int scale;

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

	void set_scale(int scale);

public: _get
	int get_scale();
	vector <Point>* get_points();
	
public:
	void delete_point(int id);
	void add_point(Point p);
};

