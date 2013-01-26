// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlschemas.h>
#undef xmlSchemaSetParserErrors
static void(*funcptr) (xmlSchemaParserCtxtPtr , xmlSchemaValidityErrorFunc , xmlSchemaValidityWarningFunc , void * ) = 0;

extern int __lsb_check_params;
void xmlSchemaSetParserErrors (xmlSchemaParserCtxtPtr arg0 , xmlSchemaValidityErrorFunc arg1 , xmlSchemaValidityWarningFunc arg2 , void * arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for xmlSchemaSetParserErrors()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlSchemaSetParserErrors", "LIBXML2_2.5.8");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlSchemaSetParserErrors. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlSchemaSetParserErrors() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlSchemaSetParserErrors - arg0 (ctxt)");
		validate_NULL_TYPETYPE(  arg1, "xmlSchemaSetParserErrors - arg1 (err)");
		validate_NULL_TYPETYPE(  arg2, "xmlSchemaSetParserErrors - arg2 (warn)");
		if( arg3 ) {
		validate_RWaddress( arg3, "xmlSchemaSetParserErrors - arg3 (ctx)");
		}
		validate_NULL_TYPETYPE(  arg3, "xmlSchemaSetParserErrors - arg3 (ctx)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}
