// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef scr_restore
static int(*funcptr) (const char * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int scr_restore (const char * arg0 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "scr_restore");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "scr_restore()");
	validate_Rdaddress( arg0, "scr_restore - arg0");
		validate_NULL_TYPETYPE(  arg0, "scr_restore - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

