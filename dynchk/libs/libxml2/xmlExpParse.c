// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlregexp.h>
#undef xmlExpParse
static xmlExpNodePtr(*funcptr) (xmlExpCtxtPtr , const char * ) = 0;

extern int __lsb_check_params;
xmlExpNodePtr xmlExpParse (xmlExpCtxtPtr arg0 , const char * arg1 )
{
	int reset_flag = __lsb_check_params;
	xmlExpNodePtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlExpParse()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlExpParse", "LIBXML2_2.6.21");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlExpParse. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlExpParse() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlExpParse - arg0 (ctxt)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "xmlExpParse - arg1 (expr)");
		}
		validate_NULL_TYPETYPE(  arg1, "xmlExpParse - arg1 (expr)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

