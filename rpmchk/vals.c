/*
 * This file contains some values which must match, and some places to
 * stick things which are discovered in one place, but used in another.
 */
char *architecture =
#if defined(__i386__)
	"i486";
#elif defined(__ia64__)
	"ia64";
#elif defined(__powerpc__)
	"powerpc";
#else
	"unknown architecture";
#endif

char *validos = "linux";
char *validdepver = "1.2";

char *pkgname;
int  lsbdepidx=-1;

/* Stuff that we read in one part, but need to use for validation in
 * another part. 
 */
unsigned char *sigdata;
int  sigsize;
int  archivesize;
unsigned int	*filesizes;
unsigned short	*filemodes;
unsigned short	*filedevs;
unsigned int	*filetimes;
char	*filemd5s;
char	*filelinktos;
int	*filenames;
