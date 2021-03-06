// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <curses.h>
#undef mvchgat
static int(*funcptr) (int , int , int , attr_t , short , const void * ) = 0;

extern int __lsb_check_params;
int mvchgat (int arg0 , int arg1 , int arg2 , attr_t arg3 , short arg4 , const void * arg5 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for mvchgat()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvchgat");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load mvchgat. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "mvchgat() - validating");
		validate_NULL_TYPETYPE(  arg0, "mvchgat - arg0");
		validate_NULL_TYPETYPE(  arg1, "mvchgat - arg1");
		validate_NULL_TYPETYPE(  arg2, "mvchgat - arg2");
		validate_NULL_TYPETYPE(  arg3, "mvchgat - arg3");
		validate_NULL_TYPETYPE(  arg4, "mvchgat - arg4");
		if( arg5 ) {
		validate_Rdaddress( arg5, "mvchgat - arg5");
		}
		validate_NULL_TYPETYPE(  arg5, "mvchgat - arg5");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
	return ret_value;
}

