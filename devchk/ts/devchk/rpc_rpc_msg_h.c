/*
 * Test of rpc/rpc_msg.h
 */
#include "hdrchk.h"
#include "sys/types.h"
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

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in rpc/rpc_msg.h\n");
#endif

#if __i386__
CheckTypeSize(struct accepted_reply,24, 10417, 2)
CheckOffset(struct accepted_reply,ar_verf,0,2,34800)
CheckOffset(struct accepted_reply,ar_stat,12,2,34801)
#elif __ia64__
CheckTypeSize(struct accepted_reply,48, 10417, 3)
CheckOffset(struct accepted_reply,ar_verf,0,3,34800)
CheckOffset(struct accepted_reply,ar_stat,24,3,34801)
#elif __s390__
CheckTypeSize(struct accepted_reply,24, 10417, 10)
CheckOffset(struct accepted_reply,ar_stat,12,10,34801)
CheckOffset(struct accepted_reply,ru,16,10,34830)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct accepted_reply,24, 10417, 6)
CheckOffset(struct accepted_reply,ar_stat,12,6,34801)
CheckOffset(struct accepted_reply,ru,16,6,34830)
#elif __powerpc64__
CheckTypeSize(struct accepted_reply,0, 10417, 9)
Msg("Missing member data for accepted_reply on PPC64\n");
CheckOffset(struct accepted_reply,ar_verf,0,9,34800)
CheckOffset(struct accepted_reply,ar_stat,0,9,34801)
CheckOffset(struct accepted_reply,ru,0,9,34830)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10417,0);
Msg("Find size of accepted_reply (10417)\n");
#endif

#if __i386__
#elif __ia64__
#elif __s390__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10418,0);
Msg("Find size of anon-accepted_reply-ru (10418)\n");
#endif

#if __i386__
#elif __ia64__
#elif __s390__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10419,0);
Msg("Find size of anon-accepted_reply-ar_vers (10419)\n");
#endif

#if __i386__
#elif __ia64__
#elif __s390__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10420,0);
Msg("Find size of anon-accepted_reply-ar_results (10420)\n");
#endif

#if __i386__
#elif __ia64__
#elif __s390__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10421,0);
Msg("Find size of anon-rejected_reply-rj_vers (10421)\n");
#endif

#if __i386__
#elif __ia64__
#elif __s390__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10422,0);
Msg("Find size of anon-rejected_reply-ru (10422)\n");
#endif

#if __i386__
CheckTypeSize(struct rejected_reply,12, 10423, 2)
CheckOffset(struct rejected_reply,rj_stat,0,2,34812)
CheckOffset(struct rejected_reply,ru,4,2,34813)
#elif __ia64__
CheckTypeSize(struct rejected_reply,24, 10423, 3)
CheckOffset(struct rejected_reply,rj_stat,0,3,34812)
CheckOffset(struct rejected_reply,ru,8,3,34813)
#elif __s390__
CheckTypeSize(struct rejected_reply,12, 10423, 10)
CheckOffset(struct rejected_reply,ru,4,10,34813)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct rejected_reply,12, 10423, 6)
CheckOffset(struct rejected_reply,ru,4,6,34813)
#elif __powerpc64__
CheckTypeSize(struct rejected_reply,0, 10423, 9)
Msg("Missing member data for rejected_reply on PPC64\n");
CheckOffset(struct rejected_reply,rj_stat,0,9,34812)
CheckOffset(struct rejected_reply,ru,0,9,34813)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10423,0);
Msg("Find size of rejected_reply (10423)\n");
#endif

#if __i386__
#elif __ia64__
#elif __s390__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10424,0);
Msg("Find size of anon-reply_bodu-ru (10424)\n");
#endif

