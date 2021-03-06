// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <nss3/keythi.h>

int validate_struct_SECKEYPrivateKeyStr(struct SECKEYPrivateKeyStr  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> arena,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> keyType,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> pkcs11Slot,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> pkcs11ID,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> pkcs11IsTemp,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> wincx,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> staticflags,name ))
		failure = 1;
return failure;
}

