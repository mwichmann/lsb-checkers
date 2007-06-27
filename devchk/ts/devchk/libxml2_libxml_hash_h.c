/*
 * Test of libxml2/libxml/hash.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include <libxml/xmlregexp.h>
struct _xmlHashTable { } ;
#include "libxml2/libxml/hash.h"



#ifdef TET_TEST
void libxml2_libxml_hash_h()
{
#else
int libxml2_libxml_hash_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in libxml2/libxml/hash.h\n");
#endif

printf("Checking data structures in libxml2/libxml/hash.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for XML_CAST_FPTR(fptr) */
#endif

#if defined __i386__
CheckTypeSize(xmlHashTable,0, 14729, 2, 3.1, NULL, 14723, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlHashTable,0, 14729, 11, 3.1, NULL, 14723, NULL)
#elif defined __ia64__
CheckTypeSize(xmlHashTable,0, 14729, 3, 3.1, NULL, 14723, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlHashTable,0, 14729, 6, 3.1, NULL, 14723, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlHashTable,0, 14729, 9, 3.1, NULL, 14723, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlHashTable,0, 14729, 10, 3.1, NULL, 14723, NULL)
#elif defined __s390x__
CheckTypeSize(xmlHashTable,0, 14729, 12, 3.1, NULL, 14723, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14723,NULL);\n",architecture,14729,0);
Msg("Find size of xmlHashTable (14729)\n");
#endif

#if defined __i386__
CheckTypeSize(xmlHashTablePtr,4, 14731, 2, 3.1, NULL, 14730, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlHashTablePtr,8, 14731, 11, 3.1, NULL, 14730, NULL)
#elif defined __ia64__
CheckTypeSize(xmlHashTablePtr,8, 14731, 3, 3.1, NULL, 14730, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlHashTablePtr,4, 14731, 6, 3.1, NULL, 14730, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlHashTablePtr,8, 14731, 9, 3.1, NULL, 14730, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlHashTablePtr,4, 14731, 10, 3.1, NULL, 14730, NULL)
#elif defined __s390x__
CheckTypeSize(xmlHashTablePtr,8, 14731, 12, 3.1, NULL, 14730, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14730,NULL);\n",architecture,14731,0);
Msg("Find size of xmlHashTablePtr (14731)\n");
#endif

#if defined __i386__
CheckTypeSize(xmlHashDeallocator,4, 14733, 2, 3.1, NULL, 14732, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlHashDeallocator,8, 14733, 11, 3.1, NULL, 14732, NULL)
#elif defined __ia64__
CheckTypeSize(xmlHashDeallocator,8, 14733, 3, 3.1, NULL, 14732, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlHashDeallocator,4, 14733, 6, 3.1, NULL, 14732, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlHashDeallocator,8, 14733, 9, 3.1, NULL, 14732, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlHashDeallocator,4, 14733, 10, 3.1, NULL, 14732, NULL)
#elif defined __s390x__
CheckTypeSize(xmlHashDeallocator,8, 14733, 12, 3.1, NULL, 14732, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14732,NULL);\n",architecture,14733,0);
Msg("Find size of xmlHashDeallocator (14733)\n");
#endif

#if defined __i386__
CheckTypeSize(xmlHashScannerFull,4, 14735, 2, 3.1, NULL, 14734, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlHashScannerFull,8, 14735, 11, 3.1, NULL, 14734, NULL)
#elif defined __ia64__
CheckTypeSize(xmlHashScannerFull,8, 14735, 3, 3.1, NULL, 14734, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlHashScannerFull,4, 14735, 6, 3.1, NULL, 14734, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlHashScannerFull,8, 14735, 9, 3.1, NULL, 14734, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlHashScannerFull,4, 14735, 10, 3.1, NULL, 14734, NULL)
#elif defined __s390x__
CheckTypeSize(xmlHashScannerFull,8, 14735, 12, 3.1, NULL, 14734, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14734,NULL);\n",architecture,14735,0);
Msg("Find size of xmlHashScannerFull (14735)\n");
#endif

#if defined __i386__
CheckTypeSize(xmlHashCopier,4, 14737, 2, 3.1, NULL, 14736, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlHashCopier,8, 14737, 11, 3.1, NULL, 14736, NULL)
#elif defined __ia64__
CheckTypeSize(xmlHashCopier,8, 14737, 3, 3.1, NULL, 14736, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlHashCopier,4, 14737, 6, 3.1, NULL, 14736, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlHashCopier,8, 14737, 9, 3.1, NULL, 14736, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlHashCopier,4, 14737, 10, 3.1, NULL, 14736, NULL)
#elif defined __s390x__
CheckTypeSize(xmlHashCopier,8, 14737, 12, 3.1, NULL, 14736, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14736,NULL);\n",architecture,14737,0);
Msg("Find size of xmlHashCopier (14737)\n");
#endif

