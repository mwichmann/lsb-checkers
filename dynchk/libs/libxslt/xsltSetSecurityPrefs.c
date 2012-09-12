// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxslt/security.h>
#undef xsltSetSecurityPrefs
static int(*funcptr) (xsltSecurityPrefsPtr , xsltSecurityOption , xsltSecurityCheck ) = 0;

extern int __lsb_check_params;
int xsltSetSecurityPrefs (xsltSecurityPrefsPtr arg0 , xsltSecurityOption arg1 , xsltSecurityCheck arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xsltSetSecurityPrefs()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xsltSetSecurityPrefs", "LIBXML2_1.0.22");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xsltSetSecurityPrefs. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xsltSetSecurityPrefs() - validating");
		validate_NULL_TYPETYPE(  arg0, "xsltSetSecurityPrefs - arg0 (sec)");
		validate_NULL_TYPETYPE(  arg1, "xsltSetSecurityPrefs - arg1 (option)");
		validate_NULL_TYPETYPE(  arg2, "xsltSetSecurityPrefs - arg2 (func)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

