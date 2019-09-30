#include "viewport.h"


void Viewport::render()
{
	NIA_FillRect(hdc, { 0, 0, size.w, size.h }, 0x282828);

	
	canvas->render();


	/*SetTextColor(hdc, 0xffffff);
	SetBkColor(hdc, 0x282828);
	NIA_DrawFont(hdc, font, to_wstring(scale).substr(0, to_wstring(scale).find('.') + 2), { 10, 10, 0, 0 });*/


	NIA_BitmapCopy(parent_hdc, hdc, nullptr, &size);
}

void Viewport::setup()
{
	canvas = new Canvas(hwnd, hdc, this, { 10, 10, size.w - 20, size.h - 20 });
	font = NIA_LoadFont(L"Open Sans", 20);
}

void Viewport::shift_scale(double dx)
{
	if (dx > 0)
	{
		this->scale += dx;
	}
	else
	{
		if (this->scale > -dx)
			this->scale += dx;
	}
	
}

double Viewport::get_scale()
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

	if (canvas->on_hover(mouse) && e->wParam == (MK_CONTROL + MK_LBUTTON))
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

	if (ue->common.recipient == R_CANVAS || ue->common.recipient == R_GRAPH)
	{
		canvas->notify(ue);
	}

}
