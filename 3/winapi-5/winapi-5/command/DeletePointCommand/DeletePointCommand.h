#pragma once

#include "../command.h"

class Graph;

class DeletePointCommand : public Command
{
private:
	Graph* graph;
	int point_id;

private:
	Graph* saved_state;

public:
	DeletePointCommand(Graph* graph, int id);

public:
	void execute();
	void unexecute();
};
