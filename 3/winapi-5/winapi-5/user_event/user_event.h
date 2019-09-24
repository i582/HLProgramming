#pragma once

typedef unsigned int Uint32;

enum Caller
{
	GRAPH
};

enum Recipient
{
	CANVAS
};

enum Action
{
	DELETE_POINT,
	ADD_POINT
};


struct CommonEvent
{
	Uint32 caller;
	Uint32 recipient;
	Uint32 action;
	Uint32 object_id;
	void* data;
};

class UEvent
{
public:
	CommonEvent common;

public:
	UEvent(Caller caller, Recipient recipient, Action action, Uint32 object_id, void* data = nullptr);
	
};
