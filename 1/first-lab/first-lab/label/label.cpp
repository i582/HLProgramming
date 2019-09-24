#include "label.h"

WLabel::WLabel(SDL_Renderer* renderer, SDL_Texture* parent_target, string text, SDL_Rect size, string path, int font_size)
{
	this->size = size;

	this->texture = nullptr;

	this->renderer = renderer;
	this->parent_target = parent_target;


	//text
	this->text_texture = nullptr;
	this->text_rect = {};
	this->text = text;
	this->font = TTF_OpenFont(path.c_str(), font_size);


	this->init();
}

void WLabel::init()
{
	texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_RGBA8888, SDL_TEXTUREACCESS_TARGET, size.w, size.h);
	SDL_SetTextureBlendMode(texture, SDL_BLENDMODE_BLEND);
}

void WLabel::render()
{
	render_text(text, size);


	SDL_SetRenderTarget(renderer, parent_target);
	SDL_RenderCopy(renderer, texture, NULL, &size);
	SDL_SetRenderTarget(renderer, NULL);
}

void WLabel::render_text(string text, SDL_Rect place)
{
	if (text == "")
	{
		text_texture = nullptr;
		return;
	}

	SDL_Surface* text_surface = TTF_RenderUTF8_Blended(font, text.c_str(), {0xff, 0xff, 0xff, 0xff});

	text_rect.w = text_surface->w;
	text_rect.h = text_surface->h;
	text_rect.x = 0;
	text_rect.y = 0;


	text_texture = SDL_CreateTextureFromSurface(renderer, text_surface);

	SDL_FreeSurface(text_surface);



	SDL_SetRenderTarget(renderer, texture);
	SDL_RenderCopy(renderer, text_texture, NULL, &text_rect);
	SDL_SetRenderTarget(renderer, parent_target);
}