#if defined __i386__
CheckTypeSize(xmlHashScanner,4, 14739, 2, 3.1, NULL, 14738, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlHashScanner,8, 14739, 11, 3.1, NULL, 14738, NULL)
#elif defined __ia64__
CheckTypeSize(xmlHashScanner,8, 14739, 3, 3.1, NULL, 14738, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlHashScanner,4, 14739, 6, 3.1, NULL, 14738, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlHashScanner,8, 14739, 9, 3.1, NULL, 14738, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlHashScanner,4, 14739, 10, 3.1, NULL, 14738, NULL)
#elif defined __s390x__
CheckTypeSize(xmlHashScanner,8, 14739, 12, 3.1, NULL, 14738, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14738, NULL);\n",architecture,14739,0);
Msg("Find size of xmlHashScanner (14739)\n");
#endif

extern xmlHashTablePtr xmlHashCreate_db(int);
CheckInterfacedef(xmlHashCreate,xmlHashCreate_db);
extern xmlHashTablePtr xmlHashCreateDict_db(int, xmlDictPtr);
CheckInterfacedef(xmlHashCreateDict,xmlHashCreateDict_db);
extern int xmlHashRemoveEntry_db(xmlHashTablePtr, const xmlChar *, xmlHashDeallocator);
CheckInterfacedef(xmlHashRemoveEntry,xmlHashRemoveEntry_db);
extern void xmlHashScanFull3_db(xmlHashTablePtr, const xmlChar *, const xmlChar *, const xmlChar *, xmlHashScannerFull, void *);
CheckInterfacedef(xmlHashScanFull3,xmlHashScanFull3_db);
extern void * xmlHashQLookup3_db(xmlHashTablePtr, const xmlChar *, const xmlChar *, const xmlChar *, const xmlChar *, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlHashQLookup3,xmlHashQLookup3_db);
extern void * xmlHashQLookup_db(xmlHashTablePtr, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlHashQLookup,xmlHashQLookup_db);
extern void * xmlHashLookup3_db(xmlHashTablePtr, const xmlChar *, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlHashLookup3,xmlHashLookup3_db);
extern xmlHashTablePtr xmlHashCopy_db(xmlHashTablePtr, xmlHashCopier);
CheckInterfacedef(xmlHashCopy,xmlHashCopy_db);
extern int xmlHashAddEntry3_db(xmlHashTablePtr, const xmlChar *, const xmlChar *, const xmlChar *, void *);
CheckInterfacedef(xmlHashAddEntry3,xmlHashAddEntry3_db);
extern void xmlHashFree_db(xmlHashTablePtr, xmlHashDeallocator);
CheckInterfacedef(xmlHashFree,xmlHashFree_db);
extern void xmlHashScan3_db(xmlHashTablePtr, const xmlChar *, const xmlChar *, const xmlChar *, xmlHashScanner, void *);
CheckInterfacedef(xmlHashScan3,xmlHashScan3_db);
extern int xmlHashRemoveEntry2_db(xmlHashTablePtr, const xmlChar *, const xmlChar *, xmlHashDeallocator);
CheckInterfacedef(xmlHashRemoveEntry2,xmlHashRemoveEntry2_db);
extern void * xmlHashLookup_db(xmlHashTablePtr, const xmlChar *);
CheckInterfacedef(xmlHashLookup,xmlHashLookup_db);
extern int xmlHashUpdateEntry3_db(xmlHashTablePtr, const xmlChar *, const xmlChar *, const xmlChar *, void *, xmlHashDeallocator);
CheckInterfacedef(xmlHashUpdateEntry3,xmlHashUpdateEntry3_db);
extern int xmlHashRemoveEntry3_db(xmlHashTablePtr, const xmlChar *, const xmlChar *, const xmlChar *, xmlHashDeallocator);
CheckInterfacedef(xmlHashRemoveEntry3,xmlHashRemoveEntry3_db);
extern int xmlHashSize_db(xmlHashTablePtr);
CheckInterfacedef(xmlHashSize,xmlHashSize_db);
extern void xmlHashScan_db(xmlHashTablePtr, xmlHashScanner, void *);
CheckInterfacedef(xmlHashScan,xmlHashScan_db);
extern void xmlHashScanFull_db(xmlHashTablePtr, xmlHashScannerFull, void *);
CheckInterfacedef(xmlHashScanFull,xmlHashScanFull_db);
extern int xmlHashUpdateEntry_db(xmlHashTablePtr, const xmlChar *, void *, xmlHashDeallocator);
CheckInterfacedef(xmlHashUpdateEntry,xmlHashUpdateEntry_db);
extern int xmlHashAddEntry2_db(xmlHashTablePtr, const xmlChar *, const xmlChar *, void *);
CheckInterfacedef(xmlHashAddEntry2,xmlHashAddEntry2_db);
extern void * xmlHashQLookup2_db(xmlHashTablePtr, const xmlChar *, const xmlChar *, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlHashQLookup2,xmlHashQLookup2_db);
extern int xmlHashUpdateEntry2_db(xmlHashTablePtr, const xmlChar *, const xmlChar *, void *, xmlHashDeallocator);
CheckInterfacedef(xmlHashUpdateEntry2,xmlHashUpdateEntry2_db);
extern void * xmlHashLookup2_db(xmlHashTablePtr, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlHashLookup2,xmlHashLookup2_db);
extern int xmlHashAddEntry_db(xmlHashTablePtr, const xmlChar *, void *);
CheckInterfacedef(xmlHashAddEntry,xmlHashAddEntry_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in libxml2/libxml/hash.h\n\n",pcnt,cnt);
return cnt;
#endif

}
