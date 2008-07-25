/*
 * Test of nss3/nss.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#ifndef LSBCC_MODE
#undef NSS_VERSION
#undef NSS_VMAJOR
#undef NSS_VMINOR
#undef NSS_VPATCH
#define NSS_VERSION "3.11.4"
#define NSS_VMAJOR 3
#define NSS_VMINOR 11
#define NSS_VPATCH 4
#endif
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
#if _LSB_DEFAULT_ARCH
#ifdef NSS_VERSION
	CompareConstant(NSS_VERSION,"3.11.4",16035,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: NSS_VERSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NSS_VMAJOR
	CompareConstant(NSS_VMAJOR,3,16036,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: NSS_VMAJOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NSS_VMINOR
	CompareConstant(NSS_VMINOR,11,16037,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: NSS_VMINOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NSS_VPATCH
	CompareConstant(NSS_VPATCH,4,16038,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: NSS_VPATCH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NSS_INIT_READONLY
	CompareConstant(NSS_INIT_READONLY,0x1,16039,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: NSS_INIT_READONLY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NSS_INIT_NOCERTDB
	CompareConstant(NSS_INIT_NOCERTDB,0x2,16040,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: NSS_INIT_NOCERTDB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NSS_INIT_NOMODDB
	CompareConstant(NSS_INIT_NOMODDB,0x4,16041,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: NSS_INIT_NOMODDB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NSS_INIT_FORCEOPEN
	CompareConstant(NSS_INIT_FORCEOPEN,0x8,16042,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: NSS_INIT_FORCEOPEN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NSS_INIT_NOROOTINIT
	CompareConstant(NSS_INIT_NOROOTINIT,0x10,16043,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: NSS_INIT_NOROOTINIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NSS_INIT_OPTIMIZESPACE
	CompareConstant(NSS_INIT_OPTIMIZESPACE,0x20,16044,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: NSS_INIT_OPTIMIZESPACE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NSS_INIT_PK11THREADSAFE
	CompareConstant(NSS_INIT_PK11THREADSAFE,0x40,16045,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: NSS_INIT_PK11THREADSAFE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NSS_INIT_PK11RELOAD
	CompareConstant(NSS_INIT_PK11RELOAD,0x80,16046,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: NSS_INIT_PK11RELOAD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NSS_INIT_NOPK11FINALIZE
	CompareConstant(NSS_INIT_NOPK11FINALIZE,0x100,16047,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: NSS_INIT_NOPK11FINALIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NSS_INIT_RESERVED
	CompareConstant(NSS_INIT_RESERVED,0x200,16048,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: NSS_INIT_RESERVED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NSS_INIT_COOPERATE
	CompareConstant(NSS_INIT_COOPERATE,NSS_INIT_PK11THREADSAFE | NSS_INIT_PK11RELOAD | NSS_INIT_NOPK11FINALIZE | NSS_INIT_RESERVED,16049,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: NSS_INIT_COOPERATE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for SECMOD_DB */
#endif

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
