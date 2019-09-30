#pragma once

#include "../window.h"

class MainWindow : public Window
{
private:


public:
	MainWindow(wstring title, Rect size) : Window(title, size) {};

public:
	void HandleEvent(Event* e);

};
