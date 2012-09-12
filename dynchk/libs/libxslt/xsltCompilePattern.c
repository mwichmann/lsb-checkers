// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/tree.h>
#include <libxslt/xsltInternals.h>
#include <libxslt/pattern.h>
#undef xsltCompilePattern
static xsltCompMatchPtr(*funcptr) (const unsigned char * , xmlDocPtr , xmlNodePtr , xsltStylesheetPtr , xsltTransformContextPtr ) = 0;

extern int __lsb_check_params;
xsltCompMatchPtr xsltCompilePattern (const unsigned char * arg0 , xmlDocPtr arg1 , xmlNodePtr arg2 , xsltStylesheetPtr arg3 , xsltTransformContextPtr arg4 )
{
	int reset_flag = __lsb_check_params;
	xsltCompMatchPtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for xsltCompilePattern()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xsltCompilePattern", "LIBXML2_1.0.11");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xsltCompilePattern. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xsltCompilePattern() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "xsltCompilePattern - arg0 (pattern)");
		}
		validate_NULL_TYPETYPE(  arg0, "xsltCompilePattern - arg0 (pattern)");
		validate_NULL_TYPETYPE(  arg1, "xsltCompilePattern - arg1 (doc)");
		validate_NULL_TYPETYPE(  arg2, "xsltCompilePattern - arg2 (node)");
		validate_NULL_TYPETYPE(  arg3, "xsltCompilePattern - arg3 (style)");
		validate_NULL_TYPETYPE(  arg4, "xsltCompilePattern - arg4 (runtime)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

