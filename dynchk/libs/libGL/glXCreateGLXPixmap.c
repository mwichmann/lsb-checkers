// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include <X11/X.h>
#include <GL/glx.h>
#undef glXCreateGLXPixmap
static GLXPixmap(*funcptr) (Display * , XVisualInfo * , Pixmap ) = 0;

extern int __lsb_check_params;
GLXPixmap glXCreateGLXPixmap (Display * arg0 , XVisualInfo * arg1 , Pixmap arg2 )
{
	int reset_flag = __lsb_check_params;
	GLXPixmap ret_value  ;
	__lsb_output(4, "Invoking wrapper for glXCreateGLXPixmap()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glXCreateGLXPixmap");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glXCreateGLXPixmap. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glXCreateGLXPixmap() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "glXCreateGLXPixmap - arg0 (dpy)");
		}
		validate_NULL_TYPETYPE(  arg0, "glXCreateGLXPixmap - arg0 (dpy)");
		if( arg1 ) {
		validate_RWaddress( arg1, "glXCreateGLXPixmap - arg1 (vis)");
		}
		validate_NULL_TYPETYPE(  arg1, "glXCreateGLXPixmap - arg1 (vis)");
		validate_NULL_TYPETYPE(  arg2, "glXCreateGLXPixmap - arg2 (pixmap)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

