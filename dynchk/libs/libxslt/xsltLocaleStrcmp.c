// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxslt/xsltlocale.h>
#undef xsltLocaleStrcmp
static int(*funcptr) (xsltLocale , const xsltLocaleChar * , const xsltLocaleChar * ) = 0;

extern int __lsb_check_params;
int xsltLocaleStrcmp (xsltLocale arg0 , const xsltLocaleChar * arg1 , const xsltLocaleChar * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xsltLocaleStrcmp()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xsltLocaleStrcmp", "LIBXML2_1.1.25");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xsltLocaleStrcmp. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xsltLocaleStrcmp() - validating");
		validate_NULL_TYPETYPE(  arg0, "xsltLocaleStrcmp - arg0 (locale)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "xsltLocaleStrcmp - arg1 (str1)");
		}
		validate_NULL_TYPETYPE(  arg1, "xsltLocaleStrcmp - arg1 (str1)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "xsltLocaleStrcmp - arg2 (str2)");
		}
		validate_NULL_TYPETYPE(  arg2, "xsltLocaleStrcmp - arg2 (str2)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

