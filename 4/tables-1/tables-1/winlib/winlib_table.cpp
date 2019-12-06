#include "winlib_table.h"

winlib::Table::Table(HWND parent, Rect size, int id)
{
	this->parent = parent;
	this->hwnd = nullptr;
	this->size = size;
	this->id = id;
	this->csv_data = {};
	this->init();
}

winlib::Table::Table(HWND parent, Rect size, int id, csv& csv_data)
{
	this->parent = parent;
	this->hwnd = nullptr;
	this->size = size;
	this->id = id;
	this->csv_data = csv_data;
	this->init();

	this->createFromCSV();
}

winlib::Table::~Table()
{
	for (auto& collumn : collumns)
	{
		delete collumn;
	}

	for (auto& row : rows)
	{
		delete row;
	}
}

void winlib::Table::init()
{
	this->hwnd = CreateWindow(WC_LISTVIEW, "",
		WS_VISIBLE | WS_BORDER | WS_CHILD | LVS_REPORT | LVS_ALIGNTOP,
		size.x, size.y, size.w, size.h,
		parent, (HMENU)id, nullptr, nullptr);


	ListView_SetExtendedListViewStyle(this->hwnd,
		LVS_EX_FULLROWSELECT |
		LVS_EX_GRIDLINES |
		LVS_EX_AUTOSIZECOLUMNS |
		LVS_EX_DOUBLEBUFFER |
		LVS_EX_HEADERDRAGDROP |
		LVS_EX_UNDERLINECOLD);
}

HWND winlib::Table::getHwnd() const
{
	return hwnd;
}

void winlib::Table::createFromCSV()
{
	for (size_t i = 0; i < csv_data.get_header()->size(); i++)
	{
		auto& collumn = csv_data.get_header()->at(i);
		addCollumn(collumn, i, 100);
	}

	addGroup("", 1);


	for (size_t i = 0; i < csv_data.get_matrix().size(); i++)
	{
		auto& item = csv_data.get_matrix().at(i);

		addRow(item, 1);
	}
}

int _stdcall winlib::Table::sortFunction(LPARAM lp1, LPARAM lp2, LPARAM collumn)
{
	TableRow* row = (TableRow*)lp1;
	TableRow* row2 = (TableRow*)lp2;
	Table* table = row->parent;

	string p1 = row->at(collumn).text();
	string p2 = row2->at(collumn).text();

	return table->collumns[collumn]->sortFunction(p1, p2);
}

void winlib::Table::handleSort(LPARAM lParam)
{
	if (this == nullptr)
		return;

	LPNMHDR lpnmh = (LPNMHDR)lParam;
	
	if (lpnmh->hwndFrom != hwnd)
	{
		return;
	}
	if (lpnmh->code == LVN_COLUMNCLICK)
	{
		NMLISTVIEW* pListView = (NMLISTVIEW*)lParam; 
		ListView_SortItems(hwnd, sortFunction, (LPARAM)pListView->iSubItem);
	}
}

void winlib::Table::addCollumn(TableCollumn* collumn)
{
	collumn->parent = this;
	collumn->id = collumns.size();

	if (collumn->init())
	{
		collumns.push_back(collumn);
	}
}

void winlib::Table::addCollumn(string title, size_t id, size_t width)
{
	addCollumn(new winlib::TableCollumn(title, id, width));
}

void winlib::Table::addRow(TableRow* row, int group_id)
{
	int iLastIndex = ListView_GetItemCount(this->hwnd);

	LVITEM lvi = { 0 };
	lvi.mask = LVIF_TEXT | LVIF_GROUPID | LVIF_PARAM;
	lvi.cchTextMax = 255;
	lvi.iItem = iLastIndex;
	lvi.pszText = NULL;
	lvi.iSubItem = 0;
	lvi.iImage = 0;
	lvi.iIndent = 0;
	lvi.lParam = (LPARAM)row;

	if (group_id != -1)
	{
		lvi.iGroupId = group_id;
	}


	ListView_InsertItem(this->hwnd, &lvi);


	row->id = iLastIndex;
	row->parent = this;
	

	for (size_t i = 0; i < collumns.size(); i++)
	{
		TableItem* item = new TableItem("");
		item->parent = row;
		item->x = row->id;
		item->y = i;

		row->items.push_back(item);
	}
	
	rows.push_back(row);
}

