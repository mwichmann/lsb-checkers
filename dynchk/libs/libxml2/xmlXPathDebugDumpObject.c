// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <stdio.h>
#include <libxml2/libxml/xpath.h>
#include <libxml2/libxml/xpathInternals.h>
#undef xmlXPathDebugDumpObject
static void(*funcptr) (FILE * , xmlXPathObjectPtr , int ) = 0;

extern int __lsb_check_params;
void xmlXPathDebugDumpObject (FILE * arg0 , xmlXPathObjectPtr arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for xmlXPathDebugDumpObject()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlXPathDebugDumpObject", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlXPathDebugDumpObject. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlXPathDebugDumpObject() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "xmlXPathDebugDumpObject - arg0 (output)");
		}
		validate_NULL_TYPETYPE(  arg0, "xmlXPathDebugDumpObject - arg0 (output)");
		validate_NULL_TYPETYPE(  arg1, "xmlXPathDebugDumpObject - arg1 (cur)");
		validate_NULL_TYPETYPE(  arg2, "xmlXPathDebugDumpObject - arg2 (depth)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

