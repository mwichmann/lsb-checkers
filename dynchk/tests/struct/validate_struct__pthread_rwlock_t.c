// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <pthread.h>

void validate_struct__pthread_rwlock_t(struct _pthread_rwlock_t * input)
{
	validate_struct__pthread_fastlock(input->__rw_lock);
	validate_NULL_TYPETYPE(input->__rw_readers);
	validate_NULL_TYPETYPE(input->__rw_writer);
	validate_NULL_TYPETYPE(input->__rw_read_waiting);
	validate_NULL_TYPETYPE(input->__rw_write_waiting);
	validate_NULL_TYPETYPE(input->__rw_kind);
	validate_NULL_TYPETYPE(input->__rw_pshared);
}

