// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/list.h>
#undef xmlListCreate
static xmlListPtr(*funcptr) (xmlListDeallocator , xmlListDataCompare ) = 0;

extern int __lsb_check_params;
xmlListPtr xmlListCreate (xmlListDeallocator arg0 , xmlListDataCompare arg1 )
{
	int reset_flag = __lsb_check_params;
	xmlListPtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlListCreate()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlListCreate", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlListCreate. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlListCreate() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlListCreate - arg0 (deallocator)");
		validate_NULL_TYPETYPE(  arg1, "xmlListCreate - arg1 (compare)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

