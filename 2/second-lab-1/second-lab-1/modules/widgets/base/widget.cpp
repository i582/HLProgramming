#include "widget.h"

#include "../../window/window.h"

void Widget::set_callback(bool(*callback)(UEvent* ue, Window* parent))
{
	this->callback = callback;
}

Widget::Widget(Window* parent, SDL_Texture* parent_target, SDL_Rect size, string text, int widget_id)
{
	this->renderer = parent->get_renderer();
	this->parent_target = parent_target;
	this->texture = nullptr;

	this->parent = parent;

	this->size = size;

	this->background = Color::background;
	this->text_color = Color::white;

	this->widget_id = widget_id;

	this->blocked = false;
	this->display = true;
	this->click = false;
	this->focused = false;
	this->hovered = false;
	this->checked = false;

	this->need_forced_update = true;
	this->need_forced_text_update = true;

	this->mouse = {};

	this->font = {};
	this->text_texture = nullptr;
	this->text_rect = {};
	this->text = text;

	this->window_id = parent->get_window_id();

	this->callback = nullptr;

	this->init();
}

Widget::~Widget()
{
	SDL_DestroyTexture(texture);
}

Widget* Widget::set_text(string text)
{
	this->text = text;
	need_forced_text_update = true;
	need_forced_update = true;
	return this;
}

Widget* Widget::set_background_color(SDL_Color color)
{
	background = color;
	need_forced_update = true;
	return this;
}

Widget* Widget::set_text_color(SDL_Color color)
{
	text_color = color;
	need_forced_update = true;
	return this;
}

string& Widget::get_value()
{
	return text;
}

int Widget::get_id()
{
	return widget_id;
}

void Widget::init()
{
	texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_RGBA8888, SDL_TEXTUREACCESS_TARGET, size.w, size.h);
	SDL_SetTextureBlendMode(texture, SDL_BLENDMODE_BLEND);
}

void Widget::update()
{
	if (need_forced_update)
	{
		render();
		need_forced_update = false;
	}

	SDL_SetRenderTarget(renderer, parent_target);

	SDL_RenderCopy(renderer, texture, NULL, &size);

	SDL_SetRenderTarget(renderer, NULL);
}


Widget* const Widget::block()
{
	blocked = true;
	focused = false;
	
	forced_update();

	return this;
}

Widget* const Widget::unlock()
{
	blocked = false;
	
	forced_update();

	return this;
}

bool Widget::is_blocked()
{
	return blocked;
}

Widget* const Widget::show()
{
	display = true;
	
	forced_update();
	
	return this;
}

Widget* const Widget::hide()
{
	display = false;
	focused = false;
	
	forced_update();

	return this;
}

bool Widget::is_showed()
{
	return display;
}

Widget* const Widget::focus()
{
	focused = true;
	
	forced_update();

	return this;
}

Widget* const Widget::unfocus()
{
	focused = false;
	
	forced_update();

	return this;
}

bool Widget::is_focused()
{
	return focused;
}

Widget* const Widget::check()
{
	checked = true;
	
	forced_update();

	return this;
}

Widget* const Widget::uncheck()
{
	checked = false;
	
	forced_update();

	return this;
}

bool Widget::is_checked()
{
	return checked;
}

Widget* const Widget::hover()
{
	hovered = true;
	
	forced_update();

	return this;
}

Widget* const Widget::unhover()
{
	hovered = false;
	
	forced_update();

	return this;
}

bool Widget::is_hovered()
{
	return hovered;
}

void Widget::update_text(string text, SDL_Rect place, int align, TTF_Font* font, SDL_Rect padding)
{
	if (need_forced_text_update)
	{
		render_text(text, place, align, font, padding);
		need_forced_text_update = false;
	}

	SDL_SetRenderTarget(renderer, texture);
	SDL_RenderCopy(renderer, text_texture, NULL, &text_rect);
	
	SDL_SetRenderTarget(renderer, parent_target);
}

void Widget::render_text(string text, SDL_Rect place, int align, TTF_Font* font, SDL_Rect padding)
{
	SDL_DestroyTexture(text_texture);

	if (text == "")
	{
		text_texture = nullptr;
		return;
	}

	SDL_Surface* text_surface = TTF_RenderUTF8_Blended(font, text.c_str(), text_color);

	text_rect.w = text_surface->w;
	text_rect.h = text_surface->h;


	if ((align & 0x0000000f) == ALIGN_LEFT)
	{
		text_rect.x = 10;
	}
	else if ((align & 0x0000000f) == ALIGN_LEFT_WITHOUT_PADDING)
	{
		text_rect.x = 0;
	}
	else if ((align & 0x0000000f) == ALIGN_CENTER)
	{
		text_rect.x = (place.w - text_surface->w) / 2 + place.x;
	}
	else if ((align & 0x0000000f) == ALIGN_RIGHT)
	{
		text_rect.x = (place.w - text_surface->w) + place.x;
	}
	else if ((align & 0x0000000f) == ALIGN_USER)
	{
		text_rect.x = padding.x;
	}
		

	if ((align & 0x000000f0) == ALIGN_TOP)
	{
		text_rect.y = 0;
	}
	else
	{
		text_rect.y = (place.h - text_surface->h) / 2 + place.y;
	}
	

	text_texture = SDL_CreateTextureFromSurface(renderer, text_surface);

	if (text_texture == nullptr)
		throw "Error memory allocated";

	SDL_FreeSurface(text_surface);
}

Widget* const Widget::forced_update()
{
	need_forced_update = true;
	return this;
}

bool Widget::on_hover(int x, int y)
{
	SDL_Point p = { x, y };
	return SDL_PointInRect(&p, &size) && !blocked && display;
}

bool Widget::on_hover(SDL_Point p)
{
	return on_hover(p.x, p.y);
}

void Widget::coord_adjustment(int* x, int* y)
{
	*x -= size.x;
	*y -= size.y;
}

void Widget::coord_adjustment(SDL_Point* p)
{
	coord_adjustment(&(p->x), &(p->y));
}

void Widget::shift_position(int dx, int dy)
{
	this->size.x += dx;
	this->size.y += dy;

	parent->update();
}

void Widget::check_click_outside()
{
	SDL_GetMouseState(&mouse.x, &mouse.y);

	if (!on_hover(mouse))
	{
		this->click = false;
		this->focused = false;
		this->hovered = false;

		forced_update();
	}
}

int Widget::SDL_SetRenderColor(SDL_Renderer* renderer, SDL_Color& color)
{
	return SDL_SetRenderDrawColor(renderer, color.r, color.g, color.b, color.a);
}
