#pragma once

#pragma comment(linker,"\"/manifestdependency:type='win32' \
name='Microsoft.Windows.Common-Controls' version='6.0.0.0' \
processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")

#include "windows.h"
#include "commctrl.h"
#include "string"
#include "vector"

using namespace std;

typedef COLORREF HexColor;



#define SelectPen(hdc, hpen) \
  ((HPEN)SelectObject((hdc), (HGDIOBJ)(HPEN)(hpen)))

#define SelectBrush(hdc, hbrush) \
  ((HBRUSH)SelectObject((hdc), (HGDIOBJ)(HBRUSH)(hbrush)))

#define SelectFont(hdc, hfont) \
  ((HFONT)SelectObject((hdc), (HGDIOBJ)(HFONT)(hfont)))

#define KEY_IS_PRESSED(key) GetKeyState(key) < 0
#define NIA_KEY_Z 0x5a


#define _set
#define _get
#define _event
#define _state

#define _interface struct
#define _callback static
#define _callbacks public



enum LVAlign
{
	LEFT = LVCFMT_LEFT,
	CENTERED = LVCFMT_CENTER,
	RIGHT = LVCFMT_RIGHT
};
