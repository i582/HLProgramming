#include "editor.h"

Editor* Editor::instance = nullptr;
vector <UEvent*> Editor::u_events = {};

UEvent* Editor::push_event(UEvent* ue)
{
	if (ue != nullptr)
		u_events.push_back(ue);

	return ue;
}

Editor::Editor()
{
	this->e = {};
	this->running = true;
	this->window_one = nullptr;
	this->window_two = nullptr;

	this->track_mouse_event_win1 = true;
	this->track_mouse_event_win2 = true;
}

Editor* Editor::get_instance()
{
	if (instance == nullptr)
		instance = new Editor;

	return instance;
}

Editor::~Editor()
{
}

bool Editor::init()
{
	if (!(IMG_Init(IMG_INIT_PNG) & IMG_INIT_PNG))
	{
		cout << "SDL_image could not initialize! SDL_image Error: %s\n" << IMG_GetError();
		return false;
	}

	if (TTF_Init() == -1)
	{
		cout << "SDL_ttf could not initialize! SDL_ttf Error: %s\n" << TTF_GetError();
		return false;
	}

	if (!SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "0"))
	{
		cout << "Error set SDL_HINT_RENDER_SCALE_QUALITY" << endl;
		return false;
	}

	if (!SDL_SetHint(SDL_HINT_MOUSE_FOCUS_CLICKTHROUGH, "1"))
	{
		cout << "Error set SDL_HINT_MOUSE_FOCUS_CLICKTHROUGH" << endl;
		return false;
	}


	return true;
}

void Editor::setup()
{
	window_one = new MainWindow("window 1", { -1, -1, 400, 400 }, NULL);

	window_two = new MainWindow("window 2", { -1, -1, 400, 400 }, NULL);
}

void Editor::update()
{
	window_one->update();
	window_two->update();
}

void Editor::quit()
{
	running = false;
}

int Editor::run()
{
	if (!init())
		return -1;

	setup();
	update();
	onEvent();

	return 0;
}
