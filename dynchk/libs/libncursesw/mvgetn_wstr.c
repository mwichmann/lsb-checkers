// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <ncursesw/curses.h>
#undef mvgetn_wstr
static int(*funcptr) (int , int , wint_t * , int ) = 0;

extern int __lsb_check_params;
int mvgetn_wstr (int arg0 , int arg1 , wint_t * arg2 , int arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for mvgetn_wstr()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvgetn_wstr");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load mvgetn_wstr. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "mvgetn_wstr() - validating");
		validate_NULL_TYPETYPE(  arg0, "mvgetn_wstr - arg0");
		validate_NULL_TYPETYPE(  arg1, "mvgetn_wstr - arg1");
		if( arg2 ) {
		validate_RWaddress( arg2, "mvgetn_wstr - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "mvgetn_wstr - arg2");
		validate_NULL_TYPETYPE(  arg3, "mvgetn_wstr - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

