// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <ncursesw/curses.h>
#undef whline_set
static int(*funcptr) (WINDOW * , cchar_t * , int ) = 0;

extern int __lsb_check_params;
int whline_set (WINDOW * arg0 , cchar_t * arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for whline_set()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "whline_set");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load whline_set. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "whline_set() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "whline_set - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "whline_set - arg0");
		if( arg1 ) {
		validate_RWaddress( arg1, "whline_set - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "whline_set - arg1");
		validate_NULL_TYPETYPE(  arg2, "whline_set - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

