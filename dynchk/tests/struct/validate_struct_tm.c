// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <time.h>

void validate_struct_tm(struct tm  * input, char *name)
{
	validate_NULL_TYPETYPE(input->tm_sec,name );
	validate_NULL_TYPETYPE(input->tm_min,name );
	validate_NULL_TYPETYPE(input->tm_hour,name );
	validate_NULL_TYPETYPE(input->tm_mday,name );
	validate_NULL_TYPETYPE(input->tm_mon,name );
	validate_NULL_TYPETYPE(input->tm_year,name );
	validate_NULL_TYPETYPE(input->tm_wday,name );
	validate_NULL_TYPETYPE(input->tm_yday,name );
	validate_NULL_TYPETYPE(input->tm_isdst,name );
	validate_NULL_TYPETYPE(input->tm_gmtoff,name );
	validate_NULL_TYPETYPE(input->tm_zone,name );
}

