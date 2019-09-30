/**
 *  Version 0.0.1
 */

#pragma once

#pragma comment(linker,"\"/manifestdependency:type='win32' \
name='Microsoft.Windows.Common-Controls' version='6.0.0.0' \
processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")

#include "windows.h"
#include "string"
#include "vector"

using namespace std;

typedef COLORREF HexColor;



#define SelectPen(hdc, hpen) \
  ((HPEN)SelectObject((hdc), (HGDIOBJ)(HPEN)(hpen)))

#define SelectBrush(hdc, hbrush) \
  ((HBRUSH)SelectObject((hdc), (HGDIOBJ)(HBRUSH)(hbrush)))

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

struct Circle
{
	int x, y, r;

	Circle() : x(0), y(0), r(1) {}
	Circle(int x, int y, int r) : x(x), y(y), r(r) {}
};

struct Rect
{
	int x, y;
	int w, h;

	Rect() : x(0), y(0), w(1), h(1) {};
	Rect(int x, int y, int w, int h) : x(x), y(y), w(w), h(h) {};

	RECT to_rect() { return { x, y, x + w, y + h }; }
};


struct Point
{
	int x, y;

	Point() : x(0), y(0) {};
	Point(int x, int y) : x(x), y(y) {};
	Point(POINT p) : x(p.x), y(p.y) {};
	Point(POINT* p) : x(p->x), y(p->y) {};
	Point operator-(const Point& point) { return Point(this->x - point.x, this->y - point.y); }
	Point operator+(const Point& point) { return Point(this->x + point.x, this->y + point.y); }
	Point operator*(const int x) { return Point(this->x * x, this->y * x); }
	Point operator*(const double x) { return Point((int)(this->x * x), (int)(this->y * x)); }
	Point operator/(const int x) { return Point((int)(this->x / x), (int)(this->y / x)); }
	Point operator/(const double x) { return Point((int)(this->x / x), (int)(this->y / x)); }

	POINT to_point() { POINT p; p.x = x, p.y = y; return p; }

	bool in(Rect r) { return PtInRect(&r.to_rect(), { x, y }); };
	bool in(Rect* r) { return PtInRect(&r->to_rect(), { x, y }); };
	bool in(Point c, int r) { return (x - c.x) * (x - c.x) + (y - c.y) * (y - c.y) <= r * r; };
	bool in(Circle c) { return (x - c.x) * (x - c.x) + (y - c.y) * (y - c.y) <= c.r * c.r; };
	bool in(Circle* c) { return (x - c->x) * (x - c->x) + (y - c->y) * (y - c->y) <= c->r * c->r; };


	static vector<Point>* to_points(vector<int>* points);
};


struct Point2D
{
	double x, y;

	Point2D() : x(0), y(0) {};
	Point2D(double x, double y) : x(x), y(y) {};
	Point2D(POINT p) : x((double)p.x), y((double)p.y) {};
	Point2D(POINT* p) : x((double)p->x), y((double)p->y) {};
	Point2D(Point p) : x((double)p.x), y((double)p.y) {};
	Point2D(Point* p) : x((double)p->x), y((double)p->y) {};
	Point2D operator-(const Point2D& point) { return Point2D(this->x - point.x, this->y - point.y); }
	Point2D operator+(const Point2D& point) { return Point2D(this->x + point.x, this->y + point.y); }
	Point2D operator*(const int x) { return Point2D(this->x * x, this->y * x); }
	Point2D operator*(const double x) { return Point2D(this->x * x, this->y * x); }
	Point2D operator/(const int x) { return Point2D(this->x / x, this->y / x); }
	Point2D operator/(const double x) { return Point2D(this->x / x, this->y / x); }

	bool in(Rect r) { return PtInRect(&r.to_rect(), { (int)x, (int)y }); };
	bool in(Rect* r) { return PtInRect(&r->to_rect(), { (int)x, (int)y }); };
	bool in(Circle c) { return (long)((x - (int)c.x)*(x - (int)c.x) + (y - (int)c.y)*(y - (int)c.y)) <= (long)(c.r*c.r); };
	bool in(Circle* c) { return (long)((x - (int)c->x)*(x - (int)c->x) + (y - (int)c->y)*(y - (int)c->y)) <= (long)(c->r*c->r); };

