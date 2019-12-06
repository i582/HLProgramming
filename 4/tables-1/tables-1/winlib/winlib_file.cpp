#include "winlib_file.h"

HANDLE winlib::File::open(const string& path, DWORD openType, DWORD dwAccess, DWORD dwShareMode)
{
	return CreateFile(path.c_str(), dwAccess, dwShareMode, NULL, openType, FILE_ATTRIBUTE_NORMAL, NULL);
}

void winlib::File::close(HANDLE file)
{
	CloseHandle(file);
}

void* winlib::File::read(HANDLE file)
{
	DWORD file_size;
	file_size = GetFileSize(file, nullptr);

	char* buffer = new char[file_size + 10];

	DWORD count_read;

	ReadFile(file, buffer, file_size, &count_read, nullptr);

	buffer[count_read] = '\0';

	CloseHandle(file);

	return buffer;
}

DWORD winlib::File::write(HANDLE file, char* buffer, size_t count)
{
	DWORD count_write;

	WriteFile(file, buffer, count, &count_write, nullptr);

	return count_write;
}

winlib::string winlib::File::openDialog(HWND hwnd, LPCSTR filter)
{
	OPENFILENAME* of = (OPENFILENAME*)calloc(1, sizeof(OPENFILENAME));
	if (of == nullptr)
		return "";

	CHAR path[255] = "\0";

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


	string path_string = path;

	free(of);

	return path_string;
}

winlib::string winlib::File::saveDialog(HWND hwnd, LPCSTR filter)
{
	OPENFILENAME* of = (OPENFILENAME*)calloc(1, sizeof(OPENFILENAME));
	if (of == nullptr)
		return "";

	CHAR path[255] = "\0";

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


	string path_string = path;

	free(of);

	return path_string;
}

void* winlib::File::readFromDialogFile(HWND hwnd, LPCSTR filter)
{
	string path = winlib::File::openDialog(hwnd, filter);
	HANDLE file = winlib::File::open(path);

	void* buffer = winlib::File::read(file);
	winlib::File::close(file);

	return buffer;
}

void winlib::File::writeToDialogFile(HWND hwnd, LPCSTR filter, char* buffer, size_t count)
{
	string path = winlib::File::saveDialog(hwnd, filter);
	HANDLE file = winlib::File::open(path, OPEN_ALWAYS);


	winlib::File::write(file, buffer, count);
	winlib::File::close(file);
}