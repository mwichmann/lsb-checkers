// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xpointer.h>
#undef xmlXPtrLocationSetMerge
static xmlLocationSetPtr(*funcptr) (xmlLocationSetPtr , xmlLocationSetPtr ) = 0;

extern int __lsb_check_params;
xmlLocationSetPtr xmlXPtrLocationSetMerge (xmlLocationSetPtr arg0 , xmlLocationSetPtr arg1 )
{
	int reset_flag = __lsb_check_params;
	xmlLocationSetPtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlXPtrLocationSetMerge()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlXPtrLocationSetMerge", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlXPtrLocationSetMerge. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlXPtrLocationSetMerge() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlXPtrLocationSetMerge - arg0 (val1)");
		validate_NULL_TYPETYPE(  arg1, "xmlXPtrLocationSetMerge - arg1 (val2)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