void winlib::Table::addRow(int group_id)
{
	addRow(new winlib::TableRow(), group_id);
}

void winlib::Table::addRow(TableRow* row, vector<string>* items, int group_id)
{
	int iLastIndex = ListView_GetItemCount(this->hwnd);

	LVITEM lvi = { 0 };
	lvi.mask = LVIF_TEXT | LVIF_GROUPID | LVIF_PARAM;
	lvi.cchTextMax = 255;
	lvi.iItem = iLastIndex;
	lvi.pszText = NULL;
	lvi.iSubItem = 0;
	lvi.iImage = 0;
	lvi.iIndent = 0;
	lvi.lParam = (LPARAM)row;

	if (group_id != -1)
	{
		lvi.iGroupId = group_id;
	}


	ListView_InsertItem(this->hwnd, &lvi);


	row->id = iLastIndex;
	row->parent = this;


	for (size_t i = 0; i < collumns.size(); i++)
	{
		string value;

		if (i < items->size())
		{
			value = items->at(i);
		}

		TableItem* item = new TableItem(value);
		item->parent = row;
		item->x = row->id;
		item->y = i;
		item->text(value);

		row->items.push_back(item);
	}

	rows.push_back(row);

}

void winlib::Table::addRow(vector<string>* items, int group_id)
{
	addRow(new winlib::TableRow(), items, group_id);
}

void winlib::Table::addRow(vector<string> items, int group_id)
{
	addRow(new winlib::TableRow(), &items, group_id);
}

void winlib::Table::addGroup(string groupTitle, int groupId)
{
	setlocale(LC_ALL, "");

	std::wstring groupTitleW(groupTitle.size(), L'#');
	mbstowcs(&groupTitleW[0], groupTitle.c_str(), groupTitle.size());

	LVGROUP group = { 0 };

	group.cbSize = sizeof(LVGROUP);
	group.mask = LVGF_HEADER | LVGF_GROUPID;
	group.pszHeader = (LPWSTR)groupTitleW.c_str();
	group.cchHeader = groupTitleW.length();


	group.iGroupId = groupId;


	ListView_InsertGroup(this->hwnd, -1, &group);
}

void winlib::Table::enableGroups()
{
	ListView_EnableGroupView(this->hwnd, true);
}

void winlib::Table::disableGroups()
{
	ListView_EnableGroupView(this->hwnd, false);
}

void winlib::Table::setCollumnSortFunction(size_t collumn, sort_f sortFunction)
{
	collumns.at(collumn)->setSortFunction(sortFunction);
}

void winlib::Table::setCollumnWidth(vector<int> widths)
{
	for (size_t i = 0; i < collumns.size(); i++)
	{
		if (i < widths.size())
		{
			ListView_SetColumnWidth(hwnd, i, widths[i]);
		}
	}
}

winlib::TableRow& winlib::Table::at(size_t index)
{
	return *rows.at(index);
}

winlib::TableRow& winlib::Table::operator[](size_t index)
{
	return at(index);
}

void winlib::Table::openCSV(string path, char separator, TableCSV type)
{
	setlocale(LC_ALL, "ru-RU.utf-8");

	char* data_raw = (char*)winlib::File::read(
		winlib::File::open(path)
	);

		

	string data(data_raw);

	vector <string>* lines = winlib::Utils::split(data, '\n');

	vector < vector<string>* > CSVmatrix;

	for (size_t i = 0; i < lines->size(); i++)
	{
		CSVmatrix.push_back(winlib::Utils::split(lines->at(i), ';'));
	}


	for (size_t i = 0; i < CSVmatrix.at(0)->size(); i++)
	{
		auto& collumn = CSVmatrix.at(0)->at(i);
		addCollumn(collumn, i, 100);
	}

	addGroup("", 1);


	for (size_t i = 1; i < CSVmatrix.size(); i++)
	{
		auto& item = CSVmatrix.at(i);

		addRow(item, 1);
	}
}
