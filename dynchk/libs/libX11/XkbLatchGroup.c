// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#include <X11/XKBlib.h>
#undef XkbLatchGroup
static int(*funcptr) (Display * , unsigned int , unsigned int ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int XkbLatchGroup (Display * arg0 , unsigned int arg1 , unsigned int arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbLatchGroup");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XkbLatchGroup()");
	validate_RWaddress( arg0, "XkbLatchGroup - arg0");
		validate_NULL_TYPETYPE(  arg0, "XkbLatchGroup - arg0");
		validate_NULL_TYPETYPE(  arg1, "XkbLatchGroup - arg1");
		validate_NULL_TYPETYPE(  arg2, "XkbLatchGroup - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

