/*
 * Test of sys/vfs.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include "sys/vfs.h"



#ifdef TET_TEST
void sys_vfs_h()
{
#else
int sys_vfs_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in sys/vfs.h\n");
#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef EXT2_SUPER_MAGIC
	CompareConstant(EXT2_SUPER_MAGIC,0xEF53,5023,architecture)
#else
Msg( "Error: Constant not found: EXT2_SUPER_MAGIC\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef ISOFS_SUPER_MAGIC
	CompareConstant(ISOFS_SUPER_MAGIC,0x9660,5024,architecture)
#else
Msg( "Error: Constant not found: ISOFS_SUPER_MAGIC\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef MSDOS_SUPER_MAGIC
	CompareConstant(MSDOS_SUPER_MAGIC,0x4d44,5025,architecture)
#else
Msg( "Error: Constant not found: MSDOS_SUPER_MAGIC\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef NFS_SUPER_MAGIC
	CompareConstant(NFS_SUPER_MAGIC,0x6969,5026,architecture)
#else
Msg( "Error: Constant not found: NFS_SUPER_MAGIC\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef PROC_SUPER_MAGIC
	CompareConstant(PROC_SUPER_MAGIC,0x9fa0,5027,architecture)
#else
Msg( "Error: Constant not found: PROC_SUPER_MAGIC\n");
cnt++;
#endif

#endif

#ifdef __i386__
CheckTypeSize(struct statfs,64, 10319, 2)
CheckOffset(struct statfs,f_type,0,2,34498)
CheckOffset(struct statfs,f_bsize,4,2,34499)
CheckOffset(struct statfs,f_blocks,8,2,34500)
CheckOffset(struct statfs,f_bfree,12,2,34501)
CheckOffset(struct statfs,f_bavail,16,2,34502)
CheckOffset(struct statfs,f_files,20,2,34503)
CheckOffset(struct statfs,f_ffree,24,2,34504)
CheckOffset(struct statfs,f_fsid,28,2,34505)
CheckOffset(struct statfs,f_namelen,36,2,34506)
CheckOffset(struct statfs,f_spare,40,2,34507)
#elif __ia64__
CheckTypeSize(struct statfs,120, 10319, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10319,0);
Msg("Find size of statfs (10319)\n");
#endif

#ifdef __i386__
CheckTypeSize(struct statfs64,84, 10321, 2)
CheckOffset(struct statfs64,f_type,0,2,34508)
CheckOffset(struct statfs64,f_bsize,4,2,34509)
CheckOffset(struct statfs64,f_blocks,8,2,34510)
CheckOffset(struct statfs64,f_bfree,16,2,34511)
CheckOffset(struct statfs64,f_bavail,24,2,34512)
CheckOffset(struct statfs64,f_files,32,2,34513)
CheckOffset(struct statfs64,f_ffree,40,2,34514)
CheckOffset(struct statfs64,f_fsid,48,2,34515)
CheckOffset(struct statfs64,f_namelen,56,2,34516)
CheckOffset(struct statfs64,f_spare,60,2,34517)
#elif __ia64__
CheckTypeSize(struct statfs64,120, 10321, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10321,0);
Msg("Find size of statfs64 (10321)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in sys/vfs.h\n",cnt);
return cnt;
#endif

}
