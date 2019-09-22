#include "WImage.h"

WImage::WImage(Window* parent, SDL_Texture* parent_target, SDL_Texture* image, SDL_Rect size, int widget_id)
	: Widget(parent, parent_target, size, "", widget_id)
{
	this->image = image;
}

WImage::~WImage()
{
	SDL_DestroyTexture(image);
}

void WImage::render()
{
	if (!display)
		return;

	SDL_SetRenderTarget(renderer, texture);

	SDL_RenderCopy(renderer, image, NULL, NULL);

	SDL_SetRenderTarget(renderer, NULL);
}
