// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxslt/xsltInternals.h>
#include <libxml2/libxml/tree.h>
#include <stdio.h>
#include <libxslt/transform.h>
#undef xsltApplyStylesheetUser
static xmlDocPtr(*funcptr) (xsltStylesheetPtr , xmlDocPtr , const char * * , const char * , FILE * , xsltTransformContextPtr ) = 0;

extern int __lsb_check_params;
xmlDocPtr xsltApplyStylesheetUser (xsltStylesheetPtr arg0 , xmlDocPtr arg1 , const char * * arg2 , const char * arg3 , FILE * arg4 , xsltTransformContextPtr arg5 )
{
	int reset_flag = __lsb_check_params;
	xmlDocPtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for xsltApplyStylesheetUser()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xsltApplyStylesheetUser", "LIBXML2_1.0.11");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xsltApplyStylesheetUser. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xsltApplyStylesheetUser() - validating");
		validate_NULL_TYPETYPE(  arg0, "xsltApplyStylesheetUser - arg0 (style)");
		validate_NULL_TYPETYPE(  arg1, "xsltApplyStylesheetUser - arg1 (doc)");
		if( arg2 ) {
		validate_RWaddress( arg2, "xsltApplyStylesheetUser - arg2 (params)");
		}
		validate_NULL_TYPETYPE(  arg2, "xsltApplyStylesheetUser - arg2 (params)");
		if( arg3 ) {
		validate_Rdaddress( arg3, "xsltApplyStylesheetUser - arg3 (output)");
		}
		validate_NULL_TYPETYPE(  arg3, "xsltApplyStylesheetUser - arg3 (output)");
		if( arg4 ) {
		validate_RWaddress( arg4, "xsltApplyStylesheetUser - arg4 (profile)");
		}
		validate_NULL_TYPETYPE(  arg4, "xsltApplyStylesheetUser - arg4 (profile)");
		validate_NULL_TYPETYPE(  arg5, "xsltApplyStylesheetUser - arg5 (userCtxt)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
	return ret_value;
}

