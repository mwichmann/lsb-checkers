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

/* Extern variables used by the macros. */

int do_journal = 0;
struct tetj_handle *journal = NULL;

/* Shared variables. */

FILE *output_file = NULL;

int output_open(const char *filename)
{
    output_file = fopen(filename, "w");
    return (output_file != NULL);
}

void output_use(FILE *file)
{
    output_file = file;
}

void output_info(unsigned int activity, unsigned int tpnumber,
                 unsigned int context, unsigned int block,
                 unsigned int sequence, const char *message)
{
}

void output_result(unsigned int activity, unsigned int tpnumber,
                   enum testcase_results result)
{
}
