#include "canvas.h"
#include "../viewport/viewport.h"
#include "../app.h"

Canvas::Canvas(HWND hwnd, HDC parent_hdc, Viewport* parent, Rect size )
	: Object(hwnd, parent_hdc, size)
{
	this->start_point = { size.w / 2, size.h / 2 };
	this->parent = parent;
	this->setup();
}

void Canvas::draw_left_branch(const double& each, const int& scale_size, const HFONT& hFont)
{
	for (int x = start_point.x - scale_size * each, index = -each; x >= 0; x -= scale_size * each, index -= 1 * each)
	{
		NIA_DrawLine(hdc, { x, start_point.y - 4, x, start_point.y + 5 }, 0xffffff);
		NIA_DrawFont(hdc, hFont, to_wstring(index), { x - 6, start_point.y + 5, 0, 0 });
	}
}

void Canvas::draw_right_branch(const double& each, const int& scale_size, const HFONT& hFont)
{
	for (int x = start_point.x + scale_size * each, index = 1 * each; x < size.w; x += scale_size * each, index += 1 * each)
	{
		NIA_DrawLine(hdc, { x, start_point.y - 4, x, start_point.y + 5 }, 0xffffff);
		NIA_DrawFont(hdc, hFont, to_wstring(index), { x - 6, start_point.y + 5, 0, 0 });
	}
}


void Canvas::draw_bottom_branch(const double& each, const int& scale_size, const HFONT& hFont)
{
	for (int y = start_point.y + scale_size * each, index = -1 * each; y < size.h; y += scale_size * each, index -= 1 * each)
	{
		NIA_DrawLine(hdc, { start_point.x - 4, y, start_point.x + 5, y }, 0xffffff);
		NIA_DrawFont(hdc, hFont, to_wstring(index), { start_point.x + 10, y - 11, 0, 0 });
	}
}

void Canvas::draw_top_branch(const double& each, const int& scale_size, const HFONT& hFont)
{
	for (int y = start_point.y - scale_size * each, index = 1 * each; y >= 0; y -= scale_size * each, index += 1 * each)
	{
		NIA_DrawLine(hdc, { start_point.x - 4, y, start_point.x + 5, y }, 0xffffff);
		NIA_DrawFont(hdc, hFont, to_wstring(index), { start_point.x + 10, y - 11, 0, 0 });
	}
}


void Canvas::render()
{
	NIA_FillRect(hdc, { 0, 0, size.w, size.h }, 0x383838);


	NIA_DrawLine(hdc, { start_point.x, 0, start_point.x, size.h }, 0xffffff);
	NIA_DrawLine(hdc, { 0, start_point.y, size.w, start_point.y }, 0xffffff);

	graph->set_scale(parent->get_scale());
	graph->render();

	RECT rect = { 50, 200, 100, 20 };

	SetTextColor(hdc, 0xffffff);
	SetBkColor(hdc, 0x383838);

	HFONT hFont = NIA_LoadFont(L"Open Sans", 20);

	const int scale_size = 5 * parent->get_scale();
	const int count_del = start_point.x / scale_size;

	double each = 1;
	const int scale = parent->get_scale();



	if (scale > 9)
	{
		each = 1;
	}
	else
	if (scale > 5)
	{
		each = 3;
	}
	else
	if (scale >= 1)
	{
		each = 10;
	}

	draw_left_branch(each, scale_size, hFont);
	draw_right_branch(each, scale_size, hFont);
	draw_top_branch(each, scale_size, hFont);
	draw_bottom_branch(each, scale_size, hFont);


	
	



	HDC par_hdc = parent->get_hdc();
	HBITMAP par_bmp = parent->get_bitmap();
	NIA_SetHdcBitmap(par_hdc, par_bmp);

	NIA_SetHdcBitmap(hdc, bitmap);

	NIA_BlitBitmap(par_hdc, hdc, nullptr, &size);
}

void Canvas::setup()
{
	graph = new Graph(this);
}

Point Canvas::coord_adjust_by_start_point(Point p)
{
	Point point;
	point.x = start_point.x + p.x;
	point.y = start_point.y - p.y;
	return point;
}

Point Canvas::back_coord_adjust_by_start_point(Point p)
{
	Point point;
	point.x = p.x - start_point.x;
	point.y = start_point.y - p.y;
	return point;
}

void Canvas::set_start_point(Point point)
{
	this->start_point = point;
}

void Canvas::shift_start_point(int dx, int dy)
{
	this->start_point.x += dx;
	this->start_point.y += dy;
}

_get Point Canvas::get_start_point()
{
	return start_point;
}

void Canvas::mouseButtonDown(Event* e)
{
	
	NIA_GetCursorPositionByEvent(e, &mouse);
	parent->mouse_coord_adjust(&mouse);
	this->mouse_coord_adjust(&mouse);

	vector <Point>* points = graph->get_points();
	int scale = graph->get_scale();

	for (int i = 0; i < points->size(); i++)
	{
		auto& point = points->at(i);

		Point coord_point = { point.x * scale, point.y * scale };
		coord_point = this->coord_adjust_by_start_point(coord_point);

		if (NIA_PointInCircle(mouse, coord_point, 3))
		{
			App::push_event(new UEvent(GRAPH, CANVAS, DELETE_POINT, i));
			return;
		}
	}
	Point* event_mouse_point = new Point;
	*event_mouse_point = this->back_coord_adjust_by_start_point(mouse);
	event_mouse_point->x /= scale;
	event_mouse_point->y /= scale;


	App::push_event(new UEvent(GRAPH, CANVAS, ADD_POINT, 0, (void*)event_mouse_point));
}

void Canvas::mouseButtonUp(Event* e)
{
}

void Canvas::mouseMotion(Event* e)
{
}

void Canvas::mouseWheel(Event* e)
{
}

void Canvas::notify(UEvent* ue)
{

	if (ue->common.action == DELETE_POINT)
	{
		graph->delete_point(ue->common.object_id);

		MessageBox(NULL, L"Click without", L"Click", MB_ICONINFORMATION);
	}
	else if (ue->common.action == ADD_POINT)
	{
		Point* p = (Point*)ue->common.data;
		//graph->delete_point(ue->common.object_id);

		graph->add_point(*p);

		p->x = p->x;
	}
}
