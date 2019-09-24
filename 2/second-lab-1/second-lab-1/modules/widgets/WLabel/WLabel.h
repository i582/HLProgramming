#pragma once

#include "../base/widget.h"


class WLabel : public Widget
{

public:
	WLabel(Window* parent, SDL_Texture* parent_target, string text, SDL_Rect size, int widget_id, TTF_Font* font,
		SDL_Color text_color = Color::white, int align = ALIGN_LEFT_WITHOUT_PADDING);


public:
	void render();

	// events
	void mouseButtonDown(SDL_Event* e);
	void mouseButtonUp(SDL_Event* e);
	void mouseMotion(SDL_Event* e) {};
	void keyDown(SDL_Event* e) {};
	void keyUp(SDL_Event* e) {};
	void textInput(SDL_Event* e) {};

	void notify(UEvent* ue);
};
