// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <ncursesw/curses.h>
#undef mvwhline_set
static int(*funcptr) (WINDOW * , int , int , cchar_t * , int ) = 0;

extern int __lsb_check_params;
int mvwhline_set (WINDOW * arg0 , int arg1 , int arg2 , cchar_t * arg3 , int arg4 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for mvwhline_set()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvwhline_set");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load mvwhline_set. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "mvwhline_set() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "mvwhline_set - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "mvwhline_set - arg0");
		validate_NULL_TYPETYPE(  arg1, "mvwhline_set - arg1");
		validate_NULL_TYPETYPE(  arg2, "mvwhline_set - arg2");
		if( arg3 ) {
		validate_RWaddress( arg3, "mvwhline_set - arg3");
		}
		validate_NULL_TYPETYPE(  arg3, "mvwhline_set - arg3");
		validate_NULL_TYPETYPE(  arg4, "mvwhline_set - arg4");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

