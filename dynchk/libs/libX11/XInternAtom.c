// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#undef XInternAtom
static Atom(*funcptr) (Display * , const char * , int ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
Atom XInternAtom (Display * arg0 , const char * arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	Atom ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XInternAtom");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XInternAtom()");
	validate_RWaddress( arg0, "XInternAtom - arg0");
		validate_NULL_TYPETYPE(  arg0, "XInternAtom - arg0");
	validate_Rdaddress( arg1, "XInternAtom - arg1");
		validate_NULL_TYPETYPE(  arg1, "XInternAtom - arg1");
		validate_NULL_TYPETYPE(  arg2, "XInternAtom - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

