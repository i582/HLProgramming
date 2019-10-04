#pragma once

#include "NIA_main.h"

namespace NIA
{

	struct File
	{
		static HANDLE open(const wstring& path, DWORD dwAccess = GENERIC_READ | GENERIC_WRITE, DWORD dwShareMode = FILE_SHARE_READ);
		
		static void* read(HANDLE file);
	};

}