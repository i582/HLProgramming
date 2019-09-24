#include "App.h"

App* App::instance = nullptr;
vector <UEvent*> App::events = {};

UEvent* App::push_event(UEvent* ev)
{
	events.push_back(ev);
	return ev;
}

App::App()
{
	this->width = 1200;
	this->height = 700;
}

App* App::get_instance()
{
	if (instance == nullptr)
		instance = new App;

	return instance;
}

App::~App()
{
}

int App::init()
{
	wc.cbSize = sizeof(WNDCLASSEX);
	wc.cbClsExtra = 0;
	wc.cbWndExtra = 0;
	wc.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
	wc.hCursor = 0;
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
		100, 100, width, height,
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
	/*button = CreateWindowEx(
		0,
		L"Button", L"Ввод",
		WS_CHILD | BS_PUSHBUTTON | WS_VISIBLE,
		100, 100, 70, 30, hwnd, (HMENU)(App::OBJECTS_ID::ENTER_BUTTON),
		nullptr, nullptr);

	input = CreateWindowEx(
		WS_EX_CLIENTEDGE,
		L"Edit", L"11",
		WS_CHILD | ES_AUTOHSCROLL | WS_VISIBLE,
		100, 160, 70, 20, hwnd, (HMENU)(App::OBJECTS_ID::INPUT),
		nullptr, nullptr);

	input1 = CreateWindowEx(
		WS_EX_CLIENTEDGE,
		L"Edit", L"11",
		WS_CHILD | ES_AUTOHSCROLL | WS_VISIBLE,
		100, 200, 70, 20, hwnd, (HMENU)(App::OBJECTS_ID::INPUT),
		nullptr, nullptr);
*/

	hdc = GetDC(hwnd);
	viewport = new Viewport(hwnd, hdc, { 30, 30, 1000, 580 });




	AppendMenu((hFileMenu = CreatePopupMenu()), MF_ENABLED | MF_STRING, OPEN_FILE, L"&Открыть");
	AppendMenu(hFileMenu, MF_ENABLED | MF_STRING, SAVE_FILE, L"&Сохранить");
	AppendMenu((hHelpMenu = CreatePopupMenu()), MF_DISABLED | MF_STRING, 19, L"&About");
	hMenu = CreateMenu();
	AppendMenu(hMenu, MF_ENABLED | MF_POPUP, (UINT)hFileMenu, L"&Файл");
	AppendMenu(hMenu, MF_ENABLED | MF_POPUP, (UINT)hHelpMenu, L"&Помощь");



	//AppendMenu(hFileMenu, MF_SEPARATOR | MF_POPUP, (UINT)5, L"");
	AppendMenu(hFileMenu, MF_SEPARATOR, NULL, NULL);
	AppendMenu(hFileMenu, MF_UNCHECKED | MF_POPUP, (UINT)ENABLE_DELETE, L"&Включить удаление");
	AppendMenu(hFileMenu, MF_UNCHECKED | MF_POPUP, (UINT)ENABLE_ADD, L"&Включить добавление");
	

	SetMenu(hwnd, hMenu);
	UpdateWindow(hwnd);


}

LRESULT App::StaticWndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	App* app;

	if (uMsg == WM_CREATE)
	{
		app = (App*)((CREATESTRUCT*)lParam)->lpCreateParams;
		SetLastError(0);
		if (!SetWindowLongPtr(hwnd, GWLP_USERDATA, (LONG_PTR)app))
		{
			if (GetLastError() != 0)
				return 0;
		}
	}
	else
	{
		app = (App*)GetWindowLongPtr(hwnd, GWLP_USERDATA);
	}

	if (app != nullptr)
	{
		app->hwnd = hwnd;
		return app->WndProc(hwnd, uMsg, wParam, lParam);
	}

	return DefWindowProc(hwnd, uMsg, wParam, lParam);
}

