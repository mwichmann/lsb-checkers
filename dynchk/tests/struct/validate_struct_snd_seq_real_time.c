// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <alsa/seq_event.h>

int validate_struct_snd_seq_real_time(struct snd_seq_real_time  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> tv_sec,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> tv_nsec,name ))
		failure = 1;
return failure;
}

