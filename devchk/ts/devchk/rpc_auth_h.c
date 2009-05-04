/*
 * Test of rpc/auth.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
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
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in rpc/auth.h\n");
#endif

printf("Checking data structures in rpc/auth.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for auth_destroy(auth) */
#endif

#if defined __s390x__
CheckEnum("AUTH_OK",AUTH_OK,0,32014)
CheckEnum("AUTH_BADCRED",AUTH_BADCRED,(0) + 1,32015)
CheckEnum("AUTH_REJECTEDCRED",AUTH_REJECTEDCRED,((0) + 1) + 1,32016)
CheckEnum("AUTH_BADVERF",AUTH_BADVERF,(((0) + 1) + 1) + 1,32017)
CheckEnum("AUTH_REJECTEDVERF",AUTH_REJECTEDVERF,((((0) + 1) + 1) + 1) + 1,32018)
CheckEnum("AUTH_TOOWEAK",AUTH_TOOWEAK,(((((0) + 1) + 1) + 1) + 1) + 1,32019)
CheckEnum("AUTH_INVALIDRESP",AUTH_INVALIDRESP,((((((0) + 1) + 1) + 1) + 1) + 1) + 1,32020)
CheckEnum("AUTH_FAILED",AUTH_FAILED,(((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1,32021)
#elif defined __x86_64__
CheckEnum("AUTH_OK",AUTH_OK,0,32014)
CheckEnum("AUTH_BADCRED",AUTH_BADCRED,(0) + 1,32015)
CheckEnum("AUTH_REJECTEDCRED",AUTH_REJECTEDCRED,((0) + 1) + 1,32016)
CheckEnum("AUTH_BADVERF",AUTH_BADVERF,(((0) + 1) + 1) + 1,32017)
CheckEnum("AUTH_REJECTEDVERF",AUTH_REJECTEDVERF,((((0) + 1) + 1) + 1) + 1,32018)
CheckEnum("AUTH_TOOWEAK",AUTH_TOOWEAK,(((((0) + 1) + 1) + 1) + 1) + 1,32019)
CheckEnum("AUTH_INVALIDRESP",AUTH_INVALIDRESP,((((((0) + 1) + 1) + 1) + 1) + 1) + 1,32020)
CheckEnum("AUTH_FAILED",AUTH_FAILED,(((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1,32021)
#elif defined __s390__ && !defined __s390x__
CheckEnum("AUTH_OK",AUTH_OK,0,32014)
CheckEnum("AUTH_BADCRED",AUTH_BADCRED,(0) + 1,32015)
CheckEnum("AUTH_REJECTEDCRED",AUTH_REJECTEDCRED,((0) + 1) + 1,32016)
CheckEnum("AUTH_BADVERF",AUTH_BADVERF,(((0) + 1) + 1) + 1,32017)
CheckEnum("AUTH_REJECTEDVERF",AUTH_REJECTEDVERF,((((0) + 1) + 1) + 1) + 1,32018)
CheckEnum("AUTH_TOOWEAK",AUTH_TOOWEAK,(((((0) + 1) + 1) + 1) + 1) + 1,32019)
CheckEnum("AUTH_INVALIDRESP",AUTH_INVALIDRESP,((((((0) + 1) + 1) + 1) + 1) + 1) + 1,32020)
CheckEnum("AUTH_FAILED",AUTH_FAILED,(((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1,32021)
#elif defined __powerpc64__
CheckEnum("AUTH_OK",AUTH_OK,0,32014)
CheckEnum("AUTH_BADCRED",AUTH_BADCRED,(0) + 1,32015)
CheckEnum("AUTH_REJECTEDCRED",AUTH_REJECTEDCRED,((0) + 1) + 1,32016)
CheckEnum("AUTH_BADVERF",AUTH_BADVERF,(((0) + 1) + 1) + 1,32017)
CheckEnum("AUTH_REJECTEDVERF",AUTH_REJECTEDVERF,((((0) + 1) + 1) + 1) + 1,32018)
CheckEnum("AUTH_TOOWEAK",AUTH_TOOWEAK,(((((0) + 1) + 1) + 1) + 1) + 1,32019)
CheckEnum("AUTH_INVALIDRESP",AUTH_INVALIDRESP,((((((0) + 1) + 1) + 1) + 1) + 1) + 1,32020)
CheckEnum("AUTH_FAILED",AUTH_FAILED,(((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1,32021)
#elif defined __powerpc__ && !defined __powerpc64__
CheckEnum("AUTH_OK",AUTH_OK,0,32014)
CheckEnum("AUTH_BADCRED",AUTH_BADCRED,(0) + 1,32015)
CheckEnum("AUTH_REJECTEDCRED",AUTH_REJECTEDCRED,((0) + 1) + 1,32016)
CheckEnum("AUTH_BADVERF",AUTH_BADVERF,(((0) + 1) + 1) + 1,32017)
CheckEnum("AUTH_REJECTEDVERF",AUTH_REJECTEDVERF,((((0) + 1) + 1) + 1) + 1,32018)
CheckEnum("AUTH_TOOWEAK",AUTH_TOOWEAK,(((((0) + 1) + 1) + 1) + 1) + 1,32019)
CheckEnum("AUTH_INVALIDRESP",AUTH_INVALIDRESP,((((((0) + 1) + 1) + 1) + 1) + 1) + 1,32020)
CheckEnum("AUTH_FAILED",AUTH_FAILED,(((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1,32021)
#elif defined __ia64__
CheckEnum("AUTH_OK",AUTH_OK,0,32014)
CheckEnum("AUTH_BADCRED",AUTH_BADCRED,(0) + 1,32015)
CheckEnum("AUTH_REJECTEDCRED",AUTH_REJECTEDCRED,((0) + 1) + 1,32016)
CheckEnum("AUTH_BADVERF",AUTH_BADVERF,(((0) + 1) + 1) + 1,32017)
CheckEnum("AUTH_REJECTEDVERF",AUTH_REJECTEDVERF,((((0) + 1) + 1) + 1) + 1,32018)
CheckEnum("AUTH_TOOWEAK",AUTH_TOOWEAK,(((((0) + 1) + 1) + 1) + 1) + 1,32019)
CheckEnum("AUTH_INVALIDRESP",AUTH_INVALIDRESP,((((((0) + 1) + 1) + 1) + 1) + 1) + 1,32020)
CheckEnum("AUTH_FAILED",AUTH_FAILED,(((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1,32021)
#elif defined __i386__
CheckEnum("AUTH_OK",AUTH_OK,0,32014)
CheckEnum("AUTH_BADCRED",AUTH_BADCRED,(0) + 1,32015)
CheckEnum("AUTH_REJECTEDCRED",AUTH_REJECTEDCRED,((0) + 1) + 1,32016)
CheckEnum("AUTH_BADVERF",AUTH_BADVERF,(((0) + 1) + 1) + 1,32017)
CheckEnum("AUTH_REJECTEDVERF",AUTH_REJECTEDVERF,((((0) + 1) + 1) + 1) + 1,32018)
CheckEnum("AUTH_TOOWEAK",AUTH_TOOWEAK,(((((0) + 1) + 1) + 1) + 1) + 1,32019)
CheckEnum("AUTH_INVALIDRESP",AUTH_INVALIDRESP,((((((0) + 1) + 1) + 1) + 1) + 1) + 1,32020)
CheckEnum("AUTH_FAILED",AUTH_FAILED,(((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1,32021)
#else
Msg("Find size of auth_stat (9887)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.3""',NULL,0,NULL);\n",architecture,9887,0);
#endif

#if defined __s390x__
CheckTypeSize(struct opaque_auth,24, 9894, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct opaque_auth,oa_base,8,12,32027)
CheckOffset(struct opaque_auth,oa_base,8,12,32027)
CheckMemberSize(struct opaque_auth,oa_length,4,12,32028)
CheckOffset(struct opaque_auth,oa_length,16,12,32028)
#elif defined __x86_64__
CheckTypeSize(struct opaque_auth,24, 9894, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct opaque_auth,oa_base,8,11,32027)
CheckOffset(struct opaque_auth,oa_base,8,11,32027)
CheckMemberSize(struct opaque_auth,oa_length,4,11,32028)
CheckOffset(struct opaque_auth,oa_length,16,11,32028)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct opaque_auth,12, 9894, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct opaque_auth,oa_flavor,4,10,32026)
CheckOffset(struct opaque_auth,oa_flavor,0,10,32026)
CheckMemberSize(struct opaque_auth,oa_base,4,10,32027)
CheckOffset(struct opaque_auth,oa_base,4,10,32027)
CheckMemberSize(struct opaque_auth,oa_length,4,10,32028)
CheckOffset(struct opaque_auth,oa_length,8,10,32028)
#elif defined __powerpc64__
CheckTypeSize(struct opaque_auth,24, 9894, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct opaque_auth,oa_flavor,4,9,32026)
CheckOffset(struct opaque_auth,oa_flavor,0,9,32026)
CheckMemberSize(struct opaque_auth,oa_base,8,9,32027)
CheckOffset(struct opaque_auth,oa_base,8,9,32027)
CheckMemberSize(struct opaque_auth,oa_length,4,9,32028)
CheckOffset(struct opaque_auth,oa_length,16,9,32028)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct opaque_auth,12, 9894, 6, 1.3, NULL, 0, NULL)
CheckMemberSize(struct opaque_auth,oa_flavor,4,6,32026)
CheckOffset(struct opaque_auth,oa_flavor,0,6,32026)
CheckMemberSize(struct opaque_auth,oa_base,4,6,32027)
CheckOffset(struct opaque_auth,oa_base,4,6,32027)
CheckMemberSize(struct opaque_auth,oa_length,4,6,32028)
CheckOffset(struct opaque_auth,oa_length,8,6,32028)
#elif defined __ia64__
CheckTypeSize(struct opaque_auth,24, 9894, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct opaque_auth,oa_flavor,4,3,32026)
CheckOffset(struct opaque_auth,oa_flavor,0,3,32026)
CheckMemberSize(struct opaque_auth,oa_base,8,3,32027)
CheckOffset(struct opaque_auth,oa_base,8,3,32027)
CheckMemberSize(struct opaque_auth,oa_length,4,3,32028)
CheckOffset(struct opaque_auth,oa_length,16,3,32028)
#elif defined __i386__
CheckTypeSize(struct opaque_auth,12, 9894, 2, 1.3, NULL, 0, NULL)
CheckMemberSize(struct opaque_auth,oa_flavor,4,2,32026)
CheckOffset(struct opaque_auth,oa_flavor,0,2,32026)
CheckMemberSize(struct opaque_auth,oa_base,4,2,32027)
CheckOffset(struct opaque_auth,oa_base,4,2,32027)
CheckMemberSize(struct opaque_auth,oa_length,4,2,32028)
CheckOffset(struct opaque_auth,oa_length,8,2,32028)
#else
Msg("Find size of opaque_auth (9894)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.3""',NULL,0,NULL);\n",architecture,9894,0);
#endif

#if defined __s390x__
CheckTypeSize(struct AUTH,72, 9896, 12, , NULL, 0, NULL)
CheckMemberSize(struct AUTH,ah_verf,24,12,32030)
CheckOffset(struct AUTH,ah_verf,24,12,32030)
CheckMemberSize(struct AUTH,ah_key,8,12,32031)
CheckOffset(struct AUTH,ah_key,48,12,32031)
CheckMemberSize(struct AUTH,ah_ops,8,12,32037)
CheckOffset(struct AUTH,ah_ops,56,12,32037)
CheckMemberSize(struct AUTH,ah_private,8,12,32038)
CheckOffset(struct AUTH,ah_private,64,12,32038)
#elif defined __x86_64__
CheckTypeSize(struct AUTH,72, 9896, 11, , NULL, 0, NULL)
CheckMemberSize(struct AUTH,ah_verf,24,11,32030)
CheckOffset(struct AUTH,ah_verf,24,11,32030)
CheckMemberSize(struct AUTH,ah_key,8,11,32031)
CheckOffset(struct AUTH,ah_key,48,11,32031)
CheckMemberSize(struct AUTH,ah_ops,8,11,32037)
CheckOffset(struct AUTH,ah_ops,56,11,32037)
CheckMemberSize(struct AUTH,ah_private,8,11,32038)
CheckOffset(struct AUTH,ah_private,64,11,32038)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct AUTH,40, 9896, 10, , NULL, 0, NULL)
CheckMemberSize(struct AUTH,ah_verf,12,10,32030)
CheckOffset(struct AUTH,ah_verf,12,10,32030)
CheckMemberSize(struct AUTH,ah_key,8,10,32031)
CheckOffset(struct AUTH,ah_key,24,10,32031)
CheckMemberSize(struct AUTH,ah_ops,4,10,32037)
CheckOffset(struct AUTH,ah_ops,32,10,32037)
CheckMemberSize(struct AUTH,ah_private,4,10,32038)
CheckOffset(struct AUTH,ah_private,36,10,32038)
#elif defined __powerpc64__
CheckTypeSize(struct AUTH,72, 9896, 9, , NULL, 0, NULL)
CheckMemberSize(struct AUTH,ah_verf,24,9,32030)
CheckOffset(struct AUTH,ah_verf,24,9,32030)
CheckMemberSize(struct AUTH,ah_key,8,9,32031)
CheckOffset(struct AUTH,ah_key,48,9,32031)
CheckMemberSize(struct AUTH,ah_ops,8,9,32037)
CheckOffset(struct AUTH,ah_ops,56,9,32037)
CheckMemberSize(struct AUTH,ah_private,8,9,32038)
CheckOffset(struct AUTH,ah_private,64,9,32038)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct AUTH,40, 9896, 6, , NULL, 0, NULL)
CheckMemberSize(struct AUTH,ah_verf,12,6,32030)
CheckOffset(struct AUTH,ah_verf,12,6,32030)
CheckMemberSize(struct AUTH,ah_key,8,6,32031)
CheckOffset(struct AUTH,ah_key,24,6,32031)
CheckMemberSize(struct AUTH,ah_ops,4,6,32037)
CheckOffset(struct AUTH,ah_ops,32,6,32037)
CheckMemberSize(struct AUTH,ah_private,4,6,32038)
CheckOffset(struct AUTH,ah_private,36,6,32038)
#elif defined __ia64__
CheckTypeSize(struct AUTH,72, 9896, 3, , NULL, 0, NULL)
CheckMemberSize(struct AUTH,ah_verf,24,3,32030)
CheckOffset(struct AUTH,ah_verf,24,3,32030)
CheckMemberSize(struct AUTH,ah_key,8,3,32031)
CheckOffset(struct AUTH,ah_key,48,3,32031)
CheckMemberSize(struct AUTH,ah_ops,8,3,32037)
CheckOffset(struct AUTH,ah_ops,56,3,32037)
CheckMemberSize(struct AUTH,ah_private,8,3,32038)
CheckOffset(struct AUTH,ah_private,64,3,32038)
#elif defined __i386__
CheckTypeSize(struct AUTH,40, 9896, 2, , NULL, 0, NULL)
CheckMemberSize(struct AUTH,ah_verf,12,2,32030)
CheckOffset(struct AUTH,ah_verf,12,2,32030)
CheckMemberSize(struct AUTH,ah_key,8,2,32031)
CheckOffset(struct AUTH,ah_key,24,2,32031)
CheckMemberSize(struct AUTH,ah_ops,4,2,32037)
CheckOffset(struct AUTH,ah_ops,32,2,32037)
CheckMemberSize(struct AUTH,ah_private,4,2,32038)
CheckOffset(struct AUTH,ah_private,36,2,32038)
#elif 1
CheckTypeSize(struct AUTH,0, 9896, 1, , NULL, 0, NULL)
Msg("Missing member data for AUTH on All\n");
CheckOffset(struct AUTH,ah_cred,0,1,32029)
#endif

#if defined __s390x__
CheckTypeSize(AUTH,72, 10391, 12, 1.3, NULL, 9896, NULL)
#elif defined __x86_64__
CheckTypeSize(AUTH,72, 10391, 11, 2.0, NULL, 9896, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(AUTH,40, 10391, 10, 1.3, NULL, 9896, NULL)
#elif defined __powerpc64__
CheckTypeSize(AUTH,72, 10391, 9, 2.0, NULL, 9896, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(AUTH,40, 10391, 6, 1.3, NULL, 9896, NULL)
#elif defined __ia64__
CheckTypeSize(AUTH,72, 10391, 3, 1.3, NULL, 9896, NULL)
#elif defined __i386__
CheckTypeSize(AUTH,40, 10391, 2, 1.3, NULL, 9896, NULL)
#else
Msg("Find size of AUTH (10391)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.3""',NULL,9896,NULL);\n",architecture,10391,0);
#endif

#if defined __s390x__
CheckTypeSize(struct auth_ops,40, 9897, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct auth_ops,ah_marshal,8,12,32033)
CheckOffset(struct auth_ops,ah_marshal,8,12,32033)
CheckMemberSize(struct auth_ops,ah_validate,8,12,32034)
CheckOffset(struct auth_ops,ah_validate,16,12,32034)
CheckMemberSize(struct auth_ops,ah_refresh,8,12,32035)
CheckOffset(struct auth_ops,ah_refresh,24,12,32035)
CheckMemberSize(struct auth_ops,ah_destroy,8,12,32036)
CheckOffset(struct auth_ops,ah_destroy,32,12,32036)
#elif defined __x86_64__
CheckTypeSize(struct auth_ops,40, 9897, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct auth_ops,ah_marshal,8,11,32033)
CheckOffset(struct auth_ops,ah_marshal,8,11,32033)
CheckMemberSize(struct auth_ops,ah_validate,8,11,32034)
CheckOffset(struct auth_ops,ah_validate,16,11,32034)
CheckMemberSize(struct auth_ops,ah_refresh,8,11,32035)
CheckOffset(struct auth_ops,ah_refresh,24,11,32035)
CheckMemberSize(struct auth_ops,ah_destroy,8,11,32036)
CheckOffset(struct auth_ops,ah_destroy,32,11,32036)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct auth_ops,20, 9897, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct auth_ops,ah_marshal,4,10,32033)
CheckOffset(struct auth_ops,ah_marshal,4,10,32033)
CheckMemberSize(struct auth_ops,ah_validate,4,10,32034)
CheckOffset(struct auth_ops,ah_validate,8,10,32034)
CheckMemberSize(struct auth_ops,ah_refresh,4,10,32035)
CheckOffset(struct auth_ops,ah_refresh,12,10,32035)
CheckMemberSize(struct auth_ops,ah_destroy,4,10,32036)
CheckOffset(struct auth_ops,ah_destroy,16,10,32036)
#elif defined __powerpc64__
CheckTypeSize(struct auth_ops,40, 9897, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct auth_ops,ah_marshal,8,9,32033)
CheckOffset(struct auth_ops,ah_marshal,8,9,32033)
CheckMemberSize(struct auth_ops,ah_validate,8,9,32034)
CheckOffset(struct auth_ops,ah_validate,16,9,32034)
CheckMemberSize(struct auth_ops,ah_refresh,8,9,32035)
CheckOffset(struct auth_ops,ah_refresh,24,9,32035)
CheckMemberSize(struct auth_ops,ah_destroy,8,9,32036)
CheckOffset(struct auth_ops,ah_destroy,32,9,32036)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct auth_ops,20, 9897, 6, 1.3, NULL, 0, NULL)
CheckMemberSize(struct auth_ops,ah_marshal,4,6,32033)
CheckOffset(struct auth_ops,ah_marshal,4,6,32033)
CheckMemberSize(struct auth_ops,ah_validate,4,6,32034)
CheckOffset(struct auth_ops,ah_validate,8,6,32034)
CheckMemberSize(struct auth_ops,ah_refresh,4,6,32035)
CheckOffset(struct auth_ops,ah_refresh,12,6,32035)
CheckMemberSize(struct auth_ops,ah_destroy,4,6,32036)
CheckOffset(struct auth_ops,ah_destroy,16,6,32036)
#elif defined __ia64__
CheckTypeSize(struct auth_ops,40, 9897, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct auth_ops,ah_marshal,8,3,32033)
CheckOffset(struct auth_ops,ah_marshal,8,3,32033)
CheckMemberSize(struct auth_ops,ah_validate,8,3,32034)
CheckOffset(struct auth_ops,ah_validate,16,3,32034)
CheckMemberSize(struct auth_ops,ah_refresh,8,3,32035)
CheckOffset(struct auth_ops,ah_refresh,24,3,32035)
CheckMemberSize(struct auth_ops,ah_destroy,8,3,32036)
CheckOffset(struct auth_ops,ah_destroy,32,3,32036)
#elif defined __i386__
CheckTypeSize(struct auth_ops,20, 9897, 2, 1.3, NULL, 0, NULL)
CheckMemberSize(struct auth_ops,ah_nextverf,4,2,32032)
CheckOffset(struct auth_ops,ah_nextverf,0,2,32032)
CheckMemberSize(struct auth_ops,ah_marshal,4,2,32033)
CheckOffset(struct auth_ops,ah_marshal,4,2,32033)
CheckMemberSize(struct auth_ops,ah_validate,4,2,32034)
CheckOffset(struct auth_ops,ah_validate,8,2,32034)
CheckMemberSize(struct auth_ops,ah_refresh,4,2,32035)
CheckOffset(struct auth_ops,ah_refresh,12,2,32035)
CheckMemberSize(struct auth_ops,ah_destroy,4,2,32036)
CheckOffset(struct auth_ops,ah_destroy,16,2,32036)
#else
Msg("Find size of auth_ops (9897)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.3""',NULL,0,NULL);\n",architecture,9897,0);
#endif

#if defined __s390x__
CheckTypeSize(union des_block,8, 9888, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(union des_block,key,8,12,32024)
CheckOffset(union des_block,key,0,12,32024)
CheckMemberSize(union des_block,c,8,12,32025)
CheckOffset(union des_block,c,0,12,32025)
#elif defined __x86_64__
CheckTypeSize(union des_block,8, 9888, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(union des_block,key,8,11,32024)
CheckOffset(union des_block,key,0,11,32024)
CheckMemberSize(union des_block,c,8,11,32025)
CheckOffset(union des_block,c,0,11,32025)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(union des_block,8, 9888, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(union des_block,key,8,10,32024)
CheckOffset(union des_block,key,0,10,32024)
CheckMemberSize(union des_block,c,8,10,32025)
CheckOffset(union des_block,c,0,10,32025)
#elif defined __powerpc64__
CheckTypeSize(union des_block,8, 9888, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(union des_block,key,8,9,32024)
CheckOffset(union des_block,key,0,9,32024)
CheckMemberSize(union des_block,c,8,9,32025)
CheckOffset(union des_block,c,0,9,32025)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(union des_block,8, 9888, 6, 1.3, NULL, 0, NULL)
CheckMemberSize(union des_block,key,8,6,32024)
CheckOffset(union des_block,key,0,6,32024)
CheckMemberSize(union des_block,c,8,6,32025)
CheckOffset(union des_block,c,0,6,32025)
#elif defined __ia64__
CheckTypeSize(union des_block,8, 9888, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(union des_block,key,8,3,32024)
CheckOffset(union des_block,key,0,3,32024)
CheckMemberSize(union des_block,c,8,3,32025)
CheckOffset(union des_block,c,0,3,32025)
#elif defined __i386__
CheckTypeSize(union des_block,8, 9888, 2, 1.3, NULL, 0, NULL)
CheckMemberSize(union des_block,key,8,2,32024)
CheckOffset(union des_block,key,0,2,32024)
CheckMemberSize(union des_block,c,8,2,32025)
CheckOffset(union des_block,c,0,2,32025)
#else
Msg("Find size of des_block (9888)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.3""',NULL,0, NULL);\n",architecture,9888,0);
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
