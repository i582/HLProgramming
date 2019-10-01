#pragma once

#pragma comment(linker,"\"/manifestdependency:type='win32' \
name='Microsoft.Windows.Common-Controls' version='6.0.0.0' \
processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")


#include "../NIA/NIA.h"
#include "../NIA/NIA_listview.h"

#include "commctrl.h"

using namespace NIA;

enum MenuID
{
	OPEN_FILE,
	SAVE_FILE,

	ENABLE_DELETE,
	ENABLE_ADD
};


class App
{
private:
	static App* instance;
	App();

public:
	static App* get_instance();


public:
	// window part
	Rect size;
	MSG msg;
	HWND hwnd;
	HDC hdc;
	WNDCLASSEX wc;
	PAINTSTRUCT ps;
	Point mouse;
	Point mouse_prev;

	HWND input;

	// menu part
	HMENU hMenu;
	HMENU hFileMenu;
	HMENU hHelpMenu;

	// table
	HWND hwndList;

	// event part
	Event e;

	//
	LView* list;


private:
	int init();
	void setup();

	void update();

	//void handleUserEvent();
	//bool filterUserEvent(UEvent* ue);

private:
	void setup_menu();


_callbacks:
	_callback LRESULT WINAPI StaticWndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
	LRESULT WINAPI WndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

private:
	//void notify(UEvent* ue);

public:
	int run();


};