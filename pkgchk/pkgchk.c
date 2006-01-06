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
#include "../fhschk/fhschk.h"
#include "../elfchk/elfchk.h"
#include "rpmchk.h"

/* modules to check against.  */
int modules = LSB_Core;

void
usage(char *progname)
{
  printf("usage: %s [options] pkgname\n%s%s%s%s%s%s%s%s%s", progname,
"  -h, --help                     show this help message and exit\n",
"  -v, --version                  show version and LSB version\n",
"  -n, --nojournal                do not write a journal file\n",
"  -L LANANANME, --lanana=LANANANAME\n",
"                                 use LANANAME as package or provider name\n",
"  -t                             check LSB conformance of payload files\n",
"  -A                             check the symbols in all aailable modules\n",
"  -M MODULE, --module=MODULE     add MODULE to list of checked modules\n",
"  -j JOURNAL, --journal=JOURNAL  use JOURNAL as file/path for journal file\n");
}

char *
concat_string(char *input, char *addition)
{
  char *tmp;
  if (input) {
    tmp = realloc(input, strlen(input)+strlen(addition)+1);
    if (!tmp) abort();
    return strcat(tmp, addition);
  } else {
    return strdup(addition);
  }
}

/* Real CVS revision number so we can strings it from the binary if necessary */
static const char * __attribute((unused)) pkgchk_revision = "$Revision: 1.16 $";

int
main(int argc, char *argv[])
{
  signed char	*ptr;
  struct tetj_handle *journal;
  char *command_line = NULL;
  int i;
#define TMP_STRING_SIZE (PATH_MAX+20)
  char tmp_string[TMP_STRING_SIZE+1];
  char journal_filename[TMP_STRING_SIZE+1];
  RpmFile *rpmfile;
  int check_app = 0;
  int overrideJournalFilename = 0;
  int option_index = 0;

  for (i=0; i<argc; i++) {
    command_line = concat_string(command_line, argv[i]);
    command_line = concat_string(command_line, " ");
  }

  while (1) {
    int c;
    static struct option long_options[] = {
      {"help",     no_argument,        NULL, 'h'},
      {"version",  no_argument,        NULL, 'v'},
      {"nojournal",no_argument,        NULL, 'n'},
      {"lanana",   required_argument,  NULL, 'L'},
      {"module",   required_argument,  NULL, 'M'},
      {"journal",  required_argument,  NULL, 'j'},
      {0, 0, 0, 0}
    };

    c = getopt_long (argc, argv, "hvnL:tAM:j:", long_options, &option_index);
    if (c == -1)
      break;
    switch (c) {
      case 'h':
	usage(argv[0]);
	exit (0);
      case 'v':
	printf("%s %s for LSB Specification %s\n", argv[0],
	       LSBPKGCHK_VERSION, LSBVERSION);
	break;
      case 'n':
	snprintf(journal_filename, TMP_STRING_SIZE, "/dev/null");
	overrideJournalFilename = 1;
	break;
      case 'L':
        lanananame = strdup(optarg);
        break;
      case 't':
        check_app = 1;
        break;
      case 'A':
	modules = LSB_All_Modules;
	printf("Checking symbols in all modules\n");
	break;
      case 'M':
	modules |= getmoduleval(optarg);
	printf("also checking symbols in module %s\n", optarg);
	break;
      case 'j':
	snprintf(journal_filename, TMP_STRING_SIZE, optarg);
	overrideJournalFilename = 1;
	break;
      default:
	usage(argv[0]);
	exit (0);
    }
  }
  if (optind >= argc) {
    usage(argv[0]);
    exit (1);
  }

  if ((ptr = getenv("RPMCHK_DEBUG")) != NULL) {
    rpmchkdebug = strtod(ptr,NULL);
    if (rpmchkdebug&DEBUG_ENV_OVERRIDES)
      fprintf(stderr,"rpmchk debug set to 0x%x\n", rpmchkdebug);
  }

  if (lanananame)
    set_myappname(lanananame);

  if ((rpmfile = OpenRpmFile(argv[optind])) == NULL) {
    fprintf(stderr, "%s: Unable to open file %s\n", argv[0], argv[optind] );
    usage(argv[0]);
    exit(1);
  }

  /* Start journal logging */
  if (!overrideJournalFilename) {
    snprintf(journal_filename, TMP_STRING_SIZE, "journal.pkgchk.%s",
       	     basename(argv[optind]));
  }
  if (tetj_start_journal(journal_filename, &journal, command_line) != 0) {
    snprintf(tmp_string, TMP_STRING_SIZE, "Could not open journal file %s",
	     journal_filename);
    perror(tmp_string);
    printf("Use -j JOURNAL to specify an alternate location for the journal file\n");
    exit(1);
  }

  /* Log version info in the journal */
  snprintf(tmp_string, TMP_STRING_SIZE, "VSX_NAME=lsbpkgchk " LSBPKGCHK_VERSION);
  tetj_add_config(journal, tmp_string);
  snprintf(tmp_string, TMP_STRING_SIZE, "LSB_VERSION= " LSBVERSION);
  tetj_add_config(journal, tmp_string);
  if (check_app) {
    snprintf(tmp_string, TMP_STRING_SIZE, "LSB_MODULES=%s", getmodulename(modules));
    tetj_add_config(journal, tmp_string);
  }

  tetj_testcase_start(journal, tetj_activity_count, argv[optind], "");
  checkRpm(rpmfile, journal, check_app, modules);
  tetj_testcase_end(journal, tetj_activity_count, 0, "");
  tetj_close_journal(journal);
  exit(0);
}
