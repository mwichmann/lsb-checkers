// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pango-1.0/pango/pango.h>
#undef pango_attribute_copy
static PangoAttribute *(*funcptr) (const PangoAttribute * ) = 0;

extern int __lsb_check_params;
PangoAttribute * pango_attribute_copy (const PangoAttribute * arg0 )
{
	int reset_flag = __lsb_check_params;
	PangoAttribute * ret_value  ;
	__lsb_output(4, "Invoking wrapper for pango_attribute_copy()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pango_attribute_copy");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pango_attribute_copy. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pango_attribute_copy() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "pango_attribute_copy - arg0 (attr)");
		}
		validate_NULL_TYPETYPE(  arg0, "pango_attribute_copy - arg0 (attr)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}
