// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/time.h>
#undef adjtime
static int(*funcptr) (const struct timeval * , struct timeval * ) = 0;

int adjtime (const struct timeval * arg0 , struct timeval * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "adjtime");
	validate_Rdaddress( arg0, "adjtime - arg0");
	validate_NULL_TYPETYPE(  arg0, "adjtime - arg0");
	validate_Rdaddress( arg1, "adjtime - arg1");
	validate_NULL_TYPETYPE(  arg1, "adjtime - arg1");
	return funcptr(arg0, arg1);
}

int __lsb_adjtime (const struct timeval * arg0 , struct timeval * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "adjtime");
	return funcptr(arg0, arg1);
}

