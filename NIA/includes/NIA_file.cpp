#include "NIA_file.h"

HANDLE NIA::File::open(const wstring& path, DWORD dwAccess, DWORD dwShareMode)
{
	return CreateFile(path.c_str(), dwAccess, dwShareMode, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
}

void* NIA::File::read(HANDLE file)
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
