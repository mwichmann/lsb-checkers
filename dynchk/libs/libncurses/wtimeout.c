// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <curses.h>
#undef wtimeout
static void(*funcptr) (WINDOW * , int ) = 0;

extern int __lsb_check_params;
void wtimeout (WINDOW * arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wtimeout");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "wtimeout()");
		validate_RWaddress( arg0, "wtimeout - arg0");
		validate_NULL_TYPETYPE(  arg0, "wtimeout - arg0");
		validate_NULL_TYPETYPE(  arg1, "wtimeout - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

