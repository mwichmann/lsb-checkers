// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlIO.h>
#include <libxml2/libxml/xmlerror.h>
#include <libxml2/libxml/parserInternals.h>
#undef xmlPushInput
static int(*funcptr) (xmlParserCtxtPtr , xmlParserInputPtr ) = 0;

extern int __lsb_check_params;
int xmlPushInput (xmlParserCtxtPtr arg0 , xmlParserInputPtr arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlPushInput()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlPushInput", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlPushInput. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlPushInput() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlPushInput - arg0 (ctxt)");
		validate_NULL_TYPETYPE(  arg1, "xmlPushInput - arg1 (input)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

