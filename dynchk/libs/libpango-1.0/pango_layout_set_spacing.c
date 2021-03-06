// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pango-1.0/pango/pango.h>
#undef pango_layout_set_spacing
static void(*funcptr) (PangoLayout * , int ) = 0;

extern int __lsb_check_params;
void pango_layout_set_spacing (PangoLayout * arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for pango_layout_set_spacing()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pango_layout_set_spacing");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pango_layout_set_spacing. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pango_layout_set_spacing() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "pango_layout_set_spacing - arg0 (layout)");
		}
		validate_NULL_TYPETYPE(  arg0, "pango_layout_set_spacing - arg0 (layout)");
		validate_NULL_TYPETYPE(  arg1, "pango_layout_set_spacing - arg1 (spacing)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

