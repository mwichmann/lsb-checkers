// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef idlok
static int(*funcptr) (WINDOW * , bool ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int idlok (WINDOW * arg0 , bool arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "idlok");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "idlok()");
	validate_Rdaddress( arg0, "idlok - arg0");
		validate_NULL_TYPETYPE(  arg0, "idlok - arg0");
		validate_NULL_TYPETYPE(  arg1, "idlok - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

