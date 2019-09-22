#include "main_window.h"

MainWindow::MainWindow(string title, SDL_Rect sizes, Uint32 flags)
	: Window(title, sizes, flags)
{
	this->widgets = {};
	this->track_mouse_event = true;

	this->setup();
}

bool MainWindow::button1_click(UEvent* ue, Window* parent)
{

	if (((MainWindow*)parent)->track_mouse_event)
	{
		_button(0)->set_text("Turn up");
		cout << "Сообщение: " << "Слежение за мышом выключено" << endl;
	}
	else
	{
		_button(0)->set_text("Turn off");
		cout << "Сообщение: " << "Слежение за мышом включено" << endl;
	}

	((MainWindow*)parent)->track_mouse_event = !((MainWindow*)parent)->track_mouse_event;

	parent->update();

	return true;
}

void MainWindow::setup()
{

	createWidget(new WButton(this, nullptr, "Turn off", { 50, 150, 100, 45 }, 0, Font::open(OPEN_SANS_REG, 12)))
		->set_callback(button1_click);

	createWidget(new WLabel(this, nullptr, "Coord: ", { 20, 20, 200, 20 }, 1, Font::open(OPEN_SANS_BOLD, 14), Color::white, ALIGN_LEFT_WITHOUT_PADDING | ALIGN_TOP));
}

void MainWindow::update()
{
	SDL_SetRenderTarget(renderer, NULL);

	SDL_SetRenderColor(renderer, Color::background);
	SDL_RenderFillRect(renderer, NULL);

	SDL_SetRenderColor(renderer, Color::window_border);
	SDL_RenderDrawRect(renderer, NULL);
	

	for (auto& widget : widgets)
	{
		widget->update();
	}


	SDL_RenderPresent(renderer);
}

bool MainWindow::is_track_mouse_event()
{
	return track_mouse_event;
}
