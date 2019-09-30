#include "DeletePointCommand.h"
#include "../../graph/graph.h"

DeletePointCommand::DeletePointCommand(Graph* graph, int point_id)
{
	this->graph = graph;
	this->point_id = point_id;

	this->saved_state = new Graph(nullptr);
}

void DeletePointCommand::execute()
{
	this->saved_state->restore_state(graph->save_state());
	graph->delete_point(point_id);
}

void DeletePointCommand::unexecute()
{
	graph->restore_state(saved_state);
}
