// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pango-1.0/pango/pango.h>
#undef pango_layout_get_line
static PangoLayoutLine *(*funcptr) (PangoLayout * , int ) = 0;

extern int __lsb_check_params;
PangoLayoutLine * pango_layout_get_line (PangoLayout * arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	PangoLayoutLine * ret_value  ;
	__lsb_output(4, "Invoking wrapper for pango_layout_get_line()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pango_layout_get_line");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pango_layout_get_line. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pango_layout_get_line() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "pango_layout_get_line - arg0 (layout)");
		}
		validate_NULL_TYPETYPE(  arg0, "pango_layout_get_line - arg0 (layout)");
		validate_NULL_TYPETYPE(  arg1, "pango_layout_get_line - arg1 (line)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

