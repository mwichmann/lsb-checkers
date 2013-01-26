// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/xmlregexp.h>
#undef xmlRegexpCompile
static xmlRegexpPtr(*funcptr) (const xmlChar * ) = 0;

extern int __lsb_check_params;
xmlRegexpPtr xmlRegexpCompile (const xmlChar * arg0 )
{
	int reset_flag = __lsb_check_params;
	xmlRegexpPtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlRegexpCompile()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlRegexpCompile", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlRegexpCompile. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlRegexpCompile() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "xmlRegexpCompile - arg0 (regexp)");
		}
		validate_NULL_TYPETYPE(  arg0, "xmlRegexpCompile - arg0 (regexp)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}
