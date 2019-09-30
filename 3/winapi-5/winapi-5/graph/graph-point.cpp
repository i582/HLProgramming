#include "graph-point.h"
#include "graph.h"
#include "../canvas/canvas.h"

GraphPoint::GraphPoint(Graph* parent, Point point, HexColor color, int radius)
{
	this->parent = parent;
	this->point = point;
	this->color = color;
	this->radius = radius;
}

void GraphPoint::render()
{
	
	Point coord_point = { point.x * parent->get_scale(), point.y * parent->get_scale() };
	coord_point = parent->get_canvas()->coord_adjust_by_start_point(coord_point);

	

	if (selected)
	{
		NIA_FillEllipse(parent->get_canvas()->get_hdc(), coord_point, radius, color, 0xff0000, 2);
	}
	else
	{
		NIA_FillEllipse(parent->get_canvas()->get_hdc(), coord_point, radius, color);
	}
	

}

void GraphPoint::select()
{
	this->selected = true;
}

void GraphPoint::unselect()
{
	this->selected = false;
}

bool GraphPoint::is_selected()
{
	return this->selected;
}
