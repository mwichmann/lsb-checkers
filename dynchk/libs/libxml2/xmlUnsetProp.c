// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/xmlstring.h>
#undef xmlUnsetProp
static int(*funcptr) (xmlNodePtr , const xmlChar * ) = 0;

extern int __lsb_check_params;
int xmlUnsetProp (xmlNodePtr arg0 , const xmlChar * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlUnsetProp()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlUnsetProp", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlUnsetProp. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlUnsetProp() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlUnsetProp - arg0 (node)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "xmlUnsetProp - arg1 (name)");
		}
		validate_NULL_TYPETYPE(  arg1, "xmlUnsetProp - arg1 (name)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

