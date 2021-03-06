// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_ascii_dtostr
static gchar *(*funcptr) (gchar * , gint , gdouble ) = 0;

extern int __lsb_check_params;
gchar * g_ascii_dtostr (gchar * arg0 , gint arg1 , gdouble arg2 )
{
	int reset_flag = __lsb_check_params;
	gchar * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_ascii_dtostr()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_ascii_dtostr");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_ascii_dtostr. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_ascii_dtostr() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_ascii_dtostr - arg0 (buffer)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_ascii_dtostr - arg0 (buffer)");
		validate_NULL_TYPETYPE(  arg1, "g_ascii_dtostr - arg1 (buf_len)");
		validate_NULL_TYPETYPE(  arg2, "g_ascii_dtostr - arg2 (d)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

