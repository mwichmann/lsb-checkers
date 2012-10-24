// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <ffi.h>
#undef ffi_prep_java_raw_closure
static ffi_status(*funcptr) (struct ffi_java_raw_closure * , struct ffi_cif * , void(* )(struct ffi_cif *, void *, ffi_java_raw *, void *), void * ) = 0;

extern int __lsb_check_params;
ffi_status ffi_prep_java_raw_closure (struct ffi_java_raw_closure * arg0 , struct ffi_cif * arg1 , void(* arg2 )(struct ffi_cif *, void *, ffi_java_raw *, void *), void * arg3 )
{
	int reset_flag = __lsb_check_params;
	ffi_status ret_value  ;
	__lsb_output(4, "Invoking wrapper for ffi_prep_java_raw_closure()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ffi_prep_java_raw_closure");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load ffi_prep_java_raw_closure. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "ffi_prep_java_raw_closure() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "ffi_prep_java_raw_closure - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "ffi_prep_java_raw_closure - arg0");
		if( arg1 ) {
		validate_RWaddress( arg1, "ffi_prep_java_raw_closure - arg1 (cif)");
		}
		validate_NULL_TYPETYPE(  arg1, "ffi_prep_java_raw_closure - arg1 (cif)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "ffi_prep_java_raw_closure - arg2 (fun)");
		}
		validate_NULL_TYPETYPE(  arg2, "ffi_prep_java_raw_closure - arg2 (fun)");
		if( arg3 ) {
		validate_RWaddress( arg3, "ffi_prep_java_raw_closure - arg3 (user_data)");
		}
		validate_NULL_TYPETYPE(  arg3, "ffi_prep_java_raw_closure - arg3 (user_data)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

