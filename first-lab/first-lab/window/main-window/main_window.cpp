#include "main_window.h"

MainWindow::MainWindow(string title, SDL_Rect sizes, Uint32 flags)
	: Window(title, sizes, flags)
{
	this->setup();
}


void MainWindow::setup()
{
	SDL_version ver;
	SDL_GetVersion(&ver);

	string version = "SDL версия " + to_string(ver.major) + "." + to_string(ver.minor) + "." + to_string(ver.patch);
	labels.push_back(new WLabel(renderer, NULL, version, { 100, 100, 700, 100 }, "./resources/fonts/Lato-Light.ttf", 50));

	labels.push_back(new WLabel(renderer, NULL, "Махнёв Пётр Сергеевич", { 100, 170, 700, 100 }, "./resources/fonts/Lato-Bold.ttf", 20));
}

void MainWindow::update()
{
	SDL_SetRenderTarget(renderer, NULL);

	SDL_SetRenderDrawColor(renderer, 0x42, 0x42, 0x42, 0xff);
	SDL_RenderFillRect(renderer, NULL);

	SDL_SetRenderDrawColor(renderer, 0xc9, 0x50, 0x00, 0xff);
	SDL_RenderDrawRect(renderer, NULL);


	for (auto& label : labels)
	{
		label->render();
	};

	SDL_Rect r = { 500, 100, 100, 100 };
	SDL_SetRenderDrawColor(renderer, 0xc9, 0x50, 0x00, 0xff);
	SDL_RenderDrawRect(renderer, &r);

	r = { 550, 150, 75, 75 };
	SDL_RenderDrawRect(renderer, &r);

	SDL_RenderPresent(renderer);
}
