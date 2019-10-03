#pragma once

#include "NIA_main.h"
#include "NIA_rect.h"
#include "NIA_circle.h"

struct Point
{
	int x, y;

	Point() : x(0), y(0) {};
	Point(int x, int y) : x(x), y(y) {};
	Point(POINT& p) : x(p.x), y(p.y) {};
	Point(POINT* p) : x(p->x), y(p->y) {};
	Point operator-(const Point& point) { return Point(this->x - point.x, this->y - point.y); }
	Point operator+(const Point& point) { return Point(this->x + point.x, this->y + point.y); }
	Point operator*(const int x) { return Point(this->x * x, this->y * x); }
	Point operator*(const double x) { return Point((int)(this->x * x), (int)(this->y * x)); }
	Point operator/(const int x) { return Point((int)(this->x / x), (int)(this->y / x)); }
	Point operator/(const double x) { return Point((int)(this->x / x), (int)(this->y / x)); }

	bool operator==(const Point point) { return (this->x == point.x) && (this->y == point.y); }

	POINT to_point() { POINT p; p.x = x, p.y = y; return p; }

	bool in(Rect& r) { return PtInRect(&r.to_rect(), { x, y }); };
	bool in(Rect* r) { return PtInRect(&r->to_rect(), { x, y }); };
	bool in(Point& c, int r) { return (x - c.x) * (x - c.x) + (y - c.y) * (y - c.y) <= r * r; };
	bool in(const Circle& c) { return (x - c.x) * (x - c.x) + (y - c.y) * (y - c.y) <= c.r * c.r; };
	bool in(const Circle* c) { return (x - c->x) * (x - c->x) + (y - c->y) * (y - c->y) <= c->r * c->r; };


	static vector<Point>* to_points(vector<int>* points);
};

