#pragma once

#include "winlib_main.h"
#include "string"



namespace winlib
{

using std::string;

struct Image
{
	static HINSTANCE getInstanceFromHwnd(HWND hwnd);

	static HBITMAP load(HWND hwnd, string path, int width, int height);
	static HICON loadIcon(HWND hwnd, string path, int width, int height);

};

}