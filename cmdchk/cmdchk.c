/*
 * cmdchk.c 
 *
 * Copyright (c) 2002-2006 The Free Standards Group Inc.
 *
 * Stuart Anderson (anderson@freestandards.org)
 *
 * This is $Revision: 1.22 $
 *
 */

#include <unistd.h>
#include <limits.h>
#include <stdio.h>
#include <libgen.h>
#include <string.h>
#include <stdlib.h>
#include <sys/stat.h>
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
    "$Revision: 1.22 $";

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

    snprintf(tmp_string, TMP_STRING_SIZE,
	     "VSX_NAME=lsbcmdchk %s (noarch)", LSBCMDCHK_VERSION);
    tetj_add_config(journal, tmp_string);
    snprintf(tmp_string, TMP_STRING_SIZE, "LSB_VERSION=%s", LSBVERSION);
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
