#pragma once
#include "windows.h"
#include "string"

using namespace std;

typedef POINT Point;
typedef COLORREF HexColor;

#define SelectPen(hdc, hpen) \
  ((HPEN)SelectObject((hdc), (HGDIOBJ)(HPEN)(hpen)))

#define SelectFont(hdc, hfont) \
  ((HFONT)SelectObject((hdc), (HGDIOBJ)(HFONT)(hfont)))

#define KEY_IS_PRESSED(key) GetKeyState(key) < 0

#define _set
#define _get
#define _event

struct Event
{
	HWND hwnd; 
	UINT uMsg; 
	WPARAM wParam; 
	LPARAM lParam;
};

struct Rect
{
	int x, y;
	int w, h;

	RECT to_rect();
};

struct Line
{
	int x1, y1;
	int x2, y2;
};


void NIA_GetCursorPosition(HDC hdc, Point* p);
void NIA_GetCursorPositionByEvent(Event* e, Point* p);

bool NIA_PointInRect(POINT p, RECT* r);
bool NIA_PointInCircle(Point p, Point center, int rad);

void NIA_SetHdcBitmap(HDC dst_hdc, HBITMAP dst_bitmap);

void NIA_BlitBitmap(HDC dst_hdc, HDC src_hdc, Rect* src, Rect* dst);

void NIA_FillRect(HDC dst_hdc, Rect rect, HexColor color);

void NIA_DrawLine(HDC dst_hdc, Line line_, HexColor color, int thickness = 1);

void NIA_FillEllipse(HDC dst_hdc, Point point, int radius, HexColor color);


/* Font */

HFONT NIA_LoadFont(wstring path, int size);

void NIA_CloseFont(HFONT font);

void NIA_DrawFont(HDC dst_hdc, HFONT font, wstring text, Rect size);