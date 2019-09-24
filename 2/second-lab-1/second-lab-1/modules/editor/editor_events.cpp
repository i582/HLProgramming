#include "editor.h"

void Editor::onEvent()
{

	while (running && SDL_WaitEvent(&e))
	{

		switch (e.window.windowID)
		{

		case WINDOW_ONE:
		{
			switch (e.type)
			{

			case SDL_MOUSEMOTION:
			{
				window_one->mouseMotion(&e);
				break;
			}

			case SDL_MOUSEBUTTONDOWN:
			{
				window_one->mouseButtonDown(&e);
				break;
			}

			case SDL_MOUSEBUTTONUP:
			{
				window_one->mouseButtonUp(&e);
				break;
			}

			case SDL_MOUSEWHEEL:
			{
				window_one->mouseWheel(&e);
				break;
			}

			case SDL_KEYDOWN:
			{
				window_one->keyDown(&e);
				break;
			}

			case SDL_KEYUP:
			{
				window_one->keyUp(&e);
				break;
			}

			case SDL_TEXTINPUT:
			{
				window_one->textInput(&e);
				break;
			}

			case SDL_QUIT:
			{
				quit();
				break;
			}


			break;
			}

			break;

		}


		case WINDOW_TWO:
		{
			switch (e.type)
			{

			case SDL_MOUSEMOTION:
			{
				window_two->mouseMotion(&e);
				break;
			}

			case SDL_MOUSEBUTTONDOWN:
			{
				window_two->mouseButtonDown(&e);
				break;
			}

			case SDL_MOUSEBUTTONUP:
			{
				window_two->mouseButtonUp(&e);
				break;
			}

			case SDL_MOUSEWHEEL:
			{
				window_two->mouseWheel(&e);
				break;
			}

			case SDL_KEYDOWN:
			{
				window_two->keyDown(&e);
				break;
			}

			case SDL_KEYUP:
			{
				window_two->keyUp(&e);
				break;
			}

			case SDL_TEXTINPUT:
			{
				window_two->textInput(&e);
				break;
			}

			case SDL_QUIT:
			{
				quit();
				break;
			}


			break;
			}

			break;
		}
		}



		sendHandleUserEvent();
	}

}