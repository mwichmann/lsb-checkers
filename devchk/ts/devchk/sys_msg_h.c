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
#endif

#ifdef __i386__
CheckTypeSize(msglen_t,4, 10214, 2)
#elif __powerpc__
CheckTypeSize(msglen_t,4, 10214, 6)
#elif __s390__
CheckTypeSize(msglen_t,4, 10214, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10214,0);
Msg("Find size of msglen_t (10214)\n");
#endif

#ifdef __i386__
CheckTypeSize(struct msqid_ds,88, 9117, 2)
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
#elif __ia64__
CheckTypeSize(struct msqid_ds,120, 9117, 3)
Msg("Missing member data for msqid_ds on IA64\n");
CheckOffset(struct msqid_ds,msg_perm,0,3,34276)
CheckOffset(struct msqid_ds,msg_stime,0,3,34277)
CheckOffset(struct msqid_ds,__unused1,0,3,34278)
CheckOffset(struct msqid_ds,msg_rtime,0,3,34279)
CheckOffset(struct msqid_ds,__unused2,0,3,34280)
CheckOffset(struct msqid_ds,msg_ctime,0,3,34281)
CheckOffset(struct msqid_ds,__unused3,0,3,34282)
CheckOffset(struct msqid_ds,__msg_cbytes,0,3,34283)
CheckOffset(struct msqid_ds,msg_qnum,0,3,34284)
CheckOffset(struct msqid_ds,msg_qbytes,0,3,34285)
CheckOffset(struct msqid_ds,msg_lspid,0,3,34286)
CheckOffset(struct msqid_ds,msg_lrpid,0,3,34287)
CheckOffset(struct msqid_ds,__unused4,0,3,34288)
CheckOffset(struct msqid_ds,__unused5,0,3,34289)
#elif __powerpc__
CheckTypeSize(struct msqid_ds,104, 9117, 6)
Msg("Missing member data for msqid_ds on PPC32\n");
CheckOffset(struct msqid_ds,msg_perm,0,6,34276)
CheckOffset(struct msqid_ds,msg_stime,0,6,34277)
CheckOffset(struct msqid_ds,__unused1,0,6,34278)
CheckOffset(struct msqid_ds,msg_rtime,0,6,34279)
CheckOffset(struct msqid_ds,__unused2,0,6,34280)
CheckOffset(struct msqid_ds,msg_ctime,0,6,34281)
CheckOffset(struct msqid_ds,__unused3,0,6,34282)
CheckOffset(struct msqid_ds,__msg_cbytes,0,6,34283)
CheckOffset(struct msqid_ds,msg_qnum,0,6,34284)
CheckOffset(struct msqid_ds,msg_qbytes,0,6,34285)
CheckOffset(struct msqid_ds,msg_lspid,0,6,34286)
CheckOffset(struct msqid_ds,msg_lrpid,0,6,34287)
CheckOffset(struct msqid_ds,__unused4,0,6,34288)
CheckOffset(struct msqid_ds,__unused5,0,6,34289)
#elif __s390__
CheckTypeSize(struct msqid_ds,88, 9117, 10)
Msg("Missing member data for msqid_ds on S390\n");
CheckOffset(struct msqid_ds,msg_perm,0,10,34276)
CheckOffset(struct msqid_ds,msg_stime,0,10,34277)
CheckOffset(struct msqid_ds,__unused1,0,10,34278)
CheckOffset(struct msqid_ds,msg_rtime,0,10,34279)
CheckOffset(struct msqid_ds,__unused2,0,10,34280)
CheckOffset(struct msqid_ds,msg_ctime,0,10,34281)
CheckOffset(struct msqid_ds,__unused3,0,10,34282)
CheckOffset(struct msqid_ds,__msg_cbytes,0,10,34283)
CheckOffset(struct msqid_ds,msg_qnum,0,10,34284)
CheckOffset(struct msqid_ds,msg_qbytes,0,10,34285)
CheckOffset(struct msqid_ds,msg_lspid,0,10,34286)
CheckOffset(struct msqid_ds,msg_lrpid,0,10,34287)
CheckOffset(struct msqid_ds,__unused4,0,10,34288)
CheckOffset(struct msqid_ds,__unused5,0,10,34289)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9117,0);
Msg("Find size of msqid_ds (9117)\n");
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
