/*
 * Test of sys/msg.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include "sys/msg.h"



#ifdef TET_TEST
void sys_msg_h()
{
#else
int sys_msg_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in sys/msg.h\n");
#endif

#if _LSB_DEFAULT_ARCH
#ifdef MSG_NOERROR
	CompareConstant(MSG_NOERROR,010000,3457,architecture)
#else
Msg( "Error: Constant not found: MSG_NOERROR\n");
cnt++;
#endif

#endif

#if __i386__
CheckTypeSize(msgqnum_t,4, 10213, 2)
#elif __powerpc64__
CheckTypeSize(msgqnum_t,8, 10213, 9)
#elif __s390__
CheckTypeSize(msgqnum_t,4, 10213, 10)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(msgqnum_t,4, 10213, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10213,0);
Msg("Find size of msgqnum_t (10213)\n");
#endif

#if __powerpc64__
CheckTypeSize(msglen_t,8, 10214, 9)
#elif __i386__
CheckTypeSize(msglen_t,4, 10214, 2)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(msglen_t,4, 10214, 6)
#elif __s390__
CheckTypeSize(msglen_t,4, 10214, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10214,0);
Msg("Find size of msglen_t (10214)\n");
#endif

#if __i386__
CheckTypeSize(struct msqid_ds,88, 9117, 2)
CheckMemberSize(struct msqid_ds,msg_perm,36,2,34276)
CheckOffset(struct msqid_ds,msg_perm,0,2,34276)
CheckMemberSize(struct msqid_ds,msg_stime,4,2,34277)
CheckOffset(struct msqid_ds,msg_stime,36,2,34277)
CheckMemberSize(struct msqid_ds,__unused1,4,2,34278)
CheckOffset(struct msqid_ds,__unused1,40,2,34278)
CheckMemberSize(struct msqid_ds,msg_rtime,4,2,34279)
CheckOffset(struct msqid_ds,msg_rtime,44,2,34279)
CheckMemberSize(struct msqid_ds,__unused2,4,2,34280)
CheckOffset(struct msqid_ds,__unused2,48,2,34280)
CheckMemberSize(struct msqid_ds,msg_ctime,4,2,34281)
CheckOffset(struct msqid_ds,msg_ctime,52,2,34281)
CheckMemberSize(struct msqid_ds,__unused3,4,2,34282)
CheckOffset(struct msqid_ds,__unused3,56,2,34282)
CheckMemberSize(struct msqid_ds,__msg_cbytes,4,2,34283)
CheckOffset(struct msqid_ds,__msg_cbytes,60,2,34283)
CheckMemberSize(struct msqid_ds,msg_qnum,4,2,34284)
CheckOffset(struct msqid_ds,msg_qnum,64,2,34284)
CheckMemberSize(struct msqid_ds,msg_qbytes,4,2,34285)
CheckOffset(struct msqid_ds,msg_qbytes,68,2,34285)
CheckMemberSize(struct msqid_ds,msg_lspid,4,2,34286)
CheckOffset(struct msqid_ds,msg_lspid,72,2,34286)
CheckMemberSize(struct msqid_ds,msg_lrpid,4,2,34287)
CheckOffset(struct msqid_ds,msg_lrpid,76,2,34287)
CheckMemberSize(struct msqid_ds,__unused4,4,2,34288)
CheckOffset(struct msqid_ds,__unused4,80,2,34288)
CheckMemberSize(struct msqid_ds,__unused5,4,2,34289)
CheckOffset(struct msqid_ds,__unused5,84,2,34289)
#endif

#if __ia64__
CheckTypeSize(struct msqid_ds,120, 10395, 3)
CheckMemberSize(struct msqid_ds,msg_perm,48,3,34654)
CheckOffset(struct msqid_ds,msg_perm,0,3,34654)
CheckMemberSize(struct msqid_ds,msg_stime,8,3,34655)
CheckOffset(struct msqid_ds,msg_stime,48,3,34655)
CheckMemberSize(struct msqid_ds,msg_rtime,8,3,34656)
CheckOffset(struct msqid_ds,msg_rtime,56,3,34656)
CheckMemberSize(struct msqid_ds,msg_ctime,8,3,34657)
CheckOffset(struct msqid_ds,msg_ctime,64,3,34657)
CheckMemberSize(struct msqid_ds,__msg_cbytes,8,3,34658)
CheckOffset(struct msqid_ds,__msg_cbytes,72,3,34658)
CheckMemberSize(struct msqid_ds,msg_qnum,8,3,34659)
CheckOffset(struct msqid_ds,msg_qnum,80,3,34659)
CheckMemberSize(struct msqid_ds,msg_qbytes,8,3,34660)
CheckOffset(struct msqid_ds,msg_qbytes,88,3,34660)
CheckMemberSize(struct msqid_ds,msg_lspid,4,3,34661)
CheckOffset(struct msqid_ds,msg_lspid,96,3,34661)
CheckMemberSize(struct msqid_ds,msg_lrpid,4,3,34662)
CheckOffset(struct msqid_ds,msg_lrpid,100,3,34662)
CheckMemberSize(struct msqid_ds,__unused1,8,3,34663)
CheckOffset(struct msqid_ds,__unused1,104,3,34663)
CheckMemberSize(struct msqid_ds,__unused2,8,3,34664)
CheckOffset(struct msqid_ds,__unused2,112,3,34664)
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(struct msqid_ds,104, 10405, 6)
CheckMemberSize(struct msqid_ds,msg_perm,48,6,34742)
CheckOffset(struct msqid_ds,msg_perm,0,6,34742)
CheckMemberSize(struct msqid_ds,msg_stime,4,6,34743)
CheckOffset(struct msqid_ds,msg_stime,52,6,34743)
CheckMemberSize(struct msqid_ds,__unused1,4,6,34746)
CheckOffset(struct msqid_ds,__unused1,48,6,34746)
CheckMemberSize(struct msqid_ds,msg_rtime,4,6,34744)
CheckOffset(struct msqid_ds,msg_rtime,60,6,34744)
CheckMemberSize(struct msqid_ds,__unused2,4,6,34747)
CheckOffset(struct msqid_ds,__unused2,56,6,34747)
CheckMemberSize(struct msqid_ds,msg_ctime,4,6,34745)
CheckOffset(struct msqid_ds,msg_ctime,68,6,34745)
CheckMemberSize(struct msqid_ds,__unused3,4,6,34748)
CheckOffset(struct msqid_ds,__unused3,64,6,34748)
CheckMemberSize(struct msqid_ds,__msg_cbytes,4,6,34749)
CheckOffset(struct msqid_ds,__msg_cbytes,72,6,34749)
CheckMemberSize(struct msqid_ds,msg_qnum,4,6,34750)
CheckOffset(struct msqid_ds,msg_qnum,76,6,34750)
CheckMemberSize(struct msqid_ds,msg_qbytes,4,6,34751)
CheckOffset(struct msqid_ds,msg_qbytes,80,6,34751)
CheckMemberSize(struct msqid_ds,msg_lspid,4,6,34752)
CheckOffset(struct msqid_ds,msg_lspid,84,6,34752)
CheckMemberSize(struct msqid_ds,msg_lrpid,4,6,34753)
CheckOffset(struct msqid_ds,msg_lrpid,88,6,34753)
#endif

#if __s390__
CheckTypeSize(struct msqid_ds,88, 10406, 10)
CheckMemberSize(struct msqid_ds,msg_stime,0,10,34755)
CheckOffset(struct msqid_ds,msg_stime,36,10,34755)
CheckMemberSize(struct msqid_ds,msg_rtime,0,10,34756)
CheckOffset(struct msqid_ds,msg_rtime,44,10,34756)
CheckMemberSize(struct msqid_ds,__unused1,0,10,34758)
CheckOffset(struct msqid_ds,__unused1,40,10,34758)
CheckMemberSize(struct msqid_ds,msg_ctime,0,10,34757)
CheckOffset(struct msqid_ds,msg_ctime,52,10,34757)
CheckMemberSize(struct msqid_ds,__unused2,0,10,34759)
CheckOffset(struct msqid_ds,__unused2,48,10,34759)
CheckMemberSize(struct msqid_ds,__unused3,0,10,34760)
CheckOffset(struct msqid_ds,__unused3,56,10,34760)
CheckMemberSize(struct msqid_ds,__msg_cbytes,0,10,34761)
CheckOffset(struct msqid_ds,__msg_cbytes,60,10,34761)
CheckMemberSize(struct msqid_ds,msg_qnum,0,10,34762)
CheckOffset(struct msqid_ds,msg_qnum,64,10,34762)
CheckMemberSize(struct msqid_ds,msg_qbytes,0,10,34763)
CheckOffset(struct msqid_ds,msg_qbytes,68,10,34763)
CheckMemberSize(struct msqid_ds,msg_lspid,0,10,34764)
CheckOffset(struct msqid_ds,msg_lspid,72,10,34764)
CheckMemberSize(struct msqid_ds,msg_lrpid,0,10,34765)
CheckOffset(struct msqid_ds,msg_lrpid,76,10,34765)
CheckMemberSize(struct msqid_ds,__unused4,0,10,34766)
CheckOffset(struct msqid_ds,__unused4,80,10,34766)
CheckMemberSize(struct msqid_ds,__unused5,0,10,34767)
CheckOffset(struct msqid_ds,__unused5,84,10,34767)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in sys/msg.h\n",cnt);
return cnt;
#endif

}
