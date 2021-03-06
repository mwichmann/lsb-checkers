// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <curses.h>
#undef mvaddchnstr
static int(*funcptr) (int , int , const chtype * , int ) = 0;

extern int __lsb_check_params;
int mvaddchnstr (int arg0 , int arg1 , const chtype * arg2 , int arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for mvaddchnstr()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvaddchnstr");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load mvaddchnstr. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "mvaddchnstr() - validating");
		validate_NULL_TYPETYPE(  arg0, "mvaddchnstr - arg0");
		validate_NULL_TYPETYPE(  arg1, "mvaddchnstr - arg1");
		if( arg2 ) {
		validate_Rdaddress( arg2, "mvaddchnstr - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "mvaddchnstr - arg2");
		validate_NULL_TYPETYPE(  arg3, "mvaddchnstr - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

