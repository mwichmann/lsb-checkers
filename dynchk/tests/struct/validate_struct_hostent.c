// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <netdb.h>

void validate_struct_hostent(struct hostent * input)
{
	validate_NULL_TYPETYPE(input->h_name);
	validate_NULL_TYPETYPE(input->h_aliases);
	validate_NULL_TYPETYPE(input->h_addrtype);
	validate_NULL_TYPETYPE(input->h_length);
	validate_NULL_TYPETYPE(input->h_addr_list);
}

