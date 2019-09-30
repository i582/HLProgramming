#include "app.h"

App* App::instance = nullptr;

App* App::get_instance()
{
	if (instance == nullptr)
		instance = new App;

	return instance;
}

App::App()
{
	this->size.w = 1200;
	this->size.h = 700;
}

int App::init()
{
	wc.cbSize = sizeof(WNDCLASSEX);
	wc.cbClsExtra = 0;
	wc.cbWndExtra = 0;
	wc.hbrBackground = CreateSolidBrush(0xffffff);
	wc.hCursor = LoadCursor(NULL, IDC_ARROW);
	wc.hIcon = 0;
	wc.hIconSm = 0;
	wc.hInstance = nullptr;
	wc.lpfnWndProc = App::StaticWndProc;
	wc.lpszClassName = L"MyApp";
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
		100, 100, size.w, size.h,
		nullptr, nullptr,
		wc.hInstance,
		this),

		hwnd == INVALID_HANDLE_VALUE)
	{
		return EXIT_FAILURE;
	}

	this->hdc = GetDC(hwnd);

	return true;
}

void App::setup()
{

	viewport = new Viewport(hwnd, hdc, { 30, 30, 1000, 580 });


	HFONT font = NIA_LoadFont(L"OpenSans", 16);
	input = CreateWindowEx(
		NULL,
		L"Edit", L"",
		WS_CHILD | ES_AUTOHSCROLL | WS_VISIBLE | DS_SETFONT,
		30, 10, 100, 20, hwnd, (HMENU)(11),
		nullptr, nullptr);
	SendMessage(input, WM_SETFONT, (WPARAM)font, TRUE);

	Point point(10, 17);
	Rect rect(0, 0, 20, 20);
	Circle circle(10, 10, 6);

	if (point.in(circle))
	{
		MessageBox(NULL, L"Файл сохранен!", L"Сохранение успешно", MB_ICONINFORMATION);
	}

	Point2D pta(12, 15);
	Point2D pt = pta / 10;

	double a = to_double("2421.32 in rect");

	wstring num = NIA::to_wstring(12412.34, 3);
	

	//MessageBox(NULL, to_wstring(rgb(0xff00ff)).c_str(), L"Сохранение успешно", MB_ICONINFORMATION);
	
	string str = "ss";

	vector<wstring>* res = NIA::split(L"123.2 2442.5\n232.1 95.76", L"\n\t ");
	
	
	vector<Point2D>* points = Point2D::to_points(to_double(res));


	wstring file = join(NIA::to_wstring(points, L" "), L"\n");

	vector<int>* nums = to_integer(res);

	HexColor red = rgb(255, 0, 0);
	
}

void App::update()
{
	viewport->render();
}

LRESULT App::StaticWndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	if (instance != nullptr)
	{
		return instance->WndProc(hwnd, uMsg, wParam, lParam);
	}

	return DefWindowProc(hwnd, uMsg, wParam, lParam);
}

LRESULT App::WndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	e = { hwnd, uMsg, wParam, lParam };

	
	switch (uMsg)
	{




	case WM_PAINT:
	{
		HDC hdc_temp = BeginPaint(hwnd, &ps);
		viewport->render();
		EndPaint(hwnd, &ps);
		return 0;
	}

	case WM_LBUTTONDOWN:
	{
		NIA_GetCursorPosition(&e, &mouse);
		NIA_GetCursorPosition(&e, &mouse_prev);

		if (viewport->on_hover(mouse))
		{
			viewport->mouseButtonDown(&e);
		}

		viewport->render();
		break;
	}

	case WM_HOTKEY:
	{

		
		break;
	}


	case WM_MOUSEMOVE:
	{
		if (wParam == (MK_LBUTTON))
		{
			NIA_GetCursorPosition(&e, &mouse);

			Point delta = mouse - mouse_prev;
			

			viewport->get_graph()->shift_start_position(delta);
			viewport->render();

			NIA_GetCursorPosition(&e, &mouse_prev);
		}
		break;
	}

	case WM_MOUSEWHEEL:
	{
		double rel = GET_WHEEL_DELTA_WPARAM(wParam) / 120.;
		viewport->shift_scale(rel);
		viewport->render();

		wstring scale_text = NIA::to_wstring(viewport->get_scale(), 2) + L"%";
		SetWindowText(input, scale_text.c_str());
		break;
	}

	case WM_COMMAND:
	{

		switch (LOWORD(wParam))
		{

		
		default:break;
		}

		return 0;
	}

	case WM_DESTROY:
	{
		PostQuitMessage(EXIT_SUCCESS);

		return 0;
	}

	}


	return DefWindowProc(hwnd, uMsg, wParam, lParam);
}

void App::handleUserEvent()
{
}

vector<Point> App::split(string str)
{
	return vector<Point>();
}

int App::run()
{
	init();
	setup();

	ShowWindow(hwnd, SW_SHOWDEFAULT);
	UpdateWindow(hwnd);

	while (GetMessage(&msg, hwnd, 0, 0))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}

	return (int)msg.wParam;
}
