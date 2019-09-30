#include "window.h"

int Window::count_window = 0;

Window::Window(wstring title, Rect size, DWORD flags)
{
	this->title = title;
	this->size = size;
	this->flags = flags;
	
	this->init();
}

int Window::init()
{
	wstring class_name = L"window" + to_wstring(Window::count_window);

	wc.cbSize = sizeof(WNDCLASSEX);
	wc.cbClsExtra = NULL;
	wc.cbWndExtra = NULL;
	wc.hbrBackground = CreateSolidBrush(0xffffff);
	wc.hCursor = LoadCursor(NULL, IDC_ARROW);
	wc.hIcon = NULL;
	wc.hIconSm = NULL;
	wc.hInstance = nullptr;
	wc.lpfnWndProc = Window::staticWndProc;
	wc.lpszClassName = class_name.c_str();
	wc.lpszMenuName = nullptr;
	wc.style = CS_VREDRAW | CS_HREDRAW;

	if (!RegisterClassEx(&wc))
	{
		return EXIT_FAILURE;
	}

	if (hwnd = CreateWindow(
		wc.lpszClassName,
		title.c_str(),
		flags,
		size.x, size.y, size.w, size.h,
		nullptr, nullptr,
		wc.hInstance,
		this),

		hwnd == INVALID_HANDLE_VALUE)
	{
		return EXIT_FAILURE;
	}

	Window::count_window++;

	this->hdc = GetDC(hwnd);


}

HWND Window::get_hwnd()
{
	return hwnd;
}

HDC Window::get_hdc()
{
	return hdc;
}

HFONT Window::get_font()
{
	return font;
}

LRESULT __stdcall Window::staticWndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
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
		return window->mainWndProc(hwnd, uMsg, wParam, lParam);
	}

	return DefWindowProc(hwnd, uMsg, wParam, lParam);
}

void Window::show()
{
	ShowWindow(hwnd, SW_SHOWDEFAULT);
	UpdateWindow(hwnd);
}

void Window::hide()
{
	ShowWindow(hwnd, SW_HIDE);
	UpdateWindow(hwnd);
}

bool Window::is_showed()
{
	return IsWindowVisible(hwnd);
}

void Window::close()
{
	DestroyWindow(hwnd);
}
