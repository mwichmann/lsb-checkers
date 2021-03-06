// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <lsb/Intrinsic.h>
#include <X11/Intrinsic.h>
#include <X11/Xlib.h>
#undef XtAllocateGC
static GC(*funcptr) (Widget , Cardinal , XtGCMask , XGCValues * , XtGCMask , XtGCMask ) = 0;

extern int __lsb_check_params;
GC XtAllocateGC (Widget arg0 , Cardinal arg1 , XtGCMask arg2 , XGCValues * arg3 , XtGCMask arg4 , XtGCMask arg5 )
{
	int reset_flag = __lsb_check_params;
	GC ret_value  ;
	__lsb_output(4, "Invoking wrapper for XtAllocateGC()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtAllocateGC");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XtAllocateGC. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XtAllocateGC() - validating");
		validate_NULL_TYPETYPE(  arg0, "XtAllocateGC - arg0");
		validate_NULL_TYPETYPE(  arg1, "XtAllocateGC - arg1");
		validate_NULL_TYPETYPE(  arg2, "XtAllocateGC - arg2");
		if( arg3 ) {
		validate_RWaddress( arg3, "XtAllocateGC - arg3");
		}
		validate_NULL_TYPETYPE(  arg3, "XtAllocateGC - arg3");
		validate_NULL_TYPETYPE(  arg4, "XtAllocateGC - arg4");
		validate_NULL_TYPETYPE(  arg5, "XtAllocateGC - arg5");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
	return ret_value;
}

