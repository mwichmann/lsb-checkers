// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <search.h>
#undef remque
static void(*funcptr) (void * ) = 0;

void remque (void * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "remque");
	validate_Rdaddress( arg0, "remque - arg0");
	validate_NULL_TYPETYPE(  arg0, "remque - arg0");
	funcptr(arg0);
}

void __lsb_remque (void * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "remque");
	funcptr(arg0);
}

