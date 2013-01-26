// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/gio/gtlsdatabase.h>
#undef g_tls_database_lookup_certificate_for_handle
static GTlsCertificate *(*funcptr) (GTlsDatabase * , const gchar * , GTlsInteraction * , GTlsDatabaseLookupFlags , GCancellable * , GError * * ) = 0;

extern int __lsb_check_params;
GTlsCertificate * g_tls_database_lookup_certificate_for_handle (GTlsDatabase * arg0 , const gchar * arg1 , GTlsInteraction * arg2 , GTlsDatabaseLookupFlags arg3 , GCancellable * arg4 , GError * * arg5 )
{
	int reset_flag = __lsb_check_params;
	GTlsCertificate * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_tls_database_lookup_certificate_for_handle()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_tls_database_lookup_certificate_for_handle");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_tls_database_lookup_certificate_for_handle. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_tls_database_lookup_certificate_for_handle() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_tls_database_lookup_certificate_for_handle - arg0 (self)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_tls_database_lookup_certificate_for_handle - arg0 (self)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "g_tls_database_lookup_certificate_for_handle - arg1 (handle)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_tls_database_lookup_certificate_for_handle - arg1 (handle)");
		if( arg2 ) {
		validate_RWaddress( arg2, "g_tls_database_lookup_certificate_for_handle - arg2 (interaction)");
		}
		validate_NULL_TYPETYPE(  arg2, "g_tls_database_lookup_certificate_for_handle - arg2 (interaction)");
		validate_NULL_TYPETYPE(  arg3, "g_tls_database_lookup_certificate_for_handle - arg3 (flags)");
		if( arg4 ) {
		validate_RWaddress( arg4, "g_tls_database_lookup_certificate_for_handle - arg4 (cancellable)");
		}
		validate_NULL_TYPETYPE(  arg4, "g_tls_database_lookup_certificate_for_handle - arg4 (cancellable)");
		if( arg5 ) {
		validate_RWaddress( arg5, "g_tls_database_lookup_certificate_for_handle - arg5 (error)");
		}
		validate_NULL_TYPETYPE(  arg5, "g_tls_database_lookup_certificate_for_handle - arg5 (error)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
	return ret_value;
}
