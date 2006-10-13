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
#include "output.h"
#include "../rpmchk/md5.h"

MD5_CTX md5ctx;

int check_file(ElfFile *elffile, Elf_type fileType)
{
#define TMP_STRING_SIZE (PATH_MAX+20)
  char tmp_string[TMP_STRING_SIZE+1];
  char tmp_string2[TMP_STRING_SIZE+1];
  unsigned char md5sum[16];
  struct stat stat_info;
  int i;
  int elfType = ELF_UNKNOWN;
  
  /* Log binary file size */
  PURPOSE_START(tetj_activity_count, ++tetj_tp_count, "check file details");
  if (fstat(elffile->fd, &stat_info)==-1) {
    snprintf(tmp_string, TMP_STRING_SIZE, "Could not stat file");
    perror(tmp_string);
    TESTCASE_INFO(tetj_activity_count, tetj_tp_count, 0, 0, 0,
                  tmp_string);
    RESULT(tetj_activity_count, tetj_tp_count, TETJ_FAIL);
    PURPOSE_END(tetj_activity_count, tetj_tp_count);
    return elfType;
  }
  snprintf(tmp_string, TMP_STRING_SIZE, "FILE_SIZE %lu", stat_info.st_size);
  TESTCASE_INFO(tetj_activity_count, tetj_tp_count, 0, 0, 0, tmp_string);

  /* md5sum of binary */
  MD5Init(&md5ctx);
  MD5Update(&md5ctx, elffile->addr, elffile->size);
  MD5Final(md5sum, &md5ctx);
  for (i = 0; i < 16; i++) {
	  sprintf(&(tmp_string[i*2]),"%2.2x", md5sum[i]);
  }

  tmp_string[32] = 0;
  snprintf(tmp_string2, TMP_STRING_SIZE, "BINARY_MD5SUM=%s", tmp_string);
  TESTCASE_INFO(tetj_activity_count, tetj_tp_count, 0, 0, 0, tmp_string2);
  RESULT(tetj_activity_count, tetj_tp_count, TETJ_PASS);
  PURPOSE_END(tetj_activity_count, tetj_tp_count);

  elfType = checkElf(elffile, fileType, journal);
  /* FIXME
  if (elffile->symhdr==NULL)
  {
    strncpy(tmp_string, 
            "Not a dynamically linked executable.\n"
           "No point checking symbols\n", TMP_STRING_SIZE);
    tetj_testcase_info(journal, tetj_activity_count, 0, 0, 0, 0, tmp_string);
    fprintf(stderr, tmp_string);
  }
  */
  return elfType;
}

void check_lib(ElfFile *elffile, Elf_type fileType, int modules)
{
  int i;
  Elf_Shdr	*hdr1;

  /* Check all headers in extra lib */
  checkElfhdr(elffile, fileType, journal);

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
  checksymbols(elffile, modules);

  return;
}
