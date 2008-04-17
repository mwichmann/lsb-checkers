/*
 * Test of libxml2/libxml/xmlmemory.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
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
#if defined __i386__
CheckTypeSize(xmlFreeFunc,4, 14570, 2, 3.1, NULL, 14569, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlFreeFunc,8, 14570, 11, 3.1, NULL, 14569, NULL)
#elif defined __ia64__
CheckTypeSize(xmlFreeFunc,8, 14570, 3, 3.1, NULL, 14569, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlFreeFunc,4, 14570, 6, 3.1, NULL, 14569, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlFreeFunc,8, 14570, 9, 3.1, NULL, 14569, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlFreeFunc,4, 14570, 10, 3.1, NULL, 14569, NULL)
#elif defined __s390x__
CheckTypeSize(xmlFreeFunc,8, 14570, 12, 3.1, NULL, 14569, NULL)
#else
Msg("Find size of xmlFreeFunc (14570)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14569,NULL);\n",architecture,14570,0);
#endif

#if defined __i386__
CheckTypeSize(xmlMallocFunc,4, 14572, 2, 3.1, NULL, 14571, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlMallocFunc,8, 14572, 11, 3.1, NULL, 14571, NULL)
#elif defined __ia64__
CheckTypeSize(xmlMallocFunc,8, 14572, 3, 3.1, NULL, 14571, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlMallocFunc,4, 14572, 6, 3.1, NULL, 14571, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlMallocFunc,8, 14572, 9, 3.1, NULL, 14571, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlMallocFunc,4, 14572, 10, 3.1, NULL, 14571, NULL)
#elif defined __s390x__
CheckTypeSize(xmlMallocFunc,8, 14572, 12, 3.1, NULL, 14571, NULL)
#else
Msg("Find size of xmlMallocFunc (14572)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14571,NULL);\n",architecture,14572,0);
#endif

#if defined __i386__
CheckTypeSize(xmlReallocFunc,4, 14574, 2, 3.1, NULL, 14573, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlReallocFunc,8, 14574, 11, 3.1, NULL, 14573, NULL)
#elif defined __ia64__
CheckTypeSize(xmlReallocFunc,8, 14574, 3, 3.1, NULL, 14573, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlReallocFunc,4, 14574, 6, 3.1, NULL, 14573, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlReallocFunc,8, 14574, 9, 3.1, NULL, 14573, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlReallocFunc,4, 14574, 10, 3.1, NULL, 14573, NULL)
#elif defined __s390x__
CheckTypeSize(xmlReallocFunc,8, 14574, 12, 3.1, NULL, 14573, NULL)
#else
Msg("Find size of xmlReallocFunc (14574)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14573,NULL);\n",architecture,14574,0);
#endif

#if defined __i386__
CheckTypeSize(xmlStrdupFunc,4, 14576, 2, 3.1, NULL, 14575, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlStrdupFunc,8, 14576, 11, 3.1, NULL, 14575, NULL)
#elif defined __ia64__
CheckTypeSize(xmlStrdupFunc,8, 14576, 3, 3.1, NULL, 14575, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlStrdupFunc,4, 14576, 6, 3.1, NULL, 14575, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlStrdupFunc,8, 14576, 9, 3.1, NULL, 14575, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlStrdupFunc,4, 14576, 10, 3.1, NULL, 14575, NULL)
#elif defined __s390x__
CheckTypeSize(xmlStrdupFunc,8, 14576, 12, 3.1, NULL, 14575, NULL)
#else
Msg("Find size of xmlStrdupFunc (14576)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14575, NULL);\n",architecture,14576,0);
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
