/*
 * Maintainers can get additional detail by setting the environment variable
 * LIBCHK_DEBUG to these values
 */

#define LIBCHK_DEBUG_NEWVERS		0x0001
#define LIBCHK_DEBUG_CLASSDETAILS	0x0002

extern int libchk_debug;

/* classchk.c */
extern int check_class_info(char *file, struct classinfo *classes[], struct tetj_handle *journal);
/* libchk.c */
extern int check_symbol(ElfFile *file, struct versym *entry, int print_warnings);
extern void check_lib(char *libname, struct versym entries[], struct classinfo classes[], struct tetj_handle *journal);
extern int main(int argc, char *argv[]);
/* libs.c */
extern void check_libs(struct tetj_handle *journal);
