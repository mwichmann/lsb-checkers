// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#include <X11/XKBlib.h>
#undef XkbSetNames
static int(*funcptr) (Display * , unsigned int , unsigned int , unsigned int , ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int XkbSetNames (Display * arg0 , unsigned int arg1 , unsigned int arg2 , unsigned int arg3 ,  arg4)
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbSetNames");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XkbSetNames()");
	validate_RWaddress( arg0, "XkbSetNames - arg0");
		validate_NULL_TYPETYPE(  arg0, "XkbSetNames - arg0");
		validate_NULL_TYPETYPE(  arg1, "XkbSetNames - arg1");
		validate_NULL_TYPETYPE(  arg2, "XkbSetNames - arg2");
		validate_NULL_TYPETYPE(  arg3, "XkbSetNames - arg3");
		validate_NULL_TYPETYPE(  arg4, "XkbSetNames - arg4");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

