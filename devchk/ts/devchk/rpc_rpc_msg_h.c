/*
 * Test of rpc/rpc_msg.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "rpc/rpc_msg.h"



#ifdef TET_TEST
void rpc_rpc_msg_h()
{
#else
int rpc_rpc_msg_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in rpc/rpc_msg.h\n");
#endif

printf("Checking data structures in rpc/rpc_msg.h\n");
#if 1
CheckEnum("CALL",CALL,0,34788);
CheckEnum("REPLY",REPLY,1,34789);
#endif

#if 1
CheckEnum("MSG_ACCEPTED",MSG_ACCEPTED,0,34790);
CheckEnum("MSG_DENIED",MSG_DENIED,1,34791);
#endif

#if 1
CheckEnum("SUCCESS",SUCCESS,0,34792);
CheckEnum("PROG_UNAVAIL",PROG_UNAVAIL,1,34793);
CheckEnum("PROG_MISMATCH",PROG_MISMATCH,2,34794);
CheckEnum("PROC_UNAVAIL",PROC_UNAVAIL,3,34795);
CheckEnum("GARBAGE_ARGS",GARBAGE_ARGS,4,34796);
CheckEnum("SYSTEM_ERR",SYSTEM_ERR,5,34797);
#endif

#if 1
CheckEnum("RPC_MISMATCH",RPC_MISMATCH,0,34798);
CheckEnum("AUTH_ERROR",AUTH_ERROR,1,34799);
#endif

#if __i386__
CheckTypeSize(struct accepted_reply,24, 10417, 2);
CheckMemberSize(struct accepted_reply,ar_verf,12,2,34800);
CheckOffset(struct accepted_reply,ar_verf,0,2,34800);
CheckMemberSize(struct accepted_reply,ar_stat,4,2,34801);
CheckOffset(struct accepted_reply,ar_stat,12,2,34801);
#elif __ia64__
CheckTypeSize(struct accepted_reply,48, 10417, 3);
CheckMemberSize(struct accepted_reply,ar_verf,24,3,34800);
CheckOffset(struct accepted_reply,ar_verf,0,3,34800);
CheckMemberSize(struct accepted_reply,ar_stat,4,3,34801);
CheckOffset(struct accepted_reply,ar_stat,24,3,34801);
#elif __s390__ && !__s390x__
CheckTypeSize(struct accepted_reply,24, 10417, 10);
CheckMemberSize(struct accepted_reply,ar_stat,4,10,34801);
CheckOffset(struct accepted_reply,ar_stat,12,10,34801);
CheckMemberSize(struct accepted_reply,ru,8,10,34830);
CheckOffset(struct accepted_reply,ru,16,10,34830);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct accepted_reply,24, 10417, 6);
CheckMemberSize(struct accepted_reply,ar_stat,4,6,34801);
CheckOffset(struct accepted_reply,ar_stat,12,6,34801);
CheckMemberSize(struct accepted_reply,ru,8,6,34830);
CheckOffset(struct accepted_reply,ru,16,6,34830);
#elif __powerpc64__
CheckTypeSize(struct accepted_reply,48, 10417, 9);
CheckMemberSize(struct accepted_reply,ar_stat,4,9,34801);
CheckOffset(struct accepted_reply,ar_stat,24,9,34801);
CheckMemberSize(struct accepted_reply,ru,16,9,34830);
CheckOffset(struct accepted_reply,ru,32,9,34830);
#elif __s390x__
CheckTypeSize(struct accepted_reply,48, 10417, 12);
CheckMemberSize(struct accepted_reply,ar_stat,4,12,34801);
CheckOffset(struct accepted_reply,ar_stat,24,12,34801);
CheckMemberSize(struct accepted_reply,ru,16,12,34830);
CheckOffset(struct accepted_reply,ru,32,12,34830);
#elif __x86_64__
CheckTypeSize(struct accepted_reply,48, 10417, 11);
CheckMemberSize(struct accepted_reply,ar_stat,4,11,34801);
CheckOffset(struct accepted_reply,ar_stat,24,11,34801);
CheckMemberSize(struct accepted_reply,ru,16,11,34830);
CheckOffset(struct accepted_reply,ru,32,11,34830);
#elif 1
CheckTypeSize(struct accepted_reply,0, 10417, 1);
Msg("Missing member data for accepted_reply on All\n");
CheckOffset(struct accepted_reply,ar_verf,0,1,34800);
CheckOffset(struct accepted_reply,ar_stat,0,1,34801);
CheckOffset(struct accepted_reply,ru,0,1,34830);
#endif

#if __i386__
#elif __ia64__
#elif __s390__ && !__s390x__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390x__
#elif __x86_64__
#elif 1
#endif

#if __i386__
#elif __ia64__
#elif __s390__ && !__s390x__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390x__
#elif __x86_64__
#elif 1
#endif

#if __i386__
#elif __ia64__
#elif __s390__ && !__s390x__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390x__
#elif __x86_64__
#elif 1
#endif

#if __i386__
#elif __ia64__
#elif __s390__ && !__s390x__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390x__
#elif __x86_64__
#elif 1
#endif

#if __i386__
#elif __ia64__
#elif __s390__ && !__s390x__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390x__
#elif __x86_64__
#elif 1
#endif

#if __i386__
CheckTypeSize(struct rejected_reply,12, 10423, 2);
CheckMemberSize(struct rejected_reply,rj_stat,4,2,34812);
CheckOffset(struct rejected_reply,rj_stat,0,2,34812);
CheckMemberSize(struct rejected_reply,ru,8,2,34813);
CheckOffset(struct rejected_reply,ru,4,2,34813);
#elif __ia64__
CheckTypeSize(struct rejected_reply,24, 10423, 3);
CheckMemberSize(struct rejected_reply,rj_stat,4,3,34812);
CheckOffset(struct rejected_reply,rj_stat,0,3,34812);
CheckMemberSize(struct rejected_reply,ru,16,3,34813);
CheckOffset(struct rejected_reply,ru,8,3,34813);
#elif __s390__ && !__s390x__
CheckTypeSize(struct rejected_reply,12, 10423, 10);
CheckMemberSize(struct rejected_reply,ru,8,10,34813);
CheckOffset(struct rejected_reply,ru,4,10,34813);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct rejected_reply,12, 10423, 6);
CheckMemberSize(struct rejected_reply,ru,8,6,34813);
CheckOffset(struct rejected_reply,ru,4,6,34813);
#elif __powerpc64__
CheckTypeSize(struct rejected_reply,24, 10423, 9);
CheckMemberSize(struct rejected_reply,ru,16,9,34813);
CheckOffset(struct rejected_reply,ru,8,9,34813);
#elif __s390x__
CheckTypeSize(struct rejected_reply,24, 10423, 12);
CheckMemberSize(struct rejected_reply,ru,16,12,34813);
CheckOffset(struct rejected_reply,ru,8,12,34813);
#elif __x86_64__
CheckTypeSize(struct rejected_reply,24, 10423, 11);
CheckMemberSize(struct rejected_reply,ru,16,11,34813);
CheckOffset(struct rejected_reply,ru,8,11,34813);
#elif 1
CheckTypeSize(struct rejected_reply,0, 10423, 1);
Msg("Missing member data for rejected_reply on All\n");
CheckOffset(struct rejected_reply,rj_stat,0,1,34812);
CheckOffset(struct rejected_reply,ru,0,1,34813);
#endif

#if __i386__
#elif __ia64__
#elif __s390__ && !__s390x__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390x__
#elif __x86_64__
#elif 1
#endif

#if __i386__
CheckTypeSize(struct reply_body,28, 10425, 2);
CheckMemberSize(struct reply_body,rp_stat,4,2,34816);
CheckOffset(struct reply_body,rp_stat,0,2,34816);
CheckMemberSize(struct reply_body,ru,24,2,34817);
CheckOffset(struct reply_body,ru,4,2,34817);
#elif __ia64__
CheckTypeSize(struct reply_body,56, 10425, 3);
CheckMemberSize(struct reply_body,rp_stat,4,3,34816);
CheckOffset(struct reply_body,rp_stat,0,3,34816);
CheckMemberSize(struct reply_body,ru,48,3,34817);
CheckOffset(struct reply_body,ru,8,3,34817);
#elif __s390__ && !__s390x__
CheckTypeSize(struct reply_body,28, 10425, 10);
CheckMemberSize(struct reply_body,ru,24,10,34817);
CheckOffset(struct reply_body,ru,4,10,34817);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct reply_body,28, 10425, 6);
CheckMemberSize(struct reply_body,ru,24,6,34817);
CheckOffset(struct reply_body,ru,4,6,34817);
#elif __powerpc64__
CheckTypeSize(struct reply_body,56, 10425, 9);
CheckMemberSize(struct reply_body,ru,48,9,34817);
CheckOffset(struct reply_body,ru,8,9,34817);
#elif __s390x__
CheckTypeSize(struct reply_body,56, 10425, 12);
CheckMemberSize(struct reply_body,ru,48,12,34817);
CheckOffset(struct reply_body,ru,8,12,34817);
#elif __x86_64__
CheckTypeSize(struct reply_body,56, 10425, 11);
CheckMemberSize(struct reply_body,ru,48,11,34817);
CheckOffset(struct reply_body,ru,8,11,34817);
#elif 1
CheckTypeSize(struct reply_body,0, 10425, 1);
Msg("Missing member data for reply_body on All\n");
CheckOffset(struct reply_body,rp_stat,0,1,34816);
CheckOffset(struct reply_body,ru,0,1,34817);
#endif

#if __i386__
CheckTypeSize(struct call_body,40, 10426, 2);
CheckMemberSize(struct call_body,cb_rpcvers,4,2,34818);
CheckOffset(struct call_body,cb_rpcvers,0,2,34818);
CheckMemberSize(struct call_body,cb_prog,4,2,34819);
CheckOffset(struct call_body,cb_prog,4,2,34819);
CheckMemberSize(struct call_body,cb_vers,4,2,34820);
CheckOffset(struct call_body,cb_vers,8,2,34820);
CheckMemberSize(struct call_body,cb_proc,4,2,34821);
CheckOffset(struct call_body,cb_proc,12,2,34821);
CheckMemberSize(struct call_body,cb_cred,12,2,34822);
CheckOffset(struct call_body,cb_cred,16,2,34822);
CheckMemberSize(struct call_body,cb_verf,12,2,34823);
CheckOffset(struct call_body,cb_verf,28,2,34823);
#elif __ia64__
CheckTypeSize(struct call_body,80, 10426, 3);
CheckMemberSize(struct call_body,cb_prog,8,3,34819);
CheckOffset(struct call_body,cb_prog,8,3,34819);
CheckMemberSize(struct call_body,cb_vers,8,3,34820);
CheckOffset(struct call_body,cb_vers,16,3,34820);
CheckMemberSize(struct call_body,cb_proc,8,3,34821);
CheckOffset(struct call_body,cb_proc,24,3,34821);
CheckMemberSize(struct call_body,cb_cred,24,3,34822);
CheckOffset(struct call_body,cb_cred,32,3,34822);
CheckMemberSize(struct call_body,cb_verf,24,3,34823);
CheckOffset(struct call_body,cb_verf,56,3,34823);
#elif __s390__ && !__s390x__
CheckTypeSize(struct call_body,40, 10426, 10);
CheckMemberSize(struct call_body,cb_prog,4,10,34819);
CheckOffset(struct call_body,cb_prog,4,10,34819);
CheckMemberSize(struct call_body,cb_vers,4,10,34820);
CheckOffset(struct call_body,cb_vers,8,10,34820);
CheckMemberSize(struct call_body,cb_proc,4,10,34821);
CheckOffset(struct call_body,cb_proc,12,10,34821);
CheckMemberSize(struct call_body,cb_cred,12,10,34822);
CheckOffset(struct call_body,cb_cred,16,10,34822);
CheckMemberSize(struct call_body,cb_verf,12,10,34823);
CheckOffset(struct call_body,cb_verf,28,10,34823);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct call_body,40, 10426, 6);
CheckMemberSize(struct call_body,cb_prog,4,6,34819);
CheckOffset(struct call_body,cb_prog,4,6,34819);
CheckMemberSize(struct call_body,cb_vers,4,6,34820);
CheckOffset(struct call_body,cb_vers,8,6,34820);
CheckMemberSize(struct call_body,cb_proc,4,6,34821);
CheckOffset(struct call_body,cb_proc,12,6,34821);
CheckMemberSize(struct call_body,cb_cred,12,6,34822);
CheckOffset(struct call_body,cb_cred,16,6,34822);
CheckMemberSize(struct call_body,cb_verf,12,6,34823);
CheckOffset(struct call_body,cb_verf,28,6,34823);
#elif __powerpc64__
CheckTypeSize(struct call_body,80, 10426, 9);
CheckMemberSize(struct call_body,cb_prog,8,9,34819);
CheckOffset(struct call_body,cb_prog,8,9,34819);
CheckMemberSize(struct call_body,cb_vers,8,9,34820);
CheckOffset(struct call_body,cb_vers,16,9,34820);
CheckMemberSize(struct call_body,cb_proc,8,9,34821);
CheckOffset(struct call_body,cb_proc,24,9,34821);
CheckMemberSize(struct call_body,cb_cred,24,9,34822);
CheckOffset(struct call_body,cb_cred,32,9,34822);
CheckMemberSize(struct call_body,cb_verf,24,9,34823);
CheckOffset(struct call_body,cb_verf,56,9,34823);
#elif __s390x__
CheckTypeSize(struct call_body,80, 10426, 12);
CheckMemberSize(struct call_body,cb_prog,8,12,34819);
CheckOffset(struct call_body,cb_prog,8,12,34819);
CheckMemberSize(struct call_body,cb_vers,8,12,34820);
CheckOffset(struct call_body,cb_vers,16,12,34820);
CheckMemberSize(struct call_body,cb_proc,8,12,34821);
CheckOffset(struct call_body,cb_proc,24,12,34821);
CheckMemberSize(struct call_body,cb_cred,24,12,34822);
CheckOffset(struct call_body,cb_cred,32,12,34822);
CheckMemberSize(struct call_body,cb_verf,24,12,34823);
CheckOffset(struct call_body,cb_verf,56,12,34823);
#elif __x86_64__
CheckTypeSize(struct call_body,80, 10426, 11);
CheckMemberSize(struct call_body,cb_prog,8,11,34819);
CheckOffset(struct call_body,cb_prog,8,11,34819);
CheckMemberSize(struct call_body,cb_vers,8,11,34820);
CheckOffset(struct call_body,cb_vers,16,11,34820);
CheckMemberSize(struct call_body,cb_proc,8,11,34821);
CheckOffset(struct call_body,cb_proc,24,11,34821);
CheckMemberSize(struct call_body,cb_cred,24,11,34822);
CheckOffset(struct call_body,cb_cred,32,11,34822);
CheckMemberSize(struct call_body,cb_verf,24,11,34823);
CheckOffset(struct call_body,cb_verf,56,11,34823);
#elif 1
CheckTypeSize(struct call_body,0, 10426, 1);
Msg("Missing member data for call_body on All\n");
CheckOffset(struct call_body,cb_rpcvers,0,1,34818);
CheckOffset(struct call_body,cb_prog,0,1,34819);
CheckOffset(struct call_body,cb_vers,0,1,34820);
CheckOffset(struct call_body,cb_proc,0,1,34821);
CheckOffset(struct call_body,cb_cred,0,1,34822);
CheckOffset(struct call_body,cb_verf,0,1,34823);
#endif

#if __i386__
CheckTypeSize(struct rpc_msg,48, 9984, 2);
CheckMemberSize(struct rpc_msg,rm_xid,4,2,34826);
CheckOffset(struct rpc_msg,rm_xid,0,2,34826);
CheckMemberSize(struct rpc_msg,rm_direction,4,2,34827);
CheckOffset(struct rpc_msg,rm_direction,4,2,34827);
CheckMemberSize(struct rpc_msg,ru,40,2,34828);
CheckOffset(struct rpc_msg,ru,8,2,34828);
#elif __ia64__
CheckTypeSize(struct rpc_msg,96, 9984, 3);
CheckMemberSize(struct rpc_msg,rm_xid,8,3,34826);
CheckOffset(struct rpc_msg,rm_xid,0,3,34826);
CheckMemberSize(struct rpc_msg,rm_direction,4,3,34827);
CheckOffset(struct rpc_msg,rm_direction,8,3,34827);
CheckMemberSize(struct rpc_msg,ru,80,3,34828);
CheckOffset(struct rpc_msg,ru,16,3,34828);
#elif __s390__ && !__s390x__
CheckTypeSize(struct rpc_msg,48, 9984, 10);
CheckMemberSize(struct rpc_msg,rm_direction,4,10,34827);
CheckOffset(struct rpc_msg,rm_direction,4,10,34827);
CheckMemberSize(struct rpc_msg,ru,40,10,34828);
CheckOffset(struct rpc_msg,ru,8,10,34828);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct rpc_msg,48, 9984, 6);
CheckMemberSize(struct rpc_msg,rm_direction,4,6,34827);
CheckOffset(struct rpc_msg,rm_direction,4,6,34827);
CheckMemberSize(struct rpc_msg,ru,40,6,34828);
CheckOffset(struct rpc_msg,ru,8,6,34828);
#elif __s390x__
CheckTypeSize(struct rpc_msg,96, 9984, 12);
CheckMemberSize(struct rpc_msg,rm_direction,4,12,34827);
CheckOffset(struct rpc_msg,rm_direction,8,12,34827);
CheckMemberSize(struct rpc_msg,ru,80,12,34828);
CheckOffset(struct rpc_msg,ru,16,12,34828);
#elif __x86_64__
CheckTypeSize(struct rpc_msg,96, 9984, 11);
CheckMemberSize(struct rpc_msg,rm_direction,4,11,34827);
CheckOffset(struct rpc_msg,rm_direction,8,11,34827);
CheckMemberSize(struct rpc_msg,ru,80,11,34828);
CheckOffset(struct rpc_msg,ru,16,11,34828);
#elif __powerpc64__
CheckTypeSize(struct rpc_msg,96, 9984, 9);
CheckMemberSize(struct rpc_msg,rm_direction,4,9,34827);
CheckOffset(struct rpc_msg,rm_direction,8,9,34827);
CheckMemberSize(struct rpc_msg,ru,80,9,34828);
CheckOffset(struct rpc_msg,ru,16,9,34828);
#elif 1
CheckTypeSize(struct rpc_msg,0, 9984, 1);
Msg("Missing member data for rpc_msg on All\n");
CheckOffset(struct rpc_msg,rm_xid,0,1,34826);
CheckOffset(struct rpc_msg,rm_direction,0,1,34827);
CheckOffset(struct rpc_msg,ru,0,1,34828);
#endif

#if __i386__
CheckTypeSize(struct rpc_msg *,4, 9985, 2);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct rpc_msg *,4, 9985, 6);
#elif __powerpc64__
CheckTypeSize(struct rpc_msg *,8, 9985, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(struct rpc_msg *,4, 9985, 10);
#elif __ia64__
CheckTypeSize(struct rpc_msg *,8, 9985, 3);
#endif

#if __i386__
#elif __ia64__
#elif __s390__ && !__s390x__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390x__
#elif __x86_64__
#elif 1
#endif

extern bool_t xdr_callhdr_db(XDR *, struct rpc_msg *);
CheckInterfacedef(xdr_callhdr,xdr_callhdr_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in rpc/rpc_msg.h\n\n",pcnt,cnt);
return cnt;
#endif

}
