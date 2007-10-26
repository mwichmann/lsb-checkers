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
#if defined __i386__
CheckTypeSize(xmlEntityType,4, 14718, 2, 3.1, NULL, 14717, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlEntityType,4, 14718, 11, 3.1, NULL, 14717, NULL)
#elif defined __ia64__
CheckTypeSize(xmlEntityType,4, 14718, 3, 3.1, NULL, 14717, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlEntityType,4, 14718, 6, 3.1, NULL, 14717, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlEntityType,4, 14718, 9, 3.1, NULL, 14717, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlEntityType,4, 14718, 10, 3.1, NULL, 14717, NULL)
#elif defined __s390x__
CheckTypeSize(xmlEntityType,4, 14718, 12, 3.1, NULL, 14717, NULL)
#else
Msg("Find size of xmlEntityType (14718)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14717,NULL);\n",architecture,14718,0);
#endif

#if defined __i386__
CheckTypeSize(xmlEntity,72, 14720, 2, 3.1, NULL, 14716, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlEntity,136, 14720, 11, 3.1, NULL, 14716, NULL)
#elif defined __ia64__
CheckTypeSize(xmlEntity,136, 14720, 3, 3.1, NULL, 14716, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlEntity,72, 14720, 6, 3.1, NULL, 14716, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlEntity,136, 14720, 9, 3.1, NULL, 14716, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlEntity,72, 14720, 10, 3.1, NULL, 14716, NULL)
#elif defined __s390x__
CheckTypeSize(xmlEntity,136, 14720, 12, 3.1, NULL, 14716, NULL)
#else
Msg("Find size of xmlEntity (14720)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14716,NULL);\n",architecture,14720,0);
#endif

#if defined __i386__
CheckTypeSize(xmlEntityPtr,4, 14722, 2, 3.1, NULL, 14721, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlEntityPtr,8, 14722, 11, 3.1, NULL, 14721, NULL)
#elif defined __ia64__
CheckTypeSize(xmlEntityPtr,8, 14722, 3, 3.1, NULL, 14721, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlEntityPtr,4, 14722, 6, 3.1, NULL, 14721, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlEntityPtr,8, 14722, 9, 3.1, NULL, 14721, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlEntityPtr,4, 14722, 10, 3.1, NULL, 14721, NULL)
#elif defined __s390x__
CheckTypeSize(xmlEntityPtr,8, 14722, 12, 3.1, NULL, 14721, NULL)
#else
Msg("Find size of xmlEntityPtr (14722)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14721,NULL);\n",architecture,14722,0);
#endif

#if defined __i386__
CheckTypeSize(xmlEntitiesTablePtr,4, 14726, 2, 3.1, NULL, 14725, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlEntitiesTablePtr,8, 14726, 11, 3.1, NULL, 14725, NULL)
#elif defined __ia64__
CheckTypeSize(xmlEntitiesTablePtr,8, 14726, 3, 3.1, NULL, 14725, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlEntitiesTablePtr,4, 14726, 6, 3.1, NULL, 14725, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlEntitiesTablePtr,8, 14726, 9, 3.1, NULL, 14725, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlEntitiesTablePtr,4, 14726, 10, 3.1, NULL, 14725, NULL)
#elif defined __s390x__
CheckTypeSize(xmlEntitiesTablePtr,8, 14726, 12, 3.1, NULL, 14725, NULL)
#else
Msg("Find size of xmlEntitiesTablePtr (14726)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14725, NULL);\n",architecture,14726,0);
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
