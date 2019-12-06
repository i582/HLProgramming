#pragma once
#include "lib-main.h"


namespace lib
{


struct Font
{
	static HFONT open(const std::string& name, int size);
	static void close(HFONT font);
};


}
