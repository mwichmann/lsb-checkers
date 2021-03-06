// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <curses.h>
#include <stdio.h>
#undef putwin
static int(*funcptr) (WINDOW * , FILE * ) = 0;

extern int __lsb_check_params;
int putwin (WINDOW * arg0 , FILE * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for putwin()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "putwin");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load putwin. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "putwin() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "putwin - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "putwin - arg0");
		if( arg1 ) {
		validate_RWaddress( arg1, "putwin - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "putwin - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

