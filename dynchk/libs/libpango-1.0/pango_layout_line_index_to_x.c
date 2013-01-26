// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pango-1.0/pango/pango.h>
#undef pango_layout_line_index_to_x
static void(*funcptr) (PangoLayoutLine * , int , int , int * ) = 0;

extern int __lsb_check_params;
void pango_layout_line_index_to_x (PangoLayoutLine * arg0 , int arg1 , int arg2 , int * arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for pango_layout_line_index_to_x()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pango_layout_line_index_to_x");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pango_layout_line_index_to_x. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pango_layout_line_index_to_x() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "pango_layout_line_index_to_x - arg0 (line)");
		}
		validate_NULL_TYPETYPE(  arg0, "pango_layout_line_index_to_x - arg0 (line)");
		validate_NULL_TYPETYPE(  arg1, "pango_layout_line_index_to_x - arg1 (index_)");
		validate_NULL_TYPETYPE(  arg2, "pango_layout_line_index_to_x - arg2 (trailing)");
		if( arg3 ) {
		validate_RWaddress( arg3, "pango_layout_line_index_to_x - arg3 (x_pos)");
		}
		validate_NULL_TYPETYPE(  arg3, "pango_layout_line_index_to_x - arg3 (x_pos)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}
