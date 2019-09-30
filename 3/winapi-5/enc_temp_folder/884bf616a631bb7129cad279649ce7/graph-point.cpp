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
	NIA_FillEllipse(parent->get_canvas()->get_hdc(), coord_point, radius, color);

}
