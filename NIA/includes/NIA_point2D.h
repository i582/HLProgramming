#pragma once

#include "NIA_main.h"
#include "NIA_rect.h"
#include "NIA_circle.h"

struct Point2D
{
	double x, y;

	Point2D() : x(0), y(0) {};
	Point2D(double x, double y) : x(x), y(y) {};
	Point2D(POINT& p) : x((double)p.x), y((double)p.y) {};
	Point2D(POINT* p) : x((double)p->x), y((double)p->y) {};
	Point2D(Point& p) : x((double)p.x), y((double)p.y) {};
	Point2D(Point* p) : x((double)p->x), y((double)p->y) {};
	Point2D operator-(const Point2D& point) { return Point2D(this->x - point.x, this->y - point.y); }
	Point2D operator+(const Point2D& point) { return Point2D(this->x + point.x, this->y + point.y); }
	Point2D operator*(const int x) { return Point2D(this->x * x, this->y * x); }
	Point2D operator*(const double x) { return Point2D(this->x * x, this->y * x); }
	Point2D operator/(const int x) { return Point2D(this->x / x, this->y / x); }
	Point2D operator/(const double x) { return Point2D(this->x / x, this->y / x); }

	bool in(Rect& r) { return PtInRect(&r.to_rect(), { (int)x, (int)y }); };
	bool in(Rect* r) { return PtInRect(&r->to_rect(), { (int)x, (int)y }); };
	bool in(const Circle& c) { return (long)((x - (int)c.x) * (x - (int)c.x) + (y - (int)c.y) * (y - (int)c.y)) <= (long)(c.r * c.r); };
	bool in(const Circle* c) { return (long)((x - (int)c->x) * (x - (int)c->x) + (y - (int)c->y) * (y - (int)c->y)) <= (long)(c->r * c->r); };

	Point to_point();

	static vector<Point2D>* to_points(vector<double>* points);
};

