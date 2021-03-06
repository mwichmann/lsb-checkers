// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <stddef.h>
#include <ncursesw/curses.h>
#undef ins_nwstr
static int(*funcptr) (wchar_t * , int ) = 0;

extern int __lsb_check_params;
int ins_nwstr (wchar_t * arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for ins_nwstr()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ins_nwstr");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load ins_nwstr. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "ins_nwstr() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "ins_nwstr - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "ins_nwstr - arg0");
		validate_NULL_TYPETYPE(  arg1, "ins_nwstr - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