	Point to_point();

	static vector<Point2D>* to_points(vector<double>* points);
};




struct Line
{
	int x1, y1;
	int x2, y2;


	Line(int x1, int y1, int x2, int y2) : x1(x1), y1(y1), x2(x2), y2(y2) {};
	Line(Point p1, Point p2) : x1(p1.x), y1(p1.y), x2(p2.x), y2(p2.y) {};
};

namespace NIA
{
	int to_integer(wstring str);
	int to_integer(string str);
	int to_integer(char* str);
	int to_integer(const char* str);
	vector<int>* to_integer(vector<wstring>* strings);
	vector<int>* to_integer(vector<string>* strings);
	vector<int>* to_integer(vector<Point>* points);

	long to_long(wstring str);
	long to_long(string str);
	long to_long(char* str);
	long to_long(const char* str);
	vector<long>* to_long(vector<wstring>* strings);
	vector<long>* to_long(vector<string>* strings);

	float to_float(wstring str);
	float to_float(string str);
	float to_float(char* str);
	float to_float(const char* str);
	vector<float>* to_float(vector<wstring>* strings);
	vector<float>* to_float(vector<string>* strings);

	double to_double(wstring str);
	double to_double(string str);
	double to_double(char* str);
	double to_double(const char* str);
	vector<double>* to_double(vector<wstring>* strings);
	vector<double>* to_double(vector<string>* strings);
	vector<double>* to_double(vector<Point2D>* strings);

	string to_string(double num, int accuracy = 2);
	string to_string(float num, int accuracy = 2);

	vector<string>* to_string(vector<int>* nums);
	vector<string>* to_string(vector<long>* nums);
	vector<string>* to_string(vector<float>* nums, int accuracy = 2);
	vector<string>* to_string(vector<double>* nums, int accuracy = 2);
	vector<string>* to_string(vector<Point>* points, string separator = " ");
	vector<string>* to_string(vector<Point2D>* points, string separator = " ", int accuracy = 2);

	wstring to_wstring(double num, int accuracy = 2);
	wstring to_wstring(float num, int accuracy = 2);

	vector<wstring>* to_wstring(vector<int>* nums);
	vector<wstring>* to_wstring(vector<long>* nums);
	vector<wstring>* to_wstring(vector<float>* nums, int accuracy = 2);
	vector<wstring>* to_wstring(vector<double>* nums, int accuracy = 2);
	vector<wstring>* to_wstring(vector<Point>* points, wstring separator = L" ");
	vector<wstring>* to_wstring(vector<Point2D>* points, wstring separator = L" ", int accuracy = 2);

	vector<string>* split(string str, char symbol);
	vector<string>* split(char* str, char symbol);
	vector<string>* split(string str, string pattern, char separator = '\t');

	vector<wstring>* split(wstring str, wchar_t symbol);
	vector<wstring>* split(wchar_t* str, wchar_t symbol);
	vector<wstring>* split(wstring str, wstring pattern, wchar_t separator = L'\t');


	string join(vector<string>* strings, string separator = " ");
	wstring join(vector<wstring>* strings, wstring separator = L" ");


	HexColor rgb(HexColor bgr);
	HexColor rgb(unsigned char r, unsigned char g, unsigned char b);
}


void NIA_GetCursorPosition(HDC hdc, Point* p);
void NIA_GetCursorPosition(Event* e, Point* p);
Point NIA_GetCursorPosition(HDC hdc);
Point NIA_GetCursorPosition(Event* e);


void NIA_SetCurrentBitmap(HDC dst_hdc, HBITMAP dst_bitmap);

void NIA_BitmapCopy(HDC dst_hdc, HDC src_hdc, Rect* src, Rect* dst);

void NIA_FillRect(HDC dst_hdc, Rect rect, HexColor color, HexColor border_color = 0x000000, int thickness = 0);

void NIA_DrawLine(HDC dst_hdc, Line line, HexColor color, int thickness = 1);

void NIA_FillEllipse(HDC dst_hdc, Point point, int radius, HexColor color, HexColor border_color = 0x000000, int thickness = 0);


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