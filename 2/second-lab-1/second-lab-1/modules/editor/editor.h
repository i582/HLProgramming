#pragma once
#include "../sdl/sdl_headers.h"

#include "vector"
#include "iostream"

#include "../user_events/user_events.h"

#include "../window/main_window/main_window.h"

using namespace std;

enum WindowID
{
	WINDOW_NEW_DOCUMENT = 0,
	WINDOW_ONE,
	WINDOW_TWO
};

class Editor
{
public:
	static vector <UEvent*> u_events;
	static UEvent* push_event(UEvent* ue);

public:
	static Editor* get_instance();
	~Editor();

private:
	MainWindow* window_one;
	MainWindow* window_two;

	bool track_mouse_event_win1;
	bool track_mouse_event_win2;

	// singleton part
private:
	static Editor* instance;
	Editor();

private:
	bool running;
	SDL_Event e;

private:
	bool init();
	void setup();
	void update();
	void onEvent();
	void sendHandleUserEvent();
	void quit();

public:
	int run();

};
