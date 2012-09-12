// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxslt/xsltlocale.h>
#undef xsltNewLocale
static xsltLocale(*funcptr) (const unsigned char * ) = 0;

extern int __lsb_check_params;
xsltLocale xsltNewLocale (const unsigned char * arg0 )
{
	int reset_flag = __lsb_check_params;
	xsltLocale ret_value  ;
	__lsb_output(4, "Invoking wrapper for xsltNewLocale()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xsltNewLocale", "LIBXML2_1.1.25");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xsltNewLocale. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xsltNewLocale() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "xsltNewLocale - arg0 (langName)");
		}
		validate_NULL_TYPETYPE(  arg0, "xsltNewLocale - arg0 (langName)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

