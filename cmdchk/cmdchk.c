/*
 * cmdchk.c 
 *
 * Copyright (c) 2002-2006 The Free Standards Group Inc.
 *
 * Stuart Anderson (anderson@freestandards.org)
 *
 * This is $Revision: 1.23 $
 *
 * $Log: cmdchk.c,v $
 * Revision 1.23  2006/01/06 17:59:45  nick
 * use correct architecture name in journal
 *
 * Revision 1.21  2005/10/25 18:20:50  nick
 * fixes for bug 1006.
 *
 * Revision 1.20  2005/10/20 13:10:50  pradosh
 * - Fixed Bug #1006
 * - Minor code cleanups
 * - Improved error handling
 *
 * Revision 1.18  2005/07/06 22:33:31  mats
 * Add invocation command line to cmdchk journal (bug 1041)
 *
 * Revision 1.17  2005/07/05 12:47:34  mats
 * One more cleanup pass: make sure unexpected number of arguments
 * exits with an error code.
 *
 * Revision 1.16  2005/07/04 14:07:29  mats
 * Split journal config entry into two lines to match other tools
 *
 * Revision 1.15  2005/07/03 00:02:33  mats
 * Add "prefix" handling for pointing at an alternate root
 *
 * Revision 1.14  2005/07/02 19:12:48  mats
 * Building more prototype "standard argument handling" for checkers,
 * ultimately towards addressing bug 735.
 *
 * Revision 1.13  2005/07/02 15:16:15  mats
 * First cut at adding standard option-handling code for checkers
 *
 * Revision 1.12  2005/07/01 16:02:08  mats
 * Try stat if access fails.  Bug 1032.
 *
 * Revision 1.11  2005/06/12 16:06:32  mats
 * Revamp cmdchk for counting testcases easily; emit test count to journal
 *
 * Revision 1.10  2005/05/04 00:08:29  mats
 * A little more journal-file format cleanup to make tools happier
 *
 * Revision 1.9  2005/04/28 21:38:18  mats
 * bug 849: improve quality of cmdchk journal
 *
 * Revision 1.8  2005/03/15 16:45:27  mats
 * Respin from DB; check only for execute permission (some cmds are not
 * readable for non-root); adjust testcase counter to start at 0 per convention
 *
 * Revision 1.7  2002/11/26 00:25:29  anderson
 * Give credit where due
 *
 * Revision 1.6  2002/09/20 15:57:03  mwichmann
 * Changed a couple of instances of libchk->cmdchk; also build cmdlist
 *
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
#include <sys/utsname.h>
#include <getopt.h>
#include "../tetj/tetj.h"
#include "cmds.h"

char *binpaths[] = {
    "/bin/",
    "/sbin/",
    "/usr/bin/",
    "/usr/sbin/",
    "/usr/X11R6/bin/",
    "/usr/lib/lsb/",		/* install_initd, remove_initd */
    0
};

#define TMP_STRING_SIZE (PATH_MAX+20)
char prefix[TMP_STRING_SIZE + 1];

/* Real CVS revision number so we can strings it from the binary if necessary */
static const char *__attribute((unused)) cmdchk_revision =
    "$Revision: 1.23 $";

void check_cmd(struct cmds *cp, struct tetj_handle *journal)
{
    char filename[PATH_MAX + 1];
    char tmp_string[TMP_STRING_SIZE + 1];
    struct stat stbuf;
    int i;
    int err_flag;

    err_flag = 0;
    tetj_tp_count = 1;
    tetj_testcase_start(journal, tetj_activity_count, cp->cmdname, "");
    snprintf(tmp_string, TMP_STRING_SIZE, "Looking for command %s",
	     cp->cmdname);
    tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count,
		       tmp_string);

   if (cp->cmdpath && *(cp->cmdpath)) {
	if (prefix)
	    snprintf(filename, PATH_MAX, "%s%s", prefix, cp->cmdpath);
	else
	    snprintf(filename, PATH_MAX, "%s", cp->cmdpath);
	if (access(filename, X_OK) == 0) {
	    tetj_result(journal, tetj_activity_count, tetj_tp_count,
			TETJ_PASS);
#ifdef VERBOSE
	    fprintf(stderr, "Found %s (%s) as %s\n", cp->cmdpath, cp->cmdname, filename);
#endif
	} else if (stat(filename, &stbuf) == 0) {
	    if (stbuf.st_mode & S_IXUSR) {
		tetj_result(journal, tetj_activity_count, tetj_tp_count,
			    TETJ_PASS);
#ifdef VERBOSE
		fprintf(stderr, "Found priv cmd %s (%s) as %s\n", cp->cmdpath, cp->cmdname, filename);
#endif
	    } else {
		err_flag = 1;
	    }
	} else {
	    err_flag = 2;
	}

    } else {
	/* Find the command */
	for (i = 0; binpaths[i]; i++) {
	    if (prefix)
		snprintf(filename, PATH_MAX, "%s%s%s", prefix, binpaths[i],
			 cp->cmdname);
	    else
		snprintf(filename, PATH_MAX, "%s%s", binpaths[i],
			 cp->cmdname);
	    if (access(filename, X_OK) == 0) {
		tetj_result(journal, tetj_activity_count, tetj_tp_count,
			    TETJ_PASS);
#ifdef VERBOSE
		fprintf(stderr, "Found %s as %s\n", cp->cmdname, filename);
#endif
	        err_flag = 0;
		break;
	    }

	    if (stat(filename, &stbuf) == 0) {
		if (stbuf.st_mode & S_IXUSR) {
		    tetj_result(journal, tetj_activity_count,
				tetj_tp_count, TETJ_PASS);
#ifdef VERBOSE
		    fprintf(stderr, "Found %s as %s\n", cp->cmdname,
			    filename);
#endif
		    err_flag = 0;
		    break;
		} else {
		    err_flag = 1;
		    break;
		}
	    }
	    err_flag = 2;
	}
    }
    if (err_flag == 2) {
	fprintf(stderr, "Couldn't find %s\n", cp->cmdname);
	tetj_result(journal, tetj_activity_count, tetj_tp_count,
		    TETJ_FAIL);
    } else if (err_flag == 1) {
	fprintf(stderr, "Permission denied for %s at %s\n",
		cp->cmdname, filename);
	tetj_result(journal, tetj_activity_count, tetj_tp_count,
		    TETJ_FAIL);
    }
    tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count);
    tetj_testcase_end(journal, tetj_activity_count++, 0, "");
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

