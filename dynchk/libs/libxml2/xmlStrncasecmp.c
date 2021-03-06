// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlstring.h>
#undef xmlStrncasecmp
static int(*funcptr) (const xmlChar * , const xmlChar * , int ) = 0;

extern int __lsb_check_params;
int xmlStrncasecmp (const xmlChar * arg0 , const xmlChar * arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlStrncasecmp()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlStrncasecmp", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlStrncasecmp. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlStrncasecmp() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "xmlStrncasecmp - arg0 (str1)");
		}
		validate_NULL_TYPETYPE(  arg0, "xmlStrncasecmp - arg0 (str1)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "xmlStrncasecmp - arg1 (str2)");
		}
		validate_NULL_TYPETYPE(  arg1, "xmlStrncasecmp - arg1 (str2)");
		validate_NULL_TYPETYPE(  arg2, "xmlStrncasecmp - arg2 (len)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

