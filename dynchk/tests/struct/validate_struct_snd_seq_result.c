// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <alsa/seq_event.h>

int validate_struct_snd_seq_result(struct snd_seq_result  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> event,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> result,name ))
		failure = 1;
return failure;
}

