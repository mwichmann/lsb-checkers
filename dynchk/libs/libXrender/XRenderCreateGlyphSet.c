// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/extensions/Xrender.h>
#undef XRenderCreateGlyphSet
static GlyphSet(*funcptr) (Display * , const XRenderPictFormat * ) = 0;

extern int __lsb_check_params;
GlyphSet XRenderCreateGlyphSet (Display * arg0 , const XRenderPictFormat * arg1 )
{
	int reset_flag = __lsb_check_params;
	GlyphSet ret_value  ;
	__lsb_output(4, "Invoking wrapper for XRenderCreateGlyphSet()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XRenderCreateGlyphSet");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XRenderCreateGlyphSet. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XRenderCreateGlyphSet() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "XRenderCreateGlyphSet - arg0 (dpy)");
		}
		validate_NULL_TYPETYPE(  arg0, "XRenderCreateGlyphSet - arg0 (dpy)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "XRenderCreateGlyphSet - arg1 (format)");
		}
		validate_NULL_TYPETYPE(  arg1, "XRenderCreateGlyphSet - arg1 (format)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

