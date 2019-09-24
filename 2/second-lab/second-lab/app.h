#pragma once

#include "iostream"

#if defined(_WIN32) || defined(_WINDOWS)
#include "SDL.h"
#else
#include "SDL2/SDL.h"
#endif

class App
{
private:
	SDL_Window* window;
	SDL_Renderer* renderer;
	SDL_Event e;

	bool running;

	SDL_TimerID repeatOnceFunctionTimer;
	SDL_TimerID customEventFunctionTimer;

public:
	App();
	~App();

private:
	bool init();
	void setup();
	void update();
	void on_event();
	void quit();

public:
	int run();

private:
	bool createTimers();
	static void clearScreen(SDL_Window* window);


	static Uint32 repeatOnceFunction(Uint32 interval, void* param);
	static Uint32 customEventFunction(Uint32 interval, void* param);

	static int asmFunction();

	static int eventFilter(void* userdata, SDL_Event* event);
};
