
#include "winlib_file.h"


#pragma comment(linker,"\"/manifestdependency:type='win32' \
name='Microsoft.Windows.Common-Controls' version='6.0.0.0' \
processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")

#include "app.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
                   LPSTR lpCmdLine, int nCmdShow)
{
    App* app = App::get_instance();
    app->run();
    delete app;
    return 0;
}

//
//const int count_numbers = 100;
//
//
//DWORD WINAPI ThreadFunction(void* file)
//{
//
//    for (int i = 0; i < 100; ++i)
//    {
//        HANDLE hRead = OpenMutex(MUTEX_ALL_ACCESS, TRUE, "ReadData");
//
//        if (hRead == NULL || WaitForSingleObject(hRead, INFINITE) == WAIT_OBJECT_0)
//        {
//
//            HANDLE hShared = CreateMutex(NULL, TRUE, "WriteData");
//
//            int rand_number = std::rand();
//
//            FILE* file = fopen("../1.txt", "w");
//
//            fprintf(file, "%d\n", rand_number);
//
//            fclose(file);
//
//            cout << "Записано число: " << rand_number << endl;
//
//            //cout << str.c_str() << endl;
//
//            //winlib::File::write(file, const_cast<char*>(str.c_str()), str.size());
//
//            ReleaseMutex(hShared);
//
//            CloseHandle(hRead);
//        }
//    }
//
//
//
//    return 0;
//}
//

//int main()
//{
//    //HANDLE file = winlib::File::open("E:/Programming/HLProgramming/5/file_ in_threads/1.txt");
//    HANDLE thread = CreateThread(nullptr, 0, ThreadFunction, nullptr, 0, nullptr);
//
//
//
//    for (int i = 0; i < 100; ++i)
//    {
//        HANDLE hShared = OpenMutex(MUTEX_ALL_ACCESS, TRUE, "WriteData");
//
//
//        HANDLE hRead = CreateMutex(NULL, TRUE, "ReadData");
//
//        if (hShared == NULL || WaitForSingleObject(hShared, INFINITE) == WAIT_OBJECT_0)
//        {
//            int rand_number;
//
//            FILE* file = fopen("../1.txt", "r");
//
//            fscanf(file, "%d\n", &rand_number);
//
//            fclose(file);
//
//
//            cout << "Считано число: " << rand_number << endl;
//
//            ReleaseMutex(hRead);
//
//
//
//
//            CloseHandle(hShared);
//
//        }
//    }
//
//    //Sleep(2000);
//
//
//    CloseHandle(thread);
//    return 0;
//}