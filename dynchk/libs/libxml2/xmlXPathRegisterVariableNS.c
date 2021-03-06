// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xpath.h>
#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/xpathInternals.h>
#undef xmlXPathRegisterVariableNS
static int(*funcptr) (xmlXPathContextPtr , const xmlChar * , const xmlChar * , xmlXPathObjectPtr ) = 0;

extern int __lsb_check_params;
int xmlXPathRegisterVariableNS (xmlXPathContextPtr arg0 , const xmlChar * arg1 , const xmlChar * arg2 , xmlXPathObjectPtr arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlXPathRegisterVariableNS()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlXPathRegisterVariableNS", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlXPathRegisterVariableNS. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlXPathRegisterVariableNS() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlXPathRegisterVariableNS - arg0 (ctxt)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "xmlXPathRegisterVariableNS - arg1 (name)");
		}
		validate_NULL_TYPETYPE(  arg1, "xmlXPathRegisterVariableNS - arg1 (name)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "xmlXPathRegisterVariableNS - arg2 (ns_uri)");
		}
		validate_NULL_TYPETYPE(  arg2, "xmlXPathRegisterVariableNS - arg2 (ns_uri)");
		validate_NULL_TYPETYPE(  arg3, "xmlXPathRegisterVariableNS - arg3 (value)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

