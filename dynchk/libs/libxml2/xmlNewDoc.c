// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/tree.h>
#undef xmlNewDoc
static xmlDocPtr(*funcptr) (const xmlChar * ) = 0;

extern int __lsb_check_params;
xmlDocPtr xmlNewDoc (const xmlChar * arg0 )
{
	int reset_flag = __lsb_check_params;
	xmlDocPtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlNewDoc()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlNewDoc", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlNewDoc. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlNewDoc() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "xmlNewDoc - arg0 (version)");
		}
		validate_NULL_TYPETYPE(  arg0, "xmlNewDoc - arg0 (version)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

