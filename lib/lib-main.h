#pragma once

#define _CRT_SECURE_NO_WARNINGS

#pragma comment(linker,"\"/manifestdependency:type='win32' \
name='Microsoft.Windows.Common-Controls' version='6.0.0.0' \
processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")

#include "windows.h"
#include "commctrl.h"
#include "string"
#include "vector"
#include "iostream"



typedef COLORREF HexColor;

#define SelectPen(hdc, hpen) \
  ((HPEN)SelectObject((hdc), (HGDIOBJ)(HPEN)(hpen)))

#define SelectBrush(hdc, hbrush) \
  ((HBRUSH)SelectObject((hdc), (HGDIOBJ)(HBRUSH)(hbrush)))

#define SelectFont(hdc, hfont) \
  ((HFONT)SelectObject((hdc), (HGDIOBJ)(HFONT)(hfont)))

#define KEY_IS_PRESSED(key) GetKeyState(key) < 0