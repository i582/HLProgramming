#include "winlib_draw.h"

void winlib::Draw::text(HDC dst_hdc, HFONT font, const string& text, const Rect& size)
{
	SelectFont(dst_hdc, font);
	ExtTextOut(dst_hdc, size.x, size.y, ETO_CLIPPED, NULL, text.c_str(), text.length(), NULL);
}
