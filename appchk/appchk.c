#include <stdio.h>
#include <getopt.h>
#include <string.h>
#include <stdlib.h>
#include <libgen.h>
#include <limits.h>
#include "../tetj/tetj.h"
#include "check_file.h"
#include "libraries.h"
#include "symbols.h"


char *concat_string(char *input, char *addition)
{
    char *tmp;
    if (input) {
	tmp = realloc(input, strlen(input) + strlen(addition) + 1);
	if (!tmp)
	    abort();
	return strcat(tmp, addition);
    } else {
	return strdup(addition);
    }
}

/* Real CVS revision number so we can strings it from
   the binary if necessary */
static const char *__attribute((unused)) appchk_revision =
    "$Revision: 1.27 $";


int main(int argc, char *argv[])
{
    signed char c;
    ElfFile *elffile;
    struct tetj_handle *journal;
    char *command_line = NULL;
    int i;
    char *extra_libraries;
    char **extra_lib_list = NULL;
    int extra_lib_count = 0;
#define TMP_STRING_SIZE (PATH_MAX+20)
    char tmp_string[TMP_STRING_SIZE + 1];
    char journal_filename[TMP_STRING_SIZE + 1];
    int overrideJournalFilename = 0;
    int modules = LSB_Core;		/* default module list to check */

    extra_libraries = strdup("EXTRA_LIBRARIES=");

    for (i = 0; i < argc; i++) {
	command_line = concat_string(command_line, argv[i]);
	command_line = concat_string(command_line, " ");
    }

    /* Parse options */
    while (1) {
	c = getopt(argc, argv, "L:o:M:A");
	if (c == -1)
	    break;
	switch (c) {
	case 'L':
	    printf("Adding symbols for library %s\n", optarg);
	    extra_lib_count++;
	    extra_lib_list = realloc(extra_lib_list,
				     sizeof(char *) * extra_lib_count);
	    extra_lib_list[extra_lib_count - 1] = strdup(optarg);
	    extra_libraries = concat_string(extra_libraries, optarg);
	    extra_libraries = concat_string(extra_libraries, " ");
	    break;

	case 'M':
	    modules |= getmoduleval(optarg);
	    printf("also checking symbols in module %s\n", optarg);
	    break;

	case 'A':
	    modules = LSB_All_Modules;
	    printf("Checking symbols in all modules\n");
	    break;

	case 'o':
	    strncpy(journal_filename, optarg, TMP_STRING_SIZE);
	    overrideJournalFilename = 1;
	    break;

	default:
	    printf("?? getopt returned character code 0%o ??\n", c);
	}
    }

    if (optind >= argc && !extra_lib_count) {
	fprintf(stderr,
		"usage: %s [-o outputfile ] [-A] [-M modulename]... [-L pathtolib]... appname\n",
		argv[0]);
	exit(1);
    }

    printf("%s for LSB Specification " LSBVERSION " \n", argv[0]);

    /* Start journal logging */
    if (!overrideJournalFilename) {
		if (optind >= argc && extra_lib_count) {
		    /* No binary supplied on command line */
		    if (extra_lib_count == 1) {
		       snprintf(journal_filename, TMP_STRING_SIZE, "journal.appchk.%s",
					basename(extra_lib_list[0]));
		    } else {
		       snprintf(journal_filename, TMP_STRING_SIZE, "journal.appchk.DSO");
		    }
		} else {
			snprintf(journal_filename, TMP_STRING_SIZE, "journal.appchk.%s",
			 basename(argv[optind]));
		}
    }
    if (tetj_start_journal(journal_filename, &journal, command_line) != 0) {
	printf("Could not open journal file %s for output..exiting\n",
	       journal_filename);
	printf
	    ("Use -o <filename> to specify an alternate location for the journal file\n");
	exit(1);
    }

    /* Log version number for lsbapp package */
    snprintf(tmp_string, TMP_STRING_SIZE,
	     "VSX_NAME=lsbappchk " LSBAPPCHK_VERSION);
    tetj_add_config(journal, tmp_string);
    snprintf(tmp_string, TMP_STRING_SIZE, "LSB_VERSION= " LSBVERSION);
    tetj_add_config(journal, tmp_string);
    snprintf(tmp_string, TMP_STRING_SIZE, "LSB_MODULES=%s",
	     getmodulename(modules));
    tetj_add_config(journal, tmp_string);

    /* Log extra libraries to look for symbols in */
    if (extra_lib_count)
	tetj_add_config(journal, extra_libraries);

    /* Add all extra libs to DT_NEEDED list */
    for (i = 0; i < extra_lib_count; i++)
	addDTNeeded(extra_lib_list[i]);

    /* Add symbols from extra libs to list */
    for (i = 0; i < extra_lib_count; i++) {
	tetj_testcase_start(journal, tetj_activity_count, extra_lib_list[i],"");
	tetj_tp_count = 0;
	elffile = OpenElfFile(extra_lib_list[i]);
	if (elffile == NULL) {
	    /* make a dummy container if it failed to open */
	    snprintf(tmp_string, TMP_STRING_SIZE, "Opening lib %s",
	                                          extra_lib_list[i]);
	    tetj_purpose_start(journal, tetj_activity_count, ++tetj_tp_count,
			       tmp_string);
	    snprintf(tmp_string, TMP_STRING_SIZE, "Could not open %s",
	                                           extra_lib_list[i]);
	    perror(tmp_string);
	    tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count, 
		               0, 0, 0, tmp_string);
	    tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_FAIL);
	    tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count);
	    tetj_testcase_end(journal, tetj_activity_count++, 0, "");
	    continue;
	}
	check_file(elffile, journal, ELF_IS_DSO);
	add_library_symbols(elffile, journal, modules);
	tetj_testcase_end(journal, tetj_activity_count++, 0, "");
	CloseElfFile(elffile);
    }

    /* Check all extra libs */
    for (i = 0; i < extra_lib_count; i++) {
	snprintf(tmp_string, TMP_STRING_SIZE, "%s-pass2", extra_lib_list[i]);
	tetj_testcase_start(journal, tetj_activity_count, tmp_string,"");
	tetj_tp_count = 0;

	elffile = OpenElfFile(extra_lib_list[i]);
	if (elffile == NULL) {
	    /* make a dummy container if it failed to open */
	    snprintf(tmp_string, TMP_STRING_SIZE, "Opening lib %s",
	                                           extra_lib_list[i]);
	    tetj_purpose_start(journal, tetj_activity_count, ++tetj_tp_count,
			       tmp_string);
	    snprintf(tmp_string, TMP_STRING_SIZE, "Could not open %s",
	                                           extra_lib_list[i]);
	    perror(tmp_string);
	    tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count, 
		               0, 0, 0, tmp_string);
	    tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_FAIL);
	    tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count);
	    tetj_testcase_end(journal, tetj_activity_count++, 0, "");
	    continue;
	}
	check_lib(elffile, journal, ELF_IS_DSO, modules);
	tetj_testcase_end(journal, tetj_activity_count++, 0, "");
	CloseElfFile(elffile);
    }

    /* Check binary */
    for (i = optind; i < argc; i++) {
	printf("Checking binary %s\n", argv[i]);
	tetj_testcase_start(journal, tetj_activity_count, argv[i], "");
	tetj_tp_count = 0;

	elffile = OpenElfFile(argv[i]);
	if (elffile == NULL) {
	    /* make a dummy container if it failed to open */
	    snprintf(tmp_string, TMP_STRING_SIZE, "Opening binary %s", argv[i]);
	    tetj_purpose_start(journal, tetj_activity_count, ++tetj_tp_count,
			       tmp_string);
	    snprintf(tmp_string, TMP_STRING_SIZE, "Could not open %s", argv[i]);
	    perror(tmp_string);
	    tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count, 
		               0, 0, 0, tmp_string);
	    tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_FAIL);
	    tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count);
	    tetj_testcase_end(journal, tetj_activity_count++, 0, "");
	    continue;
	}
	check_file(elffile, journal, ELF_IS_EXEC);
	checksymbols(elffile, journal, modules);
	tetj_testcase_end(journal, tetj_activity_count++, 0, "");
	CloseElfFile(elffile);
    }
    tetj_close_journal(journal);
    exit(0);
}
