/*
 * Test of rpc/pmap_clnt.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "rpc/pmap_clnt.h"



#ifdef TET_TEST
void rpc_pmap_clnt_h()
{
#else
int rpc_pmap_clnt_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in rpc/pmap_clnt.h\n");
#endif

printf("Checking data structures in rpc/pmap_clnt.h\n");
extern u_short pmap_getport_db(struct sockaddr_in *, const u_long, const u_long, u_int);
CheckInterfacedef(pmap_getport,pmap_getport_db);
extern bool_t pmap_set_db(const u_long, const u_long, int, u_short);
CheckInterfacedef(pmap_set,pmap_set_db);
extern bool_t pmap_unset_db(u_long, u_long);
CheckInterfacedef(pmap_unset,pmap_unset_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in rpc/pmap_clnt.h\n\n",pcnt,cnt);
return cnt;
#endif

}
