// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxslt/xsltInternals.h>
#undef xsltCreateRVT
static xmlDocPtr(*funcptr) (xsltTransformContextPtr ) = 0;

extern int __lsb_check_params;
xmlDocPtr xsltCreateRVT (xsltTransformContextPtr arg0 )
{
	int reset_flag = __lsb_check_params;
	xmlDocPtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for xsltCreateRVT()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xsltCreateRVT", "LIBXML2_1.0.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xsltCreateRVT. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xsltCreateRVT() - validating");
		validate_NULL_TYPETYPE(  arg0, "xsltCreateRVT - arg0 (ctxt)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

