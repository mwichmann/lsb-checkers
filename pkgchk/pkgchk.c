/* 
 *
 * Copyright (c) 2002-2005 The Free Standards Group Inc
 * Copyright (c) 2002-2005 Stuart Anderson (anderson@freestandards.org)
 *
 */
#include <stdio.h>
#include <getopt.h>
#include <string.h>
#include <stdlib.h>
#include <getopt.h>
#include <libgen.h>
#include <limits.h>
#include "../tetj/tetj.h"
#include "rpmchk.h"

void usage(char *progname)
{
  fprintf(stderr,"Usage: %s rpmname\n",progname);
  exit(1);
}

char *
concat_string(char *input, char *addition)
{
  char *tmp;
  if (input)
  {
    tmp = realloc(input, strlen(input)+strlen(addition)+1);
    if (!tmp) abort();
    return strcat(tmp, addition);
  }
  else
  {
    return strdup(addition);
  }
}

/* Real CVS revision number so we can strings it from
   the binary if necessary */
static const char * __attribute((unused)) pkgchk_revision = "$Revision: 1.8 $";

int
main(int argc, char *argv[])
{
  signed char c;
  signed char	*ptr;
  struct tetj_handle *journal;
  char *command_line = NULL;
  int i;
#define TMP_STRING_SIZE (PATH_MAX+20)
  char tmp_string[TMP_STRING_SIZE+1];
  RpmFile *rpmfile;

  printf("%s for LSB Specification " LSBVERSION " \n", argv[0]);

  for (i=0; i<argc; i++)
  {
    command_line = concat_string(command_line, argv[i]);
    command_line = concat_string(command_line, " ");
  }

  /* Parse options */
  while(1) {
      c=getopt(argc,argv,"L:");
      if( c == -1 )
        break;
      switch(c) {
      case 'L':
	lanananame=optarg;
        break;
      default:
        printf ("?? getopt returned character code 0%o ??\n", c);
      }
  }

  if( argc<= optind) {
    fprintf(stderr, "%s: bad argument count %d\n", argv[0], argc );
    usage(argv[0]);
    }

  if( (ptr=getenv("RPMCHK_DEBUG")) != NULL ) {
    rpmchkdebug=strtod(ptr,NULL);
    if( rpmchkdebug&DEBUG_ENV_OVERRIDES )
      fprintf(stderr,"rpmchk debug set to 0x%x\n", rpmchkdebug );
    }

  if( lanananame )
	  set_myappname(lanananame);

  if( (rpmfile = OpenRpmFile(argv[optind])) == NULL ) {
    fprintf(stderr, "%s: Unable to open file %s\n", argv[0], argv[optind] );
    usage(argv[0]);
    }

  /* Start journal logging */
  snprintf(tmp_string, TMP_STRING_SIZE, "journal.pkgchk.%s", 
           basename(argv[optind]));
  if (tetj_start_journal(tmp_string, &journal, command_line)!=0)
  {
    perror("Could not open journal file");
    exit(1);
  }

  /* Log version number for lsbpkgchk package */
  snprintf(tmp_string, TMP_STRING_SIZE, "VSX_NAME=lsbpkgchk " LSBPKGCHK_VERSION);
  tetj_add_config(journal, tmp_string);
  tetj_testcase_start(journal, tetj_activity_count, argv[1], "TC Start");
  checkRpm(rpmfile, journal);
  tetj_testcase_end(journal, tetj_activity_count, "", "TC End");
  tetj_close_journal(journal);
  exit(0);
}
