/* 
 *
 * Copyright (c) 2002-2005 The Free Standards Group Inc
 * Copyright (c) 2002-2005 Stuart Anderson (anderson@freestandards.org)
 *
 */
#include "rpmchk.h"
/*
 * This file contains some values which must match, and some places to
 * stick things which are discovered in one place, but used in another.
 */
char *architecture =
#if __i386__
	"i486";
#elif __ia64__
	"ia64";
#elif __x86_64__
	"x86_64";
#elif __powerpc__ && !__powerpc64__
	"ppc";
#elif __powerpc64__
	"ppc64";
#elif __s390__ && !__s390x__
	"s390";
#elif __s390x__
	"s390x";
#else
	"unknown architecture";
#endif

char *validos = "linux";

char *lanananame = NULL;

int is_noarch = 0;
int is_graphics = 0;
int is_desktop = 0;

RpmRequireRec validdeps[] = {
	{"rpmlib(VersionedDependencies)","3.0.3-1", 0, 0 },
	{"rpmlib(PayloadFilesHavePrefix)","4.0-1", 0, 0 },
	{"rpmlib(CompressedFileNames)","3.0.4-1", 0, 0 },
	{"/bin/sh","", 0, 0 },
	{"lsb-core-noarch",LSBVERSION, 0, 0 },
#if __i386__
	{"lsb-core-ia32",LSBVERSION, 0, 1 },
#elif __ia64__
	{"lsb-core-ia64",LSBVERSION, 0, 1 },
#elif __x86_64__
	{"lsb-core-amd64",LSBVERSION, 0, 1 },
#elif __powerpc__ && !__powerpc64__
	{"lsb-core-ppc32",LSBVERSION, 0, 1 },
#elif __powerpc64__
	{"lsb-core-ppc64",LSBVERSION, 0, 1 },
#elif __s390__ && !__s390x__
	{"lsb-core-s390",LSBVERSION, 0, 1 },
#elif __s390x__
	{"lsb-core-s390x",LSBVERSION, 0, 1 },
#endif
};
int numdeps = sizeof(validdeps)/sizeof(RpmRequireRec);

RpmRequireRec noarchdeps[] = {
	{"lsb-core-noarch",LSBVERSION, 0, 1 },
	{"lsb-graphics-noarch",LSBVERSION, 0, 0 },
	{"lsb-desktop-noarch",LSBVERSION, 0, 0 },
};
int numnoarchdeps = sizeof(noarchdeps)/sizeof(RpmRequireRec);

RpmRequireRec graphicsdeps[] = {
#if __i386__
	{"lsb-graphics-ia32",LSBVERSION, 0, 1 },
#elif __ia64__
	{"lsb-graphics-ia64",LSBVERSION, 0, 1 },
#elif __x86_64__
	{"lsb-graphics-amd64",LSBVERSION, 0, 1 },
#elif __powerpc__ && !__powerpc64__
	{"lsb-graphics-ppc32",LSBVERSION, 0, 1 },
#elif __powerpc64__
	{"lsb-graphics-ppc64",LSBVERSION, 0, 1 },
#elif __s390__ && !__s390x__
	{"lsb-graphics-s390",LSBVERSION, 0, 1 },
#elif __s390x__
	{"lsb-graphics-s390x",LSBVERSION, 0, 1 },
#endif
};
int numgrdeps = sizeof(graphicsdeps)/sizeof(RpmRequireRec);

RpmRequireRec desktopdeps[] = {
#if __i386__
	{"lsb-desktop-ia32",LSBVERSION, 0, 1 },
#elif __ia64__
	{"lsb-desktop-ia64",LSBVERSION, 0, 1 },
#elif __x86_64__
	{"lsb-desktop-amd64",LSBVERSION, 0, 1 },
#elif __powerpc__ && !__powerpc64__
	{"lsb-desktop-ppc32",LSBVERSION, 0, 1 },
#elif __powerpc64__
	{"lsb-desktop-ppc64",LSBVERSION, 0, 1 },
#elif __s390__ && !__s390x__
	{"lsb-desktop-s390",LSBVERSION, 0, 1 },
#elif __s390x__
	{"lsb-desktop-s390x",LSBVERSION, 0, 1 },
#endif
};
int numdtdeps = sizeof(desktopdeps)/sizeof(RpmRequireRec);

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
char	*requirename = NULL;
char	*requireversion = NULL;
int	numrequirename;
int	numrequireversion;

int	hasPayloadFilesHavePrefix=0;
int	hasCompressedFileNames=0;
int	hasOldFilenames=0;
int	hasNewFilenames=0;
int	rpmchkdebug=0;
