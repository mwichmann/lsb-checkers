// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/types.h>
#include <time.h>
#undef localtime_r
static struct tm *(*funcptr) (const time_t * , struct tm * ) = 0;

struct tm * localtime_r (const time_t * arg0 , struct tm * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "localtime_r");
	validate_Rdaddress( arg0, "localtime_r - arg0");
	validate_NULL_TYPETYPE(  arg0, "localtime_r - arg0");
	validate_Rdaddress( arg1, "localtime_r - arg1");
	validate_NULL_TYPETYPE(  arg1, "localtime_r - arg1");
	return funcptr(arg0, arg1);
}

struct tm * __lsb_localtime_r (const time_t * arg0 , struct tm * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "localtime_r");
	return funcptr(arg0, arg1);
}

