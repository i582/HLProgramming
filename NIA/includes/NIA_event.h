#pragma once

#include "NIA_main.h"

namespace NIA
{
	
struct Event
{
	HWND hwnd;
	UINT uMsg;
	WPARAM wParam;
	LPARAM lParam;
};

}
