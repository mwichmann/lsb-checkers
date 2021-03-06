// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#include <time.h>
#undef g_date_to_struct_tm
static void(*funcptr) (const GDate * , struct tm * ) = 0;

extern int __lsb_check_params;
void g_date_to_struct_tm (const GDate * arg0 , struct tm * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_date_to_struct_tm()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_date_to_struct_tm");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_date_to_struct_tm. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_date_to_struct_tm() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "g_date_to_struct_tm - arg0 (date)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_date_to_struct_tm - arg0 (date)");
		if( arg1 ) {
		validate_RWaddress( arg1, "g_date_to_struct_tm - arg1 (tm)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_date_to_struct_tm - arg1 (tm)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

