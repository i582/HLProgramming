#pragma once

#include "winlib_main.h"

namespace winlib 
{

struct Event
{
	HWND hwnd;
	UINT uMsg;
	WPARAM wParam;
	LPARAM lParam;
};

}