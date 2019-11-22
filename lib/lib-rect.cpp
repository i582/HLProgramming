#include "lib-rect.h"

RECT lib::Rect::toRECT()
{
	return { x, y, x + w, y + h };
}
