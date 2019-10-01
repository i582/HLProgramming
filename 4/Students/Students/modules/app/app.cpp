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

BOOL WINAPI AddListViewItems(HWND hWndLV, int colNum, WCHAR** item)
{
	int iLastIndex = ListView_GetItemCount(hWndLV);

	LVITEM lvi;
	lvi.mask = LVIF_TEXT;
	lvi.cchTextMax = 255;
	lvi.iItem = iLastIndex;
	lvi.pszText = item[0];
	lvi.iSubItem = 0;

	if (ListView_InsertItem(hWndLV, &lvi) == -1)
		return FALSE;
	for (int i = 1; i < colNum + 1; i++)
		ListView_SetItemText(hWndLV, iLastIndex, i, item[i]);

	return TRUE;
}

int SetListViewColumns(HWND hWndLV, int colNum, WCHAR** header)
{
	RECT rcl;
	GetClientRect(hWndLV, &rcl);

	int index = -1;

	LVCOLUMN lvc;
	lvc.mask = LVCF_TEXT | LVCF_WIDTH;
	lvc.cx = (rcl.right - rcl.left) / colNum;
	lvc.cchTextMax = 255;

	for (int i = 0; i < colNum; i++)
	{
		lvc.pszText = header[i];
		index = ListView_InsertColumn(hWndLV, i, &lvc);
		if (index == -1) break;
	}

	return index;
}

HWND CreateListView(HWND hWndParent, UINT uId)
{
	INITCOMMONCONTROLSEX icex;
	icex.dwSize = sizeof(INITCOMMONCONTROLSEX);
	icex.dwICC = ICC_LISTVIEW_CLASSES;
	InitCommonControlsEx(&icex);

	RECT rcl = { 0, 0, 500, 500 };

	HWND hwndList = CreateWindow(WC_LISTVIEW, L"",
		WS_VISIBLE | WS_BORDER | WS_CHILD | LVS_REPORT | LVS_EDITLABELS,
		10, 10, 700, 500,
		hWndParent, (HMENU)12, nullptr, nullptr);

	// Чтобы определялись строка (item) и столбец (subitem) обязательно устанавливаем
	// расширенный стиль LVS_EX_FULLROWSELECT.
	ListView_SetExtendedListViewStyleEx(hwndList, 0, LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES | LVS_EX_DOUBLEBUFFER | LVS_EX_HEADERDRAGDROP | LVS_EX_UNDERLINECOLD);

	return (hwndList);
}

void App::setup()
{
	setup_menu();

	/*HFONT font = NIA_LoadFont(L"OpenSans", 16);
	input = CreateWindowEx(
		NULL,
		L"Edit", L"",
		WS_CHILD | ES_AUTOHSCROLL | WS_VISIBLE | DS_SETFONT,
		30, 10, 100, 20, hwnd, (HMENU)(11),
		nullptr, nullptr);
	SendMessage(input, WM_SETFONT, (WPARAM)font, TRUE);*/

	InitCommonControls();


	/*hwndList = CreateWindow(WC_LISTVIEW, L"",
		WS_VISIBLE | WS_BORDER | WS_CHILD | LVS_REPORT | LVS_EDITLABELS,
		10, 10, 700, 500,
		hwnd, (HMENU)12, nullptr, nullptr);


	ListView_SetExtendedListViewStyleEx(hwndList, 0, LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES | LVS_EX_DOUBLEBUFFER );

	InitListViewColumns(hwndList);

	InsertListViewItems(hwndList, 10);*/

	/*WCHAR* header[3] = { (WCHAR*)L"Item", (WCHAR*)L"Subitem0", (WCHAR*)L"Subitem2" };
	WCHAR* item[3][3] = { (WCHAR*)L"00", (WCHAR*)L"01",(WCHAR*)L"02", (WCHAR*)L"10", (WCHAR*)L"11", (WCHAR*)L"12", (WCHAR*)L"20", (WCHAR*)L"21", (WCHAR*)L"22" };


	hwndList = CreateListView(hwnd, 14);

	SetListViewColumns(hwndList, 3, header);
	AddListViewItems(hwndList, 3, item[0]);
	AddListViewItems(hwndList, 3, item[1]);
	AddListViewItems(hwndList, 3, item[2]);*/


	NIA::ListView* list;
	list = new ListView(hwnd, { 100, 100, 1000, 300 }, 1);

	list->add_header_collumn(new ListViewHeaderCollumn(list, L"#", 20));
	list->add_header_collumn(new ListViewHeaderCollumn(list, L"ФИО", 200))->fixed();
	list->add_header_collumn(new ListViewHeaderCollumn(list, L"Математика", 200));
	list->add_header_collumn(new ListViewHeaderCollumn(list, L"Русский язык", 150));
	list->add_header_collumn(new ListViewHeaderCollumn(list, L"Английский язык", 150));

	list->add_row();

	/*list->add_collumn(L"#", 20);
	list->add_collumn(L"ФИО", 200, ListViewAlign::CENTERED);
	list->add_collumn(L"Математика", 100);
	list->add_collumn(L"Русский язык", 150);
	list->add_collumn(L"Английский язык", 150);*/


	/*LVCOLUMNW col;

	WCHAR tex[255] = L"Hello\0";
	
	col.mask = LVCF_TEXT;
	col.fmt = LVCFMT_LEFT;
	col.cx = 200;
	col.pszText = tex;
	col.cchTextMax = 6;
	col.iSubItem = 1;
	col.iImage = NULL;
	col.iOrder = NULL;
	col.cxMin = 50;
	col.cxDefault = NULL;
	col.cxIdeal = 200;
	

	ListView_InsertColumn(hwndList, 1, &col);
*/
	//NIA_ShowLastError();
}

void App::update()
{
	
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
		
		EndPaint(hwnd, &ps);
		return 0;
	}

	case WM_LBUTTONDOWN:
	{
		NIA_GetCursorPosition(&e, &mouse);
		NIA_GetCursorPosition(&e, &mouse_prev);

	
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

			


			

			NIA_GetCursorPosition(&e, &mouse_prev);
		}
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

		case OPEN_FILE:
		{
		
			break;
		}

		case SAVE_FILE:
		{
			
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

	//handleUserEvent();


	return DefWindowProc(hwnd, uMsg, wParam, lParam);
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
