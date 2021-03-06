// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/tree.h>
#undef xmlNodeDump
static int(*funcptr) (xmlBufferPtr , xmlDocPtr , xmlNodePtr , int , int ) = 0;

extern int __lsb_check_params;
int xmlNodeDump (xmlBufferPtr arg0 , xmlDocPtr arg1 , xmlNodePtr arg2 , int arg3 , int arg4 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlNodeDump()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlNodeDump", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlNodeDump. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlNodeDump() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlNodeDump - arg0 (buf)");
		validate_NULL_TYPETYPE(  arg1, "xmlNodeDump - arg1 (doc)");
		validate_NULL_TYPETYPE(  arg2, "xmlNodeDump - arg2 (cur)");
		validate_NULL_TYPETYPE(  arg3, "xmlNodeDump - arg3 (level)");
		validate_NULL_TYPETYPE(  arg4, "xmlNodeDump - arg4 (format)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

