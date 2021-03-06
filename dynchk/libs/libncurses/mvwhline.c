// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <curses.h>
#undef mvwhline
static int(*funcptr) (WINDOW * , int , int , chtype , int ) = 0;

extern int __lsb_check_params;
int mvwhline (WINDOW * arg0 , int arg1 , int arg2 , chtype arg3 , int arg4 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for mvwhline()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvwhline");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load mvwhline. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "mvwhline() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "mvwhline - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "mvwhline - arg0");
		validate_NULL_TYPETYPE(  arg1, "mvwhline - arg1");
		validate_NULL_TYPETYPE(  arg2, "mvwhline - arg2");
		validate_NULL_TYPETYPE(  arg3, "mvwhline - arg3");
		validate_NULL_TYPETYPE(  arg4, "mvwhline - arg4");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

