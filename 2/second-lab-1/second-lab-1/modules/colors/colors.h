#pragma once

#include "../sdl/sdl_headers.h"

typedef unsigned int Hex;

class Color
{
public:
	static SDL_Color white;
	static SDL_Color black;

	static SDL_Color background;

	static SDL_Color widget_background;
	static SDL_Color widget_background_blocked;
	static SDL_Color widget_background_click;
	static SDL_Color widget_background_focus;

	static SDL_Color widget_border;
	static SDL_Color widget_border_click;


	static SDL_Color widget_list_hover;
	static SDL_Color widget_text;

	static SDL_Color window_border;

public:
	static SDL_Color color(Hex hex);
	static SDL_Color color(unsigned char r, unsigned char g, unsigned char b, unsigned char a = 0xff);
};