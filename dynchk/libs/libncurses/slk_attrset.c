// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(const chtype) = 0;

int slk_attrset(const chtype arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "slk_attrset");
	validate_NULL_TYPETYPE(arg0, "slk_attrset");
	return funcptr(arg0);
}

int lsb_slk_attrset(const chtype arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "slk_attrset");
	return funcptr(arg0);
}

