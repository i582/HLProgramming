/**
 *  Version 0.0.2
 */

#pragma once

#include "NIA_main.h"
#include "NIA_point.h"
#include "NIA_point2D.h"
#include "NIA_rect.h"
#include "NIA_circle.h"
#include "NIA_line.h"
#include "NIA_errors.h"


struct Event
{
	HWND hwnd;
	UINT uMsg;
	WPARAM wParam;
	LPARAM lParam;
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

/**/

void NIA_ShowLastError();

