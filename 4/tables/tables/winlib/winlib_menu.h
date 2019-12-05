#pragma once

#include "winlib_main.h"

#include "map"
#include "string"
#include "functional"

namespace winlib
{

using std::map;
using std::string;
using std::function;

class Menu
{
private:
	HWND hwnd;
	HMENU hMenu;
	map<size_t, HMENU> menus;

	map<size_t, function<void()>> callbacks;

public:
	Menu(HWND window);


public:
	void appendSimple(size_t id, string name, long flags);
	void appendPopup(size_t id, string name, long flags);
	void appendInPopup(size_t popup, size_t id, string name, long flags);

	void onClick(size_t id, function<void()> callback);

	void handleClick(int id);
};


}