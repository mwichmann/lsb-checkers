/* 
 *
 * Copyright (c) 2002 The Free Standards Group Inc
 * Copyright (c) 2002 Stuart Anderson (anderson@freestandards.org)
 *
 */
#include "rpmchk.h"
/*
 * This file contains some values which must match, and some places to
 * stick things which are discovered in one place, but used in another.
 */
char *architecture =
#if defined(__i386__)
	"i486";
#elif defined(__ia64__)
	"ia64";
#elif defined(__x86_64__)
	"x86_64";
#elif defined(__powerpc__)
	"powerpc";
#else
	"unknown architecture";
#endif

char *validos = "linux";
char *validdepver = "2.0";

char *validdeps[] = {
#if defined(__i386__)
	"lsb-core-ia32",
	"lsb-graphics-ia32",
#elif defined(__ia64__)
	"lsb-core-ia64",
	"lsb-graphics-ia64",
#elif defined(__x86_64__)
	"lsb-core-amd64",
	"lsb-graphics-amd64",
#elif defined(__powerpc__)
	"lsb-core-ppc",
	"lsb-graphics-ppc",
#endif
	};

int numdeps = sizeof(validdeps)/sizeof(char *);

char *pkgname;
int  lsbdepidx=-1;

/* Stuff that we read in one part, but need to use for validation in
 * another part. 
 */
unsigned char *sigdata;
uint32_t  sigsize;
uint32_t  archivesize;
uint32_t  rpmtagsize;
uint32_t *filesizes;
uint16_t *filemodes;
uint32_t *filedevs;
uint16_t *filerdevs;
uint32_t *fileinodes;
uint32_t *filetimes;
char	*oldfilenames;
char	*filemd5s;
char	*filelinktos;
char	*fileusernames;
char	*filegroupnames;
char	*filelangs;
uint32_t	*dirindicies;
char	**basenames;
char	**dirnames;
int	numdirnames;
int	numdirindicies;

int	hasPayloadFilesHavePrefix=0;
int	hasCompressedFileNames=0;
int	hasOldFilenames=0;
int	hasNewFilenames=0;
int	rpmchkdebug;
