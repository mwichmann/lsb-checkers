// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <rpc/auth.h>

void validate_struct_AUTH(struct AUTH * input)
{
	validate_struct_opaque_auth(input->ah_cred);
	validate_struct_opaque_auth(input->ah_verf);
	validate_union_des_block(input->ah_key);
	validate_NULL_TYPETYPE(input->ah_ops);
	validate_NULL_TYPETYPE(input->ah_private);
}

