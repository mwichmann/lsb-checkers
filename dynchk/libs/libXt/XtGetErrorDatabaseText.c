// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
#undef XtGetErrorDatabaseText
static void(*funcptr) (char * , char * , char * , char * , String , int ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void XtGetErrorDatabaseText (char * arg0 , char * arg1 , char * arg2 , char * arg3 , String arg4 , int arg5 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtGetErrorDatabaseText");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XtGetErrorDatabaseText()");
	validate_RWaddress( arg0, "XtGetErrorDatabaseText - arg0");
		validate_NULL_TYPETYPE(  arg0, "XtGetErrorDatabaseText - arg0");
	validate_RWaddress( arg1, "XtGetErrorDatabaseText - arg1");
		validate_NULL_TYPETYPE(  arg1, "XtGetErrorDatabaseText - arg1");
	validate_RWaddress( arg2, "XtGetErrorDatabaseText - arg2");
		validate_NULL_TYPETYPE(  arg2, "XtGetErrorDatabaseText - arg2");
	validate_RWaddress( arg3, "XtGetErrorDatabaseText - arg3");
		validate_NULL_TYPETYPE(  arg3, "XtGetErrorDatabaseText - arg3");
		validate_NULL_TYPETYPE(  arg4, "XtGetErrorDatabaseText - arg4");
		validate_NULL_TYPETYPE(  arg5, "XtGetErrorDatabaseText - arg5");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
}

