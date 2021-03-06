// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <atk-1.0/atk/atk.h>
#include <glib-2.0/glib.h>
#undef atk_text_get_text_at_offset
static gchar *(*funcptr) (AtkText * , gint , AtkTextBoundary , gint * , gint * ) = 0;

extern int __lsb_check_params;
gchar * atk_text_get_text_at_offset (AtkText * arg0 , gint arg1 , AtkTextBoundary arg2 , gint * arg3 , gint * arg4 )
{
	int reset_flag = __lsb_check_params;
	gchar * ret_value  ;
	__lsb_output(4, "Invoking wrapper for atk_text_get_text_at_offset()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "atk_text_get_text_at_offset");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load atk_text_get_text_at_offset. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "atk_text_get_text_at_offset() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "atk_text_get_text_at_offset - arg0 (text)");
		}
		validate_NULL_TYPETYPE(  arg0, "atk_text_get_text_at_offset - arg0 (text)");
		validate_NULL_TYPETYPE(  arg1, "atk_text_get_text_at_offset - arg1 (offset)");
		validate_NULL_TYPETYPE(  arg2, "atk_text_get_text_at_offset - arg2 (boundary_type)");
		if( arg3 ) {
		validate_RWaddress( arg3, "atk_text_get_text_at_offset - arg3 (start_offset)");
		}
		validate_NULL_TYPETYPE(  arg3, "atk_text_get_text_at_offset - arg3 (start_offset)");
		if( arg4 ) {
		validate_RWaddress( arg4, "atk_text_get_text_at_offset - arg4 (end_offset)");
		}
		validate_NULL_TYPETYPE(  arg4, "atk_text_get_text_at_offset - arg4 (end_offset)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

