#include "app.h"

App::App()
{
	this->window = nullptr;
	this->renderer = nullptr;
	this->e = {};

	this->running = true;
}

App::~App()
{
	SDL_RemoveTimer(repeatOnceFunctionTimer);
	SDL_RemoveTimer(customEventFunctionTimer);

	SDL_Log("Старт разрушения окна");
	SDL_DestroyWindow(window);
	SDL_Log("разрушение окна успешно завершено");
	SDL_Quit();
}

bool App::init()
{
	SDL_Log("Начало создания окна");
	this->window = SDL_CreateWindow("SDL2: Магические события",
		SDL_WINDOWPOS_CENTERED,
		SDL_WINDOWPOS_CENTERED,
		480, 640, SDL_WINDOW_ALLOW_HIGHDPI | SDL_WINDOW_RESIZABLE);

	if (window == nullptr)
	{
		SDL_Log("Ошибка создания окна: %s\n", SDL_GetError());
		return false;
	}

	this->renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
	if (renderer == nullptr)
	{
		SDL_Log("Ошибка создания renderer! SDL Error: %s\n", SDL_GetError());
		return false;
	}

	SDL_SetEventFilter(eventFilter, nullptr);
	

	createTimers();

	return true;
}

void App::setup()
{
}

void App::update()
{
}

void App::on_event()
{
	SDL_WaitEvent(nullptr);
}

void App::quit()
{
	running = false;
}

int App::run()
{
	if (!init())
		return -1;

	setup();
	update();
	on_event();

	return 0;
}

bool App::createTimers()
{
	customEventFunctionTimer = SDL_AddTimer(2000 /* 2 sec */, customEventFunction, window);

	if (customEventFunctionTimer == 0)
	{
		SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, "Ошибка", "Невозможно создать кастомный событийный таймер. Расширенная информация в лог-файле.", window);
		SDL_LogCritical(SDL_LOG_CATEGORY_APPLICATION, "Невозможно создать кастомный событийный таймер, ошибка: %s", SDL_GetError());
		return false;
	}

	repeatOnceFunctionTimer = SDL_AddTimer(10000 /* 10 sec */, repeatOnceFunction, window);

	if (repeatOnceFunctionTimer == 0)
	{
		SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, "Ошибка", "Невозможно создать кастомный одноразовый таймер. Расширенная информация в лог-файле.", window);
		SDL_LogCritical(SDL_LOG_CATEGORY_APPLICATION, "Невозможно создать кастомный одноразовый таймер, ошибка: %s", SDL_GetError());
		return false;
	}

	return true;
}

void App::clearScreen(SDL_Window* window)
{
	SDL_Surface* screen = SDL_GetWindowSurface(window);

	SDL_FillRect(screen, nullptr, SDL_MapRGB(screen->format, rand() % 255, rand() % 255, rand() % 255));

	SDL_UpdateWindowSurface(window);
}

Uint32 App::repeatOnceFunction(Uint32 interval, void* param)
{
	SDL_Event exitEvent = { SDL_QUIT };

	SDL_Log("Таймер работает с следующим интервалом %d мс", interval);

	if (asmFunction() != 0)
	{
		SDL_HideWindow((SDL_Window*)param);

		SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_INFORMATION, "Что-то пошло не так", "Найди меня! Я потерялся!", nullptr);

		SDL_Delay(15000); /* 15 sec */
		SDL_LogWarn(SDL_LOG_CATEGORY_APPLICATION, "Ты не нашел меня! Я расстроен тобою... я ухожу.");

		SDL_PushEvent(&exitEvent);
	}

	return 0;
}

Uint32 App::customEventFunction(Uint32 interval, void* param)
{
	SDL_Event event = { SDL_WINDOWEVENT };

	SDL_Log("Таймер работает с следующим интервалом %d мс", interval);

	event.window.windowID = SDL_GetWindowID((SDL_Window*)param);
	event.window.event = SDL_WINDOWEVENT_EXPOSED;

	SDL_PushEvent(&event);
	return interval;
}

int App::asmFunction()
{
	static int internalValue = 1;

#ifdef __GNUC__
	__asm__("movl %0, %%eax\n\t"
		"add %%eax, %0"
		: "=r" (internalValue)
		: "r" (internalValue));
#elif _MSC_VER
	_asm {
		mov eax, internalValue
		add internalValue, eax
	};
#endif

	return internalValue;
}

