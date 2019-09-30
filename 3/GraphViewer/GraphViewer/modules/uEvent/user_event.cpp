#include "user_event.h"

UEvent::UEvent(Caller caller, Recipient recipient, Action action, Uint32 object_id, void* data, void* caller_data)
{
	this->common.caller = caller;
	this->common.recipient = recipient;
	this->common.action = action;
	this->common.object_id = object_id;
	this->common.data = data;
	this->common.caller_data = caller_data;
}
