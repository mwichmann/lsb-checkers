#include <stdio.h>
#include <sys/types.h>
#include "../libs/lsb_funcs.h"

void validate_filemode(const mode_t arg, const char *name)
{
	if( (arg&0x0200) )
		lsb_fprintf(stderr,
"lsbdynchk: %s: Filemode %o contains meaningless bitmask 0x0200.\n", name, (int)arg);
	if( (arg&0xe000 && !(arg&0x1000)) )
		lsb_fprintf(stderr,
"lsbdynchk: %s: Filemode %o contains bitmask 0xe000 without 0x1000, so it is ambiguously typed.\n", name, (int)arg);
}


/* annotated defines from sys/stat.h,:

The following are basic permission-mode defines. 
In this stuff, 0x01ff | <everything> = 0x01ff
#define S_IRWXU	(S_IREAD|S_IWRITE|S_IEXEC)
#define S_IROTH	(S_IRGRP>>3)
#define S_IRGRP	(S_IRUSR>>3)
#define S_IRWXO	(S_IRWXG>>3)
#define S_IRWXG	(S_IRWXU>>3)
#define S_IWOTH	(S_IWGRP>>3)
#define S_IWGRP	(S_IWUSR>>3)
#define S_IXOTH	(S_IXGRP>>3)
#define S_IXGRP	(S_IXUSR>>3)
#define S_ISVTX	01000
#define S_IXUSR	0x0040
#define S_IWUSR	0x0080
#define S_IRUSR	0x0100


#define S_ISGID	0x0400    Set-user-ID on execution.  (bitmask)
#define S_ISUID	0x0800    Set-group-ID on execution. (bitmask)

The following determine the filetype:

#define S_IFIFO	0x1000    (bitmask)
#define S_IFCHR	0x2000    (This through S_IFMT are mutually exclusive.
#define S_IFDIR	0x4000     Accordingly, they have mutually exclusive bitmasks.)
#define S_IFBLK	0x6000
#define S_IFREG	0x8000
#define S_IFLNK	0xa000
#define S_IFSOCK 0xc000
#define S_IFMT	0xf000

So, it looks like the only disallowed mode bits are (0xe000 without 0x1000) and 0x0200.
*/
