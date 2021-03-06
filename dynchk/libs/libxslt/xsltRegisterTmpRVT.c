// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxslt/xsltInternals.h>
#include <libxml2/libxml/tree.h>
#undef xsltRegisterTmpRVT
static int(*funcptr) (xsltTransformContextPtr , xmlDocPtr ) = 0;

extern int __lsb_check_params;
int xsltRegisterTmpRVT (xsltTransformContextPtr arg0 , xmlDocPtr arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xsltRegisterTmpRVT()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xsltRegisterTmpRVT", "LIBXML2_1.0.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xsltRegisterTmpRVT. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xsltRegisterTmpRVT() - validating");
		validate_NULL_TYPETYPE(  arg0, "xsltRegisterTmpRVT - arg0 (ctxt)");
		validate_NULL_TYPETYPE(  arg1, "xsltRegisterTmpRVT - arg1 (RVT)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

