// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <rpc/rpc_msg.h>

void validate_struct_rejected_reply(struct rejected_reply * input)
{
	validate_NULL_TYPETYPE(input->enum reject_stat);
	validate_NULL_TYPETYPE(input->ru.RJ_versions.unsigned long);
	validate_NULL_TYPETYPE(input->ru.RJ_versions.unsigned long);
	validate_NULL_TYPETYPE(input->ru.enum auth_stat);
}

