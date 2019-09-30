#pragma once

#pragma comment(linker,"\"/manifestdependency:type='win32' \
name='Microsoft.Windows.Common-Controls' version='6.0.0.0' \
processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")

#include "windows.h"
#include "string"

using namespace std;

typedef COLORREF HexColor;



#define SelectPen(hdc, hpen) \
  ((HPEN)SelectObject((hdc), (HGDIOBJ)(HPEN)(hpen)))

#define SelectFont(hdc, hfont) \
  ((HFONT)SelectObject((hdc), (HGDIOBJ)(HFONT)(hfont)))

#define KEY_IS_PRESSED(key) GetKeyState(key) < 0
#define NIA_KEY_Z 0x5a


#define _set
#define _get
#define _event
#define _state

#define _interface struct
#define _callback static
#define _callbacks public

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


typedef POINT Point;



void NIA_GetCursorPosition(HDC hdc, Point* p);
void NIA_GetCursorPosition(Event* e, Point* p);

bool NIA_PointInRect(Point p, Rect* r);
bool NIA_PointInCircle(Point p, Point center, int rad);

void NIA_SetCurrentBitmap(HDC dst_hdc, HBITMAP dst_bitmap);

void NIA_BitmapCopy(HDC dst_hdc, HDC src_hdc, Rect* src, Rect* dst);

void NIA_FillRect(HDC dst_hdc, Rect rect, HexColor color);

void NIA_DrawLine(HDC dst_hdc, Line line, HexColor color, int thickness = 1);

void NIA_FillEllipse(HDC dst_hdc, Point point, int radius, HexColor color);


/* Font */

HFONT NIA_LoadFont(wstring path, int size);

void NIA_CloseFont(HFONT font);

void NIA_RenderText(HDC dst_hdc, HFONT font, wstring text, Rect size);


/* File */

wstring NIA_ShowOpenFileDialog(HWND hwnd, LPCWSTR filter);
wstring NIA_ShowSaveFileDialog(HWND hwnd, LPCWSTR filter);

HANDLE NIA_OpenFile(wstring path, DWORD dwAccess = GENERIC_READ | GENERIC_WRITE, DWORD dwShareMode = FILE_SHARE_READ);

void* NIA_ReadFile(HWND hwnd, LPCWSTR filter);
void NIA_WriteFile(HWND hwnd, LPCWSTR filter, char* buffer, size_t count);