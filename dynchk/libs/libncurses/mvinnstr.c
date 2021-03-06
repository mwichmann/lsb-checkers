// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <curses.h>
#undef mvinnstr
static int(*funcptr) (int , int , char * , int ) = 0;

extern int __lsb_check_params;
int mvinnstr (int arg0 , int arg1 , char * arg2 , int arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for mvinnstr()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvinnstr");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load mvinnstr. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "mvinnstr() - validating");
		validate_NULL_TYPETYPE(  arg0, "mvinnstr - arg0");
		validate_NULL_TYPETYPE(  arg1, "mvinnstr - arg1");
		if( arg2 ) {
		validate_RWaddress( arg2, "mvinnstr - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "mvinnstr - arg2");
		validate_NULL_TYPETYPE(  arg3, "mvinnstr - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

