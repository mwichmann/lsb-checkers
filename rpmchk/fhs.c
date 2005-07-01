/* 
 *
 * Copyright (c) 2002 The Free Standards Group Inc
 * Copyright (c) 2002 Stuart Anderson (anderson@freestandards.org)
 *
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <zlib.h>
#include <cpio.h>
#include "rpmchk.h"
#include "tagfuncs.h"
#include "../tetj/tetj.h"
#include "../fhschk/fhschk.h"

/*
 * This file is used to compare a filename to the FHS/LSB to determine if
 * it is a valid path for an application to be providing.
 */

void checkRpmArchiveFilename(char *filename, struct tetj_handle *journal)
{
#define TMP_STRING_SIZE (400)
    char tmp_string[TMP_STRING_SIZE + 1];

    /* Check the RpmHeader magic value */
    tetj_tp_count++;
    tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count, "Check filename");
    if (!is_fhs_installable(filename)) {
	snprintf(tmp_string, TMP_STRING_SIZE,
		 "checkRpmArchiveFilename: file %s not FHS compliant",
		 filename);
	fprintf(stderr, "%s\n", tmp_string);
	tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
			   0, 0, 0, tmp_string);
	tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_FAIL);
    } else {
	tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_PASS);
    }
    tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count);

    return;
}
