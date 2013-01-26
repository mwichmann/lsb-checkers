// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_uri_parse_scheme
static char *(*funcptr) (const char * ) = 0;

extern int __lsb_check_params;
char * g_uri_parse_scheme (const char * arg0 )
{
	int reset_flag = __lsb_check_params;
	char * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_uri_parse_scheme()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_uri_parse_scheme");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_uri_parse_scheme. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_uri_parse_scheme() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "g_uri_parse_scheme - arg0 (uri)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_uri_parse_scheme - arg0 (uri)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}
