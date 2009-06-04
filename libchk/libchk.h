/*
 * Maintainers can get additional detail by setting the environment variable
 * LIBCHK_DEBUG to these values
 */

#define LIBCHK_DEBUG_NEWVERS		0x0001
#define LIBCHK_DEBUG_OLDVERS		0x0002
#define LIBCHK_DEBUG_CLASSDETAILS	0x0004
#define LIBCHK_DEBUG_CXXHUSH		0x0008

extern char* LSB_Version_str;

extern int libchk_debug;

/*
 * Structure to keep track of which libs are in which modules
 */

struct modlib {
	int 		modname;
	char 		*runname;
	struct versym	*symbols;
	struct classinfo *classinfo;
};

extern struct modlib modlibs[];

/* classchk.c */
extern int check_class_info(ElfFile *efile, char *file, struct classinfo *classes[], struct tetj_handle *journal);

/* libchk.c */
extern int check_symbol(ElfFile *file, struct versym *entry, int *size_check_result);
extern int check_size(ElfFile *file, struct versym *entry);
extern int get_size(ElfFile *file, char *);
extern void check_lib(char *libname, struct versym entries[], struct classinfo classes[], struct tetj_handle *journal);
extern int main(int argc, char *argv[]);

/* libs.c */
extern void check_libs(struct tetj_handle *journal);

/*
 * Interface to the demangler.  Due to possible license issues, we
 * want to make it easy to replace.  This function returns the
 * demangled name as a heap-allocated string (or NULL for problems),
 * meaning that the caller is reponsible for freeing it.  This works
 * well with our current demangler; if we switch, we should expect
 * that callers will try to free() the returned string.
 */

#if defined(USE_LIBIBERTY_DEMANGLE)
#include "demangle.h"
#elif defined(USE_CXXABI_DEMANGLE)
/* No good way to include C++ headers in C code, even if the header
   provides a C function that's interesting to us. */
/* #include <cxxabi.h> */
char* __cxa_demangle(const char* __mangled_name, char* __output_buffer,
                     size_t* __length, int* __status);
#endif

char* demangle(const char *mangled_name);
