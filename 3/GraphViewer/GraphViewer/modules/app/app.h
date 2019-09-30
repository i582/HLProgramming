#pragma once
#include "../nia_lib/nia_lib.h"
#include "vector"

#include "../uEvent/user_event.h"


#include "../window/main/main-window.h"

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
	WNDCLASSEX window;

	// menu part
	HMENU hMenu;
	HMENU hFileMenu;
	HMENU hHelpMenu;

	// event part
	Event e;

	// viewport
	//Viewport* viewport;

	MainWindow* win;


private:
	int init();
	void setup();

	void update();

	void handleUserEvent();
	bool filterUserEvent(UEvent* ue);

	vector <Point> split(string str);


_callbacks:
	_callback LRESULT WINAPI StaticWndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
	LRESULT WINAPI WndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

private:
	void notify(UEvent* ue);

public:
	int run();


};