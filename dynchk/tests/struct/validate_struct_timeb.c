// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <sys/timeb.h>

void validate_struct_timeb(struct timeb  * input, char *name)
{
	validate_NULL_TYPETYPE(input->time,name );
	validate_NULL_TYPETYPE(input->millitm,name );
	validate_NULL_TYPETYPE(input->timezone,name );
	validate_NULL_TYPETYPE(input->dstflag,name );
}

