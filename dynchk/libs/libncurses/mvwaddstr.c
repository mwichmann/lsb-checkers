// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef mvwaddstr
static int(*funcptr) (WINDOW * , int , int , const char * ) = 0;

int mvwaddstr (WINDOW * arg0 , int arg1 , int arg2 , const char * arg3 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvwaddstr");
	validate_Rdaddress( arg0, "mvwaddstr - arg0");
	validate_NULL_TYPETYPE(  arg0, "mvwaddstr - arg0");
	validate_NULL_TYPETYPE(  arg1, "mvwaddstr - arg1");
	validate_NULL_TYPETYPE(  arg2, "mvwaddstr - arg2");
	validate_Rdaddress( arg3, "mvwaddstr - arg3");
	validate_NULL_TYPETYPE(  arg3, "mvwaddstr - arg3");
	return funcptr(arg0, arg1, arg2, arg3);
}

int __lsb_mvwaddstr (WINDOW * arg0 , int arg1 , int arg2 , const char * arg3 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvwaddstr");
	return funcptr(arg0, arg1, arg2, arg3);
}

