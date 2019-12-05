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
class TableRow;

class TableItem
{
private:
	size_t x;
	size_t y;

	string _text;
	TableRow* parent;


public:
	TableItem(string text);

public:
	friend TableRow;
	friend Table;

public:
	void text(string text);
	const string& text() const;
};

}