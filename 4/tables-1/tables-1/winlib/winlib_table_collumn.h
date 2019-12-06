#pragma once

#include "functional"
#include "string"
#include "vector"

#include "winlib_main.h"
#include "winlib_rect.h"

namespace winlib
{

using std::function;
using std::string;
using std::vector;

class Table;

enum class TableCollumnAlign
{
	LEFT = LVCFMT_LEFT,
	CENTERED = LVCFMT_CENTER,
	RIGHT = LVCFMT_RIGHT
};

using sort_f = function<int(string, string)>;

struct TableSort
{
	static sort_f numberASC;
	static sort_f numberDESC;
	static sort_f stringASC;
	static sort_f stringDESC;
};

class TableCollumn
{
private:
	size_t id;
	size_t width;
	string title;

	Table* parent;

	TableCollumnAlign align;

	sort_f sortFunction;

public:
	TableCollumn(string title, size_t id, size_t width);

public:
	friend Table;

private:
	bool init();
	
	void setSortFunction(sort_f sortFunction);
};

}
