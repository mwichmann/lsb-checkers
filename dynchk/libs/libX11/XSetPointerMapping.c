// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#undef XSetPointerMapping
static int(*funcptr) (Display * , const unsigned char * , int ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int XSetPointerMapping (Display * arg0 , const unsigned char * arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XSetPointerMapping");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XSetPointerMapping()");
	validate_RWaddress( arg0, "XSetPointerMapping - arg0");
		validate_NULL_TYPETYPE(  arg0, "XSetPointerMapping - arg0");
	validate_Rdaddress( arg1, "XSetPointerMapping - arg1");
		validate_NULL_TYPETYPE(  arg1, "XSetPointerMapping - arg1");
		validate_NULL_TYPETYPE(  arg2, "XSetPointerMapping - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

