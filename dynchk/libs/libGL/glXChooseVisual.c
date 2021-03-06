// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <GL/glx.h>
#undef glXChooseVisual
static XVisualInfo *(*funcptr) (Display * , int , int * ) = 0;

extern int __lsb_check_params;
XVisualInfo * glXChooseVisual (Display * arg0 , int arg1 , int * arg2 )
{
	int reset_flag = __lsb_check_params;
	XVisualInfo * ret_value  ;
	__lsb_output(4, "Invoking wrapper for glXChooseVisual()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glXChooseVisual");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glXChooseVisual. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glXChooseVisual() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "glXChooseVisual - arg0 (dpy)");
		}
		validate_NULL_TYPETYPE(  arg0, "glXChooseVisual - arg0 (dpy)");
		validate_NULL_TYPETYPE(  arg1, "glXChooseVisual - arg1 (screen)");
		if( arg2 ) {
		validate_RWaddress( arg2, "glXChooseVisual - arg2 (attribList)");
		}
		validate_NULL_TYPETYPE(  arg2, "glXChooseVisual - arg2 (attribList)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

