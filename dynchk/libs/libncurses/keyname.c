// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <curses.h>
#undef keyname
static char *(*funcptr) (int ) = 0;

extern int __lsb_check_params;
char * keyname (int arg0 )
{
	int reset_flag = __lsb_check_params;
	char * ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlsym(RTLD_NEXT, "keyname");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "keyname()");
		validate_NULL_TYPETYPE(  arg0, "keyname - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

