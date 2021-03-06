// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxslt/xsltInternals.h>
#include <libxml2/libxml/tree.h>
#include <libxslt/xsltutils.h>
#undef xsltComputeSortResult
static xmlXPathObject * *(*funcptr) (xsltTransformContextPtr , xmlNode * ) = 0;

extern int __lsb_check_params;
xmlXPathObject * * xsltComputeSortResult (xsltTransformContextPtr arg0 , xmlNode * arg1 )
{
	int reset_flag = __lsb_check_params;
	xmlXPathObject * * ret_value  ;
	__lsb_output(4, "Invoking wrapper for xsltComputeSortResult()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xsltComputeSortResult", "LIBXML2_1.0.24");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xsltComputeSortResult. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xsltComputeSortResult() - validating");
		validate_NULL_TYPETYPE(  arg0, "xsltComputeSortResult - arg0 (ctxt)");
		if( arg1 ) {
		validate_RWaddress( arg1, "xsltComputeSortResult - arg1 (sort)");
		}
		validate_NULL_TYPETYPE(  arg1, "xsltComputeSortResult - arg1 (sort)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

