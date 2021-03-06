// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pango-1.0/pango/pango.h>
#undef pango_attribute_equal
static gboolean(*funcptr) (const PangoAttribute * , const PangoAttribute * ) = 0;

extern int __lsb_check_params;
gboolean pango_attribute_equal (const PangoAttribute * arg0 , const PangoAttribute * arg1 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for pango_attribute_equal()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pango_attribute_equal");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pango_attribute_equal. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pango_attribute_equal() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "pango_attribute_equal - arg0 (attr1)");
		}
		validate_NULL_TYPETYPE(  arg0, "pango_attribute_equal - arg0 (attr1)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "pango_attribute_equal - arg1 (attr2)");
		}
		validate_NULL_TYPETYPE(  arg1, "pango_attribute_equal - arg1 (attr2)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

