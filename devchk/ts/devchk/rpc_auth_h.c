/*
 * Test of rpc/auth.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "rpc/auth.h"



#ifdef TET_TEST
void rpc_auth_h()
{
#else
int rpc_auth_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in rpc/auth.h\n");
#endif

printf("Checking data structures in rpc/auth.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for auth_destroy(auth) */
#endif

#if defined __ia64__
CheckEnum("AUTH_OK",AUTH_OK,0,32014);
CheckEnum("AUTH_BADCRED",AUTH_BADCRED,1,32015);
CheckEnum("AUTH_REJECTEDCRED",AUTH_REJECTEDCRED,2,32016);
CheckEnum("AUTH_BADVERF",AUTH_BADVERF,3,32017);
CheckEnum("AUTH_REJECTEDVERF",AUTH_REJECTEDVERF,4,32018);
CheckEnum("AUTH_TOOWEAK",AUTH_TOOWEAK,5,32019);
CheckEnum("AUTH_INVALIDRESP",AUTH_INVALIDRESP,6,32020);
CheckEnum("AUTH_FAILED",AUTH_FAILED,7,32021);
#elif defined __i386__
CheckEnum("AUTH_OK",AUTH_OK,0,32014);
CheckEnum("AUTH_BADCRED",AUTH_BADCRED,1,32015);
CheckEnum("AUTH_REJECTEDCRED",AUTH_REJECTEDCRED,2,32016);
CheckEnum("AUTH_BADVERF",AUTH_BADVERF,3,32017);
CheckEnum("AUTH_REJECTEDVERF",AUTH_REJECTEDVERF,4,32018);
CheckEnum("AUTH_TOOWEAK",AUTH_TOOWEAK,5,32019);
CheckEnum("AUTH_INVALIDRESP",AUTH_INVALIDRESP,6,32020);
CheckEnum("AUTH_FAILED",AUTH_FAILED,7,32021);
#elif defined __s390__ && !defined __s390x__
CheckEnum("AUTH_OK",AUTH_OK,0,32014);
CheckEnum("AUTH_BADCRED",AUTH_BADCRED,1,32015);
CheckEnum("AUTH_REJECTEDCRED",AUTH_REJECTEDCRED,2,32016);
CheckEnum("AUTH_BADVERF",AUTH_BADVERF,3,32017);
CheckEnum("AUTH_REJECTEDVERF",AUTH_REJECTEDVERF,4,32018);
CheckEnum("AUTH_TOOWEAK",AUTH_TOOWEAK,5,32019);
CheckEnum("AUTH_INVALIDRESP",AUTH_INVALIDRESP,6,32020);
CheckEnum("AUTH_FAILED",AUTH_FAILED,7,32021);
#elif defined __powerpc__ && !defined __powerpc64__
CheckEnum("AUTH_OK",AUTH_OK,0,32014);
CheckEnum("AUTH_BADCRED",AUTH_BADCRED,1,32015);
CheckEnum("AUTH_REJECTEDCRED",AUTH_REJECTEDCRED,2,32016);
CheckEnum("AUTH_BADVERF",AUTH_BADVERF,3,32017);
CheckEnum("AUTH_REJECTEDVERF",AUTH_REJECTEDVERF,4,32018);
CheckEnum("AUTH_TOOWEAK",AUTH_TOOWEAK,5,32019);
CheckEnum("AUTH_INVALIDRESP",AUTH_INVALIDRESP,6,32020);
CheckEnum("AUTH_FAILED",AUTH_FAILED,7,32021);
#elif defined __powerpc64__
CheckEnum("AUTH_OK",AUTH_OK,0,32014);
CheckEnum("AUTH_BADCRED",AUTH_BADCRED,1,32015);
CheckEnum("AUTH_REJECTEDCRED",AUTH_REJECTEDCRED,2,32016);
CheckEnum("AUTH_BADVERF",AUTH_BADVERF,3,32017);
CheckEnum("AUTH_REJECTEDVERF",AUTH_REJECTEDVERF,4,32018);
CheckEnum("AUTH_TOOWEAK",AUTH_TOOWEAK,5,32019);
CheckEnum("AUTH_INVALIDRESP",AUTH_INVALIDRESP,6,32020);
CheckEnum("AUTH_FAILED",AUTH_FAILED,7,32021);
#elif defined __s390x__
CheckEnum("AUTH_OK",AUTH_OK,0,32014);
CheckEnum("AUTH_BADCRED",AUTH_BADCRED,1,32015);
CheckEnum("AUTH_REJECTEDCRED",AUTH_REJECTEDCRED,2,32016);
CheckEnum("AUTH_BADVERF",AUTH_BADVERF,3,32017);
CheckEnum("AUTH_REJECTEDVERF",AUTH_REJECTEDVERF,4,32018);
CheckEnum("AUTH_TOOWEAK",AUTH_TOOWEAK,5,32019);
CheckEnum("AUTH_INVALIDRESP",AUTH_INVALIDRESP,6,32020);
CheckEnum("AUTH_FAILED",AUTH_FAILED,7,32021);
#elif defined __x86_64__
CheckEnum("AUTH_OK",AUTH_OK,0,32014);
CheckEnum("AUTH_BADCRED",AUTH_BADCRED,1,32015);
CheckEnum("AUTH_REJECTEDCRED",AUTH_REJECTEDCRED,2,32016);
CheckEnum("AUTH_BADVERF",AUTH_BADVERF,3,32017);
CheckEnum("AUTH_REJECTEDVERF",AUTH_REJECTEDVERF,4,32018);
CheckEnum("AUTH_TOOWEAK",AUTH_TOOWEAK,5,32019);
CheckEnum("AUTH_INVALIDRESP",AUTH_INVALIDRESP,6,32020);
CheckEnum("AUTH_FAILED",AUTH_FAILED,7,32021);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,0,NULL);\n",architecture,9887,0);
Msg("Find size of auth_stat (9887)\n");
#endif

