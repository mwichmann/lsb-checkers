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

#ifdef _LSB_DEFAULT_ARCH
#ifdef MSG_NOERROR
	CompareConstant(MSG_NOERROR,010000,3457,architecture)
#else
Msg( "Error: Constant not found: MSG_NOERROR\n");
cnt++;
#endif

#endif

#ifdef __i386__
CheckTypeSize(msgqnum_t,4, 10213, 2)
#elif __ia64__
CheckTypeSize(msgqnum_t,8, 10213, 3)
#elif __powerpc64__
CheckTypeSize(msgqnum_t,8, 10213, 9)
#elif __s390__
CheckTypeSize(msgqnum_t,4, 10213, 10)
#elif __powerpc__
CheckTypeSize(msgqnum_t,4, 10213, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10213,0);
Msg("Find size of msgqnum_t (10213)\n");
#endif

#ifdef __powerpc64__
CheckTypeSize(msglen_t,8, 10214, 9)
#elif __i386__
CheckTypeSize(msglen_t,4, 10214, 2)
#elif __powerpc__
CheckTypeSize(msglen_t,4, 10214, 6)
#elif __s390__
CheckTypeSize(msglen_t,4, 10214, 10)
#elif __ia64__
CheckTypeSize(msglen_t,8, 10214, 3)
#endif

#ifdef __i386__
CheckTypeSize(struct msqid_ds,88, 9117, 2)
CheckOffset(struct msqid_ds,msg_perm,0,2,34276)
CheckOffset(struct msqid_ds,msg_stime,36,2,34277)
CheckOffset(struct msqid_ds,__unused1,40,2,34278)
CheckOffset(struct msqid_ds,msg_rtime,44,2,34279)
CheckOffset(struct msqid_ds,__unused2,48,2,34280)
CheckOffset(struct msqid_ds,msg_ctime,52,2,34281)
CheckOffset(struct msqid_ds,__unused3,56,2,34282)
CheckOffset(struct msqid_ds,__msg_cbytes,60,2,34283)
CheckOffset(struct msqid_ds,msg_qnum,64,2,34284)
CheckOffset(struct msqid_ds,msg_qbytes,68,2,34285)
CheckOffset(struct msqid_ds,msg_lspid,72,2,34286)
CheckOffset(struct msqid_ds,msg_lrpid,76,2,34287)
CheckOffset(struct msqid_ds,__unused4,80,2,34288)
CheckOffset(struct msqid_ds,__unused5,84,2,34289)
#endif

#ifdef __ia64__
CheckTypeSize(struct msqid_ds,120, 10395, 3)
CheckOffset(struct msqid_ds,msg_perm,0,3,34654)
CheckOffset(struct msqid_ds,msg_stime,48,3,34655)
CheckOffset(struct msqid_ds,msg_rtime,56,3,34656)
CheckOffset(struct msqid_ds,msg_ctime,64,3,34657)
CheckOffset(struct msqid_ds,__msg_cbytes,72,3,34658)
CheckOffset(struct msqid_ds,msg_qnum,80,3,34659)
CheckOffset(struct msqid_ds,msg_qbytes,88,3,34660)
CheckOffset(struct msqid_ds,msg_lspid,96,3,34661)
CheckOffset(struct msqid_ds,msg_lrpid,100,3,34662)
CheckOffset(struct msqid_ds,__unused1,104,3,34663)
CheckOffset(struct msqid_ds,__unused2,112,3,34664)
#endif

#ifdef __powerpc__
CheckTypeSize(struct msqid_ds,104, 10405, 6)
CheckOffset(struct msqid_ds,msg_perm,0,6,34742)
CheckOffset(struct msqid_ds,msg_stime,0,6,34743)
CheckOffset(struct msqid_ds,__unsued1,0,6,34746)
CheckOffset(struct msqid_ds,msg_rtime,0,6,34744)
CheckOffset(struct msqid_ds,__unused2,0,6,34747)
CheckOffset(struct msqid_ds,msg_ctime,0,6,34745)
CheckOffset(struct msqid_ds,__unused3,0,6,34748)
CheckOffset(struct msqid_ds,__msg_cbytes,0,6,34749)
CheckOffset(struct msqid_ds,msg_qnum,0,6,34750)
CheckOffset(struct msqid_ds,msg_qbytes,0,6,34751)
CheckOffset(struct msqid_ds,msg_lspid,0,6,34752)
CheckOffset(struct msqid_ds,msg_lrpid,0,6,34753)
#endif

#ifdef __s390__
CheckTypeSize(struct msqid_ds,88, 10406, 10)
Msg("Missing member data for msqid_ds on S390\n");
CheckOffset(struct msqid_ds,msg_perm,0,10,34754)
CheckOffset(struct msqid_ds,msg_stime,0,10,34755)
CheckOffset(struct msqid_ds,msg_rtime,0,10,34756)
CheckOffset(struct msqid_ds,__unused1,0,10,34758)
CheckOffset(struct msqid_ds,msg_ctime,0,10,34757)
CheckOffset(struct msqid_ds,__unused2,0,10,34759)
CheckOffset(struct msqid_ds,__unused3,0,10,34760)
CheckOffset(struct msqid_ds,__msg_cbytes,0,10,34761)
CheckOffset(struct msqid_ds,msg_qnum,0,10,34762)
CheckOffset(struct msqid_ds,msg_qbytes,0,10,34763)
CheckOffset(struct msqid_ds,msg_lspid,0,10,34764)
CheckOffset(struct msqid_ds,msg_lrpid,0,10,34765)
CheckOffset(struct msqid_ds,__unused4,0,10,34766)
CheckOffset(struct msqid_ds,__unused5,0,10,34767)
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
