/*
 * Test of libxml2/libxml/entities.h
 */
#include "hdrchk.h"
#include "sys/types.h"
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
CheckTypeSize(struct _xmlEntity,72, 14716, 2)
CheckMemberSize(struct _xmlEntity,type,4,2,48687)
CheckOffset(struct _xmlEntity,type,4,2,48687)
CheckMemberSize(struct _xmlEntity,name,4,2,48688)
CheckOffset(struct _xmlEntity,name,8,2,48688)
CheckMemberSize(struct _xmlEntity,children,4,2,48689)
CheckOffset(struct _xmlEntity,children,12,2,48689)
CheckMemberSize(struct _xmlEntity,last,4,2,48690)
CheckOffset(struct _xmlEntity,last,16,2,48690)
CheckMemberSize(struct _xmlEntity,parent,4,2,48691)
CheckOffset(struct _xmlEntity,parent,20,2,48691)
CheckMemberSize(struct _xmlEntity,next,4,2,48692)
CheckOffset(struct _xmlEntity,next,24,2,48692)
CheckMemberSize(struct _xmlEntity,prev,4,2,48693)
CheckOffset(struct _xmlEntity,prev,28,2,48693)
CheckMemberSize(struct _xmlEntity,doc,4,2,48694)
CheckOffset(struct _xmlEntity,doc,32,2,48694)
CheckMemberSize(struct _xmlEntity,orig,4,2,48695)
CheckOffset(struct _xmlEntity,orig,36,2,48695)
CheckMemberSize(struct _xmlEntity,content,4,2,48696)
CheckOffset(struct _xmlEntity,content,40,2,48696)
CheckMemberSize(struct _xmlEntity,length,4,2,48697)
CheckOffset(struct _xmlEntity,length,44,2,48697)
CheckMemberSize(struct _xmlEntity,etype,4,2,48704)
CheckOffset(struct _xmlEntity,etype,48,2,48704)
CheckMemberSize(struct _xmlEntity,ExternalID,4,2,48705)
CheckOffset(struct _xmlEntity,ExternalID,52,2,48705)
CheckMemberSize(struct _xmlEntity,SystemID,4,2,48706)
CheckOffset(struct _xmlEntity,SystemID,56,2,48706)
CheckMemberSize(struct _xmlEntity,nexte,4,2,48707)
CheckOffset(struct _xmlEntity,nexte,60,2,48707)
CheckMemberSize(struct _xmlEntity,URI,4,2,48708)
CheckOffset(struct _xmlEntity,URI,64,2,48708)
CheckMemberSize(struct _xmlEntity,owner,4,2,48709)
CheckOffset(struct _xmlEntity,owner,68,2,48709)
#elif __x86_64__
CheckTypeSize(struct _xmlEntity,136, 14716, 11)
CheckMemberSize(struct _xmlEntity,type,4,11,48687)
CheckOffset(struct _xmlEntity,type,8,11,48687)
CheckMemberSize(struct _xmlEntity,name,8,11,48688)
CheckOffset(struct _xmlEntity,name,16,11,48688)
CheckMemberSize(struct _xmlEntity,children,8,11,48689)
CheckOffset(struct _xmlEntity,children,24,11,48689)
CheckMemberSize(struct _xmlEntity,last,8,11,48690)
CheckOffset(struct _xmlEntity,last,32,11,48690)
CheckMemberSize(struct _xmlEntity,parent,8,11,48691)
CheckOffset(struct _xmlEntity,parent,40,11,48691)
CheckMemberSize(struct _xmlEntity,next,8,11,48692)
CheckOffset(struct _xmlEntity,next,48,11,48692)
CheckMemberSize(struct _xmlEntity,prev,8,11,48693)
CheckOffset(struct _xmlEntity,prev,56,11,48693)
CheckMemberSize(struct _xmlEntity,doc,8,11,48694)
CheckOffset(struct _xmlEntity,doc,64,11,48694)
CheckMemberSize(struct _xmlEntity,orig,8,11,48695)
CheckOffset(struct _xmlEntity,orig,72,11,48695)
CheckMemberSize(struct _xmlEntity,content,8,11,48696)
CheckOffset(struct _xmlEntity,content,80,11,48696)
CheckMemberSize(struct _xmlEntity,length,4,11,48697)
CheckOffset(struct _xmlEntity,length,88,11,48697)
CheckMemberSize(struct _xmlEntity,etype,4,11,48704)
CheckOffset(struct _xmlEntity,etype,92,11,48704)
CheckMemberSize(struct _xmlEntity,ExternalID,8,11,48705)
CheckOffset(struct _xmlEntity,ExternalID,96,11,48705)
CheckMemberSize(struct _xmlEntity,SystemID,8,11,48706)
CheckOffset(struct _xmlEntity,SystemID,104,11,48706)
CheckMemberSize(struct _xmlEntity,nexte,8,11,48707)
CheckOffset(struct _xmlEntity,nexte,112,11,48707)
CheckMemberSize(struct _xmlEntity,URI,8,11,48708)
CheckOffset(struct _xmlEntity,URI,120,11,48708)
CheckMemberSize(struct _xmlEntity,owner,4,11,48709)
CheckOffset(struct _xmlEntity,owner,128,11,48709)
#elif __ia64__
CheckTypeSize(struct _xmlEntity,136, 14716, 3)
CheckMemberSize(struct _xmlEntity,type,4,3,48687)
CheckOffset(struct _xmlEntity,type,8,3,48687)
CheckMemberSize(struct _xmlEntity,name,8,3,48688)
CheckOffset(struct _xmlEntity,name,16,3,48688)
CheckMemberSize(struct _xmlEntity,children,8,3,48689)
CheckOffset(struct _xmlEntity,children,24,3,48689)
CheckMemberSize(struct _xmlEntity,last,8,3,48690)
CheckOffset(struct _xmlEntity,last,32,3,48690)
CheckMemberSize(struct _xmlEntity,parent,8,3,48691)
CheckOffset(struct _xmlEntity,parent,40,3,48691)
CheckMemberSize(struct _xmlEntity,next,8,3,48692)
CheckOffset(struct _xmlEntity,next,48,3,48692)
CheckMemberSize(struct _xmlEntity,prev,8,3,48693)
CheckOffset(struct _xmlEntity,prev,56,3,48693)
CheckMemberSize(struct _xmlEntity,doc,8,3,48694)
CheckOffset(struct _xmlEntity,doc,64,3,48694)
CheckMemberSize(struct _xmlEntity,orig,8,3,48695)
CheckOffset(struct _xmlEntity,orig,72,3,48695)
CheckMemberSize(struct _xmlEntity,content,8,3,48696)
CheckOffset(struct _xmlEntity,content,80,3,48696)
CheckMemberSize(struct _xmlEntity,length,4,3,48697)
CheckOffset(struct _xmlEntity,length,88,3,48697)
CheckMemberSize(struct _xmlEntity,etype,4,3,48704)
CheckOffset(struct _xmlEntity,etype,92,3,48704)
CheckMemberSize(struct _xmlEntity,ExternalID,8,3,48705)
CheckOffset(struct _xmlEntity,ExternalID,96,3,48705)
CheckMemberSize(struct _xmlEntity,SystemID,8,3,48706)
CheckOffset(struct _xmlEntity,SystemID,104,3,48706)
CheckMemberSize(struct _xmlEntity,nexte,8,3,48707)
CheckOffset(struct _xmlEntity,nexte,112,3,48707)
CheckMemberSize(struct _xmlEntity,URI,8,3,48708)
CheckOffset(struct _xmlEntity,URI,120,3,48708)
CheckMemberSize(struct _xmlEntity,owner,4,3,48709)
CheckOffset(struct _xmlEntity,owner,128,3,48709)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14716,0);
Msg("Find size of _xmlEntity (14716)\n");
#endif

