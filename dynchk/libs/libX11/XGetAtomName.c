// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/X.h>
#include <X11/Xlib.h>
#undef XGetAtomName
static char *(*funcptr) (Display * , Atom ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
char * XGetAtomName (Display * arg0 , Atom arg1 )
{
	int reset_flag = __lsb_check_params;
	char * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XGetAtomName");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XGetAtomName()");
	validate_RWaddress( arg0, "XGetAtomName - arg0");
		validate_NULL_TYPETYPE(  arg0, "XGetAtomName - arg0");
		validate_NULL_TYPETYPE(  arg1, "XGetAtomName - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

