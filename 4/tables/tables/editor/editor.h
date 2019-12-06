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

	winlib::Table* bestTable;

	winlib::Table* successTable;

	winlib::Table* mathTable;
	winlib::Table* englishTable;
	winlib::Table* russianTable;

	HFONT font;

	MSG msg;
	HWND hwnd;
	HDC hdc;
	WNDCLASSEX wc;
	PAINTSTRUCT ps;
	HWND toolbar;

	HWND label1;


public:
	void init();
	void setup();
	int run();



public:
	static LRESULT WINAPI StaticWndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
	LRESULT WINAPI WndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
};
