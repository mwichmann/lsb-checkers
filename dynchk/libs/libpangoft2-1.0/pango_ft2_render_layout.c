// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <freetype/ftimage.h>
#include <pango-1.0/pango/pango.h>
#include <pango-1.0/pango/pangoft2.h>
#undef pango_ft2_render_layout
static void(*funcptr) (FT_Bitmap * , PangoLayout * , int , int ) = 0;

extern int __lsb_check_params;
void pango_ft2_render_layout (FT_Bitmap * arg0 , PangoLayout * arg1 , int arg2 , int arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for pango_ft2_render_layout()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pango_ft2_render_layout");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pango_ft2_render_layout. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pango_ft2_render_layout() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "pango_ft2_render_layout - arg0 (bitmap)");
		}
		validate_NULL_TYPETYPE(  arg0, "pango_ft2_render_layout - arg0 (bitmap)");
		if( arg1 ) {
		validate_RWaddress( arg1, "pango_ft2_render_layout - arg1 (layout)");
		}
		validate_NULL_TYPETYPE(  arg1, "pango_ft2_render_layout - arg1 (layout)");
		validate_NULL_TYPETYPE(  arg2, "pango_ft2_render_layout - arg2 (x)");
		validate_NULL_TYPETYPE(  arg3, "pango_ft2_render_layout - arg3 (y)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}
