/*
 * This contains the name of the program intepreter, which is checked
 * in checkPT_INTERP().
 */

char *ProgInterp = 
#if defined(__i386__)
	"/lib/ld-lsb.so.1";
#endif
#if defined(__powerpc__)
	"/lib/ld-lsb.so.1";
#endif
#if defined(__ia64__)
	"/lib/ld-lsb-ia64.so.1";
#endif
