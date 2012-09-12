// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxslt/xsltInternals.h>
#include <libxslt/xsltutils.h>
#undef xsltSetSortFunc
static void(*funcptr) (xsltSortFunc ) = 0;

extern int __lsb_check_params;
void xsltSetSortFunc (xsltSortFunc arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for xsltSetSortFunc()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xsltSetSortFunc", "LIBXML2_1.0.24");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xsltSetSortFunc. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xsltSetSortFunc() - validating");
		validate_NULL_TYPETYPE(  arg0, "xsltSetSortFunc - arg0 (handler)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

