#include "lib-file.h"

HANDLE lib::File::open(const std::string& path, DWORD openType, DWORD dwAccess, DWORD dwShareMode)
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

std::string lib::File::openDialog(HWND hwnd, LPCSTR filter)
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


	std::string path_string = path;

	free(of);

	return path_string;
}

std::string lib::File::saveDialog(HWND hwnd, LPCSTR filter)
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


	std::string path_string = path;

	free(of);

	return path_string;
}

void* lib::File::readFromDialogFile(HWND hwnd, LPCSTR filter)
{
	std::string path = lib::File::openDialog(hwnd, filter);
	HANDLE file = lib::File::open(path);

	void* buffer = lib::File::read(file);
	lib::File::close(file);

	return buffer;
}

void lib::File::writeToDialogFile(HWND hwnd, LPCSTR filter, char* buffer, size_t count)
{
	std::string path = lib::File::saveDialog(hwnd, filter);
	HANDLE file = lib::File::open(path, OPEN_ALWAYS);

	lib::File::write(file, buffer, count);
	lib::File::close(file);
}
