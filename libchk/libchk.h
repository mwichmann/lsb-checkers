/*
 * Maintainers can get additional detail by setting the environment variable
 * LIBCHK_DEBUG to these values
 */

#define LIBCHK_DEBUG_NEWVERS		0x0001
#define LIBCHK_DEBUG_OLDVERS		0x0002
#define LIBCHK_DEBUG_CLASSDETAILS	0x0004
#define LIBCHK_DEBUG_CXXHUSH		0x0008

extern int libchk_debug;

/*
 * Structure to keep track of which libs are in which modules
 */

struct modlib {
	char 		*modname;
	char 		*runname;
	struct versym	*symbols;
	struct classinfo *classinfo;
};

extern struct modlib modlibs[];

/* classchk.c */
extern int check_class_info(ElfFile *efile, char *file, struct classinfo *classes[], struct tetj_handle *journal);
/* libchk.c */
extern int check_symbol(ElfFile *file, struct versym *entry);
extern int check_size(ElfFile *file, struct versym *entry);
extern int get_size(ElfFile *file, char *);
extern void check_lib(char *libname, struct versym entries[], struct classinfo classes[], struct tetj_handle *journal);
extern int main(int argc, char *argv[]);
/* libs.c */
extern void check_libs(struct tetj_handle *journal);
