// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/relaxng.h>
#undef xmlRelaxNGSetValidErrors
static void(*funcptr) (xmlRelaxNGValidCtxtPtr , xmlRelaxNGValidityErrorFunc , xmlRelaxNGValidityWarningFunc , void * ) = 0;

extern int __lsb_check_params;
void xmlRelaxNGSetValidErrors (xmlRelaxNGValidCtxtPtr arg0 , xmlRelaxNGValidityErrorFunc arg1 , xmlRelaxNGValidityWarningFunc arg2 , void * arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for xmlRelaxNGSetValidErrors()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlRelaxNGSetValidErrors", "LIBXML2_2.5.2");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlRelaxNGSetValidErrors. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlRelaxNGSetValidErrors() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlRelaxNGSetValidErrors - arg0 (ctxt)");
		validate_NULL_TYPETYPE(  arg1, "xmlRelaxNGSetValidErrors - arg1 (err)");
		validate_NULL_TYPETYPE(  arg2, "xmlRelaxNGSetValidErrors - arg2 (warn)");
		if( arg3 ) {
		validate_RWaddress( arg3, "xmlRelaxNGSetValidErrors - arg3 (ctx)");
		}
		validate_NULL_TYPETYPE(  arg3, "xmlRelaxNGSetValidErrors - arg3 (ctx)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

