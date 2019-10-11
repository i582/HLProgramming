#include "NIA_draw.h"

void NIA::Draw::fillRect(HDC hdc, Rect rect, HexColor color, HexColor border_color, int thickness)
{
	HBRUSH brush;
	HPEN pen;
	pen = CreatePen(PS_SOLID, thickness, border_color);
	brush = CreateSolidBrush(color);
	SelectBrush(hdc, brush);
	SelectPen(hdc, pen);

	FillRect(hdc, &rect.to_rect(), brush);

	DeleteObject(brush);
	DeleteObject(pen);
}

void NIA::Draw::fillEllipse(HDC hdc, const Point& point, int radius, HexColor color, HexColor border_color, int thickness)
{
	HBRUSH brush;
	HPEN pen;
	pen = CreatePen(PS_SOLID, thickness, color);
	brush = CreateSolidBrush(color);
	SelectBrush(hdc, brush);
	SelectPen(hdc, pen);

	Ellipse(hdc, point.x - radius, point.y - radius, point.x + radius, point.y + radius);

	DeleteObject(brush);
	DeleteObject(pen);
}

void NIA::Draw::drawLine(HDC hdc, const Line& line, HexColor color, int thickness)
{
	HPEN pen = CreatePen(PS_SOLID, thickness, color);
	SelectPen(hdc, pen);

	MoveToEx(hdc, line.x1, line.y1, nullptr);
	LineTo(hdc, line.x2, line.y2);

	DeleteObject(pen);
}

void NIA::Draw::text(HDC dst_hdc, HFONT font, const wstring& text, const Rect& size)
{
	SelectFont(dst_hdc, font);
	ExtTextOut(dst_hdc, size.x, size.y, ETO_CLIPPED, NULL, text.c_str(), text.length(), NULL);
}
