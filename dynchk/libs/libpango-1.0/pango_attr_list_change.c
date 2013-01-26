// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pango-1.0/pango/pango.h>
#undef pango_attr_list_change
static void(*funcptr) (PangoAttrList * , PangoAttribute * ) = 0;

extern int __lsb_check_params;
void pango_attr_list_change (PangoAttrList * arg0 , PangoAttribute * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for pango_attr_list_change()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pango_attr_list_change");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pango_attr_list_change. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pango_attr_list_change() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "pango_attr_list_change - arg0 (list)");
		}
		validate_NULL_TYPETYPE(  arg0, "pango_attr_list_change - arg0 (list)");
		if( arg1 ) {
		validate_RWaddress( arg1, "pango_attr_list_change - arg1 (attr)");
		}
		validate_NULL_TYPETYPE(  arg1, "pango_attr_list_change - arg1 (attr)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}
