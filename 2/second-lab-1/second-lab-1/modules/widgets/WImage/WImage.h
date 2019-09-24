#pragma once

#include "../base/widget.h"

class WImage : public Widget
{
private:
	SDL_Texture* image;

public:
	WImage(Window* parent, SDL_Texture* parent_target, SDL_Texture* image, SDL_Rect size, int widget_id);
	~WImage();

public:
	void render();

	// events
	void mouseButtonDown(SDL_Event* e) {};
	void mouseButtonUp(SDL_Event* e) {};
	void mouseMotion(SDL_Event* e) {};
	void keyDown(SDL_Event* e) {};
	void keyUp(SDL_Event* e) {};
	void textInput(SDL_Event* e) {};

	void notify(UEvent* ue) {};
};
