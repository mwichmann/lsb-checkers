// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxslt/xsltInternals.h>
#include <libxml2/libxml/tree.h>
#include <libxslt/transform.h>
#undef xsltCopyOf
static void(*funcptr) (xsltTransformContextPtr , xmlNodePtr , xmlNodePtr , xsltStylePreCompPtr ) = 0;

extern int __lsb_check_params;
void xsltCopyOf (xsltTransformContextPtr arg0 , xmlNodePtr arg1 , xmlNodePtr arg2 , xsltStylePreCompPtr arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for xsltCopyOf()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xsltCopyOf", "LIBXML2_1.0.11");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xsltCopyOf. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xsltCopyOf() - validating");
		validate_NULL_TYPETYPE(  arg0, "xsltCopyOf - arg0 (ctxt)");
		validate_NULL_TYPETYPE(  arg1, "xsltCopyOf - arg1 (node)");
		validate_NULL_TYPETYPE(  arg2, "xsltCopyOf - arg2 (inst)");
		validate_NULL_TYPETYPE(  arg3, "xsltCopyOf - arg3 (comp)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

