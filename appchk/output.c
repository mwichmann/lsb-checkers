/*
 * output.c - alternative output methods for appchk.
 *
 * Copyright 2006 Free Standards Group.
 * License information for this file should be found in the file
 * "LICENSE".  If this file is missing, please contact us for proper
 * license information.  Current contact information can be found at
 * http://www.freestandards.org/.
 */

#include "output.h"
#include <string.h>
#include <stdlib.h>
#include <limits.h>

/* Extern variables used by the macros. */

int do_journal = 0;
struct tetj_handle *journal = NULL;

/* Shared variables. */

FILE *output_file = NULL;

unsigned int current_activity;
unsigned int current_tpnum;
enum testcase_results current_result;
char *current_testcase = NULL;
char *current_purpose = NULL;
int is_blank_report = 1;

struct message_list {
    char *message;
    struct message_list *next;
} *current_messages = NULL;

char *stringprep(const char *src)
{
    char *result = strdup(src);
    int index = 0;
    char newchars[80];
    char *valid_chars = "1234567890ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz:/._-$(){}~";

    while (result[index] != '\0') {
        newchars[0] = '\0';

        if (strchr(valid_chars, result[index]) == NULL) {
            snprintf(newchars, 80, "%%%02hhX", result[index]);
        }

        if (newchars[0] != '\0') {
            result = (char *)realloc(result,
                                     strlen(result) + strlen(newchars) + 1);
            memmove(result + index + strlen(newchars), result + index + 1,
                    strlen(result) - index);
            memcpy(result + index, newchars, strlen(newchars));
            index += strlen(newchars);
        } else {
            index++;
        }
    }

    return result;
}

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

void add_message(const char *message)
{
    struct message_list *m;

    if (message == NULL)
        return;

    if (current_messages == NULL) {
        current_messages = 
            (struct message_list *)malloc(sizeof(struct message_list));
        m = current_messages;
    } else {
        m = current_messages;
        while (m->next != NULL)
            m = m->next;
        m->next = (struct message_list *)malloc(sizeof(struct message_list));
        m = m->next;
    }

    m->next = NULL;
    m->message = strdup(message);
}

void free_messages()
{
    struct message_list *m1, *m2;

    m1 = m2 = current_messages;
    while (m1 != NULL) {
        m2 = m1->next;
        free(m1->message);
        free(m1);
        m1 = m2;
    }

    current_messages = NULL;
}

void output_cleanup()
{
    free_messages();
    if (current_testcase != NULL) {
        free(current_testcase);
        current_testcase = NULL;
    }
}

void output_header()
{
    fprintf(output_file,
"LSB Application Checker Report\n"
"==============================\n\n");
}

int output_open(const char *filename)
{
    output_cleanup();
    output_file = fopen(filename, "w");
    if (output_file != NULL) {
        output_header();
        return 1;
    } else {
        return 0;
    }
}

void output_use(FILE *file)
{
    output_cleanup();
    output_file = file;
    output_header();
}

void output_close()
{
    if (is_blank_report) {
        fprintf(output_file, "No LSB compliance issues were found.\n");
    }

    fclose(output_file);
    output_cleanup();
}

void output_testcase_start(unsigned int activity, const char *testcase,
                           const char *message)
{
    current_activity = activity;
    current_testcase = strdup(testcase);
}

void output_testcase_end(unsigned int activity, unsigned int status,
                         const char *message)
{
    free(current_testcase);
    current_testcase = NULL;
}

void output_purpose_start(unsigned int activity, unsigned int tpnumber,
                          const char *message)
{
    current_tpnum = tpnumber;
    if ((message != NULL) && (strlen(message) > 0))
        current_purpose = strdup(message);
    else
        current_purpose = NULL;
}

void output_purpose_end(unsigned int activity, unsigned int tpnumber)
{
    struct message_list *m;
    char *prepared;
    char urlbuf[PATH_MAX];
    char purposebuf[PATH_MAX];

    prepared = stringprep(current_testcase);
    snprintf(urlbuf, PATH_MAX, 
             "http://developer.freestandards.org/lsbchk_redirect.php?suite=appchk&testcase=%s&tpnum=%u&result=%s",
             prepared, tpnumber, translate_result(current_result));

    if (current_result != TETJ_PASS) {
        is_blank_report = 0;
        if (current_purpose != NULL) {
            fprintf(output_file, "%s %u (%s) - %s\n", current_testcase,
                    tpnumber, current_purpose, 
                    translate_result(current_result));

            prepared = stringprep(current_purpose);
            snprintf(purposebuf, PATH_MAX, "&purpose=%s", prepared);
            strncat(urlbuf, purposebuf, PATH_MAX);
        } else {
            fprintf(output_file, "%s %u - %s\n", current_testcase,
                    tpnumber, translate_result(current_result));
        }
        fprintf(output_file, "URL: %s\n", urlbuf);
        for (m = current_messages; m != NULL; m = m->next) {
            fprintf(output_file, "  %s\n", m->message);
        }

        fprintf(output_file, "\n");
    }

    free_messages(current_messages);
    if (current_purpose != NULL)
        free(current_purpose);
    current_purpose = NULL;
}

void output_info(unsigned int activity, unsigned int tpnumber,
                 unsigned int context, unsigned int block,
                 unsigned int sequence, const char *message)
{
    add_message(message);
}

void output_result(unsigned int activity, unsigned int tpnumber,
                   enum testcase_results result)
{
    current_result = result;
}
