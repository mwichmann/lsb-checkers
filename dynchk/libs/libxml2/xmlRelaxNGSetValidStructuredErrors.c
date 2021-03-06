// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/relaxng.h>
#include <libxml2/libxml/xmlerror.h>
#undef xmlRelaxNGSetValidStructuredErrors
static void(*funcptr) (xmlRelaxNGValidCtxtPtr , xmlStructuredErrorFunc , void * ) = 0;

extern int __lsb_check_params;
void xmlRelaxNGSetValidStructuredErrors (xmlRelaxNGValidCtxtPtr arg0 , xmlStructuredErrorFunc arg1 , void * arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for xmlRelaxNGSetValidStructuredErrors()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlRelaxNGSetValidStructuredErrors", "LIBXML2_2.6.21");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlRelaxNGSetValidStructuredErrors. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlRelaxNGSetValidStructuredErrors() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlRelaxNGSetValidStructuredErrors - arg0 (ctxt)");
		validate_NULL_TYPETYPE(  arg1, "xmlRelaxNGSetValidStructuredErrors - arg1 (serror)");
		if( arg2 ) {
		validate_RWaddress( arg2, "xmlRelaxNGSetValidStructuredErrors - arg2 (ctx)");
		}
		validate_NULL_TYPETYPE(  arg2, "xmlRelaxNGSetValidStructuredErrors - arg2 (ctx)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

