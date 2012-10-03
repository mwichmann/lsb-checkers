// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <tiffio.h>
#undef _TIFFrealloc
static void *(*funcptr) (void * , tmsize_t ) = 0;

extern int __lsb_check_params;
void * _TIFFrealloc (void * arg0 , tmsize_t arg1 )
{
	int reset_flag = __lsb_check_params;
	void * ret_value  ;
	__lsb_output(4, "Invoking wrapper for _TIFFrealloc()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "_TIFFrealloc");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load _TIFFrealloc. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "_TIFFrealloc() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "_TIFFrealloc - arg0 (p)");
		}
		validate_NULL_TYPETYPE(  arg0, "_TIFFrealloc - arg0 (p)");
		validate_NULL_TYPETYPE(  arg1, "_TIFFrealloc - arg1 (s)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

