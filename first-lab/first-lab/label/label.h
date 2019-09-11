#pragma once

#include "../sdl_headers/sdl_headers.h"


#include "iostream"
using namespace std;

class WLabel
{

private:
	SDL_Rect size;

	SDL_Texture* texture;

	SDL_Renderer* renderer;
	SDL_Texture* parent_target;


	//text
	SDL_Texture* text_texture;
	SDL_Rect text_rect;
	string text;
	TTF_Font* font;

public:
	WLabel(SDL_Renderer* renderer, SDL_Texture* parent_target, string text, SDL_Rect size, string path, int font_size);

private:
	void init();
	void render_text(string text, SDL_Rect place);

public:
	void render();

};
