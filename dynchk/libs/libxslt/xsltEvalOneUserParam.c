// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxslt/xsltInternals.h>
#include <libxslt/variables.h>
#undef xsltEvalOneUserParam
static int(*funcptr) (xsltTransformContextPtr , const unsigned char * , const unsigned char * ) = 0;

extern int __lsb_check_params;
int xsltEvalOneUserParam (xsltTransformContextPtr arg0 , const unsigned char * arg1 , const unsigned char * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xsltEvalOneUserParam()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xsltEvalOneUserParam", "LIBXML2_1.0.11");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xsltEvalOneUserParam. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xsltEvalOneUserParam() - validating");
		validate_NULL_TYPETYPE(  arg0, "xsltEvalOneUserParam - arg0 (ctxt)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "xsltEvalOneUserParam - arg1 (name)");
		}
		validate_NULL_TYPETYPE(  arg1, "xsltEvalOneUserParam - arg1 (name)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "xsltEvalOneUserParam - arg2 (value)");
		}
		validate_NULL_TYPETYPE(  arg2, "xsltEvalOneUserParam - arg2 (value)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

