// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxslt/xsltInternals.h>
#include <libxml2/libxml/tree.h>
#include <libxslt/transform.h>
#undef xsltCopy
static void(*funcptr) (xsltTransformContextPtr , xmlNodePtr , xmlNodePtr , xsltStylePreCompPtr ) = 0;

extern int __lsb_check_params;
void xsltCopy (xsltTransformContextPtr arg0 , xmlNodePtr arg1 , xmlNodePtr arg2 , xsltStylePreCompPtr arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for xsltCopy()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xsltCopy", "LIBXML2_1.0.11");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xsltCopy. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xsltCopy() - validating");
		validate_NULL_TYPETYPE(  arg0, "xsltCopy - arg0 (ctxt)");
		validate_NULL_TYPETYPE(  arg1, "xsltCopy - arg1 (node)");
		validate_NULL_TYPETYPE(  arg2, "xsltCopy - arg2 (inst)");
		validate_NULL_TYPETYPE(  arg3, "xsltCopy - arg3 (comp)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

