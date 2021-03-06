/*
 * Copyright (c) 2007-2008 The Linux Foundation
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

#define TMP_STRING_SIZE (400)

int check_dependencies(struct tetj_handle *journal)
{
    int i, d;
    RpmRequireRec alldeps[50];
    int numalldeps;
    /* Indicates that we've found an allowed dependency,
       but with wrong version */
    int found_wrong_version;
    char *name, *vername;
    int fail = TETJ_PASS;
    char tmp_string[TMP_STRING_SIZE + 1];
    RpmRequireRec lsb_req = { "lsb", LSB_Versions[LSB_Version], 0, 1 };

    numalldeps = numdeps;
    for (i = 0; i < numdeps; i++) {
	alldeps[i] = validdeps[i];
    }
    alldeps[numalldeps++] = lsb_req;

/* Ignore is_graphics and is_desktop for LSB 3.1
    if (is_graphics) {
	alldeps[numalldeps] = graphicsdeps[0];
	numalldeps = numalldeps + 1;
    }
	
    if (is_desktop) {
	alldeps[numalldeps] = desktopdeps[0];
	numalldeps = numalldeps + 1;
    }
*/

    if (is_custom) {
	for (i = 0; i < numcustdeps; i++) {
	    alldeps[numalldeps] = customdeps[i];
	    numalldeps = numalldeps + 1;
	}
    }

    if (numrequirename != numrequireversion) {
	snprintf(tmp_string, TMP_STRING_SIZE,
		 "check_dependencies() different number of REQUIRENAME %d & REQUIREVERSION %d",
		 numrequirename, numrequireversion);
	fprintf(stderr, "Error: %s\n", tmp_string);
	fail = TETJ_FAIL;
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

	found_wrong_version = 0;
	for (d = 0; d < numalldeps; d++) {
	    if (strcmp(name, alldeps[d].reqname) == 0) {
		/* found a match */
		if (strcmp(vername, alldeps[d].reqversion) == 0
		        || d >= numdeps) {
		    /* the version matches (checked for LSB deps only) */
		    alldeps[d].seenit = 1;
		    if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
			fprintf(stderr, "matched Name: %s\n", name);
		    break;
		} else {
		    snprintf(tmp_string, TMP_STRING_SIZE,
			     "Version for %s: %s doesn't match expected %s",
			     name, vername, alldeps[d].reqversion);
		    fprintf(stderr, "Error: %s\n", tmp_string);
		    fail = TETJ_FAIL;
		    tetj_testcase_info(journal, tetj_activity_count,
				       tetj_tp_count, 0, 0, 0, tmp_string);
		    found_wrong_version = 1;
		}
	    }
	}

	if (d == numalldeps && !found_wrong_version) {
	    snprintf(tmp_string, TMP_STRING_SIZE,
		     "Unexpected dependency %s", name);
	    fprintf(stderr, "Error: %s\n", tmp_string);
	    fail = TETJ_FAIL;
	    tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
			       0, 0, 0, tmp_string);
	}
	name += strlen(name) + 1;
	vername += strlen(vername) + 1;
    }

    /* this is kind of convoluted - may be an easier way.
     * if we found by earlier examination that we're a noarch pkg,
     * then the standard "required" dependencies are the noarch ones,
     * not the arch-specific ones. Step through a noarch-specific array,
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
		fprintf(stderr, "Error: %s\n", tmp_string);
		fail = TETJ_FAIL;
		tetj_testcase_info(journal, tetj_activity_count,
				   tetj_tp_count, 0, 0, 0, tmp_string);
	    }
	}
    }

    /* even so, noarch packages still should have a plain "lsb" require */
    for (d = 0; d < numalldeps; d++) {
	if (alldeps[d].isrequired && !alldeps[d].seenit) {
 	    snprintf(tmp_string, TMP_STRING_SIZE,
		     "Didn't see expected dependency %s=%s",
		     alldeps[d].reqname, alldeps[d].reqversion);
	    fprintf(stderr, "Error: %s\n", tmp_string);
	    fail = TETJ_FAIL;
	    tetj_testcase_info(journal, tetj_activity_count,
	    		       tetj_tp_count, 0, 0, 0, tmp_string);
	}
    }

    return fail;
}
