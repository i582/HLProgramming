cmake_minimum_required(VERSION 3.14.5)
project(file__in_threads)

set(CMAKE_CXX_STANDARD 17)

add_executable(file__in_threads main.cpp winlib_file.h winlib_file.cpp app.h app.cpp)

set(LIB_COM_DLG, "C:/cygwin64/lib/w32api/")

target_link_libraries(file__in_threads ${LIB_COM_DLG}libcomdlg32.a)

target_link_libraries(file__in_threads ${LIB_COM_DLG}libgdi32.a)