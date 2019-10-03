#pragma once
#include "NIA.h"

#include "NIA_line.h"
#include "NIA_point.h"
#include "NIA_rect.h"

namespace NIA
{


struct Font
{
	static HFONT open(const wstring& name, int size);
	static void close(HFONT font);

};


}
