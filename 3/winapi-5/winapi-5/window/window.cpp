#include "window.h"
#include "conio.h"

Window::Window(wstring title, Rect size)
{
	this->title = title;
	this->size = size;

	this->init();
}

bool Window::init()
{
	wc.cbSize = sizeof(WNDCLASSEX);
	wc.cbClsExtra = 0;
	wc.cbWndExtra = 0;
	wc.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
	wc.hCursor = 0;
	wc.hIcon = 0;
	wc.hIconSm = 0;
	wc.hInstance = nullptr;
	wc.lpfnWndProc = Window::StaticWndProc;
	wc.lpszClassName = title.c_str();
	wc.lpszMenuName = nullptr;
	wc.style = CS_VREDRAW | CS_HREDRAW;

	if (!RegisterClassEx(&wc))
	{
		return EXIT_FAILURE;
	}

	if (hwnd = CreateWindow(
		wc.lpszClassName,
		L"just window",
		WS_OVERLAPPEDWINDOW,
		size.x, size.y, size.w, size.h,
		nullptr, nullptr,
		wc.hInstance,
		this),

		hwnd == INVALID_HANDLE_VALUE)
	{
		return EXIT_FAILURE;
	}

	this->hdc = GetDC(hwnd);

	return EXIT_SUCCESS;
}

LRESULT __stdcall Window::StaticWndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	Window* window;

	if (uMsg == WM_CREATE)
	{
		window = (Window*)((CREATESTRUCT*)lParam)->lpCreateParams;
		SetLastError(0);
		if (!SetWindowLongPtr(hwnd, GWLP_USERDATA, (LONG_PTR)window))
		{
			if (GetLastError() != 0)
				return 0;
		}
	}
	else
	{
		window = (Window*)GetWindowLongPtr(hwnd, GWLP_USERDATA);
	}

	if (window != nullptr)
	{
		window->hwnd = hwnd;
		return window->WndProc(hwnd, uMsg, wParam, lParam);
	}

	return DefWindowProc(hwnd, uMsg, wParam, lParam);
}

LRESULT __stdcall Window::WndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	e = { hwnd, uMsg, wParam, lParam };

	PAINTSTRUCT ps;
	HDC hCmpDC;

	HandleEvent(&e);

	return DefWindowProc(hwnd, uMsg, wParam, lParam);
}


HWND Window::get_hwnd()
{
	return hwnd;
}

HDC Window::get_hdc()
{
	return hdc;
}
