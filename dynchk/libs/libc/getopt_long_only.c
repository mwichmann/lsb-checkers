// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <getopt.h>
#undef getopt_long_only
static int(*funcptr) (int , char *const  [], const char * , const struct option * , int * ) = 0;

int getopt_long_only (int arg0 , char *const  arg1 [], const char * arg2 , const struct option * arg3 , int * arg4 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getopt_long_only");
	validate_NULL_TYPETYPE(  arg0, "getopt_long_only - arg0");
	validate_NULL_TYPETYPE(  arg1, "getopt_long_only - arg1");
	validate_Rdaddress( arg2, "getopt_long_only - arg2");
	validate_NULL_TYPETYPE(  arg2, "getopt_long_only - arg2");
	validate_Rdaddress( arg3, "getopt_long_only - arg3");
	validate_NULL_TYPETYPE(  arg3, "getopt_long_only - arg3");
	validate_Rdaddress( arg4, "getopt_long_only - arg4");
	validate_NULL_TYPETYPE(  arg4, "getopt_long_only - arg4");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}

int __lsb_getopt_long_only (int arg0 , char *const  arg1 [], const char * arg2 , const struct option * arg3 , int * arg4 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getopt_long_only");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}

