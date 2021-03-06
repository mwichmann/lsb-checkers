// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <stdarg.h>
#include <glib-2.0/glib.h>
#undef g_markup_vprintf_escaped
static char *(*funcptr) (const char * , va_list ) = 0;

extern int __lsb_check_params;
char * g_markup_vprintf_escaped (const char * arg0 , va_list arg1 )
{
	int reset_flag = __lsb_check_params;
	char * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_markup_vprintf_escaped()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_markup_vprintf_escaped");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_markup_vprintf_escaped. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_markup_vprintf_escaped() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "g_markup_vprintf_escaped - arg0 (format)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_markup_vprintf_escaped - arg0 (format)");
		validate_NULL_TYPETYPE(  arg1, "g_markup_vprintf_escaped - arg1 (args)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

