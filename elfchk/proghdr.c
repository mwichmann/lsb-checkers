/*
 *
 * Copyright (c) 2001-2002 The Free Standards Group Inc
 * Copyright (c) 2000-2002 Stuart Anderson (anderson@freestandards.org)
 * Copyright (c) 2002 Chris Yeoh (yeohc@au.ibm.com)
 *
 */
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include "elfchk.h"
#include "proghdr.h"
#include "../tetj/tetj.h"

typedef int (*ProgHeadFcn)(ElfFile *, Elf_Phdr *, struct tetj_handle *);

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
	{PT_TLS,	"PT_TLS",	checkPT_TLS},
	{PT_GNU_EH_FRAME,"PT_GNU_EH_FRAME",checkPT_GNU_EH_FRAME},
	};

static int numProgHeaders=sizeof(Headers)/sizeof(PhTypeFuncRec);

/*
 * Return convention: -1 is failed, 0 is not-tested, 1 is passed
 */

int
checkPT_NULL(ElfFile *file, Elf_Phdr *hdr, struct tetj_handle *journal)
{
return 0;
}

int
checkPT_LOAD(ElfFile *file, Elf_Phdr *hdr, struct tetj_handle *journal)
{
return 0;
}

int
checkPT_DYNAMIC(ElfFile *file, Elf_Phdr *hdr, struct tetj_handle *journal)
{
return 0;
}

int
checkPT_INTERP(ElfFile *file, Elf_Phdr *hdr, struct tetj_handle *journal)
{
#define TMP_STRING_SIZE (PATH_MAX+60)
  char tmp_string[TMP_STRING_SIZE+1];
	
  tetj_tp_count++;

  tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count, 
                     "Check program interpreter");

  if( !strcmp(file->addr+hdr->p_offset, ProgInterp ) )
  {
    tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_PASS);
    tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count);
    return 1;
  }

  snprintf(tmp_string, TMP_STRING_SIZE, "Incorrect program interpreter: %s", 
          file->addr+hdr->p_offset);
	tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
										 0, 0, 0, tmp_string);
	fprintf(stderr, "%s\n", tmp_string);
  tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_FAIL);
  tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count);
  return -1;
}

int
checkPT_NOTE(ElfFile *file, Elf_Phdr *hdr, struct tetj_handle *journal)
{
return check_NOTE(file, file->addr+hdr->p_offset, hdr->p_filesz, journal);
}

int
checkPT_SHLIB(ElfFile *file, Elf_Phdr *hdr, struct tetj_handle *journal)
{
return 0;
}

int
checkPT_PHDR(ElfFile *file, Elf_Phdr *hdr, struct tetj_handle *journal)
{
/* HEader should point to the header table */
return 0;
}

int
checkPT_TLS(ElfFile *file, Elf_Phdr *hdr, struct tetj_handle *journal)
{
return 0;
}

int
checkPT_GNU_EH_FRAME(ElfFile *file, Elf_Phdr *hdr, struct tetj_handle *journal)
{
return 0;
}

void
checkElfproghdr(int index, ElfFile *file, struct tetj_handle *journal)
{
int i;
Elf_Phdr *hdr;

hdr=&(file->paddr[index]);

if( !hdr )
	return;

if( elfchk_debug&DEBUG_PROGRAM_HEADERS )
fprintf( stderr, "Header[%2d] type %x\n",
			index, hdr->p_type );

for(i=0;i<numProgHeaders;i++){
	if( Headers[i].type == hdr->p_type ) {
		switch( Headers[i].func(file,hdr,journal)) {
		case 1: /* Pass */
			break;
		case 0: /* Not checked */
			if( elfchk_debug&DEBUG_PROGRAM_HEADERS )
			fprintf( stderr, "Header[%2d] %-12.12s Not checked\n",
				index, Headers[i].name );
			break;
		case -1: /* Fail */
			fprintf( stderr, "Header[%2d] %-12.12s Failed\n",
				index, Headers[i].name );
			break;
			}
		break;  /* Found it. Don't need to look any further */
		}
	}
if( i == numProgHeaders ) {
	fprintf( stderr, "Header[%2d] type %x Not checked\n",
				index, hdr->p_type );
	}
}
