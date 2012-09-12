// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxslt/xsltInternals.h>
#include <libxml2/libxml/xpath.h>
#include <libxslt/templates.h>
#undef xsltEvalXPathString
static xmlChar *(*funcptr) (xsltTransformContextPtr , xmlXPathCompExprPtr ) = 0;

extern int __lsb_check_params;
xmlChar * xsltEvalXPathString (xsltTransformContextPtr arg0 , xmlXPathCompExprPtr arg1 )
{
	int reset_flag = __lsb_check_params;
	xmlChar * ret_value  ;
	__lsb_output(4, "Invoking wrapper for xsltEvalXPathString()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xsltEvalXPathString", "LIBXML2_1.0.11");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xsltEvalXPathString. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xsltEvalXPathString() - validating");
		validate_NULL_TYPETYPE(  arg0, "xsltEvalXPathString - arg0 (ctxt)");
		validate_NULL_TYPETYPE(  arg1, "xsltEvalXPathString - arg1 (comp)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

