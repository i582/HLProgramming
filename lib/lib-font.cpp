#include "lib-font.h"

HFONT lib::Font::open(const std::wstring& name, int size)
{
	return CreateFont(size, NULL, 0, 0, FW_NORMAL, FALSE, FALSE, FALSE, DEFAULT_CHARSET, OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS, DEFAULT_QUALITY, VARIABLE_PITCH, name.c_str());
}

void lib::Font::close(HFONT font)
{
	DeleteObject((HGDIOBJ)font);
}
