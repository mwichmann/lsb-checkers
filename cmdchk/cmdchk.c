/*
 * cmdchk.c 
 *
 * Copyright (c) 2002-2007 Linux Foundation
 *
 * Stuart Anderson (anderson@freestandards.org)
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

extern char *LSB_Versions[];
extern int LSB_Versions_Numeric[];
extern int num_LSB_Versions;
extern int LSB_Version;
extern int LSB_Version_default;

char *binpaths[] = {
    "/bin/",
    "/sbin/",
    "/usr/bin/",
    "/usr/sbin/",
    "/usr/X11R6/bin/",
    0
};

#define TMP_STRING_SIZE (PATH_MAX+20)
char *prefix;

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
		snprintf(filename, PATH_MAX, "%s%s", binpaths[i], cp->cmdname);
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
		    fprintf(stderr, "Found %s as %s\n", cp->cmdname, filename);
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
	tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_FAIL);
    } else if (err_flag == 1) {
	fprintf(stderr, "Permission denied for %s at %s\n",
		cp->cmdname, filename);
	tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_FAIL);
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
    printf("usage: %s [options]\n"
	   "  -h, --help                     show this help message and exit\n"
	   "  -v, --version                  show version and LSB version\n"
	   "  -n, --nojournal                do not write a journal file\n"
	   "  -j JOURNAL, --version=JOURNAL  use JOURNAL as file/path for journal file\n"
	   "  -p PREFIX, --prefix=PREFIX     prefix to append to all paths\n"
           "  -r, --lsb-version=VERSION      LSB version to test against\n"
           "                                     (supported are: %s)\n"
	   "  -T [core,c++|core,c++,desktop], --lsb-product [core|desktop]\n"
	   "                                 Lsb product/spec to target\n",
    progname,LSB_SUPPORTED_VERSIONS);
}

int main(int argc, char *argv[])
{
    struct tetj_handle *journal;
    char *command_line = NULL;
    struct cmds *cp;
    char tmp_string[TMP_STRING_SIZE + 1];
    char journal_filename[TMP_STRING_SIZE + 1];
    int i;
    int testcount = 0;
    int option_index = 0;
    int desktop_mode = 1; // default to all modules in cert
    struct utsname unameb;

/* ignore LSB_PRODUCT for LSB 3.1
    if(NULL != (p = getenv("LSB_PRODUCT"))) {
	if(strcasecmp(p, "desktop") == 0 || strcasecmp(p, "all") == 0)
	    desktop_mode = 1;
	else if (strcasecmp(p, "core") != 0) {
	    fprintf(stderr, "warning: LSB_PRODUCT was set to '%s', "
		"must be one of [core|desktop]- reverting to core.\n", p);
	}
    }
*/

    snprintf(journal_filename, TMP_STRING_SIZE, "%s", "journal.lsbcmdchk");
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
            {"lsb-version", required_argument, NULL, 'r'},
	    {"prefix", required_argument, NULL, 'p'},
	    {"lsb-product", required_argument, NULL, 'T'},
	    {0, 0, 0, 0}
	};

	c = getopt_long(argc, argv, "hvnj:r:i:T:", long_options,
			&option_index);
	if (c == -1)
	    break;
	switch (c) {
	case 'h':
	    usage(argv[0]);
	    exit(0);
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
	case 'v':
	    printf("%s %s for LSB Specification %s\n", argv[0],
		   LSBCMDCHK_VERSION, LSB_SUPPORTED_VERSIONS);
	    break;
	case 'n':
	    snprintf(journal_filename, TMP_STRING_SIZE, "%s", "/dev/null");
	    break;
	case 'j':
	    snprintf(journal_filename, TMP_STRING_SIZE, "%s", optarg);
	    break;
	case 'p':
	    prefix = (char *)malloc(sizeof(char) * (strlen(optarg)+1));
	    strcpy(prefix, optarg);
	    break;
	case 'T':
	    if (strcasecmp(optarg, "core,c++") == 0) {
		desktop_mode = 0;
	    } else if (strcasecmp(optarg, "core,c++,desktop") == 0 || strcasecmp(optarg, "all") == 0) {
		desktop_mode = 1;
	    } else { 
		fprintf(stderr, "--lsb-product arg must be one of [core,c++|core,c++,desktop]\n");
		usage(argv[0]);
		exit(1);
	    }
	    break;
	default:
	    usage(argv[0]);
	    exit(1);
	}
    }
    if (optind != argc) {
	usage(argv[0]);
	exit(1);
    }

    if (LSB_Version == -1) {
        LSB_Version = LSB_Version_default;
        printf("LSB version is not specified, using %s by default.\n\n", LSB_Versions[LSB_Version]);
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
     * new journal standard requires arch in the
     * VSX_NAME line in order to fetch waiver files correctly
     */
    if (uname(&unameb) < 0)
	strncpy(unameb.machine, "noarch", sizeof(unameb.machine));
    snprintf(tmp_string, TMP_STRING_SIZE,
	     "VSX_NAME=lsbcmdchk %s (%s)", LSBCMDCHK_VERSION, tetj_arch);
    tetj_add_config(journal, tmp_string);
    snprintf(tmp_string, TMP_STRING_SIZE, "LSB_VERSION=%s", LSB_Versions[LSB_Version]);
    tetj_add_config(journal, tmp_string);
    tetj_config_end(journal);

    /* old way: just check the size of the list 
    j = sizeof(core_cmdlist) / sizeof(struct cmds);
    if(desktop_mode)
	j += sizeof(desktop_cmdlist) / sizeof(struct cmds);
    */
    /* new way for multi-version support: need to check each entry
     * it's too bad because we do the same loops below, but we need
     * this info line before we start that
     */
    for (cp = core_cmdlist; cp->cmdname; cp++) {
	if (cp->cmdappearedin <= LSB_Versions_Numeric[LSB_Version]
	    && (cp->cmdwithdrawnin == 0
		|| cp->cmdwithdrawnin > LSB_Versions_Numeric[LSB_Version]))
	    testcount++;
    }
    if (desktop_mode) {
	for (cp = desktop_cmdlist; cp->cmdname; cp++) {
	    if (cp->cmdappearedin <= LSB_Versions_Numeric[LSB_Version]
		&& (cp->cmdwithdrawnin == 0
		    || cp->cmdwithdrawnin > LSB_Versions_Numeric[LSB_Version]))
		testcount++;
	}
    }
    snprintf(tmp_string, TMP_STRING_SIZE, 
                         "\"total tests in cmdchk %d\"", testcount);
    tetj_scenario_info(journal, tmp_string);

    for (cp = core_cmdlist; cp->cmdname; cp++) {
	if (cp->cmdappearedin <= LSB_Versions_Numeric[LSB_Version]
	    && (cp->cmdwithdrawnin == 0
		|| cp->cmdwithdrawnin > LSB_Versions_Numeric[LSB_Version]))
	    check_cmd(cp, journal);
    }
    if (desktop_mode) {
	for (cp = desktop_cmdlist; cp->cmdname; cp++) {
	    if (cp->cmdappearedin <= LSB_Versions_Numeric[LSB_Version]
		&& (cp->cmdwithdrawnin == 0
		    || cp->cmdwithdrawnin > LSB_Versions_Numeric[LSB_Version]))
		check_cmd(cp, journal);
	}
    }
    tetj_close_journal(journal);
    exit(0);
}
