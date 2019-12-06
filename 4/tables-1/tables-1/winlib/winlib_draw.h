#pragma once
#include "winlib_main.h"
#include "winlib_font.h"
#include "winlib_rect.h"

namespace winlib
{


	struct Draw
	{
		static void text(HDC dst_hdc, HFONT font, const string& text, const Rect& size);
	};


}