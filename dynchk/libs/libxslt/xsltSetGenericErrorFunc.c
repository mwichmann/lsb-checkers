// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlerror.h>
#include <libxslt/xsltutils.h>
#undef xsltSetGenericErrorFunc
static void(*funcptr) (void * , xmlGenericErrorFunc ) = 0;

extern int __lsb_check_params;
void xsltSetGenericErrorFunc (void * arg0 , xmlGenericErrorFunc arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for xsltSetGenericErrorFunc()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xsltSetGenericErrorFunc", "LIBXML2_1.0.11");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xsltSetGenericErrorFunc. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xsltSetGenericErrorFunc() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "xsltSetGenericErrorFunc - arg0 (ctx)");
		}
		validate_NULL_TYPETYPE(  arg0, "xsltSetGenericErrorFunc - arg0 (ctx)");
		validate_NULL_TYPETYPE(  arg1, "xsltSetGenericErrorFunc - arg1 (handler)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

