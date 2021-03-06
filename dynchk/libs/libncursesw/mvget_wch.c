// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <lsb/wchar.h>
#include <ncursesw/curses.h>
#undef mvget_wch
static int(*funcptr) (int , int , wint_t * ) = 0;

extern int __lsb_check_params;
int mvget_wch (int arg0 , int arg1 , wint_t * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for mvget_wch()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvget_wch");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load mvget_wch. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "mvget_wch() - validating");
		validate_NULL_TYPETYPE(  arg0, "mvget_wch - arg0");
		validate_NULL_TYPETYPE(  arg1, "mvget_wch - arg1");
		if( arg2 ) {
		validate_RWaddress( arg2, "mvget_wch - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "mvget_wch - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

