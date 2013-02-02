/*
 * Copyright (c) 2007-2008 The Linux Foundation
 * Copyright (c) 2002-2005 The Free Standards Group Inc
 * Copyright (c) 2002-2005 Stuart Anderson (anderson@freestandards.org)
 *
 */
#include <stdio.h>
#include <getopt.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <libgen.h>
#include <limits.h>
#include "../tetj/tetj.h"
#include "../fhschk/fhschk.h"
#include "elfchk.h"
#include "rpmchk.h"
#include "../appchk/output.h"

/* Set of desktop modules depends on the LSB version selected.
 * The order of the command line options is not fixed, so we have to determine the
 * version first, remember which set of modules is needed and only then calculate the
 * real set of modules depending on the LSB version.
 * 0: no -T option specified.
 * 1: -T core,c++
 * 2: -T core,c++,desktop
 */
int modules_pre = 0;

/* modules to check against.  */
int modules = 0;

void usage(char *progname)
{
    printf("usage: %s [options] pkgname\n"
	   "  -h, --help                     show this help message and exit\n"
	   "  -v, --version                  show version and LSB version\n"
	   "  -n, --nojournal                do not write a journal file\n"
	   "  -L LANANANAME, --lanana=LANANANAME\n"
	   "                                 use LANANANAME as package or provider name\n"
	   "  -t                             check LSB conformance of payload files\n"
	   "  -r, --lsb-version=VERSION      LSB version to test against\n"
	   "                                 (supported are: %s)\n"
	   "  -T [core,c++|core,c++,desktop], --lsb-product [core,c++|core,c++,desktop]\n"
	   "                                 target either core,c++ or core,c++,desktop spec for tests\n"
	   "  -M MODULE, --module=MODULE     add MODULE to list of checked modules\n"
	   "  -j JOURNAL, --journal=JOURNAL  use JOURNAL as file/path for journal file\n"
	   "  -d DEPENDENCY, --dependency=DEPENDENCY\n"
	   "                                 add DEPENDENCY provided by another\n"
	   "                                 customer provided package to list of\n"
	   "                                 expected dependencies\n",
	   progname, LSB_Versions_list);
}

char *concat_string(char *input, char *addition)
{
    char *tmp;
    if (input) {
	tmp = realloc(input, strlen(input) + strlen(addition) + 1);
	if (!tmp)
	    abort();
	return strcat(tmp, addition);
    } else {
	return strdup(addition);
    }
}

/* Real CVS revision number so we can strings it from the binary if necessary */
static const char *__attribute((unused)) pkgchk_revision =
    "$Revision: 1.27 $";

