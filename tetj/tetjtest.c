/*
 * example tetj-using program, used as a primitive self-test
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
