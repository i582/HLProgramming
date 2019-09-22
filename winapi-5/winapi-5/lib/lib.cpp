#include "lib.h"

RECT Rect::to_rect()
{
	return { x, y, x + w, y + h };
}

Point NIA_GetCursorPosition()
{
	POINT p;
	GetCursorPos(&p);
	return { p.x, p.y };
}

void NIA_GetCursorPosition(HDC hdc, Point* p)
{
	POINT point;
	HWND hwnd = WindowFromDC(hdc);
	GetCursorPos(&point);
	ScreenToClient(hwnd, &point);
	p->x = point.x;
	p->y = point.y;
}

void NIA_GetCursorPositionByEvent(Event* e, Point* p)
{
	p->x = LOWORD(e->lParam);
	p->y = HIWORD(e->lParam);
}

bool NIA_PointInRect(POINT p, RECT* r)
{
	return PtInRect(r, p) ;
}

bool NIA_PointInCircle(Point p, Point center, int rad)
{
	return (p.x - center.x) * (p.x - center.x) + (p.y - center.y) * (p.y - center.y) <= rad*rad;
}

void NIA_SetHdcBitmap(HDC dst_hdc, HBITMAP dst_bitmap)
{
	SelectObject(dst_hdc, dst_bitmap);
}

void NIA_BlitBitmap(HDC dst_hdc, HDC src_hdc, Rect* src, Rect* dst)
{
	SetStretchBltMode(dst_hdc, COLORONCOLOR);

	if (src == nullptr)
	{
		src = new Rect;
		*src = { 0, 0, 0, 0 };

		BitBlt(dst_hdc, dst->x, dst->y, dst->w, dst->h,
			src_hdc, src->x, src->y, SRCCOPY);
		
		delete src;
		return;
	}

	BitBlt(dst_hdc, dst->x, dst->y, dst->w, dst->h,
		src_hdc, src->x, src->y, SRCCOPY);
}

void NIA_FillRect(HDC dst_hdc, Rect rect, HexColor color)
{
	LOGBRUSH br;
	br.lbStyle = BS_SOLID;
	br.lbColor = color;
	HBRUSH brush;
	brush = CreateBrushIndirect(&br);
	FillRect(dst_hdc, &rect.to_rect(), brush);
	DeleteObject(brush);
}

void NIA_DrawLine(HDC dst_hdc, Line line_, HexColor color, int thickness)
{
	HPEN pen = CreatePen(PS_SOLID, thickness, color);
	SelectPen(dst_hdc, pen);
	MoveToEx(dst_hdc, line_.x1, line_.y1, nullptr);
	LineTo(dst_hdc, line_.x2, line_.y2);

	DeleteObject(pen);
}

void NIA_FillEllipse(HDC dst_hdc, Point point, int radius, HexColor color)
{

	LOGBRUSH br;
	br.lbStyle = BS_SOLID;
	br.lbColor = color;
	HBRUSH brush;
	brush = CreateBrushIndirect(&br);
	Ellipse(dst_hdc, point.x - radius, point.y - radius, point.x + radius, point.y + radius);

	DeleteObject(brush);
}

HFONT NIA_LoadFont(wstring name, int size)
{
	return CreateFont(size, NULL, 0, 0, FW_NORMAL, FALSE, FALSE, FALSE, DEFAULT_CHARSET, OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS, DEFAULT_QUALITY, VARIABLE_PITCH, name.c_str());
}

void NIA_CloseFont(HFONT font)
{
	DeleteObject((HGDIOBJ)font);
}

void NIA_DrawFont(HDC dst_hdc, HFONT font, wstring text, Rect size)
{
	SelectFont(dst_hdc, font);
	ExtTextOut(dst_hdc, size.x, size.y, ETO_CLIPPED, NULL, text.c_str(), text.length(), NULL);
}


