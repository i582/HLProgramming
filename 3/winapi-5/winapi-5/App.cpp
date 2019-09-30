#include "App.h"

App* App::instance = nullptr;
vector <UEvent*> App::events = {};

vector <Command*> App::commands = {};
int App::now_command = -1;


UEvent* App::push_event(UEvent* ev)
{
	events.push_back(ev);
	return ev;
}

Command* App::push_command(Command* command)
{
	int count = commands.size() - 1;
	if (now_command < count)
	{
		for (size_t i = 0; i < count - now_command; i++)
		{
			commands.pop_back();
		}
	}

	commands.push_back(command);
	command->execute();
	now_command++;

	App::get_instance()->update();

	return command;
}

void App::undo()
{
	if (now_command >= 0)
	{
		commands.at(now_command)->unexecute();
		App::get_instance()->update();
		now_command--;
	}
	else
	{
		MessageBox(NULL, L"Начало очереди", L"Click", MB_ICONINFORMATION);
	}
}

void App::redo()
{
	int count = commands.size() - 1;
	if (now_command < count)
	{
		now_command++;
		commands.at(now_command)->execute();

		App::get_instance()->update();

	}
	else
	{
		MessageBox(NULL, L"Конец очереди", L"Click", MB_ICONINFORMATION);
	}
}

void App::clear_commands()
{
	App::commands.clear();
	App::now_command = -1;
}


App* App::get_instance()
{
	if (instance == nullptr)
		instance = new App;

	return instance;
}

App::App()
{
	this->width = 1200;
	this->height = 700;
}

int App::init()
{

	//window = new MainWindow(L"hello", { 100, 100, 1000, 400 });


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
	hdc = GetDC(hwnd);
	viewport = new Viewport(hwnd, hdc, { 30, 30, 1000, 580 });


	RegisterHotKey(hwnd, 0, MOD_CONTROL, NIA_KEY_Z); // z key
	RegisterHotKey(hwnd, 1, MOD_SHIFT | MOD_CONTROL, NIA_KEY_Z); // z key


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


	font = NIA_LoadFont(L"OpenSans", 16);

	input1 = CreateWindowEx(
		NULL,
		L"Edit", L"",
		WS_CHILD | ES_AUTOHSCROLL | WS_VISIBLE | DS_SETFONT,
		30, 10, 100, 20, hwnd, (HMENU)(11),
		nullptr, nullptr);

	SendMessage(input1, WM_SETFONT, (WPARAM)font, TRUE);

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

	case WM_HOTKEY:
	{

		if (LOWORD(lParam) == MOD_CONTROL && HIWORD(lParam) == NIA_KEY_Z)
		{
			App::undo();
		}
		else if (LOWORD(lParam) == (MOD_CONTROL | MOD_SHIFT) && HIWORD(lParam) == NIA_KEY_Z)
		{
			App::redo();
		}

		break;
	}


	case WM_MOUSEMOVE:
	{
		if (wParam == (MK_LBUTTON))
		{
			NIA_GetCursorPositionByEvent(&e, &mouse);

			int dx = (int)(mouse.x - mouse_prev.x) % 100;
			int dy = (int)(mouse.y - mouse_prev.y) % 100;
			
			viewport->get_canvas()->shift_start_point(dx, dy);
			viewport->render();

			NIA_GetCursorPositionByEvent(&e, &mouse_prev);
		}
		break;
	}

	case WM_MOUSEWHEEL:
	{
		int rel = GET_WHEEL_DELTA_WPARAM(wParam);

		
		
		viewport->shift_scale(rel / 120.);
		viewport->render();


		wstring scale_text = to_wstring(viewport->get_scale());
		scale_text = scale_text.substr(0, scale_text.find('.') + 2) + L"%";
		SetWindowText(input1, scale_text.c_str());

		break;
	}

	case WM_COMMAND:
	{

		switch (LOWORD(wParam))
		{

		case OPEN_FILE:
		{

			char* buffer;

			buffer = (char*)NIA_ReadFile(hwnd, L"txt files(*.txt)\0*.txt\0");

			string str(buffer);

			vector<Point>* points = new vector<Point>;
			*points = split_str(str);

			App::push_event(new UEvent(C_APP, R_GRAPH, SET_POINTS, -1, points));
			App::clear_commands();
			update();
			delete buffer;
			
			break;
		}

		case SAVE_FILE:
		{
			App::push_event(new UEvent(C_APP, R_GRAPH, GET_POINTS, -1));

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
			this->notify(ue);
		}
		
		if (viewport != nullptr)
			viewport->render();
	}

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

vector<Point> App::split_str(string str)
{
	vector <Point> points;

	int x = 0, y = 0;
	string temp;
	for (size_t i = 0; i < str.length(); i++)
	{

		if (str[i] == ' ')
		{
			x = atoi(temp.c_str());
			temp = "";
			continue;
		}
		else if (str[i] == '\r' && str[i + 1] == '\n')
		{
			y = atoi(temp.c_str());
			points.push_back({ (double)x, (double)y });
			i += 1;
			temp = "";

			
			continue;
		}
		else if (i == str.length() - 1)
		{
			temp += str[i];
			y = atoi(temp.c_str());
			points.push_back({ (double)x, (double)y });
			i += 1;
			temp = "";
			continue;
		}


		temp += str[i];
	}

	return points;
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
