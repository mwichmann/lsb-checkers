/*
 * Test of rpc/auth.h
 */
#include "hdrchk.h"
#include "sys/types.h"
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

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in rpc/auth.h\n");
#endif

#ifdef __i386__
#elif __s390__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9887,0);
Msg("Find size of auth_stat (9887)\n");
#endif

#ifdef __i386__
CheckTypeSize(struct opaque_auth,12, 9894, 2)
CheckOffset(struct opaque_auth,oa_flavor,0,2,32026)
CheckOffset(struct opaque_auth,oa_base,4,2,32027)
CheckOffset(struct opaque_auth,oa_length,8,2,32028)
#elif __s390__
CheckTypeSize(struct opaque_auth,12, 9894, 10)
CheckOffset(struct opaque_auth,oa_flavor,0,10,32026)
CheckOffset(struct opaque_auth,oa_base,4,10,32027)
CheckOffset(struct opaque_auth,oa_length,8,10,32028)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9894,0);
Msg("Find size of opaque_auth (9894)\n");
#endif

#ifdef __i386__
CheckTypeSize(struct AUTH,40, 9896, 2)
CheckOffset(struct AUTH,ah_verf,12,2,32030)
CheckOffset(struct AUTH,ah_key,24,2,32031)
CheckOffset(struct AUTH,ah_ops,32,2,32037)
CheckOffset(struct AUTH,ah_private,36,2,32038)
#elif __s390__
CheckTypeSize(struct AUTH,40, 9896, 10)
Msg("Missing member data for AUTH on S390\n");
CheckOffset(struct AUTH,ah_cred,0,10,32029)
CheckOffset(struct AUTH,ah_verf,0,10,32030)
CheckOffset(struct AUTH,ah_key,0,10,32031)
CheckOffset(struct AUTH,ah_ops,0,10,32037)
CheckOffset(struct AUTH,ah_private,0,10,32038)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9896,0);
Msg("Find size of AUTH (9896)\n");
#endif

#ifdef __i386__
CheckTypeSize(AUTH,40, 10391, 2)
#elif __s390__
CheckTypeSize(AUTH,40, 10391, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10391,0);
Msg("Find size of AUTH (10391)\n");
#endif

#ifdef __i386__
CheckTypeSize(struct auth_ops,20, 9897, 2)
CheckOffset(struct auth_ops,ah_nextverf,0,2,32032)
CheckOffset(struct auth_ops,ah_marshal,4,2,32033)
CheckOffset(struct auth_ops,ah_validate,8,2,32034)
CheckOffset(struct auth_ops,ah_refresh,12,2,32035)
CheckOffset(struct auth_ops,ah_destroy,16,2,32036)
#elif __s390__
CheckTypeSize(struct auth_ops,20, 9897, 10)
Msg("Missing member data for auth_ops on S390\n");
CheckOffset(struct auth_ops,ah_nextverf,0,10,32032)
CheckOffset(struct auth_ops,ah_marshal,0,10,32033)
CheckOffset(struct auth_ops,ah_validate,0,10,32034)
CheckOffset(struct auth_ops,ah_refresh,0,10,32035)
CheckOffset(struct auth_ops,ah_destroy,0,10,32036)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9897,0);
Msg("Find size of auth_ops (9897)\n");
#endif

#ifdef __i386__
CheckTypeSize(union des_block,8, 9888, 2)
CheckOffset(union des_block,key,0,2,32024)
CheckOffset(union des_block,c,0,2,32025)
#elif __s390__
CheckTypeSize(union des_block,8, 9888, 10)
Msg("Missing member data for des_block on S390\n");
CheckOffset(union des_block,key,0,10,32024)
CheckOffset(union des_block,c,0,10,32025)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9888,0);
Msg("Find size of des_block (9888)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in rpc/auth.h\n",cnt);
return cnt;
#endif

}
