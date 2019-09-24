#include "colors.h"

SDL_Color Color::white						= Color::color(0xffffff);
SDL_Color Color::black						= Color::color(0x000000);


SDL_Color Color::background					= Color::color(0x424242);

SDL_Color Color::widget_background			= Color::color(0x1e1e1e);
SDL_Color Color::widget_background_blocked	= Color::color(0x2d2d30);
SDL_Color Color::widget_background_click	= Color::color(0x007acc);
SDL_Color Color::widget_background_focus	= Color::color(0x4f4f4f);


SDL_Color Color::widget_border				= Color::color(0x555555);
SDL_Color Color::widget_border_click		= Color::color(0x007acc);

SDL_Color Color::widget_list_hover			= Color::color(0x007acc);
SDL_Color Color::widget_text				= Color::color(0xffffff);

SDL_Color Color::window_border				= Color::color(0xc95000);

SDL_Color Color::color(Hex hex)
{
	SDL_Color color = {};

	if (hex >> 12 == 0)
	{
		color.r = ((hex & 0xf00) >> 8) * 16 + ((hex & 0xf00) >> 8);
		color.g = ((hex & 0x0f0) >> 4) * 16 + ((hex & 0x0f0) >> 4);
		color.b = ((hex & 0x00f)) * 16 + ((hex & 0x00f));
		color.a = 0xff;
	}
	else if (hex >> 24 == 0)
	{
		color.r = (hex & 0xff0000) >> 16;
		color.g = (hex & 0x00ff00) >> 8;
		color.b = (hex & 0x0000ff);
		color.a = 0xff;
	}
	else if (hex > 0xfffffff)
	{
		color.r = (hex & 0xff000000) >> 24;
		color.g = (hex & 0x00ff0000) >> 16;
		color.b = (hex & 0x0000ff00) >> 8;
		color.a = (hex & 0x000000ff);
	}

	return color;
}

SDL_Color Color::color(unsigned char r, unsigned char g, unsigned char b, unsigned char a)
{
	SDL_Color color = { r, g, b, a };
	return color;
}
