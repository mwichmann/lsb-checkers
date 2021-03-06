// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pango-1.0/pango/pango.h>
#undef pango_item_split
static PangoItem *(*funcptr) (PangoItem * , int , int ) = 0;

extern int __lsb_check_params;
PangoItem * pango_item_split (PangoItem * arg0 , int arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	PangoItem * ret_value  ;
	__lsb_output(4, "Invoking wrapper for pango_item_split()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pango_item_split");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pango_item_split. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pango_item_split() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "pango_item_split - arg0 (orig)");
		}
		validate_NULL_TYPETYPE(  arg0, "pango_item_split - arg0 (orig)");
		validate_NULL_TYPETYPE(  arg1, "pango_item_split - arg1 (split_index)");
		validate_NULL_TYPETYPE(  arg2, "pango_item_split - arg2 (split_offset)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

