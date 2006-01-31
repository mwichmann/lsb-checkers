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


char *
concat_string(char *input, char *addition)
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

/* Real CVS revision number so we can strings it from the binary if necessary */
static const char *__attribute((unused)) appchk_revision =
    "$Revision: 1.31 $";

void
usage(char *progname)
{
  printf("usage: %s [options] appname ...\n"
"  -h, --help                     show this help message and exit\n"
"  -v, --version                  show version and LSB version\n"
"  -n, --nojournal                do not write a journal file\n"
"  -T, --lsb-product=[core|desktop]\n"
"                                 target product to load modules for\n"
"  -M MODULE, --module=MODULE     add MODULE to list of checked modules\n"
"  -L LIB                         add LIB to list of checked libraries\n"
"  -j JOURNAL, --journal=JOURNAL  use JOURNAL as file/path for journal file\n",
progname);
}

int
main(int argc, char *argv[])
{
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
    int modules = 0;
    int option_index = 0;


    char *s = getenv("LSB_PRODUCT");
    if(s) {
        if(strcasecmp(s, "core") == 0)
            modules = LSB_Core | LSB_Graphics | LSB_Cpp;
        else if(strcasecmp(s, "desktop") == 0 || strcasecmp(s, "all") == 0)
            modules = LSB_All_Modules;
        else {
            printf("warning: env var LSB_PRODUCT specifies an invalid product, ignoring it.\n");
            modules = LSB_Core | LSB_Graphics | LSB_Cpp;
        }
    } else
        modules = LSB_Core | LSB_Graphics | LSB_Cpp;

    extra_libraries = strdup("EXTRA_LIBRARIES=");

    for (i = 0; i < argc; i++) {
	command_line = concat_string(command_line, argv[i]);
	command_line = concat_string(command_line, " ");
    }

    while (1) {
	int c;
	static struct option long_options[] = {
	    {"help",     no_argument,        NULL, 'h'},
	    {"version",  no_argument,        NULL, 'v'},
	    {"nojournal",no_argument,        NULL, 'n'},
	    {"module",   required_argument,  NULL, 'M'},
	    {"journal",  required_argument,  NULL, 'j'},
	    {"lsb-product", required_argument,  NULL, 'T'},
	    {0, 0, 0, 0}
      };

      c = getopt_long (argc, argv, "hvnAM:L:j:T:", long_options, &option_index);
      if (c == -1)
	  break;
      switch (c) {
	  case 'h':
	      usage(argv[0]);
	      exit (0);
	  case 'v':
	      printf("%s %s for LSB Specification %s\n", argv[0],
		     LSBAPPCHK_VERSION, LSBVERSION);
	      break;
	  case 'n':
	      snprintf(journal_filename, TMP_STRING_SIZE, "/dev/null");
	      overrideJournalFilename = 1;
	      break;
	   case 'T':
	      if(strcasecmp(optarg, "core") == 0)
		modules = LSB_Core | LSB_Graphics | LSB_Cpp;
	      else if(strcasecmp(optarg, "desktop") == 0 || strcasecmp(optarg, "all") == 0)
		modules = LSB_All_Modules;
	      else {
		printf("product '%s' is not valid!\n", optarg);
		usage(argv[0]);
		exit(1);
	      }
	      break;
	  case 'M':
	      modules |= getmoduleval(optarg);
	      printf("also checking symbols in module %s\n", optarg);
	      break;
	  case 'L':
	      printf("Adding symbols for library %s\n", optarg);
	      extra_lib_count++;
	      extra_lib_list = realloc(extra_lib_list, 
				       sizeof(char *)*extra_lib_count);
	      extra_lib_list[extra_lib_count-1] = strdup(optarg);
	      extra_libraries = concat_string(extra_libraries, optarg);
	      extra_libraries = concat_string(extra_libraries, " ");
	      break;
	  case 'j':
	      snprintf(journal_filename, TMP_STRING_SIZE, optarg);
	      overrideJournalFilename = 1;
	      break;
	  default:
	      usage(argv[0]);
	      exit (0);
	}
    }
    if (optind >= argc && !extra_lib_count) {
	usage(argv[0]);
	exit (1);
    }

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
	snprintf(tmp_string, TMP_STRING_SIZE, "Could not open journal file %s",
		 journal_filename);
	perror(tmp_string);
	printf("Use -j JOURNAL to specify an alternate location for the journal file\n");
	exit(1);
    }

    /*
     * new journal standard requires arch in the
     * VSX_NAME line in order to fetch waiver files correctly
     */
    snprintf(tmp_string, TMP_STRING_SIZE,
	     "VSX_NAME=lsbappchk %s (%s)", LSBAPPCHK_VERSION, tetj_arch);
    tetj_add_config(journal, tmp_string);
    snprintf(tmp_string, TMP_STRING_SIZE, "LSB_VERSION=%s" LSBVERSION);
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
