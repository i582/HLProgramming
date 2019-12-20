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
	this->size = { 20, 20, 980, 700 };

	// window part
	this->msg = {};
	this->hwnd = nullptr;
	this->hdc = nullptr;
	this->wc = {};
	this->ps = {};

	this->aver_bal = 0;
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

	menu->appendPopup(100, "Файл", MF_ENABLED);
	menu->appendInPopup(100, 102, "Открыть", MF_ENABLED);

	menu->onClick(102, [&]()
	{
		std::string path = winlib::File::openDialog(hwnd, "csv files(*.csv)\0*.csv\0");
	
		setupTables(path);
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

	/*setupTables("data1.csv");*/

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



	font = winlib::Font::open("OpenSans", 14);
	font_big = winlib::Font::open("OpenSans", 25);
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

void Editor::setupTables(std::string path_to_csv)
{
	winlib::csv new_csv(path_to_csv, ';', winlib::csv_property::USE_FIRST_LINE_AS_TITLE);

	new_csv
		.add_collumn("Общий")
		.fill_collumn(-1, [](winlib::csv_line line) -> std::string
		{
			return std::to_string(stoi(line->at(2)) + stoi(line->at(3)) + stoi(line->at(4)));
		});

	winlib::csv math_csv = new_csv.copy();
	math_csv = math_csv
		.select_collumns({ 0, 1, 2 })
		.sort(2, winlib::csv_sort_item_type::INT, winlib::csv_sort_type::DESC)
		.select_rows(0, 10);

	winlib::csv english_csv = new_csv.copy();
	english_csv = english_csv
		.select_collumns({ 0, 1, 3 })
		.sort(2, winlib::csv_sort_item_type::INT, winlib::csv_sort_type::DESC)
		.select_rows(0, 10);

	winlib::csv russian_csv = new_csv.copy();
	russian_csv = russian_csv
		.select_collumns({ 0, 1, 4 })
		.sort(2, winlib::csv_sort_item_type::INT, winlib::csv_sort_type::DESC)
		.select_rows(0, 10);


	winlib::csv best_csv = new_csv.copy();
	best_csv = best_csv
		.sort(-1, winlib::csv_sort_item_type::INT, winlib::csv_sort_type::DESC)
		.select_rows(0, 10);


	winlib::csv success_csv = new_csv.copy();
	success_csv = success_csv
		.filter(-1, [](std::string value) -> bool
		{
			return stoi(value) > 240;
		})
		.sort(-1, winlib::csv_sort_item_type::INT, winlib::csv_sort_type::DESC);


	

	procent = success_csv.count_row() / (double)new_csv.count_row();

	//winlib::csv math_csv = new_csv
	//	.sort(2, winlib::csv_sort_item_type::INT, winlib::csv_sort_type::DESC)
	//	.select_collumns({ 0, 1, 2, 3, 4 })
	//	//.select_rows(0, 10)
	//	.add_collumn("full")
	//	.fill_collumn(-1, [](winlib::csv_line line) -> std::string
	//	{
	//		return std::to_string( stoi(line->at(2)) + stoi(line->at(3)) + stoi(line->at(4)));
	//	})
	//	.sort(-1, winlib::csv_sort_item_type::INT, winlib::csv_sort_type::DESC)
	//	.filter(-1, [](std::string value) -> bool
	//	{
	//		return stoi(value) > 240;
	//	});


	/*label1 = CreateWindow("STATIC",
	"fasfs", WS_CHILD | WS_VISIBLE,
	10, 70, 100, 30, hwnd, (HMENU)1, nullptr, nullptr);
	HDC hdc_1 = GetDC(label1);

	SetBkColor(hdc_1, 0xff00ffff);

	MessageBox(NULL, "text", std::to_string(SetBkMode(hdc_1, TRANSPARENT)).c_str(), MB_ICONINFORMATION);*/

	mainTable = new winlib::Table(hwnd, { 10, 70, 600, 150 }, 107, new_csv);

	mainTable->setCollumnSortFunction(0, winlib::TableSort::numberDESC);
	mainTable->setCollumnSortFunction(1, winlib::TableSort::stringDESC);
	mainTable->setCollumnSortFunction(2, winlib::TableSort::numberASC);
	mainTable->setCollumnSortFunction(3, winlib::TableSort::numberASC);
	mainTable->setCollumnSortFunction(4, winlib::TableSort::numberASC);
	mainTable->setCollumnSortFunction(5, winlib::TableSort::numberASC);

	mainTable->setCollumnWidth({ 30, 200, 100, 100, 100, 70 });



	mathTable = new winlib::Table(hwnd, { 620, 70, 330, 80 }, 108, math_csv);

	mathTable->setCollumnSortFunction(0, winlib::TableSort::numberDESC);
	mathTable->setCollumnSortFunction(1, winlib::TableSort::stringDESC);
	mathTable->setCollumnSortFunction(2, winlib::TableSort::numberASC);

	mathTable->setCollumnWidth({ 30, 200, 100 });


	englishTable = new winlib::Table(hwnd, { 620, 180, 330, 80 }, 109, english_csv);

	englishTable->setCollumnSortFunction(0, winlib::TableSort::numberDESC);
	englishTable->setCollumnSortFunction(1, winlib::TableSort::stringDESC);
	englishTable->setCollumnSortFunction(2, winlib::TableSort::numberASC);

	englishTable->setCollumnWidth({ 30, 200, 100 });


	russianTable = new winlib::Table(hwnd, { 620, 290, 330, 80 }, 110, russian_csv);

	russianTable->setCollumnSortFunction(0, winlib::TableSort::numberDESC);
	russianTable->setCollumnSortFunction(1, winlib::TableSort::stringDESC);
	russianTable->setCollumnSortFunction(2, winlib::TableSort::numberASC);

	russianTable->setCollumnWidth({ 30, 200, 100 });


	bestTable = new winlib::Table(hwnd, { 10, 250, 600, 150 }, 111, best_csv);

	bestTable->setCollumnSortFunction(0, winlib::TableSort::numberDESC);
	bestTable->setCollumnSortFunction(1, winlib::TableSort::stringDESC);
	bestTable->setCollumnSortFunction(2, winlib::TableSort::numberASC);
	bestTable->setCollumnSortFunction(3, winlib::TableSort::numberASC);
	bestTable->setCollumnSortFunction(4, winlib::TableSort::numberASC);
	bestTable->setCollumnSortFunction(5, winlib::TableSort::numberASC);

	bestTable->setCollumnWidth({ 30, 200, 100, 100, 100, 70 });



	successTable = new winlib::Table(hwnd, { 620, 950, 600, 400 }, 112, success_csv);

	successTable->setCollumnSortFunction(0, winlib::TableSort::numberDESC);
	successTable->setCollumnSortFunction(1, winlib::TableSort::stringDESC);
	successTable->setCollumnSortFunction(2, winlib::TableSort::numberASC);
	successTable->setCollumnSortFunction(3, winlib::TableSort::numberASC);
	successTable->setCollumnSortFunction(4, winlib::TableSort::numberASC);
	successTable->setCollumnSortFunction(5, winlib::TableSort::numberASC);

	successTable->setCollumnWidth({ 30, 200, 100, 100, 100, 70 });
	/*mainTable->openCSV("./data.csv", ';', winlib::TableCSV::USE_FIRST_LINE_AS_TITLE);

	mainTable->setCollumnSortFunction(0, winlib::TableSort::numberASC);
	mainTable->setCollumnSortFunction(1, winlib::TableSort::stringDESC);
	mainTable->setCollumnSortFunction(2, winlib::TableSort::numberASC);
	mainTable->setCollumnSortFunction(3, winlib::TableSort::numberASC);*/



	//mainTable.addRow({ "sfs", "fasfas" });



	winlib::csv groups_csv = new_csv.copy();
	groups_csv = groups_csv
		.filter(-1, [](std::string value) -> bool
			{
				return false;
			});

	winlib::csv sorted_csv = new_csv.copy();
	sorted_csv = sorted_csv
		.sort(-1, winlib::csv_sort_item_type::INT, winlib::csv_sort_type::DESC);


	groupsTable = new winlib::Table(hwnd, { 10, 430, 600, 150 }, 114, groups_csv);
	groupsTable->enableGroups();

	int average = 0;
	for (auto& row : sorted_csv.get_matrix())
	{
		average += std::stoi(row->at(5));


	}
	average /= sorted_csv.get_matrix().size();


	const int count_groups = new_csv.count_row() / 10;

	for (size_t i = 0; i < count_groups; i++)
	{
		groupsTable->addGroup("Группа " + std::to_string(i + 1), i + 1);
	}

	int first = 0;
	int last = sorted_csv.count_row() - 1;

	std::vector<int> average_by_groups;
	average_by_groups.resize(count_groups);

	for (size_t j = 0; j < sorted_csv.get_matrix().size(); j++)
	{
		for (size_t i = 0; i < count_groups; i++)
		{
			if (first >= last)
				break;

			winlib::csv_line first_line = sorted_csv.get_matrix().at(first);
			winlib::csv_line last_line = sorted_csv.get_matrix().at(last);

			

			groupsTable->addRow(first_line, i + 1);
			groupsTable->addRow(last_line, i + 1);

			first++;
			last--;

			average_by_groups[i] += std::stoi(first_line->at(5)) + std::stoi(last_line->at(5));
		}
	}

	for (auto& group : average_by_groups)
	{
		group /= 10;
	}

	aver_bal = average_by_groups[0];

	groupsTable->setCollumnWidth({ 30, 200, 100, 100, 100, 70 });


	
	groupsAverageTable = new winlib::Table(hwnd, { 620, 430, 330, 150 }, 11111);

	groupsAverageTable->addGroup("", 10);

	groupsAverageTable->addCollumn("#", 0, 100);
	groupsAverageTable->addCollumn("Группа", 1, 100);
	groupsAverageTable->addCollumn("Ср. Б", 2, 100);

	int i = 0;
	for (auto& group : average_by_groups)
	{
		groupsAverageTable->addRow({ std::to_string(i + 1), "Группа " + std::to_string(i + 1), std::to_string(group) }, 10);

		i++;
	}

	groupsAverageTable->setCollumnSortFunction(0, winlib::TableSort::numberDESC);
	groupsAverageTable->setCollumnSortFunction(1, winlib::TableSort::stringDESC);
	groupsAverageTable->setCollumnSortFunction(2, winlib::TableSort::numberASC);


	groupsAverageTable->setCollumnWidth({ 30, 200, 100 });

	InvalidateRect(hwnd, NULL, TRUE);
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


		winlib::Draw::text(hdc_temp, font, "Список всех поступающих", { 10, 50, 100, 20 });
		winlib::Draw::text(hdc_temp, font, "Список 10 лучших по 3 предметам", { 10, 230, 100, 20 });

		winlib::Draw::text(hdc_temp, font, "Список 10 лучших по математике", { 620, 50, 100, 30 });
		winlib::Draw::text(hdc_temp, font, "Список 10 лучших по русскому языку", { 620, 160, 100, 30 });
		winlib::Draw::text(hdc_temp, font, "Список 10 лучших по английскому языку", { 620, 270, 100, 30 });

		winlib::Draw::text(hdc_temp, font, "Процент не выдерживающих конкурс в 240 баллов:", { 620, 387, 100, 30 });
		winlib::Draw::text(hdc_temp, font_big, std::to_string((int)(procent * 100)) + "%", { 900, 377, 100, 50 });
		
		winlib::Draw::text(hdc_temp, font, "Средний балл в группах: " + std::to_string(aver_bal), { 620, 410, 100, 30 });


		winlib::Draw::text(hdc_temp, font, "Список по группам", { 10, 410, 100, 30 });

		
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

		bestTable->handleSort(lParam);

		successTable->handleSort(lParam);

		mathTable->handleSort(lParam);
		englishTable->handleSort(lParam);
		russianTable->handleSort(lParam);

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
		SendMessage(toolbar, WM_SIZE, 0, 0);
		break;
	}




	default:
		return DefWindowProc(hwnd, uMsg, wParam, lParam);
	}

}