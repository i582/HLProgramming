#pragma once

#include "NIA_main.h"

#include "NIA_render.h"

namespace NIA
{

	struct Image
	{
		static HBITMAP load(HWND hwnd, const wstring& path, int width, int height);
		static HICON loadIcon(HWND hwnd, const wstring& path, int width, int height);

	};

}