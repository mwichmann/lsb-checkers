// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <term.h>
#include <curses.h>
#undef overlay
static int(*funcptr) (const WINDOW * , WINDOW * ) = 0;

extern int __lsb_check_params;
int overlay (const WINDOW * arg0 , WINDOW * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "overlay");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "overlay()");
		validate_Rdaddress( arg0, "overlay - arg0");
		validate_NULL_TYPETYPE(  arg0, "overlay - arg0");
		validate_RWaddress( arg1, "overlay - arg1");
		validate_NULL_TYPETYPE(  arg1, "overlay - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

