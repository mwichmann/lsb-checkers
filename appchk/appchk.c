#include <stdio.h>
#include <getopt.h>
#include <string.h>
#include <stdlib.h>
#include <libgen.h>
#include <limits.h>
#include <sys/types.h>
#include <dirent.h>
#include "../tetj/tetj.h"
#include "check_file.h"
#include "libraries.h"
#include "symbols.h"
#include "output.h"


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

/* 
 * Add all the libraries in a directory to the library list.
 * "path" is the directory's path, "list" is a list of extra libs
 * allocated on the heap (and thus resizeable via realloc), and
 * "list_size" is the current size of the list.  Returns the new
 * size of the list, or -1 if there is an error.
 */
int
add_library_dir(const char *path, char ***list, int list_size)
{
  struct dirent *direntry;
  DIR *dir = opendir(path);
  int found_lib;
  int count = list_size;
  char *suffix;
  char buf[PATH_MAX + 1];

  if (dir == NULL) {
    perror("could not open library dir");
    return -1;
  }

  for (direntry = readdir(dir); direntry != NULL; direntry = readdir(dir)) {
    found_lib = 0;

    suffix = direntry->d_name;
    while (*suffix) suffix++;
    suffix -= 3;
    if (suffix < direntry->d_name)
      continue;
    if (strcmp(suffix, ".so") == 0)
      found_lib = 1;

    if (found_lib) {
      strncpy(buf, path, PATH_MAX - strlen(direntry->d_name) - 1);
      if (buf[strlen(buf) - 1] != '/')
        strcat(buf, "/");
      strncat(buf, direntry->d_name, PATH_MAX - strlen(path) - 1);

      count++;
      *list = realloc(*list, sizeof(char *) * count);
      (*list)[count - 1] = strdup(buf);
    }
  }

  return count;
}

/* Real CVS revision number so we can strings it from the binary if necessary */
static const char *__attribute((unused)) appchk_revision =
    "$Revision: 1.34 $";

void
usage(char *progname)
{
  printf("usage: %s [options] appname ...\n"
"  -h, --help                     show this help message and exit\n"
"  -v, --version                  show version and LSB version\n"
"  -j, --journal                  write a journal file\n"
"  -n, --no-journal               do not write a journal file\n"
//"  -T, --lsb-product=[core|desktop]\n"
//"                                 target product to load modules for\n"
"  -M MODULE, --module=MODULE     add MODULE to list of checked modules\n"
"  -L LIB                         add LIB to list of checked libraries\n"
"  -D DIR[:DIR...], --shared-libpath=DIR[:DIR...]\n"
"                                 add all libs in DIR to checked lib list\n"
"  -o FILE, --output-file=FILE    write output to FILE\n",
progname);
}

