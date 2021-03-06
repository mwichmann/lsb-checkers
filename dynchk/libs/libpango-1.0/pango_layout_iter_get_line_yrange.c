// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pango-1.0/pango/pango.h>
#undef pango_layout_iter_get_line_yrange
static void(*funcptr) (PangoLayoutIter * , int * , int * ) = 0;

extern int __lsb_check_params;
void pango_layout_iter_get_line_yrange (PangoLayoutIter * arg0 , int * arg1 , int * arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for pango_layout_iter_get_line_yrange()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pango_layout_iter_get_line_yrange");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pango_layout_iter_get_line_yrange. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pango_layout_iter_get_line_yrange() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "pango_layout_iter_get_line_yrange - arg0 (iter)");
		}
		validate_NULL_TYPETYPE(  arg0, "pango_layout_iter_get_line_yrange - arg0 (iter)");
		if( arg1 ) {
		validate_RWaddress( arg1, "pango_layout_iter_get_line_yrange - arg1 (y0_)");
		}
		validate_NULL_TYPETYPE(  arg1, "pango_layout_iter_get_line_yrange - arg1 (y0_)");
		if( arg2 ) {
		validate_RWaddress( arg2, "pango_layout_iter_get_line_yrange - arg2 (y1_)");
		}
		validate_NULL_TYPETYPE(  arg2, "pango_layout_iter_get_line_yrange - arg2 (y1_)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

