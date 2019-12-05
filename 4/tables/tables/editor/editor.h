#pragma once

#include "../winlib/winlib.h"

class Editor
{
private:
	static Editor* instance;
	Editor();

public:
	static Editor* get_instance();
	~Editor();

public:
	winlib::Rect size;
	winlib::Event e;
	winlib::Menu* menu;
	winlib::StatusBar* statusBar;
	winlib::Table* mainTable;
	MSG msg;
	HWND hwnd;
	HDC hdc;
	WNDCLASSEX wc;
	PAINTSTRUCT ps;
	HWND toolbar;


public:
	void init();
	void setup();
	int run();



public:
	static LRESULT WINAPI StaticWndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
	LRESULT WINAPI WndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
};
