/*
 * Test of dirent.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
struct __dirstream {
	};
#include "dirent.h"



#ifdef TET_TEST
void dirent_h()
{
#else
int dirent_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

Msg("Checking data structures in dirent.h\n");
#if defined __s390x__
CheckTypeSize(struct dirent,280, 10178, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct dirent,d_off,8,12,34178)
CheckOffset(struct dirent,d_off,8,12,34178)
CheckMemberSize(struct dirent,d_reclen,2,12,34179)
CheckOffset(struct dirent,d_reclen,16,12,34179)
CheckMemberSize(struct dirent,d_type,1,12,34410)
CheckOffset(struct dirent,d_type,18,12,34410)
CheckMemberSize(struct dirent,d_name,256,12,34180)
CheckOffset(struct dirent,d_name,19,12,34180)
#elif defined __x86_64__
CheckTypeSize(struct dirent,280, 10178, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct dirent,d_off,8,11,34178)
CheckOffset(struct dirent,d_off,8,11,34178)
CheckMemberSize(struct dirent,d_reclen,2,11,34179)
CheckOffset(struct dirent,d_reclen,16,11,34179)
CheckMemberSize(struct dirent,d_type,1,11,34410)
CheckOffset(struct dirent,d_type,18,11,34410)
CheckMemberSize(struct dirent,d_name,256,11,34180)
CheckOffset(struct dirent,d_name,19,11,34180)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct dirent,268, 10178, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct dirent,d_off,4,10,34178)
CheckOffset(struct dirent,d_off,4,10,34178)
CheckMemberSize(struct dirent,d_reclen,2,10,34179)
CheckOffset(struct dirent,d_reclen,8,10,34179)
CheckMemberSize(struct dirent,d_type,1,10,34410)
CheckOffset(struct dirent,d_type,10,10,34410)
CheckMemberSize(struct dirent,d_name,256,10,34180)
CheckOffset(struct dirent,d_name,11,10,34180)
#elif defined __powerpc64__
CheckTypeSize(struct dirent,280, 10178, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct dirent,d_off,8,9,34178)
CheckOffset(struct dirent,d_off,8,9,34178)
CheckMemberSize(struct dirent,d_reclen,2,9,34179)
CheckOffset(struct dirent,d_reclen,16,9,34179)
CheckMemberSize(struct dirent,d_type,1,9,34410)
CheckOffset(struct dirent,d_type,18,9,34410)
CheckMemberSize(struct dirent,d_name,256,9,34180)
CheckOffset(struct dirent,d_name,19,9,34180)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct dirent,268, 10178, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct dirent,d_off,4,6,34178)
CheckOffset(struct dirent,d_off,4,6,34178)
CheckMemberSize(struct dirent,d_reclen,2,6,34179)
CheckOffset(struct dirent,d_reclen,8,6,34179)
CheckMemberSize(struct dirent,d_type,1,6,34410)
CheckOffset(struct dirent,d_type,10,6,34410)
CheckMemberSize(struct dirent,d_name,256,6,34180)
CheckOffset(struct dirent,d_name,11,6,34180)
#elif defined __ia64__
CheckTypeSize(struct dirent,280, 10178, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct dirent,d_off,8,3,34178)
CheckOffset(struct dirent,d_off,8,3,34178)
CheckMemberSize(struct dirent,d_reclen,2,3,34179)
CheckOffset(struct dirent,d_reclen,16,3,34179)
CheckMemberSize(struct dirent,d_type,1,3,34410)
CheckOffset(struct dirent,d_type,18,3,34410)
CheckMemberSize(struct dirent,d_name,256,3,34180)
CheckOffset(struct dirent,d_name,19,3,34180)
#elif defined __i386__
CheckTypeSize(struct dirent,268, 10178, 2, 1.1, NULL, 0, NULL)
CheckMemberSize(struct dirent,d_ino,4,2,34177)
CheckOffset(struct dirent,d_ino,0,2,34177)
CheckMemberSize(struct dirent,d_off,4,2,34178)
CheckOffset(struct dirent,d_off,4,2,34178)
CheckMemberSize(struct dirent,d_reclen,2,2,34179)
CheckOffset(struct dirent,d_reclen,8,2,34179)
#else
Msg("Find size of dirent (10178)\n");
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.1""',NULL,0,NULL);\n",architecture,10178,0);
#endif

#if defined __s390x__
CheckTypeSize(struct dirent64,280, 10179, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct dirent64,d_off,8,12,34182)
CheckOffset(struct dirent64,d_off,8,12,34182)
CheckMemberSize(struct dirent64,d_reclen,2,12,34183)
CheckOffset(struct dirent64,d_reclen,16,12,34183)
CheckMemberSize(struct dirent64,d_type,1,12,34184)
CheckOffset(struct dirent64,d_type,18,12,34184)
CheckMemberSize(struct dirent64,d_name,256,12,34185)
CheckOffset(struct dirent64,d_name,19,12,34185)
#elif defined __x86_64__
CheckTypeSize(struct dirent64,280, 10179, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct dirent64,d_off,8,11,34182)
CheckOffset(struct dirent64,d_off,8,11,34182)
CheckMemberSize(struct dirent64,d_reclen,2,11,34183)
CheckOffset(struct dirent64,d_reclen,16,11,34183)
CheckMemberSize(struct dirent64,d_type,1,11,34184)
CheckOffset(struct dirent64,d_type,18,11,34184)
CheckMemberSize(struct dirent64,d_name,256,11,34185)
CheckOffset(struct dirent64,d_name,19,11,34185)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct dirent64,280, 10179, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct dirent64,d_ino,8,10,34181)
CheckOffset(struct dirent64,d_ino,0,10,34181)
CheckMemberSize(struct dirent64,d_off,8,10,34182)
CheckOffset(struct dirent64,d_off,8,10,34182)
CheckMemberSize(struct dirent64,d_reclen,2,10,34183)
CheckOffset(struct dirent64,d_reclen,16,10,34183)
CheckMemberSize(struct dirent64,d_type,1,10,34184)
CheckOffset(struct dirent64,d_type,18,10,34184)
CheckMemberSize(struct dirent64,d_name,256,10,34185)
CheckOffset(struct dirent64,d_name,19,10,34185)
#elif defined __powerpc64__
CheckTypeSize(struct dirent64,280, 10179, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct dirent64,d_ino,8,9,34181)
CheckOffset(struct dirent64,d_ino,0,9,34181)
CheckMemberSize(struct dirent64,d_off,8,9,34182)
CheckOffset(struct dirent64,d_off,8,9,34182)
CheckMemberSize(struct dirent64,d_reclen,2,9,34183)
CheckOffset(struct dirent64,d_reclen,16,9,34183)
CheckMemberSize(struct dirent64,d_type,1,9,34184)
CheckOffset(struct dirent64,d_type,18,9,34184)
CheckMemberSize(struct dirent64,d_name,256,9,34185)
CheckOffset(struct dirent64,d_name,19,9,34185)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct dirent64,280, 10179, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct dirent64,d_ino,8,6,34181)
CheckOffset(struct dirent64,d_ino,0,6,34181)
CheckMemberSize(struct dirent64,d_off,8,6,34182)
CheckOffset(struct dirent64,d_off,8,6,34182)
CheckMemberSize(struct dirent64,d_reclen,2,6,34183)
CheckOffset(struct dirent64,d_reclen,16,6,34183)
CheckMemberSize(struct dirent64,d_type,1,6,34184)
CheckOffset(struct dirent64,d_type,18,6,34184)
CheckMemberSize(struct dirent64,d_name,256,6,34185)
CheckOffset(struct dirent64,d_name,19,6,34185)
#elif defined __ia64__
CheckTypeSize(struct dirent64,280, 10179, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct dirent64,d_ino,8,3,34181)
CheckOffset(struct dirent64,d_ino,0,3,34181)
CheckMemberSize(struct dirent64,d_off,8,3,34182)
CheckOffset(struct dirent64,d_off,8,3,34182)
CheckMemberSize(struct dirent64,d_reclen,2,3,34183)
CheckOffset(struct dirent64,d_reclen,16,3,34183)
CheckMemberSize(struct dirent64,d_type,1,3,34184)
CheckOffset(struct dirent64,d_type,18,3,34184)
CheckMemberSize(struct dirent64,d_name,256,3,34185)
CheckOffset(struct dirent64,d_name,19,3,34185)
#elif defined __i386__
CheckTypeSize(struct dirent64,276, 10179, 2, 1.1, NULL, 0, NULL)
CheckMemberSize(struct dirent64,d_ino,8,2,34181)
CheckOffset(struct dirent64,d_ino,0,2,34181)
CheckMemberSize(struct dirent64,d_off,8,2,34182)
CheckOffset(struct dirent64,d_off,8,2,34182)
CheckMemberSize(struct dirent64,d_reclen,2,2,34183)
CheckOffset(struct dirent64,d_reclen,16,2,34183)
CheckMemberSize(struct dirent64,d_type,1,2,34184)
CheckOffset(struct dirent64,d_type,18,2,34184)
CheckMemberSize(struct dirent64,d_name,256,2,34185)
CheckOffset(struct dirent64,d_name,19,2,34185)
#else
Msg("Find size of dirent64 (10179)\n");
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.1""',NULL,0, NULL);\n",architecture,10179,0);
#endif

extern int readdir64_r_db(DIR *, struct dirent64 *, struct dirent64 * *);
CheckInterfacedef(readdir64_r,readdir64_r_db);
extern int alphasort_db(const struct dirent * *, const struct dirent * *);
CheckInterfacedef(alphasort,alphasort_db);
extern int alphasort64_db(const struct dirent64 * *, const struct dirent64 * *);
CheckInterfacedef(alphasort64,alphasort64_db);
extern int dirfd_db(DIR *);
CheckInterfacedef(dirfd,dirfd_db);
extern void rewinddir_db(DIR *);
CheckInterfacedef(rewinddir,rewinddir_db);
extern int scandir_db(const char *, struct dirent * * *, int(*fptr0)(const struct dirent *)
, int(*fptr1)(const struct dirent * *,const struct dirent * *)
);
CheckInterfacedef(scandir,scandir_db);
extern void seekdir_db(DIR *, long int);
CheckInterfacedef(seekdir,seekdir_db);
extern long int telldir_db(DIR *);
CheckInterfacedef(telldir,telldir_db);
extern int closedir_db(DIR *);
CheckInterfacedef(closedir,closedir_db);
extern DIR * opendir_db(const char *);
CheckInterfacedef(opendir,opendir_db);
extern struct dirent * readdir_db(DIR *);
CheckInterfacedef(readdir,readdir_db);
extern struct dirent64 * readdir64_db(DIR *);
CheckInterfacedef(readdir64,readdir64_db);
extern int readdir_r_db(DIR *, struct dirent *, struct dirent * *);
CheckInterfacedef(readdir_r,readdir_r_db);
extern int scandir64_db(const char *, struct dirent64 * * *, int(*fptr2)(const struct dirent64 *)
, int(*fptr3)(const struct dirent64 * *,const struct dirent64 * *)
);
CheckInterfacedef(scandir64,scandir64_db);
extern DIR * fdopendir_db(int);
CheckInterfacedef(fdopendir,fdopendir_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in dirent.h\n\n",pcnt,cnt);
return cnt;
#endif

}
