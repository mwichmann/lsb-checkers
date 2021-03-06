// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/X.h>
#undef XGetWindowProperty
static int(*funcptr) (Display * , Window , Atom , long int , long int , int , Atom , Atom * , int * , unsigned long int * , unsigned long int * , unsigned char * * ) = 0;

extern int __lsb_check_params;
int XGetWindowProperty (Display * arg0 , Window arg1 , Atom arg2 , long int arg3 , long int arg4 , int arg5 , Atom arg6 , Atom * arg7 , int * arg8 , unsigned long int * arg9 , unsigned long int * arg10 , unsigned char * * arg11 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XGetWindowProperty()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XGetWindowProperty");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XGetWindowProperty. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XGetWindowProperty() - validating");
		validate_RWaddress( arg0, "XGetWindowProperty - arg0");
		validate_NULL_TYPETYPE(  arg0, "XGetWindowProperty - arg0");
		validate_NULL_TYPETYPE(  arg1, "XGetWindowProperty - arg1");
		validate_NULL_TYPETYPE(  arg2, "XGetWindowProperty - arg2");
		validate_NULL_TYPETYPE(  arg3, "XGetWindowProperty - arg3");
		validate_NULL_TYPETYPE(  arg4, "XGetWindowProperty - arg4");
		validate_NULL_TYPETYPE(  arg5, "XGetWindowProperty - arg5");
		validate_NULL_TYPETYPE(  arg6, "XGetWindowProperty - arg6");
		validate_RWaddress( arg7, "XGetWindowProperty - arg7");
		validate_NULL_TYPETYPE(  arg7, "XGetWindowProperty - arg7");
		validate_RWaddress( arg8, "XGetWindowProperty - arg8");
		validate_NULL_TYPETYPE(  arg8, "XGetWindowProperty - arg8");
		validate_RWaddress( arg9, "XGetWindowProperty - arg9");
		validate_NULL_TYPETYPE(  arg9, "XGetWindowProperty - arg9");
		validate_RWaddress( arg10, "XGetWindowProperty - arg10");
		validate_NULL_TYPETYPE(  arg10, "XGetWindowProperty - arg10");
		validate_RWaddress( arg11, "XGetWindowProperty - arg11");
		validate_NULL_TYPETYPE(  arg11, "XGetWindowProperty - arg11");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
	__lsb_check_params = reset_flag;
	return ret_value;
}

