// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/relaxng.h>
#undef xmlRelaxNGGetValidErrors
static int(*funcptr) (xmlRelaxNGValidCtxtPtr , xmlRelaxNGValidityErrorFunc * , xmlRelaxNGValidityWarningFunc * , void * * ) = 0;

extern int __lsb_check_params;
int xmlRelaxNGGetValidErrors (xmlRelaxNGValidCtxtPtr arg0 , xmlRelaxNGValidityErrorFunc * arg1 , xmlRelaxNGValidityWarningFunc * arg2 , void * * arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlRelaxNGGetValidErrors()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlRelaxNGGetValidErrors", "LIBXML2_2.5.9");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlRelaxNGGetValidErrors. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlRelaxNGGetValidErrors() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlRelaxNGGetValidErrors - arg0 (ctxt)");
		if( arg1 ) {
		validate_RWaddress( arg1, "xmlRelaxNGGetValidErrors - arg1 (err)");
		}
		validate_NULL_TYPETYPE(  arg1, "xmlRelaxNGGetValidErrors - arg1 (err)");
		if( arg2 ) {
		validate_RWaddress( arg2, "xmlRelaxNGGetValidErrors - arg2 (warn)");
		}
		validate_NULL_TYPETYPE(  arg2, "xmlRelaxNGGetValidErrors - arg2 (warn)");
		if( arg3 ) {
		validate_RWaddress( arg3, "xmlRelaxNGGetValidErrors - arg3 (ctx)");
		}
		validate_NULL_TYPETYPE(  arg3, "xmlRelaxNGGetValidErrors - arg3 (ctx)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

