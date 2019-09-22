#pragma once

#pragma comment(linker,"\"/manifestdependency:type='win32' \
name='Microsoft.Windows.Common-Controls' version='6.0.0.0' \
processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")

#include "windows.h"
#include "iostream"
#include "string"
#include "lib/lib.h"
#include "viewport/viewport.h"
#include "user_event/user_event.h"

using namespace std;

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

	// singleton part
private:
	static App* instance;
	App();

public:
	static App* get_instance();
	~App();


private:
	int width;
	int height;

	MSG msg;
	HWND hwnd;
	HDC hdc;
	WNDCLASSEX wc;

	HWND button;
	HWND input;
	HWND input1; 

	Point mouse;
	Point mouse_prev;


	HMENU hMenu;
	HMENU hFileMenu;
	HMENU hHelpMenu;
	HWND hStatusWindow;

	Event e;

	Viewport* viewport;

public:
	App(int width, int height);

private:
	int init();
	void setup();

	static LRESULT WINAPI StaticWndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
	LRESULT WINAPI WndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

	void HandleUserEvent();
	bool FilterUserEvent(UEvent* ue);

public:
	int run();

};