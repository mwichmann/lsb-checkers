// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/hash.h>
#include <libxml2/libxml/xmlstring.h>
#undef xmlHashAddEntry
static int(*funcptr) (xmlHashTablePtr , const xmlChar * , void * ) = 0;

extern int __lsb_check_params;
int xmlHashAddEntry (xmlHashTablePtr arg0 , const xmlChar * arg1 , void * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlHashAddEntry()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlHashAddEntry", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlHashAddEntry. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlHashAddEntry() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlHashAddEntry - arg0 (table)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "xmlHashAddEntry - arg1 (name)");
		}
		validate_NULL_TYPETYPE(  arg1, "xmlHashAddEntry - arg1 (name)");
		if( arg2 ) {
		validate_RWaddress( arg2, "xmlHashAddEntry - arg2 (userdata)");
		}
		validate_NULL_TYPETYPE(  arg2, "xmlHashAddEntry - arg2 (userdata)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}
