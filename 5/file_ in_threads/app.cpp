#include "app.h"

App* App::instance = nullptr;

App* App::get_instance()
{
    if (instance == nullptr)
        instance = new App;

    return instance;
}

App::~App()
{
    CloseHandle(thread);
    CloseHandle(thread2);
}

App::App()
{


    // window part
    this->msg = {};
    this->hwnd = nullptr;
    this->hdc = nullptr;
    this->wc = {};
    this->ps = {};


}

int App::init()
{
    wc.cbSize = sizeof(WNDCLASSEX);
    wc.cbClsExtra = 0;
    wc.cbWndExtra = 0;
    wc.hbrBackground = CreateSolidBrush(0xffffff);
    wc.hCursor = LoadCursor(NULL, IDC_ARROW);
    wc.hIcon = 0;
    wc.hIconSm = 0;
    wc.hInstance = nullptr;
    wc.lpfnWndProc = App::StaticWndProc;
    wc.lpszClassName = "MyApp";
    wc.lpszMenuName = nullptr;
    wc.style = CS_VREDRAW | CS_HREDRAW;

    if (!RegisterClassEx(&wc))
    {
        return EXIT_FAILURE;
    }

    if (hwnd = CreateWindow(
            wc.lpszClassName,
            "just window",
            WS_OVERLAPPEDWINDOW,
            100, 100, 1000, 700,
            nullptr, nullptr,
            wc.hInstance,
            this),

            hwnd == INVALID_HANDLE_VALUE)
    {
        return EXIT_FAILURE;
    }

    this->hdc = GetDC(hwnd);


    return true;
}

void App::setup()
{
    thread = CreateThread(NULL, 0, ThreadFunction, NULL, 0, NULL);
    thread2 = CreateThread(NULL, 0, ThreadFunction2, NULL, 0, NULL);
}

void App::update()
{

}

LRESULT App::StaticWndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    if (instance != nullptr)
    {
        return instance->WndProc(hwnd, uMsg, wParam, lParam);
    }

    return DefWindowProc(hwnd, uMsg, wParam, lParam);
}

LRESULT App::WndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{



    switch (uMsg)
    {

        case WM_CREATE:
        {
            input = CreateWindowEx(WS_EX_CLIENTEDGE, "edit", "", WS_CHILD | WS_VISIBLE | ES_LEFT,
                                   10, 10, 80, 30, hwnd, (HMENU)10000, nullptr, NULL);





            label = CreateWindow("STATIC",
                                 "������ ���!", WS_CHILD | WS_VISIBLE,
                                 640, 10, 200, 20, hwnd, (HMENU)12, nullptr, NULL);



            button = CreateWindow("button", "Settings Speed", WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
                                  10, 100, 120, 30, hwnd, (HMENU)111, nullptr, NULL);



            return 0;
        }

        case WM_NOTIFY:
        {
            return 0;
        }


        case WM_PAINT:
        {

            HDC hdc_temp = BeginPaint(hwnd, &ps);

            EndPaint(hwnd, &ps);
            return 0;
        }

        case WM_LBUTTONDOWN:
        {

            break;
        }

        case WM_MOUSEMOVE:
        {

            break;
        }

        case WM_COMMAND:
        {

            switch (LOWORD(wParam))
            {

                case 111:
                {

                    SetWindowText(label, "����");

                    break;
                }

                default:break;
            }

            return 0;
        }

        case WM_DESTROY:
        {
            PostQuitMessage(EXIT_SUCCESS);
            return 0;
        }

    }


    return DefWindowProc(hwnd, uMsg, wParam, lParam);
}


DWORD __stdcall App::ThreadFunction(LPVOID lpParameter)
{
    HANDLE hShared = CreateMutex(NULL, TRUE, "WriteData");

    for (std::size_t i = 0; i < 10; i++)
    {
        SetWindowText(App::get_instance()->label, std::to_string(i).c_str());

        Sleep(500);
    }

    ReleaseMutex(hShared);

    CloseHandle(hShared);
    return 0;
}

DWORD __stdcall App::ThreadFunction2(LPVOID lpParameter)
{
    HANDLE hShared = OpenMutex(MUTEX_ALL_ACCESS, TRUE, "WriteData");

    if (WaitForSingleObject(hShared, INFINITE) == WAIT_OBJECT_0)
    {

        for (std::size_t i = 10; i < 30; i++)
        {
            SetWindowText(App::get_instance()->label, std::to_string(i).c_str());

            Sleep(250);
        }

        ReleaseMutex(hShared);
        CloseHandle(hShared);

    }
    return 0;
}



int App::run()
{
    init();
    setup();

    ShowWindow(hwnd, SW_SHOWDEFAULT);
    UpdateWindow(hwnd);

    while (GetMessage(&msg, hwnd, 0, 0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return (int)msg.wParam;
}