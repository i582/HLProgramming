#include "WCheckBox.h"
#include "../../editor/editor.h"


WCheckbox::WCheckbox(Window* parent, SDL_Texture* parent_target, SDL_Rect size, int widget_id, string text, TTF_Font* font, int style, bool checked)
	: Widget(parent, parent_target, size, text, widget_id)
{
	this->style = style;
	this->font = font;
	setup();
}

WCheckbox::~WCheckbox()
{
}

void WCheckbox::setup()
{
	switch (style)
	{
	case SIMPLE:
	{
		image_select = TextureManager::at(renderer, TEXTURE_ICON__CHECKBOX_STYLE_SIMPLE_CHECKED);
		image_unselect = TextureManager::at(renderer, TEXTURE_ICON__CHECKBOX_STYLE_SIMPLE_UNCHECKED);

		break;
	}

	case EYE:
	{
		image_select = TextureManager::at(renderer, TEXTURE_ICON__CHECKBOX_STYLE_EYE_CHECKED);
		image_unselect = TextureManager::at(renderer, TEXTURE_ICON__CHECKBOX_STYLE_EYE_UNCHECKED);

		break;
	}

	case BLOCK:
	{
		image_select = TextureManager::at(renderer, TEXTURE_ICON__CHECKBOX_STYLE_BLOCK_CHECKED);
		image_unselect = TextureManager::at(renderer, TEXTURE_ICON__CHECKBOX_STYLE_BLOCK_UNCHECKED);

		break;
	}
	
	}
}

void WCheckbox::render()
{
	if (!display)
		return;

	SDL_SetRenderTarget(renderer, texture);

	SDL_SetRenderColor(renderer, background);
	SDL_RenderFillRect(renderer, NULL);


	int width, height;
	SDL_Texture* render_texture;

	if (checked)
		render_texture = image_select;
	else
		render_texture = image_unselect;

	SDL_QueryTexture(render_texture, nullptr, nullptr, &width, &height);
	SDL_Rect r = { 0, (size.h - height) / 2, width, height };
	SDL_RenderCopy(renderer, render_texture, NULL, &r);
	

	update_text(text, { 0, 0, size.w, size.h }, ALIGN_USER, font, { width + 10, 0, 0, 0 });

	SDL_RenderPresent(renderer);
	SDL_SetRenderTarget(renderer, parent_target);
}

void WCheckbox::mouseButtonDown(SDL_Event* e)
{
	check_click_outside();
}

void WCheckbox::mouseButtonUp(SDL_Event* e)
{
	need_forced_update = true;

	if (checked)
	{
		Editor::push_event(new UEvent(CHECKBOX, CHECKBOX_UNCHECKED, widget_id));
	}
	else
	{
		Editor::push_event(new UEvent(CHECKBOX, CHECKBOX_CHECKED, widget_id));
	}

	checked = !checked;
}

void WCheckbox::notify(UEvent* ue)
{
	if (ue->common.caller == CHECKBOX && ue->common.object_id == widget_id)
	{
		if (this->callback != nullptr)
		{
			callback(ue, parent);
		}
	}
}
