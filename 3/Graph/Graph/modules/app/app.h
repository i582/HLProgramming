#pragma once

#pragma comment(linker,"\"/manifestdependency:type='win32' \
name='Microsoft.Windows.Common-Controls' version='6.0.0.0' \
processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")


#include "NIA.h"
#include "../u_event/user_event.h"
#include "../object/viewport/viewport.h"



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

public:
	static vector <UEvent*> events;
	static UEvent* push_event(UEvent* ev);

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

	// event part
	Event e;

	// viewport
	Viewport* viewport;



private:
	int init();
	void setup();

	void update();

	void handleUserEvent();
	bool filterUserEvent(UEvent* ue);

private:
	void setup_menu();
	void open_file();
	void save_file();


_callbacks:
	_callback LRESULT WINAPI StaticWndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
	LRESULT WINAPI WndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

private:
	void notify(UEvent* ue);

public:
	int run();


};