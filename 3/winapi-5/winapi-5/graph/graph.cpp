#include "graph.h"

#include "../canvas/canvas.h"

Graph::Graph(Canvas* parent)
{
	this->points = {};
	this->parent = parent;

	this->point_color = 0xffffff;
	this->line_color = 0xffffff;


	this->scale = 10;
	this->point_size = 3;

	this->points = { {10, 5}, {10, 10}, {20, 10}, {30, 10}, {20, 20} };
}

Graph::~Graph()
{

}

void Graph::load_from_file(string path)
{
}

void Graph::set_point_color(HexColor color)
{
	this->point_color = color;
}

void Graph::set_point_size(int size)
{
	this->point_size = size;
}

void Graph::set_line_color(HexColor color)
{
	this->line_color = color;
}

void Graph::set_scale(int scale)
{
	this->scale = scale;
}

int Graph::get_scale()
{
	return scale;
}

_get vector<Point>* Graph::get_points()
{
	return &points;
}

void Graph::delete_point(int id)
{
	points.erase(points.begin() + id);
}

void Graph::add_point(Point p)
{
	points.push_back(p);
}

void Graph::render()
{

	for (auto& point : points)
	{
		Point coord_point = { point.x * scale, point.y * scale };
		coord_point = parent->coord_adjust_by_start_point(coord_point);
		NIA_FillEllipse(parent->get_hdc(), coord_point, point_size, point_color);
	}

}
