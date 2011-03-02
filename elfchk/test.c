/*
 *
 * Copyright (c) 2001-2002 The Free Standards Group Inc
 * Copyright (c) 2000-2002 Stuart Anderson (anderson@freestandards.org)
 * Copyright (c) 2002 Chris Yeoh (yeohc@au.ibm.com)
 *
 */
#include <stdlib.h>
#include <stdio.h>
#include "elfchk.h"

#ifdef PIE
#define NAME "./testpie"
#else
#define NAME "./test"
#endif

int main(int argc, char *argv[])
{
    ElfFile *elffile;

    if ((elffile = OpenElfFile(NAME)) == NULL) {
	fprintf(stderr, "%s: Unable to open file %s\n", argv[0], NAME);
	exit(2);
    }

    checkElf(elffile, 1, NULL);
    exit(0);
}
