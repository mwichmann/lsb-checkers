/*
 * Test of libxml2/libxml/xmlschemastypes.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include <libxml/schemasInternals.h>

struct _xmlSchemaVal {} ;
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
#if __i386__
CheckTypeSize(xmlSchemaType,116, 15048, 2)
#elif __x86_64__
CheckTypeSize(xmlSchemaType,216, 15048, 11)
#elif __ia64__
CheckTypeSize(xmlSchemaType,216, 15048, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlSchemaType,116, 15048, 6)
#elif __powerpc64__
CheckTypeSize(xmlSchemaType,216, 15048, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlSchemaType,116, 15048, 10)
#elif __s390x__
CheckTypeSize(xmlSchemaType,216, 15048, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15048,0);
Msg("Find size of xmlSchemaType (15048)\n");
#endif

#if __i386__
CheckTypeSize(xmlSchemaType *,4, 15049, 2)
#elif __x86_64__
CheckTypeSize(xmlSchemaType *,8, 15049, 11)
#elif __ia64__
CheckTypeSize(xmlSchemaType *,8, 15049, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlSchemaType *,4, 15049, 6)
#elif __powerpc64__
CheckTypeSize(xmlSchemaType *,8, 15049, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlSchemaType *,4, 15049, 10)
#elif __s390x__
CheckTypeSize(xmlSchemaType *,8, 15049, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15049,0);
Msg("Find size of xmlSchemaType * (15049)\n");
#endif

#if __i386__
CheckTypeSize(xmlSchemaTypePtr,4, 15050, 2)
#elif __x86_64__
CheckTypeSize(xmlSchemaTypePtr,8, 15050, 11)
#elif __ia64__
CheckTypeSize(xmlSchemaTypePtr,8, 15050, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlSchemaTypePtr,4, 15050, 6)
#elif __powerpc64__
CheckTypeSize(xmlSchemaTypePtr,8, 15050, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlSchemaTypePtr,4, 15050, 10)
#elif __s390x__
CheckTypeSize(xmlSchemaTypePtr,8, 15050, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15050,0);
Msg("Find size of xmlSchemaTypePtr (15050)\n");
#endif

#if __i386__
CheckTypeSize(xmlSchemaVal,0, 15052, 2)
#elif __x86_64__
CheckTypeSize(xmlSchemaVal,0, 15052, 11)
#elif __ia64__
CheckTypeSize(xmlSchemaVal,0, 15052, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15052,0);
Msg("Find size of xmlSchemaVal (15052)\n");
#endif

#if __i386__
CheckTypeSize(xmlSchemaVal *,4, 15053, 2)
#elif __x86_64__
CheckTypeSize(xmlSchemaVal *,8, 15053, 11)
#elif __ia64__
CheckTypeSize(xmlSchemaVal *,8, 15053, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlSchemaVal *,4, 15053, 6)
#elif __powerpc64__
CheckTypeSize(xmlSchemaVal *,8, 15053, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlSchemaVal *,4, 15053, 10)
#elif __s390x__
CheckTypeSize(xmlSchemaVal *,8, 15053, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15053,0);
Msg("Find size of xmlSchemaVal * (15053)\n");
#endif

#if __i386__
CheckTypeSize(xmlSchemaValPtr,4, 15054, 2)
#elif __x86_64__
CheckTypeSize(xmlSchemaValPtr,8, 15054, 11)
#elif __ia64__
CheckTypeSize(xmlSchemaValPtr,8, 15054, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlSchemaValPtr,4, 15054, 6)
#elif __powerpc64__
CheckTypeSize(xmlSchemaValPtr,8, 15054, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlSchemaValPtr,4, 15054, 10)
#elif __s390x__
CheckTypeSize(xmlSchemaValPtr,8, 15054, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15054,0);
Msg("Find size of xmlSchemaValPtr (15054)\n");
#endif

#if __i386__
CheckTypeSize(xmlSchemaValPtr *,4, 15055, 2)
#elif __x86_64__
CheckTypeSize(xmlSchemaValPtr *,8, 15055, 11)
#elif __ia64__
CheckTypeSize(xmlSchemaValPtr *,8, 15055, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlSchemaValPtr *,4, 15055, 6)
#elif __powerpc64__
CheckTypeSize(xmlSchemaValPtr *,8, 15055, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlSchemaValPtr *,4, 15055, 10)
#elif __s390x__
CheckTypeSize(xmlSchemaValPtr *,8, 15055, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15055,0);
Msg("Find size of xmlSchemaValPtr * (15055)\n");
#endif

#if __i386__
CheckEnum("XML_SCHEMAS_UNKNOWN",XML_SCHEMAS_UNKNOWN,0);
CheckEnum("XML_SCHEMAS_STRING",XML_SCHEMAS_STRING,1);
CheckEnum("XML_SCHEMAS_NORMSTRING",XML_SCHEMAS_NORMSTRING,2);
CheckEnum("XML_SCHEMAS_DECIMAL",XML_SCHEMAS_DECIMAL,3);
CheckEnum("XML_SCHEMAS_TIME",XML_SCHEMAS_TIME,4);
CheckEnum("XML_SCHEMAS_GDAY",XML_SCHEMAS_GDAY,5);
CheckEnum("XML_SCHEMAS_GMONTH",XML_SCHEMAS_GMONTH,6);
CheckEnum("XML_SCHEMAS_GMONTHDAY",XML_SCHEMAS_GMONTHDAY,7);
CheckEnum("XML_SCHEMAS_GYEAR",XML_SCHEMAS_GYEAR,8);
CheckEnum("XML_SCHEMAS_GYEARMONTH",XML_SCHEMAS_GYEARMONTH,9);
CheckEnum("XML_SCHEMAS_DATE",XML_SCHEMAS_DATE,10);
CheckEnum("XML_SCHEMAS_DATETIME",XML_SCHEMAS_DATETIME,11);
CheckEnum("XML_SCHEMAS_DURATION",XML_SCHEMAS_DURATION,12);
CheckEnum("XML_SCHEMAS_FLOAT",XML_SCHEMAS_FLOAT,13);
CheckEnum("XML_SCHEMAS_DOUBLE",XML_SCHEMAS_DOUBLE,14);
CheckEnum("XML_SCHEMAS_BOOLEAN",XML_SCHEMAS_BOOLEAN,15);
CheckEnum("XML_SCHEMAS_TOKEN",XML_SCHEMAS_TOKEN,16);
CheckEnum("XML_SCHEMAS_LANGUAGE",XML_SCHEMAS_LANGUAGE,17);
CheckEnum("XML_SCHEMAS_NMTOKEN",XML_SCHEMAS_NMTOKEN,18);
CheckEnum("XML_SCHEMAS_NMTOKENS",XML_SCHEMAS_NMTOKENS,19);
CheckEnum("XML_SCHEMAS_NAME",XML_SCHEMAS_NAME,20);
CheckEnum("XML_SCHEMAS_QNAME",XML_SCHEMAS_QNAME,21);
CheckEnum("XML_SCHEMAS_NCNAME",XML_SCHEMAS_NCNAME,22);
CheckEnum("XML_SCHEMAS_ID",XML_SCHEMAS_ID,23);
CheckEnum("XML_SCHEMAS_IDREF",XML_SCHEMAS_IDREF,24);
CheckEnum("XML_SCHEMAS_IDREFS",XML_SCHEMAS_IDREFS,25);
CheckEnum("XML_SCHEMAS_ENTITY",XML_SCHEMAS_ENTITY,26);
CheckEnum("XML_SCHEMAS_ENTITIES",XML_SCHEMAS_ENTITIES,27);
CheckEnum("XML_SCHEMAS_NOTATION",XML_SCHEMAS_NOTATION,28);
CheckEnum("XML_SCHEMAS_ANYURI",XML_SCHEMAS_ANYURI,29);
CheckEnum("XML_SCHEMAS_INTEGER",XML_SCHEMAS_INTEGER,30);
CheckEnum("XML_SCHEMAS_NPINTEGER",XML_SCHEMAS_NPINTEGER,31);
CheckEnum("XML_SCHEMAS_NINTEGER",XML_SCHEMAS_NINTEGER,32);
CheckEnum("XML_SCHEMAS_NNINTEGER",XML_SCHEMAS_NNINTEGER,33);
CheckEnum("XML_SCHEMAS_PINTEGER",XML_SCHEMAS_PINTEGER,34);
CheckEnum("XML_SCHEMAS_INT",XML_SCHEMAS_INT,35);
CheckEnum("XML_SCHEMAS_UINT",XML_SCHEMAS_UINT,36);
CheckEnum("XML_SCHEMAS_LONG",XML_SCHEMAS_LONG,37);
CheckEnum("XML_SCHEMAS_ULONG",XML_SCHEMAS_ULONG,38);
CheckEnum("XML_SCHEMAS_SHORT",XML_SCHEMAS_SHORT,39);
CheckEnum("XML_SCHEMAS_USHORT",XML_SCHEMAS_USHORT,40);
CheckEnum("XML_SCHEMAS_BYTE",XML_SCHEMAS_BYTE,41);
CheckEnum("XML_SCHEMAS_UBYTE",XML_SCHEMAS_UBYTE,42);
CheckEnum("XML_SCHEMAS_HEXBINARY",XML_SCHEMAS_HEXBINARY,43);
CheckEnum("XML_SCHEMAS_BASE64BINARY",XML_SCHEMAS_BASE64BINARY,44);
CheckEnum("XML_SCHEMAS_ANYTYPE",XML_SCHEMAS_ANYTYPE,45);
CheckEnum("XML_SCHEMAS_ANYSIMPLETYPE",XML_SCHEMAS_ANYSIMPLETYPE,46);
#elif __x86_64__
CheckEnum("XML_SCHEMAS_UNKNOWN",XML_SCHEMAS_UNKNOWN,0);
CheckEnum("XML_SCHEMAS_STRING",XML_SCHEMAS_STRING,1);
CheckEnum("XML_SCHEMAS_NORMSTRING",XML_SCHEMAS_NORMSTRING,2);
CheckEnum("XML_SCHEMAS_DECIMAL",XML_SCHEMAS_DECIMAL,3);
CheckEnum("XML_SCHEMAS_TIME",XML_SCHEMAS_TIME,4);
CheckEnum("XML_SCHEMAS_GDAY",XML_SCHEMAS_GDAY,5);
CheckEnum("XML_SCHEMAS_GMONTH",XML_SCHEMAS_GMONTH,6);
CheckEnum("XML_SCHEMAS_GMONTHDAY",XML_SCHEMAS_GMONTHDAY,7);
CheckEnum("XML_SCHEMAS_GYEAR",XML_SCHEMAS_GYEAR,8);
CheckEnum("XML_SCHEMAS_GYEARMONTH",XML_SCHEMAS_GYEARMONTH,9);
CheckEnum("XML_SCHEMAS_DATE",XML_SCHEMAS_DATE,10);
CheckEnum("XML_SCHEMAS_DATETIME",XML_SCHEMAS_DATETIME,11);
CheckEnum("XML_SCHEMAS_DURATION",XML_SCHEMAS_DURATION,12);
CheckEnum("XML_SCHEMAS_FLOAT",XML_SCHEMAS_FLOAT,13);
CheckEnum("XML_SCHEMAS_DOUBLE",XML_SCHEMAS_DOUBLE,14);
CheckEnum("XML_SCHEMAS_BOOLEAN",XML_SCHEMAS_BOOLEAN,15);
CheckEnum("XML_SCHEMAS_TOKEN",XML_SCHEMAS_TOKEN,16);
CheckEnum("XML_SCHEMAS_LANGUAGE",XML_SCHEMAS_LANGUAGE,17);
CheckEnum("XML_SCHEMAS_NMTOKEN",XML_SCHEMAS_NMTOKEN,18);
CheckEnum("XML_SCHEMAS_NMTOKENS",XML_SCHEMAS_NMTOKENS,19);
CheckEnum("XML_SCHEMAS_NAME",XML_SCHEMAS_NAME,20);
CheckEnum("XML_SCHEMAS_QNAME",XML_SCHEMAS_QNAME,21);
CheckEnum("XML_SCHEMAS_NCNAME",XML_SCHEMAS_NCNAME,22);
CheckEnum("XML_SCHEMAS_ID",XML_SCHEMAS_ID,23);
CheckEnum("XML_SCHEMAS_IDREF",XML_SCHEMAS_IDREF,24);
CheckEnum("XML_SCHEMAS_IDREFS",XML_SCHEMAS_IDREFS,25);
CheckEnum("XML_SCHEMAS_ENTITY",XML_SCHEMAS_ENTITY,26);
CheckEnum("XML_SCHEMAS_ENTITIES",XML_SCHEMAS_ENTITIES,27);
CheckEnum("XML_SCHEMAS_NOTATION",XML_SCHEMAS_NOTATION,28);
CheckEnum("XML_SCHEMAS_ANYURI",XML_SCHEMAS_ANYURI,29);
CheckEnum("XML_SCHEMAS_INTEGER",XML_SCHEMAS_INTEGER,30);
CheckEnum("XML_SCHEMAS_NPINTEGER",XML_SCHEMAS_NPINTEGER,31);
CheckEnum("XML_SCHEMAS_NINTEGER",XML_SCHEMAS_NINTEGER,32);
CheckEnum("XML_SCHEMAS_NNINTEGER",XML_SCHEMAS_NNINTEGER,33);
CheckEnum("XML_SCHEMAS_PINTEGER",XML_SCHEMAS_PINTEGER,34);
CheckEnum("XML_SCHEMAS_INT",XML_SCHEMAS_INT,35);
CheckEnum("XML_SCHEMAS_UINT",XML_SCHEMAS_UINT,36);
CheckEnum("XML_SCHEMAS_LONG",XML_SCHEMAS_LONG,37);
CheckEnum("XML_SCHEMAS_ULONG",XML_SCHEMAS_ULONG,38);
CheckEnum("XML_SCHEMAS_SHORT",XML_SCHEMAS_SHORT,39);
CheckEnum("XML_SCHEMAS_USHORT",XML_SCHEMAS_USHORT,40);
CheckEnum("XML_SCHEMAS_BYTE",XML_SCHEMAS_BYTE,41);
CheckEnum("XML_SCHEMAS_UBYTE",XML_SCHEMAS_UBYTE,42);
CheckEnum("XML_SCHEMAS_HEXBINARY",XML_SCHEMAS_HEXBINARY,43);
CheckEnum("XML_SCHEMAS_BASE64BINARY",XML_SCHEMAS_BASE64BINARY,44);
CheckEnum("XML_SCHEMAS_ANYTYPE",XML_SCHEMAS_ANYTYPE,45);
CheckEnum("XML_SCHEMAS_ANYSIMPLETYPE",XML_SCHEMAS_ANYSIMPLETYPE,46);
#elif __ia64__
CheckEnum("XML_SCHEMAS_UNKNOWN",XML_SCHEMAS_UNKNOWN,0);
CheckEnum("XML_SCHEMAS_STRING",XML_SCHEMAS_STRING,1);
CheckEnum("XML_SCHEMAS_NORMSTRING",XML_SCHEMAS_NORMSTRING,2);
CheckEnum("XML_SCHEMAS_DECIMAL",XML_SCHEMAS_DECIMAL,3);
CheckEnum("XML_SCHEMAS_TIME",XML_SCHEMAS_TIME,4);
CheckEnum("XML_SCHEMAS_GDAY",XML_SCHEMAS_GDAY,5);
CheckEnum("XML_SCHEMAS_GMONTH",XML_SCHEMAS_GMONTH,6);
CheckEnum("XML_SCHEMAS_GMONTHDAY",XML_SCHEMAS_GMONTHDAY,7);
CheckEnum("XML_SCHEMAS_GYEAR",XML_SCHEMAS_GYEAR,8);
CheckEnum("XML_SCHEMAS_GYEARMONTH",XML_SCHEMAS_GYEARMONTH,9);
CheckEnum("XML_SCHEMAS_DATE",XML_SCHEMAS_DATE,10);
CheckEnum("XML_SCHEMAS_DATETIME",XML_SCHEMAS_DATETIME,11);
CheckEnum("XML_SCHEMAS_DURATION",XML_SCHEMAS_DURATION,12);
CheckEnum("XML_SCHEMAS_FLOAT",XML_SCHEMAS_FLOAT,13);
CheckEnum("XML_SCHEMAS_DOUBLE",XML_SCHEMAS_DOUBLE,14);
CheckEnum("XML_SCHEMAS_BOOLEAN",XML_SCHEMAS_BOOLEAN,15);
CheckEnum("XML_SCHEMAS_TOKEN",XML_SCHEMAS_TOKEN,16);
CheckEnum("XML_SCHEMAS_LANGUAGE",XML_SCHEMAS_LANGUAGE,17);
CheckEnum("XML_SCHEMAS_NMTOKEN",XML_SCHEMAS_NMTOKEN,18);
CheckEnum("XML_SCHEMAS_NMTOKENS",XML_SCHEMAS_NMTOKENS,19);
CheckEnum("XML_SCHEMAS_NAME",XML_SCHEMAS_NAME,20);
CheckEnum("XML_SCHEMAS_QNAME",XML_SCHEMAS_QNAME,21);
CheckEnum("XML_SCHEMAS_NCNAME",XML_SCHEMAS_NCNAME,22);
CheckEnum("XML_SCHEMAS_ID",XML_SCHEMAS_ID,23);
CheckEnum("XML_SCHEMAS_IDREF",XML_SCHEMAS_IDREF,24);
CheckEnum("XML_SCHEMAS_IDREFS",XML_SCHEMAS_IDREFS,25);
CheckEnum("XML_SCHEMAS_ENTITY",XML_SCHEMAS_ENTITY,26);
CheckEnum("XML_SCHEMAS_ENTITIES",XML_SCHEMAS_ENTITIES,27);
CheckEnum("XML_SCHEMAS_NOTATION",XML_SCHEMAS_NOTATION,28);
CheckEnum("XML_SCHEMAS_ANYURI",XML_SCHEMAS_ANYURI,29);
CheckEnum("XML_SCHEMAS_INTEGER",XML_SCHEMAS_INTEGER,30);
CheckEnum("XML_SCHEMAS_NPINTEGER",XML_SCHEMAS_NPINTEGER,31);
CheckEnum("XML_SCHEMAS_NINTEGER",XML_SCHEMAS_NINTEGER,32);
CheckEnum("XML_SCHEMAS_NNINTEGER",XML_SCHEMAS_NNINTEGER,33);
CheckEnum("XML_SCHEMAS_PINTEGER",XML_SCHEMAS_PINTEGER,34);
CheckEnum("XML_SCHEMAS_INT",XML_SCHEMAS_INT,35);
CheckEnum("XML_SCHEMAS_UINT",XML_SCHEMAS_UINT,36);
CheckEnum("XML_SCHEMAS_LONG",XML_SCHEMAS_LONG,37);
CheckEnum("XML_SCHEMAS_ULONG",XML_SCHEMAS_ULONG,38);
CheckEnum("XML_SCHEMAS_SHORT",XML_SCHEMAS_SHORT,39);
CheckEnum("XML_SCHEMAS_USHORT",XML_SCHEMAS_USHORT,40);
CheckEnum("XML_SCHEMAS_BYTE",XML_SCHEMAS_BYTE,41);
CheckEnum("XML_SCHEMAS_UBYTE",XML_SCHEMAS_UBYTE,42);
CheckEnum("XML_SCHEMAS_HEXBINARY",XML_SCHEMAS_HEXBINARY,43);
CheckEnum("XML_SCHEMAS_BASE64BINARY",XML_SCHEMAS_BASE64BINARY,44);
CheckEnum("XML_SCHEMAS_ANYTYPE",XML_SCHEMAS_ANYTYPE,45);
CheckEnum("XML_SCHEMAS_ANYSIMPLETYPE",XML_SCHEMAS_ANYSIMPLETYPE,46);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15056,0);
Msg("Find size of anon-libxml2/libxml/xmlschemastypes.h-220 (15056)\n");
#endif

#if __i386__
CheckTypeSize(xmlSchemaValType,4, 15057, 2)
#elif __x86_64__
CheckTypeSize(xmlSchemaValType,4, 15057, 11)
#elif __ia64__
CheckTypeSize(xmlSchemaValType,4, 15057, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlSchemaValType,4, 15057, 6)
#elif __powerpc64__
CheckTypeSize(xmlSchemaValType,4, 15057, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlSchemaValType,4, 15057, 10)
#elif __s390x__
CheckTypeSize(xmlSchemaValType,4, 15057, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15057,0);
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
