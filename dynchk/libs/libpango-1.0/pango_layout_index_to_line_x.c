// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pango-1.0/pango/pango.h>
#include <glib-2.0/glib.h>
#undef pango_layout_index_to_line_x
static void(*funcptr) (PangoLayout * , int , gboolean , int * , int * ) = 0;

extern int __lsb_check_params;
void pango_layout_index_to_line_x (PangoLayout * arg0 , int arg1 , gboolean arg2 , int * arg3 , int * arg4 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for pango_layout_index_to_line_x()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pango_layout_index_to_line_x");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pango_layout_index_to_line_x. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pango_layout_index_to_line_x() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "pango_layout_index_to_line_x - arg0 (layout)");
		}
		validate_NULL_TYPETYPE(  arg0, "pango_layout_index_to_line_x - arg0 (layout)");
		validate_NULL_TYPETYPE(  arg1, "pango_layout_index_to_line_x - arg1 (index_)");
		validate_NULL_TYPETYPE(  arg2, "pango_layout_index_to_line_x - arg2 (trailing)");
		if( arg3 ) {
		validate_RWaddress( arg3, "pango_layout_index_to_line_x - arg3 (line)");
		}
		validate_NULL_TYPETYPE(  arg3, "pango_layout_index_to_line_x - arg3 (line)");
		if( arg4 ) {
		validate_RWaddress( arg4, "pango_layout_index_to_line_x - arg4 (x_pos)");
		}
		validate_NULL_TYPETYPE(  arg4, "pango_layout_index_to_line_x - arg4 (x_pos)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
}

