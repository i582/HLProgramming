#include "winlib_menu.h"

winlib::Menu::Menu(HWND window)
{
	this->hwnd = window;
	this->hMenu = CreateMenu();

	SetMenu(hwnd, hMenu);
}

void winlib::Menu::appendSimple(size_t id, string name, long flags)
{
	menus[id] = CreatePopupMenu();
	
	AppendMenu(this->hMenu, flags, (UINT)id, name.c_str());

	SetMenu(hwnd, hMenu);

	this->callbacks[id] = [](){};
}

void winlib::Menu::appendPopup(size_t id, string name, long flags)
{
	menus[id] = CreatePopupMenu();

	AppendMenu(hMenu, flags | MF_POPUP, (UINT)menus[id], name.c_str());

	SetMenu(hwnd, hMenu);

	this->callbacks[id] = [](){};
}

void winlib::Menu::appendInPopup(size_t popup, size_t id, string name, long flags)
{
	menus[id] = CreatePopupMenu();

	AppendMenu(menus[popup], flags | MF_POPUP, id, name.c_str());

	SetMenu(hwnd, hMenu);

	this->callbacks[id] = [](){};
}

void winlib::Menu::onClick(size_t id, function<void()> callback)
{
	if (menus.find(id) == menus.end())
	{
		return;
	}

	this->callbacks[id] = callback;
}

void winlib::Menu::handleClick(int id)
{
	if (callbacks.find(id) == callbacks.end())
	{
		return;
	}

	this->callbacks[id]();
}
