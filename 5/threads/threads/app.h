#pragma once

#include "lib.h"

class App
{
private:
	static App* instance;
	App();

public:
	static App* get_instance();
	~App();

public:
	// window part
	lib::Rect size;

	MSG msg;
	HWND hwnd;
	HDC hdc;
	WNDCLASSEX wc;
	PAINTSTRUCT ps;

	// event part
	lib::Event e;


	// threads
	HANDLE thread;
	HANDLE thread2;

	HFONT font;

	// elements
	HWND input;
	HWND label;
	HWND button;

private:
	int init();
	void setup();
	void update();


public:
	static LRESULT WINAPI StaticWndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
	LRESULT WINAPI WndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);


private:
	static DWORD WINAPI ThreadFunction(LPVOID lpParameter);
	static DWORD WINAPI ThreadFunction2(LPVOID lpParameter);

public:
	int run();
};