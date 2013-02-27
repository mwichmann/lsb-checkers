// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <ncursesw/curses.h>
#undef wins_wch
static int(*funcptr) (WINDOW * , cchar_t * ) = 0;

extern int __lsb_check_params;
int wins_wch (WINDOW * arg0 , cchar_t * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for wins_wch()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wins_wch");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load wins_wch. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "wins_wch() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "wins_wch - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "wins_wch - arg0");
		if( arg1 ) {
		validate_RWaddress( arg1, "wins_wch - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "wins_wch - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

