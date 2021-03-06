// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <atk-1.0/atk/atk.h>
#include <glib-2.0/glib.h>
#undef atk_text_get_range_extents
static void(*funcptr) (AtkText * , gint , gint , AtkCoordType , AtkTextRectangle * ) = 0;

extern int __lsb_check_params;
void atk_text_get_range_extents (AtkText * arg0 , gint arg1 , gint arg2 , AtkCoordType arg3 , AtkTextRectangle * arg4 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for atk_text_get_range_extents()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "atk_text_get_range_extents");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load atk_text_get_range_extents. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "atk_text_get_range_extents() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "atk_text_get_range_extents - arg0 (text)");
		}
		validate_NULL_TYPETYPE(  arg0, "atk_text_get_range_extents - arg0 (text)");
		validate_NULL_TYPETYPE(  arg1, "atk_text_get_range_extents - arg1 (start_offset)");
		validate_NULL_TYPETYPE(  arg2, "atk_text_get_range_extents - arg2 (end_offset)");
		validate_NULL_TYPETYPE(  arg3, "atk_text_get_range_extents - arg3 (coord_type)");
		if( arg4 ) {
		validate_RWaddress( arg4, "atk_text_get_range_extents - arg4 (rect)");
		}
		validate_NULL_TYPETYPE(  arg4, "atk_text_get_range_extents - arg4 (rect)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
}

