/*
 * cmdchk.c 
 *
 * Copyright (c) 2002-2005 The Free Standards Group Inc.
 *
 * Stuart Anderson (anderson@freestandards.org)
 *
 * This is $Revision: 1.12 $
 *
 * $Log: cmdchk.c,v $
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
#include "../tetj/tetj.h"
#include "cmds.h"

char *binpaths[] = {
    "/bin/%s",
    "/sbin/%s",
    "/usr/bin/%s",
    "/usr/sbin/%s",
    "/usr/X11R6/bin/%s",
    "/usr/lib/lsb/%s",		/* install_initd, remove_initd */
    0
};

/* Real CVS revision number so we can strings it from
   the binary if necessary */
static const char *__attribute((unused)) cmdchk_revision = "$Revision: 1.12 $";


void check_cmd(struct cmds *cp, struct tetj_handle *journal)
{
    char filename[PATH_MAX + 1];
#define TMP_STRING_SIZE (PATH_MAX+20)
    char tmp_string[TMP_STRING_SIZE + 1];
    struct stat stbuf;
    int i;

    tetj_tp_count = 1;
    tetj_testcase_start(journal, tetj_activity_count, cp->cmdname, "");
    snprintf(tmp_string, TMP_STRING_SIZE, "Looking for command %s", cp->cmdname);
    tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count, tmp_string);

    /*
     * TODO: LSB bug 1006 - once command paths are cleaned out in DB,
     * if cp->cmdpath is non-NULL, check it explicitly in preference
     * to searching for cp->cmdname in binpaths
     */

    /* Find the command */
    for (i = 0; binpaths[i]; i++) {
	snprintf(filename, PATH_MAX, binpaths[i], cp->cmdname);
	if (access(filename, X_OK) == 0) {
	    tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_PASS);
#ifdef VERBOSE
	    fprintf(stderr, "Found %s as %s\n", cp->cmdname, filename);
#endif
	    break;
	}

	if (stat(filename, &stbuf) == 0) {
	    if (stbuf.st_mode & S_IXUSR) {
		tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_PASS);
		printf("Second-chance for %s worked\n", filename);
		break;
	    }
	}
    }
    if (!binpaths[i]) {
	fprintf(stderr, "Couldn't find %s\n", cp->cmdname);
	tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_FAIL);
    }
    tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count);
    tetj_testcase_end(journal, tetj_activity_count++, 0, "");
}

int main(int argc, char *argv[])
{
    struct tetj_handle *journal;
    char tmp_string[TMP_STRING_SIZE + 1];
    int i, j;

    if (tetj_start_journal("journal.lsbcmdchk", &journal, "lsbcmdchk") != 0) {
	perror("Could not open journal file");
	exit(1);
    }

    snprintf(tmp_string, TMP_STRING_SIZE,
	     "VSX_NAME=lsbcmdchk " LSBCMDCHK_VERSION);
    tetj_add_config(journal, tmp_string);
    tetj_config_end(journal);

    j = sizeof(cmdlist)/sizeof(struct cmds);
    snprintf(tmp_string, TMP_STRING_SIZE, "\"total tests in cmdchk %d\"", j);
    tetj_scenario_info(journal, tmp_string);

    for (i=0; i < j; i++)
	check_cmd(&cmdlist[i], journal);
    tetj_close_journal(journal);
    exit(0);
}
