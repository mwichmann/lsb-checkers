// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef strfry
static char *(*funcptr) (char * ) = 0;

char * strfry (char * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "strfry");
	validate_NULL_TYPETYPE(arg0, "strfry");
	return funcptr(arg0);
}

char * lsb_strfry (char * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "strfry");
	return funcptr(arg0);
}

