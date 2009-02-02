/*
 * example tetj-using program, used as a primitive self-test
 *
 * Copyright (c) 2002-2009, Linux Foundation
 * All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 
 *     * Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in the
 * documentation and/or other materials provided with the distribution.
 *     * Neither the name of the Linux Foundation nor the names of its
 * contributors may be used to endorse or promote products derived from
 * this software without specific prior written permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED
 * TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <stdio.h>
#include <stdlib.h>
#include "tetj.h"

struct teststuff {
    char *data;
    int resultcode;
} teststuff_data[] = {
    {"red", TETJ_PASS},
    {"green", TETJ_FAIL},
    {"blue", TETJ_UNRESOLVED},
    {"white", TETJ_NOTINUSE},
    {"black", TETJ_UNSUPPORTED},
    {"purple", TETJ_UNTESTED},
    {"teal", TETJ_UNINITIATED},
    {"yellow", TETJ_UNREPORTED},
    {"orange", TETJ_WARNING},
    {"plum", TETJ_FIP},
    {"foxglove", TETJ_NOTIMP},
    {"alabaster", TETJ_UNAPPROVE},
    {NULL, 0}
};

#define TMP_STRING_SIZE (1024)

int
main() {
    struct tetj_handle *journal;
    char tmp_string[TMP_STRING_SIZE + 1];
    char journal_filename[TMP_STRING_SIZE + 1];
    struct teststuff *tp;

    snprintf(journal_filename, TMP_STRING_SIZE, "journal.tetjtest");
    if (tetj_start_journal(journal_filename, &journal, "tetjtest") != 0) {
	snprintf(tmp_string, TMP_STRING_SIZE,
		 "Could not open journal file %s", journal_filename);
	perror(tmp_string);
	exit(1);
    }
    printf("tetjtest: writing journal to %s\n", journal_filename);

    snprintf(tmp_string, TMP_STRING_SIZE, "VSX_NAME=tetjtest 0.1 (%s)", tetj_arch);
    tetj_add_config(journal, tmp_string);
    tetj_config_end(journal);
    tetj_scenario_info(journal, "\"total tests in tetjtest 24\"");

    tetj_testcase_start(journal, tetj_activity_count, "foo", "");
    tetj_tp_count = 1;
    for (tp = teststuff_data; tp->data != NULL; tp++) {
      snprintf(tmp_string, TMP_STRING_SIZE, "TP Start, %s", tp->data);
      tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count, tmp_string);
      tetj_result(journal, tetj_activity_count, tetj_tp_count, tp->resultcode);
      tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count++);
    }
    tetj_testcase_end(journal, tetj_activity_count++, 0, "");

    tetj_testcase_start(journal, tetj_activity_count, "bar", "");
    tetj_tp_count = 1;
    for (tp = teststuff_data; tp->data != NULL; tp++) {
      snprintf(tmp_string, TMP_STRING_SIZE, "TP Start, %s", tp->data);
      tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count, tmp_string);
      tetj_result(journal, tetj_activity_count, tetj_tp_count, tp->resultcode);
      tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count++);
    }
    tetj_testcase_end(journal, tetj_activity_count++, 0, "");

    tetj_close_journal(journal);
    exit (0);
}
