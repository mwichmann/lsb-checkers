// Code generated by gen_tests.pl

#include <pthread.h>

void validate_struct__pthread_fastlock(struct _pthread_fastlock * input)
{
	validate_NULL_TYPETYPE(input->__status);
	validate_NULL_TYPETYPE(input->__spinlock);
}

