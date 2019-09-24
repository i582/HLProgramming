#include "WLabel.h"
#include "../../window/main_window/main_window.h"

WLabel::WLabel(Window* parent, SDL_Texture* parent_target, string text, SDL_Rect size, int widget_id, TTF_Font* font, SDL_Color text_color, int align)
	: Widget(parent, parent_target, size, text, widget_id)
{
	this->font = font;
	this->text_color = text_color;
	this->align = align;
}

void WLabel::render()
{
	if (!display)
		return;

	SDL_SetRenderTarget(renderer, texture);

	SDL_SetRenderDrawColor(renderer, background.r, background.g, background.b, background.a);
	SDL_RenderFillRect(renderer, NULL);

	update_text(text, { 0, 0, size.w, size.h }, align, font);

	SDL_SetRenderTarget(renderer, NULL);
}

void WLabel::mouseButtonDown(SDL_Event* e)
{
	check_click_outside();
}

void WLabel::mouseButtonUp(SDL_Event* e)
{
}

void WLabel::notify(UEvent* ue)
{
	SDL_GetMouseState(&mouse.x, &mouse.y);
	if (ue->common.caller == WINDOW && ue->common.action == WINDOW_MOUSEMOTION && ((MainWindow*)parent)->is_track_mouse_event())
	{
		this->text = to_string(mouse.x) + ":" + to_string(mouse.y);
		this->need_forced_text_update = true;
		this->need_forced_update = true;
	}


}
