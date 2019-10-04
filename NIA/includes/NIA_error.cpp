#include "NIA_error.h"

unsigned long NIA::Error::last()
{
	return GetLastError();
}

void NIA::Error::show_last(int line, string path)
{
	NIA_ShowErrorDescriptionByErrorId(last(), line, NIA::to_wstring(path));
}

void NIA::Error::reset()
{
	SetLastError(0);
}
