// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#include <pango-1.0/pango/pango.h>
#undef pango_find_base_dir
static PangoDirection(*funcptr) (const gchar * , gint ) = 0;

extern int __lsb_check_params;
PangoDirection pango_find_base_dir (const gchar * arg0 , gint arg1 )
{
	int reset_flag = __lsb_check_params;
	PangoDirection ret_value  ;
	__lsb_output(4, "Invoking wrapper for pango_find_base_dir()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pango_find_base_dir");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pango_find_base_dir. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pango_find_base_dir() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "pango_find_base_dir - arg0 (text)");
		}
		validate_NULL_TYPETYPE(  arg0, "pango_find_base_dir - arg0 (text)");
		validate_NULL_TYPETYPE(  arg1, "pango_find_base_dir - arg1 (length)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

