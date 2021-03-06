// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <curses.h>
#undef wborder
static int(*funcptr) (WINDOW * , chtype , chtype , chtype , chtype , chtype , chtype , chtype , chtype ) = 0;

extern int __lsb_check_params;
int wborder (WINDOW * arg0 , chtype arg1 , chtype arg2 , chtype arg3 , chtype arg4 , chtype arg5 , chtype arg6 , chtype arg7 , chtype arg8 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for wborder()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wborder");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load wborder. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "wborder() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "wborder - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "wborder - arg0");
		validate_NULL_TYPETYPE(  arg1, "wborder - arg1");
		validate_NULL_TYPETYPE(  arg2, "wborder - arg2");
		validate_NULL_TYPETYPE(  arg3, "wborder - arg3");
		validate_NULL_TYPETYPE(  arg4, "wborder - arg4");
		validate_NULL_TYPETYPE(  arg5, "wborder - arg5");
		validate_NULL_TYPETYPE(  arg6, "wborder - arg6");
		validate_NULL_TYPETYPE(  arg7, "wborder - arg7");
		validate_NULL_TYPETYPE(  arg8, "wborder - arg8");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
	__lsb_check_params = reset_flag;
	return ret_value;
}

