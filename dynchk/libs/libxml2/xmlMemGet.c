// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlmemory.h>
#undef xmlMemGet
static int(*funcptr) (xmlFreeFunc * , xmlMallocFunc * , xmlReallocFunc * , xmlStrdupFunc * ) = 0;

extern int __lsb_check_params;
int xmlMemGet (xmlFreeFunc * arg0 , xmlMallocFunc * arg1 , xmlReallocFunc * arg2 , xmlStrdupFunc * arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlMemGet()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlMemGet", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlMemGet. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlMemGet() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "xmlMemGet - arg0 (freeFunc)");
		}
		validate_NULL_TYPETYPE(  arg0, "xmlMemGet - arg0 (freeFunc)");
		if( arg1 ) {
		validate_RWaddress( arg1, "xmlMemGet - arg1 (mallocFunc)");
		}
		validate_NULL_TYPETYPE(  arg1, "xmlMemGet - arg1 (mallocFunc)");
		if( arg2 ) {
		validate_RWaddress( arg2, "xmlMemGet - arg2 (reallocFunc)");
		}
		validate_NULL_TYPETYPE(  arg2, "xmlMemGet - arg2 (reallocFunc)");
		if( arg3 ) {
		validate_RWaddress( arg3, "xmlMemGet - arg3 (strdupFunc)");
		}
		validate_NULL_TYPETYPE(  arg3, "xmlMemGet - arg3 (strdupFunc)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

