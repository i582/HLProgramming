#include "graph.h"

#include "../object/viewport/viewport.h"

Graph::Graph(Viewport* parent)
{
	this->points = {};
	this->parent = parent;

	this->point_color = 0xffffff;
	this->point_size = 3;

	this->points = { {10, 5}, {10, 10}, {20, 10}, {30, 10}, {20, 20} };

	this->start_point = { parent->get_size().w / 2, parent->get_size().h / 2 };
}

size_t Graph::on_hover(Point& mouse)
{
	for (size_t i = 0; i < points.size(); i++)
	{
		auto& point = points.at(i);

		Point2D scale_point = normalize(point);

		Circle point_c(mouse.x, mouse.y, point_size);

		if (scale_point.in(point_c))
		{
			//App::push_event(new UEvent(C_GRAPH, R_CANVAS, DELETE_POINT, i));
			wstring text = L"Нажато на точку " + to_wstring(i);
			MessageBox(NULL, text.c_str(), L"Оповещение", MB_ICONINFORMATION);
			return i;
		}
	}

	return -1;
}

Point2D Graph::normalize(Point2D& point)
{
	Point2D scale_point = point * parent->get_scale();
	adjust_by_start(scale_point);
	return scale_point;
}

void Graph::set_point_color(HexColor& color)
{
	this->point_color = color;
}

void Graph::set_point_size(int size)
{
	this->point_size = size;
}

void Graph::shift_start_position(Point& delta)
{
	this->start_point = this->start_point + delta;
}

void Graph::set_start_position(Point& start)
{
	this->start_point = start;
}

void Graph::restore_start_point()
{
	this->start_point = { parent->get_size().w / 2, parent->get_size().h / 2 };
}

void Graph::adjust_by_start(Point2D& p)
{
	p.x = start_point.x + p.x;
	p.y = start_point.y - p.y;
}

void Graph::set_points(vector<Point2D>* points)
{
	this->points = *points;
}

Point2D Graph::get_point(int point_id)
{
	return points.at(point_id);
}

Point Graph::get_start_point()
{
	return start_point;
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

void Graph::mouseButtonDown(Event* e)
{
	NIA_GetCursorPosition(e, &mouse);
	parent->adjust(mouse);

	if (on_hover(mouse))
	{

	}
}

void Graph::render()
{
	for (auto& point : points)
	{
		Point2D scale_point = normalize(point);
		NIA_FillEllipse(parent->get_hdc(), scale_point.to_point(), point_size, point_color);
	}
}
