/*
 *
 * Copyright (c) 2005 The Free Standards Group Inc
 * Copyright (c) 2005 Stuart Anderson (anderson@freestandards.org)
 *
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "rpmchk.h"
#include "../tetj/tetj.h"

int
check_dependencies(struct tetj_handle *journal)
{
    int i, d;
    char *name, *vername;
    int fail = 0;
#define TMP_STRING_SIZE (400)
    char tmp_string[TMP_STRING_SIZE + 1];

    if (numrequirename != numrequireversion) {
	snprintf(tmp_string, TMP_STRING_SIZE,
"check_dependencies() different number of REQUIRENAME %d & REQUIREVERSION %d",
		 numrequirename, numrequireversion);
	fprintf(stderr, "%s\n", tmp_string);
	fail++;
	tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
			   0, 0, 0, tmp_string);
    }

    name = requirename;
    vername = requireversion;
    for (i = 0; i < numrequirename; i++) {
	if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	    fprintf(stderr, "Required Name: %s\n", name);
	if (strcmp(name, "rpmlib(PayloadFilesHavePrefix)") == 0)
	    hasPayloadFilesHavePrefix = 1;
	if (strcmp(name, "rpmlib(CompressedFileNames)") == 0)
	    hasCompressedFileNames = 1;

	for (d = 0; d < numdeps; d++) {
	    if (strcmp(name, validdeps[d].reqname) == 0) {
		/* found a match */
		if (strcmp(vername, validdeps[d].reqversion) == 0) {
		    /* the version matches */
		    validdeps[d].seenit = 1;
		    if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
			fprintf(stderr, "matched Name: %s\n", name);
		    break;
		} else {
		    snprintf(tmp_string, TMP_STRING_SIZE,
			    "Version for %s: %s doesn't match expected %s",
			    name, vername, validdeps[d].reqversion);
		    fprintf(stderr, "%s\n", tmp_string);
		    fail++;
		    tetj_testcase_info(journal, tetj_activity_count,
			               tetj_tp_count, 0, 0, 0, tmp_string);
		}
	    }
	}

	if (d == numdeps) {
	    snprintf(tmp_string, TMP_STRING_SIZE,
		     "Unexpected dependency %s", name);
	    fprintf(stderr, "%s\n", tmp_string);
	    fail++;
	    tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
		               0, 0, 0, tmp_string);
	}
	name += strlen(name) + 1;
	vername += strlen(vername) + 1;
    }

    /* this is kind of convoluted - probably an easier way.
     * if we found by earlier examination that we're a noarch pkg,
     * then the standard "required" dependencies are the noarch ones,
     * not the arch-specific ones. Step through a *different* array,
     * repeating the check for "allowed" dependencies above
     */
    if (is_noarch) {
	for (d = 0; d < numnoarchdeps; d++) {
	    if (strcmp(name, noarchdeps[d].reqname) == 0) {
		if (strcmp(vername, noarchdeps[d].reqversion) == 0) {
		    noarchdeps[d].seenit = 1;
		}
	    }
	}
	for (d = 0; d < numnoarchdeps; d++) {
	    if (noarchdeps[d].isrequired && !noarchdeps[d].seenit) {
		snprintf(tmp_string, TMP_STRING_SIZE,
			 "Didn't see required dependency %s=%s",
			 noarchdeps[d].reqname, noarchdeps[d].reqversion);
		fprintf(stderr, "%s\n", tmp_string);
		fail++;
		tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
				   0, 0, 0, tmp_string);
	    }
	}
    } else {
	for (d = 0; d < numdeps; d++) {
	    if (validdeps[d].isrequired && !validdeps[d].seenit) {
		snprintf(tmp_string, TMP_STRING_SIZE,
			 "Didn't see expected dependency %s=%s",
			 validdeps[d].reqname, validdeps[d].reqversion);
		fprintf(stderr, "%s\n", tmp_string);
		fail++;
		tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
				   0, 0, 0, tmp_string);
	    }
	}
    }

    return fail;
}
