/*
 *
 * Copyright (c) 2001-2002 The Free Standards Group Inc
 * Copyright (c) 2000-2002 Stuart Anderson (anderson@freestnadards.org)
 * Copyright (c) 2002 Chris Yeoh (yeohc@au.ibm.com)
 *
 */
#include <stdio.h>
#include <string.h>
#include "elfchk.h"
#include "proghdr.h"
#include "../tetj/tetj.h"

typedef int (*ProgHeadFcn)(ElfFile *, Elf32_Phdr *, struct tetj_handle *);

typedef struct	{
	int		type;
	char		*name;
	ProgHeadFcn	func;
	} PhTypeFuncRec;

PhTypeFuncRec	Headers[] = {
	{PT_NULL,	"PT_NULL",	checkPT_NULL},
	{PT_LOAD,	"PT_LOAD",	checkPT_LOAD},
	{PT_DYNAMIC,	"PT_DYNAMIC",	checkPT_DYNAMIC},
	{PT_INTERP,	"PT_INTERP",	checkPT_INTERP},
	{PT_NOTE,	"PT_NOTE",	checkPT_NOTE},
	{PT_SHLIB,	"PT_SHLIB",	checkPT_SHLIB},
	{PT_PHDR,	"PT_PHDR",	checkPT_PHDR},
	{PT_NUM,	"PT_NUM",	checkPT_NUM},
	};

extern char *ProgInterp;

int
checkPT_NULL(ElfFile *file, Elf32_Phdr *hdr, struct tetj_handle *journal)
{
return 1;
}

int
checkPT_LOAD(ElfFile *file, Elf32_Phdr *hdr, struct tetj_handle *journal)
{
return 1;
}

int
checkPT_DYNAMIC(ElfFile *file, Elf32_Phdr *hdr, struct tetj_handle *journal)
{
return 1;
}

int
checkPT_INTERP(ElfFile *file, Elf32_Phdr *hdr, struct tetj_handle *journal)
{
  tetj_tp_count++;

  tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count, 
                     "Check program interpreter");

  if( !strcmp(file->addr+hdr->p_offset, ProgInterp ) )
  {
    tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_PASS);
    tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count);
    return 1;
  }

  tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_FAIL);
  tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count);
  fprintf(stderr,"Incorrect program interpreter: %s\n", 
          file->addr+hdr->p_offset);
  return 0;
}

int
checkPT_NOTE(ElfFile *file, Elf32_Phdr *hdr, struct tetj_handle *journal)
{
return 1;
}

int
checkPT_SHLIB(ElfFile *file, Elf32_Phdr *hdr, struct tetj_handle *journal)
{
return 1;
}

int
checkPT_PHDR(ElfFile *file, Elf32_Phdr *hdr, struct tetj_handle *journal)
{
return 1;
}

int
checkPT_NUM(ElfFile *file, Elf32_Phdr *hdr, struct tetj_handle *journal)
{
return 1;
}

void
checkElfproghdr(int index, ElfFile *file, struct tetj_handle *journal)
{
Elf32_Phdr *hdr;

hdr=&(file->paddr[index]);

if( !hdr )
	return;

if( hdr->p_type > PT_NUM ) {
	fprintf(stderr,"Not checking Program Headers with type %x\n",
		hdr->p_type);
	return;
	}

#ifdef VERBOSE
fprintf( stderr, "Header[%2d] %-12.12s\n",
			index, Headers[hdr->p_type].name );
#endif /* VERBOSE */

if( !Headers[hdr->p_type].func(file,hdr,journal))
	{
	fprintf( stderr, "Header[%2d] %-12.12s Failed\n",
			index, Headers[hdr->p_type].name );
	}
}
