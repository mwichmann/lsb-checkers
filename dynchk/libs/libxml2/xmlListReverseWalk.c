// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/list.h>
#undef xmlListReverseWalk
static void(*funcptr) (xmlListPtr , xmlListWalker , const void * ) = 0;

extern int __lsb_check_params;
void xmlListReverseWalk (xmlListPtr arg0 , xmlListWalker arg1 , const void * arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for xmlListReverseWalk()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlListReverseWalk", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlListReverseWalk. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlListReverseWalk() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlListReverseWalk - arg0 (l)");
		validate_NULL_TYPETYPE(  arg1, "xmlListReverseWalk - arg1 (walker)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "xmlListReverseWalk - arg2 (user)");
		}
		validate_NULL_TYPETYPE(  arg2, "xmlListReverseWalk - arg2 (user)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

