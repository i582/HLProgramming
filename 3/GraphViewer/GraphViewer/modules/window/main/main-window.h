#pragma once

#include "../window.h"

class MainWindow : public Window
{
private:



public:
	MainWindow(wstring title, Rect size, DWORD flags);

private:
	void setup();
	void notify(UEvent* ue);

_callbacks:
	LRESULT WINAPI mainWndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);


public:
	LRESULT on_event(Event* e);

	void handleUserEvent(UEvent* ue);
	bool filterUserEvent(UEvent* ue);

};
