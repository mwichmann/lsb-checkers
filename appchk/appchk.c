#include <stdio.h>
#include <getopt.h>
#include <string.h>
#include <stdlib.h>
#include <libgen.h>
#include <limits.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <dirent.h>
#include <glob.h>
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

int
append_string_to_list(char ***list, int list_size, char *newstr)
{
  char *newstr_copy = strdup(newstr);

  if (newstr_copy != NULL) {
    list_size++;
    *list = realloc(*list, sizeof (char *)*list_size);

    if (*list != NULL) {
      (*list)[list_size - 1] = newstr_copy;
      return list_size;
    }
  }

  perror("could not save argument");
  exit(1);
  return -1; /* never get here */
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
  glob_t pglob;
  char buf[PATH_MAX + 1];
  int retval, count, index;
  char *errmsg;
  char *result;

  if (strlen(path) + 10 > PATH_MAX) {
    fprintf(stderr, "path too long: %s\n", path);
    return -1;
  }

  strncpy(buf, path, PATH_MAX);
  strncat(buf, "/*.so*", PATH_MAX);

  retval = glob(buf, 0, NULL, &pglob);
  if (retval != 0) {
    switch (retval) {
    case GLOB_NOSPACE:
      errmsg = "out of memory";
      break;
    case GLOB_ABORTED:
      errmsg = "read error";
      break;
    case GLOB_NOMATCH:
      errmsg = "no libraries found";
      break;
    }
    fprintf(stderr, "could not find libraries in %s: %s\n", path, errmsg);
    globfree(&pglob);
    return -1;
  }

  count = list_size + pglob.gl_pathc;
  *list = realloc(*list, sizeof(char *) * count);
  if (*list == NULL) {
    perror("could not add libraries from directory");
    globfree(&pglob);
    return -1;
  }

  for (index = list_size; index < count; index++) {
    result = strdup(pglob.gl_pathv[index - list_size]);
    if (result == NULL) {
      perror("error adding libraries from directory");
      globfree(&pglob);
      return -1;
    }
    (*list)[index] = result;
  }

  globfree(&pglob);
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
        "  -s, --missing-symbols          report only on missing symbols\n"
        "  -r, --lsb-version=VERSION      LSB version to test against\n"
        "                                   (supported are: %s)\n"
        "  -T, --lsb-product=[core,c++|core,c++,desktop]\n"
        "                                 target product to load modules for\n"
        "  -M MODULE, --module=MODULE     add MODULE to list of checked modules\n"
        "  -L LIB                         add LIB to list of checked libraries\n"
        "  -D DIR[:DIR...], --shared-libpath=DIR[:DIR...]\n"
        "                                 add all libs in DIR to checked lib list\n"
        "  -o FILE, --output-file=FILE    write output to FILE\n"
        "  -l LIST, --file-list=LIST      take files to test from the list file\n"
        "                                   specified; -o specifies where to put\n"
        "                                   journals (separate for each file)\n",
        progname, LSB_Versions_list);
}

#define TMP_STRING_SIZE (PATH_MAX+20)

void start_journal_file(char* output_filename, char* command_line, int modules, char* extra_libraries)
{
    char tmp_string[TMP_STRING_SIZE + 1];

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
    snprintf(tmp_string, TMP_STRING_SIZE, "LSB_VERSION=%s", LSB_Versions[LSB_Version]);
    tetj_add_config(journal, tmp_string);
    snprintf(tmp_string, TMP_STRING_SIZE, "LSB_MODULES=%s",
             getmodulename(modules));
    tetj_add_config(journal, tmp_string);
    snprintf(tmp_string, TMP_STRING_SIZE, "LSB_PROFILE=%s",
             getlsbprofile(LSB_Versions[LSB_Version], modules));
    tetj_add_config(journal, tmp_string);

    /* Log extra libraries to look for symbols in */
    if (extra_libraries != NULL)
        tetj_add_config(journal, extra_libraries);
}

