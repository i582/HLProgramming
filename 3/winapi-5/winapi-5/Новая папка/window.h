#pragma once
#include "iostream"
#include "windows.h"
#include "../lib/lib.h"

using namespace std;

class Window
{
private:
	MSG msg;
	HWND hwnd;
	HDC hdc;
	WNDCLASSEX wc;

	wstring title;
	Rect size;

public:
	Window(wstring title, Rect size);

public:
	bool init();

	static LRESULT __stdcall StaticWndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
	virtual LRESULT __stdcall WndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) = 0;

public _get:
	HWND get_hwnd();
	HDC get_hdc();


};