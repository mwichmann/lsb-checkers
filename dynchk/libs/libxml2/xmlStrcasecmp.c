// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlstring.h>
#undef xmlStrcasecmp
static int(*funcptr) (const xmlChar * , const xmlChar * ) = 0;

extern int __lsb_check_params;
int xmlStrcasecmp (const xmlChar * arg0 , const xmlChar * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlStrcasecmp()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlStrcasecmp", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlStrcasecmp. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlStrcasecmp() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "xmlStrcasecmp - arg0 (str1)");
		}
		validate_NULL_TYPETYPE(  arg0, "xmlStrcasecmp - arg0 (str1)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "xmlStrcasecmp - arg1 (str2)");
		}
		validate_NULL_TYPETYPE(  arg1, "xmlStrcasecmp - arg1 (str2)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}
