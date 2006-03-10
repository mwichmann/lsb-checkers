/*
 * Test of libxml2/libxml/threads.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
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
#ifdef TET_TEST
Msg("Checking data structures in libxml2/libxml/threads.h\n");
#endif

printf("Checking data structures in libxml2/libxml/threads.h\n");
#if __i386__
CheckTypeSize(xmlRMutex,0, 14995, 2)
#elif __x86_64__
CheckTypeSize(xmlRMutex,0, 14995, 11)
#elif __ia64__
CheckTypeSize(xmlRMutex,0, 14995, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlRMutex,0, 14995, 6)
#elif __powerpc64__
CheckTypeSize(xmlRMutex,0, 14995, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlRMutex,0, 14995, 10)
#elif __s390x__
CheckTypeSize(xmlRMutex,0, 14995, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14995,0);
Msg("Find size of xmlRMutex (14995)\n");
#endif

#if __i386__
CheckTypeSize(xmlRMutex *,4, 14996, 2)
#elif __x86_64__
CheckTypeSize(xmlRMutex *,8, 14996, 11)
#elif __ia64__
CheckTypeSize(xmlRMutex *,8, 14996, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlRMutex *,4, 14996, 6)
#elif __powerpc64__
CheckTypeSize(xmlRMutex *,8, 14996, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlRMutex *,4, 14996, 10)
#elif __s390x__
CheckTypeSize(xmlRMutex *,8, 14996, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14996,0);
Msg("Find size of xmlRMutex * (14996)\n");
#endif

#if __i386__
CheckTypeSize(xmlRMutexPtr,4, 14997, 2)
#elif __x86_64__
CheckTypeSize(xmlRMutexPtr,8, 14997, 11)
#elif __ia64__
CheckTypeSize(xmlRMutexPtr,8, 14997, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlRMutexPtr,4, 14997, 6)
#elif __powerpc64__
CheckTypeSize(xmlRMutexPtr,8, 14997, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlRMutexPtr,4, 14997, 10)
#elif __s390x__
CheckTypeSize(xmlRMutexPtr,8, 14997, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14997,0);
Msg("Find size of xmlRMutexPtr (14997)\n");
#endif

#if __i386__
CheckTypeSize(xmlMutex,0, 14999, 2)
#elif __x86_64__
CheckTypeSize(xmlMutex,0, 14999, 11)
#elif __ia64__
CheckTypeSize(xmlMutex,0, 14999, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlMutex,0, 14999, 6)
#elif __powerpc64__
CheckTypeSize(xmlMutex,0, 14999, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlMutex,0, 14999, 10)
#elif __s390x__
CheckTypeSize(xmlMutex,0, 14999, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14999,0);
Msg("Find size of xmlMutex (14999)\n");
#endif

#if __i386__
CheckTypeSize(xmlMutex *,4, 15000, 2)
#elif __x86_64__
CheckTypeSize(xmlMutex *,8, 15000, 11)
#elif __ia64__
CheckTypeSize(xmlMutex *,8, 15000, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlMutex *,4, 15000, 6)
#elif __powerpc64__
CheckTypeSize(xmlMutex *,8, 15000, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlMutex *,4, 15000, 10)
#elif __s390x__
CheckTypeSize(xmlMutex *,8, 15000, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15000,0);
Msg("Find size of xmlMutex * (15000)\n");
#endif

#if __i386__
CheckTypeSize(xmlMutexPtr,4, 15001, 2)
#elif __x86_64__
CheckTypeSize(xmlMutexPtr,8, 15001, 11)
#elif __ia64__
CheckTypeSize(xmlMutexPtr,8, 15001, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlMutexPtr,4, 15001, 6)
#elif __powerpc64__
CheckTypeSize(xmlMutexPtr,8, 15001, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlMutexPtr,4, 15001, 10)
#elif __s390x__
CheckTypeSize(xmlMutexPtr,8, 15001, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15001,0);
Msg("Find size of xmlMutexPtr (15001)\n");
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
