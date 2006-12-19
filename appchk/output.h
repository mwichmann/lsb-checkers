/*
 * output.h - macros for controlling appchk output.
 *
 * Copyright 2006 Free Standards Group.
 * License information for this file should be found in the file
 * "LICENSE".  If this file is missing, please contact us for proper
 * license information.  Current contact information can be found at
 * http://www.freestandards.org/.
 */

#ifndef __OUTPUT_H
#define __OUTPUT_H

#include <stdio.h>
#include "../tetj/tetj.h"

extern int do_journal;
extern struct tetj_handle *journal;

int output_open(const char *filename);

void output_use(FILE *file);

void output_do_missing_symbols();

void output_close();

void output_testcase_start(unsigned int activity, const char *testcase,
                           const char *message);

void output_testcase_end(unsigned int activity, unsigned int status,
                         const char *message);

void output_purpose_start(unsigned int activity, unsigned int tpnumber,
                          const char *message);

void output_purpose_end(unsigned int activity, unsigned int tpnumber);

void output_info(unsigned int activity, unsigned int tpnumber,
                 unsigned int context, unsigned int block,
                 unsigned int sequence, const char *message);

void output_result(unsigned int activity, unsigned int tpnumber,
                   enum testcase_results result);

void output_report_missing_symbol(const char *symbol);

#define TESTCASE_START(activity, tcase, msg) \
    if (do_journal) \
        tetj_testcase_start(journal, activity, tcase, msg); \
    else \
        output_testcase_start(activity, tcase, msg)

#define PURPOSE_START(activity, tpnum, msg) \
    if (do_journal) \
        tetj_purpose_start(journal, activity, tpnum, msg); \
    else \
        output_purpose_start(activity, tpnum, msg)

#define PURPOSE_END(activity, tpnum) \
    if (do_journal) \
        tetj_purpose_end(journal, activity, tpnum); \
    else \
        output_purpose_end(activity, tpnum)

#define TESTCASE_END(activity, status, msg) \
    if (do_journal) \
        tetj_testcase_end(journal, activity, status, msg); \
    else \
        output_testcase_end(activity, status, msg)

#define TESTCASE_INFO(activity, tpnum, context, block, seq, msg) \
    if (do_journal) \
        tetj_testcase_info(journal, activity, tpnum, \
                           context, block, seq, msg); \
    else \
        output_info(activity, tpnum, context, block, seq, msg)

#define RESULT(activity, tpnum, result) \
    if (do_journal) tetj_result(journal, activity, tpnum, result); \
    else output_result(activity, tpnum, result)

#endif /* __OUTPUT_H */
