// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <utmp.h>

void validate_struct_lastlog(struct lastlog * input)
{
	validate_NULL_TYPETYPE(input->time_t);
	validate_NULL_TYPETYPE(input->char);
	validate_NULL_TYPETYPE(input->char);
}

