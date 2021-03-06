// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Intrinsic.h>
#include <X11/Xlib.h>
#include <X11/Xresource.h>
#include <lsb/Intrinsic.h>
#undef XtDisplayInitialize
static void(*funcptr) (XtAppContext , Display * , const char * , const char * , XrmOptionDescRec * , Cardinal , int * , char * * ) = 0;

extern int __lsb_check_params;
void XtDisplayInitialize (XtAppContext arg0 , Display * arg1 , const char * arg2 , const char * arg3 , XrmOptionDescRec * arg4 , Cardinal arg5 , int * arg6 , char * * arg7 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for XtDisplayInitialize()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtDisplayInitialize");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XtDisplayInitialize. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XtDisplayInitialize() - validating");
		validate_NULL_TYPETYPE(  arg0, "XtDisplayInitialize - arg0");
		if( arg1 ) {
		validate_RWaddress( arg1, "XtDisplayInitialize - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "XtDisplayInitialize - arg1");
		if( arg2 ) {
		validate_Rdaddress( arg2, "XtDisplayInitialize - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "XtDisplayInitialize - arg2");
		if( arg3 ) {
		validate_Rdaddress( arg3, "XtDisplayInitialize - arg3");
		}
		validate_NULL_TYPETYPE(  arg3, "XtDisplayInitialize - arg3");
		if( arg4 ) {
		validate_RWaddress( arg4, "XtDisplayInitialize - arg4");
		}
		validate_NULL_TYPETYPE(  arg4, "XtDisplayInitialize - arg4");
		validate_NULL_TYPETYPE(  arg5, "XtDisplayInitialize - arg5");
		if( arg6 ) {
		validate_RWaddress( arg6, "XtDisplayInitialize - arg6");
		}
		validate_NULL_TYPETYPE(  arg6, "XtDisplayInitialize - arg6");
		if( arg7 ) {
		validate_RWaddress( arg7, "XtDisplayInitialize - arg7");
		}
		validate_NULL_TYPETYPE(  arg7, "XtDisplayInitialize - arg7");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
	__lsb_check_params = reset_flag;
}

