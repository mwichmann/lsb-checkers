// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <curses.h>
#undef mvgetstr
static int(*funcptr) (int , int , char * ) = 0;

extern int __lsb_check_params;
int mvgetstr (int arg0 , int arg1 , char * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlsym(RTLD_NEXT, "mvgetstr");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "mvgetstr()");
		validate_NULL_TYPETYPE(  arg0, "mvgetstr - arg0");
		validate_NULL_TYPETYPE(  arg1, "mvgetstr - arg1");
		validate_RWaddress( arg2, "mvgetstr - arg2");
		validate_NULL_TYPETYPE(  arg2, "mvgetstr - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

