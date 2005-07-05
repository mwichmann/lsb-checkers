#include <stdio.h>
#include <getopt.h>
#include <string.h>
#include <stdlib.h>
#include <libgen.h>
#include <limits.h>
#include "../tetj/tetj.h"
#include "check_archive.h"
#include "libraries.h"

/*
 * What module to check against.
 */
int modules = LSB_Core;

char *
concat_string(char *input, char *addition)
{
  char *tmp;
  if (input) {
    tmp = realloc(input, strlen(input)+strlen(addition)+1);
    if (!tmp) abort();
    return strcat(tmp, addition);
  } else {
    return strdup(addition);
  }
}

/* Real CVS revision number so we can strings it from the binary if necessary */
static const char * __attribute((unused)) archk_revision = "$Revision: 1.8 $";

void
usage(char *progname)
{
  printf("usage: %s [options] archive ...\n%s%s%s%s%s%s%s", progname,
"  -h, --help                     show this help message and exit\n",
"  -v, --version                  show version and LSB version\n",
"  -n, --nojournal                do not write a journal file\n",
"  -A                             check the symbols in all aailable modules\n",
"  -M MODULE, --module=MODULE     add MODULE to list of checked modules\n",
"  -L LIB                         add LIB to list of checked libraries\n",
"  -j JOURNAL, --journal=JOURNAL  use JOURNAL as file/path for journal file\n");
}

int
main(int argc, char *argv[])
{
  struct tetj_handle *journal;
  char *command_line = NULL;
  int i;
  char *extra_libraries;
  char **extra_lib_list = NULL;
  int extra_lib_count = 0;
#define TMP_STRING_SIZE (PATH_MAX+20)
  char tmp_string[TMP_STRING_SIZE+1];
  char journal_filename[TMP_STRING_SIZE+1];
  int overrideJournalFilename = 0;
  int option_index = 0;

  extra_libraries = strdup("EXTRA_LIBRARIES=");

  for (i=0; i<argc; i++) {
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
      {0, 0, 0, 0}
    };

    c = getopt_long (argc, argv, "hvnAM:L:j:", long_options, &option_index);
    if (c == -1)
      break;
    switch (c) {
      case 'h':
	usage(argv[0]);
	exit (0);
      case 'v':
	printf("%s %s for LSB Specification %s\n", argv[0],
	       LSBARCHK_VERSION, LSBVERSION);
	break;
      case 'n':
	snprintf(journal_filename, TMP_STRING_SIZE, "/dev/null");
	overrideJournalFilename = 1;
	break;
      case 'A':
	modules = LSB_All_Modules;
	printf("Checking symbols in all modules\n");
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
  if (optind >= argc) {
    usage(argv[0]);
    exit (1);
  }

  /* Start journal logging */
  if (!overrideJournalFilename) {
    snprintf(journal_filename, TMP_STRING_SIZE, "journal.archk.%s",
       	     basename(argv[optind]));
  }
  if (tetj_start_journal(journal_filename, &journal, command_line) != 0) {
    snprintf(tmp_string, TMP_STRING_SIZE, "Could not open journal file %s",
	     journal_filename);
    perror(tmp_string);
    printf("Use -j JOURNAL to specify an alternate location for the journal file\n");
    exit(1);
  }

  /* Log version info in the journal */
  snprintf(tmp_string, TMP_STRING_SIZE, "VSX_NAME=lsbarchk " LSBARCHK_VERSION);
  tetj_add_config(journal, tmp_string);
  snprintf(tmp_string, TMP_STRING_SIZE, "LSB_VERSION= " LSBVERSION);
  tetj_add_config(journal, tmp_string);
  snprintf(tmp_string, TMP_STRING_SIZE, "LSB_MODULES=%s", getmodulename(modules));
  tetj_add_config(journal, tmp_string);

  /* Log extra libraries to look for symbols in */
  if (extra_lib_count)
    tetj_add_config(journal, extra_libraries);

  /* Add all extra libs to DT_NEEDED list */
  for (i=0; i<extra_lib_count; i++)
    addDTNeeded(extra_lib_list[i]);

  /* Add symbols from extra libs to list */
  for (i=0; i<extra_lib_count; i++) {
    /*XXX should check return code? */
    add_archive_symbols(extra_lib_list[i], journal);
  }

  /* Check all extra libs */
  for (i=0; i<extra_lib_count; i++) {
    check_lib(extra_lib_list[i], journal, 0);
  }

  /* Check binary */
  for (i=optind; i<argc; i++) {
    printf("Checking archive %s\n", argv[i]);
    /*XXX should check return code? */
    add_archive_symbols(argv[i], journal);
    check_lib(argv[i], journal, 1);
  }

  tetj_close_journal(journal);
  exit(0);
}
