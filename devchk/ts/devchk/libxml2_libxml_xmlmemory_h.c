/*
 * Test of libxml2/libxml/xmlmemory.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include <libxml/xmlregexp.h>
#include "libxml2/libxml/xmlmemory.h"



#ifdef TET_TEST
void libxml2_libxml_xmlmemory_h()
{
#else
int libxml2_libxml_xmlmemory_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in libxml2/libxml/xmlmemory.h\n");
#endif

printf("Checking data structures in libxml2/libxml/xmlmemory.h\n");
#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#elif 1
#endif

#if __i386__
CheckTypeSize(xmlFreeFunc,4, 14570, 2);
#elif __x86_64__
CheckTypeSize(xmlFreeFunc,8, 14570, 11);
#elif __ia64__
CheckTypeSize(xmlFreeFunc,8, 14570, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlFreeFunc,4, 14570, 6);
#elif __powerpc64__
CheckTypeSize(xmlFreeFunc,8, 14570, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(xmlFreeFunc,4, 14570, 10);
#elif __s390x__
CheckTypeSize(xmlFreeFunc,8, 14570, 12);
#elif 1
CheckTypeSize(xmlFreeFunc,0, 14570, 1);
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#elif 1
#endif

#if __i386__
CheckTypeSize(xmlMallocFunc,4, 14572, 2);
#elif __x86_64__
CheckTypeSize(xmlMallocFunc,8, 14572, 11);
#elif __ia64__
CheckTypeSize(xmlMallocFunc,8, 14572, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlMallocFunc,4, 14572, 6);
#elif __powerpc64__
CheckTypeSize(xmlMallocFunc,8, 14572, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(xmlMallocFunc,4, 14572, 10);
#elif __s390x__
CheckTypeSize(xmlMallocFunc,8, 14572, 12);
#elif 1
CheckTypeSize(xmlMallocFunc,0, 14572, 1);
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#elif 1
#endif

#if __i386__
CheckTypeSize(xmlReallocFunc,4, 14574, 2);
#elif __x86_64__
CheckTypeSize(xmlReallocFunc,8, 14574, 11);
#elif __ia64__
CheckTypeSize(xmlReallocFunc,8, 14574, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlReallocFunc,4, 14574, 6);
#elif __powerpc64__
CheckTypeSize(xmlReallocFunc,8, 14574, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(xmlReallocFunc,4, 14574, 10);
#elif __s390x__
CheckTypeSize(xmlReallocFunc,8, 14574, 12);
#elif 1
CheckTypeSize(xmlReallocFunc,0, 14574, 1);
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#elif 1
#endif

#if __i386__
CheckTypeSize(xmlStrdupFunc,4, 14576, 2);
#elif __x86_64__
CheckTypeSize(xmlStrdupFunc,8, 14576, 11);
#elif __ia64__
CheckTypeSize(xmlStrdupFunc,8, 14576, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlStrdupFunc,4, 14576, 6);
#elif __powerpc64__
CheckTypeSize(xmlStrdupFunc,8, 14576, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(xmlStrdupFunc,4, 14576, 10);
#elif __s390x__
CheckTypeSize(xmlStrdupFunc,8, 14576, 12);
#elif 1
CheckTypeSize(xmlStrdupFunc,0, 14576, 1);
#endif

#if __i386__
CheckTypeSize(xmlFreeFunc *,4, 14577, 2);
#elif __x86_64__
CheckTypeSize(xmlFreeFunc *,8, 14577, 11);
#elif __ia64__
CheckTypeSize(xmlFreeFunc *,8, 14577, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlFreeFunc *,4, 14577, 6);
#elif __powerpc64__
CheckTypeSize(xmlFreeFunc *,8, 14577, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(xmlFreeFunc *,4, 14577, 10);
#elif __s390x__
CheckTypeSize(xmlFreeFunc *,8, 14577, 12);
#elif 1
CheckTypeSize(xmlFreeFunc *,0, 14577, 1);
#endif

#if __i386__
CheckTypeSize(xmlMallocFunc *,4, 14578, 2);
#elif __x86_64__
CheckTypeSize(xmlMallocFunc *,8, 14578, 11);
#elif __ia64__
CheckTypeSize(xmlMallocFunc *,8, 14578, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlMallocFunc *,4, 14578, 6);
#elif __powerpc64__
CheckTypeSize(xmlMallocFunc *,8, 14578, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(xmlMallocFunc *,4, 14578, 10);
#elif __s390x__
CheckTypeSize(xmlMallocFunc *,8, 14578, 12);
#elif 1
CheckTypeSize(xmlMallocFunc *,0, 14578, 1);
#endif

#if __i386__
CheckTypeSize(xmlReallocFunc *,4, 14579, 2);
#elif __x86_64__
CheckTypeSize(xmlReallocFunc *,8, 14579, 11);
#elif __ia64__
CheckTypeSize(xmlReallocFunc *,8, 14579, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlReallocFunc *,4, 14579, 6);
#elif __powerpc64__
CheckTypeSize(xmlReallocFunc *,8, 14579, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(xmlReallocFunc *,4, 14579, 10);
#elif __s390x__
CheckTypeSize(xmlReallocFunc *,8, 14579, 12);
#elif 1
CheckTypeSize(xmlReallocFunc *,0, 14579, 1);
#endif

#if __i386__
CheckTypeSize(xmlStrdupFunc *,4, 14580, 2);
#elif __x86_64__
CheckTypeSize(xmlStrdupFunc *,8, 14580, 11);
#elif __ia64__
CheckTypeSize(xmlStrdupFunc *,8, 14580, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlStrdupFunc *,4, 14580, 6);
#elif __powerpc64__
CheckTypeSize(xmlStrdupFunc *,8, 14580, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(xmlStrdupFunc *,4, 14580, 10);
#elif __s390x__
CheckTypeSize(xmlStrdupFunc *,8, 14580, 12);
#elif 1
CheckTypeSize(xmlStrdupFunc *,0, 14580, 1);
#endif

extern void xmlCleanupMemory_db(void);
CheckInterfacedef(xmlCleanupMemory,xmlCleanupMemory_db);
extern void xmlMemFree_db(void *);
CheckInterfacedef(xmlMemFree,xmlMemFree_db);
extern void xmlMemShow_db(FILE *, int);
CheckInterfacedef(xmlMemShow,xmlMemShow_db);
extern int xmlMemSetup_db(xmlFreeFunc, xmlMallocFunc, xmlReallocFunc, xmlStrdupFunc);
CheckInterfacedef(xmlMemSetup,xmlMemSetup_db);
extern void * xmlMemRealloc_db(void *, size_t);
CheckInterfacedef(xmlMemRealloc,xmlMemRealloc_db);
extern void * xmlMemMalloc_db(size_t);
CheckInterfacedef(xmlMemMalloc,xmlMemMalloc_db);
extern void xmlMemoryDump_db(void);
CheckInterfacedef(xmlMemoryDump,xmlMemoryDump_db);
extern int xmlInitMemory_db(void);
CheckInterfacedef(xmlInitMemory,xmlInitMemory_db);
extern int xmlMemGet_db(xmlFreeFunc *, xmlMallocFunc *, xmlReallocFunc *, xmlStrdupFunc *);
CheckInterfacedef(xmlMemGet,xmlMemGet_db);
extern char * xmlMemoryStrdup_db(const char *);
CheckInterfacedef(xmlMemoryStrdup,xmlMemoryStrdup_db);
extern void * xmlReallocLoc_db(void *, size_t, const char *, int);
CheckInterfacedef(xmlReallocLoc,xmlReallocLoc_db);
extern int xmlGcMemSetup_db(xmlFreeFunc, xmlMallocFunc, xmlMallocFunc, xmlReallocFunc, xmlStrdupFunc);
CheckInterfacedef(xmlGcMemSetup,xmlGcMemSetup_db);
extern int xmlMemUsed_db(void);
CheckInterfacedef(xmlMemUsed,xmlMemUsed_db);
extern void xmlMemDisplay_db(FILE *);
CheckInterfacedef(xmlMemDisplay,xmlMemDisplay_db);
extern int xmlMemBlocks_db(void);
CheckInterfacedef(xmlMemBlocks,xmlMemBlocks_db);
extern int xmlGcMemGet_db(xmlFreeFunc *, xmlMallocFunc *, xmlMallocFunc *, xmlReallocFunc *, xmlStrdupFunc *);
CheckInterfacedef(xmlGcMemGet,xmlGcMemGet_db);
extern void * xmlMallocLoc_db(size_t, const char *, int);
CheckInterfacedef(xmlMallocLoc,xmlMallocLoc_db);
extern void * xmlMallocAtomicLoc_db(size_t, const char *, int);
CheckInterfacedef(xmlMallocAtomicLoc,xmlMallocAtomicLoc_db);
extern char * xmlMemStrdupLoc_db(const char *, const char *, int);
CheckInterfacedef(xmlMemStrdupLoc,xmlMemStrdupLoc_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in libxml2/libxml/xmlmemory.h\n\n",pcnt,cnt);
return cnt;
#endif

}
