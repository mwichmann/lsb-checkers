// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/shm.h>
#undef shmctl
static int(*funcptr) (int , int , struct shmid_ds * ) = 0;

int shmctl (int arg0 , int arg1 , struct shmid_ds * arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "shmctl");
	validate_NULL_TYPETYPE(  arg0, "shmctl - arg0");
	validate_NULL_TYPETYPE(  arg1, "shmctl - arg1");
	validate_Rdaddress( arg2, "shmctl - arg2");
	validate_NULL_TYPETYPE(  arg2, "shmctl - arg2");
	return funcptr(arg0, arg1, arg2);
}

int __lsb_shmctl (int arg0 , int arg1 , struct shmid_ds * arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "shmctl");
	return funcptr(arg0, arg1, arg2);
}

