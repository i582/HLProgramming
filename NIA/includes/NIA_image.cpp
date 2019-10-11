#include "NIA_image.h"

HBITMAP NIA::Image::load(HWND hwnd, const wstring& path, int width, int height)
{
	HINSTANCE hInst = NIA::Render::getInstanceFromHwnd(hwnd);
	return (HBITMAP)LoadImage(hInst, path.c_str(), IMAGE_BITMAP, width, height, LR_LOADFROMFILE);
}

HICON NIA::Image::loadIcon(HWND hwnd, const wstring& path, int width, int height)
{
	HINSTANCE hInst = NIA::Render::getInstanceFromHwnd(hwnd);
	HICON icon = (HICON)LoadImage(hInst, path.c_str(), IMAGE_ICON, width, height, LR_LOADFROMFILE);
	return icon;
}
