// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_basename
static const char *(*funcptr) (const char * ) = 0;

extern int __lsb_check_params;
const char * g_basename (const char * arg0 )
{
	int reset_flag = __lsb_check_params;
	const char * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_basename()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_basename");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_basename. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_basename() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "g_basename - arg0 (file_name)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_basename - arg0 (file_name)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}
