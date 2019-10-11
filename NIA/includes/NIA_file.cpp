#include "NIA_file.h"

HANDLE NIA::File::open(const wstring& path, DWORD openType, DWORD dwAccess, DWORD dwShareMode)
{
	return CreateFile(path.c_str(), dwAccess, dwShareMode, NULL, openType, FILE_ATTRIBUTE_NORMAL, NULL);
}

void NIA::File::close(HANDLE file)
{
	CloseHandle(file);
}

void* NIA::File::read(HANDLE file)
{
	DWORD file_size;
	file_size = GetFileSize(file, nullptr);

	char* buffer = new char[file_size + 10];

	DWORD count_read;

	ReadFile(file, buffer, file_size, &count_read, nullptr);

	buffer[count_read] = '\0';

	return buffer;
}

DWORD NIA::File::write(HANDLE file, char* buffer, size_t count)
{
	DWORD count_write;

	WriteFile(file, buffer, count, &count_write, nullptr);

	return count_write;
}

wstring NIA::File::openDialog(HWND hwnd, LPCWSTR filter)
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


	wstring path_string = path;

	free(of);

	return path_string;
}

wstring NIA::File::saveDialog(HWND hwnd, LPCWSTR filter)
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


	wstring path_string = path;

	free(of);

	return path_string;
}

void* NIA::File::readFromDialogFile(HWND hwnd, LPCWSTR filter)
{
	wstring path = NIA::File::openDialog(hwnd, filter);
	HANDLE file = NIA::File::open(path);

	void* buffer = NIA::File::read(file);
	NIA::File::close(file);

	return buffer;
}

void NIA::File::writeToDialogFile(HWND hwnd, LPCWSTR filter, char* buffer, size_t count)
{
	wstring path = NIA::File::saveDialog(hwnd, filter);
	HANDLE file = NIA::File::open(path, OPEN_ALWAYS);

	NIA::Error::show_last();

	NIA::File::write(file, buffer, count);
	NIA::File::close(file);
}
