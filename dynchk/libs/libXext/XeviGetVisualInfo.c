// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/X.h>
#include <X11/extensions/XEVI.h>
#undef XeviGetVisualInfo
static int(*funcptr) (Display * , VisualID * , int , ExtendedVisualInfo * * , int * ) = 0;

extern int __lsb_check_params;
int XeviGetVisualInfo (Display * arg0 , VisualID * arg1 , int arg2 , ExtendedVisualInfo * * arg3 , int * arg4 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XeviGetVisualInfo()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XeviGetVisualInfo");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XeviGetVisualInfo. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XeviGetVisualInfo() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "XeviGetVisualInfo - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "XeviGetVisualInfo - arg0");
		if( arg1 ) {
		validate_RWaddress( arg1, "XeviGetVisualInfo - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "XeviGetVisualInfo - arg1");
		validate_NULL_TYPETYPE(  arg2, "XeviGetVisualInfo - arg2");
		if( arg3 ) {
		validate_RWaddress( arg3, "XeviGetVisualInfo - arg3");
		}
		validate_NULL_TYPETYPE(  arg3, "XeviGetVisualInfo - arg3");
		if( arg4 ) {
		validate_RWaddress( arg4, "XeviGetVisualInfo - arg4");
		}
		validate_NULL_TYPETYPE(  arg4, "XeviGetVisualInfo - arg4");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