LRESULT App::WndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	e = { hwnd, uMsg, wParam, lParam };

	PAINTSTRUCT ps;
	HDC hCmpDC;

	switch (uMsg)
	{

	case WM_PAINT:
	{
		hCmpDC = BeginPaint(hwnd, &ps);
		viewport->render();
		EndPaint(hwnd, &ps);
		return 0;
	}

	case WM_LBUTTONDOWN:
	{
		NIA_GetCursorPosition(hdc, &mouse);
		NIA_GetCursorPosition(hdc, &mouse_prev);

		if (viewport->on_hover(mouse))
		{
			viewport->mouseButtonDown(&e);
		}

		viewport->render();
		break;
	}

	case WM_MOUSEMOVE:
	{
		if (wParam == MK_LBUTTON)
		{
			NIA_GetCursorPosition(hdc, &mouse);

			int dx = mouse.x - mouse_prev.x;
			int dy = mouse.y - mouse_prev.y;
			
			viewport->get_canvas()->shift_start_point(dx, dy);
			viewport->render();

			NIA_GetCursorPosition(hdc, &mouse_prev);
		}
		break;
	}

	case WM_MOUSEWHEEL:
	{
		int rel = GET_WHEEL_DELTA_WPARAM(wParam);

		
		viewport->shift_scale(rel / 100);
		viewport->render();

		break;
	}

	case WM_COMMAND:
	{

		switch (LOWORD(wParam))
		{

		case SAVE_FILE:
		{

			OPENFILENAME* of = (OPENFILENAME*)calloc(1, sizeof(OPENFILENAME));

			wstring filter = L"PNG files(*.png)\0*.png\0All files(*.*)\0*.*\0\0";

			WCHAR path[255] = L"\0";

			of->lStructSize = sizeof(OPENFILENAME);
			of->hwndOwner = hwnd;
			of->hInstance = NULL;
			of->lpstrFilter = filter.c_str();
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

			if (GetSaveFileName(of))
			{
				MessageBox(NULL, path, L"Click", MB_ICONINFORMATION);
			}
			else
			{
				MessageBox(NULL, to_wstring(GetLastError()).c_str(), L"Click", MB_ICONINFORMATION);
				
			}

			break;
		}

		case ENABLE_DELETE:
		{
			if (GetMenuState(hFileMenu, ENABLE_DELETE, NULL) == MF_CHECKED)
				CheckMenuItem(hFileMenu, ENABLE_DELETE, MF_UNCHECKED);
			else
				CheckMenuItem(hFileMenu, ENABLE_DELETE, MF_CHECKED);
			DrawMenuBar(hwnd);
			break;
		}

		case ENABLE_ADD:
		{
			if (GetMenuState(hFileMenu, ENABLE_ADD, NULL) == MF_CHECKED)
				CheckMenuItem(hFileMenu, ENABLE_ADD, MF_UNCHECKED);
			else
				CheckMenuItem(hFileMenu, ENABLE_ADD, MF_CHECKED);
			DrawMenuBar(hwnd);
			break;
		}

		

		default:break;
		}

		return 0;
	}

	case WM_DESTROY:
	{
		PostQuitMessage(EXIT_SUCCESS);

		return EXIT_SUCCESS;
	}

	}

	HandleUserEvent();

	return DefWindowProc(hwnd, uMsg, wParam, lParam);
}

void App::HandleUserEvent()
{

	while (events.size())
	{
		UEvent* ue = events.front();
		events.pop_back();

		if (FilterUserEvent(ue))
		{
			viewport->notify(ue);
		}
		
		
	}
	if (viewport != nullptr)
		viewport->render();
}

bool App::FilterUserEvent(UEvent* ue)
{
	if (ue->common.action == DELETE_POINT)
	{
		if (GetMenuState(hFileMenu, ENABLE_DELETE, NULL) == MF_UNCHECKED)
		{
			return false;
		}
	}

	if (ue->common.action == ADD_POINT)
	{
		if (GetMenuState(hFileMenu, ENABLE_ADD, NULL) == MF_UNCHECKED)
		{
			return false;
		}
	}
	

	return true;
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
