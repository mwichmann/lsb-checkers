/*
 * Test of libxml2/libxml/xmlschemastypes.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#ifndef LSBCC_MODE
#include <libxml/schemasInternals.h>
#endif

struct _xmlSchemaVal {} ;
#ifdef LSBCC_MODE
struct _xmlSchemaType {} ;
#endif
#include "libxml2/libxml/xmlschemastypes.h"



#ifdef TET_TEST
void libxml2_libxml_xmlschemastypes_h()
{
#else
int libxml2_libxml_xmlschemastypes_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in libxml2/libxml/xmlschemastypes.h\n");
#endif

printf("Checking data structures in libxml2/libxml/xmlschemastypes.h\n");
#if defined __i386__
CheckTypeSize(xmlSchemaType,116, 15048, 2, 3.1, NULL, 15047, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlSchemaType,216, 15048, 11, 3.1, NULL, 15047, NULL)
#elif defined __ia64__
CheckTypeSize(xmlSchemaType,216, 15048, 3, 3.1, NULL, 15047, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlSchemaType,116, 15048, 6, 3.1, NULL, 15047, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlSchemaType,216, 15048, 9, 3.1, NULL, 15047, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlSchemaType,116, 15048, 10, 3.1, NULL, 15047, NULL)
#elif defined __s390x__
CheckTypeSize(xmlSchemaType,216, 15048, 12, 3.1, NULL, 15047, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,15047,NULL);\n",architecture,15048,0);
Msg("Find size of xmlSchemaType (15048)\n");
#endif

#if defined __i386__
CheckTypeSize(xmlSchemaTypePtr,4, 15050, 2, 3.1, NULL, 15049, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlSchemaTypePtr,8, 15050, 11, 3.1, NULL, 15049, NULL)
#elif defined __ia64__
CheckTypeSize(xmlSchemaTypePtr,8, 15050, 3, 3.1, NULL, 15049, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlSchemaTypePtr,4, 15050, 6, 3.1, NULL, 15049, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlSchemaTypePtr,8, 15050, 9, 3.1, NULL, 15049, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlSchemaTypePtr,4, 15050, 10, 3.1, NULL, 15049, NULL)
#elif defined __s390x__
CheckTypeSize(xmlSchemaTypePtr,8, 15050, 12, 3.1, NULL, 15049, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,15049,NULL);\n",architecture,15050,0);
Msg("Find size of xmlSchemaTypePtr (15050)\n");
#endif

#if defined __i386__
CheckTypeSize(xmlSchemaVal,0, 15052, 2, 3.1, NULL, 15051, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlSchemaVal,0, 15052, 11, 3.1, NULL, 15051, NULL)
#elif defined __ia64__
CheckTypeSize(xmlSchemaVal,0, 15052, 3, 3.1, NULL, 15051, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlSchemaVal,0, 15052, 6, 3.1, NULL, 15051, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlSchemaVal,0, 15052, 9, 3.1, NULL, 15051, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlSchemaVal,0, 15052, 10, 3.1, NULL, 15051, NULL)
#elif defined __s390x__
CheckTypeSize(xmlSchemaVal,0, 15052, 12, 3.1, NULL, 15051, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,15051,NULL);\n",architecture,15052,0);
Msg("Find size of xmlSchemaVal (15052)\n");
#endif

#if defined __i386__
CheckTypeSize(xmlSchemaValPtr,4, 15054, 2, 3.1, NULL, 15053, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlSchemaValPtr,8, 15054, 11, 3.1, NULL, 15053, NULL)
#elif defined __ia64__
CheckTypeSize(xmlSchemaValPtr,8, 15054, 3, 3.1, NULL, 15053, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlSchemaValPtr,4, 15054, 6, 3.1, NULL, 15053, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlSchemaValPtr,8, 15054, 9, 3.1, NULL, 15053, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlSchemaValPtr,4, 15054, 10, 3.1, NULL, 15053, NULL)
#elif defined __s390x__
CheckTypeSize(xmlSchemaValPtr,8, 15054, 12, 3.1, NULL, 15053, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,15053,NULL);\n",architecture,15054,0);
Msg("Find size of xmlSchemaValPtr (15054)\n");
#endif

#if defined __i386__
CheckTypeSize(xmlSchemaValType,4, 15057, 2, 3.1, NULL, 15056, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlSchemaValType,4, 15057, 11, 3.1, NULL, 15056, NULL)
#elif defined __ia64__
CheckTypeSize(xmlSchemaValType,4, 15057, 3, 3.1, NULL, 15056, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlSchemaValType,4, 15057, 6, 3.1, NULL, 15056, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlSchemaValType,4, 15057, 9, 3.1, NULL, 15056, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlSchemaValType,4, 15057, 10, 3.1, NULL, 15056, NULL)
#elif defined __s390x__
CheckTypeSize(xmlSchemaValType,4, 15057, 12, 3.1, NULL, 15056, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,15056, NULL);\n",architecture,15057,0);
Msg("Find size of xmlSchemaValType (15057)\n");
#endif

extern int xmlSchemaValPredefTypeNode_db(xmlSchemaTypePtr, const xmlChar *, xmlSchemaValPtr *, xmlNodePtr);
CheckInterfacedef(xmlSchemaValPredefTypeNode,xmlSchemaValPredefTypeNode_db);
extern xmlChar * xmlSchemaCollapseString_db(const xmlChar *);
CheckInterfacedef(xmlSchemaCollapseString,xmlSchemaCollapseString_db);
extern void xmlSchemaCleanupTypes_db(void);
CheckInterfacedef(xmlSchemaCleanupTypes,xmlSchemaCleanupTypes_db);
extern xmlSchemaValType xmlSchemaGetValType_db(xmlSchemaValPtr);
CheckInterfacedef(xmlSchemaGetValType,xmlSchemaGetValType_db);
extern void xmlSchemaFreeValue_db(xmlSchemaValPtr);
CheckInterfacedef(xmlSchemaFreeValue,xmlSchemaFreeValue_db);
extern void xmlSchemaInitTypes_db(void);
CheckInterfacedef(xmlSchemaInitTypes,xmlSchemaInitTypes_db);
extern int xmlSchemaGetCanonValue_db(xmlSchemaValPtr, const xmlChar * *);
CheckInterfacedef(xmlSchemaGetCanonValue,xmlSchemaGetCanonValue_db);
extern int xmlSchemaCompareValues_db(xmlSchemaValPtr, xmlSchemaValPtr);
CheckInterfacedef(xmlSchemaCompareValues,xmlSchemaCompareValues_db);
extern xmlSchemaTypePtr xmlSchemaGetBuiltInType_db(xmlSchemaValType);
CheckInterfacedef(xmlSchemaGetBuiltInType,xmlSchemaGetBuiltInType_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in libxml2/libxml/xmlschemastypes.h\n\n",pcnt,cnt);
return cnt;
#endif

}
