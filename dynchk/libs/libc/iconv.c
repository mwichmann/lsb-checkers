// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <iconv.h>
#include <stddef.h>
#undef iconv
static size_t(*funcptr) (iconv_t , char * * , size_t * , char * * , size_t * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
size_t iconv (iconv_t arg0 , char * * arg1 , size_t * arg2 , char * * arg3 , size_t * arg4 )
{
	int reset_flag = __lsb_check_params;
	size_t ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "iconv");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "iconv()");
		validate_NULL_TYPETYPE(  arg0, "iconv - arg0");
	validate_Rdaddress( arg1, "iconv - arg1");
	validate_Rdaddress(* arg1, "iconv - arg1");
		validate_NULL_TYPETYPE(  arg1, "iconv - arg1");
	validate_Rdaddress( arg2, "iconv - arg2");
		validate_NULL_TYPETYPE(  arg2, "iconv - arg2");
	validate_Rdaddress( arg3, "iconv - arg3");
	validate_Rdaddress(* arg3, "iconv - arg3");
		validate_NULL_TYPETYPE(  arg3, "iconv - arg3");
	validate_Rdaddress( arg4, "iconv - arg4");
		validate_NULL_TYPETYPE(  arg4, "iconv - arg4");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

