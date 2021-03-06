// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <curses.h>
#undef mvwinsstr
static int(*funcptr) (WINDOW * , int , int , const char * ) = 0;

extern int __lsb_check_params;
int mvwinsstr (WINDOW * arg0 , int arg1 , int arg2 , const char * arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for mvwinsstr()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvwinsstr");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load mvwinsstr. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "mvwinsstr() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "mvwinsstr - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "mvwinsstr - arg0");
		validate_NULL_TYPETYPE(  arg1, "mvwinsstr - arg1");
		validate_NULL_TYPETYPE(  arg2, "mvwinsstr - arg2");
		if( arg3 ) {
		validate_Rdaddress( arg3, "mvwinsstr - arg3");
		}
		validate_NULL_TYPETYPE(  arg3, "mvwinsstr - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

