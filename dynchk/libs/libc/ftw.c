// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <ftw.h>
#undef ftw
static int(*funcptr) (const char * , __ftw_func_t , int ) = 0;

int ftw (const char * arg0 , __ftw_func_t arg1 , int arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ftw");
	validate_Rdaddress( arg0, "ftw - arg0");
	validate_NULL_TYPETYPE(  arg0, "ftw - arg0");
	validate_NULL_TYPETYPE(  arg1, "ftw - arg1");
	validate_NULL_TYPETYPE(  arg2, "ftw - arg2");
	return funcptr(arg0, arg1, arg2);
}

int __lsb_ftw (const char * arg0 , __ftw_func_t arg1 , int arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ftw");
	return funcptr(arg0, arg1, arg2);
}