#if defined __i386__
#elif defined __s390__ && !defined __s390x__
#elif defined __ia64__
#elif defined __powerpc__ && !defined __powerpc64__
#elif defined __powerpc64__
#elif defined __s390x__
#elif defined __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,0,NULL);\n",architecture,9894,0);
Msg("Find size of opaque_auth (9894)\n");
#endif

#if defined __i386__
CheckTypeSize(AUTH,40, 10391, 2, 1.3, NULL, 9896, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(AUTH,40, 10391, 10, 1.3, NULL, 9896, NULL)
#elif defined __ia64__
CheckTypeSize(AUTH,72, 10391, 3, 1.3, NULL, 9896, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(AUTH,40, 10391, 6, 1.3, NULL, 9896, NULL)
#elif defined __powerpc64__
CheckTypeSize(AUTH,72, 10391, 9, 2.0, NULL, 9896, NULL)
#elif defined __s390x__
CheckTypeSize(AUTH,72, 10391, 12, 1.3, NULL, 9896, NULL)
#elif defined __x86_64__
CheckTypeSize(AUTH,72, 10391, 11, 2.0, NULL, 9896, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,9896,NULL);\n",architecture,10391,0);
Msg("Find size of AUTH (10391)\n");
#endif

#if defined __i386__
#elif defined __s390__ && !defined __s390x__
#elif defined __ia64__
#elif defined __powerpc__ && !defined __powerpc64__
#elif defined __powerpc64__
#elif defined __s390x__
#elif defined __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,0,NULL);\n",architecture,9897,0);
Msg("Find size of auth_ops (9897)\n");
#endif

#if defined __i386__
#elif defined __s390__ && !defined __s390x__
#elif defined __ia64__
#elif defined __powerpc__ && !defined __powerpc64__
#elif defined __powerpc64__
#elif defined __s390x__
#elif defined __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,0, NULL);\n",architecture,9888,0);
Msg("Find size of des_block (9888)\n");
#endif

extern struct AUTH * authnone_create_db(void);
CheckInterfacedef(authnone_create,authnone_create_db);
extern int key_decryptsession_db(char *, union des_block *);
CheckInterfacedef(key_decryptsession,key_decryptsession_db);
extern bool_t xdr_opaque_auth_db(XDR *, struct opaque_auth *);
CheckInterfacedef(xdr_opaque_auth,xdr_opaque_auth_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in rpc/auth.h\n\n",pcnt,cnt);
return cnt;
#endif

}
