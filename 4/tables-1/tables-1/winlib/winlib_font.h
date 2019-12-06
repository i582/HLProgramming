#pragma once
#include "winlib_main.h"
#include "string"


namespace winlib
{
	using std::string;

	struct Font
	{
		static HFONT open(const string& name, int size);
		static void close(HFONT font);
	};


}
