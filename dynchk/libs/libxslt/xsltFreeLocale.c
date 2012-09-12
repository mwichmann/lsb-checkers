// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxslt/xsltlocale.h>
#undef xsltFreeLocale
static void(*funcptr) (xsltLocale ) = 0;

extern int __lsb_check_params;
void xsltFreeLocale (xsltLocale arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for xsltFreeLocale()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xsltFreeLocale", "LIBXML2_1.1.25");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xsltFreeLocale. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xsltFreeLocale() - validating");
		validate_NULL_TYPETYPE(  arg0, "xsltFreeLocale - arg0 (locale)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

