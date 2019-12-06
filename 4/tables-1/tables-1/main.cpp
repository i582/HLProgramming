#include "editor/editor.h"

int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE, PWSTR szCmdParam, int nCmdShow)
{
	Editor* app = Editor::get_instance();
	app->run();
	delete app;
	return 0;
}