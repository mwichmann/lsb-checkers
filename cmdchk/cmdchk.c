/*
 * libchk.c 
 *
 * Copyright (c) 2002 The Free Standards Group Inc.
 *
 * Stuart Anderson (anderson@metrolink.com)
 *
 * This is $Revision: 1.5 $
 *
 * $Log: cmdchk.c,v $
 * Revision 1.5  2002/07/17 07:20:18  cyeoh
 * remove hdr.h header include as not needed
 *
 * Revision 1.4  2002/07/17 07:19:20  cyeoh
 * remove elfchk header include as not needed
 *
 * Revision 1.3  2002/07/17 04:58:30  cyeoh
 * Adds version tag to journal file
 *
 * Revision 1.2  2002/07/16 08:31:54  cyeoh
 * Renames journal file to journal.lsbcmdchk
 * Removes /usr/local/bin/ from search path as runtimes shouldn't
 * be placing binaries here.
 * Removal of dead code
 *
 *
 */

#include <unistd.h>
#include <limits.h>
#include <stdio.h>
#include <libgen.h>
#include <string.h>
#include <stdlib.h>
#include <sys/stat.h>
#include "../tetj/tetj.h"

char *binpaths[] = {
	"/bin/%s",
	"/sbin/%s",
	"/usr/bin/%s",
	"/usr/sbin/%s",
	"/usr/X11R6/bin/%s",
	0 };

/* Real CVS revision number so we can strings it from
   the binary if necessary */
static const char * __attribute((unused)) cmdchk_revision = "$Revision: 1.5 $";


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
}

/* Generated function by mkfunclist */
extern void check_cmds(struct tetj_handle *journal); 

int main(int argc, char *argv[])
{
  struct tetj_handle *journal;
  char tmp_string[TMP_STRING_SIZE+1];
  
  if (tetj_start_journal("journal.lsbcmdchk", &journal, "lsbcmdchk")!=0)
  {
    perror("Could not open journal file");
    exit(1);
  }

  snprintf(tmp_string, TMP_STRING_SIZE, "VSX_NAME=lsbcmdchk " LSBCMDCHK_VERSION);
  tetj_add_config(journal, tmp_string);

  check_cmds(journal);
  exit(0);
}