#if __i386__
CheckEnum("XML_INTERNAL_GENERAL_ENTITY",XML_INTERNAL_GENERAL_ENTITY,1);
CheckEnum("XML_EXTERNAL_GENERAL_PARSED_ENTITY",XML_EXTERNAL_GENERAL_PARSED_ENTITY,2);
CheckEnum("XML_EXTERNAL_GENERAL_UNPARSED_ENTITY",XML_EXTERNAL_GENERAL_UNPARSED_ENTITY,3);
CheckEnum("XML_INTERNAL_PARAMETER_ENTITY",XML_INTERNAL_PARAMETER_ENTITY,4);
CheckEnum("XML_EXTERNAL_PARAMETER_ENTITY",XML_EXTERNAL_PARAMETER_ENTITY,5);
CheckEnum("XML_INTERNAL_PREDEFINED_ENTITY",XML_INTERNAL_PREDEFINED_ENTITY,6);
#elif __x86_64__
CheckEnum("XML_INTERNAL_GENERAL_ENTITY",XML_INTERNAL_GENERAL_ENTITY,1);
CheckEnum("XML_EXTERNAL_GENERAL_PARSED_ENTITY",XML_EXTERNAL_GENERAL_PARSED_ENTITY,2);
CheckEnum("XML_EXTERNAL_GENERAL_UNPARSED_ENTITY",XML_EXTERNAL_GENERAL_UNPARSED_ENTITY,3);
CheckEnum("XML_INTERNAL_PARAMETER_ENTITY",XML_INTERNAL_PARAMETER_ENTITY,4);
CheckEnum("XML_EXTERNAL_PARAMETER_ENTITY",XML_EXTERNAL_PARAMETER_ENTITY,5);
CheckEnum("XML_INTERNAL_PREDEFINED_ENTITY",XML_INTERNAL_PREDEFINED_ENTITY,6);
#elif __ia64__
CheckEnum("XML_INTERNAL_GENERAL_ENTITY",XML_INTERNAL_GENERAL_ENTITY,1);
CheckEnum("XML_EXTERNAL_GENERAL_PARSED_ENTITY",XML_EXTERNAL_GENERAL_PARSED_ENTITY,2);
CheckEnum("XML_EXTERNAL_GENERAL_UNPARSED_ENTITY",XML_EXTERNAL_GENERAL_UNPARSED_ENTITY,3);
CheckEnum("XML_INTERNAL_PARAMETER_ENTITY",XML_INTERNAL_PARAMETER_ENTITY,4);
CheckEnum("XML_EXTERNAL_PARAMETER_ENTITY",XML_EXTERNAL_PARAMETER_ENTITY,5);
CheckEnum("XML_INTERNAL_PREDEFINED_ENTITY",XML_INTERNAL_PREDEFINED_ENTITY,6);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14717,0);
Msg("Find size of anon-libxml2/libxml/entities.h-10 (14717)\n");
#endif

