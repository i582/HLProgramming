#pragma once

#include "lib-main.h"

namespace lib
{

struct Event
{
	HWND hwnd;
	UINT uMsg;
	WPARAM wParam;
	LPARAM lParam;
};

}
