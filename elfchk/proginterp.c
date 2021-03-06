/*
 *
 * Copyright (c) 2001-2002 The Free Standards Group Inc
 * Copyright (c) 2000-2002 Stuart Anderson (anderson@freestandards.org)
 * Copyright (c) 2002 Chris Yeoh (yeohc@au.ibm.com)
 *
 */
/*
 * This contains the name of the program intepreter, which is checked
 * in checkPT_INTERP().
 */

char *ProgInterp = 
#if defined(__i386__)
	"/lib/ld-lsb.so.3";
#endif
#if __powerpc__ && !__powerpc64__
	"/lib/ld-lsb-ppc32.so.3";
#endif
#if __powerpc64__
	"/lib64/ld-lsb-ppc64.so.3";
#endif
#if defined(__ia64__)
	"/lib/ld-lsb-ia64.so.3";
#endif
#if __s390__ && !__s390x__
	"/lib/ld-lsb-s390.so.3";
#endif
#if __s390x__
	"/lib64/ld-lsb-s390x.so.3";
#endif
#if __x86_64__
	"/lib64/ld-lsb-x86-64.so.3";
#endif
