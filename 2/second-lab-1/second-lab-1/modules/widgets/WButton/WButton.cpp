#include "WButton.h"
#include "../../editor/editor.h"

WButton::WButton(Window* parent, SDL_Texture* parent_target, string text, SDL_Rect size, int widget_id, TTF_Font* font, SDL_Color text_color, int align)
	: Widget(parent, parent_target, size, text, widget_id)
{
	this->font = font;
	this->text_color = text_color;
	this->align = align;

	this->background = Color::widget_background;
}

void WButton::render()
{
	if (!display)
		return;

	SDL_SetRenderTarget(renderer, texture);

	if (blocked)
		SDL_SetRenderColor(renderer, Color::widget_background_blocked);
	else
		if (click)
			SDL_SetRenderColor(renderer, Color::widget_background_click);
		else
			SDL_SetRenderColor(renderer, background);
	SDL_RenderFillRect(renderer, NULL);


	if (click && !blocked || focused)
		SDL_SetRenderColor(renderer, Color::widget_border_click);
	else
		SDL_SetRenderColor(renderer, Color::widget_border);
	SDL_RenderDrawRect(renderer, NULL);


	update_text(text, { 0, 0, size.w, size.h }, align, font);
}

void WButton::mouseButtonDown(SDL_Event* e)
{
	click = true;
	need_forced_update = true;

	Editor::push_event(new UEvent(BUTTON, BUTTON_PRESSED, widget_id, window_id));

	check_click_outside();
}

void WButton::mouseButtonUp(SDL_Event* e)
{
	click = false;
	need_forced_update = true;

	Editor::push_event(new UEvent(BUTTON, BUTTON_RELEASED, widget_id, window_id));
}

void WButton::mouseMotion(SDL_Event* e)
{
	hovered = true;
	need_forced_update = true;
}

void WButton::notify(UEvent* ue)
{
	if (ue->common.caller == BUTTON && ue->common.object_id == widget_id && ue->common.action == BUTTON_RELEASED && !(SDL_GetModState() & KMOD_CTRL))
	{
		if (this->callback != nullptr)
		{
			callback(ue, parent);
		}
	}
}
