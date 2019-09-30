#pragma once

#include "../command.h"

class Graph;

class AddPointCommand : public Command
{
private:
	Graph* graph;
	Point point;

private:
	Graph* saved_state;

public:
	AddPointCommand(Graph* graph, Point p);

public:
	void execute();
	void unexecute();
};

