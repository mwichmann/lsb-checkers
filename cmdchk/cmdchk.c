/*
 * libchk.c 
 *
 * Copyright (c) 2002 The Free Standards Group Inc.
 *
 * Stuart Anderson (anderson@metrolink.com)
 *
 * This is $Revision: 1.1 $
 *
 */

#include <unistd.h>
#include <limits.h>
#include <stdio.h>
#include <libgen.h>
#include <string.h>
#include <stdlib.h>
#include <sys/stat.h>
#include "elfchk.h"
#include "hdr.h"
#include "../tetj/tetj.h"

char *binpaths[] = {
	"/bin/%s",
	"/sbin/%s",
	"/usr/bin/%s",
	"/usr/sbin/%s",
	"/usr/X11R6/bin/%s",
	"/usr/local/bin/%s",
	0 };

/* Real CVS revision number so we can strings it from
   the binary if necessary */
static const char * __attribute((unused)) cmdchk_revision = "$Revision: 1.1 $";


void
check_cmd(char *cmdname, char *cmdpath, struct tetj_handle *journal)
{
  char filename[PATH_MAX+1];
#define TMP_STRING_SIZE (PATH_MAX+20)
  char tmp_string[TMP_STRING_SIZE+1];
  int i;

  tetj_activity_count++;
  tetj_testcase_start(journal, tetj_activity_count, cmdname, "");
  tetj_tp_count = 0;

  tetj_tp_count++;
  snprintf(tmp_string, TMP_STRING_SIZE, "Looking for command %s",
           cmdname);
  tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count, tmp_string);

  if (cmdname[0]!='/')
  {
    /* Find the command */
    for(i=0; binpaths[i]; i++)
    {
      snprintf(filename, PATH_MAX, binpaths[i], cmdname);
      if (access(filename,R_OK|X_OK) == 0) 
      {
      	tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_PASS);
#ifdef VERBOSE
	fprintf(stderr,"Found %s as %s\n", cmdname, filename );
#endif
	break;
      }
	
    }
    if( !binpaths[i] ) {
	fprintf(stderr,"Couldn't find %s\n", cmdname );
      	tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_FAIL);
	}
  }
  else
  {
	/* Presently, this path will never get taken */
    /* absolute path given so we don't do a search through the bin paths */
    strncpy(filename, cmdname, PATH_MAX);
    if (access(filename,R_OK|X_OK) == 0) 
    {
		; 
    }
  }


#if 0
  /*
   * The rest of this should be removed once the TET bits are incorporate
   * intot he code above.
   */

  if(file==NULL) 
  {
    snprintf(tmp_string, TMP_STRING_SIZE, "Unable to find library %s",
             cmdname);
    printf("%s\n", tmp_string);
    tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_FAIL);
    tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count);
    return;
  }
  else
  {
    tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_PASS);
  }

  /* Log file size */
  if (stat(filename, &stat_info)==-1)
  {
    snprintf(tmp_string, TMP_STRING_SIZE, "Could not stat file %s", 
             filename);
    perror(tmp_string);
    tetj_add_controller_error(journal, tmp_string);
    return;
  }
  snprintf(tmp_string, TMP_STRING_SIZE, "FILE_SIZE %lu", stat_info.st_size);
  tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count, 0, 0, 0, 
                     tmp_string);

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
    tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count, 0, 0, 0, 
                       tmp_string2);
  }

  tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count);

  /* Check elf header contents */
  checkElfhdr(file, 0, journal);

  printf("Checking symbols in %s\n", filename );

  for (i=0; entries[i].name; i++) 
  {
    tetj_tp_count++;
    snprintf(tmp_string, TMP_STRING_SIZE, "%s (%s)",
            entries[i].name, entries[i].vername>0 ? entries[i].vername :
            "unversioned");
    tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count, 
                       tmp_string);
    if(check_symbol(file, entries+i, 0))
    {
      tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_PASS);
    }
    else
    {
      /* Failed to match */
      tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_FAIL);
      printf("  Didn't find %s ", entries[i].name);
      if (strlen(entries[i].vername)>0) printf("(%s)", entries[i].vername);
      else printf("(unversioned)");
      printf(" in %s\n", cmdname);
      check_symbol(file, entries+i, 1);
    }
    tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count);
  }
#endif
}

/* Generated function by mkfunclist */
extern void check_cmds(struct tetj_handle *journal); 

int main(int argc, char *argv[])
{
  struct tetj_handle *journal;
  

  if (tetj_start_journal("journal.libchk", &journal, "libchk")!=0)
  {
    perror("Could not open journal file");
    exit(1);
  }

  check_cmds(journal);
  exit(0);
}

