// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlstring.h>
#undef xmlStrncat
static xmlChar *(*funcptr) (xmlChar * , const xmlChar * , int ) = 0;

extern int __lsb_check_params;
xmlChar * xmlStrncat (xmlChar * arg0 , const xmlChar * arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	xmlChar * ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlStrncat()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlStrncat", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlStrncat. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlStrncat() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "xmlStrncat - arg0 (cur)");
		}
		validate_NULL_TYPETYPE(  arg0, "xmlStrncat - arg0 (cur)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "xmlStrncat - arg1 (add)");
		}
		validate_NULL_TYPETYPE(  arg1, "xmlStrncat - arg1 (add)");
		validate_NULL_TYPETYPE(  arg2, "xmlStrncat - arg2 (len)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

