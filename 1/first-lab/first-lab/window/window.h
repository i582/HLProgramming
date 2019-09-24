#pragma once

#include "../sdl_headers/sdl_headers.h"


#include "iostream"
using namespace std;

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
};