int main(int argc, char *argv[])
{
    const char *ptr;
    char *command_line = NULL;
    int i;
#define TMP_STRING_SIZE (PATH_MAX+20)
    char tmp_string[TMP_STRING_SIZE + 1];
    char journal_filename[TMP_STRING_SIZE + 1];
    RpmFile *rpmfile;
    int check_app = 0;
    int overrideJournalFilename = 0;
    int option_index = 0;
/* Ignore LSB_PRODUCT env variable for LSB 3.1
    char *p;
*/

    for (i = 0; i < argc; i++) {
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
	    {"help", no_argument, NULL, 'h'},
	    {"version", no_argument, NULL, 'v'},
	    {"nojournal", no_argument, NULL, 'n'},
	    {"lanana", required_argument, NULL, 'L'},
	    {"module", required_argument, NULL, 'M'},
	    {"journal", required_argument, NULL, 'j'},
	    {"dependency", required_argument, NULL, 'd'},
	    {"lsb-version", required_argument, NULL, 'r'},
	    {"lsb-product", required_argument, NULL, 'T'},
	    {0, 0, 0, 0}
	};

	c = getopt_long(argc, argv, "hvnL:tr:T:M:j:d:", long_options,
			&option_index);
	if (c == -1)
	    break;
	switch (c) {
	case 'h':
	    usage(argv[0]);
	    exit(0);
	case 'v':
	    printf("%s %s for LSB Specifications %s\n", argv[0],
		   LSBPKGCHK_VERSION, LSB_Versions_list);
	    break;
	case 'n':
	    snprintf(journal_filename, TMP_STRING_SIZE, "%s", "/dev/null");
	    overrideJournalFilename = 1;
	    break;
	case 'L':
	    lanananame = strdup(optarg);
	    break;
	case 't':
	    check_app = 1;
	    break;
	case 'r':
	    for (i = 0; i < num_LSB_Versions; ++i) {
		if (strcmp(optarg, LSB_Versions[i]) == 0) {
		    LSB_Version = i;
		    break;
		}
	    }
	    if (LSB_Version == -1) {
		printf("LSB version '%s' is not supported!\n", optarg);
		usage(argv[0]);
		exit(1);
	    }
	    break;
	case 'T':
	    if (strcasecmp(optarg, "core,c++") == 0)
		modules_pre = 1;
	    else if (strcasecmp(optarg, "core,c++,desktop") == 0
		     || strcasecmp(optarg, "all") == 0)
		modules_pre = 2;
	    else {
		fprintf(stderr,
			"error: product must be either core,c++ or core,c++,desktop\n");
		usage(argv[0]);
		exit(EXIT_FAILURE);
	    }
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
	    snprintf(journal_filename, TMP_STRING_SIZE, "%s", optarg);
	    overrideJournalFilename = 1;
	    break;
	case 'd':
	    is_custom = 1;
	    customdeps[numcustdeps].reqname = strdup(optarg);
	    numcustdeps = numcustdeps + 1;
	    break;
	default:
	    usage(argv[0]);
	    exit(0);
	}
    }
    if (optind >= argc) {
	usage(argv[0]);
	exit(1);
    }

    if (LSB_Version == -1) {
	LSB_Version = LSB_Version_default;
	printf("LSB version is not specified, using %s by default.\n\n",
	       LSB_Versions[LSB_Version]);
    }

    switch (modules_pre) {
    case 1:			/* core,c++ */
	modules |= LSB_Core_Modules;
	break;
    case 2:			/* core,c++,desktop */
	modules |= LSB_Desktop_Modules[LSB_Version];
	break;
    default:
	modules |= LSB_Desktop_Modules[LSB_Version];
	break;
    }

    if ((ptr = getenv("RPMCHK_DEBUG")) != NULL) {
	rpmchkdebug = strtod(ptr, NULL);
	if (rpmchkdebug & DEBUG_ENV_OVERRIDES)
	    fprintf(stderr, "rpmchk debug set to 0x%x\n", rpmchkdebug);
    }

    if (lanananame)
	set_myappname(lanananame);

    if ((rpmfile = OpenRpmFile(argv[optind])) == NULL) {
	fprintf(stderr, "%s: Unable to open file %s\n", argv[0],
		argv[optind]);
	usage(argv[0]);
	exit(1);
    }

    /* Start journal logging */
    if (!overrideJournalFilename) {
	snprintf(journal_filename, TMP_STRING_SIZE, "journal.pkgchk.%s",
		 basename(argv[optind]));
    }
    if (tetj_start_journal(journal_filename, &journal, command_line) != 0) {
	snprintf(tmp_string, TMP_STRING_SIZE,
		 "Could not open journal file %s", journal_filename);
	perror(tmp_string);
	printf
	    ("Use -j JOURNAL to specify an alternate location for the journal file\n");
	exit(1);
    }
    do_journal = 1;

    /*
     * new journal standard requires arch in the
     * VSX_NAME line in order to fetch waiver files correctly
     */
    snprintf(tmp_string, TMP_STRING_SIZE,
	     "VSX_NAME=lsbpkgchk %s (%s)", LSBPKGCHK_VERSION, tetj_arch);
    tetj_add_config(journal, tmp_string);
    snprintf(tmp_string, TMP_STRING_SIZE, "LSB_VERSION=%s",
	     LSB_Versions[LSB_Version]);
    tetj_add_config(journal, tmp_string);
    if (check_app) {
	snprintf(tmp_string, TMP_STRING_SIZE, "LSB_MODULES=%s",
		 getmodulename(modules));
	tetj_add_config(journal, tmp_string);
    }
    snprintf(tmp_string, TMP_STRING_SIZE, "LSB_PROFILE=%s",
	     getlsbprofile(LSB_Versions[LSB_Version], modules));
    tetj_add_config(journal, tmp_string);

    tetj_testcase_start(journal, tetj_activity_count, argv[optind], "");
    checkRpm(rpmfile, journal, check_app, modules);
    tetj_testcase_end(journal, tetj_activity_count, 0, "");
    tetj_close_journal(journal);
    free(rpmfile);
    exit(0);
}
