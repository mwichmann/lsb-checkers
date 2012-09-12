// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xpath.h>
#include <libxslt/extra.h>
#undef xsltFunctionNodeSet
static void(*funcptr) (xmlXPathParserContextPtr , int ) = 0;

extern int __lsb_check_params;
void xsltFunctionNodeSet (xmlXPathParserContextPtr arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for xsltFunctionNodeSet()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xsltFunctionNodeSet", "LIBXML2_1.0.11");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xsltFunctionNodeSet. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xsltFunctionNodeSet() - validating");
		validate_NULL_TYPETYPE(  arg0, "xsltFunctionNodeSet - arg0 (ctxt)");
		validate_NULL_TYPETYPE(  arg1, "xsltFunctionNodeSet - arg1 (nargs)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

