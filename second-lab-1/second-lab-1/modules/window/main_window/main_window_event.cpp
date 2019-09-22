#include "main_window.h"
#include "../../editor/editor.h"

void MainWindow::mouseButtonDown(SDL_Event* e)
{
	SDL_GetMouseState(&mouse.x, &mouse.y);

	if (focus_element != nullptr)
	{
		focus_element->mouseButtonDown(e);

		update();

		if (!focus_element->is_focused())
		{
			focus_element = nullptr;
		}
		else
		{
			return;
		}
	}

	for (auto& widget : widgets)
	{
		if (widget->on_hover(mouse))
		{
			focus_element = widget->focus();
			focus_element->mouseButtonDown(e);
			update();
			return;
		}
	}
}

void MainWindow::mouseButtonUp(SDL_Event* e)
{
	if (focus_element != nullptr)
	{
		focus_element->mouseButtonUp(e);
		update();
	}
}

void MainWindow::mouseMotion(SDL_Event* e)
{
	SDL_GetMouseState(&mouse.x, &mouse.y);


	if (e->button.button != 0 && focus_element != nullptr && (SDL_GetModState() & KMOD_CTRL))
	{
		focus_element->shift_position(e->motion.xrel, e->motion.yrel);
	}
	else
	{
		Editor::push_event(new UEvent(WINDOW, WINDOW_MOUSEMOTION, 0, window_id));
	}

	
	
}

void MainWindow::mouseWheel(SDL_Event* e)
{
}

void MainWindow::keyDown(SDL_Event* e)
{
}

void MainWindow::keyUp(SDL_Event* e)
{
}

void MainWindow::textInput(SDL_Event* e)
{
}
