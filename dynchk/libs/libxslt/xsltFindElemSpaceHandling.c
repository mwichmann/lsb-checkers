// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxslt/xsltInternals.h>
#include <libxml2/libxml/tree.h>
#include <libxslt/imports.h>
#undef xsltFindElemSpaceHandling
static int(*funcptr) (xsltTransformContextPtr , xmlNodePtr ) = 0;

extern int __lsb_check_params;
int xsltFindElemSpaceHandling (xsltTransformContextPtr arg0 , xmlNodePtr arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xsltFindElemSpaceHandling()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xsltFindElemSpaceHandling", "LIBXML2_1.0.11");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xsltFindElemSpaceHandling. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xsltFindElemSpaceHandling() - validating");
		validate_NULL_TYPETYPE(  arg0, "xsltFindElemSpaceHandling - arg0 (ctxt)");
		validate_NULL_TYPETYPE(  arg1, "xsltFindElemSpaceHandling - arg1 (node)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

