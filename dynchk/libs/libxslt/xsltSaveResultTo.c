// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/tree.h>
#include <libxslt/xsltInternals.h>
#include <libxslt/xsltutils.h>
#undef xsltSaveResultTo
static int(*funcptr) (xmlOutputBufferPtr , xmlDocPtr , xsltStylesheetPtr ) = 0;

extern int __lsb_check_params;
int xsltSaveResultTo (xmlOutputBufferPtr arg0 , xmlDocPtr arg1 , xsltStylesheetPtr arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xsltSaveResultTo()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xsltSaveResultTo", "LIBXML2_1.0.11");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xsltSaveResultTo. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xsltSaveResultTo() - validating");
		validate_NULL_TYPETYPE(  arg0, "xsltSaveResultTo - arg0 (buf)");
		validate_NULL_TYPETYPE(  arg1, "xsltSaveResultTo - arg1 (result)");
		validate_NULL_TYPETYPE(  arg2, "xsltSaveResultTo - arg2 (style)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