int App::eventFilter(void* userdata, SDL_Event* event)
{
	switch (event->type)
	{
	case SDL_KEYDOWN:

		if (event->key.keysym.sym == SDLK_q && event->key.keysym.mod == KMOD_CTRL)
		{
			SDL_Event exitEvent = { SDL_QUIT };
			SDL_PushEvent(&exitEvent);
		}

		SDL_Log("нажатие кнопки %d", event->key.keysym.sym);
		break;


	case SDL_KEYUP:
		SDL_Log("отжатие кнопки %d", event->key.keysym.sym);
		break;


	case SDL_TEXTEDITING:
		SDL_Log("Клавиатурное исправление (композиция). Композия: '%s', курсор начал с %d и выбрал длину в %d", event->edit.text, event->edit.start, event->edit.length);
		break;


	case SDL_TEXTINPUT:
		SDL_Log("Клавиатурный ввод. Текст: '%s'", event->text.text);
		break;


	case SDL_FINGERMOTION:
		SDL_Log("Пальчик водится: %lld, x: %f, y: %f", event->tfinger.fingerId, event->tfinger.x, event->tfinger.y);
		break;


	case SDL_FINGERDOWN:
		SDL_Log("Пальчик: %lld вниз - x: %f, y: %f",
			event->tfinger.fingerId, event->tfinger.x, event->tfinger.y);
		return 1;


	case SDL_FINGERUP:
		SDL_Log("Пальчик: %lld вверх - x: %f, y: %f", event->tfinger.fingerId, event->tfinger.x, event->tfinger.y);
		break;


	case SDL_MULTIGESTURE:
		SDL_Log("Мульти тач: x = %f, y = %f, dAng = %f, dR = %f", event->mgesture.x, event->mgesture.y, event->mgesture.dTheta, event->mgesture.dDist);
		SDL_Log("Мульти тач: нажатие пальца = %i", event->mgesture.numFingers);
		break;


	case SDL_DOLLARGESTURE:
		SDL_Log("Записываемый %lld получен, ошибка: %f", event->dgesture.gestureId, event->dgesture.error);
		break;


	case SDL_DOLLARRECORD:
		SDL_Log("Записываемый черт: %lld", event->dgesture.gestureId);
		break;


	case SDL_MOUSEMOTION:
		SDL_Log("Мышинный сдвиг. X=%d, Y=%d, ИзмененияX=%d, ИзмененияY=%d", event->motion.x, event->motion.y, event->motion.xrel, event->motion.yrel);
		break;


	case SDL_MOUSEBUTTONDOWN:
		if (event->button.button == SDL_BUTTON_LEFT)
			asmFunction();
		SDL_Log("Мышинный Кнопка Вниз %u", event->button.button);
		break;


	case SDL_MOUSEBUTTONUP:
		SDL_Log("Мышинный Кнопка Вверх %u", event->button.button);
		break;


	case SDL_MOUSEWHEEL:
		SDL_Log("Мышинный Колесо X=%d, Y=%d", event->wheel.x, event->wheel.y);
		break;


	case SDL_QUIT:
		SDL_Log("Пользовательский выход");
		return 1;


	case SDL_WINDOWEVENT:


		switch (event->window.event)
		{
		case SDL_WINDOWEVENT_SHOWN:
			SDL_Log("Окно %d показано", event->window.windowID);
			break;

		case SDL_WINDOWEVENT_HIDDEN:
			SDL_Log("Окно %d скрыто", event->window.windowID);
			break;

		case SDL_WINDOWEVENT_EXPOSED:
			clearScreen(SDL_GetWindowFromID(event->window.windowID));
			SDL_Log("Окно %d сдвинуто", event->window.windowID);
			break;

		case SDL_WINDOWEVENT_MOVED:
			SDL_Log("Окно %d перемещенно в %d,%d", event->window.windowID, event->window.data1, event->window.data2);
			break;

		case SDL_WINDOWEVENT_RESIZED:
			SDL_Log("Окно %d изменено до %dx%d", event->window.windowID, event->window.data1, event->window.data2);
			break;

		case SDL_WINDOWEVENT_SIZE_CHANGED:
			SDL_Log("Окно %d изменила размер до %dx%d", event->window.windowID, event->window.data1, event->window.data2);
			break;

		case SDL_WINDOWEVENT_MINIMIZED:
			SDL_Log("Окно %d свернуто", event->window.windowID);
			break;

		case SDL_WINDOWEVENT_MAXIMIZED:
			SDL_Log("Окно %d развернуто", event->window.windowID);
			break;

		case SDL_WINDOWEVENT_RESTORED:
			SDL_Log("Окно %d восстановленно", event->window.windowID);
			break;

		case SDL_WINDOWEVENT_ENTER:
			SDL_Log("Мышь пришла к окну %d", event->window.windowID);
			break;

		case SDL_WINDOWEVENT_LEAVE:
			SDL_Log("Мышь покинула окна %d", event->window.windowID);
			break;

		case SDL_WINDOWEVENT_FOCUS_GAINED:
			SDL_Log("Окно %d получило фокус клавиатуры", event->window.windowID);
			break;

		case SDL_WINDOWEVENT_FOCUS_LOST:
			SDL_Log("Окно %d потеряла фокус клавиатуры", event->window.windowID);
			break;

		case SDL_WINDOWEVENT_CLOSE:
			SDL_Log("Окно %d закрыто", event->window.windowID);
			break;

		default:
			SDL_Log("Окно %d получило неизвестное событие %d", event->window.windowID, event->window.event);
			break;
		}
		break;


	default:
		SDL_Log("Получен неизвестное событие %d", event->type);
		break;
	}

	return 0;
}
