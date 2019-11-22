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
	this->size = { 0, 0, 1300, 700 };

	// window part
	this->msg = {};
	this->hwnd = nullptr;
	this->hdc = nullptr;
	this->wc = {};
	this->ps = {};
	this->mouse = {};
	this->mouse_prev = {};

	this->input = nullptr;

	// menu part
	this->hMenu = nullptr;
	this->hFileMenu = nullptr;
	this->hHelpMenu = nullptr;


	// event part
	this->e = {};

	//
	this->list = nullptr;
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


	//list = new LView(hwnd, { 10, 10, 600, 600 }, 1);

	csv = new CSV(L"E:\\Programming\\HLProgramming\\4\\Students\\Students\\data.csv", L';', true);

	list = csv->make_table(hwnd, { 10, 10, 700, 600 }, 1, { 30, 200, 150, 150, 150 });
	/*HBITMAP bitmap = NIA::LoadBitmapImage(hwnd, L"modules\\app\\3.bmp", 200, 200);

	HIMAGELIST images = ImageList_Create(
		200, 200,
		ILC_COLOR32, 9, 1);

	ImageList_Add(images, bitmap, NULL);
	ImageList_Add(images, bitmap, NULL);
	ImageList_Add(images, bitmap, NULL);
	ImageList_Add(images, bitmap, NULL);


	ListView_SetImageList(list->get_hwnd(), images, LVSIL_SMALL);
	ListView_SetImageList(list->get_hwnd(), images, LVSIL_NORMAL);
	ListView_SetImageList(list->get_hwnd(), images, LVSIL_STATE);*/

/*

	list->add_in_header(new LVHeaderItem(L"#", 20));
	list->add_in_header(new LVHeaderItem(L"ФИО", 200));
	list->add_in_header(new LVHeaderItem(L"Математика", 100));
	list->add_in_header(new LVHeaderItem(L"Русский язык", 100));
	list->add_in_header(new LVHeaderItem(L"Английский язык", 150));

	list->add_group(L"Математика", 3);
	list->add_group(L"Математика111", 4);

	list->add_row(new LVRow(list), 3);
	list->add_row(new LVRow(list), 3);
	list->add_row(new LVRow(list), 3);
	list->add_row(new LVRow(list), 4);


	 
	list->at(1)->at(0)->set_text(L"Текст");
	list->at(0)->at(0)->set_text(L"1");
	list->at(1)->at(0)->set_text(L"24");
	list->at(2)->at(0)->set_text(L"5");
	list->at(3)->at(0)->set_text(L"4");

	list->at(0)->at(1)->set_text(L"Текст2");
	list->at(1)->at(1)->set_text(L"Текст3");
	list->at(2)->at(1)->set_text(L"Текст4");
	list->at(3)->at(1)->set_text(L"Текст5");

	list->at(0)->at(2)->set_text(L"Текст2");
	list->at(1)->at(2)->set_text(L"Текст3");
	list->at(2)->at(2)->set_text(L"Текст4");
	list->at(3)->at(2)->set_text(L"Текст5");
	
*/
	list_max_math = new LView(hwnd, { 720, 10, 300, 300 }, 2);

	list_max_math->add_in_header(new LVHeaderItem(L"#", 20));
	list_max_math->add_in_header(new LVHeaderItem(L"ФИО", 200));
	list_max_math->add_in_header(new LVHeaderItem(L"Математика", 100));


	LView list_max_rus(hwnd, { 1040, 10, 320, 300 }, 2);

	list_max_rus.add_in_header(new LVHeaderItem(L"#", 20));
	list_max_rus.add_in_header(new LVHeaderItem(L"ФИО", 200));
	list_max_rus.add_in_header(new LVHeaderItem(L"Русский язык", 100));

	list_max_rus.add_group(L"Математика", 3);

	list_max_rus.add_row(new LVRow(&list_max_rus), 3);
	


	NIA::Error::show_last();

	//HBITMAP bitmap = LoadBitmap(hInst, L"1.bmp");

	//NIA_ShowErrorDescriptionByErrorId(GetLastError());

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

	case WM_CREATE:
	{
		status_bar = new StatusBar(hwnd, 10);
		status_bar->set_parts(4, { 100, 200, 200, 100 });
		status_bar->set_text(0, L"100%");
		status_bar->set_tooltip(0, L"Scale");
		status_bar->set_icon(0, NIA::Image::loadIcon(hwnd, L"E:\\Programming\\HLProgramming\\4\\Students\\Students\\modules\\app\\1.ico", 30, 30));
		return 0;
	}

	case WM_NOTIFY:
	{
		InitListViewEvent(list, LView::comp_func);
		
		return 0;
	}



	case WM_PAINT:
	{

		HDC hdc_temp = BeginPaint(hwnd, &ps);
		
		EndPaint(hwnd, &ps);
		return 0;
	}

	case WM_LBUTTONDOWN:
	{
		mouse = NIA::Mouse::position(&e);
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
			NIA::Mouse::delta(&e);
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

	case WM_SIZE:
	{
		SendMessage(hStatusWindow, WM_SIZE, 0, 0);
		break;
	}

	case WM_DESTROY:
	{
		PostQuitMessage(EXIT_SUCCESS);

		return 0;
	}

	}


	InitStatusBarEvent(uMsg, status_bar);
	
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
