// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxslt/security.h>
#include <libxslt/xsltInternals.h>
#undef xsltSecurityAllow
static int(*funcptr) (xsltSecurityPrefsPtr , xsltTransformContextPtr , const char * ) = 0;

extern int __lsb_check_params;
int xsltSecurityAllow (xsltSecurityPrefsPtr arg0 , xsltTransformContextPtr arg1 , const char * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xsltSecurityAllow()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xsltSecurityAllow", "LIBXML2_1.0.22");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xsltSecurityAllow. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xsltSecurityAllow() - validating");
		validate_NULL_TYPETYPE(  arg0, "xsltSecurityAllow - arg0 (sec)");
		validate_NULL_TYPETYPE(  arg1, "xsltSecurityAllow - arg1 (ctxt)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "xsltSecurityAllow - arg2 (value)");
		}
		validate_NULL_TYPETYPE(  arg2, "xsltSecurityAllow - arg2 (value)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

