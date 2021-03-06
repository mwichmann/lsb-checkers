// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xpath.h>
#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/xpathInternals.h>
#undef xmlXPathNsLookup
static const xmlChar *(*funcptr) (xmlXPathContextPtr , const xmlChar * ) = 0;

extern int __lsb_check_params;
const xmlChar * xmlXPathNsLookup (xmlXPathContextPtr arg0 , const xmlChar * arg1 )
{
	int reset_flag = __lsb_check_params;
	const xmlChar * ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlXPathNsLookup()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlXPathNsLookup", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlXPathNsLookup. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlXPathNsLookup() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlXPathNsLookup - arg0 (ctxt)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "xmlXPathNsLookup - arg1 (prefix)");
		}
		validate_NULL_TYPETYPE(  arg1, "xmlXPathNsLookup - arg1 (prefix)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

