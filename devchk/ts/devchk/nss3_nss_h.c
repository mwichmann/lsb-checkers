/*
 * Test of nss3/nss.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "nss3/nss.h"



#ifdef TET_TEST
void nss3_nss_h()
{
#else
int nss3_nss_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in nss3/nss.h\n");
#endif

printf("Checking data structures in nss3/nss.h\n");
#if 1
CheckTypeSize(NSS_ShutdownFunc,0, 1005914, 1, 4.0, NULL, 1000859, NULL)
#endif

extern SECStatus NSS_Init_db(const char *);
CheckInterfacedef(NSS_Init,NSS_Init_db);
extern SECStatus NSS_InitReadWrite_db(const char *);
CheckInterfacedef(NSS_InitReadWrite,NSS_InitReadWrite_db);
extern SECStatus NSS_NoDB_Init_db(const char *);
CheckInterfacedef(NSS_NoDB_Init,NSS_NoDB_Init_db);
extern SECStatus NSS_Shutdown_db(void);
CheckInterfacedef(NSS_Shutdown,NSS_Shutdown_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in nss3/nss.h\n\n",pcnt,cnt);
return cnt;
#endif

}
