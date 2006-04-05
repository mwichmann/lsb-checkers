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
#include <libgen.h>
#include <limits.h>
#include "../tetj/tetj.h"
#include "../fhschk/fhschk.h"
#include "elfchk.h"
#include "rpmchk.h"

/* modules to check against.  */
int modules = LSB_Desktop_Modules;	// default to all modules in cert program

void
usage(char *progname)
{
  printf("usage: %s [options] pkgname\n"
"  -h, --help                     show this help message and exit\n"
"  -v, --version                  show version and LSB version\n"
"  -n, --nojournal                do not write a journal file\n"
"  -L LANANANAME, --lanana=LANANANAME\n"
"                                 use LANANANAME as package or provider name\n"
"  -t                             check LSB conformance of payload files\n"
//"  -T [core|desktop], --lsb-product [core|desktop]\n"
//"                                 target either core or desktop spec for tests\n" 
"  -M MODULE, --module=MODULE     add MODULE to list of checked modules\n"
"  -j JOURNAL, --journal=JOURNAL  use JOURNAL as file/path for journal file\n"
"  -d DEPENDENCY, --dependency=DEPENDENCY\n"
"                                 add DEPENDENCY provided by another\n"
"                                 customer provided package to list of\n"
"                                 expected dependencies\n", progname);
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
static const char * __attribute((unused)) pkgchk_revision = "$Revision: 1.27 $";

int
main(int argc, char *argv[])
{
  const char	*ptr;
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
/* Ignore LSB_PRODUCT env variable for LSB 3.1
  char *p;
*/

  for (i=0; i<argc; i++) {
    command_line = concat_string(command_line, argv[i]);
    command_line = concat_string(command_line, " ");
  }

/* Ignore LSB_PRODUCT env variable for LSB 3.1
  if(NULL != (p = getenv("LSB_PRODUCT"))) {
    if(strcasecmp(p, "desktop") == 0 || strcasecmp(p, "all") == 0) {
      modules = LSB_All_Modules;
      is_desktop = 1;
      is_graphics = 1;
    }
    else if(strcasecmp(p, "core") != 0) {
      fprintf(stderr, "warning: LSB_PRODUCT target '%s' is invalid, resetting to core\n", p);
    }
  }
*/

  while (1) {
    int c;
    static struct option long_options[] = {
      {"help",     no_argument,        NULL, 'h'},
      {"version",  no_argument,        NULL, 'v'},
      {"nojournal",no_argument,        NULL, 'n'},
      {"lanana",   required_argument,  NULL, 'L'},
      {"module",   required_argument,  NULL, 'M'},
      {"journal",  required_argument,  NULL, 'j'},
      {"dependency",  required_argument,  NULL, 'd'},
      {"lsb-product", required_argument, NULL, 'T'},
      {0, 0, 0, 0}
    };

    c = getopt_long (argc, argv, "hvnL:tT:M:j:d:", long_options, &option_index);
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
      case 'T':
/* Ignore -T completely for LSB 3.1
	if(strcasecmp(optarg, "desktop") == 0 || strcasecmp(optarg, "all") == 0)
	{
	    modules = LSB_All_Modules;
	    is_desktop = 1;
	    is_graphics = 1;
	}
	else if (strcasecmp(optarg, "core") != 0) {
	    fprintf(stderr, "error: product must be either core or desktop\n");
	    usage(argv[0]);
	    exit(EXIT_FAILURE);
	} else
	    modules = LSB_Core | LSB_Graphics | LSB_Cpp;
*/
	break;
      case 'M':
	modules |= getmoduleval(optarg);
/* Ignore the use of is_graphics for LSB 3.1
	if (modules & LSB_Graphics)
		is_graphics = 1;
*/
	printf("also checking symbols in module %s\n", optarg);
	break;
      case 'j':
	snprintf(journal_filename, TMP_STRING_SIZE, optarg);
	overrideJournalFilename = 1;
	break;
      case 'd':
	is_custom = 1;
	customdeps[numcustdeps].reqname = strdup(optarg);
	numcustdeps = numcustdeps + 1;
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

  /*
   * new journal standard requires arch in the
   * VSX_NAME line in order to fetch waiver files correctly
   */
  snprintf(tmp_string, TMP_STRING_SIZE,
	   "VSX_NAME=lsbpkgchk %s (%s)", LSBPKGCHK_VERSION, tetj_arch);
  tetj_add_config(journal, tmp_string);
  snprintf(tmp_string, TMP_STRING_SIZE, "LSB_VERSION=%s", LSBVERSION);
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
