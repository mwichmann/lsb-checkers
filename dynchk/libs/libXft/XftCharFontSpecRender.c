// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/extensions/render.h>
#include <X11/Xft/Xft.h>
#undef XftCharFontSpecRender
static void(*funcptr) (Display * , int , Picture , Picture , int , int , const XftCharFontSpec * , int ) = 0;

extern int __lsb_check_params;
void XftCharFontSpecRender (Display * arg0 , int arg1 , Picture arg2 , Picture arg3 , int arg4 , int arg5 , const XftCharFontSpec * arg6 , int arg7 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for XftCharFontSpecRender()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XftCharFontSpecRender");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XftCharFontSpecRender. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XftCharFontSpecRender() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "XftCharFontSpecRender - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "XftCharFontSpecRender - arg0");
		validate_NULL_TYPETYPE(  arg1, "XftCharFontSpecRender - arg1");
		validate_NULL_TYPETYPE(  arg2, "XftCharFontSpecRender - arg2");
		validate_NULL_TYPETYPE(  arg3, "XftCharFontSpecRender - arg3");
		validate_NULL_TYPETYPE(  arg4, "XftCharFontSpecRender - arg4");
		validate_NULL_TYPETYPE(  arg5, "XftCharFontSpecRender - arg5");
		if( arg6 ) {
		validate_Rdaddress( arg6, "XftCharFontSpecRender - arg6");
		}
		validate_NULL_TYPETYPE(  arg6, "XftCharFontSpecRender - arg6");
		validate_NULL_TYPETYPE(  arg7, "XftCharFontSpecRender - arg7");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
	__lsb_check_params = reset_flag;
}

