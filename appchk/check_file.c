#include <limits.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <libgen.h>
#include <string.h>
#include "check_file.h"
#include "../elfchk/elfchk.h"
#include "symbols.h"

ElfFile * check_file(char *filename, struct tetj_handle *journal,
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

  /* Log binary file size */
  if (stat(filename, &stat_info)==-1)
  {
    snprintf(tmp_string, TMP_STRING_SIZE, "Could not stat file %s", 
             filename);
    perror(tmp_string);
    tetj_add_controller_error(journal, tmp_string);
    return NULL;
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

  /* Do actual analysis */
  if( (elffile = OpenElfFile(filename)) == NULL ) 
  {
    snprintf(tmp_string, TMP_STRING_SIZE, "Unable to open file %s\n", 
             filename);
    fprintf(stderr, tmp_string);
    tetj_add_controller_error(journal, tmp_string);
    return NULL;
  }

  checkElf(elffile, isProgram);
  if (elffile->symhdr==NULL)
  {
    strncpy(tmp_string, 
            "Not a dynamically linked executable.\n"
           "No point checking symbols\n", TMP_STRING_SIZE);
    tetj_testcase_info(journal, tetj_activity_count, 0, 0, 0, 0, tmp_string);
  }
  else
  {
    checksymbols(elffile, journal);

  }
  return elffile;
}

