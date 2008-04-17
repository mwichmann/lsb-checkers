/*
 * Test of dlfcn.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "dlfcn.h"



#ifdef TET_TEST
void dlfcn_h()
{
#else
int dlfcn_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in dlfcn.h\n");
#endif

printf("Checking data structures in dlfcn.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef RTLD_LAZY
	CompareConstant(RTLD_LAZY,0x00001,1160,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: RTLD_LAZY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RTLD_NOW
	CompareConstant(RTLD_NOW,0x00002,1161,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: RTLD_NOW\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RTLD_GLOBAL
	CompareConstant(RTLD_GLOBAL,0x00100,1164,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: RTLD_GLOBAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RTLD_LOCAL
	CompareConstant(RTLD_LOCAL,0,1165,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: RTLD_LOCAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RTLD_DEFAULT
	CompareConstant(RTLD_DEFAULT,((void *) 0),11900,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: RTLD_DEFAULT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RTLD_NEXT
	CompareConstant(RTLD_NEXT,((void *) -1l),5185,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: RTLD_NEXT\n");
cnt++;
#endif

#endif

#if defined __ia64__
CheckTypeSize(Dl_info,32, 10008, 3, 1.3, NULL, 10007, NULL)
#elif defined __i386__
CheckTypeSize(Dl_info,16, 10008, 2, 1.2, NULL, 10007, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(Dl_info,16, 10008, 6, 1.2, NULL, 10007, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(Dl_info,16, 10008, 10, 1.3, NULL, 10007, NULL)
#elif defined __powerpc64__
CheckTypeSize(Dl_info,32, 10008, 9, 2.0, NULL, 10007, NULL)
#elif defined __s390x__
CheckTypeSize(Dl_info,32, 10008, 12, 1.3, NULL, 10007, NULL)
#elif defined __x86_64__
CheckTypeSize(Dl_info,32, 10008, 11, 2.0, NULL, 10007, NULL)
#else
Msg("Find size of Dl_info (10008)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,10007, NULL);\n",architecture,10008,0);
#endif

extern int dladdr_db(const void *, Dl_info *);
CheckInterfacedef(dladdr,dladdr_db);
extern int dlclose_db(void *);
CheckInterfacedef(dlclose,dlclose_db);
extern char * dlerror_db(void);
CheckInterfacedef(dlerror,dlerror_db);
extern void * dlopen_db(const char *, int);
CheckInterfacedef(dlopen,dlopen_db);
extern void * dlsym_db(void *, const char *);
CheckInterfacedef(dlsym,dlsym_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in dlfcn.h\n\n",pcnt,cnt);
return cnt;
#endif

}
