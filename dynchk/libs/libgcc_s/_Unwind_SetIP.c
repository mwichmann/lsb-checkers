// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static void(*funcptr)() = 0;

void _Unwind_SetIP()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "_Unwind_SetIP");
	funcptr();
}

void lsb__Unwind_SetIP()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "_Unwind_SetIP");
	funcptr();
}

