// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxslt/xsltInternals.h>
#include <libxml2/libxml/tree.h>
#include <libxslt/namespaces.h>
#undef xsltGetSpecialNamespace
static xmlNsPtr(*funcptr) (xsltTransformContextPtr , xmlNodePtr , const unsigned char * , const unsigned char * , xmlNodePtr ) = 0;

extern int __lsb_check_params;
xmlNsPtr xsltGetSpecialNamespace (xsltTransformContextPtr arg0 , xmlNodePtr arg1 , const unsigned char * arg2 , const unsigned char * arg3 , xmlNodePtr arg4 )
{
	int reset_flag = __lsb_check_params;
	xmlNsPtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for xsltGetSpecialNamespace()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xsltGetSpecialNamespace", "LIBXML2_1.0.11");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xsltGetSpecialNamespace. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xsltGetSpecialNamespace() - validating");
		validate_NULL_TYPETYPE(  arg0, "xsltGetSpecialNamespace - arg0 (ctxt)");
		validate_NULL_TYPETYPE(  arg1, "xsltGetSpecialNamespace - arg1 (cur)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "xsltGetSpecialNamespace - arg2 (URI)");
		}
		validate_NULL_TYPETYPE(  arg2, "xsltGetSpecialNamespace - arg2 (URI)");
		if( arg3 ) {
		validate_Rdaddress( arg3, "xsltGetSpecialNamespace - arg3 (prefix)");
		}
		validate_NULL_TYPETYPE(  arg3, "xsltGetSpecialNamespace - arg3 (prefix)");
		validate_NULL_TYPETYPE(  arg4, "xsltGetSpecialNamespace - arg4 (out)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

