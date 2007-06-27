/*
 * Test of dirent.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
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
#ifdef TET_TEST
Msg("Checking data structures in dirent.h\n");
#endif

printf("Checking data structures in dirent.h\n");
#if defined __ia64__
CheckTypeSize(DIR,0, 10175, 3, 1.3, NULL, 10174, NULL)
#elif defined __i386__
CheckTypeSize(DIR,0, 10175, 2, 1.1, NULL, 10174, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(DIR,0, 10175, 6, 1.2, NULL, 10174, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(DIR,0, 10175, 10, 1.3, NULL, 10174, NULL)
#elif defined __powerpc64__
CheckTypeSize(DIR,0, 10175, 9, 2.0, NULL, 10174, NULL)
#elif defined __s390x__
CheckTypeSize(DIR,0, 10175, 12, 1.3, NULL, 10174, NULL)
#elif defined __x86_64__
CheckTypeSize(DIR,0, 10175, 11, 2.0, NULL, 10174, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,10174,NULL);\n",architecture,10175,0);
Msg("Find size of DIR (10175)\n");
#endif

#if defined __i386__
#elif defined __ia64__
#elif defined __powerpc__ && !defined __powerpc64__
#elif defined __s390__ && !defined __s390x__
#elif defined __powerpc64__
#elif defined __s390x__
#elif defined __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,0,NULL);\n",architecture,10178,0);
Msg("Find size of dirent (10178)\n");
#endif

#if defined __ia64__
#elif defined __i386__
#elif defined __powerpc__ && !defined __powerpc64__
#elif defined __s390__ && !defined __s390x__
#elif defined __powerpc64__
#elif defined __s390x__
#elif defined __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,0, NULL);\n",architecture,10179,0);
Msg("Find size of dirent64 (10179)\n");
#endif

extern int readdir64_r_db(DIR *, struct dirent64 *, struct dirent64 * *);
CheckInterfacedef(readdir64_r,readdir64_r_db);
extern void rewinddir_db(DIR *);
CheckInterfacedef(rewinddir,rewinddir_db);
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
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in dirent.h\n\n",pcnt,cnt);
return cnt;
#endif

}
