#include "app.h"

App* App::instance = nullptr;

App::App()
{
	this->e = {};
	this->running = true;
	this->main_window = nullptr;
}

App* App::get_instance()
{
	if (instance == nullptr)
		instance = new App;

	return instance;
}

App::~App()
{
}

bool App::init()
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

	return true;
}

void App::setup()
{
	main_window = new MainWindow("Editor", { -1, -1, 720, 310 }, NULL);
}

void App::update()
{
	main_window->update();
}

void App::on_event()
{
	while (running && SDL_WaitEvent(&e))
	{

		if (e.type == SDL_QUIT)
		{
			running = false;
		}


	}
}

void App::quit()
{
	running = false;
}

int App::run()
{
	if (!init())
		return -1;

	setup();
	update();
	on_event();

	return 0;
}
