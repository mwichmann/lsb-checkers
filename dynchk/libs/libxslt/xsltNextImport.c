// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxslt/xsltInternals.h>
#include <libxslt/imports.h>
#undef xsltNextImport
static xsltStylesheetPtr(*funcptr) (xsltStylesheetPtr ) = 0;

extern int __lsb_check_params;
xsltStylesheetPtr xsltNextImport (xsltStylesheetPtr arg0 )
{
	int reset_flag = __lsb_check_params;
	xsltStylesheetPtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for xsltNextImport()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xsltNextImport", "LIBXML2_1.0.11");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xsltNextImport. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xsltNextImport() - validating");
		validate_NULL_TYPETYPE(  arg0, "xsltNextImport - arg0 (style)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

