// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/extensions/render.h>
#include <X11/Xft/Xft.h>
#undef XftGlyphFontSpecRender
static void(*funcptr) (Display * , int , Picture , Picture , int , int , const XftGlyphFontSpec * , int ) = 0;

extern int __lsb_check_params;
void XftGlyphFontSpecRender (Display * arg0 , int arg1 , Picture arg2 , Picture arg3 , int arg4 , int arg5 , const XftGlyphFontSpec * arg6 , int arg7 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for XftGlyphFontSpecRender()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XftGlyphFontSpecRender");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XftGlyphFontSpecRender. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XftGlyphFontSpecRender() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "XftGlyphFontSpecRender - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "XftGlyphFontSpecRender - arg0");
		validate_NULL_TYPETYPE(  arg1, "XftGlyphFontSpecRender - arg1");
		validate_NULL_TYPETYPE(  arg2, "XftGlyphFontSpecRender - arg2");
		validate_NULL_TYPETYPE(  arg3, "XftGlyphFontSpecRender - arg3");
		validate_NULL_TYPETYPE(  arg4, "XftGlyphFontSpecRender - arg4");
		validate_NULL_TYPETYPE(  arg5, "XftGlyphFontSpecRender - arg5");
		if( arg6 ) {
		validate_Rdaddress( arg6, "XftGlyphFontSpecRender - arg6");
		}
		validate_NULL_TYPETYPE(  arg6, "XftGlyphFontSpecRender - arg6");
		validate_NULL_TYPETYPE(  arg7, "XftGlyphFontSpecRender - arg7");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
	__lsb_check_params = reset_flag;
}

