// Code generated by gen_tests.pl

#include <netdb.h>

void validate_struct_protoent(struct protoent * input)
{
	validate_NULL_TYPETYPE(input->p_name);
	validate_NULL_TYPETYPE(input->p_aliases);
	validate_NULL_TYPETYPE(input->p_proto);
}

