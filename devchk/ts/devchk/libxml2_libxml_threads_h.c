/*
 * Test of libxml2/libxml/threads.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include <libxml/xmlregexp.h>
struct _xmlRMutex {} ;
struct _xmlMutex {} ;
#include "libxml2/libxml/threads.h"



#ifdef TET_TEST
void libxml2_libxml_threads_h()
{
#else
int libxml2_libxml_threads_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in libxml2/libxml/threads.h\n");
#endif

printf("Checking data structures in libxml2/libxml/threads.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for libxml2/libxml/threads.h depends on libxml2/libxml/xmlversion.h */
#endif

#if defined __s390x__
CheckTypeSize(xmlRMutexPtr,8, 14997, 12, 3.1, NULL, 14996, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlRMutexPtr,8, 14997, 11, 3.1, NULL, 14996, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlRMutexPtr,4, 14997, 10, 3.1, NULL, 14996, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlRMutexPtr,8, 14997, 9, 3.1, NULL, 14996, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlRMutexPtr,4, 14997, 6, 3.1, NULL, 14996, NULL)
#elif defined __ia64__
CheckTypeSize(xmlRMutexPtr,8, 14997, 3, 3.1, NULL, 14996, NULL)
#elif defined __i386__
CheckTypeSize(xmlRMutexPtr,4, 14997, 2, 3.1, NULL, 14996, NULL)
#else
Msg("Find size of xmlRMutexPtr (14997)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14996,NULL);\n",architecture,14997,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlMutexPtr,8, 15001, 12, 3.1, NULL, 15000, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlMutexPtr,8, 15001, 11, 3.1, NULL, 15000, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlMutexPtr,4, 15001, 10, 3.1, NULL, 15000, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlMutexPtr,8, 15001, 9, 3.1, NULL, 15000, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlMutexPtr,4, 15001, 6, 3.1, NULL, 15000, NULL)
#elif defined __ia64__
CheckTypeSize(xmlMutexPtr,8, 15001, 3, 3.1, NULL, 15000, NULL)
#elif defined __i386__
CheckTypeSize(xmlMutexPtr,4, 15001, 2, 3.1, NULL, 15000, NULL)
#else
Msg("Find size of xmlMutexPtr (15001)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,15000, NULL);\n",architecture,15001,0);
#endif

extern int xmlGetThreadId_db(void);
CheckInterfacedef(xmlGetThreadId,xmlGetThreadId_db);
extern xmlRMutexPtr xmlNewRMutex_db(void);
CheckInterfacedef(xmlNewRMutex,xmlNewRMutex_db);
extern void xmlCleanupThreads_db(void);
CheckInterfacedef(xmlCleanupThreads,xmlCleanupThreads_db);
extern void xmlFreeRMutex_db(xmlRMutexPtr);
CheckInterfacedef(xmlFreeRMutex,xmlFreeRMutex_db);
extern xmlMutexPtr xmlNewMutex_db(void);
CheckInterfacedef(xmlNewMutex,xmlNewMutex_db);
extern int xmlIsMainThread_db(void);
CheckInterfacedef(xmlIsMainThread,xmlIsMainThread_db);
extern void xmlUnlockLibrary_db(void);
CheckInterfacedef(xmlUnlockLibrary,xmlUnlockLibrary_db);
extern void xmlRMutexLock_db(xmlRMutexPtr);
CheckInterfacedef(xmlRMutexLock,xmlRMutexLock_db);
extern void xmlRMutexUnlock_db(xmlRMutexPtr);
CheckInterfacedef(xmlRMutexUnlock,xmlRMutexUnlock_db);
extern void xmlMutexUnlock_db(xmlMutexPtr);
CheckInterfacedef(xmlMutexUnlock,xmlMutexUnlock_db);
extern void xmlMutexLock_db(xmlMutexPtr);
CheckInterfacedef(xmlMutexLock,xmlMutexLock_db);
extern xmlGlobalStatePtr xmlGetGlobalState_db(void);
CheckInterfacedef(xmlGetGlobalState,xmlGetGlobalState_db);
extern void xmlInitThreads_db(void);
CheckInterfacedef(xmlInitThreads,xmlInitThreads_db);
extern void xmlLockLibrary_db(void);
CheckInterfacedef(xmlLockLibrary,xmlLockLibrary_db);
extern void xmlFreeMutex_db(xmlMutexPtr);
CheckInterfacedef(xmlFreeMutex,xmlFreeMutex_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in libxml2/libxml/threads.h\n\n",pcnt,cnt);
return cnt;
#endif

}
