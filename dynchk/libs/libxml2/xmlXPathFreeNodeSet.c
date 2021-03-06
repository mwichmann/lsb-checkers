// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xpath.h>
#undef xmlXPathFreeNodeSet
static void(*funcptr) (xmlNodeSetPtr ) = 0;

extern int __lsb_check_params;
void xmlXPathFreeNodeSet (xmlNodeSetPtr arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for xmlXPathFreeNodeSet()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlXPathFreeNodeSet", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlXPathFreeNodeSet. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlXPathFreeNodeSet() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlXPathFreeNodeSet - arg0 (obj)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

