/*
 * output.h - macros for controlling appchk output.
 *
 * Copyright 2006 Free Standards Group.
 * License information for this file should be found in the file
 * "LICENSE".  If this file is missing, please contact us for proper
 * license information.  Current contact information can be found at
 * http://www.freestandards.org/.
 */

#include "output.h"

int do_journal;
struct tetj_handle *journal;

void output_info(unsigned int activity, unsigned int tpnumber,
                 unsigned int context, unsigned int block,
                 unsigned int sequence, const char *message)
{
}

void output_result(unsigned int activity, unsigned int tpnumber,
                   enum testcase_results result)
{
}
