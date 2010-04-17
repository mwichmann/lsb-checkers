/*
 * Test of libxml2/libxml/entities.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
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
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in libxml2/libxml/entities.h\n");
#endif

printf("Checking data structures in libxml2/libxml/entities.h\n");
#if defined __s390x__
CheckTypeSize(struct _xmlEntity,136, 14716, 12, , NULL, 0, NULL)
CheckMemberSize(struct _xmlEntity,type,4,12,48687)
CheckOffset(struct _xmlEntity,type,8,12,48687)
CheckMemberSize(struct _xmlEntity,name,8,12,48688)
CheckOffset(struct _xmlEntity,name,16,12,48688)
CheckMemberSize(struct _xmlEntity,children,8,12,48689)
CheckOffset(struct _xmlEntity,children,24,12,48689)
CheckMemberSize(struct _xmlEntity,last,8,12,48690)
CheckOffset(struct _xmlEntity,last,32,12,48690)
CheckMemberSize(struct _xmlEntity,parent,8,12,48691)
CheckOffset(struct _xmlEntity,parent,40,12,48691)
CheckMemberSize(struct _xmlEntity,next,8,12,48692)
CheckOffset(struct _xmlEntity,next,48,12,48692)
CheckMemberSize(struct _xmlEntity,prev,8,12,48693)
CheckOffset(struct _xmlEntity,prev,56,12,48693)
CheckMemberSize(struct _xmlEntity,doc,8,12,48694)
CheckOffset(struct _xmlEntity,doc,64,12,48694)
CheckMemberSize(struct _xmlEntity,orig,8,12,48695)
CheckOffset(struct _xmlEntity,orig,72,12,48695)
CheckMemberSize(struct _xmlEntity,content,8,12,48696)
CheckOffset(struct _xmlEntity,content,80,12,48696)
CheckMemberSize(struct _xmlEntity,length,4,12,48697)
CheckOffset(struct _xmlEntity,length,88,12,48697)
CheckMemberSize(struct _xmlEntity,etype,4,12,48704)
CheckOffset(struct _xmlEntity,etype,92,12,48704)
CheckMemberSize(struct _xmlEntity,ExternalID,8,12,48705)
CheckOffset(struct _xmlEntity,ExternalID,96,12,48705)
CheckMemberSize(struct _xmlEntity,SystemID,8,12,48706)
CheckOffset(struct _xmlEntity,SystemID,104,12,48706)
CheckMemberSize(struct _xmlEntity,nexte,8,12,48707)
CheckOffset(struct _xmlEntity,nexte,112,12,48707)
CheckMemberSize(struct _xmlEntity,URI,8,12,48708)
CheckOffset(struct _xmlEntity,URI,120,12,48708)
CheckMemberSize(struct _xmlEntity,owner,4,12,48709)
CheckOffset(struct _xmlEntity,owner,128,12,48709)
#elif defined __x86_64__
CheckTypeSize(struct _xmlEntity,136, 14716, 11, , NULL, 0, NULL)
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
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _xmlEntity,72, 14716, 10, , NULL, 0, NULL)
CheckMemberSize(struct _xmlEntity,type,4,10,48687)
CheckOffset(struct _xmlEntity,type,4,10,48687)
CheckMemberSize(struct _xmlEntity,name,4,10,48688)
CheckOffset(struct _xmlEntity,name,8,10,48688)
CheckMemberSize(struct _xmlEntity,children,4,10,48689)
CheckOffset(struct _xmlEntity,children,12,10,48689)
CheckMemberSize(struct _xmlEntity,last,4,10,48690)
CheckOffset(struct _xmlEntity,last,16,10,48690)
CheckMemberSize(struct _xmlEntity,parent,4,10,48691)
CheckOffset(struct _xmlEntity,parent,20,10,48691)
CheckMemberSize(struct _xmlEntity,next,4,10,48692)
CheckOffset(struct _xmlEntity,next,24,10,48692)
CheckMemberSize(struct _xmlEntity,prev,4,10,48693)
CheckOffset(struct _xmlEntity,prev,28,10,48693)
CheckMemberSize(struct _xmlEntity,doc,4,10,48694)
CheckOffset(struct _xmlEntity,doc,32,10,48694)
CheckMemberSize(struct _xmlEntity,orig,4,10,48695)
CheckOffset(struct _xmlEntity,orig,36,10,48695)
CheckMemberSize(struct _xmlEntity,content,4,10,48696)
CheckOffset(struct _xmlEntity,content,40,10,48696)
CheckMemberSize(struct _xmlEntity,length,4,10,48697)
CheckOffset(struct _xmlEntity,length,44,10,48697)
CheckMemberSize(struct _xmlEntity,etype,4,10,48704)
CheckOffset(struct _xmlEntity,etype,48,10,48704)
CheckMemberSize(struct _xmlEntity,ExternalID,4,10,48705)
CheckOffset(struct _xmlEntity,ExternalID,52,10,48705)
CheckMemberSize(struct _xmlEntity,SystemID,4,10,48706)
CheckOffset(struct _xmlEntity,SystemID,56,10,48706)
CheckMemberSize(struct _xmlEntity,nexte,4,10,48707)
CheckOffset(struct _xmlEntity,nexte,60,10,48707)
CheckMemberSize(struct _xmlEntity,URI,4,10,48708)
CheckOffset(struct _xmlEntity,URI,64,10,48708)
CheckMemberSize(struct _xmlEntity,owner,4,10,48709)
CheckOffset(struct _xmlEntity,owner,68,10,48709)
#elif defined __powerpc64__
CheckTypeSize(struct _xmlEntity,136, 14716, 9, , NULL, 0, NULL)
CheckMemberSize(struct _xmlEntity,type,4,9,48687)
CheckOffset(struct _xmlEntity,type,8,9,48687)
CheckMemberSize(struct _xmlEntity,name,8,9,48688)
CheckOffset(struct _xmlEntity,name,16,9,48688)
CheckMemberSize(struct _xmlEntity,children,8,9,48689)
CheckOffset(struct _xmlEntity,children,24,9,48689)
CheckMemberSize(struct _xmlEntity,last,8,9,48690)
CheckOffset(struct _xmlEntity,last,32,9,48690)
CheckMemberSize(struct _xmlEntity,parent,8,9,48691)
CheckOffset(struct _xmlEntity,parent,40,9,48691)
CheckMemberSize(struct _xmlEntity,next,8,9,48692)
CheckOffset(struct _xmlEntity,next,48,9,48692)
CheckMemberSize(struct _xmlEntity,prev,8,9,48693)
CheckOffset(struct _xmlEntity,prev,56,9,48693)
CheckMemberSize(struct _xmlEntity,doc,8,9,48694)
CheckOffset(struct _xmlEntity,doc,64,9,48694)
CheckMemberSize(struct _xmlEntity,orig,8,9,48695)
CheckOffset(struct _xmlEntity,orig,72,9,48695)
CheckMemberSize(struct _xmlEntity,content,8,9,48696)
CheckOffset(struct _xmlEntity,content,80,9,48696)
CheckMemberSize(struct _xmlEntity,length,4,9,48697)
CheckOffset(struct _xmlEntity,length,88,9,48697)
CheckMemberSize(struct _xmlEntity,etype,4,9,48704)
CheckOffset(struct _xmlEntity,etype,92,9,48704)
CheckMemberSize(struct _xmlEntity,ExternalID,8,9,48705)
CheckOffset(struct _xmlEntity,ExternalID,96,9,48705)
CheckMemberSize(struct _xmlEntity,SystemID,8,9,48706)
CheckOffset(struct _xmlEntity,SystemID,104,9,48706)
CheckMemberSize(struct _xmlEntity,nexte,8,9,48707)
CheckOffset(struct _xmlEntity,nexte,112,9,48707)
CheckMemberSize(struct _xmlEntity,URI,8,9,48708)
CheckOffset(struct _xmlEntity,URI,120,9,48708)
CheckMemberSize(struct _xmlEntity,owner,4,9,48709)
CheckOffset(struct _xmlEntity,owner,128,9,48709)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _xmlEntity,72, 14716, 6, , NULL, 0, NULL)
CheckMemberSize(struct _xmlEntity,type,4,6,48687)
CheckOffset(struct _xmlEntity,type,4,6,48687)
CheckMemberSize(struct _xmlEntity,name,4,6,48688)
CheckOffset(struct _xmlEntity,name,8,6,48688)
CheckMemberSize(struct _xmlEntity,children,4,6,48689)
CheckOffset(struct _xmlEntity,children,12,6,48689)
CheckMemberSize(struct _xmlEntity,last,4,6,48690)
CheckOffset(struct _xmlEntity,last,16,6,48690)
CheckMemberSize(struct _xmlEntity,parent,4,6,48691)
CheckOffset(struct _xmlEntity,parent,20,6,48691)
CheckMemberSize(struct _xmlEntity,next,4,6,48692)
CheckOffset(struct _xmlEntity,next,24,6,48692)
CheckMemberSize(struct _xmlEntity,prev,4,6,48693)
CheckOffset(struct _xmlEntity,prev,28,6,48693)
CheckMemberSize(struct _xmlEntity,doc,4,6,48694)
CheckOffset(struct _xmlEntity,doc,32,6,48694)
CheckMemberSize(struct _xmlEntity,orig,4,6,48695)
CheckOffset(struct _xmlEntity,orig,36,6,48695)
CheckMemberSize(struct _xmlEntity,content,4,6,48696)
CheckOffset(struct _xmlEntity,content,40,6,48696)
CheckMemberSize(struct _xmlEntity,length,4,6,48697)
CheckOffset(struct _xmlEntity,length,44,6,48697)
CheckMemberSize(struct _xmlEntity,etype,4,6,48704)
CheckOffset(struct _xmlEntity,etype,48,6,48704)
CheckMemberSize(struct _xmlEntity,ExternalID,4,6,48705)
CheckOffset(struct _xmlEntity,ExternalID,52,6,48705)
CheckMemberSize(struct _xmlEntity,SystemID,4,6,48706)
CheckOffset(struct _xmlEntity,SystemID,56,6,48706)
CheckMemberSize(struct _xmlEntity,nexte,4,6,48707)
CheckOffset(struct _xmlEntity,nexte,60,6,48707)
CheckMemberSize(struct _xmlEntity,URI,4,6,48708)
CheckOffset(struct _xmlEntity,URI,64,6,48708)
CheckMemberSize(struct _xmlEntity,owner,4,6,48709)
CheckOffset(struct _xmlEntity,owner,68,6,48709)
#elif defined __ia64__
CheckTypeSize(struct _xmlEntity,136, 14716, 3, , NULL, 0, NULL)
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
#elif defined __i386__
CheckTypeSize(struct _xmlEntity,72, 14716, 2, , NULL, 0, NULL)
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
#elif 1
CheckTypeSize(struct _xmlEntity,0, 14716, 1, , NULL, 0, NULL)
Msg("Missing member data for _xmlEntity on All\n");
CheckOffset(struct _xmlEntity,_private,0,1,48686)
#endif

#if defined __s390x__
CheckTypeSize(xmlEntityType,4, 14718, 12, 3.1, NULL, 14717, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlEntityType,4, 14718, 11, 3.1, NULL, 14717, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlEntityType,4, 14718, 10, 3.1, NULL, 14717, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlEntityType,4, 14718, 9, 3.1, NULL, 14717, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlEntityType,4, 14718, 6, 3.1, NULL, 14717, NULL)
#elif defined __ia64__
CheckTypeSize(xmlEntityType,4, 14718, 3, 3.1, NULL, 14717, NULL)
#elif defined __i386__
CheckTypeSize(xmlEntityType,4, 14718, 2, 3.1, NULL, 14717, NULL)
#else
Msg("Find size of xmlEntityType (14718)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14717,NULL);\n",architecture,14718,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlEntity,136, 14720, 12, 3.1, NULL, 14716, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlEntity,136, 14720, 11, 3.1, NULL, 14716, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlEntity,72, 14720, 10, 3.1, NULL, 14716, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlEntity,136, 14720, 9, 3.1, NULL, 14716, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlEntity,72, 14720, 6, 3.1, NULL, 14716, NULL)
#elif defined __ia64__
CheckTypeSize(xmlEntity,136, 14720, 3, 3.1, NULL, 14716, NULL)
#elif defined __i386__
CheckTypeSize(xmlEntity,72, 14720, 2, 3.1, NULL, 14716, NULL)
#else
Msg("Find size of xmlEntity (14720)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14716,NULL);\n",architecture,14720,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlEntityPtr,8, 14722, 12, 3.1, NULL, 14721, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlEntityPtr,8, 14722, 11, 3.1, NULL, 14721, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlEntityPtr,4, 14722, 10, 3.1, NULL, 14721, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlEntityPtr,8, 14722, 9, 3.1, NULL, 14721, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlEntityPtr,4, 14722, 6, 3.1, NULL, 14721, NULL)
#elif defined __ia64__
CheckTypeSize(xmlEntityPtr,8, 14722, 3, 3.1, NULL, 14721, NULL)
#elif defined __i386__
CheckTypeSize(xmlEntityPtr,4, 14722, 2, 3.1, NULL, 14721, NULL)
#else
Msg("Find size of xmlEntityPtr (14722)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14721,NULL);\n",architecture,14722,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlEntitiesTablePtr,8, 14726, 12, 3.1, NULL, 14725, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlEntitiesTablePtr,8, 14726, 11, 3.1, NULL, 14725, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlEntitiesTablePtr,4, 14726, 10, 3.1, NULL, 14725, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlEntitiesTablePtr,8, 14726, 9, 3.1, NULL, 14725, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlEntitiesTablePtr,4, 14726, 6, 3.1, NULL, 14725, NULL)
#elif defined __ia64__
CheckTypeSize(xmlEntitiesTablePtr,8, 14726, 3, 3.1, NULL, 14725, NULL)
#elif defined __i386__
CheckTypeSize(xmlEntitiesTablePtr,4, 14726, 2, 3.1, NULL, 14725, NULL)
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
