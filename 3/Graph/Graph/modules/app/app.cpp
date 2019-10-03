#include "app.h"

App* App::instance = nullptr;

App* App::get_instance()
{
	if (instance == nullptr)
		instance = new App;

	return instance;
}

vector <UEvent*> App::events = {};

UEvent* App::push_event(UEvent* ev)
{
	events.push_back(ev);
	return ev;
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
	setup_menu();

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
		mouse = NIA::Mouse::position(&e);

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
			/*NIA_GetCursorPosition(&e, &mouse);
			Point delta = mouse - mouse_prev;
			NIA_GetCursorPosition(&e, &mouse_prev);*/

			/*mouse = NIA::Mouse::GetPosition(&e);
			Point delta = mouse - mouse_prev;
			mouse_prev = NIA::Mouse::GetPosition(&e);*/

			Point delta = NIA::Mouse::delta(hdc);

			//Point delta = NIA::GetMouseDelta(&e, &mouse, &mouse_prev);


			viewport->get_graph()->shift_start_position(delta);
			viewport->render();

			
		}
		break;
	}

	case WM_MOUSEWHEEL:
	{
		mouse = NIA::Mouse::position(hdc);
		viewport->adjust(mouse);

		Point before = viewport->get_graph()->normalize(mouse);

		double rel = GET_WHEEL_DELTA_WPARAM(wParam) / 120.;
		viewport->shift_scale(rel);

		Point after = viewport->get_graph()->normalize(mouse);

		Point delta = (before - after) / viewport->get_scale();
		delta.y = delta.y * -1;
		viewport->get_graph()->shift_start_position(delta);

		viewport->render();

		wstring scale_text = NIA::to_wstring(viewport->get_scale(), 2) + L"%";
		SetWindowText(input, scale_text.c_str());
		break;
	}

	case WM_COMMAND:
	{

		switch (LOWORD(wParam))
		{

		case OPEN_FILE:
		{
			open_file();
			break;
		}

		case SAVE_FILE:
		{
			save_file();
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

		return 0;
	}

	}

	handleUserEvent();


	return DefWindowProc(hwnd, uMsg, wParam, lParam);
}

void App::notify(UEvent* ue)
{
	if (!ue->common.recipient == R_APP)
		return;

	if (ue->common.action == SAVE_POINTS)
	{
		string* data = (string*)ue->common.data;
		NIA_WriteFile(hwnd, L"txt files(*.txt)\0*.txt\0", (char*)data->c_str(), data->size());
		MessageBox(NULL, L"Файл сохранен!", L"Сохранение успешно", MB_ICONINFORMATION);
	}

}

void App::handleUserEvent()
{
	while (events.size())
	{
		UEvent* ue = events.front();
		events.pop_back();

		if (filterUserEvent(ue))
		{
			viewport->notify(ue);
			this->notify(ue);
		}

		if (viewport != nullptr)
			viewport->render();
	}
}

bool App::filterUserEvent(UEvent* ue)
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

void App::setup_menu()
{
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

void App::open_file()
{
	char* buffer = (char*)NIA_ReadFile(hwnd, L"txt files(*.txt)\0*.txt\0");
	string str(buffer);
	vector<Point2D>* points = Point2D::to_points(to_double(NIA::split(str, " \t\n")));

	delete buffer;

	App::push_event(new UEvent(C_APP, R_GRAPH, SET_POINTS, -1, points));
	update();
}

void App::save_file()
{
	App::push_event(new UEvent(C_APP, R_GRAPH, GET_POINTS, -1));
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
