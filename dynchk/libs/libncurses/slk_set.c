// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef slk_set
static int(*funcptr) (int , const char * , int ) = 0;

int slk_set (int arg0 , const char * arg1 , int arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "slk_set");
	validate_NULL_TYPETYPE(  arg0, "slk_set - arg0");
	validate_Rdaddress( arg1, "slk_set - arg1");
	validate_NULL_TYPETYPE(  arg1, "slk_set - arg1");
	validate_NULL_TYPETYPE(  arg2, "slk_set - arg2");
	return funcptr(arg0, arg1, arg2);
}

int __lsb_slk_set (int arg0 , const char * arg1 , int arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "slk_set");
	return funcptr(arg0, arg1, arg2);
}

