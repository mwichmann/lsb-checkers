#include <stdio.h>
#include <getopt.h>
#include <string.h>
#include <stdlib.h>
#include <libgen.h>
#include <limits.h>
#include "../tetj/tetj.h"
#include "check_file.h"
#include "libraries.h"

/*
 * What module to check against. - NULL means check all
 */
char *module = "LSB-Core";

char *
concat_string(char *input, char *addition)
{
  char *tmp;
  if (input)
  {
    tmp = realloc(input, strlen(input)+strlen(addition)+1);
    if (!tmp) abort();
    return strcat(tmp, addition);
  }
  else
  {
    return strdup(addition);
  }
}

/* Real CVS revision number so we can strings it from
   the binary if necessary */
static const char * __attribute((unused)) appchk_revision = "$Revision: 1.18 $";

int
main(int argc, char *argv[])
{
  signed char	c;
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

  printf("%s for LSB Specification " LSBVERSION " \n", argv[0]);
  extra_libraries = strdup("EXTRA_LIBRARIES=");

  for (i=0; i<argc; i++)
  {
    command_line = concat_string(command_line, argv[i]);
    command_line = concat_string(command_line, " ");
  }
  
  /* Parse options */
  while(1) {
    c=getopt(argc,argv,"L:o:M:A");
    if( c == -1 )
      break;
    switch(c) {
    case 'L':
      printf("Adding symbols for library %s\n", optarg);
      extra_lib_count++;
      extra_lib_list = realloc(extra_lib_list, 
                               sizeof(char *)*extra_lib_count);
      extra_lib_list[extra_lib_count-1] = strdup(optarg);
      extra_libraries = concat_string(extra_libraries, optarg);
      extra_libraries = concat_string(extra_libraries, " ");
      break;
			
    case 'M':
      module=optarg;
      printf("Only checking symbols in module %s\n", module);
      break;

    case 'A':
      module=NULL;
      printf("Checking symbols in all modules\n");
      break;

    case 'o':
      strncpy(journal_filename, optarg, TMP_STRING_SIZE);
      overrideJournalFilename = 1;
      break;

    default:
      printf ("?? getopt returned character code 0%o ??\n", c);
    }
  }

  if( optind >= argc && !extra_lib_count ) {
    fprintf(stderr, "usage: %s [-o outputfile ] [-A] [-M modulename ] [-L libpath ] file\n", argv[0] );
    exit(1);
  }

  /* Start journal logging */
	
	if (!overrideJournalFilename)
	{
		snprintf(journal_filename, TMP_STRING_SIZE, "journal.appchk.%s", 
						 basename(argv[optind]));
	}
	if (tetj_start_journal(journal_filename, &journal, command_line)!=0)
	{
		printf("Could not open journal file %s for output..exiting\n",
					 journal_filename);
		printf("Use -o <filename> to specify an alternate location for the journal file\n");
		exit(1);
  }

  /* Log version number for lsbapp package */
  snprintf(tmp_string, TMP_STRING_SIZE, "VSX_NAME=lsbappchk " LSBAPPCHK_VERSION);
  tetj_add_config(journal, tmp_string);

  /* Log extra libraries to look for symbols in */
  tetj_add_config(journal, extra_libraries);

  /* Add all extra libs to DT_NEEDED list */
  for (i=0; i<extra_lib_count; i++)
  {
    addDTNeeded(extra_lib_list[i]);
  }

  /* Add symbols from extra libs to list */
  for (i=0; i<extra_lib_count; i++)
  {
    add_library_symbols(extra_lib_list[i], journal);
  }

  /* Check all extra libs */
  for (i=0; i<extra_lib_count; i++)
  { 
    check_lib(extra_lib_list[i], journal, ELF_IS_DSO);
  }

  /* Check binary */
  for (i=optind; i<argc; i++)
  {
    printf("Checking binary %s\n", argv[i]);
    check_file(argv[i], journal, ELF_IS_EXEC);
  }

  tetj_close_journal(journal);
  exit(0);
}
