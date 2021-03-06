// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <curses.h>
#undef color_set
static int(*funcptr) (short , void * ) = 0;

extern int __lsb_check_params;
int color_set (short arg0 , void * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for color_set()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "color_set");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load color_set. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "color_set() - validating");
		validate_NULL_TYPETYPE(  arg0, "color_set - arg0");
		if( arg1 ) {
		validate_RWaddress( arg1, "color_set - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "color_set - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

