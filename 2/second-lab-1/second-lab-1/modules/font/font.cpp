#include "font.h"

TTF_Font* Font::open(const char* path, int size)
{
	TTF_Init();

	TTF_Font* font = TTF_OpenFont(path, size);

	if (font == nullptr)
		throw SDL_GetError();

	return font;
}

TTF_Font* Font::open(PreloadedFonts id, int size)
{
	TTF_Init();

	string path;

	switch (id)
	{
	case LATO_REG:
		path = "././resources/fonts/Lato-Regular.ttf";
		break;
	case LATO_BOLD:
		path = "././resources/fonts/Lato-Bold.ttf";
		break;
	case LATO_LIGHT:
		path = "././resources/fonts/Lato-Light.ttf";
		break;
	case OPEN_SANS_REG:
		path = "././resources/fonts/OpenSans-Regular.ttf";
		break;
	case OPEN_SANS_BOLD:
		path = "././resources/fonts/OpenSans-Bold.ttf";
		break;
	case OPEN_SANS_LIGHT:
		path = "././resources/fonts/OpenSans-Light.ttf";
		break;
	case VERDANA:
		path = "././resources/fonts/verdana.ttf";
		break;

	default: return nullptr;  break;
	}

	TTF_Font* font = TTF_OpenFont(path.c_str(), size);

	if (font == nullptr)
		throw SDL_GetError();
	
	return font;
}

void Font::close(TTF_Font* font)
{
	TTF_CloseFont(font);
}

