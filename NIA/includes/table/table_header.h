#pragma once

#include "table_general.h"

namespace Nia
{

	class Table;

	class TableHeaderItem
	{
	private:
		HWND hwnd;

		int id;
		int width;
		wstring text;
		TableAlign align;


	public:
		TableHeaderItem(wstring text, int width);

	private:
		bool init();

	};
}