#include "main_window.h"

void MainWindow::handleUserEvents(UEvent* ue)
{
	for (auto& widget : widgets)
	{
		widget->notify(ue);
	}
}
