// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/parserInternals.h>
#undef xmlCopyChar
static int(*funcptr) (int , xmlChar * , int ) = 0;

extern int __lsb_check_params;
int xmlCopyChar (int arg0 , xmlChar * arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlCopyChar()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlCopyChar", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlCopyChar. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlCopyChar() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlCopyChar - arg0 (len)");
		if( arg1 ) {
		validate_RWaddress( arg1, "xmlCopyChar - arg1 (out)");
		}
		validate_NULL_TYPETYPE(  arg1, "xmlCopyChar - arg1 (out)");
		validate_NULL_TYPETYPE(  arg2, "xmlCopyChar - arg2 (val)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

