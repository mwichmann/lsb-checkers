/*
 * Test of libxml2/libxml/xmlschemastypes.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
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
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in libxml2/libxml/xmlschemastypes.h\n");
#endif

printf("Checking data structures in libxml2/libxml/xmlschemastypes.h\n");
#if defined __s390x__
CheckTypeSize(xmlSchemaTypePtr,8, 15050, 12, 3.1, NULL, 15049, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlSchemaTypePtr,8, 15050, 11, 3.1, NULL, 15049, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlSchemaTypePtr,4, 15050, 10, 3.1, NULL, 15049, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlSchemaTypePtr,8, 15050, 9, 3.1, NULL, 15049, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlSchemaTypePtr,4, 15050, 6, 3.1, NULL, 15049, NULL)
#elif defined __ia64__
CheckTypeSize(xmlSchemaTypePtr,8, 15050, 3, 3.1, NULL, 15049, NULL)
#elif defined __i386__
CheckTypeSize(xmlSchemaTypePtr,4, 15050, 2, 3.1, NULL, 15049, NULL)
#else
Msg("Find size of xmlSchemaTypePtr (15050)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,15049,NULL);\n",architecture,15050,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlSchemaValPtr,8, 15054, 12, 3.1, NULL, 15053, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlSchemaValPtr,8, 15054, 11, 3.1, NULL, 15053, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlSchemaValPtr,4, 15054, 10, 3.1, NULL, 15053, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlSchemaValPtr,8, 15054, 9, 3.1, NULL, 15053, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlSchemaValPtr,4, 15054, 6, 3.1, NULL, 15053, NULL)
#elif defined __ia64__
CheckTypeSize(xmlSchemaValPtr,8, 15054, 3, 3.1, NULL, 15053, NULL)
#elif defined __i386__
CheckTypeSize(xmlSchemaValPtr,4, 15054, 2, 3.1, NULL, 15053, NULL)
#else
Msg("Find size of xmlSchemaValPtr (15054)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,15053,NULL);\n",architecture,15054,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlSchemaValType,4, 15057, 12, 3.1, NULL, 15056, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlSchemaValType,4, 15057, 11, 3.1, NULL, 15056, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlSchemaValType,4, 15057, 10, 3.1, NULL, 15056, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlSchemaValType,4, 15057, 9, 3.1, NULL, 15056, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlSchemaValType,4, 15057, 6, 3.1, NULL, 15056, NULL)
#elif defined __ia64__
CheckTypeSize(xmlSchemaValType,4, 15057, 3, 3.1, NULL, 15056, NULL)
#elif defined __i386__
CheckTypeSize(xmlSchemaValType,4, 15057, 2, 3.1, NULL, 15056, NULL)
#else
Msg("Find size of xmlSchemaValType (15057)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,15056, NULL);\n",architecture,15057,0);
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
