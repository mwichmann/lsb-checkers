// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_sequence_lookup_iter
static GSequenceIter *(*funcptr) (GSequence * , void * , GSequenceIterCompareFunc , void * ) = 0;

extern int __lsb_check_params;
GSequenceIter * g_sequence_lookup_iter (GSequence * arg0 , void * arg1 , GSequenceIterCompareFunc arg2 , void * arg3 )
{
	int reset_flag = __lsb_check_params;
	GSequenceIter * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_sequence_lookup_iter()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_sequence_lookup_iter");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_sequence_lookup_iter. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_sequence_lookup_iter() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_sequence_lookup_iter - arg0 (seq)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_sequence_lookup_iter - arg0 (seq)");
		if( arg1 ) {
		validate_RWaddress( arg1, "g_sequence_lookup_iter - arg1 (data)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_sequence_lookup_iter - arg1 (data)");
		validate_NULL_TYPETYPE(  arg2, "g_sequence_lookup_iter - arg2 (iter_cmp)");
		if( arg3 ) {
		validate_RWaddress( arg3, "g_sequence_lookup_iter - arg3 (cmp_data)");
		}
		validate_NULL_TYPETYPE(  arg3, "g_sequence_lookup_iter - arg3 (cmp_data)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

