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

#include "../tetj/tetj.h"

extern int do_journal;
extern struct tetj_handle *journal;

void output_info(unsigned int activity, unsigned int tpnumber,
                 unsigned int context, unsigned int block,
                 unsigned int sequence, const char *message);

void output_result(unsigned int activity, unsigned int tpnumber,
                   enum testcase_results result);

#define TESTCASE_START(activity, tcase, msg) \
    if (do_journal) tetj_testcase_start(journal, activity, tcase, msg)

#define PURPOSE_START(activity, tpnum, msg) \
    if (do_journal) tetj_purpose_start(journal, activity, tpnum, msg)

#define PURPOSE_END(activity, tpnum) \
    if (do_journal) tetj_purpose_end(journal, activity, tpnum)

#define TESTCASE_END(activity, status, msg) \
    if (do_journal) tetj_testcase_end(journal, activity, status, msg)

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
