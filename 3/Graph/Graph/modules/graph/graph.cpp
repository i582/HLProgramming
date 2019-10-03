#include "graph.h"

#include "../object/viewport/viewport.h"
#include "../app/app.h"

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

Point Graph::normalize(Point& point)
{
	Point scale_point = point;
	adjust_by_start(scale_point);
	return scale_point * parent->get_scale();
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

void Graph::adjust_by_start(Point& p)
{
	p.x = p.x - start_point.x;
	p.y = start_point.y - p.y;
}

void Graph::back_adjust_by_start(Point2D& p)
{
	p.x = p.x - start_point.x;
	p.y = start_point.y - p.y;
}

void Graph::back_adjust_by_start(Point& p)
{
	p.x = p.x - start_point.x;
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
	mouse = NIA::Mouse::position(e);
	parent->adjust(mouse);

	double scale = parent->get_scale();
	int point_hover = -1;

	if ((point_hover = on_hover(mouse)) != -1)
	{
		wstring text = L"Нажато на точку " + to_wstring(point_hover);
		MessageBox(NULL, text.c_str(), L"Оповещение", MB_ICONINFORMATION);
		App::push_event(new UEvent(C_GRAPH, R_CANVAS, DELETE_POINT, point_hover));
	}
	else
	{
		Point* event_mouse_point = new Point;
		this->back_adjust_by_start(mouse);
		mouse = mouse / scale;
		*event_mouse_point = mouse;

		App::push_event(new UEvent(C_GRAPH, R_CANVAS, ADD_POINT, 0, (void*)event_mouse_point));
	}
}

void Graph::notify(UEvent* ue)
{
	if (ue->common.action == DELETE_POINT)
	{
		//App::push_command(new DeletePointCommand(graph, ue->common.object_id));
	}
	else if (ue->common.action == ADD_POINT)
	{
		//Point* p = (Point*)ue->common.data;
		//App::push_command(new AddPointCommand(graph, *p));
	}
	else if (ue->common.action == SET_POINTS)
	{
		vector<Point2D>* data = (vector<Point2D>*)ue->common.data;
		this->set_points(data);
		//set_start_point({ size.w / 2., size.h / 2. });
	}
	else if (ue->common.action == GET_POINTS)
	{
		string* str = new string;
		*str = join(to_string(&points), "\n");

		App::push_event(new UEvent(C_GRAPH, R_APP, SAVE_POINTS, -1, (void*)str));
	}
}

void Graph::render()
{
	for (auto& point : points)
	{
		Point2D scale_point = normalize(point);
		NIA::Draw::fillEllipse(parent->get_hdc(), scale_point.to_point(), point_size, point_color);
	}
}

