#include "nia_lib.h"

RECT Rect::to_rect()
{
	return { x, y, x + w, y + h };
}

Point NIA_GetCursorPosition()
{
	POINT p;
	GetCursorPos(&p);
	return { p.x, p.y };
}

void NIA_GetCursorPosition(HDC hdc, Point* p)
{
	POINT point;
	HWND hwnd = WindowFromDC(hdc);
	GetCursorPos(&point);
	ScreenToClient(hwnd, &point);
	p->x = point.x;
	p->y = point.y;
}

void NIA_GetCursorPosition(Event* e, Point* p)
{
	p->x = LOWORD(e->lParam);
	p->y = HIWORD(e->lParam);
}

bool NIA_PointInRect(Point p, Rect* r)
{
	return PtInRect(&r->to_rect(), p);
}

bool NIA_PointInCircle(Point p, Point center, int rad)
{
	return (p.x - center.x) * (p.x - center.x) + (p.y - center.y) * (p.y - center.y) <= rad*rad;
}

void NIA_SetCurrentBitmap(HDC dst_hdc, HBITMAP dst_bitmap)
{
	SelectObject(dst_hdc, dst_bitmap);
}

void NIA_BitmapCopy(HDC dst_hdc, HDC src_hdc, Rect* src, Rect* dst)
{
	SetStretchBltMode(dst_hdc, COLORONCOLOR);

	if (src == nullptr)
	{
		src = new Rect;
		*src = { 0, 0, 0, 0 };

		BitBlt(dst_hdc, dst->x, dst->y, dst->w, dst->h,
			src_hdc, src->x, src->y, SRCCOPY);
		
		delete src;
		return;
	}

	BitBlt(dst_hdc, dst->x, dst->y, dst->w, dst->h,
		src_hdc, src->x, src->y, SRCCOPY);
}

void NIA_FillRect(HDC dst_hdc, Rect rect, HexColor color)
{
	LOGBRUSH br;
	br.lbStyle = BS_SOLID;
	br.lbColor = color;
	HBRUSH brush;
	brush = CreateBrushIndirect(&br);
	FillRect(dst_hdc, &rect.to_rect(), brush);
	DeleteObject(brush);
}

void NIA_DrawLine(HDC dst_hdc, Line line, HexColor color, int thickness)
{
	HPEN pen = CreatePen(PS_SOLID, thickness, color);
	SelectPen(dst_hdc, pen);
	MoveToEx(dst_hdc, line.x1, line.y1, nullptr);
	LineTo(dst_hdc, line.x2, line.y2);

	DeleteObject(pen);
}

void NIA_FillEllipse(HDC dst_hdc, Point point, int radius, HexColor color)
{
	LOGBRUSH br;
	br.lbStyle = BS_SOLID;
	br.lbColor = color;
	HBRUSH brush;
	brush = CreateBrushIndirect(&br);
	Ellipse(dst_hdc, point.x - radius, point.y - radius, point.x + radius, point.y + radius);

	DeleteObject(brush);
}

HFONT NIA_LoadFont(wstring name, int size)
{
	return CreateFont(size, NULL, 0, 0, FW_NORMAL, FALSE, FALSE, FALSE, DEFAULT_CHARSET, OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS, DEFAULT_QUALITY, VARIABLE_PITCH, name.c_str());
}

void NIA_CloseFont(HFONT font)
{
	DeleteObject((HGDIOBJ)font);
}

void NIA_RenderText(HDC dst_hdc, HFONT font, wstring text, Rect size)
{
	SelectFont(dst_hdc, font);
	ExtTextOut(dst_hdc, size.x, size.y, ETO_CLIPPED, NULL, text.c_str(), text.length(), NULL);
}

wstring NIA_ShowOpenFileDialog(HWND hwnd, LPCWSTR filter)
{
	OPENFILENAME* of = (OPENFILENAME*)calloc(1, sizeof(OPENFILENAME));

	WCHAR path[255] = L"\0";



	of->lStructSize = sizeof(OPENFILENAME);
	of->hwndOwner = hwnd;
	of->hInstance = NULL;
	of->lpstrFilter = filter;
	of->lpstrCustomFilter = NULL;
	of->nMaxCustFilter = NULL;
	of->nFilterIndex = 1;
	of->lpstrFile = path;
	of->nMaxFile = 256;
	of->lpstrFileTitle = NULL;
	of->nMaxFileTitle = NULL;
	of->lpstrInitialDir = NULL;
	of->lpstrTitle = NULL;

	of->Flags = OFN_FILEMUSTEXIST | OFN_EXPLORER;
	of->nFileOffset = NULL;
	of->nFileExtension = NULL;
	of->lpstrDefExt = NULL;
	of->lCustData = NULL;
	of->lpfnHook = NULL;
	of->lpTemplateName = NULL;

	GetOpenFileName(of);
	

	wstring path_string = path;
	return path_string;
}


wstring NIA_ShowSaveFileDialog(HWND hwnd, LPCWSTR filter)
{
	OPENFILENAME* of = (OPENFILENAME*)calloc(1, sizeof(OPENFILENAME));

	WCHAR path[255] = L"\0";

	of->lStructSize = sizeof(OPENFILENAME);
	of->hwndOwner = hwnd;
	of->hInstance = NULL;
	of->lpstrFilter = filter;
	of->lpstrCustomFilter = NULL;
	of->nMaxCustFilter = NULL;
	of->nFilterIndex = NULL;
	of->lpstrFile = path;
	of->nMaxFile = 256;
	of->lpstrFileTitle = NULL;
	of->nMaxFileTitle = NULL;
	of->lpstrInitialDir = NULL;
	of->lpstrTitle = NULL;

	of->Flags = NULL;
	of->nFileOffset = NULL;
	of->nFileExtension = NULL;
	of->lpstrDefExt = NULL;
	of->lCustData = NULL;
	of->lpfnHook = NULL;
	of->lpTemplateName = NULL;

	GetSaveFileName(of);


	wstring path_string = path;
	return path_string;
}

HANDLE NIA_OpenFile(wstring path, DWORD dwAccess, DWORD dwShareMode)
{
	return CreateFile(path.c_str(), dwAccess, dwShareMode, NULL, OPEN_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
}

void* NIA_ReadFile(HWND hwnd, LPCWSTR filter)
{
	wstring path = NIA_ShowOpenFileDialog(hwnd, filter);

	HANDLE file = NIA_OpenFile(path);

	DWORD file_size;
	file_size = GetFileSize(file, nullptr);

	char* buffer = new char[file_size + 10];

	DWORD count_read;

	ReadFile(file, buffer, file_size, &count_read, nullptr);

	buffer[count_read] = '\0';

	CloseHandle(file);

	return buffer;
}

void NIA_WriteFile(HWND hwnd, LPCWSTR filter, char* buffer, size_t count)
{
	wstring path = NIA_ShowSaveFileDialog(hwnd, filter);

	HANDLE file = NIA_OpenFile(path);

	DWORD count_read;

	WriteFile(file, buffer, count, &count_read, nullptr);

	CloseHandle(file);
}


