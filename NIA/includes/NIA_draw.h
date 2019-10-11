#pragma once
#include "NIA.h"

#include "NIA_line.h"
#include "NIA_point.h"
#include "NIA_rect.h"

namespace NIA
{


struct Draw
{
	static void fillRect(HDC hdc, Rect rect, HexColor color, HexColor border_color = 0x000000, int thickness = 0);
	static void fillEllipse(HDC hdc, const Point& point, int radius, HexColor color, HexColor border_color = 0x000000, int thickness = 0);
	static void drawLine(HDC hdc, const Line& line, HexColor color, int thickness = 1);
	static void text(HDC dst_hdc, HFONT font, const wstring& text, const Rect& size);
};


}
