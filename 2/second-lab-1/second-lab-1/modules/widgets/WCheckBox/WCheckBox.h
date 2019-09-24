#pragma once

#include "../base/widget.h"

enum CheckboxStyles
{
	SIMPLE = 0x00000001,
	EYE,
	BLOCK
};

class WCheckbox : public Widget
{

protected:
	SDL_Texture* image_select;
	SDL_Texture* image_unselect;

	int style;

public:
	WCheckbox(Window* parent, SDL_Texture* parent_target, SDL_Rect size, int widget_id, string text, TTF_Font* font = Font::open(OPEN_SANS_REG, 12), int style = SIMPLE, bool checked = false);
	~WCheckbox();

protected:
	void setup();

public:
	virtual void render();

	virtual void mouseButtonDown(SDL_Event* e);
	virtual void mouseButtonUp(SDL_Event* e);
	virtual void mouseMotion(SDL_Event* e) {};
	virtual void keyDown(SDL_Event* e) {};
	virtual void keyUp(SDL_Event* e) {};
	virtual void textInput(SDL_Event* e) {};

	void notify(UEvent* ue);
};

