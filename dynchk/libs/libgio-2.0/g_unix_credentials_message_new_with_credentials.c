// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <gio-unix-2.0/gio/gunixcredentialsmessage.h>
#undef g_unix_credentials_message_new_with_credentials
static GSocketControlMessage *(*funcptr) (GCredentials * ) = 0;

extern int __lsb_check_params;
GSocketControlMessage * g_unix_credentials_message_new_with_credentials (GCredentials * arg0 )
{
	int reset_flag = __lsb_check_params;
	GSocketControlMessage * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_unix_credentials_message_new_with_credentials()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_unix_credentials_message_new_with_credentials");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_unix_credentials_message_new_with_credentials. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_unix_credentials_message_new_with_credentials() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_unix_credentials_message_new_with_credentials - arg0 (credentials)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_unix_credentials_message_new_with_credentials - arg0 (credentials)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}
