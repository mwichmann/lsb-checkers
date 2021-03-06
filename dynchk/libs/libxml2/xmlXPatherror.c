// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xpath.h>
#include <libxml2/libxml/xpathInternals.h>
#undef xmlXPatherror
static void(*funcptr) (xmlXPathParserContextPtr , const char * , int , int ) = 0;

extern int __lsb_check_params;
void xmlXPatherror (xmlXPathParserContextPtr arg0 , const char * arg1 , int arg2 , int arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for xmlXPatherror()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlXPatherror", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlXPatherror. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlXPatherror() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlXPatherror - arg0 (ctxt)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "xmlXPatherror - arg1 (file)");
		}
		validate_NULL_TYPETYPE(  arg1, "xmlXPatherror - arg1 (file)");
		validate_NULL_TYPETYPE(  arg2, "xmlXPatherror - arg2 (line)");
		validate_NULL_TYPETYPE(  arg3, "xmlXPatherror - arg3 (no)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

