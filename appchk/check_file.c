#include <limits.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <libgen.h>
#include <string.h>
#include "check_file.h"
#include "symbols.h"

void check_file(char *filename, struct tetj_handle *journal,
                Elf_type isLib)
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
  if( (elffile = OpenElfFile(filename)) == NULL ) 
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

  /* Log binary file size */
  if (stat(filename, &stat_info)==-1)
  {
    snprintf(tmp_string, TMP_STRING_SIZE, "Could not stat file %s", 
             filename);
    perror(tmp_string);
    tetj_add_controller_error(journal, tmp_string);
	free(elffile);
    exit(1);
  }
  snprintf(tmp_string, TMP_STRING_SIZE, "FILE_SIZE %lu", stat_info.st_size);
  tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count, 0, 0, 0, tmp_string);

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
    tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count, 0, 0, 0, tmp_string2);
  }
  tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count);

  checkElf(elffile, isLib, journal);
  if (elffile->symhdr==NULL)
  {
    strncpy(tmp_string, 
            "Not a dynamically linked executable.\n"
           "No point checking symbols\n", TMP_STRING_SIZE);
    tetj_testcase_info(journal, tetj_activity_count, 0, 0, 0, 0, tmp_string);
    fprintf(stderr, tmp_string);
  }
  else
  {
      /* Only check symbols if file is a program and not one of the
         extra libs provided on the command line */
      if (isLib == ELF_IS_EXEC) 
      {
        checksymbols(elffile, journal);
      }
  
  }
  free (elffile);
  return ;
}

void check_lib(char *filename, struct tetj_handle *journal, Elf_type isLib)
{
  int i;
  char tmp_string[TMP_STRING_SIZE+1];
  ElfFile	*elffile;
  Elf_Shdr	*hdr1;

  /* Open ELF file for analysis */
  if( (elffile = OpenElfFile(filename)) == NULL ) 
  {
    snprintf(tmp_string, TMP_STRING_SIZE, 
             "Unable to open file %s as ELF binary\n", filename);
    fprintf(stderr, tmp_string);
    exit(1);
  }

  /* Check all headers in extra lib */
  checkElfhdr(elffile, isLib, journal);

  /* Search through program headers for the one with the dynamic
     symbols in it. */
  for(i=0;i<elffile->numph;i++)
  {
    hdr1=&(elffile->saddr[i]);

    if(hdr1->sh_type == SHT_DYNSYM)
    {
      elffile->dynsymhdr=hdr1;
    }
  }

  /* Check dynamic symbols needed by extra lib */
  checksymbols(elffile, journal);

}
