/*
 *
 * Copyright (c) 2002 The Free Standards Group Inc
 * Copyright (c) 2002 Stuart Anderson (anderson@freestnadards.org)
 *
 */
#include <stdlib.h>
#include <stdio.h>
#include "elfchk.h"

void
dumpbytes(unsigned char *ptr, int size)
{
int i;

for(i=0;i<size;i++) {
	if(i%8 == 0 ) fprintf(stderr,"\n%3.3x ",i);
	fprintf(stderr,"%2.2x ",ptr[i] );
	}
fprintf(stderr,"\n");
}
