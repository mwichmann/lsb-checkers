// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/pattern.h>
#undef xmlStreamPop
static int(*funcptr) (xmlStreamCtxtPtr ) = 0;

extern int __lsb_check_params;
int xmlStreamPop (xmlStreamCtxtPtr arg0 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlStreamPop()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlStreamPop", "LIBXML2_2.6.18");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlStreamPop. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlStreamPop() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlStreamPop - arg0 (stream)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

