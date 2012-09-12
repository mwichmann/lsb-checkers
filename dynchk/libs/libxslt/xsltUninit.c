// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxslt/xsltInternals.h>
#undef xsltUninit
static void(*funcptr) () = 0;

extern int __lsb_check_params;
void xsltUninit ()
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for xsltUninit()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xsltUninit", "LIBXML2_1.1.18");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xsltUninit. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xsltUninit() - validating");
	}
	funcptr();
	__lsb_check_params = reset_flag;
}