#if __i386__
CheckTypeSize(struct reply_body,28, 10425, 2)
CheckOffset(struct reply_body,rp_stat,0,2,34816)
CheckOffset(struct reply_body,ru,4,2,34817)
#elif __ia64__
CheckTypeSize(struct reply_body,56, 10425, 3)
CheckOffset(struct reply_body,rp_stat,0,3,34816)
CheckOffset(struct reply_body,ru,8,3,34817)
#elif __s390__
CheckTypeSize(struct reply_body,28, 10425, 10)
CheckOffset(struct reply_body,ru,4,10,34817)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct reply_body,28, 10425, 6)
CheckOffset(struct reply_body,ru,4,6,34817)
#elif __powerpc64__
CheckTypeSize(struct reply_body,0, 10425, 9)
Msg("Missing member data for reply_body on PPC64\n");
CheckOffset(struct reply_body,rp_stat,0,9,34816)
CheckOffset(struct reply_body,ru,0,9,34817)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10425,0);
Msg("Find size of reply_body (10425)\n");
#endif

#if __i386__
CheckTypeSize(struct call_body,40, 10426, 2)
CheckOffset(struct call_body,cb_rpcvers,0,2,34818)
CheckOffset(struct call_body,cb_prog,4,2,34819)
CheckOffset(struct call_body,cb_vers,8,2,34820)
CheckOffset(struct call_body,cb_proc,12,2,34821)
CheckOffset(struct call_body,cb_cred,16,2,34822)
CheckOffset(struct call_body,cb_verf,28,2,34823)
#elif __ia64__
CheckTypeSize(struct call_body,80, 10426, 3)
CheckOffset(struct call_body,cb_prog,8,3,34819)
CheckOffset(struct call_body,cb_vers,16,3,34820)
CheckOffset(struct call_body,cb_proc,24,3,34821)
CheckOffset(struct call_body,cb_cred,32,3,34822)
CheckOffset(struct call_body,cb_verf,56,3,34823)
#elif __s390__
CheckTypeSize(struct call_body,40, 10426, 10)
CheckOffset(struct call_body,cb_prog,4,10,34819)
CheckOffset(struct call_body,cb_vers,8,10,34820)
CheckOffset(struct call_body,cb_proc,12,10,34821)
CheckOffset(struct call_body,cb_cred,16,10,34822)
CheckOffset(struct call_body,cb_verf,28,10,34823)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct call_body,40, 10426, 6)
CheckOffset(struct call_body,cb_prog,4,6,34819)
CheckOffset(struct call_body,cb_vers,8,6,34820)
CheckOffset(struct call_body,cb_proc,12,6,34821)
CheckOffset(struct call_body,cb_cred,16,6,34822)
CheckOffset(struct call_body,cb_verf,28,6,34823)
#elif __powerpc64__
CheckTypeSize(struct call_body,0, 10426, 9)
Msg("Missing member data for call_body on PPC64\n");
CheckOffset(struct call_body,cb_rpcvers,0,9,34818)
CheckOffset(struct call_body,cb_prog,0,9,34819)
CheckOffset(struct call_body,cb_vers,0,9,34820)
CheckOffset(struct call_body,cb_proc,0,9,34821)
CheckOffset(struct call_body,cb_cred,0,9,34822)
CheckOffset(struct call_body,cb_verf,0,9,34823)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10426,0);
Msg("Find size of call_body (10426)\n");
#endif

#if __i386__
CheckTypeSize(struct rpc_msg,48, 9984, 2)
CheckOffset(struct rpc_msg,rm_xid,0,2,34826)
CheckOffset(struct rpc_msg,rm_direction,4,2,34827)
CheckOffset(struct rpc_msg,ru,8,2,34828)
#elif __ia64__
CheckTypeSize(struct rpc_msg,96, 9984, 3)
CheckOffset(struct rpc_msg,rm_xid,0,3,34826)
CheckOffset(struct rpc_msg,rm_direction,8,3,34827)
CheckOffset(struct rpc_msg,ru,16,3,34828)
#elif __s390__
CheckTypeSize(struct rpc_msg,48, 9984, 10)
CheckOffset(struct rpc_msg,rm_direction,4,10,34827)
CheckOffset(struct rpc_msg,ru,8,10,34828)
#endif

#if __s390__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9985,0);
Msg("Find size of rpc_msg * (9985)\n");
#endif

#if __i386__
#elif __ia64__
#elif __s390__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10427,0);
Msg("Find size of anon-rpc_msg-ru (10427)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in rpc/rpc_msg.h\n",cnt);
return cnt;
#endif

}
