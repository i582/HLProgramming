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

	win = new MainWindow(L"Новое окно", { 50, 50, 1000, 500 }, WS_OVERLAPPEDWINDOW);



	window.cbSize = sizeof(WNDCLASSEX);
	window.cbClsExtra = 0;
	window.cbWndExtra = 0;
	window.hbrBackground = CreateSolidBrush(0x282828);
	window.hCursor = LoadCursor(NULL, IDC_ARROW);
	window.hIcon = 0;
	window.hIconSm = 0;
	window.hInstance = nullptr;
	window.lpfnWndProc = App::StaticWndProc;
	window.lpszClassName = L"MyApp";
	window.lpszMenuName = nullptr;
	window.style = CS_VREDRAW | CS_HREDRAW;

	if (!RegisterClassEx(&window))
	{
		return EXIT_FAILURE;
	}

	if (hwnd = CreateWindow(
		window.lpszClassName,
		L"just window",
		WS_OVERLAPPEDWINDOW | WS_EX_CLIENTEDGE,
		100, 100, size.w, size.h,
		nullptr, nullptr,
		window.hInstance,
		this),

		hwnd == INVALID_HANDLE_VALUE)
	{
		return EXIT_FAILURE;
	}
	

	HWND button = CreateWindowEx(
		0,
		L"Button", L"Ввод",
		WS_CHILD | BS_PUSHBUTTON | WS_VISIBLE,
		100, 100, 70, 30, hwnd, (HMENU)(11),
		nullptr, nullptr);

	this->hdc = GetDC(hwnd);

	return true;
}

void App::setup()
{
	
	//viewport = new Viewport(hwnd, hdc, { 30, 30, 1000, 580 });



	RegisterHotKey(hwnd, 0, MOD_CONTROL, NIA_KEY_Z);
	RegisterHotKey(hwnd, 1, MOD_SHIFT | MOD_CONTROL, NIA_KEY_Z);


	AppendMenu((hFileMenu = CreatePopupMenu()), MF_ENABLED | MF_STRING, OPEN_FILE, L"&Открыть");
	AppendMenu(hFileMenu, MF_ENABLED | MF_STRING, SAVE_FILE, L"&Сохранить");
	AppendMenu((hHelpMenu = CreatePopupMenu()), MF_DISABLED | MF_STRING, 19, L"&About");
	hMenu = CreateMenu();
	AppendMenu(hMenu, MF_ENABLED | MF_POPUP, (UINT)hFileMenu, L"&Файл");
	AppendMenu(hMenu, MF_ENABLED | MF_POPUP, (UINT)hHelpMenu, L"&Помощь");



	AppendMenu(hFileMenu, MF_SEPARATOR, NULL, NULL);
	AppendMenu(hFileMenu, MF_UNCHECKED | MF_POPUP, (UINT)ENABLE_DELETE, L"&Включить удаление");
	AppendMenu(hFileMenu, MF_UNCHECKED | MF_POPUP, (UINT)ENABLE_ADD, L"&Включить добавление");


	SetMenu(hwnd, hMenu);
	UpdateWindow(hwnd);


}

void App::update()
{
}

void App::handleUserEvent()
{
}

bool App::filterUserEvent(UEvent* ue)
{
	return false;
}

vector<Point> App::split(string str)
{
	return vector<Point>();
}


LRESULT App::StaticWndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	if (instance != nullptr)
	{
		return instance->WndProc(hwnd, uMsg, wParam, lParam);
	}

	return DefWindowProc(hwnd, uMsg, wParam, lParam);
}


LRESULT __stdcall App::WndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	e = { hwnd, uMsg, wParam, lParam };

	switch (uMsg)
	{

	case WM_PAINT:
	{
		
		return 0;
	}

	case WM_LBUTTONDOWN:
	{
		BEGIN_MESSAGE_MAP
		break;
	}

	case WM_HOTKEY:
	{
	
		break;
	}

	case WM_MOUSEMOVE:
	{
		
		break;
	}

	case WM_MOUSEWHEEL:
	{
		
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

	handleUserEvent();

	return DefWindowProc(hwnd, uMsg, wParam, lParam);
}

void App::notify(UEvent* ue)
{
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
