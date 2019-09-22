#pragma once

typedef unsigned int Uint32;

enum Caller
{
	WINDOW = 0x000ffff,
	BUTTON = 0x00000000,
	MENU,
	CHECKBOX,
	RADIOBUTTON,
	TOOL,
};

enum Action
{
	BUTTON_PRESSED = 0x00000000,
	BUTTON_RELEASED,


	MENU_OPEN = 0x00000010,
	MENU_CLOSE,
	MENU_SELECT,

	CHECKBOX_CHECKED = 0x00000020,
	CHECKBOX_UNCHECKED,

	RADIOBUTTON_CHECKED = 0x00000030,

	TOOL_SELECTED = 0x00000040,

	WINDOW_MOUSEMOTION = 0x00001000
};


enum SystemAction
{
	SYSTEM_EXIT = 0xFFFFFF0,
	SYSTEM_COLLAPSE,
	SYSTEM_EXPAND
};

struct CommonEvent
{
	Uint32 caller;
	Uint32 action;
	Uint32 object_id;
	Uint32 win_id;
};

struct MenuEvent
{
	Uint32 menu_id;
	Uint32 select_id;
};

class UEvent
{
public:
	CommonEvent common;
	MenuEvent menu;

public:
	/*
	 * simple
	 */
	UEvent(Caller caller, Action action, Uint32 object_id, Uint32 win_id);

	

};