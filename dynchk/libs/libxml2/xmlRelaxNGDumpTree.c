// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <stdio.h>
#include <libxml2/libxml/relaxng.h>
#undef xmlRelaxNGDumpTree
static void(*funcptr) (FILE * , xmlRelaxNGPtr ) = 0;

extern int __lsb_check_params;
void xmlRelaxNGDumpTree (FILE * arg0 , xmlRelaxNGPtr arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for xmlRelaxNGDumpTree()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlRelaxNGDumpTree", "LIBXML2_2.5.4");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlRelaxNGDumpTree. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlRelaxNGDumpTree() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "xmlRelaxNGDumpTree - arg0 (output)");
		}
		validate_NULL_TYPETYPE(  arg0, "xmlRelaxNGDumpTree - arg0 (output)");
		validate_NULL_TYPETYPE(  arg1, "xmlRelaxNGDumpTree - arg1 (schema)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