int
main(int argc, char *argv[])
{
    ElfFile *elffile;
    char *command_line = NULL;
    char *token;
    int i;
    char *extra_libraries;
    char **extra_lib_list = NULL;
    int extra_lib_count = 0;
#define TMP_STRING_SIZE (PATH_MAX+20)
    char tmp_string[TMP_STRING_SIZE + 1];
    char output_filename[TMP_STRING_SIZE + 1];
    int modules = 0;
    int option_index = 0;


/* Ignore LSB_PRODUCT env variable for LSB 3.1
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
*/
    modules = LSB_Desktop_Modules;   // default to all modules in cert program

    /* Set defaults. */
    do_journal = 0;
    output_filename[0] = '\0';

    for (i = 0; i < argc; i++) {
	command_line = concat_string(command_line, argv[i]);
	command_line = concat_string(command_line, " ");
    }

    while (1) {
	int c;
	static struct option long_options[] = {
	    {"help",     no_argument,          NULL, 'h'},
	    {"version",  no_argument,          NULL, 'v'},
	    {"journal",  no_argument,          NULL, 'j'},
            {"no-journal", no_argument,        NULL, 'n'},
	    {"output-file", required_argument, NULL, 'o'},
	    {"module",   required_argument,    NULL, 'M'},
	    {"lsb-product", required_argument, NULL, 'T'},
	    {"shared-libpath", required_argument, NULL, 'D'},
	    {0, 0, 0, 0}
      };

      c = getopt_long (argc, argv, "hnjvAo:M:L:T:D:", 
                       long_options, &option_index);
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
	   case 'T':
/* Ignore -T completely for LSB 3.1
	      if(strcasecmp(optarg, "core") == 0)
		modules = LSB_Core | LSB_Graphics | LSB_Cpp;
	      else if(strcasecmp(optarg, "desktop") == 0 || strcasecmp(optarg, "all") == 0)
		modules = LSB_All_Modules;
	      else {
		printf("product '%s' is not valid!\n", optarg);
		usage(argv[0]);
		exit(1);
	      }
*/
	      break;
	  case 'M':
	      modules |= getmoduleval(optarg);
	      printf("also checking symbols in module %s\n", optarg);
	      break;
	  case 'L':
	      extra_lib_count++;
	      extra_lib_list = realloc(extra_lib_list, 
				       sizeof(char *)*extra_lib_count);
	      extra_lib_list[extra_lib_count-1] = strdup(optarg);
	      break;
          case 'D':
              for (token = strtok(optarg, ":"); token != NULL; 
                   token = strtok(NULL, ":")) {
                extra_lib_count = add_library_dir(token, &extra_lib_list, 
                                                  extra_lib_count);
                if (extra_lib_count < 0)
                  exit(1);
              }
              break;
          case 'o':
              snprintf(output_filename, TMP_STRING_SIZE, optarg);
              break;
	  case 'j':
              do_journal = 1;
	      break;
          case 'n':
              do_journal = 0;
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

    extra_libraries = strdup("EXTRA_LIBRARIES=");
    for (i = 0; i < extra_lib_count; i++) {
      extra_libraries = concat_string(extra_libraries, extra_lib_list[i]);
      extra_libraries = concat_string(extra_libraries, " ");
    }

    /* Start journal logging */
    if (do_journal) {
        if (output_filename[0] == '\0') {
            if (optind >= argc && extra_lib_count) {
                /* No binary supplied on command line */
                if (extra_lib_count == 1) {
                    snprintf(output_filename, TMP_STRING_SIZE, "journal.appchk.%s",
                             basename(extra_lib_list[0]));
                } else {
                    snprintf(output_filename, TMP_STRING_SIZE, "journal.appchk.DSO");
                }
            } else {
                snprintf(output_filename, TMP_STRING_SIZE, "journal.appchk.%s",
                         basename(argv[optind]));
            }
        }

        if (tetj_start_journal(output_filename, &journal, command_line) != 0) {
            snprintf(tmp_string, TMP_STRING_SIZE, "Could not open journal file %s",
                     output_filename);
            perror(tmp_string);
            printf("Use -o FILE to specify an alternate location for the journal file\n");
            exit(1);
        }

        /*
         * new journal standard requires arch in the
         * VSX_NAME line in order to fetch waiver files correctly
         */
        snprintf(tmp_string, TMP_STRING_SIZE,
                 "VSX_NAME=lsbappchk %s (%s)", LSBAPPCHK_VERSION, tetj_arch);
        tetj_add_config(journal, tmp_string);
        snprintf(tmp_string, TMP_STRING_SIZE, "LSB_VERSION=%s", LSBVERSION);
        tetj_add_config(journal, tmp_string);
        snprintf(tmp_string, TMP_STRING_SIZE, "LSB_MODULES=%s",
                 getmodulename(modules));
        tetj_add_config(journal, tmp_string);

        /* Log extra libraries to look for symbols in */
        if (extra_lib_count)
            tetj_add_config(journal, extra_libraries);
    }

    /* Or, if no journal logging, set up report output. */
    else {
        if (output_filename[0] == '\0') {
            output_use(stdout);
        } else {
            output_open(output_filename);
        }

        /* XXX: Open a fake journal file.  Needed only while we
           transition to the new macros. */
        tetj_start_journal("/dev/null", &journal, command_line);
    }

    /* Add all extra libs to DT_NEEDED list */
    for (i = 0; i < extra_lib_count; i++)
	addDTNeeded(extra_lib_list[i]);

    /* Add symbols from extra libs to list */
    for (i = 0; i < extra_lib_count; i++) {
	TESTCASE_START(tetj_activity_count, extra_lib_list[i],"");
	tetj_tp_count = 0;
	elffile = OpenElfFile(extra_lib_list[i]);
	if (elffile == NULL) {
	    /* make a dummy container if it failed to open */
	    snprintf(tmp_string, TMP_STRING_SIZE, "Opening lib %s",
	                                          extra_lib_list[i]);
	    PURPOSE_START(tetj_activity_count, ++tetj_tp_count, tmp_string);
	    snprintf(tmp_string, TMP_STRING_SIZE, "Could not open %s",
	                                           extra_lib_list[i]);
	    /* error already printed by call:
	    perror(tmp_string);
	    */
	    TESTCASE_INFO(tetj_activity_count, tetj_tp_count, 0, 0, 0, 
                          tmp_string);
	    RESULT(tetj_activity_count, tetj_tp_count, TETJ_FAIL);
	    PURPOSE_END(tetj_activity_count, tetj_tp_count);
	    TESTCASE_END(tetj_activity_count++, 0, "");
	    continue;
	}
	check_file(elffile, ELF_IS_DSO);
	add_library_symbols(elffile, journal, modules);
	TESTCASE_END(tetj_activity_count++, 0, "");
	CloseElfFile(elffile);
    }

    /* Check all extra libs */
    for (i = 0; i < extra_lib_count; i++) {
	snprintf(tmp_string, TMP_STRING_SIZE, "%s-pass2", extra_lib_list[i]);
	TESTCASE_START(tetj_activity_count, tmp_string,"");
	tetj_tp_count = 0;

	elffile = OpenElfFile(extra_lib_list[i]);
	if (elffile == NULL) {
	    /* make a dummy container if it failed to open */
	    snprintf(tmp_string, TMP_STRING_SIZE, "Opening lib %s",
	                                           extra_lib_list[i]);
	    PURPOSE_START(tetj_activity_count, ++tetj_tp_count,
                          tmp_string);
	    snprintf(tmp_string, TMP_STRING_SIZE, "Could not open %s",
	                                           extra_lib_list[i]);
	    /* error already printed by call:
	    perror(tmp_string);
	    */
	    TESTCASE_INFO(tetj_activity_count, tetj_tp_count, 0, 0, 0, 
                          tmp_string);
	    RESULT(tetj_activity_count, tetj_tp_count, TETJ_FAIL);
	    PURPOSE_END(tetj_activity_count, tetj_tp_count);
	    TESTCASE_END(tetj_activity_count++, 0, "");
	    continue;
	}
	check_lib(elffile, ELF_IS_DSO, modules);
	TESTCASE_END(tetj_activity_count++, 0, "");
	CloseElfFile(elffile);
    }

    /* Check binary */
    for (i = optind; i < argc; i++) {
	TESTCASE_START(tetj_activity_count, argv[i], "");
	tetj_tp_count = 0;

	elffile = OpenElfFile(argv[i]);
	if (elffile == NULL) {
	    /* make a dummy container if it failed to open */
	    snprintf(tmp_string, TMP_STRING_SIZE, "Opening binary %s", argv[i]);
	    PURPOSE_START(tetj_activity_count, ++tetj_tp_count, tmp_string);
	    snprintf(tmp_string, TMP_STRING_SIZE, "Could not open %s", argv[i]);
	    /* error already printed by call:
	    perror(tmp_string);
	    */
	    TESTCASE_INFO(tetj_activity_count, tetj_tp_count, 0, 0, 0, 
                          tmp_string);
	    RESULT(tetj_activity_count, tetj_tp_count, TETJ_FAIL);
	    PURPOSE_END(tetj_activity_count, tetj_tp_count);
	    TESTCASE_END(tetj_activity_count++, 0, "");
	    continue;
	}
	check_file(elffile, ELF_IS_EXEC);
	checksymbols(elffile, modules);
	TESTCASE_END(tetj_activity_count++, 0, "");
	CloseElfFile(elffile);
    }

    if (do_journal)
        tetj_close_journal(journal);
    else
        output_close();

    exit(0);
}
