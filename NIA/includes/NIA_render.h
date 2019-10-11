#pragma once

#include "NIA_main.h"
#include "NIA_rect.h"


namespace NIA
{

	struct Render
	{

		static void setCurrentBitmap(HDC hdc, HBITMAP bitmap);

		static void bitmapCopy(HDC dst_hdc, HDC src_hdc, Rect* src, Rect* dst);

		// todo 
		static HINSTANCE getInstanceFromHwnd(HWND hwnd);


	};

}