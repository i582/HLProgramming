#pragma once

typedef unsigned int Uint32;

enum Caller
{
	C_APP, 
	C_GRAPH
};

enum Recipient
{
	R_APP,
	R_CANVAS,
	R_GRAPH
};

enum Action
{
	DELETE_POINT,
	ADD_POINT,
	SET_POINTS,
	GET_POINTS,
	SAVE_POINTS
};


struct CommonEvent
{
	Uint32 caller;
	Uint32 recipient;
	Uint32 action;
	Uint32 object_id;
	void* data;
	void* caller_data;
};

class UEvent
{
public:
	CommonEvent common;

public:
	UEvent(Caller caller, Recipient recipient, Action action, Uint32 object_id, void* data = nullptr, void* caller_data = nullptr);
	
};
