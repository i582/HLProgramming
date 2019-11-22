#pragma once

#include "lib-main.h"


namespace lib
{

struct File
{
	static HANDLE open(const std::wstring& path, DWORD openType = OPEN_EXISTING, DWORD dwAccess = GENERIC_READ | GENERIC_WRITE, DWORD dwShareMode = FILE_SHARE_READ);
	static void close(HANDLE file);

	static void* read(HANDLE file);
	static DWORD write(HANDLE file, char* buffer, size_t count);

	static std::wstring openDialog(HWND hwnd, LPCWSTR filter);
	static std::wstring saveDialog(HWND hwnd, LPCWSTR filter);

	static void* readFromDialogFile(HWND hwnd, LPCWSTR filter);
	static void writeToDialogFile(HWND hwnd, LPCWSTR filter, char* buffer, size_t count);

};

}