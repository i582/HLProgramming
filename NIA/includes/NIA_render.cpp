#include "NIA_render.h"

void NIA::Render::setCurrentBitmap(HDC hdc, HBITMAP bitmap)
{
	SelectObject(hdc, bitmap);
}

void NIA::Render::bitmapCopy(HDC dst_hdc, HDC src_hdc, Rect* src, Rect* dst)
{
	SetStretchBltMode(dst_hdc, COLORONCOLOR);

	if (src == nullptr)
	{
		BitBlt(dst_hdc, dst->x, dst->y, dst->w, dst->h,
			src_hdc, 0, 0, SRCCOPY);
		return;
	}

	BitBlt(dst_hdc, dst->x, dst->y, dst->w, dst->h,
		src_hdc, src->x, src->y, SRCCOPY);
}

HINSTANCE NIA::Render::getInstanceFromHwnd(HWND hwnd)
{
	return (HINSTANCE)GetWindowLong(hwnd, GWL_HINSTANCE);
}
