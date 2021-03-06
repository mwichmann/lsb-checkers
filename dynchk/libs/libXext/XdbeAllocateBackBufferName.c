// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/X.h>
#include <X11/extensions/Xdbe.h>
#undef XdbeAllocateBackBufferName
static XdbeBackBuffer(*funcptr) (Display * , Window , XdbeSwapAction ) = 0;

extern int __lsb_check_params;
XdbeBackBuffer XdbeAllocateBackBufferName (Display * arg0 , Window arg1 , XdbeSwapAction arg2 )
{
	int reset_flag = __lsb_check_params;
	XdbeBackBuffer ret_value  ;
	__lsb_output(4, "Invoking wrapper for XdbeAllocateBackBufferName()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XdbeAllocateBackBufferName");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XdbeAllocateBackBufferName. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XdbeAllocateBackBufferName() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "XdbeAllocateBackBufferName - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "XdbeAllocateBackBufferName - arg0");
		validate_NULL_TYPETYPE(  arg1, "XdbeAllocateBackBufferName - arg1");
		validate_NULL_TYPETYPE(  arg2, "XdbeAllocateBackBufferName - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

