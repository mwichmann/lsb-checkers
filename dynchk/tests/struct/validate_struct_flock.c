// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <fcntl.h>

void validate_struct_flock(struct flock * input)
{
	validate_NULL_TYPETYPE(input->l_type);
	validate_NULL_TYPETYPE(input->l_whence);
	validate_NULL_TYPETYPE(input->l_start);
	validate_NULL_TYPETYPE(input->l_len);
	validate_NULL_TYPETYPE(input->l_pid);
}

