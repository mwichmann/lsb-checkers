#include <limits.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <libgen.h>
#include <string.h>
#include "check_archive.h"
#include "symbols.h"
#include "ar.h"

static unsigned int membersize=0;

ElfFile * open_archive(char *filename, struct tetj_handle *journal,
                int isProgram)
{
#define TMP_STRING_SIZE (PATH_MAX+20)
  char tmp_string[TMP_STRING_SIZE+1];
  char tmp_string2[TMP_STRING_SIZE+1];
  struct stat stat_info;
  FILE *md5_proc;
  int i;
  ElfFile	*elffile;
  
  tetj_tp_count = 0;
  tetj_testcase_start(journal, ++tetj_activity_count, filename, "");

  tetj_tp_count++;
  snprintf(tmp_string, TMP_STRING_SIZE, "Looking for file %s", filename);
  tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count, tmp_string);

  /* Open ELF file for analysis */
  if( (elffile = OpenFile(filename)) == NULL ) 
  {
    snprintf(tmp_string, TMP_STRING_SIZE, 
             "Unable to open file %s as ELF binary\n", filename);
    fprintf(stderr, tmp_string);
    tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_FAIL);
    tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count);
    exit(1);
  }
  else
  {
    tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_PASS);
  }

  elffile->araddr=elffile->addr;
  membersize=0;

  /* Log binary file size */
  if (stat(filename, &stat_info)==-1)
  {
    snprintf(tmp_string, TMP_STRING_SIZE, "Could not stat file %s", 
             filename);
    perror(tmp_string);
    tetj_add_controller_error(journal, tmp_string);
    exit(1);
  }
  snprintf(tmp_string, TMP_STRING_SIZE, "FILE_SIZE %lu", stat_info.st_size);
  tetj_testcase_info(journal, tetj_activity_count, 0, 0, 0, 0, tmp_string);

  /* md5sum of binary */
  snprintf(tmp_string, TMP_STRING_SIZE, "md5sum %s", filename);
  md5_proc = popen(tmp_string, "r");
  i=0;
  while (i<32 && !feof(md5_proc))
  {
    i += fread(tmp_string+i, 1, 32-i, md5_proc);
  }
  if (pclose(md5_proc)==-1)
  {
    tetj_add_controller_error(journal, "Failed to calculate md5sum of binary");
  }
  else
  {
    tmp_string[32] = 0;
    snprintf(tmp_string2, TMP_STRING_SIZE, "BINARY_MD5SUM=%s", tmp_string);
    tetj_testcase_info(journal, tetj_activity_count, 0, 0, 0, 0, tmp_string2);
  }
  tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count);

  if (strncmp((const char *)elffile->addr, ARMAG, SARMAG) != 0) {
        snprintf(tmp_string, TMP_STRING_SIZE, 
             "File %s is not an archive\n", filename);
        fprintf(stderr, tmp_string);
        tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_FAIL);
        tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count);
	exit(1);
  }
  elffile->addr+=SARMAG;

  return elffile;
}

int next_member( ElfFile *elffile, struct tetj_handle *journal)
{
    struct ar_hdr *hdr;
    unsigned int offset;

    if( membersize & 0x01 )
	    membersize++; /* Put it on an even boundary */
    elffile->addr+=membersize; /* Skip over the archive member */

    if( (elffile->addr-elffile->araddr) >= elffile->size ) return 0;

    hdr=(struct ar_hdr *)elffile->addr;
    offset = sizeof(struct ar_hdr);

#ifdef DEBUGAR
    printf("Looking at archive member '%12.12s' starting at offset %d\n",
		    hdr->ar_name, elffile->addr-elffile->araddr);
#endif

    sscanf(hdr->ar_size, "%u", &membersize);

    /* Check for a Symbol Table */
    if ((hdr->ar_name[0] == '/' && hdr->ar_name[1] == ' ') ||
	    strncmp(hdr->ar_name, "__.SYMDEF", 9) == 0) {
	    /* If the file name is NULL, then it is a symbol table */
#ifdef DEBUGAR
	    printf("Symbol Table Member '%16.16s', size %d, offset %d\n",
		   hdr->ar_name, membersize, offset);
	    printf("Symbol table size %d\n", membersize);
#endif
	    offset += membersize;
	    membersize=0;	/* Don't want this added again next time here */
	    if (offset & 0x1)	/* odd value */
		offset += 1; /* Make it even */
	    elffile->addr += offset;
	    return next_member( elffile, journal );
	}

    /* Check for a String Table */
    if (hdr->ar_name[0] == '/' && hdr->ar_name[1] == '/') {
	    /* If the file name is /, then it is a string table */
#ifdef DEBUGAR
	    printf("String Table Member '%16.16s', size %d, offset %d\n",
		   hdr->ar_name, membersize, offset);
	    printf("String table size %d\n", membersize);
#endif
	    offset += membersize;
	    membersize=0;	/* Don't want this added again next time here */
	    if (offset & 0x1)	/* odd value */
		offset += 1; /* Make it even */
	    elffile->addr += offset;
	    return next_member( elffile, journal );
	}

    elffile->addr += offset;
    /* At this point, we think we are now pointing to an ELF object */

    checkElfhdr(elffile, 0, journal);

    return 1;
}

void check_lib(char *filename, struct tetj_handle *journal, int isProgram)
{
  int i;
  char tmp_string[TMP_STRING_SIZE+1];
  ElfFile	*elffile;
  Elf_Shdr	*hdr1;
  Elf_Ehdr	*phdr;

  /* Open ELF file for analysis */
  if( (elffile = open_archive(filename, journal, isProgram)) == NULL ) 
  {
    snprintf(tmp_string, TMP_STRING_SIZE, 
             "Unable to open file %s as ELF binary\n", filename);
    fprintf(stderr, tmp_string);
    exit(1);
  }

  if (elffile) 
  {
    while(next_member(elffile, journal) ) {
      /* Search through program headers for the one with the dynamic
         symbols in it. */
      for(i=0;i<elffile->numsh;i++)
      {
        hdr1=&(elffile->saddr[i]);
	phdr=(Elf_Ehdr *)elffile->addr;
#if 0
	printf("Section[%2.2d] %d %s\n", i, hdr1->sh_link,
			ElfGetStringIndex(elffile, hdr1->sh_name,
				   phdr->e_shstrndx));
#endif
    
        if(hdr1->sh_type == SHT_SYMTAB)
        {
          elffile->dynsymhdr=hdr1;
        }
      }
      /* Check dynamic symbols needed by extra lib */
      checksymbols(elffile, journal);
    }
  }


}
