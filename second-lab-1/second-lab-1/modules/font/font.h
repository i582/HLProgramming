#pragma once

#include "../sdl/sdl_headers.h"
#include "string"

using namespace std;

enum PreloadedFonts
{
	LATO_REG,
	LATO_BOLD,
	LATO_LIGHT,
	OPEN_SANS_REG,
	OPEN_SANS_BOLD,
	OPEN_SANS_LIGHT,
	VERDANA
};

class Font
{
public:
	static TTF_Font* open(const char* path, int size);
	static TTF_Font* open(PreloadedFonts id, int size);

	static void close(TTF_Font* font);
};
