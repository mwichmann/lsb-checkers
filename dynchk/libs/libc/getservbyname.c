// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <netdb.h>
#undef getservbyname
static struct servent *(*funcptr) (const char * , const char * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
struct servent * getservbyname (const char * arg0 , const char * arg1 )
{
	int reset_flag = __lsb_check_params;
	struct servent * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getservbyname");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "getservbyname()");
	validate_Rdaddress( arg0, "getservbyname - arg0");
		validate_NULL_TYPETYPE(  arg0, "getservbyname - arg0");
	validate_Rdaddress( arg1, "getservbyname - arg1");
		validate_NULL_TYPETYPE(  arg1, "getservbyname - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

