#include "viewport.h"


void Viewport::render()
{
	NIA_FillRect(hdc, { 0, 0, size.w, size.h }, 0x282828);

	
	canvas->render();


	HFONT hFont = NIA_LoadFont(L"Open Sans", 20);
	NIA_DrawFont(hdc, hFont, to_wstring(scale), { 10, 10, 0, 0 });


	NIA_BlitBitmap(parent_hdc, hdc, nullptr, &size);
}

void Viewport::setup()
{
	canvas = new Canvas(hwnd, hdc, this, { 50, 50, size.w - 100, size.h - 100 });
}

void Viewport::shift_scale(int dx)
{
	if (dx > 0)
	{
		this->scale += dx;
	}
	else
	{
		if (this->scale > 0)
			this->scale += dx;
	}
	
}

int Viewport::get_scale()
{
	return scale <= 0 ? 1 : scale;
}

Canvas* Viewport::get_canvas()
{
	return canvas;
}

void Viewport::mouseButtonDown(Event* e)
{
	NIA_GetCursorPositionByEvent(e, &mouse);
	this->mouse_coord_adjust(&mouse);

	if (canvas->on_hover(mouse))
	{
		canvas->mouseButtonDown(e);
	}


}

void Viewport::mouseButtonUp(Event* e)
{
}

void Viewport::mouseMotion(Event* e)
{
}

void Viewport::mouseWheel(Event* e)
{
}

void Viewport::notify(UEvent* ue)
{

	if (ue->common.recipient == CANVAS)
	{
		canvas->notify(ue);
	}

}
