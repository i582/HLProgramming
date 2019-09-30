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
#include "command/command.h"

#include "window/main-window/main-window.h"

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


	static vector <Command*> commands;
	static int now_command;
	static Command* push_command(Command* command);
	static void undo();
	static void redo();
	static void clear_commands();
	
	// singleton part
private:
	static App* instance;
	App();

public:
	static App* get_instance();


private:
	//MainWindow* window;

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

	HFONT font;

private:
	int init();
	void setup();

	void update();

	static LRESULT WINAPI StaticWndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
	LRESULT WINAPI WndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

	void HandleUserEvent();
	bool FilterUserEvent(UEvent* ue);

	vector <Point> split_str(string str);

	void notify(UEvent* ue);

public:
	int run();

};