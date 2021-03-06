// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/dict.h>
#include <libxml2/libxml/xmlstring.h>
#undef xmlDictLookup
static const xmlChar *(*funcptr) (xmlDictPtr , const xmlChar * , int ) = 0;

extern int __lsb_check_params;
const xmlChar * xmlDictLookup (xmlDictPtr arg0 , const xmlChar * arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	const xmlChar * ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlDictLookup()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlDictLookup", "LIBXML2_2.6.0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlDictLookup. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlDictLookup() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlDictLookup - arg0");
		if( arg1 ) {
		validate_Rdaddress( arg1, "xmlDictLookup - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "xmlDictLookup - arg1");
		validate_NULL_TYPETYPE(  arg2, "xmlDictLookup - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

