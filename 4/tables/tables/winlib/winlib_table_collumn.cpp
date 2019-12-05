#include "winlib_table_collumn.h"
#include "winlib_table.h"

winlib::sort_f winlib::TableSort::numberASC = [](string p1, string p2) -> int
{ 
	double one = stod(p1);
	double two = stod(p2);

	if (one > two)
		return -1;
	else if (one < two)
		return 1;
	else
		return 0;
};

winlib::sort_f winlib::TableSort::numberDESC = [](string p1, string p2) -> int
{ 
	double one = stod(p1);
	double two = stod(p2);

	if (one > two)
		return 1;
	else if (one < two)
		return -1;
	else
		return 0;
};

winlib::sort_f winlib::TableSort::stringASC = [](string p1, string p2) -> int
{ 
	if (p1 > p2)
		return -1;
	else if (p1 < p2)
		return 1;
	else
		return 0;
};

winlib::sort_f winlib::TableSort::stringDESC = [](string p1, string p2) -> int
{ 
	if (p1 > p2)
		return 1;
	else if (p1 < p2)
		return -1;
	else
		return 0;
};




winlib::TableCollumn::TableCollumn(winlib::string title, size_t id, size_t width)
{
	this->parent = nullptr;
	this->id = 0;
	this->title = title;
	this->width = width;
	this->align = TableCollumnAlign::LEFT;

	this->sortFunction = [](string p1, string p2) -> int { return 0; };
}

bool winlib::TableCollumn::init()
{
	LVCOLUMN lvc;
	lvc.mask = LVCF_TEXT | LVCF_WIDTH | LVCF_FMT;
	lvc.fmt = (int)this->align | LVCFMT_SPLITBUTTON;
	lvc.cx = this->width;
	lvc.cchTextMax = 255;
	lvc.pszText = (CHAR*)title.c_str();

	int index = ListView_InsertColumn(parent->hwnd, id, &lvc);

	if (index == -1)
	{
		return false;
	}

	return true;
}

void winlib::TableCollumn::setSortFunction(sort_f sortFunction)
{
	this->sortFunction = sortFunction;
}
