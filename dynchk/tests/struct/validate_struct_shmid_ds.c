// Code generated by gen_tests.pl

#include <sys/shm.h>

void validate_struct_shmid_ds(struct shmid_ds * input)
{
	validate_struct_ipc_perm(input->shm_perm);
	validate_NULL_TYPETYPE(input->shm_segsz);
	validate_NULL_TYPETYPE(input->shm_atime);
	validate_NULL_TYPETYPE(input->__unused1);
	validate_NULL_TYPETYPE(input->shm_dtime);
	validate_NULL_TYPETYPE(input->__unused2);
	validate_NULL_TYPETYPE(input->shm_ctime);
	validate_NULL_TYPETYPE(input->__unused3);
	validate_NULL_TYPETYPE(input->shm_cpid);
	validate_NULL_TYPETYPE(input->shm_lpid);
	validate_NULL_TYPETYPE(input->shm_nattch);
	validate_NULL_TYPETYPE(input->__unused4);
	validate_NULL_TYPETYPE(input->__unused5);
}

