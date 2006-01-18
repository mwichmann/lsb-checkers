/*
 * Test of libxml2/libxml/valid.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include <libxml/xmlversion.h>
#include <libxml/xmlregexp.h>
#include <libxml/globals.h>

struct _xmlValidState {};
struct _xmlHashTable {};
#include "libxml2/libxml/valid.h"



#ifdef TET_TEST
void libxml2_libxml_valid_h()
{
#else
int libxml2_libxml_valid_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in libxml2/libxml/valid.h\n");
#endif

printf("Checking data structures in libxml2/libxml/valid.h\n");
#if __i386__
CheckTypeSize(xmlValidCtxt *,4, 14936, 2)
#elif __x86_64__
CheckTypeSize(xmlValidCtxt *,8, 14936, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14936,0);
Msg("Find size of xmlValidCtxt * (14936)\n");
#endif

#if __i386__
CheckTypeSize(xmlValidCtxtPtr,4, 14937, 2)
#elif __x86_64__
CheckTypeSize(xmlValidCtxtPtr,8, 14937, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14937,0);
Msg("Find size of xmlValidCtxtPtr (14937)\n");
#endif

#if __i386__
CheckTypeSize(xmlAttributeTable,0, 14938, 2)
#elif __x86_64__
CheckTypeSize(xmlAttributeTable,0, 14938, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14938,0);
Msg("Find size of xmlAttributeTable (14938)\n");
#endif

#if __i386__
CheckTypeSize(xmlAttributeTable *,4, 14939, 2)
#elif __x86_64__
CheckTypeSize(xmlAttributeTable *,8, 14939, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14939,0);
Msg("Find size of xmlAttributeTable * (14939)\n");
#endif

#if __i386__
CheckTypeSize(xmlAttributeTablePtr,4, 14940, 2)
#elif __x86_64__
CheckTypeSize(xmlAttributeTablePtr,8, 14940, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14940,0);
Msg("Find size of xmlAttributeTablePtr (14940)\n");
#endif

#if __i386__
CheckTypeSize(struct _xmlElement,56, 14941, 2)
CheckMemberSize(struct _xmlElement,type,4,2,49120)
CheckOffset(struct _xmlElement,type,4,2,49120)
CheckMemberSize(struct _xmlElement,name,4,2,49121)
CheckOffset(struct _xmlElement,name,8,2,49121)
CheckMemberSize(struct _xmlElement,children,4,2,49122)
CheckOffset(struct _xmlElement,children,12,2,49122)
CheckMemberSize(struct _xmlElement,last,4,2,49123)
CheckOffset(struct _xmlElement,last,16,2,49123)
CheckMemberSize(struct _xmlElement,parent,4,2,49124)
CheckOffset(struct _xmlElement,parent,20,2,49124)
CheckMemberSize(struct _xmlElement,next,4,2,49125)
CheckOffset(struct _xmlElement,next,24,2,49125)
CheckMemberSize(struct _xmlElement,prev,4,2,49126)
CheckOffset(struct _xmlElement,prev,28,2,49126)
CheckMemberSize(struct _xmlElement,doc,4,2,49127)
CheckOffset(struct _xmlElement,doc,32,2,49127)
CheckMemberSize(struct _xmlElement,etype,4,2,49133)
CheckOffset(struct _xmlElement,etype,36,2,49133)
CheckMemberSize(struct _xmlElement,content,4,2,49134)
CheckOffset(struct _xmlElement,content,40,2,49134)
CheckMemberSize(struct _xmlElement,attributes,4,2,49155)
CheckOffset(struct _xmlElement,attributes,44,2,49155)
CheckMemberSize(struct _xmlElement,prefix,4,2,49156)
CheckOffset(struct _xmlElement,prefix,48,2,49156)
CheckMemberSize(struct _xmlElement,contModel,4,2,49157)
CheckOffset(struct _xmlElement,contModel,52,2,49157)
#elif __x86_64__
CheckTypeSize(struct _xmlElement,112, 14941, 11)
CheckMemberSize(struct _xmlElement,type,4,11,49120)
CheckOffset(struct _xmlElement,type,8,11,49120)
CheckMemberSize(struct _xmlElement,name,8,11,49121)
CheckOffset(struct _xmlElement,name,16,11,49121)
CheckMemberSize(struct _xmlElement,children,8,11,49122)
CheckOffset(struct _xmlElement,children,24,11,49122)
CheckMemberSize(struct _xmlElement,last,8,11,49123)
CheckOffset(struct _xmlElement,last,32,11,49123)
CheckMemberSize(struct _xmlElement,parent,8,11,49124)
CheckOffset(struct _xmlElement,parent,40,11,49124)
CheckMemberSize(struct _xmlElement,next,8,11,49125)
CheckOffset(struct _xmlElement,next,48,11,49125)
CheckMemberSize(struct _xmlElement,prev,8,11,49126)
CheckOffset(struct _xmlElement,prev,56,11,49126)
CheckMemberSize(struct _xmlElement,doc,8,11,49127)
CheckOffset(struct _xmlElement,doc,64,11,49127)
CheckMemberSize(struct _xmlElement,etype,4,11,49133)
CheckOffset(struct _xmlElement,etype,72,11,49133)
CheckMemberSize(struct _xmlElement,content,8,11,49134)
CheckOffset(struct _xmlElement,content,80,11,49134)
CheckMemberSize(struct _xmlElement,attributes,8,11,49155)
CheckOffset(struct _xmlElement,attributes,88,11,49155)
CheckMemberSize(struct _xmlElement,prefix,8,11,49156)
CheckOffset(struct _xmlElement,prefix,96,11,49156)
CheckMemberSize(struct _xmlElement,contModel,8,11,49157)
CheckOffset(struct _xmlElement,contModel,104,11,49157)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14941,0);
Msg("Find size of _xmlElement (14941)\n");
#endif

#if __i386__
CheckEnum("XML_ELEMENT_TYPE_UNDEFINED",XML_ELEMENT_TYPE_UNDEFINED,0);
CheckEnum("XML_ELEMENT_TYPE_EMPTY",XML_ELEMENT_TYPE_EMPTY,1);
CheckEnum("XML_ELEMENT_TYPE_ANY",XML_ELEMENT_TYPE_ANY,2);
CheckEnum("XML_ELEMENT_TYPE_MIXED",XML_ELEMENT_TYPE_MIXED,3);
CheckEnum("XML_ELEMENT_TYPE_ELEMENT",XML_ELEMENT_TYPE_ELEMENT,4);
#elif __x86_64__
CheckEnum("XML_ELEMENT_TYPE_UNDEFINED",XML_ELEMENT_TYPE_UNDEFINED,0);
CheckEnum("XML_ELEMENT_TYPE_EMPTY",XML_ELEMENT_TYPE_EMPTY,1);
CheckEnum("XML_ELEMENT_TYPE_ANY",XML_ELEMENT_TYPE_ANY,2);
CheckEnum("XML_ELEMENT_TYPE_MIXED",XML_ELEMENT_TYPE_MIXED,3);
CheckEnum("XML_ELEMENT_TYPE_ELEMENT",XML_ELEMENT_TYPE_ELEMENT,4);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14942,0);
Msg("Find size of anon-libxml2/libxml/valid.h-81 (14942)\n");
#endif

#if __i386__
CheckTypeSize(xmlElementTypeVal,4, 14943, 2)
#elif __x86_64__
CheckTypeSize(xmlElementTypeVal,4, 14943, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14943,0);
Msg("Find size of xmlElementTypeVal (14943)\n");
#endif

#if __i386__
CheckTypeSize(struct _xmlAttribute,64, 14944, 2)
CheckMemberSize(struct _xmlAttribute,type,4,2,49136)
CheckOffset(struct _xmlAttribute,type,4,2,49136)
CheckMemberSize(struct _xmlAttribute,name,4,2,49137)
CheckOffset(struct _xmlAttribute,name,8,2,49137)
CheckMemberSize(struct _xmlAttribute,children,4,2,49138)
CheckOffset(struct _xmlAttribute,children,12,2,49138)
CheckMemberSize(struct _xmlAttribute,last,4,2,49139)
CheckOffset(struct _xmlAttribute,last,16,2,49139)
CheckMemberSize(struct _xmlAttribute,parent,4,2,49140)
CheckOffset(struct _xmlAttribute,parent,20,2,49140)
CheckMemberSize(struct _xmlAttribute,next,4,2,49141)
CheckOffset(struct _xmlAttribute,next,24,2,49141)
CheckMemberSize(struct _xmlAttribute,prev,4,2,49142)
CheckOffset(struct _xmlAttribute,prev,28,2,49142)
CheckMemberSize(struct _xmlAttribute,doc,4,2,49143)
CheckOffset(struct _xmlAttribute,doc,32,2,49143)
CheckMemberSize(struct _xmlAttribute,nexth,4,2,49144)
CheckOffset(struct _xmlAttribute,nexth,36,2,49144)
CheckMemberSize(struct _xmlAttribute,atype,4,2,49145)
CheckOffset(struct _xmlAttribute,atype,40,2,49145)
CheckMemberSize(struct _xmlAttribute,def,4,2,49150)
CheckOffset(struct _xmlAttribute,def,44,2,49150)
CheckMemberSize(struct _xmlAttribute,defaultValue,4,2,49151)
CheckOffset(struct _xmlAttribute,defaultValue,48,2,49151)
CheckMemberSize(struct _xmlAttribute,tree,4,2,49152)
CheckOffset(struct _xmlAttribute,tree,52,2,49152)
CheckMemberSize(struct _xmlAttribute,prefix,4,2,49153)
CheckOffset(struct _xmlAttribute,prefix,56,2,49153)
CheckMemberSize(struct _xmlAttribute,elem,4,2,49154)
CheckOffset(struct _xmlAttribute,elem,60,2,49154)
#elif __x86_64__
CheckTypeSize(struct _xmlAttribute,120, 14944, 11)
CheckMemberSize(struct _xmlAttribute,type,4,11,49136)
CheckOffset(struct _xmlAttribute,type,8,11,49136)
CheckMemberSize(struct _xmlAttribute,name,8,11,49137)
CheckOffset(struct _xmlAttribute,name,16,11,49137)
CheckMemberSize(struct _xmlAttribute,children,8,11,49138)
CheckOffset(struct _xmlAttribute,children,24,11,49138)
CheckMemberSize(struct _xmlAttribute,last,8,11,49139)
CheckOffset(struct _xmlAttribute,last,32,11,49139)
CheckMemberSize(struct _xmlAttribute,parent,8,11,49140)
CheckOffset(struct _xmlAttribute,parent,40,11,49140)
CheckMemberSize(struct _xmlAttribute,next,8,11,49141)
CheckOffset(struct _xmlAttribute,next,48,11,49141)
CheckMemberSize(struct _xmlAttribute,prev,8,11,49142)
CheckOffset(struct _xmlAttribute,prev,56,11,49142)
CheckMemberSize(struct _xmlAttribute,doc,8,11,49143)
CheckOffset(struct _xmlAttribute,doc,64,11,49143)
CheckMemberSize(struct _xmlAttribute,nexth,8,11,49144)
CheckOffset(struct _xmlAttribute,nexth,72,11,49144)
CheckMemberSize(struct _xmlAttribute,atype,4,11,49145)
CheckOffset(struct _xmlAttribute,atype,80,11,49145)
CheckMemberSize(struct _xmlAttribute,def,4,11,49150)
CheckOffset(struct _xmlAttribute,def,84,11,49150)
CheckMemberSize(struct _xmlAttribute,defaultValue,8,11,49151)
CheckOffset(struct _xmlAttribute,defaultValue,88,11,49151)
CheckMemberSize(struct _xmlAttribute,tree,8,11,49152)
CheckOffset(struct _xmlAttribute,tree,96,11,49152)
CheckMemberSize(struct _xmlAttribute,prefix,8,11,49153)
CheckOffset(struct _xmlAttribute,prefix,104,11,49153)
CheckMemberSize(struct _xmlAttribute,elem,8,11,49154)
CheckOffset(struct _xmlAttribute,elem,112,11,49154)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14944,0);
Msg("Find size of _xmlAttribute (14944)\n");
#endif

#if __i386__
CheckTypeSize(struct _xmlAttribute *,4, 14945, 2)
#elif __x86_64__
CheckTypeSize(struct _xmlAttribute *,8, 14945, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14945,0);
Msg("Find size of _xmlAttribute * (14945)\n");
#endif

#if __i386__
CheckEnum("XML_ATTRIBUTE_NONE",XML_ATTRIBUTE_NONE,1);
CheckEnum("XML_ATTRIBUTE_REQUIRED",XML_ATTRIBUTE_REQUIRED,2);
CheckEnum("XML_ATTRIBUTE_IMPLIED",XML_ATTRIBUTE_IMPLIED,3);
CheckEnum("XML_ATTRIBUTE_FIXED",XML_ATTRIBUTE_FIXED,4);
#elif __x86_64__
CheckEnum("XML_ATTRIBUTE_NONE",XML_ATTRIBUTE_NONE,1);
CheckEnum("XML_ATTRIBUTE_REQUIRED",XML_ATTRIBUTE_REQUIRED,2);
CheckEnum("XML_ATTRIBUTE_IMPLIED",XML_ATTRIBUTE_IMPLIED,3);
CheckEnum("XML_ATTRIBUTE_FIXED",XML_ATTRIBUTE_FIXED,4);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14946,0);
Msg("Find size of anon-libxml2/libxml/valid.h-78 (14946)\n");
#endif

#if __i386__
CheckTypeSize(xmlAttributeDefault,4, 14947, 2)
#elif __x86_64__
CheckTypeSize(xmlAttributeDefault,4, 14947, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14947,0);
Msg("Find size of xmlAttributeDefault (14947)\n");
#endif

#if __i386__
CheckTypeSize(xmlAttribute,64, 14948, 2)
#elif __x86_64__
CheckTypeSize(xmlAttribute,120, 14948, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14948,0);
Msg("Find size of xmlAttribute (14948)\n");
#endif

#if __i386__
CheckTypeSize(xmlAttribute *,4, 14949, 2)
#elif __x86_64__
CheckTypeSize(xmlAttribute *,8, 14949, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14949,0);
Msg("Find size of xmlAttribute * (14949)\n");
#endif

#if __i386__
CheckTypeSize(xmlAttributePtr,4, 14950, 2)
#elif __x86_64__
CheckTypeSize(xmlAttributePtr,8, 14950, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14950,0);
Msg("Find size of xmlAttributePtr (14950)\n");
#endif

#if __i386__
CheckTypeSize(xmlElement,56, 14951, 2)
#elif __x86_64__
CheckTypeSize(xmlElement,112, 14951, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14951,0);
Msg("Find size of xmlElement (14951)\n");
#endif

#if __i386__
CheckTypeSize(xmlElement *,4, 14952, 2)
#elif __x86_64__
CheckTypeSize(xmlElement *,8, 14952, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14952,0);
Msg("Find size of xmlElement * (14952)\n");
#endif

#if __i386__
CheckTypeSize(xmlElementPtr,4, 14953, 2)
#elif __x86_64__
CheckTypeSize(xmlElementPtr,8, 14953, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14953,0);
Msg("Find size of xmlElementPtr (14953)\n");
#endif

#if __i386__
CheckTypeSize(xmlNotationTable,0, 14954, 2)
#elif __x86_64__
CheckTypeSize(xmlNotationTable,0, 14954, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14954,0);
Msg("Find size of xmlNotationTable (14954)\n");
#endif

#if __i386__
CheckTypeSize(xmlNotationTable *,4, 14955, 2)
#elif __x86_64__
CheckTypeSize(xmlNotationTable *,8, 14955, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14955,0);
Msg("Find size of xmlNotationTable * (14955)\n");
#endif

#if __i386__
CheckTypeSize(xmlNotationTablePtr,4, 14956, 2)
#elif __x86_64__
CheckTypeSize(xmlNotationTablePtr,8, 14956, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14956,0);
Msg("Find size of xmlNotationTablePtr (14956)\n");
#endif

#if __i386__
CheckTypeSize(struct _xmlNotation,12, 14957, 2)
CheckMemberSize(struct _xmlNotation,PublicID,4,2,49159)
CheckOffset(struct _xmlNotation,PublicID,4,2,49159)
CheckMemberSize(struct _xmlNotation,SystemID,4,2,49160)
CheckOffset(struct _xmlNotation,SystemID,8,2,49160)
#elif __x86_64__
CheckTypeSize(struct _xmlNotation,24, 14957, 11)
CheckMemberSize(struct _xmlNotation,PublicID,8,11,49159)
CheckOffset(struct _xmlNotation,PublicID,8,11,49159)
CheckMemberSize(struct _xmlNotation,SystemID,8,11,49160)
CheckOffset(struct _xmlNotation,SystemID,16,11,49160)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14957,0);
Msg("Find size of _xmlNotation (14957)\n");
#endif

#if __i386__
CheckTypeSize(xmlNotation,12, 14958, 2)
#elif __x86_64__
CheckTypeSize(xmlNotation,24, 14958, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14958,0);
Msg("Find size of xmlNotation (14958)\n");
#endif

#if __i386__
CheckTypeSize(xmlNotation *,4, 14959, 2)
#elif __x86_64__
CheckTypeSize(xmlNotation *,8, 14959, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14959,0);
Msg("Find size of xmlNotation * (14959)\n");
#endif

#if __i386__
CheckTypeSize(xmlNotationPtr,4, 14960, 2)
#elif __x86_64__
CheckTypeSize(xmlNotationPtr,8, 14960, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14960,0);
Msg("Find size of xmlNotationPtr (14960)\n");
#endif

#if __i386__
CheckTypeSize(struct _xmlID,24, 14961, 2)
CheckMemberSize(struct _xmlID,value,4,2,49162)
CheckOffset(struct _xmlID,value,4,2,49162)
CheckMemberSize(struct _xmlID,attr,4,2,49163)
CheckOffset(struct _xmlID,attr,8,2,49163)
CheckMemberSize(struct _xmlID,name,4,2,49164)
CheckOffset(struct _xmlID,name,12,2,49164)
CheckMemberSize(struct _xmlID,lineno,4,2,49165)
CheckOffset(struct _xmlID,lineno,16,2,49165)
CheckMemberSize(struct _xmlID,doc,4,2,49166)
CheckOffset(struct _xmlID,doc,20,2,49166)
#elif __x86_64__
CheckTypeSize(struct _xmlID,48, 14961, 11)
CheckMemberSize(struct _xmlID,value,8,11,49162)
CheckOffset(struct _xmlID,value,8,11,49162)
CheckMemberSize(struct _xmlID,attr,8,11,49163)
CheckOffset(struct _xmlID,attr,16,11,49163)
CheckMemberSize(struct _xmlID,name,8,11,49164)
CheckOffset(struct _xmlID,name,24,11,49164)
CheckMemberSize(struct _xmlID,lineno,4,11,49165)
CheckOffset(struct _xmlID,lineno,32,11,49165)
CheckMemberSize(struct _xmlID,doc,8,11,49166)
CheckOffset(struct _xmlID,doc,40,11,49166)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14961,0);
Msg("Find size of _xmlID (14961)\n");
#endif

#if __i386__
CheckTypeSize(struct _xmlID *,4, 14962, 2)
#elif __x86_64__
CheckTypeSize(struct _xmlID *,8, 14962, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14962,0);
Msg("Find size of _xmlID * (14962)\n");
#endif

#if __i386__
CheckTypeSize(xmlID,24, 14963, 2)
#elif __x86_64__
CheckTypeSize(xmlID,48, 14963, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14963,0);
Msg("Find size of xmlID (14963)\n");
#endif

#if __i386__
CheckTypeSize(xmlID *,4, 14964, 2)
#elif __x86_64__
CheckTypeSize(xmlID *,8, 14964, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14964,0);
Msg("Find size of xmlID * (14964)\n");
#endif

#if __i386__
CheckTypeSize(xmlIDPtr,4, 14965, 2)
#elif __x86_64__
CheckTypeSize(xmlIDPtr,8, 14965, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14965,0);
Msg("Find size of xmlIDPtr (14965)\n");
#endif

#if __i386__
CheckTypeSize(struct _xmlRef,20, 14966, 2)
CheckMemberSize(struct _xmlRef,value,4,2,49168)
CheckOffset(struct _xmlRef,value,4,2,49168)
CheckMemberSize(struct _xmlRef,attr,4,2,49169)
CheckOffset(struct _xmlRef,attr,8,2,49169)
CheckMemberSize(struct _xmlRef,name,4,2,49170)
CheckOffset(struct _xmlRef,name,12,2,49170)
CheckMemberSize(struct _xmlRef,lineno,4,2,49171)
CheckOffset(struct _xmlRef,lineno,16,2,49171)
#elif __x86_64__
CheckTypeSize(struct _xmlRef,40, 14966, 11)
CheckMemberSize(struct _xmlRef,value,8,11,49168)
CheckOffset(struct _xmlRef,value,8,11,49168)
CheckMemberSize(struct _xmlRef,attr,8,11,49169)
CheckOffset(struct _xmlRef,attr,16,11,49169)
CheckMemberSize(struct _xmlRef,name,8,11,49170)
CheckOffset(struct _xmlRef,name,24,11,49170)
CheckMemberSize(struct _xmlRef,lineno,4,11,49171)
CheckOffset(struct _xmlRef,lineno,32,11,49171)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14966,0);
Msg("Find size of _xmlRef (14966)\n");
#endif

#if __i386__
CheckTypeSize(struct _xmlRef *,4, 14967, 2)
#elif __x86_64__
CheckTypeSize(struct _xmlRef *,8, 14967, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14967,0);
Msg("Find size of _xmlRef * (14967)\n");
#endif

#if __i386__
CheckTypeSize(xmlRef,20, 14968, 2)
#elif __x86_64__
CheckTypeSize(xmlRef,40, 14968, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14968,0);
Msg("Find size of xmlRef (14968)\n");
#endif

#if __i386__
CheckTypeSize(xmlRef *,4, 14969, 2)
#elif __x86_64__
CheckTypeSize(xmlRef *,8, 14969, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14969,0);
Msg("Find size of xmlRef * (14969)\n");
#endif

#if __i386__
CheckTypeSize(xmlRefPtr,4, 14970, 2)
#elif __x86_64__
CheckTypeSize(xmlRefPtr,8, 14970, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14970,0);
Msg("Find size of xmlRefPtr (14970)\n");
#endif

#if __i386__
CheckTypeSize(xmlElementTable,0, 14971, 2)
#elif __x86_64__
CheckTypeSize(xmlElementTable,0, 14971, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14971,0);
Msg("Find size of xmlElementTable (14971)\n");
#endif

#if __i386__
CheckTypeSize(xmlElementTable *,4, 14972, 2)
#elif __x86_64__
CheckTypeSize(xmlElementTable *,8, 14972, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14972,0);
Msg("Find size of xmlElementTable * (14972)\n");
#endif

#if __i386__
CheckTypeSize(xmlElementTablePtr,4, 14973, 2)
#elif __x86_64__
CheckTypeSize(xmlElementTablePtr,8, 14973, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14973,0);
Msg("Find size of xmlElementTablePtr (14973)\n");
#endif

#if __i386__
CheckTypeSize(xmlIDTable,0, 14974, 2)
#elif __x86_64__
CheckTypeSize(xmlIDTable,0, 14974, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14974,0);
Msg("Find size of xmlIDTable (14974)\n");
#endif

#if __i386__
CheckTypeSize(xmlIDTable *,4, 14975, 2)
#elif __x86_64__
CheckTypeSize(xmlIDTable *,8, 14975, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14975,0);
Msg("Find size of xmlIDTable * (14975)\n");
#endif

#if __i386__
CheckTypeSize(xmlIDTablePtr,4, 14976, 2)
#elif __x86_64__
CheckTypeSize(xmlIDTablePtr,8, 14976, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14976,0);
Msg("Find size of xmlIDTablePtr (14976)\n");
#endif

#if __i386__
CheckTypeSize(xmlRefTable,0, 14977, 2)
#elif __x86_64__
CheckTypeSize(xmlRefTable,0, 14977, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14977,0);
Msg("Find size of xmlRefTable (14977)\n");
#endif

#if __i386__
CheckTypeSize(xmlRefTable *,4, 14978, 2)
#elif __x86_64__
CheckTypeSize(xmlRefTable *,8, 14978, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14978,0);
Msg("Find size of xmlRefTable * (14978)\n");
#endif

#if __i386__
CheckTypeSize(xmlRefTablePtr,4, 14979, 2)
#elif __x86_64__
CheckTypeSize(xmlRefTablePtr,8, 14979, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14979,0);
Msg("Find size of xmlRefTablePtr (14979)\n");
#endif

extern int xmlIsRef_db(xmlDocPtr, xmlNodePtr, xmlAttrPtr);
CheckInterfacedef(xmlIsRef,xmlIsRef_db);
extern int xmlValidateOneNamespace_db(xmlValidCtxtPtr, xmlDocPtr, xmlNodePtr, const xmlChar *, xmlNsPtr, const xmlChar *);
CheckInterfacedef(xmlValidateOneNamespace,xmlValidateOneNamespace_db);
extern xmlEnumerationPtr xmlCreateEnumeration_db(const xmlChar *);
CheckInterfacedef(xmlCreateEnumeration,xmlCreateEnumeration_db);
extern xmlListPtr xmlGetRefs_db(xmlDocPtr, const xmlChar *);
CheckInterfacedef(xmlGetRefs,xmlGetRefs_db);
extern int xmlIsMixedElement_db(xmlDocPtr, const xmlChar *);
CheckInterfacedef(xmlIsMixedElement,xmlIsMixedElement_db);
extern int xmlValidateNmtokensValue_db(const xmlChar *);
CheckInterfacedef(xmlValidateNmtokensValue,xmlValidateNmtokensValue_db);
extern int xmlValidateNameValue_db(const xmlChar *);
CheckInterfacedef(xmlValidateNameValue,xmlValidateNameValue_db);
extern xmlAttributeTablePtr xmlCopyAttributeTable_db(xmlAttributeTablePtr);
CheckInterfacedef(xmlCopyAttributeTable,xmlCopyAttributeTable_db);
extern xmlElementContentPtr xmlNewDocElementContent_db(xmlDocPtr, const xmlChar *, xmlElementContentType);
CheckInterfacedef(xmlNewDocElementContent,xmlNewDocElementContent_db);
extern int xmlValidateAttributeValue_db(xmlAttributeType, const xmlChar *);
CheckInterfacedef(xmlValidateAttributeValue,xmlValidateAttributeValue_db);
extern void xmlDumpElementDecl_db(xmlBufferPtr, xmlElementPtr);
CheckInterfacedef(xmlDumpElementDecl,xmlDumpElementDecl_db);
extern int xmlRemoveID_db(xmlDocPtr, xmlAttrPtr);
CheckInterfacedef(xmlRemoveID,xmlRemoveID_db);
extern void xmlDumpNotationTable_db(xmlBufferPtr, xmlNotationTablePtr);
CheckInterfacedef(xmlDumpNotationTable,xmlDumpNotationTable_db);
extern void xmlFreeEnumeration_db(xmlEnumerationPtr);
CheckInterfacedef(xmlFreeEnumeration,xmlFreeEnumeration_db);
extern void xmlSnprintfElementContent_db(char *, int, xmlElementContentPtr, int);
CheckInterfacedef(xmlSnprintfElementContent,xmlSnprintfElementContent_db);
extern int xmlValidateNotationUse_db(xmlValidCtxtPtr, xmlDocPtr, const xmlChar *);
CheckInterfacedef(xmlValidateNotationUse,xmlValidateNotationUse_db);
extern int xmlValidateDocument_db(xmlValidCtxtPtr, xmlDocPtr);
CheckInterfacedef(xmlValidateDocument,xmlValidateDocument_db);
extern int xmlValidateOneAttribute_db(xmlValidCtxtPtr, xmlDocPtr, xmlNodePtr, xmlAttrPtr, const xmlChar *);
CheckInterfacedef(xmlValidateOneAttribute,xmlValidateOneAttribute_db);
extern xmlChar * xmlValidNormalizeAttributeValue_db(xmlDocPtr, xmlNodePtr, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlValidNormalizeAttributeValue,xmlValidNormalizeAttributeValue_db);
extern xmlElementPtr xmlGetDtdElementDesc_db(xmlDtdPtr, const xmlChar *);
CheckInterfacedef(xmlGetDtdElementDesc,xmlGetDtdElementDesc_db);
extern int xmlValidateDtd_db(xmlValidCtxtPtr, xmlDocPtr, xmlDtdPtr);
CheckInterfacedef(xmlValidateDtd,xmlValidateDtd_db);
extern int xmlValidateDocumentFinal_db(xmlValidCtxtPtr, xmlDocPtr);
CheckInterfacedef(xmlValidateDocumentFinal,xmlValidateDocumentFinal_db);
extern xmlAttributePtr xmlAddAttributeDecl_db(xmlValidCtxtPtr, xmlDtdPtr, const xmlChar *, const xmlChar *, const xmlChar *, xmlAttributeType, xmlAttributeDefault, const xmlChar *, xmlEnumerationPtr);
CheckInterfacedef(xmlAddAttributeDecl,xmlAddAttributeDecl_db);
extern int xmlValidateNamesValue_db(const xmlChar *);
CheckInterfacedef(xmlValidateNamesValue,xmlValidateNamesValue_db);
extern xmlAttributePtr xmlGetDtdQAttrDesc_db(xmlDtdPtr, const xmlChar *, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlGetDtdQAttrDesc,xmlGetDtdQAttrDesc_db);
extern void xmlFreeDocElementContent_db(xmlDocPtr, xmlElementContentPtr);
CheckInterfacedef(xmlFreeDocElementContent,xmlFreeDocElementContent_db);
extern int xmlValidateElementDecl_db(xmlValidCtxtPtr, xmlDocPtr, xmlElementPtr);
CheckInterfacedef(xmlValidateElementDecl,xmlValidateElementDecl_db);
extern xmlValidCtxtPtr xmlNewValidCtxt_db(void);
CheckInterfacedef(xmlNewValidCtxt,xmlNewValidCtxt_db);
extern int xmlValidateNmtokenValue_db(const xmlChar *);
CheckInterfacedef(xmlValidateNmtokenValue,xmlValidateNmtokenValue_db);
extern xmlElementPtr xmlGetDtdQElementDesc_db(xmlDtdPtr, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlGetDtdQElementDesc,xmlGetDtdQElementDesc_db);
extern xmlNotationTablePtr xmlCopyNotationTable_db(xmlNotationTablePtr);
CheckInterfacedef(xmlCopyNotationTable,xmlCopyNotationTable_db);
extern void xmlDumpNotationDecl_db(xmlBufferPtr, xmlNotationPtr);
CheckInterfacedef(xmlDumpNotationDecl,xmlDumpNotationDecl_db);
extern int xmlValidatePushElement_db(xmlValidCtxtPtr, xmlDocPtr, xmlNodePtr, const xmlChar *);
CheckInterfacedef(xmlValidatePushElement,xmlValidatePushElement_db);
extern int xmlValidateNotationDecl_db(xmlValidCtxtPtr, xmlDocPtr, xmlNotationPtr);
CheckInterfacedef(xmlValidateNotationDecl,xmlValidateNotationDecl_db);
extern xmlNotationPtr xmlAddNotationDecl_db(xmlValidCtxtPtr, xmlDtdPtr, const xmlChar *, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlAddNotationDecl,xmlAddNotationDecl_db);
extern int xmlValidBuildContentModel_db(xmlValidCtxtPtr, xmlElementPtr);
CheckInterfacedef(xmlValidBuildContentModel,xmlValidBuildContentModel_db);
extern int xmlValidatePopElement_db(xmlValidCtxtPtr, xmlDocPtr, xmlNodePtr, const xmlChar *);
CheckInterfacedef(xmlValidatePopElement,xmlValidatePopElement_db);
extern xmlIDPtr xmlAddID_db(xmlValidCtxtPtr, xmlDocPtr, const xmlChar *, xmlAttrPtr);
CheckInterfacedef(xmlAddID,xmlAddID_db);
extern xmlElementContentPtr xmlCopyDocElementContent_db(xmlDocPtr, xmlElementContentPtr);
CheckInterfacedef(xmlCopyDocElementContent,xmlCopyDocElementContent_db);
extern xmlAttributePtr xmlGetDtdAttrDesc_db(xmlDtdPtr, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlGetDtdAttrDesc,xmlGetDtdAttrDesc_db);
extern xmlEnumerationPtr xmlCopyEnumeration_db(xmlEnumerationPtr);
CheckInterfacedef(xmlCopyEnumeration,xmlCopyEnumeration_db);
extern int xmlValidateAttributeDecl_db(xmlValidCtxtPtr, xmlDocPtr, xmlAttributePtr);
CheckInterfacedef(xmlValidateAttributeDecl,xmlValidateAttributeDecl_db);
extern xmlRefPtr xmlAddRef_db(xmlValidCtxtPtr, xmlDocPtr, const xmlChar *, xmlAttrPtr);
CheckInterfacedef(xmlAddRef,xmlAddRef_db);
extern void xmlFreeElementTable_db(xmlElementTablePtr);
CheckInterfacedef(xmlFreeElementTable,xmlFreeElementTable_db);
extern void xmlDumpAttributeTable_db(xmlBufferPtr, xmlAttributeTablePtr);
CheckInterfacedef(xmlDumpAttributeTable,xmlDumpAttributeTable_db);
extern int xmlValidateOneElement_db(xmlValidCtxtPtr, xmlDocPtr, xmlNodePtr);
CheckInterfacedef(xmlValidateOneElement,xmlValidateOneElement_db);
extern int xmlIsID_db(xmlDocPtr, xmlNodePtr, xmlAttrPtr);
CheckInterfacedef(xmlIsID,xmlIsID_db);
extern void xmlFreeIDTable_db(xmlIDTablePtr);
CheckInterfacedef(xmlFreeIDTable,xmlFreeIDTable_db);
extern int xmlRemoveRef_db(xmlDocPtr, xmlAttrPtr);
CheckInterfacedef(xmlRemoveRef,xmlRemoveRef_db);
extern int xmlValidGetValidElements_db(xmlNode *, xmlNode *, const xmlChar * *, int);
CheckInterfacedef(xmlValidGetValidElements,xmlValidGetValidElements_db);
extern void xmlFreeNotationTable_db(xmlNotationTablePtr);
CheckInterfacedef(xmlFreeNotationTable,xmlFreeNotationTable_db);
extern void xmlFreeRefTable_db(xmlRefTablePtr);
CheckInterfacedef(xmlFreeRefTable,xmlFreeRefTable_db);
extern xmlNotationPtr xmlGetDtdNotationDesc_db(xmlDtdPtr, const xmlChar *);
CheckInterfacedef(xmlGetDtdNotationDesc,xmlGetDtdNotationDesc_db);
extern int xmlValidateRoot_db(xmlValidCtxtPtr, xmlDocPtr);
CheckInterfacedef(xmlValidateRoot,xmlValidateRoot_db);
extern xmlElementTablePtr xmlCopyElementTable_db(xmlElementTablePtr);
CheckInterfacedef(xmlCopyElementTable,xmlCopyElementTable_db);
extern xmlElementPtr xmlAddElementDecl_db(xmlValidCtxtPtr, xmlDtdPtr, const xmlChar *, xmlElementTypeVal, xmlElementContentPtr);
CheckInterfacedef(xmlAddElementDecl,xmlAddElementDecl_db);
extern void xmlFreeValidCtxt_db(xmlValidCtxtPtr);
CheckInterfacedef(xmlFreeValidCtxt,xmlFreeValidCtxt_db);
extern int xmlValidateDtdFinal_db(xmlValidCtxtPtr, xmlDocPtr);
CheckInterfacedef(xmlValidateDtdFinal,xmlValidateDtdFinal_db);
extern void xmlDumpElementTable_db(xmlBufferPtr, xmlElementTablePtr);
CheckInterfacedef(xmlDumpElementTable,xmlDumpElementTable_db);
extern void xmlDumpAttributeDecl_db(xmlBufferPtr, xmlAttributePtr);
CheckInterfacedef(xmlDumpAttributeDecl,xmlDumpAttributeDecl_db);
extern int xmlValidateElement_db(xmlValidCtxtPtr, xmlDocPtr, xmlNodePtr);
CheckInterfacedef(xmlValidateElement,xmlValidateElement_db);
extern xmlAttrPtr xmlGetID_db(xmlDocPtr, const xmlChar *);
CheckInterfacedef(xmlGetID,xmlGetID_db);
extern int xmlValidatePushCData_db(xmlValidCtxtPtr, const xmlChar *, int);
CheckInterfacedef(xmlValidatePushCData,xmlValidatePushCData_db);
extern void xmlFreeAttributeTable_db(xmlAttributeTablePtr);
CheckInterfacedef(xmlFreeAttributeTable,xmlFreeAttributeTable_db);
extern int xmlValidGetPotentialChildren_db(xmlElementContent *, const xmlChar * *, int *, int);
CheckInterfacedef(xmlValidGetPotentialChildren,xmlValidGetPotentialChildren_db);
extern xmlChar * xmlValidCtxtNormalizeAttributeValue_db(xmlValidCtxtPtr, xmlDocPtr, xmlNodePtr, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlValidCtxtNormalizeAttributeValue,xmlValidCtxtNormalizeAttributeValue_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in libxml2/libxml/valid.h\n\n",pcnt,cnt);
return cnt;
#endif

}
