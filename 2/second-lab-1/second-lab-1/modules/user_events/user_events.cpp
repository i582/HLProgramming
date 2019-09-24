#include "user_events.h"

UEvent::UEvent(Caller caller, Action action, Uint32 object_id, Uint32 win_id)
{
	this->common.caller = caller;
	this->common.action = action;
	this->common.object_id = object_id;
	this->common.win_id = win_id;

	this->menu.menu_id = object_id;
	this->menu.select_id = -1;
}

