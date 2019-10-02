// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com

#include "app/app.h"

int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE, PWSTR szCmdParam, int nCmdShow)
{
	App* app = App::get_instance();
	app->run();
	//delete app;
	return 0;
}