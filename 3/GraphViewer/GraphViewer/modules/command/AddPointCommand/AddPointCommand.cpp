//#include "AddPointCommand.h"
//#include "../../graph/graph.h"
//
//AddPointCommand::AddPointCommand(Graph* graph, Point p)
//{
//	this->graph = graph;
//	this->point = p;
//
//	this->saved_state = new Graph(nullptr);
//}
//
//void AddPointCommand::execute()
//{
//	this->saved_state->restore_state(graph->save_state());
//	graph->add_point(point);
//}
//
//void AddPointCommand::unexecute()
//{
//	graph->restore_state(saved_state);
//}
