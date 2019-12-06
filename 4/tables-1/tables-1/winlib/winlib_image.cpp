#include "winlib_image.h"

HINSTANCE winlib::Image::getInstanceFromHwnd(HWND hwnd)
{
	return (HINSTANCE)GetWindowLong(hwnd, GWL_HINSTANCE);
}

HBITMAP winlib::Image::load(HWND hwnd, string path, int width, int height)
{
	HINSTANCE hInst = winlib::Image::getInstanceFromHwnd(hwnd);
	return (HBITMAP)LoadImage(hInst, path.c_str(), IMAGE_BITMAP, width, height, LR_LOADFROMFILE);
}

HICON winlib::Image::loadIcon(HWND hwnd, string path, int width, int height)
{
	HINSTANCE hInst = winlib::Image::getInstanceFromHwnd(hwnd);
	return (HICON)LoadImage(hInst, path.c_str(), IMAGE_ICON, width, height, LR_LOADFROMFILE);;
}
