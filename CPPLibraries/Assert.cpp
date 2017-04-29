#include "Precompiled.h"

#include <crtdbg.h>
#include <stdio.h>

#define ASSERT _ASSERTE

auto main() -> int
{
	ASSERT(4 == 5);
	printf("SUCCESS!\n");
	
	system("pause");
	return 0;
}