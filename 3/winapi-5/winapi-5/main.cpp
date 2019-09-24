#include "app.h"

int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE, PWSTR szCmdParam, int nCmdShow)
{
	App* app = App::get_instance();
	app->run();
	delete app;
	return 0;
}