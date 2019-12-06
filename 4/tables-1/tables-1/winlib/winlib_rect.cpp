#include "winlib_rect.h"

RECT winlib::Rect::toRECT()
{
	return { x, y, x + w, y + h };
}
