/*
 * Test of libxml2/libxml/entities.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include <libxml/xmlregexp.h>
struct _xmlHashTable {} ;
#include "libxml2/libxml/entities.h"



#ifdef TET_TEST
void libxml2_libxml_entities_h()
{
#else
int libxml2_libxml_entities_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in libxml2/libxml/entities.h\n");
#endif

printf("Checking data structures in libxml2/libxml/entities.h\n");
#if __i386__
CheckTypeSize(xmlEntityType,4, 14718, 2)
#elif __x86_64__
CheckTypeSize(xmlEntityType,4, 14718, 11)
#elif __ia64__
CheckTypeSize(xmlEntityType,4, 14718, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlEntityType,4, 14718, 6)
#elif __powerpc64__
CheckTypeSize(xmlEntityType,4, 14718, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlEntityType,4, 14718, 10)
#elif __s390x__
CheckTypeSize(xmlEntityType,4, 14718, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14718,0);
Msg("Find size of xmlEntityType (14718)\n");
#endif

#if __i386__
CheckTypeSize(xmlEntity,72, 14720, 2)
#elif __x86_64__
CheckTypeSize(xmlEntity,136, 14720, 11)
#elif __ia64__
CheckTypeSize(xmlEntity,136, 14720, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlEntity,72, 14720, 6)
#elif __powerpc64__
CheckTypeSize(xmlEntity,136, 14720, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlEntity,72, 14720, 10)
#elif __s390x__
CheckTypeSize(xmlEntity,136, 14720, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14720,0);
Msg("Find size of xmlEntity (14720)\n");
#endif

#if __i386__
CheckTypeSize(xmlEntityPtr,4, 14722, 2)
#elif __x86_64__
CheckTypeSize(xmlEntityPtr,8, 14722, 11)
#elif __ia64__
CheckTypeSize(xmlEntityPtr,8, 14722, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlEntityPtr,4, 14722, 6)
#elif __powerpc64__
CheckTypeSize(xmlEntityPtr,8, 14722, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlEntityPtr,4, 14722, 10)
#elif __s390x__
CheckTypeSize(xmlEntityPtr,8, 14722, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14722,0);
Msg("Find size of xmlEntityPtr (14722)\n");
#endif

#if __i386__
CheckTypeSize(xmlEntitiesTable,0, 14724, 2)
#elif __x86_64__
CheckTypeSize(xmlEntitiesTable,0, 14724, 11)
#elif __ia64__
CheckTypeSize(xmlEntitiesTable,0, 14724, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlEntitiesTable,0, 14724, 6)
#elif __powerpc64__
CheckTypeSize(xmlEntitiesTable,0, 14724, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlEntitiesTable,0, 14724, 10)
#elif __s390x__
CheckTypeSize(xmlEntitiesTable,0, 14724, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14724,0);
Msg("Find size of xmlEntitiesTable (14724)\n");
#endif

#if __i386__
CheckTypeSize(xmlEntitiesTablePtr,4, 14726, 2)
#elif __x86_64__
CheckTypeSize(xmlEntitiesTablePtr,8, 14726, 11)
#elif __ia64__
CheckTypeSize(xmlEntitiesTablePtr,8, 14726, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlEntitiesTablePtr,4, 14726, 6)
#elif __powerpc64__
CheckTypeSize(xmlEntitiesTablePtr,8, 14726, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlEntitiesTablePtr,4, 14726, 10)
#elif __s390x__
CheckTypeSize(xmlEntitiesTablePtr,8, 14726, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14726,0);
Msg("Find size of xmlEntitiesTablePtr (14726)\n");
#endif

extern xmlEntityPtr xmlGetParameterEntity_db(xmlDocPtr, const xmlChar *);
CheckInterfacedef(xmlGetParameterEntity,xmlGetParameterEntity_db);
extern xmlChar * xmlEncodeSpecialChars_db(xmlDocPtr, const xmlChar *);
CheckInterfacedef(xmlEncodeSpecialChars,xmlEncodeSpecialChars_db);
extern xmlEntityPtr xmlAddDtdEntity_db(xmlDocPtr, const xmlChar *, int, const xmlChar *, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlAddDtdEntity,xmlAddDtdEntity_db);
extern xmlEntitiesTablePtr xmlCopyEntitiesTable_db(xmlEntitiesTablePtr);
CheckInterfacedef(xmlCopyEntitiesTable,xmlCopyEntitiesTable_db);
extern xmlEntityPtr xmlGetDtdEntity_db(xmlDocPtr, const xmlChar *);
CheckInterfacedef(xmlGetDtdEntity,xmlGetDtdEntity_db);
extern xmlEntityPtr xmlAddDocEntity_db(xmlDocPtr, const xmlChar *, int, const xmlChar *, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlAddDocEntity,xmlAddDocEntity_db);
extern xmlEntityPtr xmlGetPredefinedEntity_db(const xmlChar *);
CheckInterfacedef(xmlGetPredefinedEntity,xmlGetPredefinedEntity_db);
extern void xmlDumpEntitiesTable_db(xmlBufferPtr, xmlEntitiesTablePtr);
CheckInterfacedef(xmlDumpEntitiesTable,xmlDumpEntitiesTable_db);
extern xmlChar * xmlEncodeEntitiesReentrant_db(xmlDocPtr, const xmlChar *);
CheckInterfacedef(xmlEncodeEntitiesReentrant,xmlEncodeEntitiesReentrant_db);
extern void xmlFreeEntitiesTable_db(xmlEntitiesTablePtr);
CheckInterfacedef(xmlFreeEntitiesTable,xmlFreeEntitiesTable_db);
extern void xmlDumpEntityDecl_db(xmlBufferPtr, xmlEntityPtr);
CheckInterfacedef(xmlDumpEntityDecl,xmlDumpEntityDecl_db);
extern xmlEntityPtr xmlGetDocEntity_db(xmlDocPtr, const xmlChar *);
CheckInterfacedef(xmlGetDocEntity,xmlGetDocEntity_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in libxml2/libxml/entities.h\n\n",pcnt,cnt);
return cnt;
#endif

}
