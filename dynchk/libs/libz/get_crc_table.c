// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef get_crc_table
static const uLongf *(*funcptr) () = 0;

const uLongf * get_crc_table ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "get_crc_table");
	return funcptr();
}

const uLongf * lsb_get_crc_table ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "get_crc_table");
	return funcptr();
}

