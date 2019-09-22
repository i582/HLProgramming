#pragma once

#include "../sdl_headers/sdl_headers.h"

#include "../window/main-window/main_window.h"

#include "iostream"
using namespace std;

class App
{

public:
	static App* get_instance();
	~App();

private:
	MainWindow* main_window;

	// singleton part
private:
	static App* instance;
	App();

private:
	bool running;
	SDL_Event e;


private:
	bool init();
	void setup();
	void update();
	void on_event();
	void quit();

public:
	int run();
};
