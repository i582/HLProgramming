#pragma once

#include "../nia_lib/nia_lib.h"
#include "../uEvent/user_event.h"

class Window
{
protected:
	static int count_window;

protected:
	Rect size;
	wstring title;

	MSG msg;
	HWND hwnd;
	HDC hdc;
	WNDCLASSEX wc;
	DWORD flags;

	Event e;

	Point mouse;
	HFONT font;

public:
	Window(wstring title, Rect size, DWORD flags);

protected:
	int init();
	virtual void setup() = 0;

public:
	virtual void notify(UEvent* ue) = 0;


public: _set



public: _get
	HWND get_hwnd();
	HDC get_hdc();
	HFONT get_font();

_callbacks:
	_callback LRESULT WINAPI staticWndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
	virtual LRESULT WINAPI mainWndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) = 0;


public:
	virtual LRESULT on_event(Event* e) = 0;

	virtual void handleUserEvent(UEvent* ue) = 0;
	virtual bool filterUserEvent(UEvent* ue) = 0;


public:
	void show();
	void hide();
	bool is_showed();

	void close();
};
