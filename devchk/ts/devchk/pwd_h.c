/*
 * Test of pwd.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "pwd.h"



#ifdef TET_TEST
void pwd_h()
{
#else
int pwd_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in pwd.h\n");
#endif

printf("Checking data structures in pwd.h\n");
#if __i386__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __s390__ && !__s390x__
#elif __powerpc64__
#elif __s390x__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,0, NULL);\n",architecture,6938,0);
Msg("Find size of passwd (6938)\n");
#endif

extern void endpwent_db(void);
CheckInterfacedef(endpwent,endpwent_db);
extern struct passwd * getpwent_db(void);
CheckInterfacedef(getpwent,getpwent_db);
extern struct passwd * getpwnam_db(const char *);
CheckInterfacedef(getpwnam,getpwnam_db);
extern struct passwd * getpwuid_db(uid_t);
CheckInterfacedef(getpwuid,getpwuid_db);
extern void setpwent_db(void);
CheckInterfacedef(setpwent,setpwent_db);
extern int getpwnam_r_db(const char *, struct passwd *, char *, size_t, struct passwd * *);
CheckInterfacedef(getpwnam_r,getpwnam_r_db);
extern int getpwuid_r_db(uid_t, struct passwd *, char *, size_t, struct passwd * *);
CheckInterfacedef(getpwuid_r,getpwuid_r_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in pwd.h\n\n",pcnt,cnt);
return cnt;
#endif

}
