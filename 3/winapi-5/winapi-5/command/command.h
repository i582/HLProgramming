#pragma once

#include "../lib/lib.h"

#include "vector"

_interface Command
{
	virtual void execute() = 0;
	virtual void unexecute() = 0;
};

