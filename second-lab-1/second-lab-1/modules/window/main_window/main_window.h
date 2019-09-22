#pragma once

#include "../window.h"


#include "../../widgets/WLabel/WLabel.h"
#include "../../widgets/WButton/WButton.h"


enum WidgetsID
{
	WIDGET_ICON
};

class MainWindow : public Window
{
private:
	Widget* focus_element;

	bool track_mouse_event;

public:
	MainWindow(string title, SDL_Rect sizes, Uint32 flags);

public:
	void setup();
	void update();

	bool is_track_mouse_event();

	// events
	void mouseButtonDown(SDL_Event* e);
	void mouseButtonUp(SDL_Event* e);
	void mouseMotion(SDL_Event* e);
	void mouseWheel(SDL_Event* e);
	void keyDown(SDL_Event* e);
	void keyUp(SDL_Event* e);
	void textInput(SDL_Event* e);

	void handleUserEvents(UEvent* ue);

callbacks:
	bool _callback button1_click(UEvent* ue, Window* parent);

};
