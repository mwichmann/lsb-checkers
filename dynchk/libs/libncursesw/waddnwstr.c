// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <ncursesw/curses.h>
#include <stddef.h>
#undef waddnwstr
static int(*funcptr) (WINDOW * , wchar_t * , int ) = 0;

extern int __lsb_check_params;
int waddnwstr (WINDOW * arg0 , wchar_t * arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for waddnwstr()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "waddnwstr");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load waddnwstr. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "waddnwstr() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "waddnwstr - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "waddnwstr - arg0");
		if( arg1 ) {
		validate_RWaddress( arg1, "waddnwstr - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "waddnwstr - arg1");
		validate_NULL_TYPETYPE(  arg2, "waddnwstr - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}
