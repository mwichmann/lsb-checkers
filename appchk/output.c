/*
 * output.c - alternative output methods for appchk.
 *
 * Copyright 2006 Free Standards Group.
 * License information for this file should be found in the file
 * "LICENSE".  If this file is missing, please contact us for proper
 * license information.  Current contact information can be found at
 * http://www.linux-foundation.org/.
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
FILE *alt_output_file = NULL;

unsigned int current_activity;
unsigned int current_tpnum;
unsigned int current_failures;
enum testcase_results current_result;
char *current_testcase = NULL;
char *current_purpose = NULL;
int is_blank_report = 1;
int wrote_header = 0;

struct message_list {
    char *message;
    struct message_list *next;
} *current_messages = NULL;

struct symbol_list {
    char *testcase;
    char *symbol;
    struct symbol_list *next;
} *current_symbols = NULL;

/* Architecture setting. */

#if __i386__
#define ARCH "IA32"
#elif __x86_64__
#define ARCH "AMD64"
#elif __powerpc__ && __powerpc64__
#define ARCH "PPC64"
#elif __powerpc__
#define ARCH "PPC32"
#elif __ia64__
#define ARCH "IA64"
#elif __s390__ && _s390x__
#define ARCH "S390X"
#elif __s390__
#define ARCH "S390"
#else
#define ARCH "UNKNOWN"
#endif

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

void free_symbols()
{
    struct symbol_list *s1, *s2;

    s1 = s2 = current_symbols;
    while (s1 != NULL) {
        s2 = s1->next;
        free(s1->testcase);
        free(s1->symbol);
        free(s1);
        s1 = s2;
    }

    current_symbols = NULL;
}

void output_cleanup()
{
    free_messages();
    free_symbols();
    if (current_testcase != NULL) {
        free(current_testcase);
        current_testcase = NULL;
    }
}

void output_header()
{
    if (alt_output_file != NULL) {
        fprintf(alt_output_file,
"LSB Unknown Symbol Report\n"
"=========================\n\n");
    } else {
        fprintf(output_file,
"LSB Application Checker Report\n"
"==============================\n\n");
    }
}

void output_subheader(const char *testgroup_name)
{
    fprintf(output_file,
            "Binary %s:\n", 
            testgroup_name);
}

void output_sort_missing_symbols()
{
    /* Nothing here yet - figure out the most requested sort options. */
}

void output_write_missing_symbols()
{
    struct symbol_list *s;
    char *this_testcase = "";

    output_sort_missing_symbols();

    if (current_symbols == NULL) {
        fprintf(alt_output_file, "No unspecified symbols were found.\n");
    } else {
        s = current_symbols;
        while (s != NULL) {
            if (strcmp(this_testcase, s->testcase) != 0) {
                fprintf(alt_output_file, "\nTest %s\n", s->testcase);
                fprintf(alt_output_file, "The following symbols were found, but are not supported in the LSB:\n");
                this_testcase = s->testcase;
            }
            fprintf(alt_output_file, "  %s\n", s->symbol);
            s = s->next;
        }
    }
}

int output_open(const char *filename)
{
    output_cleanup();
    output_file = fopen(filename, "w");
    return (output_file != NULL);
}

void output_use(FILE *file)
{
    output_cleanup();
    output_file = file;
}

void output_do_missing_symbols()
{
    alt_output_file = output_file;
    output_file = fopen("/dev/null", "w");
}

void output_close()
{
    if (alt_output_file) {
        output_write_missing_symbols();
        fclose(alt_output_file);
    } else if (is_blank_report) {
        fprintf(output_file, "No LSB compliance issues were found.\n");
    }

    fclose(output_file);
    output_cleanup();
}

void output_testcase_start(unsigned int activity, const char *testcase,
                           const char *message)
{
    if (!wrote_header) {
        output_header();
        wrote_header = 1;
    }

    current_activity = activity;
    current_testcase = strdup(testcase);
    current_failures = 0;
    output_subheader(testcase);
}

void output_testcase_end(unsigned int activity, unsigned int status,
                         const char *message)
{
    free(current_testcase);
    current_testcase = NULL;

    if (!current_failures) {
        fprintf(output_file, "  No failures found.\n");
    }

    fprintf(output_file, "\n");
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

    if (current_result != TETJ_PASS) {
        current_failures++;

        is_blank_report = 0;

        prepared = stringprep(current_testcase);
        snprintf(urlbuf, PATH_MAX, 
                 "http://developer.linux-foundation.org/lsbchk?suite=appchk&arch=%s&testcase=%s&tpnum=%u&result=%s",
                 ARCH, prepared, tpnumber, translate_result(current_result));

        if (current_purpose != NULL) {
            prepared = stringprep(current_purpose);
            snprintf(purposebuf, PATH_MAX, "&purpose=%s", prepared);
            strncat(urlbuf, purposebuf, PATH_MAX);
        }

        fprintf(output_file, "  %s\n", translate_result(current_result));
        for (m = current_messages; m != NULL; m = m->next) {
            fprintf(output_file, "  %s\n", m->message);
        }

        fprintf(output_file, "  URL: %s\n", urlbuf);

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

void output_report_missing_symbol(const char *symbol)
{
    struct symbol_list *s1, *s2;

    s1 = (struct symbol_list *) malloc(sizeof(struct symbol_list));
    if (s1 == NULL)
        return;

    s1->next = NULL;

    if (current_testcase == NULL) {
        s1->testcase = NULL;
    } else {
        s1->testcase = strdup(current_testcase);
    }
    s1->symbol = strdup(symbol);
    if ((s1->testcase == NULL) || (s1->symbol == NULL)) {
        if (s1->testcase != NULL) free(s1->testcase);
        if (s1->symbol != NULL) free(s1->symbol);
        free(s1);
        return;
    }

    if (current_symbols == NULL) {
        current_symbols = s1;
    } else {
        s2 = current_symbols;
        while (s2->next != NULL)
            s2 = s2->next;
        s2->next = s1;
    }
}
