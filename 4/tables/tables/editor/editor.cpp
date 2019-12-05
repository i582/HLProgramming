#include "editor.h"

Editor* Editor::instance = nullptr;

Editor* Editor::get_instance()
{
	if (instance == nullptr)
		instance = new Editor;

	return instance;
}

Editor::Editor()
{
	this->size = { 100, 100, 1300, 700 };

	// window part
	this->msg = {};
	this->hwnd = nullptr;
	this->hdc = nullptr;
	this->wc = {};
	this->ps = {};
}

Editor::~Editor()
{
	delete menu;
	delete statusBar;
	delete mainTable;
}

void Editor::init()
{
	wc.cbSize = sizeof(WNDCLASSEX);
	wc.cbClsExtra = 0;
	wc.cbWndExtra = 0;
	wc.hbrBackground = CreateSolidBrush(0xffffff);
	wc.hCursor = LoadCursor(NULL, IDC_ARROW);
	wc.hIcon = 0;
	wc.hIconSm = 0;
	wc.hInstance = nullptr;
	wc.lpfnWndProc = Editor::StaticWndProc;
	wc.lpszClassName = "MyApp";
	wc.lpszMenuName = nullptr;
	wc.style = CS_VREDRAW | CS_HREDRAW;

	if (!RegisterClassEx(&wc))
	{
		return;
	}

	if (hwnd = CreateWindow(
		wc.lpszClassName,
		"Tables",
		WS_OVERLAPPEDWINDOW,
		size.x, size.y, size.w, size.h,
		nullptr, nullptr,
		wc.hInstance,
		this),

		hwnd == INVALID_HANDLE_VALUE)
	{
		return;
	}

	this->hdc = GetDC(hwnd);

	InitCommonControls();
}

void Editor::setup()
{
	menu = new winlib::Menu(hwnd);

	menu->appendSimple(100, "Файл", MF_ENABLED);
	menu->appendPopup(101, "Правка", MF_ENABLED);
	menu->appendInPopup(101, 102, "Отменить", MF_ENABLED);

	menu->onClick(102, [&]()
	{
		MessageBox(NULL, "text", "text", MB_ICONINFORMATION);
		
	});


	//mainTable = new winlib::Table(hwnd, { 10, 50, 530, 400 }, 107);

	/*mainTable.enableGroups();

	mainTable.addCollumn("№", 10, 30);
	mainTable.addCollumn("ФИО", 11, 150);
	mainTable.addCollumn("Русский язык", 10, 100);

	mainTable.addGroup("Группа 1", 0);

	mainTable.addRow({"1", "Фамилия Имя"}, 0);
	mainTable.addRow(0);
	mainTable.addRow(0);*/

	winlib::csv new_csv("./data.csv", ';', winlib::csv_property::USE_FIRST_LINE_AS_TITLE);
	


	winlib::csv sort_csv = new_csv.sort(1, winlib::csv_sort_item_type::STRING, winlib::csv_sort_type::ASC);

	winlib::csv math_csv = new_csv
		.sort(2, winlib::csv_sort_item_type::INT, winlib::csv_sort_type::DESC)
		.select_collumns({ 0, 1, 2, 3, 4 })
		//.select_rows(0, 10)
		.add_collumn("full")
		.fill_collumn(-1, [](winlib::csv_line line) -> std::string
		{
			return std::to_string( stoi(line->at(2)) + stoi(line->at(3)) + stoi(line->at(4)));
		})
		.sort(-1, winlib::csv_sort_item_type::INT, winlib::csv_sort_type::DESC)
		.filter(-1, [](std::string value) -> bool
		{
			return stoi(value) > 240;
		});


	mainTable = new winlib::Table(hwnd, { 10, 50, 530, 400 }, 107, math_csv);

	/*mainTable->openCSV("./data.csv", ';', winlib::TableCSV::USE_FIRST_LINE_AS_TITLE);

	mainTable->setCollumnSortFunction(0, winlib::TableSort::numberASC);
	mainTable->setCollumnSortFunction(1, winlib::TableSort::stringDESC);
	mainTable->setCollumnSortFunction(2, winlib::TableSort::numberASC);
	mainTable->setCollumnSortFunction(3, winlib::TableSort::numberASC);*/

	mainTable->setCollumnWidth({ 30, 200, 100 });
	
	//mainTable.addRow({ "sfs", "fasfas" });

	toolbar = CreateWindowEx(0, TOOLBARCLASSNAME, nullptr,
		WS_CHILD | TBSTYLE_WRAPABLE, 0, 0, 0, 0,
		hwnd, nullptr, nullptr, nullptr);


	const int numButtons = 3;
	TBBUTTON tbButtons[numButtons] =
	{
		{ MAKELONG(STD_FILENEW,  0), 1, TBSTATE_ENABLED, BTNS_AUTOSIZE, {0}, 0, (INT_PTR)"New" },
		{ MAKELONG(STD_FILEOPEN,  0), 2, TBSTATE_ENABLED, BTNS_AUTOSIZE, {0}, 0, (INT_PTR)"Open"},
		{ MAKELONG(STD_FILESAVE,  0), 3, 0,               BTNS_AUTOSIZE, {0}, 0, (INT_PTR)"Save"}
	};

	// Add the view buttons.
	SendMessage(toolbar, TB_BUTTONSTRUCTSIZE, (WPARAM)sizeof(TBBUTTON), 0);
	SendMessage(toolbar, TB_ADDBUTTONS, numButtons, (LPARAM)tbButtons);

	SendMessage(toolbar, TB_AUTOSIZE, 0, 0);
	ShowWindow(toolbar, true);
}

int Editor::run()
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


LRESULT Editor::StaticWndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	if (instance != nullptr)
	{
		return instance->WndProc(hwnd, uMsg, wParam, lParam);
	}

	return DefWindowProc(hwnd, uMsg, wParam, lParam);
}

LRESULT Editor::WndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	e = { hwnd, uMsg, wParam, lParam };

	switch (uMsg)
	{

	case WM_CREATE:
	{
		statusBar = new winlib::StatusBar(hwnd, 105);

		statusBar->setParts(2, { 100, -1 });
		statusBar->setText(0, "Информация");
		return 0;
	}

	case WM_PAINT:
	{
		HDC hdc_temp = BeginPaint(hwnd, &ps);

		EndPaint(hwnd, &ps);
		return 0;
	}

	case WM_MOUSEWHEEL:
	{

		break;
	}

	case WM_NOTIFY:
	{
		mainTable->handleSort(lParam);

		return 0;
	}

	case WM_COMMAND:
	{
		menu->handleClick(LOWORD(wParam));

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

	case WM_SIZE:
	{
		SendMessage(statusBar->getHwnd(), WM_SIZE, 0, 0);
		break;
	}

	}



	return DefWindowProc(hwnd, uMsg, wParam, lParam);
}