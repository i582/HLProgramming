#pragma once


#include "../lib/lib.h"

#include "vector"
#include "string"
using namespace std;

class Graph;

class GraphPoint
{
private:
	Graph* parent;

	Point point;
	HexColor color;
	int radius;

	bool selected;

public:
	GraphPoint(Graph* parent, Point point, HexColor color, int radius = 3);

public:
	void render();



};
