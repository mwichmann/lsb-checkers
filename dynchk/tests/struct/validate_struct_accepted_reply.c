// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <rpc/rpc_msg.h>

void validate_struct_accepted_reply(struct accepted_reply  * input, char *name)
{
	validate_struct_opaque_auth( &(input->ar_verf),name );
	validate_NULL_TYPETYPE(input->ar_stat,name );
	validate_NULL_TYPETYPE(input->ru.AR_versions.low,name );
	validate_NULL_TYPETYPE(input->ru.AR_versions.high,name );
	validate_NULL_TYPETYPE(input->ru.AR_results.where,name );
	validate_NULL_TYPETYPE(input->ru.AR_results.proc,name );
}

