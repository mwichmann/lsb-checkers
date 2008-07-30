/*
 * Test of X11/ICE/ICEutil.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include <wchar.h>
#include <X11/X.h>
#include <X11/Xlib.h>
#include "X11/ICE/ICEutil.h"



#ifdef TET_TEST
void X11_ICE_ICEutil_h()
{
#else
int X11_ICE_ICEutil_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in X11/ICE/ICEutil.h\n");
#endif

printf("Checking data structures in X11/ICE/ICEutil.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef IceAuthLockError
	CompareConstant(IceAuthLockError,1,13559,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: IceAuthLockError\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IceAuthLockSuccess
	CompareConstant(IceAuthLockSuccess,0,13560,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: IceAuthLockSuccess\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IceAuthLockTimeout
	CompareConstant(IceAuthLockTimeout,2,13561,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: IceAuthLockTimeout\n");
cnt++;
#endif

#endif

#if defined __s390x__
CheckTypeSize(IceAuthDataEntry,40, 100171, 12, 1.3, NULL, 100170, NULL)
#elif defined __x86_64__
CheckTypeSize(IceAuthDataEntry,40, 100171, 11, 2.0, NULL, 100170, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(IceAuthDataEntry,20, 100171, 10, 1.3, NULL, 100170, NULL)
#elif defined __powerpc64__
CheckTypeSize(IceAuthDataEntry,40, 100171, 9, 2.0, NULL, 100170, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(IceAuthDataEntry,20, 100171, 6, 1.2, NULL, 100170, NULL)
#elif defined __ia64__
CheckTypeSize(IceAuthDataEntry,40, 100171, 3, 1.3, NULL, 100170, NULL)
#elif defined __i386__
CheckTypeSize(IceAuthDataEntry,20, 100171, 2, 1.2, NULL, 100170, NULL)
#else
Msg("Find size of IceAuthDataEntry (100171)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100170,NULL);\n",architecture,100171,0);
#endif

#if defined __s390x__
CheckTypeSize(IceAuthFileEntry,56, 100174, 12, 1.3, NULL, 100173, NULL)
#elif defined __x86_64__
CheckTypeSize(IceAuthFileEntry,56, 100174, 11, 2.0, NULL, 100173, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(IceAuthFileEntry,28, 100174, 10, 1.3, NULL, 100173, NULL)
#elif defined __powerpc64__
CheckTypeSize(IceAuthFileEntry,56, 100174, 9, 2.0, NULL, 100173, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(IceAuthFileEntry,28, 100174, 6, 1.2, NULL, 100173, NULL)
#elif defined __ia64__
CheckTypeSize(IceAuthFileEntry,56, 100174, 3, 1.3, NULL, 100173, NULL)
#elif defined __i386__
CheckTypeSize(IceAuthFileEntry,28, 100174, 2, 1.2, NULL, 100173, NULL)
#else
Msg("Find size of IceAuthFileEntry (100174)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100173, NULL);\n",architecture,100174,0);
#endif

extern char * IceAuthFileName_db(void);
CheckInterfacedef(IceAuthFileName,IceAuthFileName_db);
extern void IceFreeAuthFileEntry_db(IceAuthFileEntry *);
CheckInterfacedef(IceFreeAuthFileEntry,IceFreeAuthFileEntry_db);
extern char * IceGenerateMagicCookie_db(int);
CheckInterfacedef(IceGenerateMagicCookie,IceGenerateMagicCookie_db);
extern IceAuthFileEntry * IceGetAuthFileEntry_db(char *, char *, char *);
CheckInterfacedef(IceGetAuthFileEntry,IceGetAuthFileEntry_db);
extern int IceLockAuthFile_db(char *, int, int, long int);
CheckInterfacedef(IceLockAuthFile,IceLockAuthFile_db);
extern IceAuthFileEntry * IceReadAuthFileEntry_db(FILE *);
CheckInterfacedef(IceReadAuthFileEntry,IceReadAuthFileEntry_db);
extern void IceSetPaAuthData_db(int, IceAuthDataEntry *);
CheckInterfacedef(IceSetPaAuthData,IceSetPaAuthData_db);
extern void IceUnlockAuthFile_db(char *);
CheckInterfacedef(IceUnlockAuthFile,IceUnlockAuthFile_db);
extern int IceWriteAuthFileEntry_db(FILE *, IceAuthFileEntry *);
CheckInterfacedef(IceWriteAuthFileEntry,IceWriteAuthFileEntry_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/ICE/ICEutil.h\n\n",pcnt,cnt);
return cnt;
#endif

}
