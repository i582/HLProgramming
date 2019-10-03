#include "viewport.h"

Viewport::Viewport(HWND hwnd, HDC parent_hdc, Rect size)
	: Object(hwnd, parent_hdc, size)
{
	this->scale = 1;
	this->setup();
}

Viewport::~Viewport()
{
	NIA::Font::close(font);
}


void Viewport::render()
{
	NIA::Draw::fillRect(hdc, { 0, 0, size.w, size.h }, 0x282828);

	SetTextColor(hdc, 0xffffff);
	SetBkColor(hdc, 0x282828);

	double each = each_by_scale(scale);

	draw_left_branch(each, scale, font);
	draw_right_branch(each, scale, font);
	draw_top_branch(each, scale, font);
	draw_bottom_branch(each, scale, font);

	Point start_point = graph->get_start_point();
	NIA::Draw::drawLine(hdc, { start_point.x, 0, start_point.x, size.h }, 0xffffff);
	NIA::Draw::drawLine(hdc, { 0, start_point.y, size.w, start_point.y }, 0xffffff);
	

	graph->render();
	

	NIA_BitmapCopy(parent_hdc, hdc, nullptr, &size);
}

void Viewport::setup()
{
	font = NIA::Font::open(L"Open Sans", 20);
	graph = new Graph(this);
}

void Viewport::shift_scale(double dx)
{
	this->scale += delta_by_scale(scale) * dx;

	if (this->scale < 0.001)
		this->scale = 0;
}

double Viewport::get_scale()
{
	return scale;
}

Graph* const Viewport::get_graph()
{
	return graph;
}

void Viewport::mouseButtonDown(Event* e)
{
	mouse = NIA::Mouse::position(e);
	this->adjust(mouse);
	
	if (e->wParam == (MK_CONTROL + MK_LBUTTON))
	{
		graph->mouseButtonDown(e);
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

void Viewport::draw_left_branch(const double& each, const double& scale_size, const HFONT& hFont)
{
	Point start_point = graph->get_start_point();
	double start = -each;
	for (int x = start_point.x - scale_size * each; x >= 0; x -= scale_size * each, start -= each)
	{
		NIA::Draw::drawLine(hdc, { x, (int)start_point.y - 4, x, (int)start_point.y + 5 }, 0xffffff);

		NIA::Draw::drawLine(hdc, { x, 0, x, size.h }, 0x595959);

		NIA::Draw::text(hdc, hFont, NIA::to_wstring(start, 1), { x - 6, (int)start_point.y + 5, 0, 0 });
	}
}

void Viewport::draw_right_branch(const double& each, const double& scale_size, const HFONT& hFont)
{
	Point start_point = graph->get_start_point();
	double start = each;
	for (int x = start_point.x + scale_size * each; x < size.w; x += scale_size * each, start += each)
	{
		NIA::Draw::drawLine(hdc, { x, (int)start_point.y - 4, x, (int)start_point.y + 5 }, 0xffffff);

		NIA::Draw::drawLine(hdc, { x, 0, x, size.h }, 0x595959);

		NIA::Draw::text(hdc, hFont, NIA::to_wstring(start, 1), { x - 6, (int)start_point.y + 5, 0, 0 });
	}
}


void Viewport::draw_bottom_branch(const double& each, const double& scale_size, const HFONT& hFont)
{
	Point start_point = graph->get_start_point();
	double start = -each;
	for (int y = start_point.y + scale_size * each; y < size.h; y += scale_size * each, start -= each)
	{
		NIA::Draw::drawLine(hdc, { (int)start_point.x - 4, y, (int)start_point.x + 5, y }, 0xffffff);

		NIA::Draw::drawLine(hdc, { 0, y, size.w, y }, 0x595959);

		NIA::Draw::text(hdc, hFont, NIA::to_wstring(start, 1), { (int)start_point.x + 10, y - 11, 0, 0 });
	}
}

void Viewport::draw_top_branch(const double& each, const double& scale_size, const HFONT& hFont)
{
	Point start_point = graph->get_start_point();
	double start = each;
	for (int y = start_point.y - scale_size * each; y >= 0; y -= scale_size * each, start += each)
	{
		NIA::Draw::drawLine(hdc, { (int)start_point.x - 4, y, (int)start_point.x + 5, y }, 0xffffff);

		NIA::Draw::drawLine(hdc, { 0, y, size.w, y }, 0x595959);

		NIA::Draw::text(hdc, hFont, NIA::to_wstring(start, 1), { (int)start_point.x + 10, y - 11, 0, 0 });
	}
}

double Viewport::each_by_scale(double scale)
{
	double each = 10000;

	if (scale > 1000)
	{
		each = 0.05;
	}
	else
	if (scale > 500)
	{
		each = 0.1;
	}
	else
	if (scale > 400)
	{
		each = 0.2;
	}
	else
	if (scale > 300)
	{
		each = 0.5;
	}
	else
	if (scale > 60)
	{
		each = 1;
	}
	else
	if (scale > 25)
	{
		each = 3;
	}
	else
	if (scale > 15)
	{
		each = 5;
	}
	else
	if (scale > 9)
	{
		each = 10;
	}
	else
	if (scale > 5)
	{
		each = 20;
	}
	else
	if (scale > 1)
	{
		each = 40;
	}
	else
	if (scale > 0.6)
	{
		each = 100;
	}
	else
	if (scale > 0.5)
	{
		each = 500;
	}
	else
	if (scale > 0.05)
	{
		each = 1000;
	}
	else
	if (scale >= 0.001)
	{
		each = 10000;
	}

	return each;
}

double Viewport::delta_by_scale(double scale)
{
	double delta;


	if (scale >= 90)
	{
		delta = 10;
	}
	else if (scale >= 27)
	{
		delta = 3;
	}
	else if (scale >= 9)
	{
		delta = 2;
	}
	else if (scale > 1)
	{
		delta = 1;
	}
	else if (scale > 0.1)
	{
		delta = 0.1;
	}
	else if (scale >= 0.09)
	{
		delta = 0.01;
	}

	return delta;
}

void Viewport::notify(UEvent* ue)
{
	if (ue->common.recipient == R_GRAPH)
	{
		graph->notify(ue);
	}
}
