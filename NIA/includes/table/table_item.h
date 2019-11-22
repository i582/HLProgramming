#pragma once

#include "table_general.h"

namespace Nia
{

	class TableRow;

	class TableRowItem
	{
	private:
		int x;
		int y;

		TableRow* parent;
		HWND hwnd;

		wstring _text;

	public:
		TableRowItem(TableRow* parent, wstring text);

	public:
		friend TableRow;

	public:
		void text(wstring text);
		wstring text();
	};
}