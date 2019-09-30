#pragma once
#include "../nia_lib/nia_lib.h"

_interface Command
{
	virtual void execute() = 0;
	virtual void unexecute() = 0;
};

