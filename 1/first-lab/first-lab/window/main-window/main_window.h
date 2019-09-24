#pragma once

#include "../window.h"
#include "../../label/label.h"
#include "vector"
#include "string"

class MainWindow : public Window
{
private:
	vector <WLabel*> labels;

public:
	MainWindow(string title, SDL_Rect sizes, Uint32 flags);

public:
	void setup();
	void update();
};
