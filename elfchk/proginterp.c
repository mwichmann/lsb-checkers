/*
 *
 * Copyright (c) 2001-2002 The Free Standards Group Inc
 * Copyright (c) 2000-2002 Stuart Anderson (anderson@freestnadards.org)
 * Copyright (c) 2002 Chris Yeoh (yeohc@au.ibm.com)
 *
 */
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
#if defined(__s390__)
	"/lib/ld-lsb-s390.so.1";
#endif
