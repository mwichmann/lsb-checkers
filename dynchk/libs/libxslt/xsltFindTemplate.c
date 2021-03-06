// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxslt/xsltInternals.h>
#include <libxslt/imports.h>
#undef xsltFindTemplate
static xsltTemplatePtr(*funcptr) (xsltTransformContextPtr , const unsigned char * , const unsigned char * ) = 0;

extern int __lsb_check_params;
xsltTemplatePtr xsltFindTemplate (xsltTransformContextPtr arg0 , const unsigned char * arg1 , const unsigned char * arg2 )
{
	int reset_flag = __lsb_check_params;
	xsltTemplatePtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for xsltFindTemplate()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xsltFindTemplate", "LIBXML2_1.0.11");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xsltFindTemplate. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xsltFindTemplate() - validating");
		validate_NULL_TYPETYPE(  arg0, "xsltFindTemplate - arg0 (ctxt)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "xsltFindTemplate - arg1 (name)");
		}
		validate_NULL_TYPETYPE(  arg1, "xsltFindTemplate - arg1 (name)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "xsltFindTemplate - arg2 (nameURI)");
		}
		validate_NULL_TYPETYPE(  arg2, "xsltFindTemplate - arg2 (nameURI)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

