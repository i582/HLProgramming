#pragma once

#include "NIA_main.h"
#include "NIA_listview.h"

namespace NIA
{

	using StringMatrix = vector < vector < wstring >* >;

	class CSV
	{
	private:
		StringMatrix matrix;
		LView* list;

		wstring path;
		wchar_t separator;
		bool first_line;

	public:
		CSV(wstring path, wchar_t separator, bool first_line);
		
	private:
		void init();
		void make_out();

	public:
		LView* make_table(HWND hwnd, Rect size, int id, vector<int> widths);

	};

}