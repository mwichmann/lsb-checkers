// Code generated by gen_tests.pl

#include <sys/ipc.h>

void validate_struct_ipc_perm(struct ipc_perm * input)
{
	validate_NULL_TYPETYPE(input->__key);
	validate_NULL_TYPETYPE(input->uid);
	validate_NULL_TYPETYPE(input->gid);
	validate_NULL_TYPETYPE(input->cuid);
	validate_NULL_TYPETYPE(input->cgid);
	validate_NULL_TYPETYPE(input->mode);
	validate_NULL_TYPETYPE(input->__pad1);
	validate_NULL_TYPETYPE(input->__seq);
	validate_NULL_TYPETYPE(input->__pad2);
	validate_NULL_TYPETYPE(input->__unused1);
	validate_NULL_TYPETYPE(input->__unused2);
}

