// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/types.h>
#include <sys/time.h>
#include <unistd.h>
#undef select
static int(*funcptr) (int , fd_set * , fd_set * , fd_set * , struct timeval * ) = 0;

int select (int arg0 , fd_set * arg1 , fd_set * arg2 , fd_set * arg3 , struct timeval * arg4 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "select");
	validate_NULL_TYPETYPE(  arg0, "select - arg0");
	validate_Rdaddress( arg1, "select - arg1");
	validate_NULL_TYPETYPE(  arg1, "select - arg1");
	validate_Rdaddress( arg2, "select - arg2");
	validate_NULL_TYPETYPE(  arg2, "select - arg2");
	validate_Rdaddress( arg3, "select - arg3");
	validate_NULL_TYPETYPE(  arg3, "select - arg3");
	if( arg4 ) {
	validate_Rdaddress( arg4, "select - arg4");
	}
	validate_NULL_TYPETYPE(  arg4, "select - arg4");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}

int __lsb_select (int arg0 , fd_set * arg1 , fd_set * arg2 , fd_set * arg3 , struct timeval * arg4 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "select");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}

