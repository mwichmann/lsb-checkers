/*
 * Test of grp.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "grp.h"



#ifdef TET_TEST
void grp_h()
{
#else
int grp_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in grp.h\n");
#endif

printf("Checking data structures in grp.h\n");
#if __i386__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __s390__ && !__s390x__
#elif __powerpc64__
#elif __s390x__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,0, NULL);\n",architecture,6894,0);
Msg("Find size of group (6894)\n");
#endif

extern void endgrent_db(void);
CheckInterfacedef(endgrent,endgrent_db);
extern struct group * getgrent_db(void);
CheckInterfacedef(getgrent,getgrent_db);
extern struct group * getgrgid_db(gid_t);
CheckInterfacedef(getgrgid,getgrgid_db);
extern struct group * getgrnam_db(const char *);
CheckInterfacedef(getgrnam,getgrnam_db);
extern int initgroups_db(const char *, gid_t);
CheckInterfacedef(initgroups,initgroups_db);
extern void setgrent_db(void);
CheckInterfacedef(setgrent,setgrent_db);
extern int setgroups_db(size_t, const gid_t *);
CheckInterfacedef(setgroups,setgroups_db);
extern int getgrgid_r_db(gid_t, struct group *, char *, size_t, struct group * *);
CheckInterfacedef(getgrgid_r,getgrgid_r_db);
extern int getgrnam_r_db(const char *, struct group *, char *, size_t, struct group * *);
CheckInterfacedef(getgrnam_r,getgrnam_r_db);
extern int getgrouplist_db(const char *, gid_t, gid_t *, int *);
CheckInterfacedef(getgrouplist,getgrouplist_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in grp.h\n\n",pcnt,cnt);
return cnt;
#endif

}
