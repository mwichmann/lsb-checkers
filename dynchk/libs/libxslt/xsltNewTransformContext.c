// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxslt/xsltInternals.h>
#include <libxml2/libxml/tree.h>
#include <libxslt/transform.h>
#undef xsltNewTransformContext
static xsltTransformContextPtr(*funcptr) (xsltStylesheetPtr , xmlDocPtr ) = 0;

extern int __lsb_check_params;
xsltTransformContextPtr xsltNewTransformContext (xsltStylesheetPtr arg0 , xmlDocPtr arg1 )
{
	int reset_flag = __lsb_check_params;
	xsltTransformContextPtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for xsltNewTransformContext()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xsltNewTransformContext", "LIBXML2_1.0.11");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xsltNewTransformContext. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xsltNewTransformContext() - validating");
		validate_NULL_TYPETYPE(  arg0, "xsltNewTransformContext - arg0 (style)");
		validate_NULL_TYPETYPE(  arg1, "xsltNewTransformContext - arg1 (doc)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

