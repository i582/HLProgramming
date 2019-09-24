#pragma once
#include "../sdl/sdl_headers.h"

#include "../colors/colors.h"
#include "../font/font.h"

#include "../user_events/user_events.h"


#include "../widgets/base/widget.h"

#include "vector"
#include "iostream"
using namespace std;

class Editor;

class Window
{
protected:
	SDL_Rect size;
	string title;

	Uint32 flags;

	SDL_Window* window;
	SDL_Renderer* renderer;

	SDL_Point mouse;

	bool display;

	int window_id;

	vector <Widget*> widgets;

public:
	Window(string title, SDL_Rect size, Uint32 flags);
	~Window();

public:
	bool init();
	virtual void setup() = 0;
	virtual void update() = 0;

	void show();
	void hide();
	bool is_show();

	void close();

	SDL_Rect get_size();
	SDL_Renderer* get_renderer();
	SDL_Window* get_window();
	vector <Widget*>* get_widgets();
	int get_window_id();

	Widget* const createWidget(Widget* el);

	virtual void mouseButtonDown(SDL_Event* e) = 0;
	virtual void mouseButtonUp(SDL_Event* e) = 0;
	virtual void mouseMotion(SDL_Event* e) = 0;
	virtual void mouseWheel(SDL_Event* e) = 0;
	virtual void keyDown(SDL_Event* e) = 0;
	virtual void keyUp(SDL_Event* e) = 0;
	virtual void textInput(SDL_Event* e) = 0;

	virtual void handleUserEvents(UEvent* ue) = 0;

	// small 
	int SDL_SetRenderColor(SDL_Renderer* renderer, SDL_Color& color);
};
