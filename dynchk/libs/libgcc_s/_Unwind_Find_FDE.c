// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static fde *(*funcptr)() = 0;

fde * _Unwind_Find_FDE()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "_Unwind_Find_FDE");
	return funcptr();
}

fde * lsb__Unwind_Find_FDE()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "_Unwind_Find_FDE");
	return funcptr();
}

