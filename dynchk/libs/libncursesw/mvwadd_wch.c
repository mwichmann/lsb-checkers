// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <ncursesw/curses.h>
#undef mvwadd_wch
static int(*funcptr) (WINDOW * , int , int , cchar_t * ) = 0;

extern int __lsb_check_params;
int mvwadd_wch (WINDOW * arg0 , int arg1 , int arg2 , cchar_t * arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for mvwadd_wch()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvwadd_wch");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load mvwadd_wch. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "mvwadd_wch() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "mvwadd_wch - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "mvwadd_wch - arg0");
		validate_NULL_TYPETYPE(  arg1, "mvwadd_wch - arg1");
		validate_NULL_TYPETYPE(  arg2, "mvwadd_wch - arg2");
		if( arg3 ) {
		validate_RWaddress( arg3, "mvwadd_wch - arg3");
		}
		validate_NULL_TYPETYPE(  arg3, "mvwadd_wch - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

