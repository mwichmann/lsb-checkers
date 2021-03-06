// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxslt/xsltInternals.h>
#include <libxml2/libxml/tree.h>
#include <libxslt/transform.h>
#undef xsltProcessOneNode
static void(*funcptr) (xsltTransformContextPtr , xmlNodePtr , xsltStackElemPtr ) = 0;

extern int __lsb_check_params;
void xsltProcessOneNode (xsltTransformContextPtr arg0 , xmlNodePtr arg1 , xsltStackElemPtr arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for xsltProcessOneNode()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xsltProcessOneNode", "LIBXML2_1.1.26");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xsltProcessOneNode. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xsltProcessOneNode() - validating");
		validate_NULL_TYPETYPE(  arg0, "xsltProcessOneNode - arg0 (ctxt)");
		validate_NULL_TYPETYPE(  arg1, "xsltProcessOneNode - arg1 (node)");
		validate_NULL_TYPETYPE(  arg2, "xsltProcessOneNode - arg2 (params)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

