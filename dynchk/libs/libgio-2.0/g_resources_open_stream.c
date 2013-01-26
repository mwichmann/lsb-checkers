// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/gio/gresource.h>
#undef g_resources_open_stream
static GInputStream *(*funcptr) (const gchar * , GResourceLookupFlags , GError * * ) = 0;

extern int __lsb_check_params;
GInputStream * g_resources_open_stream (const gchar * arg0 , GResourceLookupFlags arg1 , GError * * arg2 )
{
	int reset_flag = __lsb_check_params;
	GInputStream * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_resources_open_stream()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_resources_open_stream");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_resources_open_stream. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_resources_open_stream() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "g_resources_open_stream - arg0 (path)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_resources_open_stream - arg0 (path)");
		validate_NULL_TYPETYPE(  arg1, "g_resources_open_stream - arg1 (lookup_flags)");
		if( arg2 ) {
		validate_RWaddress( arg2, "g_resources_open_stream - arg2 (error)");
		}
		validate_NULL_TYPETYPE(  arg2, "g_resources_open_stream - arg2 (error)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}
