#pragma once

#include "../../sdl/sdl_headers.h"
#include "string"

#include "../../colors/colors.h"
#include "../../font/font.h"
#include "../../user_events/user_events.h"

using namespace std;

#define callbacks public
#define _callback static

#define	_button(id) (WButton*)(parent->get_widgets()->at(id))
#define _checkbox(id) (WCheckbox*)(parent->get_widgets()->at(id))
#define _label(id) (WLabel*)(parent->get_widgets()->at(id))

enum Align
{
	ALIGN_LEFT = 0x0000001,
	ALIGN_LEFT_WITHOUT_PADDING,
	ALIGN_CENTER,
	ALIGN_RIGHT,
	ALIGN_USER,

	ALIGN_TOP = 0x0000010
};

class Window;

class Widget
{
protected:
	int widget_id;

	SDL_Rect size;

	SDL_Texture* texture;

	SDL_Renderer* renderer;
	SDL_Texture* parent_target;

	Window* parent;

	// colors
	SDL_Color background;
	SDL_Color text_color;

	// mouse position
	SDL_Point mouse;

	// text
	SDL_Texture* text_texture;
	SDL_Rect text_rect;
	string text;
	TTF_Font* font;
	int align;

	//
	bool need_forced_update;
	bool need_forced_text_update;

	// states
	bool blocked;
	bool display;
	bool click;
	bool focused;
	bool hovered;
	bool checked;

	bool (*callback)(UEvent* ue, Window* parent);

	int window_id;

public:
	Widget(Window* parent, SDL_Texture* parent_target, SDL_Rect size, string text, int widget_id);
	virtual ~Widget();

public:
	// set
	Widget* set_text(string text);
	Widget* set_background_color(SDL_Color color);
	Widget* set_text_color(SDL_Color color);
	void set_callback(bool (*callback)(UEvent* ue, Window* parent));


	// get 
	string& get_value();
	int get_id();

public:
	virtual void init();


	// render & update
	virtual void update();
	virtual void render() = 0;


	// states
	Widget* const block();
	Widget* const unlock();
	bool is_blocked();

	Widget* const show();
	Widget* const hide();
	bool is_showed();

	Widget* const focus();
	Widget* const unfocus();
	bool is_focused();

	Widget* const check();
	Widget* const uncheck();
	bool is_checked();

	Widget* const hover();
	Widget* const unhover();
	bool is_hovered();

	// accessory
	Widget* const forced_update();

	virtual bool on_hover(int x, int y);
	virtual bool on_hover(SDL_Point p);

	void coord_adjustment(int* x, int* y);
	void coord_adjustment(SDL_Point* p);

	void shift_position(int dx, int dy);

	// events
	virtual void mouseButtonDown(SDL_Event* e) = 0;
	virtual void mouseButtonUp(SDL_Event* e) = 0;
	virtual void mouseMotion(SDL_Event* e) = 0;
	virtual void keyDown(SDL_Event* e) = 0;
	virtual void keyUp(SDL_Event* e) = 0;
	virtual void textInput(SDL_Event* e) = 0;

	virtual void notify(UEvent* ue) = 0;

protected:
	// text render & update
	void update_text(string text, SDL_Rect place, int align, TTF_Font* font, SDL_Rect padding = { 0, 0, 0, 0 });
	void render_text(string text, SDL_Rect place, int align, TTF_Font* font, SDL_Rect padding = { 0, 0, 0, 0 });

	void check_click_outside();

	// small 
	int SDL_SetRenderColor(SDL_Renderer* renderer, SDL_Color& color);
};
