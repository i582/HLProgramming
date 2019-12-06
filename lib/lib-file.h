#pragma once

#include "lib-main.h"


namespace lib
{

struct File
{
	static HANDLE open(const std::string& path, DWORD openType = OPEN_EXISTING, DWORD dwAccess = GENERIC_READ | GENERIC_WRITE, DWORD dwShareMode = FILE_SHARE_READ);
	static void close(HANDLE file);

	static void* read(HANDLE file);
	static DWORD write(HANDLE file, char* buffer, size_t count);

	static std::string openDialog(HWND hwnd, LPCSTR filter);
	static std::string saveDialog(HWND hwnd, LPCSTR filter);

	static void* readFromDialogFile(HWND hwnd, LPCSTR filter);
	static void writeToDialogFile(HWND hwnd, LPCSTR filter, char* buffer, size_t count);

};

}