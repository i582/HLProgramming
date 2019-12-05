#pragma once

#pragma comment(linker,"\"/manifestdependency:type='win32' \
name='Microsoft.Windows.Common-Controls' version='6.0.0.0' \
processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")

#include "windows.h"
#include "commctrl.h"

#define SelectPen(hdc, hpen) \
  ((HPEN)SelectObject((hdc), (HGDIOBJ)(HPEN)(hpen)))

#define SelectBrush(hdc, hbrush) \
  ((HBRUSH)SelectObject((hdc), (HGDIOBJ)(HBRUSH)(hbrush)))

#define SelectFont(hdc, hfont) \
  ((HFONT)SelectObject((hdc), (HGDIOBJ)(HFONT)(hfont)))


namespace winlib
{
	typedef COLORREF Color;
}
