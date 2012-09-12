// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxslt/xsltInternals.h>
#include <libxslt/variables.h>
#undef xsltFreeGlobalVariables
static void(*funcptr) (xsltTransformContextPtr ) = 0;

extern int __lsb_check_params;
void xsltFreeGlobalVariables (xsltTransformContextPtr arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for xsltFreeGlobalVariables()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xsltFreeGlobalVariables", "LIBXML2_1.0.11");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xsltFreeGlobalVariables. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xsltFreeGlobalVariables() - validating");
		validate_NULL_TYPETYPE(  arg0, "xsltFreeGlobalVariables - arg0 (ctxt)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

