// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include <GL/glx.h>
#undef glXGetConfig
static int(*funcptr) (Display * , XVisualInfo * , int , int * ) = 0;

extern int __lsb_check_params;
int glXGetConfig (Display * arg0 , XVisualInfo * arg1 , int arg2 , int * arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " glXGetConfig ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "glXGetConfig()");
		validate_RWaddress( arg0, "glXGetConfig - arg0");
		validate_NULL_TYPETYPE(  arg0, "glXGetConfig - arg0");
		validate_RWaddress( arg1, "glXGetConfig - arg1");
		validate_NULL_TYPETYPE(  arg1, "glXGetConfig - arg1");
		validate_NULL_TYPETYPE(  arg2, "glXGetConfig - arg2");
		validate_RWaddress( arg3, "glXGetConfig - arg3");
		validate_NULL_TYPETYPE(  arg3, "glXGetConfig - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

