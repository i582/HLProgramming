#pragma once

#include "NIA_main.h"
#include "NIA_error.h"

namespace NIA
{

	struct File
	{
		static HANDLE open(const wstring& path, DWORD openType = OPEN_EXISTING, DWORD dwAccess = GENERIC_READ | GENERIC_WRITE, DWORD dwShareMode = FILE_SHARE_READ);
		static void close(HANDLE file);

		static void* read(HANDLE file);
		static DWORD write(HANDLE file, char* buffer, size_t count);

		static wstring openDialog(HWND hwnd, LPCWSTR filter);
		static wstring saveDialog(HWND hwnd, LPCWSTR filter);

		static void* readFromDialogFile(HWND hwnd, LPCWSTR filter);
		static void writeToDialogFile(HWND hwnd, LPCWSTR filter, char* buffer, size_t count);

	};

}