/*
 * Test of sys/types.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "sys/types.h"



int sys_types_h()
{
int cnt=0;
CheckTypeSize(off_t,4)
CheckTypeSize(u_int16_t,2)
CheckTypeSize(u_int8_t,1)
CheckTypeSize(int64_t,8)
CheckTypeSize(int32_t,4)
CheckTypeSize(int16_t,2)
CheckTypeSize(int8_t,1)
CheckTypeSize(uint,4)
CheckTypeSize(ushort,2)
CheckTypeSize(ulong,4)
CheckTypeSize(key_t,4)
CheckTypeSize(caddr_t,4)
CheckTypeSize(daddr_t,4)
CheckTypeSize(id_t,4)
CheckTypeSize(pid_t,4)
CheckTypeSize(uid_t,4)
CheckTypeSize(nlink_t,4)
CheckTypeSize(mode_t,4)
CheckTypeSize(gid_t,4)
CheckTypeSize(dev_t,8)
CheckTypeSize(ino_t,4)
CheckTypeSize(loff_t,8)
CheckTypeSize(fsid_t,8)
CheckTypeSize(u_quad_t,8)
CheckTypeSize(quad_t,8)
CheckTypeSize(u_long,4)
CheckTypeSize(u_int,4)
CheckTypeSize(u_short,2)
CheckTypeSize(u_char,1)
CheckTypeSize(u_int32_t,4)
CheckTypeSize(u_int64_t,8)
CheckTypeSize(register_t,4)
CheckTypeSize(blkcnt_t,4)
CheckTypeSize(fsblkcnt_t,4)
CheckTypeSize(fsfilcnt_t,4)
printf("%d tests in sys/types.h\n",cnt);
return cnt;
}
