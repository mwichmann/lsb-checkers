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

#if defined __i386__
#elif defined __ia64__
#elif defined __s390__ && !defined __s390x__
#elif defined __powerpc__ && !defined __powerpc64__
#elif defined __powerpc64__
#elif defined __s390x__
#elif defined __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,0,NULL);\n",architecture,10417,0);
Msg("Find size of accepted_reply (10417)\n");
#endif

#if defined __i386__
#elif defined __ia64__
#elif defined __s390__ && !defined __s390x__
#elif defined __powerpc__ && !defined __powerpc64__
#elif defined __powerpc64__
#elif defined __s390x__
#elif defined __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,0,NULL);\n",architecture,10423,0);
Msg("Find size of rejected_reply (10423)\n");
#endif

#if defined __i386__
#elif defined __ia64__
#elif defined __s390__ && !defined __s390x__
#elif defined __powerpc__ && !defined __powerpc64__
#elif defined __powerpc64__
#elif defined __s390x__
#elif defined __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,0,NULL);\n",architecture,10425,0);
Msg("Find size of reply_body (10425)\n");
#endif

#if defined __i386__
#elif defined __ia64__
#elif defined __s390__ && !defined __s390x__
#elif defined __powerpc__ && !defined __powerpc64__
#elif defined __powerpc64__
#elif defined __s390x__
#elif defined __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,0,NULL);\n",architecture,10426,0);
Msg("Find size of call_body (10426)\n");
#endif

#if defined __i386__
#elif defined __ia64__
#elif defined __s390__ && !defined __s390x__
#elif defined __powerpc__ && !defined __powerpc64__
#elif defined __s390x__
#elif defined __x86_64__
#elif defined __powerpc64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,0, NULL);\n",architecture,9984,0);
Msg("Find size of rpc_msg (9984)\n");
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
