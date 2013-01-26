// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxslt/transform.h>
#undef xsltSetXIncludeDefault
static void(*funcptr) (int ) = 0;

extern int __lsb_check_params;
void xsltSetXIncludeDefault (int arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for xsltSetXIncludeDefault()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xsltSetXIncludeDefault", "LIBXML2_1.0.11");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xsltSetXIncludeDefault. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xsltSetXIncludeDefault() - validating");
		validate_NULL_TYPETYPE(  arg0, "xsltSetXIncludeDefault - arg0 (xinclude)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}
