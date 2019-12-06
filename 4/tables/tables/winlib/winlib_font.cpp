#include "winlib_font.h"

HFONT winlib::Font::open(const string& name, int size)
{
	return CreateFont(size, NULL, 0, 0, FW_NORMAL, FALSE, FALSE, FALSE, DEFAULT_CHARSET, OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS, DEFAULT_QUALITY, VARIABLE_PITCH, name.c_str());
}

void winlib::Font::close(HFONT font)
{
	DeleteObject((HGDIOBJ)font);
}
