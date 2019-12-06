#pragma once

#include "winlib_main.h"
#include "string"
#include "locale"

namespace winlib
{
using std::string;

struct File
{
	static HANDLE open(const string& path, DWORD openType = OPEN_EXISTING, DWORD dwAccess = GENERIC_READ | GENERIC_WRITE, DWORD dwShareMode = FILE_SHARE_READ);
	static void close(HANDLE file);

	static void* read(HANDLE file);
	static DWORD write(HANDLE file, char* buffer, size_t count);

	static string openDialog(HWND hwnd, LPCSTR filter);
	static string saveDialog(HWND hwnd, LPCSTR filter);

	static void* readFromDialogFile(HWND hwnd, LPCSTR filter);
	static void writeToDialogFile(HWND hwnd, LPCSTR filter, char* buffer, size_t count);

};

}