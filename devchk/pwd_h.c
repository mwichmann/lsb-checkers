/*
 * Test of pwd.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "pwd.h"



int pwd_h()
{
int cnt=0;
CheckTypeSize(struct passwd,0)
CheckOffset(struct passwd,pw_name,0)
CheckOffset(struct passwd,pw_passwd,4)
CheckOffset(struct passwd,pw_uid,8)
CheckOffset(struct passwd,pw_gid,12)
CheckOffset(struct passwd,pw_gecos,16)
CheckOffset(struct passwd,pw_dir,20)
CheckOffset(struct passwd,pw_shell,24)
printf("%d tests in pwd.h\n",cnt);
return cnt;
}