int
main(int argc, char *argv[])
{
    ElfFile *elffile;
    char *command_line = NULL;
    char *token;
    char *env;
    int i;
    int j;
    char *extra_libraries = NULL;
    char **extra_lib_list = NULL;
    int extra_lib_count = 0;
    char **extra_module_list = NULL;
    int extra_module_count = 0;
    char **test_binaries_list = NULL;
    int test_binaries_count = 0;
    char tmp_string[TMP_STRING_SIZE + 1];
    char output_filename[TMP_STRING_SIZE + 1];
    char list_filename[TMP_STRING_SIZE + 1];
    int modules = 0;
    int option_index = 0;
    int do_missing_symbol = 0;
    int h_list_files;
    struct stat list_files_stat;
    char *list_files = NULL;
    int separate_journals = 0;
    int elf_type;
    int was_error = 0;

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

    /* Set defaults. */
    do_journal = 0;
    output_filename[0] = '\0';
    list_filename[0] = '\0';

    /* Prime setttings from the environment. */
    env = getenv("LSB_SHAREDLIBPATH");
    if (env != NULL) {
        env = strdup(env);
        for (token = strtok(env, ":"); token != NULL; 
             token = strtok(NULL, ":")) {
            extra_lib_count = add_library_dir(token, &extra_lib_list, 
                                              extra_lib_count);
            if (extra_lib_count < 0)
                exit(1);
        }
        free(env);
    }

    for (i = 0; i < argc; i++) {
        command_line = concat_string(command_line, argv[i]);
        command_line = concat_string(command_line, " ");
    }

    /* Set of desktop modules depends on the LSB version selected.
     * The order of the command line options is not fixed, so we have to determine the
     * version first, remember which set of modules is needed and only then calculate the
     * real set of modules depending on the LSB version.
     * 0: no -T option specified.
     * 1: -T core,c++
     * 2: -T core,c++,desktop
     */
    int modules_pre = 0;
    modules = 0;
    while (1) {
        int c;
        static struct option long_options[] = {
            {"help",            no_argument,       NULL, 'h'},
            {"version",         no_argument,       NULL, 'v'},
            {"journal",         no_argument,       NULL, 'j'},
            {"no-journal",      no_argument,       NULL, 'n'},
            {"missing-symbols", no_argument,       NULL, 's'},
            {"output-file",     required_argument, NULL, 'o'},
            {"module",          required_argument, NULL, 'M'},
            {"lsb-version",     required_argument, NULL, 'r'},
            {"lsb-product",     required_argument, NULL, 'T'},
            {"shared-libpath",  required_argument, NULL, 'D'},
            {"file-list",       required_argument, NULL, 'l'},
            {0, 0, 0, 0}
        };

        c = getopt_long(argc, argv, "hvjnsAo:M:L:r:T:D:l:",
                        long_options, &option_index);
        if (c == -1)
            break;
        switch (c) {
        case 'h':
            usage(argv[0]);
            exit (0);
        case 'v':
            printf("%s %s for LSB Specifications %s\n", argv[0],
                   LSBAPPCHK_VERSION, LSB_Versions_list);
            break;
        case 'r':
            for (i = 0; i < num_LSB_Versions; ++i) {
                if (strcmp(optarg, LSB_Versions[i]) == 0) {
                    LSB_Version = i;
                    break;
                }
            }
            if (LSB_Version == -1) {
                printf("LSB version '%s' is not supported!\n", optarg);
                usage(argv[0]);
                exit(1);
            }
            break;
        case 'T':
            if (strcasecmp(optarg, "core,c++") == 0)
                modules_pre = 1;
            else if (strcasecmp(optarg, "core,c++,desktop") == 0)
                modules_pre = 2;
            /* else if(strcasecmp(optarg, "all") == 0)
                  modules_pre = 3; */
            else {
                printf("product '%s' is not valid!\n", optarg);
                usage(argv[0]);
                exit(1);
            }
            break;
        case 'M':
            extra_module_count = append_string_to_list(&extra_module_list,
                                                       extra_module_count,
                                                       optarg);
            break;
        case 'L':
            extra_lib_count = append_string_to_list(&extra_lib_list,
                                                    extra_lib_count,
                                                    optarg);
            break;
        case 'D':
            for (token = strtok(optarg, ":"); token != NULL; token = strtok(NULL, ":")) {
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
        case 's':
            do_missing_symbol = 1;
            break;
        case 'l':
            snprintf(list_filename, TMP_STRING_SIZE, optarg);
            break;
        default:
            usage(argv[0]);
            exit(0);
        }
    }
    if (optind >= argc && !extra_lib_count && list_filename[0] == '\0') {
        usage(argv[0]);
        exit (1);
    }

    for (i = optind; i < argc; ++i) {
        test_binaries_count = append_string_to_list(&test_binaries_list,
                                                    test_binaries_count,
                                                    argv[i]);
    }

    if (list_filename[0] != '\0') {
        if ((h_list_files = open(list_filename, O_RDONLY)) != -1) {
            if (!fstat(h_list_files, &list_files_stat)) {
                list_files = malloc(list_files_stat.st_size + 1);
                if (list_files != NULL) {
                    if (read(h_list_files, list_files, list_files_stat.st_size) == list_files_stat.st_size) {
                        list_files[list_files_stat.st_size] = '\0';
                        j = 0;
                        for (i=0; i<=list_files_stat.st_size; ++i) {
                            switch (list_files[i]) {
                            case '\x0d':
                                break;
                            case '\x0a':
                            case '\0':
                                tmp_string[j] = '\0';
                                if (j != 0) {
                                    elffile = OpenElfFileNoExit(tmp_string);
                                    if (elffile != NULL) {
                                        elf_type = getElfType(elffile);
                                        switch (elf_type) {
                                        case ET_EXEC:
                                            test_binaries_count = append_string_to_list(&test_binaries_list, test_binaries_count, tmp_string);
                                            break;
                                        case ET_DYN:
                                            extra_lib_count = append_string_to_list(&extra_lib_list, extra_lib_count, tmp_string);
                                            break;
                                        default:
                                            printf("File %s is of unsupported ELF type.\n", tmp_string);
                                        }
                                        CloseElfFile(elffile);
                                    }
                                    j = 0;
                                }
                                break;
                            default:
                                tmp_string[j++] = list_files[i];
                            }
                        }
                    }
                    else {
                        printf("Cannot read data from list file!\n");
                        was_error = 1;
                    }
                }
                else {
                    printf("Cannot allocate memory to read list file!\n");
                    was_error = 1;
                }
            }
            else {
                printf("Cannot stat list file!\n");
                was_error = 1;
            }
            close(h_list_files);
        }
        else {
            printf("Cannot open list file %s\n", list_filename);
            was_error = 1;
        }
    }

    if (was_error) {
        exit(1);
    }

    if (LSB_Version == -1) {
        LSB_Version = LSB_Version_default;
        printf("LSB version is not specified, using %s by default.\n\n", LSB_Versions[LSB_Version]);
    }
    
    /* Now calculate final set of modules. */
    switch (modules_pre) {
        case 1:     /* core,c++ */
            modules |= LSB_Core_Modules;
            break;
        case 2:     /* core,c++,desktop */
            modules |= LSB_Desktop_Modules[LSB_Version];
            break;
        default:
            modules |= LSB_Desktop_Modules[LSB_Version];
            break;
    }

    if (extra_module_count) {
      for (i = 0; i < extra_module_count; i++) {
        modules |= getmoduleval(extra_module_list[i]);
        printf("also checking symbols in module %s\n", optarg);
      }
    }

    if (extra_lib_count) {
        extra_libraries = strdup("EXTRA_LIBRARIES=");
        for (i = 0; i < extra_lib_count; i++) {
          extra_libraries = concat_string(extra_libraries, extra_lib_list[i]);
          extra_libraries = concat_string(extra_libraries, " ");
        }
    }

    /* Start journal logging */
    if (do_journal) {
        if (list_files != NULL) {
            /* If -l option was specified, create separate journal files for every file tested. */
            separate_journals= 1;
            /* Open fake journal to simplify the `for' cycle later. */
            tetj_start_journal("/dev/null", &journal, command_line);
        }
        else {
            /* If no -l option was specified, only single journal is created. */
            if (output_filename[0] == '\0') {
                if ((extra_lib_count == 1) && (test_binaries_count == 0)) {
                    snprintf(output_filename, TMP_STRING_SIZE, "journal.appchk.%s",
                             basename(extra_lib_list[0]));
                }
                else if ((extra_lib_count == 0) && (test_binaries_count == 1)) {
                    snprintf(output_filename, TMP_STRING_SIZE, "journal.appchk.%s",
                             basename(test_binaries_list[0]));
                }
                else {
                    snprintf(output_filename, TMP_STRING_SIZE, "journal.appchk.DSO");
                }
            }

            start_journal_file(output_filename, command_line, modules, extra_libraries);
        }
    }
    /* Or, if no journal logging, set up report output. */
    else {
        if (output_filename[0] == '\0') {
            output_use(stdout);
        } else {
            output_open(output_filename);
        }

        /* If requested, report only missing symbols. */
        if (do_missing_symbol)
            output_do_missing_symbols();

        /* XXX: Open a fake journal file.  Needed only while we
           transition to the new macros. */
        tetj_start_journal("/dev/null", &journal, command_line);
    }

    /* Add all extra libs to DT_NEEDED list */
    for (i = 0; i < extra_lib_count; i++)
        addDTNeeded(extra_lib_list[i]);

    /* Add symbols from extra libs to list */
    for (i = 0; i < extra_lib_count; i++) {
        if (!separate_journals) {
            TESTCASE_START(tetj_activity_count, extra_lib_list[i],"");
            tetj_tp_count = 0;
        }
        elffile = OpenElfFileNoExit(extra_lib_list[i]);
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
        if (check_file(elffile, ELF_IS_DSO) != ELF_ERROR)    /* Protect appchk from crash */
            add_library_symbols(elffile, journal, modules);
        TESTCASE_END(tetj_activity_count++, 0, "");
        CloseElfFile(elffile);
    }

    /* Check all extra libs */
    for (i = 0; i < extra_lib_count; i++) {
        if (do_journal && separate_journals) {
            tetj_close_journal(journal);
            /* Use file inode and device ID to get unique journal file name. */
            if (stat(extra_lib_list[i], &list_files_stat)) {
                list_files_stat.st_dev = list_files_stat.st_ino = 0;
            }
            snprintf(tmp_string, TMP_STRING_SIZE, "%s/lsbappchk.%s.%lu-%lu.journal", output_filename, basename(extra_lib_list[i]),
                     (unsigned long)list_files_stat.st_dev, (unsigned long)list_files_stat.st_ino);
            start_journal_file(tmp_string, command_line, modules, extra_libraries);
        }
        snprintf(tmp_string, TMP_STRING_SIZE, "%s-pass2", extra_lib_list[i]);
        TESTCASE_START(tetj_activity_count, tmp_string, "");
        tetj_tp_count = 0;

        elffile = OpenElfFileNoExit(extra_lib_list[i]);
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
    for (i = 0; i < test_binaries_count; i++) {
        if (do_journal && separate_journals) {
            tetj_close_journal(journal);
            /* Use file inode and device ID to get unique journal file name. */
            if (stat(test_binaries_list[i], &list_files_stat)) {
                list_files_stat.st_dev = list_files_stat.st_ino = 0;
            }
            snprintf(tmp_string, TMP_STRING_SIZE, "%s/lsbappchk.%s.%lu-%lu.journal", output_filename, basename(test_binaries_list[i]),
                     (unsigned long)list_files_stat.st_dev, (unsigned long)list_files_stat.st_ino);
            start_journal_file(tmp_string, command_line, modules, extra_libraries);
        }
        TESTCASE_START(tetj_activity_count, test_binaries_list[i], "");
        tetj_tp_count = 0;

        elffile = OpenElfFileNoExit(test_binaries_list[i]);
        if (elffile == NULL) {
            /* make a dummy container if it failed to open */
            snprintf(tmp_string, TMP_STRING_SIZE, "Opening binary %s", test_binaries_list[i]);
            PURPOSE_START(tetj_activity_count, ++tetj_tp_count, tmp_string);
            snprintf(tmp_string, TMP_STRING_SIZE, "Could not open %s", test_binaries_list[i]);
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
        if (check_file(elffile, ELF_IS_EXEC) != ELF_ERROR)    /* Protect appchk from crash */
            checksymbols(elffile, modules);
        TESTCASE_END(tetj_activity_count++, 0, "");
        CloseElfFile(elffile);
    }

    if (do_journal)
        tetj_close_journal(journal);
    else
        output_close();

    /* Cleanup */
    if (extra_libraries != NULL)
        free(extra_libraries);
    if (extra_lib_list != NULL)
        free(extra_lib_list);
    if (test_binaries_list != NULL)
        free(test_binaries_list);
    if (list_files != NULL)
        free(list_files);

    exit(0);
}
