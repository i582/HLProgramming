#include "lib-file.h"

HANDLE lib::File::open(const std::wstring& path, DWORD openType, DWORD dwAccess, DWORD dwShareMode)
{
	return CreateFile(path.c_str(), dwAccess, dwShareMode, NULL, openType, FILE_ATTRIBUTE_NORMAL, NULL);
}

void lib::File::close(HANDLE file)
{
	CloseHandle(file);
}

void* lib::File::read(HANDLE file)
{
	DWORD file_size;
	file_size = GetFileSize(file, nullptr);

	char* buffer = new char[file_size + 10];

	DWORD count_read;

	ReadFile(file, buffer, file_size, &count_read, nullptr);

	buffer[count_read] = '\0';

	return buffer;
}

DWORD lib::File::write(HANDLE file, char* buffer, size_t count)
{
	DWORD count_write;

	WriteFile(file, buffer, count, &count_write, nullptr);

	return count_write;
}

std::wstring lib::File::openDialog(HWND hwnd, LPCWSTR filter)
{
	OPENFILENAME* of = (OPENFILENAME*)calloc(1, sizeof(OPENFILENAME));
	if (of == nullptr)
		return L"";

	WCHAR path[255] = L"\0";

	of->lStructSize = sizeof(OPENFILENAME);
	of->hwndOwner = hwnd;
	of->hInstance = NULL;
	of->lpstrFilter = filter;
	of->lpstrCustomFilter = NULL;
	of->nMaxCustFilter = NULL;
	of->nFilterIndex = 1;
	of->lpstrFile = path;
	of->nMaxFile = 256;
	of->lpstrFileTitle = NULL;
	of->nMaxFileTitle = NULL;
	of->lpstrInitialDir = NULL;
	of->lpstrTitle = NULL;

	of->Flags = OFN_FILEMUSTEXIST | OFN_EXPLORER;
	of->nFileOffset = NULL;
	of->nFileExtension = NULL;
	of->lpstrDefExt = NULL;
	of->lCustData = NULL;
	of->lpfnHook = NULL;
	of->lpTemplateName = NULL;

	GetOpenFileName(of);


	std::wstring path_string = path;

	free(of);

	return path_string;
}

std::wstring lib::File::saveDialog(HWND hwnd, LPCWSTR filter)
{
	OPENFILENAME* of = (OPENFILENAME*)calloc(1, sizeof(OPENFILENAME));
	if (of == nullptr)
		return L"";

	WCHAR path[255] = L"\0";

	of->lStructSize = sizeof(OPENFILENAME);
	of->hwndOwner = hwnd;
	of->hInstance = NULL;
	of->lpstrFilter = filter;
	of->lpstrCustomFilter = NULL;
	of->nMaxCustFilter = NULL;
	of->nFilterIndex = NULL;
	of->lpstrFile = path;
	of->nMaxFile = 256;
	of->lpstrFileTitle = NULL;
	of->nMaxFileTitle = NULL;
	of->lpstrInitialDir = NULL;
	of->lpstrTitle = NULL;

	of->Flags = NULL;
	of->nFileOffset = NULL;
	of->nFileExtension = NULL;
	of->lpstrDefExt = NULL;
	of->lCustData = NULL;
	of->lpfnHook = NULL;
	of->lpTemplateName = NULL;

	GetSaveFileName(of);


	std::wstring path_string = path;

	free(of);

	return path_string;
}

void* lib::File::readFromDialogFile(HWND hwnd, LPCWSTR filter)
{
	std::wstring path = lib::File::openDialog(hwnd, filter);
	HANDLE file = lib::File::open(path);

	void* buffer = lib::File::read(file);
	lib::File::close(file);

	return buffer;
}

void lib::File::writeToDialogFile(HWND hwnd, LPCWSTR filter, char* buffer, size_t count)
{
	std::wstring path = lib::File::saveDialog(hwnd, filter);
	HANDLE file = lib::File::open(path, OPEN_ALWAYS);

	lib::File::write(file, buffer, count);
	lib::File::close(file);
}