#if __i386__
CheckTypeSize(xmlEntityType,4, 14718, 2)
#elif __x86_64__
CheckTypeSize(xmlEntityType,4, 14718, 11)
#elif __ia64__
CheckTypeSize(xmlEntityType,4, 14718, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14718,0);
Msg("Find size of xmlEntityType (14718)\n");
#endif

#if __i386__
CheckTypeSize(struct _xmlEntity *,4, 14719, 2)
#elif __x86_64__
CheckTypeSize(struct _xmlEntity *,8, 14719, 11)
#elif __ia64__
CheckTypeSize(struct _xmlEntity *,8, 14719, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14719,0);
Msg("Find size of _xmlEntity * (14719)\n");
#endif

#if __i386__
CheckTypeSize(xmlEntity,72, 14720, 2)
#elif __x86_64__
CheckTypeSize(xmlEntity,136, 14720, 11)
#elif __ia64__
CheckTypeSize(xmlEntity,136, 14720, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14720,0);
Msg("Find size of xmlEntity (14720)\n");
#endif

#if __i386__
CheckTypeSize(xmlEntity *,4, 14721, 2)
#elif __x86_64__
CheckTypeSize(xmlEntity *,8, 14721, 11)
#elif __ia64__
CheckTypeSize(xmlEntity *,8, 14721, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14721,0);
Msg("Find size of xmlEntity * (14721)\n");
#endif

#if __i386__
CheckTypeSize(xmlEntityPtr,4, 14722, 2)
#elif __x86_64__
CheckTypeSize(xmlEntityPtr,8, 14722, 11)
#elif __ia64__
CheckTypeSize(xmlEntityPtr,8, 14722, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14722,0);
Msg("Find size of xmlEntityPtr (14722)\n");
#endif

#if __i386__
CheckTypeSize(struct _xmlHashTable,0, 14723, 2)
Msg("Missing member data for _xmlHashTable on IA32\n");
#elif __x86_64__
CheckTypeSize(struct _xmlHashTable,0, 14723, 11)
Msg("Missing member data for _xmlHashTable on x86-64\n");
#elif __ia64__
CheckTypeSize(struct _xmlHashTable,0, 14723, 3)
Msg("Missing member data for _xmlHashTable on IA64\n");
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14723,0);
Msg("Find size of _xmlHashTable (14723)\n");
#endif

#if __i386__
CheckTypeSize(xmlEntitiesTable,0, 14724, 2)
#elif __x86_64__
CheckTypeSize(xmlEntitiesTable,0, 14724, 11)
#elif __ia64__
CheckTypeSize(xmlEntitiesTable,0, 14724, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14724,0);
Msg("Find size of xmlEntitiesTable (14724)\n");
#endif

#if __i386__
CheckTypeSize(xmlEntitiesTable *,4, 14725, 2)
#elif __x86_64__
CheckTypeSize(xmlEntitiesTable *,8, 14725, 11)
#elif __ia64__
CheckTypeSize(xmlEntitiesTable *,8, 14725, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14725,0);
Msg("Find size of xmlEntitiesTable * (14725)\n");
#endif

#if __i386__
CheckTypeSize(xmlEntitiesTablePtr,4, 14726, 2)
#elif __x86_64__
CheckTypeSize(xmlEntitiesTablePtr,8, 14726, 11)
#elif __ia64__
CheckTypeSize(xmlEntitiesTablePtr,8, 14726, 3)
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
