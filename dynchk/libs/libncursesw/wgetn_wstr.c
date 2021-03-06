// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <ncursesw/curses.h>
#include <lsb/wchar.h>
#undef wgetn_wstr
static int(*funcptr) (WINDOW * , wint_t * , int ) = 0;

extern int __lsb_check_params;
int wgetn_wstr (WINDOW * arg0 , wint_t * arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for wgetn_wstr()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wgetn_wstr");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load wgetn_wstr. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "wgetn_wstr() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "wgetn_wstr - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "wgetn_wstr - arg0");
		if( arg1 ) {
		validate_RWaddress( arg1, "wgetn_wstr - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "wgetn_wstr - arg1");
		validate_NULL_TYPETYPE(  arg2, "wgetn_wstr - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

