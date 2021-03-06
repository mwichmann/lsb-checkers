// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <ncursesw/curses.h>
#include <lsb/wchar.h>
#undef mvwgetn_wstr
static int(*funcptr) (WINDOW * , int , int , wint_t * , int ) = 0;

extern int __lsb_check_params;
int mvwgetn_wstr (WINDOW * arg0 , int arg1 , int arg2 , wint_t * arg3 , int arg4 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for mvwgetn_wstr()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvwgetn_wstr");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load mvwgetn_wstr. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "mvwgetn_wstr() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "mvwgetn_wstr - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "mvwgetn_wstr - arg0");
		validate_NULL_TYPETYPE(  arg1, "mvwgetn_wstr - arg1");
		validate_NULL_TYPETYPE(  arg2, "mvwgetn_wstr - arg2");
		if( arg3 ) {
		validate_RWaddress( arg3, "mvwgetn_wstr - arg3");
		}
		validate_NULL_TYPETYPE(  arg3, "mvwgetn_wstr - arg3");
		validate_NULL_TYPETYPE(  arg4, "mvwgetn_wstr - arg4");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

