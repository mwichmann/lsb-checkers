// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxslt/xsltInternals.h>
#include <libxslt/transform.h>
#undef xsltLocalVariablePush
static int(*funcptr) (xsltTransformContextPtr , xsltStackElemPtr , int ) = 0;

extern int __lsb_check_params;
int xsltLocalVariablePush (xsltTransformContextPtr arg0 , xsltStackElemPtr arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xsltLocalVariablePush()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xsltLocalVariablePush", "LIBXML2_1.1.20");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xsltLocalVariablePush. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xsltLocalVariablePush() - validating");
		validate_NULL_TYPETYPE(  arg0, "xsltLocalVariablePush - arg0 (ctxt)");
		validate_NULL_TYPETYPE(  arg1, "xsltLocalVariablePush - arg1 (variable)");
		validate_NULL_TYPETYPE(  arg2, "xsltLocalVariablePush - arg2 (level)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

