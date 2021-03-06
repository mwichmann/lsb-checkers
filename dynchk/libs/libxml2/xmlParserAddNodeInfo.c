// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlIO.h>
#include <libxml2/libxml/parser.h>
#undef xmlParserAddNodeInfo
static void(*funcptr) (xmlParserCtxtPtr , const xmlParserNodeInfoPtr ) = 0;

extern int __lsb_check_params;
void xmlParserAddNodeInfo (xmlParserCtxtPtr arg0 , const xmlParserNodeInfoPtr arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for xmlParserAddNodeInfo()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlParserAddNodeInfo", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlParserAddNodeInfo. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlParserAddNodeInfo() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlParserAddNodeInfo - arg0 (ctxt)");
		validate_NULL_TYPETYPE(  arg1, "xmlParserAddNodeInfo - arg1 (info)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

