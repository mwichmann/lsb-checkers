/*
 * Test of grp.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
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
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in grp.h\n");
#endif

printf("Checking data structures in grp.h\n");
#if defined __s390x__
CheckTypeSize(struct group,32, 6894, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct group,gr_passwd,8,12,29793)
CheckOffset(struct group,gr_passwd,8,12,29793)
CheckMemberSize(struct group,gr_gid,4,12,29794)
CheckOffset(struct group,gr_gid,16,12,29794)
CheckMemberSize(struct group,gr_mem,8,12,29795)
CheckOffset(struct group,gr_mem,24,12,29795)
#elif defined __x86_64__
CheckTypeSize(struct group,32, 6894, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct group,gr_passwd,8,11,29793)
CheckOffset(struct group,gr_passwd,8,11,29793)
CheckMemberSize(struct group,gr_gid,4,11,29794)
CheckOffset(struct group,gr_gid,16,11,29794)
CheckMemberSize(struct group,gr_mem,8,11,29795)
CheckOffset(struct group,gr_mem,24,11,29795)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct group,16, 6894, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct group,gr_passwd,4,10,29793)
CheckOffset(struct group,gr_passwd,4,10,29793)
CheckMemberSize(struct group,gr_gid,4,10,29794)
CheckOffset(struct group,gr_gid,8,10,29794)
CheckMemberSize(struct group,gr_mem,4,10,29795)
CheckOffset(struct group,gr_mem,12,10,29795)
#elif defined __powerpc64__
CheckTypeSize(struct group,32, 6894, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct group,gr_passwd,8,9,29793)
CheckOffset(struct group,gr_passwd,8,9,29793)
CheckMemberSize(struct group,gr_gid,4,9,29794)
CheckOffset(struct group,gr_gid,16,9,29794)
CheckMemberSize(struct group,gr_mem,8,9,29795)
CheckOffset(struct group,gr_mem,24,9,29795)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct group,16, 6894, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct group,gr_passwd,4,6,29793)
CheckOffset(struct group,gr_passwd,4,6,29793)
CheckMemberSize(struct group,gr_gid,4,6,29794)
CheckOffset(struct group,gr_gid,8,6,29794)
CheckMemberSize(struct group,gr_mem,4,6,29795)
CheckOffset(struct group,gr_mem,12,6,29795)
#elif defined __ia64__
CheckTypeSize(struct group,32, 6894, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct group,gr_passwd,8,3,29793)
CheckOffset(struct group,gr_passwd,8,3,29793)
CheckMemberSize(struct group,gr_gid,4,3,29794)
CheckOffset(struct group,gr_gid,16,3,29794)
CheckMemberSize(struct group,gr_mem,8,3,29795)
CheckOffset(struct group,gr_mem,24,3,29795)
#elif defined __i386__
CheckTypeSize(struct group,16, 6894, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct group,gr_name,4,2,29792)
CheckOffset(struct group,gr_name,0,2,29792)
CheckMemberSize(struct group,gr_passwd,4,2,29793)
CheckOffset(struct group,gr_passwd,4,2,29793)
CheckMemberSize(struct group,gr_gid,4,2,29794)
CheckOffset(struct group,gr_gid,8,2,29794)
CheckMemberSize(struct group,gr_mem,4,2,29795)
CheckOffset(struct group,gr_mem,12,2,29795)
#else
Msg("Find size of group (6894)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0, NULL);\n",architecture,6894,0);
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
extern int getgrent_r_db(struct group *, char *, size_t, struct group * *);
CheckInterfacedef(getgrent_r,getgrent_r_db);
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
