// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef mkstemp64
static int(*funcptr) (char * ) = 0;

int mkstemp64 (char * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mkstemp64");
	validate_NULL_TYPETYPE(arg0, "mkstemp64");
	return funcptr(arg0);
}

int lsb_mkstemp64 (char * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mkstemp64");
	return funcptr(arg0);
}

