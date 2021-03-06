// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#undef XGetErrorDatabaseText
static int(*funcptr) (Display * , const char * , const char * , const char * , char * , int ) = 0;

extern int __lsb_check_params;
int XGetErrorDatabaseText (Display * arg0 , const char * arg1 , const char * arg2 , const char * arg3 , char * arg4 , int arg5 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XGetErrorDatabaseText()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XGetErrorDatabaseText");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XGetErrorDatabaseText. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XGetErrorDatabaseText() - validating");
		validate_RWaddress( arg0, "XGetErrorDatabaseText - arg0");
		validate_NULL_TYPETYPE(  arg0, "XGetErrorDatabaseText - arg0");
		validate_Rdaddress( arg1, "XGetErrorDatabaseText - arg1");
		validate_NULL_TYPETYPE(  arg1, "XGetErrorDatabaseText - arg1");
		validate_Rdaddress( arg2, "XGetErrorDatabaseText - arg2");
		validate_NULL_TYPETYPE(  arg2, "XGetErrorDatabaseText - arg2");
		validate_Rdaddress( arg3, "XGetErrorDatabaseText - arg3");
		validate_NULL_TYPETYPE(  arg3, "XGetErrorDatabaseText - arg3");
		validate_RWaddress( arg4, "XGetErrorDatabaseText - arg4");
		validate_NULL_TYPETYPE(  arg4, "XGetErrorDatabaseText - arg4");
		validate_NULL_TYPETYPE(  arg5, "XGetErrorDatabaseText - arg5");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
	return ret_value;
}

