#include "graph.h"

#include "../canvas/canvas.h"

Graph::Graph(Canvas* parent)
{
	this->points = {};
	this->parent = parent;

	this->point_color = 0xffffff;
	this->line_color = 0xffffff;


	this->scale = 1;
	this->point_size = 3;

	this->points = { {10, 5}, {10, 10}, {20, 10}, {30, 10}, {20, 20} };
	this->graph_points = {};

	this->graph_points.push_back(new GraphPoint(this, { 8, 8 }, 0xFF00FF, 6));
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

void Graph::set_scale(double scale)
{
	this->scale = scale;
}

void Graph::set_points(vector<Point> points)
{
	this->points = points;
}

int Graph::get_scale()
{
	return scale;
}

_get vector<Point>* Graph::get_points()
{
	return &points;
}

Point Graph::get_point(int point_id)
{
	return points.at(point_id);
}

string* Graph::get_point_str()
{
	string* str = new string();

	for (auto& point : points)
	{
		*str += to_string(point.x).substr(0, to_string(point.x).find('.') + 2) + " "
			+ to_string(point.y).substr(0, to_string(point.y).find('.') + 2) + "\r\n";
	}
	*str += "\0";
	return str;
}

Canvas* const Graph::get_canvas()
{
	return parent;
}

_state Graph* Graph::save_state()
{
	return this;
}

void Graph::restore_state(Graph* saved_state)
{
	this->points = saved_state->points;
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
	for (auto& graph_point : graph_points)
	{
		graph_point->render();
	}


	for (auto& point : points)
	{
		Point coord_point = { point.x * scale, point.y * scale };
		coord_point = parent->coord_adjust_by_start_point(coord_point);
		NIA_FillEllipse(parent->get_hdc(), coord_point, point_size, point_color);
	}

}
