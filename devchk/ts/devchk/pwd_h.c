/*
 * Test of pwd.h
 */
#include "hdrchk.h"
#include "sys/types.h"
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
CheckTypeSize(struct passwd,28, 6938, 2)
CheckMemberSize(struct passwd,pw_passwd,4,2,30042)
CheckOffset(struct passwd,pw_passwd,4,2,30042)
CheckMemberSize(struct passwd,pw_uid,4,2,30043)
CheckOffset(struct passwd,pw_uid,8,2,30043)
CheckMemberSize(struct passwd,pw_gid,4,2,30044)
CheckOffset(struct passwd,pw_gid,12,2,30044)
CheckMemberSize(struct passwd,pw_gecos,4,2,30045)
CheckOffset(struct passwd,pw_gecos,16,2,30045)
CheckMemberSize(struct passwd,pw_dir,4,2,30046)
CheckOffset(struct passwd,pw_dir,20,2,30046)
CheckMemberSize(struct passwd,pw_shell,4,2,30047)
CheckOffset(struct passwd,pw_shell,24,2,30047)
#elif __ia64__
CheckTypeSize(struct passwd,48, 6938, 3)
CheckMemberSize(struct passwd,pw_passwd,8,3,30042)
CheckOffset(struct passwd,pw_passwd,8,3,30042)
CheckMemberSize(struct passwd,pw_uid,4,3,30043)
CheckOffset(struct passwd,pw_uid,16,3,30043)
CheckMemberSize(struct passwd,pw_gid,4,3,30044)
CheckOffset(struct passwd,pw_gid,20,3,30044)
CheckMemberSize(struct passwd,pw_gecos,8,3,30045)
CheckOffset(struct passwd,pw_gecos,24,3,30045)
CheckMemberSize(struct passwd,pw_dir,8,3,30046)
CheckOffset(struct passwd,pw_dir,32,3,30046)
CheckMemberSize(struct passwd,pw_shell,8,3,30047)
CheckOffset(struct passwd,pw_shell,40,3,30047)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct passwd,28, 6938, 6)
CheckMemberSize(struct passwd,pw_passwd,4,6,30042)
CheckOffset(struct passwd,pw_passwd,4,6,30042)
CheckMemberSize(struct passwd,pw_uid,4,6,30043)
CheckOffset(struct passwd,pw_uid,8,6,30043)
CheckMemberSize(struct passwd,pw_gid,4,6,30044)
CheckOffset(struct passwd,pw_gid,12,6,30044)
CheckMemberSize(struct passwd,pw_gecos,4,6,30045)
CheckOffset(struct passwd,pw_gecos,16,6,30045)
CheckMemberSize(struct passwd,pw_dir,4,6,30046)
CheckOffset(struct passwd,pw_dir,20,6,30046)
CheckMemberSize(struct passwd,pw_shell,4,6,30047)
CheckOffset(struct passwd,pw_shell,24,6,30047)
#elif __s390__ && !__s390x__
CheckTypeSize(struct passwd,28, 6938, 10)
CheckMemberSize(struct passwd,pw_passwd,4,10,30042)
CheckOffset(struct passwd,pw_passwd,4,10,30042)
CheckMemberSize(struct passwd,pw_uid,4,10,30043)
CheckOffset(struct passwd,pw_uid,8,10,30043)
CheckMemberSize(struct passwd,pw_gid,4,10,30044)
CheckOffset(struct passwd,pw_gid,12,10,30044)
CheckMemberSize(struct passwd,pw_gecos,4,10,30045)
CheckOffset(struct passwd,pw_gecos,16,10,30045)
CheckMemberSize(struct passwd,pw_dir,4,10,30046)
CheckOffset(struct passwd,pw_dir,20,10,30046)
CheckMemberSize(struct passwd,pw_shell,4,10,30047)
CheckOffset(struct passwd,pw_shell,24,10,30047)
#elif __powerpc64__
CheckTypeSize(struct passwd,48, 6938, 9)
CheckMemberSize(struct passwd,pw_passwd,8,9,30042)
CheckOffset(struct passwd,pw_passwd,8,9,30042)
CheckMemberSize(struct passwd,pw_uid,4,9,30043)
CheckOffset(struct passwd,pw_uid,16,9,30043)
CheckMemberSize(struct passwd,pw_gid,4,9,30044)
CheckOffset(struct passwd,pw_gid,20,9,30044)
CheckMemberSize(struct passwd,pw_gecos,8,9,30045)
CheckOffset(struct passwd,pw_gecos,24,9,30045)
CheckMemberSize(struct passwd,pw_dir,8,9,30046)
CheckOffset(struct passwd,pw_dir,32,9,30046)
CheckMemberSize(struct passwd,pw_shell,8,9,30047)
CheckOffset(struct passwd,pw_shell,40,9,30047)
#elif __s390x__
CheckTypeSize(struct passwd,48, 6938, 12)
CheckMemberSize(struct passwd,pw_passwd,8,12,30042)
CheckOffset(struct passwd,pw_passwd,8,12,30042)
CheckMemberSize(struct passwd,pw_uid,4,12,30043)
CheckOffset(struct passwd,pw_uid,16,12,30043)
CheckMemberSize(struct passwd,pw_gid,4,12,30044)
CheckOffset(struct passwd,pw_gid,20,12,30044)
CheckMemberSize(struct passwd,pw_gecos,8,12,30045)
CheckOffset(struct passwd,pw_gecos,24,12,30045)
CheckMemberSize(struct passwd,pw_dir,8,12,30046)
CheckOffset(struct passwd,pw_dir,32,12,30046)
CheckMemberSize(struct passwd,pw_shell,8,12,30047)
CheckOffset(struct passwd,pw_shell,40,12,30047)
#elif __x86_64__
CheckTypeSize(struct passwd,48, 6938, 11)
CheckMemberSize(struct passwd,pw_passwd,8,11,30042)
CheckOffset(struct passwd,pw_passwd,8,11,30042)
CheckMemberSize(struct passwd,pw_uid,4,11,30043)
CheckOffset(struct passwd,pw_uid,16,11,30043)
CheckMemberSize(struct passwd,pw_gid,4,11,30044)
CheckOffset(struct passwd,pw_gid,20,11,30044)
CheckMemberSize(struct passwd,pw_gecos,8,11,30045)
CheckOffset(struct passwd,pw_gecos,24,11,30045)
CheckMemberSize(struct passwd,pw_dir,8,11,30046)
CheckOffset(struct passwd,pw_dir,32,11,30046)
CheckMemberSize(struct passwd,pw_shell,8,11,30047)
CheckOffset(struct passwd,pw_shell,40,11,30047)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6938,0);
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
