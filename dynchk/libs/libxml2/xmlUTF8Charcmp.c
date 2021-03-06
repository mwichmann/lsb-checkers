// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlstring.h>
#undef xmlUTF8Charcmp
static int(*funcptr) (const xmlChar * , const xmlChar * ) = 0;

extern int __lsb_check_params;
int xmlUTF8Charcmp (const xmlChar * arg0 , const xmlChar * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlUTF8Charcmp()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlUTF8Charcmp", "LIBXML2_2.5.9");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlUTF8Charcmp. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlUTF8Charcmp() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "xmlUTF8Charcmp - arg0 (utf1)");
		}
		validate_NULL_TYPETYPE(  arg0, "xmlUTF8Charcmp - arg0 (utf1)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "xmlUTF8Charcmp - arg1 (utf2)");
		}
		validate_NULL_TYPETYPE(  arg1, "xmlUTF8Charcmp - arg1 (utf2)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

