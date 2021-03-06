// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gtlspassword.h>
#undef g_tls_password_set_warning
static void(*funcptr) (GTlsPassword * , const gchar * ) = 0;

extern int __lsb_check_params;
void g_tls_password_set_warning (GTlsPassword * arg0 , const gchar * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_tls_password_set_warning()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_tls_password_set_warning");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_tls_password_set_warning. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_tls_password_set_warning() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_tls_password_set_warning - arg0 (password)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_tls_password_set_warning - arg0 (password)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "g_tls_password_set_warning - arg1 (warning)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_tls_password_set_warning - arg1 (warning)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