void usage(char *progname)
{
    printf("usage: %s [options]\n%s%s%s%s%s", progname,
	   "  -h, --help                     show this help message and exit\n",
	   "  -v, --version                  show version and LSB version\n",
	   "  -n, --nojournal                do not write a journal file\n",
	   "  -j JOURNAL, --version=JOURNAL  use JOURNAL as file/path for journal file\n",
	   "  -p PREFIX, --prefix=PREFIX     prefix to append to all paths\n");
}

int main(int argc, char *argv[])
{
    struct tetj_handle *journal;
    char *command_line = NULL;
    char tmp_string[TMP_STRING_SIZE + 1];
    char journal_filename[TMP_STRING_SIZE + 1];
    int i, j;
    int option_index = 0;
    struct utsname unameb;

    snprintf(journal_filename, TMP_STRING_SIZE, "journal.lsbcmdchk");
    for (i = 0; i < argc; i++) {
	command_line = concat_string(command_line, argv[i]);
	command_line = concat_string(command_line, " ");
    }

    while (1) {
	int c;
	static struct option long_options[] = {
	    {"help", no_argument, NULL, 'h'},
	    {"version", no_argument, NULL, 'v'},
	    {"nojournal", no_argument, NULL, 'n'},
	    {"journal", required_argument, NULL, 'j'},
	    {"prefix", required_argument, NULL, 'p'},
	    {0, 0, 0, 0}
	};

	c = getopt_long(argc, argv, "hvnj:p:", long_options,
			&option_index);
	if (c == -1)
	    break;
	switch (c) {
	case 'h':
	    usage(argv[0]);
	    exit(0);
	case 'v':
	    printf("%s %s for LSB Specification %s\n", argv[0],
		   LSBCMDCHK_VERSION, LSBVERSION);
	    break;
	case 'n':
	    snprintf(journal_filename, TMP_STRING_SIZE, "/dev/null");
	    break;
	case 'j':
	    snprintf(journal_filename, TMP_STRING_SIZE, optarg);
	    break;
	case 'p':
	    strcpy(prefix, optarg);
	    break;
	default:
	    usage(argv[0]);
	    exit(0);
	}
    }
    if (optind != argc) {
	usage(argv[0]);
	exit(1);
    }

    if (tetj_start_journal(journal_filename, &journal, command_line) != 0) {
	snprintf(tmp_string, TMP_STRING_SIZE,
		 "Could not open journal file %s", journal_filename);
	perror(tmp_string);
	fprintf(stderr,
		"Use -j <filename> to specify an alternate location for the journal file\n");
	exit(1);
    }

    /*
     * determine the architecture ... new jornal standard requires this in the
     * VSX_NAME line in order to handle waiver files correctly
     */
    if (uname(&unameb) < 0)
	strncpy(unameb.machine, "noarch", sizeof(unameb.machine));
    snprintf(tmp_string, TMP_STRING_SIZE,
	     "VSX_NAME=lsbcmdchk %s (%s)", LSBCMDCHK_VERSION,
	     unameb.machine);
    tetj_add_config(journal, tmp_string);
    snprintf(tmp_string, TMP_STRING_SIZE, "LSB_VERSION= " LSBVERSION);
    tetj_add_config(journal, tmp_string);
    tetj_config_end(journal);

    j = sizeof(cmdlist) / sizeof(struct cmds);
    snprintf(tmp_string, TMP_STRING_SIZE, "\"total tests in cmdchk %d\"",
	     j);
    tetj_scenario_info(journal, tmp_string);

    for (i = 0; i < j; i++)
	check_cmd(&cmdlist[i], journal);
    tetj_close_journal(journal);
    exit(0);
}
