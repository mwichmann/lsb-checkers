// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxslt/xsltutils.h>
#undef xsltGetDebuggerStatus
static int(*funcptr) () = 0;

extern int __lsb_check_params;
int xsltGetDebuggerStatus ()
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xsltGetDebuggerStatus()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xsltGetDebuggerStatus", "LIBXML2_1.1.0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xsltGetDebuggerStatus. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xsltGetDebuggerStatus() - validating");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

