#if defined(__i386__)
// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <math.h>
#undef __fpclassifyl
static int(*funcptr) (long double ) = 0;

extern int __lsb_check_params;
int __fpclassifyl (long double arg0 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "__fpclassifyl");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "__fpclassifyl()");
		validate_NULL_TYPETYPE(  arg0, "__fpclassifyl - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

#endif /*defined(__i386__)*/
#if defined(__ia64__)
// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <math.h>
#undef __fpclassifyl
static int(*funcptr) (long double ) = 0;

extern int __lsb_check_params;
int __fpclassifyl (long double arg0 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "__fpclassifyl");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "__fpclassifyl()");
		validate_NULL_TYPETYPE(  arg0, "__fpclassifyl - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

#endif /*defined(__ia64__)*/
#if defined(__x86_64__)
// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <math.h>
#undef __fpclassifyl
static int(*funcptr) (long double ) = 0;

extern int __lsb_check_params;
int __fpclassifyl (long double arg0 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "__fpclassifyl");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "__fpclassifyl()");
		validate_NULL_TYPETYPE(  arg0, "__fpclassifyl - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

#endif /*defined(__x86_64__)*/
