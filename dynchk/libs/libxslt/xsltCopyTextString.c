// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxslt/xsltInternals.h>
#include <libxml2/libxml/tree.h>
#include <libxslt/transform.h>
#undef xsltCopyTextString
static xmlNodePtr(*funcptr) (xsltTransformContextPtr , xmlNodePtr , const unsigned char * , int ) = 0;

extern int __lsb_check_params;
xmlNodePtr xsltCopyTextString (xsltTransformContextPtr arg0 , xmlNodePtr arg1 , const unsigned char * arg2 , int arg3 )
{
	int reset_flag = __lsb_check_params;
	xmlNodePtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for xsltCopyTextString()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xsltCopyTextString", "LIBXML2_1.0.32");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xsltCopyTextString. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xsltCopyTextString() - validating");
		validate_NULL_TYPETYPE(  arg0, "xsltCopyTextString - arg0 (ctxt)");
		validate_NULL_TYPETYPE(  arg1, "xsltCopyTextString - arg1 (target)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "xsltCopyTextString - arg2 (string)");
		}
		validate_NULL_TYPETYPE(  arg2, "xsltCopyTextString - arg2 (string)");
		validate_NULL_TYPETYPE(  arg3, "xsltCopyTextString - arg3 (noescape)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

