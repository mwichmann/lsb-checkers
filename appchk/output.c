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

char *translate_result(enum testcase_results result)
{
    char *result_str;

    switch (result) {
    case TETJ_PASS:
        result_str = "PASS";
        break;
    case TETJ_FAIL:
        result_str = "FAIL";
        break;
    case TETJ_UNRESOLVED:
        result_str = "UNRESOLVED";
        break;
    case TETJ_NOTINUSE:
        result_str = "NOTINUSE";
        break;
    case TETJ_UNSUPPORTED:
        result_str = "UNSUPPORTED";
        break;
    case TETJ_UNTESTED:
        result_str = "UNTESTED";
        break;
    case TETJ_UNINITIATED:
        result_str = "UNITIATED";
        break;
    case TETJ_UNREPORTED:
        result_str = "UNREPORTED";
        break;
    case TETJ_WARNING:
        result_str = "WARNING";
        break;
    case TETJ_FIP:
        result_str = "FIP";
        break;
    case TETJ_NOTIMP:
        result_str = "NOTIMP";
        break;
    case TETJ_UNAPPROVE:
        result_str = "UNAPPROVE";
        break;
    default:
        result_str = "UNKNOWN";
    }

    return result_str;
}

int output_open(const char *filename)
{
    output_file = fopen(filename, "w");
    return (output_file != NULL);
}

void output_use(FILE *file)
{
    output_file = file;
}

void output_close()
{
    fclose(output_file);
}

void output_info(unsigned int activity, unsigned int tpnumber,
                 unsigned int context, unsigned int block,
                 unsigned int sequence, const char *message)
{
    fprintf(output_file, 
            "INFO: activity %u, num %u, context %u, block %u, seq %u\n  %s",
            activity, tpnumber, context, block, sequence, message);
}

void output_result(unsigned int activity, unsigned int tpnumber,
                   enum testcase_results result)
{
    char *result_str = translate_result(result);

    fprintf(output_file, "RESULT: activity %u, num %u, result %s\n",
            activity, tpnumber, result_str);
}
