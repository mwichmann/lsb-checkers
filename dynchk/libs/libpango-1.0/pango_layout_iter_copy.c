// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pango-1.0/pango/pango.h>
#undef pango_layout_iter_copy
static PangoLayoutIter *(*funcptr) (PangoLayoutIter * ) = 0;

extern int __lsb_check_params;
PangoLayoutIter * pango_layout_iter_copy (PangoLayoutIter * arg0 )
{
	int reset_flag = __lsb_check_params;
	PangoLayoutIter * ret_value  ;
	__lsb_output(4, "Invoking wrapper for pango_layout_iter_copy()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pango_layout_iter_copy");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pango_layout_iter_copy. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pango_layout_iter_copy() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "pango_layout_iter_copy - arg0 (iter)");
		}
		validate_NULL_TYPETYPE(  arg0, "pango_layout_iter_copy - arg0 (iter)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

