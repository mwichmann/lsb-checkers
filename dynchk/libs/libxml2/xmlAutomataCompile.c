// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlautomata.h>
#undef xmlAutomataCompile
static xmlRegexpPtr(*funcptr) (xmlAutomataPtr ) = 0;

extern int __lsb_check_params;
xmlRegexpPtr xmlAutomataCompile (xmlAutomataPtr arg0 )
{
	int reset_flag = __lsb_check_params;
	xmlRegexpPtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlAutomataCompile()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlAutomataCompile", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlAutomataCompile. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlAutomataCompile() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlAutomataCompile - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

