#include "window.h"

Window::Window(string title, SDL_Rect size, Uint32 flags)
{
	this->title = title;
	this->size = size;
	this->flags = flags;

	this->window = nullptr;
	this->renderer = nullptr;

	this->display = true;

	this->mouse = { 0, 0 };

	this->window_id = 0;

	this->init();
}

Window::~Window()
{
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
}

bool Window::init()
{
	this->window = SDL_CreateWindow(title.c_str(), 
		size.x == -1 ? SDL_WINDOWPOS_CENTERED : size.x, 
		size.y == -1 ? SDL_WINDOWPOS_CENTERED : size.y, 
		size.w, size.h, flags);

	if (window == nullptr)
	{
		cout << "Error of initialize new Window: " << SDL_GetError() << endl;
		return false;
	}

	this->renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
	if (renderer == nullptr)
	{
		cout << "Renderer could not be created! SDL Error: %s\n" << SDL_GetError();
		return false;
	}

	this->window_id = SDL_GetWindowID(window);

	SDL_GetWindowPosition(window, &size.x, &size.y);

	return true;
}

void Window::show()
{
	display = true;
	SDL_ShowWindow(window);
}

void Window::hide()
{
	display = false;
	SDL_HideWindow(window);
}

bool Window::is_show()
{
	return display;
}

void Window::close()
{
	SDL_DestroyWindow(window);
}

SDL_Rect Window::get_size()
{
	return size;
}

SDL_Renderer* Window::get_renderer()
{
	return renderer;
}

SDL_Window* Window::get_window()
{
	return window;
}

vector<Widget*>* Window::get_widgets()
{
	return &widgets;
}

int Window::get_window_id()
{
	return window_id;
}

Widget* const Window::createWidget(Widget* el)
{
	widgets.push_back(el);
	return el;
}

int Window::SDL_SetRenderColor(SDL_Renderer* renderer, SDL_Color& color)
{
	return SDL_SetRenderDrawColor(renderer, color.r, color.g, color.b, color.a);
}
