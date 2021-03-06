// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlautomata.h>
#undef xmlAutomataNewCounterTrans
static xmlAutomataStatePtr(*funcptr) (xmlAutomataPtr , xmlAutomataStatePtr , xmlAutomataStatePtr , int ) = 0;

extern int __lsb_check_params;
xmlAutomataStatePtr xmlAutomataNewCounterTrans (xmlAutomataPtr arg0 , xmlAutomataStatePtr arg1 , xmlAutomataStatePtr arg2 , int arg3 )
{
	int reset_flag = __lsb_check_params;
	xmlAutomataStatePtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlAutomataNewCounterTrans()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlAutomataNewCounterTrans", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlAutomataNewCounterTrans. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlAutomataNewCounterTrans() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlAutomataNewCounterTrans - arg0");
		validate_NULL_TYPETYPE(  arg1, "xmlAutomataNewCounterTrans - arg1");
		validate_NULL_TYPETYPE(  arg2, "xmlAutomataNewCounterTrans - arg2");
		validate_NULL_TYPETYPE(  arg3, "xmlAutomataNewCounterTrans - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

