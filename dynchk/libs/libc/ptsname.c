// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef ptsname
static char *(*funcptr) (int ) = 0;

char * ptsname (int arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ptsname");
	validate_NULL_TYPETYPE(arg0, "ptsname");
	return funcptr(arg0);
}

char * lsb_ptsname (int arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ptsname");
	return funcptr(arg0);
}

