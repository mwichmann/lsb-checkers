// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/gio/gresource.h>
#undef g_resource_get_info
static gboolean(*funcptr) (GResource * , const gchar * , GResourceLookupFlags , gsize * , guint32 * , GError * * ) = 0;

extern int __lsb_check_params;
gboolean g_resource_get_info (GResource * arg0 , const gchar * arg1 , GResourceLookupFlags arg2 , gsize * arg3 , guint32 * arg4 , GError * * arg5 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_resource_get_info()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_resource_get_info");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_resource_get_info. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_resource_get_info() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_resource_get_info - arg0 (resource)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_resource_get_info - arg0 (resource)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "g_resource_get_info - arg1 (path)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_resource_get_info - arg1 (path)");
		validate_NULL_TYPETYPE(  arg2, "g_resource_get_info - arg2 (lookup_flags)");
		if( arg3 ) {
		validate_RWaddress( arg3, "g_resource_get_info - arg3 (size)");
		}
		validate_NULL_TYPETYPE(  arg3, "g_resource_get_info - arg3 (size)");
		if( arg4 ) {
		validate_RWaddress( arg4, "g_resource_get_info - arg4 (flags)");
		}
		validate_NULL_TYPETYPE(  arg4, "g_resource_get_info - arg4 (flags)");
		if( arg5 ) {
		validate_RWaddress( arg5, "g_resource_get_info - arg5 (error)");
		}
		validate_NULL_TYPETYPE(  arg5, "g_resource_get_info - arg5 (error)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
	return ret_value;
}

