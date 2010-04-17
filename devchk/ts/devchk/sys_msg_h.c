/*
 * Test of sys/msg.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include "sys/msg.h"



#ifdef TET_TEST
void sys_msg_h()
{
#else
int sys_msg_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in sys/msg.h\n");
#endif

printf("Checking data structures in sys/msg.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef MSG_NOERROR
	CompareConstant(MSG_NOERROR,010000,3457,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: MSG_NOERROR\n");
cnt++;
#endif

#endif

#if defined __s390x__
CheckTypeSize(msgqnum_t,8, 10213, 12, 2.0, NULL, 9, NULL)
#elif defined __x86_64__
CheckTypeSize(msgqnum_t,8, 10213, 11, 2.0, NULL, 9, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(msgqnum_t,4, 10213, 10, 2.0, NULL, 9, NULL)
#elif defined __powerpc64__
CheckTypeSize(msgqnum_t,8, 10213, 9, 2.0, NULL, 9, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(msgqnum_t,4, 10213, 6, 2.0, NULL, 9, NULL)
#elif defined __i386__
CheckTypeSize(msgqnum_t,4, 10213, 2, 2.0, NULL, 9, NULL)
#endif

#if defined __s390x__
CheckTypeSize(msglen_t,8, 10214, 12, 2.0, NULL, 9, NULL)
#elif defined __x86_64__
CheckTypeSize(msglen_t,8, 10214, 11, 2.0, NULL, 9, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(msglen_t,4, 10214, 10, 2.0, NULL, 9, NULL)
#elif defined __powerpc64__
CheckTypeSize(msglen_t,8, 10214, 9, 2.0, NULL, 9, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(msglen_t,4, 10214, 6, 2.0, NULL, 9, NULL)
#elif defined __i386__
CheckTypeSize(msglen_t,4, 10214, 2, 2.0, NULL, 9, NULL)
#endif

#if defined __s390x__
CheckTypeSize(struct msqid_ds,120, 9117, 12, 2.0, NULL, 0, NULL)
CheckMemberSize(struct msqid_ds,msg_perm,48,12,40201)
CheckOffset(struct msqid_ds,msg_perm,0,12,40201)
CheckMemberSize(struct msqid_ds,msg_stime,8,12,40202)
CheckOffset(struct msqid_ds,msg_stime,48,12,40202)
CheckMemberSize(struct msqid_ds,msg_rtime,8,12,40203)
CheckOffset(struct msqid_ds,msg_rtime,56,12,40203)
CheckMemberSize(struct msqid_ds,msg_ctime,8,12,40204)
CheckOffset(struct msqid_ds,msg_ctime,64,12,40204)
CheckMemberSize(struct msqid_ds,__msg_cbytes,8,12,40205)
CheckOffset(struct msqid_ds,__msg_cbytes,72,12,40205)
CheckMemberSize(struct msqid_ds,msg_qnum,8,12,40206)
CheckOffset(struct msqid_ds,msg_qnum,80,12,40206)
CheckMemberSize(struct msqid_ds,msg_qbytes,8,12,40207)
CheckOffset(struct msqid_ds,msg_qbytes,88,12,40207)
CheckMemberSize(struct msqid_ds,msg_lspid,4,12,40208)
CheckOffset(struct msqid_ds,msg_lspid,96,12,40208)
CheckMemberSize(struct msqid_ds,msg_lrpid,4,12,40209)
CheckOffset(struct msqid_ds,msg_lrpid,100,12,40209)
CheckMemberSize(struct msqid_ds,__unused4,8,12,40210)
CheckOffset(struct msqid_ds,__unused4,104,12,40210)
CheckMemberSize(struct msqid_ds,__unused5,8,12,40211)
CheckOffset(struct msqid_ds,__unused5,112,12,40211)
#elif defined __x86_64__
CheckTypeSize(struct msqid_ds,120, 9117, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct msqid_ds,msg_perm,48,11,40437)
CheckOffset(struct msqid_ds,msg_perm,0,11,40437)
CheckMemberSize(struct msqid_ds,msg_stime,8,11,40438)
CheckOffset(struct msqid_ds,msg_stime,48,11,40438)
CheckMemberSize(struct msqid_ds,msg_rtime,8,11,40439)
CheckOffset(struct msqid_ds,msg_rtime,56,11,40439)
CheckMemberSize(struct msqid_ds,msg_ctime,8,11,40440)
CheckOffset(struct msqid_ds,msg_ctime,64,11,40440)
CheckMemberSize(struct msqid_ds,__msg_cbytes,8,11,40441)
CheckOffset(struct msqid_ds,__msg_cbytes,72,11,40441)
CheckMemberSize(struct msqid_ds,msg_qnum,8,11,40442)
CheckOffset(struct msqid_ds,msg_qnum,80,11,40442)
CheckMemberSize(struct msqid_ds,msg_qbytes,8,11,40443)
CheckOffset(struct msqid_ds,msg_qbytes,88,11,40443)
CheckMemberSize(struct msqid_ds,msg_lspid,4,11,40444)
CheckOffset(struct msqid_ds,msg_lspid,96,11,40444)
CheckMemberSize(struct msqid_ds,msg_lrpid,4,11,40445)
CheckOffset(struct msqid_ds,msg_lrpid,100,11,40445)
CheckMemberSize(struct msqid_ds,__unused4,8,11,40745)
CheckOffset(struct msqid_ds,__unused4,104,11,40745)
CheckMemberSize(struct msqid_ds,__unused5,8,11,40746)
CheckOffset(struct msqid_ds,__unused5,112,11,40746)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct msqid_ds,88, 9117, 10, 2.0, NULL, 0, NULL)
CheckMemberSize(struct msqid_ds,msg_perm,36,10,34754)
CheckOffset(struct msqid_ds,msg_perm,0,10,34754)
CheckMemberSize(struct msqid_ds,msg_stime,4,10,34755)
CheckOffset(struct msqid_ds,msg_stime,36,10,34755)
CheckMemberSize(struct msqid_ds,__unused1,4,10,34758)
CheckOffset(struct msqid_ds,__unused1,40,10,34758)
CheckMemberSize(struct msqid_ds,msg_rtime,4,10,34756)
CheckOffset(struct msqid_ds,msg_rtime,44,10,34756)
CheckMemberSize(struct msqid_ds,__unused2,4,10,34759)
CheckOffset(struct msqid_ds,__unused2,48,10,34759)
CheckMemberSize(struct msqid_ds,msg_ctime,4,10,34757)
CheckOffset(struct msqid_ds,msg_ctime,52,10,34757)
CheckMemberSize(struct msqid_ds,__unused3,4,10,34760)
CheckOffset(struct msqid_ds,__unused3,56,10,34760)
CheckMemberSize(struct msqid_ds,__msg_cbytes,4,10,34761)
CheckOffset(struct msqid_ds,__msg_cbytes,60,10,34761)
CheckMemberSize(struct msqid_ds,msg_qnum,4,10,34762)
CheckOffset(struct msqid_ds,msg_qnum,64,10,34762)
CheckMemberSize(struct msqid_ds,msg_qbytes,4,10,34763)
CheckOffset(struct msqid_ds,msg_qbytes,68,10,34763)
CheckMemberSize(struct msqid_ds,msg_lspid,4,10,34764)
CheckOffset(struct msqid_ds,msg_lspid,72,10,34764)
CheckMemberSize(struct msqid_ds,msg_lrpid,4,10,34765)
CheckOffset(struct msqid_ds,msg_lrpid,76,10,34765)
CheckMemberSize(struct msqid_ds,__unused4,4,10,34766)
CheckOffset(struct msqid_ds,__unused4,80,10,34766)
CheckMemberSize(struct msqid_ds,__unused5,4,10,34767)
CheckOffset(struct msqid_ds,__unused5,84,10,34767)
#elif defined __powerpc64__
CheckTypeSize(struct msqid_ds,120, 9117, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct msqid_ds,msg_perm,48,9,40655)
CheckOffset(struct msqid_ds,msg_perm,0,9,40655)
CheckMemberSize(struct msqid_ds,msg_stime,8,9,40656)
CheckOffset(struct msqid_ds,msg_stime,48,9,40656)
CheckMemberSize(struct msqid_ds,msg_rtime,8,9,40657)
CheckOffset(struct msqid_ds,msg_rtime,56,9,40657)
CheckMemberSize(struct msqid_ds,msg_ctime,8,9,40658)
CheckOffset(struct msqid_ds,msg_ctime,64,9,40658)
CheckMemberSize(struct msqid_ds,__msg_cbytes,8,9,40659)
CheckOffset(struct msqid_ds,__msg_cbytes,72,9,40659)
CheckMemberSize(struct msqid_ds,msg_qnum,8,9,40660)
CheckOffset(struct msqid_ds,msg_qnum,80,9,40660)
CheckMemberSize(struct msqid_ds,msg_qbytes,8,9,40661)
CheckOffset(struct msqid_ds,msg_qbytes,88,9,40661)
CheckMemberSize(struct msqid_ds,msg_lspid,4,9,40662)
CheckOffset(struct msqid_ds,msg_lspid,96,9,40662)
CheckMemberSize(struct msqid_ds,msg_lrpid,4,9,40663)
CheckOffset(struct msqid_ds,msg_lrpid,100,9,40663)
CheckMemberSize(struct msqid_ds,__unused4,8,9,40664)
CheckOffset(struct msqid_ds,__unused4,104,9,40664)
CheckMemberSize(struct msqid_ds,__unused5,8,9,40665)
CheckOffset(struct msqid_ds,__unused5,112,9,40665)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct msqid_ds,104, 9117, 6, 2.0, NULL, 0, NULL)
CheckMemberSize(struct msqid_ds,msg_perm,48,6,34742)
CheckOffset(struct msqid_ds,msg_perm,0,6,34742)
CheckMemberSize(struct msqid_ds,__unused1,4,6,34746)
CheckOffset(struct msqid_ds,__unused1,48,6,34746)
CheckMemberSize(struct msqid_ds,msg_stime,4,6,34743)
CheckOffset(struct msqid_ds,msg_stime,52,6,34743)
CheckMemberSize(struct msqid_ds,__unused2,4,6,34747)
CheckOffset(struct msqid_ds,__unused2,56,6,34747)
CheckMemberSize(struct msqid_ds,msg_rtime,4,6,34744)
CheckOffset(struct msqid_ds,msg_rtime,60,6,34744)
CheckMemberSize(struct msqid_ds,__unused3,4,6,34748)
CheckOffset(struct msqid_ds,__unused3,64,6,34748)
CheckMemberSize(struct msqid_ds,msg_ctime,4,6,34745)
CheckOffset(struct msqid_ds,msg_ctime,68,6,34745)
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
#elif defined __ia64__
CheckTypeSize(struct msqid_ds,120, 9117, 3, 2.0, NULL, 0, NULL)
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
#elif defined __i386__
CheckTypeSize(struct msqid_ds,88, 9117, 2, 2.0, NULL, 0, NULL)
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

extern int msgctl_db(int, int, struct msqid_ds *);
CheckInterfacedef(msgctl,msgctl_db);
extern int msgget_db(key_t, int);
CheckInterfacedef(msgget,msgget_db);
extern ssize_t msgrcv_db(int, void *, size_t, long int, int);
CheckInterfacedef(msgrcv,msgrcv_db);
extern int msgsnd_db(int, const void *, size_t, int);
CheckInterfacedef(msgsnd,msgsnd_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in sys/msg.h\n\n",pcnt,cnt);
return cnt;
#endif

}
