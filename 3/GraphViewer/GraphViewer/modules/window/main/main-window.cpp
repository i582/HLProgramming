#include "main-window.h"

MainWindow::MainWindow(wstring title, Rect size, DWORD flags) : Window(title, size, flags)
{
	this->setup();
}

void MainWindow::setup()
{

	HWND input1 = CreateWindowEx(
		NULL,
		L"Edit", L"",
		WS_CHILD | ES_AUTOHSCROLL | WS_VISIBLE | DS_SETFONT,
		30, 10, 100, 20, hwnd, (HMENU)(11),
		nullptr, nullptr);


}


LRESULT __stdcall MainWindow::mainWndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	e = { hwnd, uMsg, wParam, lParam };
	return this->on_event(&e);
}

LRESULT MainWindow::on_event(Event* e)
{





	return DefWindowProc(e->hwnd, e->uMsg, e->wParam, e->lParam);
}

void MainWindow::handleUserEvent(UEvent* ue)
{
	if (filterUserEvent(ue))
	{	
		this->notify(ue);
	}
}

void MainWindow::notify(UEvent* ue)
{



}


bool MainWindow::filterUserEvent(UEvent* ue)
{
	return true;
}
