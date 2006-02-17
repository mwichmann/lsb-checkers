/*
 * Test of libxml2/libxml/xpath.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include <libxml/xmlregexp.h>
struct _xmlXPathCompExpr {} ;
#include "libxml2/libxml/xpath.h"



#ifdef TET_TEST
void libxml2_libxml_xpath_h()
{
#else
int libxml2_libxml_xpath_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in libxml2/libxml/xpath.h\n");
#endif

printf("Checking data structures in libxml2/libxml/xpath.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for XML_XPATH_CHECKNS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XML_XPATH_NOVAR */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for xmlXPathNodeSetGetLength(ns) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for xmlXPathNodeSetItem(ns,index) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for xmlXPathNodeSetIsEmpty(ns) */
#endif

#if __i386__
CheckTypeSize(xmlXPathCompExpr,0, 14856, 2)
#elif __x86_64__
CheckTypeSize(xmlXPathCompExpr,0, 14856, 11)
#elif __ia64__
CheckTypeSize(xmlXPathCompExpr,0, 14856, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14856,0);
Msg("Find size of xmlXPathCompExpr (14856)\n");
#endif

#if __i386__
CheckTypeSize(xmlXPathCompExpr *,4, 14857, 2)
#elif __x86_64__
CheckTypeSize(xmlXPathCompExpr *,8, 14857, 11)
#elif __ia64__
CheckTypeSize(xmlXPathCompExpr *,8, 14857, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14857,0);
Msg("Find size of xmlXPathCompExpr * (14857)\n");
#endif

#if __i386__
CheckTypeSize(xmlXPathCompExprPtr,4, 14858, 2)
#elif __x86_64__
CheckTypeSize(xmlXPathCompExprPtr,8, 14858, 11)
#elif __ia64__
CheckTypeSize(xmlXPathCompExprPtr,8, 14858, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14858,0);
Msg("Find size of xmlXPathCompExprPtr (14858)\n");
#endif

#if __i386__
CheckTypeSize(struct _xmlXPathContext,200, 14859, 2)
CheckMemberSize(struct _xmlXPathContext,node,4,2,48985)
CheckOffset(struct _xmlXPathContext,node,4,2,48985)
CheckMemberSize(struct _xmlXPathContext,nb_variables_unused,4,2,48986)
CheckOffset(struct _xmlXPathContext,nb_variables_unused,8,2,48986)
CheckMemberSize(struct _xmlXPathContext,max_variables_unused,4,2,48987)
CheckOffset(struct _xmlXPathContext,max_variables_unused,12,2,48987)
CheckMemberSize(struct _xmlXPathContext,varHash,4,2,48988)
CheckOffset(struct _xmlXPathContext,varHash,16,2,48988)
CheckMemberSize(struct _xmlXPathContext,nb_types,4,2,48989)
CheckOffset(struct _xmlXPathContext,nb_types,20,2,48989)
CheckMemberSize(struct _xmlXPathContext,max_types,4,2,48990)
CheckOffset(struct _xmlXPathContext,max_types,24,2,48990)
CheckMemberSize(struct _xmlXPathContext,types,4,2,49017)
CheckOffset(struct _xmlXPathContext,types,28,2,49017)
CheckMemberSize(struct _xmlXPathContext,nb_funcs_unused,4,2,49018)
CheckOffset(struct _xmlXPathContext,nb_funcs_unused,32,2,49018)
CheckMemberSize(struct _xmlXPathContext,max_funcs_unused,4,2,49019)
CheckOffset(struct _xmlXPathContext,max_funcs_unused,36,2,49019)
CheckMemberSize(struct _xmlXPathContext,funcHash,4,2,49020)
CheckOffset(struct _xmlXPathContext,funcHash,40,2,49020)
CheckMemberSize(struct _xmlXPathContext,nb_axis,4,2,49021)
CheckOffset(struct _xmlXPathContext,nb_axis,44,2,49021)
CheckMemberSize(struct _xmlXPathContext,max_axis,4,2,49022)
CheckOffset(struct _xmlXPathContext,max_axis,48,2,49022)
CheckMemberSize(struct _xmlXPathContext,axis,4,2,49038)
CheckOffset(struct _xmlXPathContext,axis,52,2,49038)
CheckMemberSize(struct _xmlXPathContext,namespaces,4,2,49039)
CheckOffset(struct _xmlXPathContext,namespaces,56,2,49039)
CheckMemberSize(struct _xmlXPathContext,nsNr,4,2,49040)
CheckOffset(struct _xmlXPathContext,nsNr,60,2,49040)
CheckMemberSize(struct _xmlXPathContext,user,4,2,49041)
CheckOffset(struct _xmlXPathContext,user,64,2,49041)
CheckMemberSize(struct _xmlXPathContext,contextSize,4,2,49042)
CheckOffset(struct _xmlXPathContext,contextSize,68,2,49042)
CheckMemberSize(struct _xmlXPathContext,proximityPosition,4,2,49043)
CheckOffset(struct _xmlXPathContext,proximityPosition,72,2,49043)
CheckMemberSize(struct _xmlXPathContext,xptr,4,2,49044)
CheckOffset(struct _xmlXPathContext,xptr,76,2,49044)
CheckMemberSize(struct _xmlXPathContext,here,4,2,49045)
CheckOffset(struct _xmlXPathContext,here,80,2,49045)
CheckMemberSize(struct _xmlXPathContext,origin,4,2,49046)
CheckOffset(struct _xmlXPathContext,origin,84,2,49046)
CheckMemberSize(struct _xmlXPathContext,nsHash,4,2,49047)
CheckOffset(struct _xmlXPathContext,nsHash,88,2,49047)
CheckMemberSize(struct _xmlXPathContext,varLookupFunc,4,2,49051)
CheckOffset(struct _xmlXPathContext,varLookupFunc,92,2,49051)
CheckMemberSize(struct _xmlXPathContext,varLookupData,4,2,49052)
CheckOffset(struct _xmlXPathContext,varLookupData,96,2,49052)
CheckMemberSize(struct _xmlXPathContext,extra,4,2,49053)
CheckOffset(struct _xmlXPathContext,extra,100,2,49053)
CheckMemberSize(struct _xmlXPathContext,function,4,2,49054)
CheckOffset(struct _xmlXPathContext,function,104,2,49054)
CheckMemberSize(struct _xmlXPathContext,functionURI,4,2,49055)
CheckOffset(struct _xmlXPathContext,functionURI,108,2,49055)
CheckMemberSize(struct _xmlXPathContext,funcLookupFunc,4,2,49061)
CheckOffset(struct _xmlXPathContext,funcLookupFunc,112,2,49061)
CheckMemberSize(struct _xmlXPathContext,funcLookupData,4,2,49062)
CheckOffset(struct _xmlXPathContext,funcLookupData,116,2,49062)
CheckMemberSize(struct _xmlXPathContext,tmpNsList,4,2,49063)
CheckOffset(struct _xmlXPathContext,tmpNsList,120,2,49063)
CheckMemberSize(struct _xmlXPathContext,tmpNsNr,4,2,49064)
CheckOffset(struct _xmlXPathContext,tmpNsNr,124,2,49064)
CheckMemberSize(struct _xmlXPathContext,userData,4,2,49065)
CheckOffset(struct _xmlXPathContext,userData,128,2,49065)
CheckMemberSize(struct _xmlXPathContext,error,4,2,49066)
CheckOffset(struct _xmlXPathContext,error,132,2,49066)
CheckMemberSize(struct _xmlXPathContext,lastError,52,2,49067)
CheckOffset(struct _xmlXPathContext,lastError,136,2,49067)
CheckMemberSize(struct _xmlXPathContext,debugNode,4,2,49068)
CheckOffset(struct _xmlXPathContext,debugNode,188,2,49068)
CheckMemberSize(struct _xmlXPathContext,dict,4,2,49069)
CheckOffset(struct _xmlXPathContext,dict,192,2,49069)
CheckMemberSize(struct _xmlXPathContext,flags,4,2,49070)
CheckOffset(struct _xmlXPathContext,flags,196,2,49070)
#elif __x86_64__
CheckTypeSize(struct _xmlXPathContext,344, 14859, 11)
CheckMemberSize(struct _xmlXPathContext,node,8,11,48985)
CheckOffset(struct _xmlXPathContext,node,8,11,48985)
CheckMemberSize(struct _xmlXPathContext,nb_variables_unused,4,11,48986)
CheckOffset(struct _xmlXPathContext,nb_variables_unused,16,11,48986)
CheckMemberSize(struct _xmlXPathContext,max_variables_unused,4,11,48987)
CheckOffset(struct _xmlXPathContext,max_variables_unused,20,11,48987)
CheckMemberSize(struct _xmlXPathContext,varHash,8,11,48988)
CheckOffset(struct _xmlXPathContext,varHash,24,11,48988)
CheckMemberSize(struct _xmlXPathContext,nb_types,4,11,48989)
CheckOffset(struct _xmlXPathContext,nb_types,32,11,48989)
CheckMemberSize(struct _xmlXPathContext,max_types,4,11,48990)
CheckOffset(struct _xmlXPathContext,max_types,36,11,48990)
CheckMemberSize(struct _xmlXPathContext,types,8,11,49017)
CheckOffset(struct _xmlXPathContext,types,40,11,49017)
CheckMemberSize(struct _xmlXPathContext,nb_funcs_unused,4,11,49018)
CheckOffset(struct _xmlXPathContext,nb_funcs_unused,48,11,49018)
CheckMemberSize(struct _xmlXPathContext,max_funcs_unused,4,11,49019)
CheckOffset(struct _xmlXPathContext,max_funcs_unused,52,11,49019)
CheckMemberSize(struct _xmlXPathContext,funcHash,8,11,49020)
CheckOffset(struct _xmlXPathContext,funcHash,56,11,49020)
CheckMemberSize(struct _xmlXPathContext,nb_axis,4,11,49021)
CheckOffset(struct _xmlXPathContext,nb_axis,64,11,49021)
CheckMemberSize(struct _xmlXPathContext,max_axis,4,11,49022)
CheckOffset(struct _xmlXPathContext,max_axis,68,11,49022)
CheckMemberSize(struct _xmlXPathContext,axis,8,11,49038)
CheckOffset(struct _xmlXPathContext,axis,72,11,49038)
CheckMemberSize(struct _xmlXPathContext,namespaces,8,11,49039)
CheckOffset(struct _xmlXPathContext,namespaces,80,11,49039)
CheckMemberSize(struct _xmlXPathContext,nsNr,4,11,49040)
CheckOffset(struct _xmlXPathContext,nsNr,88,11,49040)
CheckMemberSize(struct _xmlXPathContext,user,8,11,49041)
CheckOffset(struct _xmlXPathContext,user,96,11,49041)
CheckMemberSize(struct _xmlXPathContext,contextSize,4,11,49042)
CheckOffset(struct _xmlXPathContext,contextSize,104,11,49042)
CheckMemberSize(struct _xmlXPathContext,proximityPosition,4,11,49043)
CheckOffset(struct _xmlXPathContext,proximityPosition,108,11,49043)
CheckMemberSize(struct _xmlXPathContext,xptr,4,11,49044)
CheckOffset(struct _xmlXPathContext,xptr,112,11,49044)
CheckMemberSize(struct _xmlXPathContext,here,8,11,49045)
CheckOffset(struct _xmlXPathContext,here,120,11,49045)
CheckMemberSize(struct _xmlXPathContext,origin,8,11,49046)
CheckOffset(struct _xmlXPathContext,origin,128,11,49046)
CheckMemberSize(struct _xmlXPathContext,nsHash,8,11,49047)
CheckOffset(struct _xmlXPathContext,nsHash,136,11,49047)
CheckMemberSize(struct _xmlXPathContext,varLookupFunc,8,11,49051)
CheckOffset(struct _xmlXPathContext,varLookupFunc,144,11,49051)
CheckMemberSize(struct _xmlXPathContext,varLookupData,8,11,49052)
CheckOffset(struct _xmlXPathContext,varLookupData,152,11,49052)
CheckMemberSize(struct _xmlXPathContext,extra,8,11,49053)
CheckOffset(struct _xmlXPathContext,extra,160,11,49053)
CheckMemberSize(struct _xmlXPathContext,function,8,11,49054)
CheckOffset(struct _xmlXPathContext,function,168,11,49054)
CheckMemberSize(struct _xmlXPathContext,functionURI,8,11,49055)
CheckOffset(struct _xmlXPathContext,functionURI,176,11,49055)
CheckMemberSize(struct _xmlXPathContext,funcLookupFunc,8,11,49061)
CheckOffset(struct _xmlXPathContext,funcLookupFunc,184,11,49061)
CheckMemberSize(struct _xmlXPathContext,funcLookupData,8,11,49062)
CheckOffset(struct _xmlXPathContext,funcLookupData,192,11,49062)
CheckMemberSize(struct _xmlXPathContext,tmpNsList,8,11,49063)
CheckOffset(struct _xmlXPathContext,tmpNsList,200,11,49063)
CheckMemberSize(struct _xmlXPathContext,tmpNsNr,4,11,49064)
CheckOffset(struct _xmlXPathContext,tmpNsNr,208,11,49064)
CheckMemberSize(struct _xmlXPathContext,userData,8,11,49065)
CheckOffset(struct _xmlXPathContext,userData,216,11,49065)
CheckMemberSize(struct _xmlXPathContext,error,8,11,49066)
CheckOffset(struct _xmlXPathContext,error,224,11,49066)
CheckMemberSize(struct _xmlXPathContext,lastError,88,11,49067)
CheckOffset(struct _xmlXPathContext,lastError,232,11,49067)
CheckMemberSize(struct _xmlXPathContext,debugNode,8,11,49068)
CheckOffset(struct _xmlXPathContext,debugNode,320,11,49068)
CheckMemberSize(struct _xmlXPathContext,dict,8,11,49069)
CheckOffset(struct _xmlXPathContext,dict,328,11,49069)
CheckMemberSize(struct _xmlXPathContext,flags,4,11,49070)
CheckOffset(struct _xmlXPathContext,flags,336,11,49070)
#elif __ia64__
CheckTypeSize(struct _xmlXPathContext,344, 14859, 3)
CheckMemberSize(struct _xmlXPathContext,node,8,3,48985)
CheckOffset(struct _xmlXPathContext,node,8,3,48985)
CheckMemberSize(struct _xmlXPathContext,nb_variables_unused,4,3,48986)
CheckOffset(struct _xmlXPathContext,nb_variables_unused,16,3,48986)
CheckMemberSize(struct _xmlXPathContext,max_variables_unused,4,3,48987)
CheckOffset(struct _xmlXPathContext,max_variables_unused,20,3,48987)
CheckMemberSize(struct _xmlXPathContext,varHash,8,3,48988)
CheckOffset(struct _xmlXPathContext,varHash,24,3,48988)
CheckMemberSize(struct _xmlXPathContext,nb_types,4,3,48989)
CheckOffset(struct _xmlXPathContext,nb_types,32,3,48989)
CheckMemberSize(struct _xmlXPathContext,max_types,4,3,48990)
CheckOffset(struct _xmlXPathContext,max_types,36,3,48990)
CheckMemberSize(struct _xmlXPathContext,types,8,3,49017)
CheckOffset(struct _xmlXPathContext,types,40,3,49017)
CheckMemberSize(struct _xmlXPathContext,nb_funcs_unused,4,3,49018)
CheckOffset(struct _xmlXPathContext,nb_funcs_unused,48,3,49018)
CheckMemberSize(struct _xmlXPathContext,max_funcs_unused,4,3,49019)
CheckOffset(struct _xmlXPathContext,max_funcs_unused,52,3,49019)
CheckMemberSize(struct _xmlXPathContext,funcHash,8,3,49020)
CheckOffset(struct _xmlXPathContext,funcHash,56,3,49020)
CheckMemberSize(struct _xmlXPathContext,nb_axis,4,3,49021)
CheckOffset(struct _xmlXPathContext,nb_axis,64,3,49021)
CheckMemberSize(struct _xmlXPathContext,max_axis,4,3,49022)
CheckOffset(struct _xmlXPathContext,max_axis,68,3,49022)
CheckMemberSize(struct _xmlXPathContext,axis,8,3,49038)
CheckOffset(struct _xmlXPathContext,axis,72,3,49038)
CheckMemberSize(struct _xmlXPathContext,namespaces,8,3,49039)
CheckOffset(struct _xmlXPathContext,namespaces,80,3,49039)
CheckMemberSize(struct _xmlXPathContext,nsNr,4,3,49040)
CheckOffset(struct _xmlXPathContext,nsNr,88,3,49040)
CheckMemberSize(struct _xmlXPathContext,user,8,3,49041)
CheckOffset(struct _xmlXPathContext,user,96,3,49041)
CheckMemberSize(struct _xmlXPathContext,contextSize,4,3,49042)
CheckOffset(struct _xmlXPathContext,contextSize,104,3,49042)
CheckMemberSize(struct _xmlXPathContext,proximityPosition,4,3,49043)
CheckOffset(struct _xmlXPathContext,proximityPosition,108,3,49043)
CheckMemberSize(struct _xmlXPathContext,xptr,4,3,49044)
CheckOffset(struct _xmlXPathContext,xptr,112,3,49044)
CheckMemberSize(struct _xmlXPathContext,here,8,3,49045)
CheckOffset(struct _xmlXPathContext,here,120,3,49045)
CheckMemberSize(struct _xmlXPathContext,origin,8,3,49046)
CheckOffset(struct _xmlXPathContext,origin,128,3,49046)
CheckMemberSize(struct _xmlXPathContext,nsHash,8,3,49047)
CheckOffset(struct _xmlXPathContext,nsHash,136,3,49047)
CheckMemberSize(struct _xmlXPathContext,varLookupFunc,8,3,49051)
CheckOffset(struct _xmlXPathContext,varLookupFunc,144,3,49051)
CheckMemberSize(struct _xmlXPathContext,varLookupData,8,3,49052)
CheckOffset(struct _xmlXPathContext,varLookupData,152,3,49052)
CheckMemberSize(struct _xmlXPathContext,extra,8,3,49053)
CheckOffset(struct _xmlXPathContext,extra,160,3,49053)
CheckMemberSize(struct _xmlXPathContext,function,8,3,49054)
CheckOffset(struct _xmlXPathContext,function,168,3,49054)
CheckMemberSize(struct _xmlXPathContext,functionURI,8,3,49055)
CheckOffset(struct _xmlXPathContext,functionURI,176,3,49055)
CheckMemberSize(struct _xmlXPathContext,funcLookupFunc,8,3,49061)
CheckOffset(struct _xmlXPathContext,funcLookupFunc,184,3,49061)
CheckMemberSize(struct _xmlXPathContext,funcLookupData,8,3,49062)
CheckOffset(struct _xmlXPathContext,funcLookupData,192,3,49062)
CheckMemberSize(struct _xmlXPathContext,tmpNsList,8,3,49063)
CheckOffset(struct _xmlXPathContext,tmpNsList,200,3,49063)
CheckMemberSize(struct _xmlXPathContext,tmpNsNr,4,3,49064)
CheckOffset(struct _xmlXPathContext,tmpNsNr,208,3,49064)
CheckMemberSize(struct _xmlXPathContext,userData,8,3,49065)
CheckOffset(struct _xmlXPathContext,userData,216,3,49065)
CheckMemberSize(struct _xmlXPathContext,error,8,3,49066)
CheckOffset(struct _xmlXPathContext,error,224,3,49066)
CheckMemberSize(struct _xmlXPathContext,lastError,88,3,49067)
CheckOffset(struct _xmlXPathContext,lastError,232,3,49067)
CheckMemberSize(struct _xmlXPathContext,debugNode,8,3,49068)
CheckOffset(struct _xmlXPathContext,debugNode,320,3,49068)
CheckMemberSize(struct _xmlXPathContext,dict,8,3,49069)
CheckOffset(struct _xmlXPathContext,dict,328,3,49069)
CheckMemberSize(struct _xmlXPathContext,flags,4,3,49070)
CheckOffset(struct _xmlXPathContext,flags,336,3,49070)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14859,0);
Msg("Find size of _xmlXPathContext (14859)\n");
#endif

#if __i386__
CheckTypeSize(struct _xmlXPathType,8, 14860, 2)
CheckMemberSize(struct _xmlXPathType,func,4,2,49016)
CheckOffset(struct _xmlXPathType,func,4,2,49016)
#elif __x86_64__
CheckTypeSize(struct _xmlXPathType,16, 14860, 11)
CheckMemberSize(struct _xmlXPathType,func,8,11,49016)
CheckOffset(struct _xmlXPathType,func,8,11,49016)
#elif __ia64__
CheckTypeSize(struct _xmlXPathType,16, 14860, 3)
CheckMemberSize(struct _xmlXPathType,func,8,3,49016)
CheckOffset(struct _xmlXPathType,func,8,3,49016)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14860,0);
Msg("Find size of _xmlXPathType (14860)\n");
#endif

#if __i386__
CheckTypeSize(struct _xmlXPathObject,40, 14861, 2)
CheckMemberSize(struct _xmlXPathObject,nodesetval,4,2,49006)
CheckOffset(struct _xmlXPathObject,nodesetval,4,2,49006)
CheckMemberSize(struct _xmlXPathObject,boolval,4,2,49007)
CheckOffset(struct _xmlXPathObject,boolval,8,2,49007)
CheckMemberSize(struct _xmlXPathObject,floatval,8,2,49008)
CheckOffset(struct _xmlXPathObject,floatval,12,2,49008)
CheckMemberSize(struct _xmlXPathObject,stringval,4,2,49009)
CheckOffset(struct _xmlXPathObject,stringval,20,2,49009)
CheckMemberSize(struct _xmlXPathObject,user,4,2,49010)
CheckOffset(struct _xmlXPathObject,user,24,2,49010)
CheckMemberSize(struct _xmlXPathObject,index,4,2,49011)
CheckOffset(struct _xmlXPathObject,index,28,2,49011)
CheckMemberSize(struct _xmlXPathObject,user2,4,2,49012)
CheckOffset(struct _xmlXPathObject,user2,32,2,49012)
CheckMemberSize(struct _xmlXPathObject,index2,4,2,49013)
CheckOffset(struct _xmlXPathObject,index2,36,2,49013)
#elif __x86_64__
CheckTypeSize(struct _xmlXPathObject,72, 14861, 11)
CheckMemberSize(struct _xmlXPathObject,nodesetval,8,11,49006)
CheckOffset(struct _xmlXPathObject,nodesetval,8,11,49006)
CheckMemberSize(struct _xmlXPathObject,boolval,4,11,49007)
CheckOffset(struct _xmlXPathObject,boolval,16,11,49007)
CheckMemberSize(struct _xmlXPathObject,floatval,8,11,49008)
CheckOffset(struct _xmlXPathObject,floatval,24,11,49008)
CheckMemberSize(struct _xmlXPathObject,stringval,8,11,49009)
CheckOffset(struct _xmlXPathObject,stringval,32,11,49009)
CheckMemberSize(struct _xmlXPathObject,user,8,11,49010)
CheckOffset(struct _xmlXPathObject,user,40,11,49010)
CheckMemberSize(struct _xmlXPathObject,index,4,11,49011)
CheckOffset(struct _xmlXPathObject,index,48,11,49011)
CheckMemberSize(struct _xmlXPathObject,user2,8,11,49012)
CheckOffset(struct _xmlXPathObject,user2,56,11,49012)
CheckMemberSize(struct _xmlXPathObject,index2,4,11,49013)
CheckOffset(struct _xmlXPathObject,index2,64,11,49013)
#elif __ia64__
CheckTypeSize(struct _xmlXPathObject,72, 14861, 3)
CheckMemberSize(struct _xmlXPathObject,nodesetval,8,3,49006)
CheckOffset(struct _xmlXPathObject,nodesetval,8,3,49006)
CheckMemberSize(struct _xmlXPathObject,boolval,4,3,49007)
CheckOffset(struct _xmlXPathObject,boolval,16,3,49007)
CheckMemberSize(struct _xmlXPathObject,floatval,8,3,49008)
CheckOffset(struct _xmlXPathObject,floatval,24,3,49008)
CheckMemberSize(struct _xmlXPathObject,stringval,8,3,49009)
CheckOffset(struct _xmlXPathObject,stringval,32,3,49009)
CheckMemberSize(struct _xmlXPathObject,user,8,3,49010)
CheckOffset(struct _xmlXPathObject,user,40,3,49010)
CheckMemberSize(struct _xmlXPathObject,index,4,3,49011)
CheckOffset(struct _xmlXPathObject,index,48,3,49011)
CheckMemberSize(struct _xmlXPathObject,user2,8,3,49012)
CheckOffset(struct _xmlXPathObject,user2,56,3,49012)
CheckMemberSize(struct _xmlXPathObject,index2,4,3,49013)
CheckOffset(struct _xmlXPathObject,index2,64,3,49013)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14861,0);
Msg("Find size of _xmlXPathObject (14861)\n");
#endif

#if __i386__
CheckEnum("XPATH_UNDEFINED",XPATH_UNDEFINED,0);
CheckEnum("XPATH_NODESET",XPATH_NODESET,1);
CheckEnum("XPATH_BOOLEAN",XPATH_BOOLEAN,2);
CheckEnum("XPATH_NUMBER",XPATH_NUMBER,3);
CheckEnum("XPATH_STRING",XPATH_STRING,4);
CheckEnum("XPATH_POINT",XPATH_POINT,5);
CheckEnum("XPATH_RANGE",XPATH_RANGE,6);
CheckEnum("XPATH_LOCATIONSET",XPATH_LOCATIONSET,7);
CheckEnum("XPATH_USERS",XPATH_USERS,8);
CheckEnum("XPATH_XSLT_TREE",XPATH_XSLT_TREE,9);
#elif __x86_64__
CheckEnum("XPATH_UNDEFINED",XPATH_UNDEFINED,0);
CheckEnum("XPATH_NODESET",XPATH_NODESET,1);
CheckEnum("XPATH_BOOLEAN",XPATH_BOOLEAN,2);
CheckEnum("XPATH_NUMBER",XPATH_NUMBER,3);
CheckEnum("XPATH_STRING",XPATH_STRING,4);
CheckEnum("XPATH_POINT",XPATH_POINT,5);
CheckEnum("XPATH_RANGE",XPATH_RANGE,6);
CheckEnum("XPATH_LOCATIONSET",XPATH_LOCATIONSET,7);
CheckEnum("XPATH_USERS",XPATH_USERS,8);
CheckEnum("XPATH_XSLT_TREE",XPATH_XSLT_TREE,9);
#elif __ia64__
CheckEnum("XPATH_UNDEFINED",XPATH_UNDEFINED,0);
CheckEnum("XPATH_NODESET",XPATH_NODESET,1);
CheckEnum("XPATH_BOOLEAN",XPATH_BOOLEAN,2);
CheckEnum("XPATH_NUMBER",XPATH_NUMBER,3);
CheckEnum("XPATH_STRING",XPATH_STRING,4);
CheckEnum("XPATH_POINT",XPATH_POINT,5);
CheckEnum("XPATH_RANGE",XPATH_RANGE,6);
CheckEnum("XPATH_LOCATIONSET",XPATH_LOCATIONSET,7);
CheckEnum("XPATH_USERS",XPATH_USERS,8);
CheckEnum("XPATH_XSLT_TREE",XPATH_XSLT_TREE,9);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14862,0);
Msg("Find size of anon-libxml2/libxml/xpath.h-123 (14862)\n");
#endif

#if __i386__
CheckTypeSize(xmlXPathObjectType,4, 14863, 2)
#elif __x86_64__
CheckTypeSize(xmlXPathObjectType,4, 14863, 11)
#elif __ia64__
CheckTypeSize(xmlXPathObjectType,4, 14863, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14863,0);
Msg("Find size of xmlXPathObjectType (14863)\n");
#endif

#if __i386__
CheckTypeSize(struct _xmlNodeSet,12, 14864, 2)
CheckMemberSize(struct _xmlNodeSet,nodeMax,4,2,49004)
CheckOffset(struct _xmlNodeSet,nodeMax,4,2,49004)
CheckMemberSize(struct _xmlNodeSet,nodeTab,4,2,49005)
CheckOffset(struct _xmlNodeSet,nodeTab,8,2,49005)
#elif __x86_64__
CheckTypeSize(struct _xmlNodeSet,16, 14864, 11)
CheckMemberSize(struct _xmlNodeSet,nodeMax,4,11,49004)
CheckOffset(struct _xmlNodeSet,nodeMax,4,11,49004)
CheckMemberSize(struct _xmlNodeSet,nodeTab,8,11,49005)
CheckOffset(struct _xmlNodeSet,nodeTab,8,11,49005)
#elif __ia64__
CheckTypeSize(struct _xmlNodeSet,16, 14864, 3)
CheckMemberSize(struct _xmlNodeSet,nodeMax,4,3,49004)
CheckOffset(struct _xmlNodeSet,nodeMax,4,3,49004)
CheckMemberSize(struct _xmlNodeSet,nodeTab,8,3,49005)
CheckOffset(struct _xmlNodeSet,nodeTab,8,3,49005)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14864,0);
Msg("Find size of _xmlNodeSet (14864)\n");
#endif

#if __i386__
CheckTypeSize(xmlNodeSet,12, 14865, 2)
#elif __x86_64__
CheckTypeSize(xmlNodeSet,16, 14865, 11)
#elif __ia64__
CheckTypeSize(xmlNodeSet,16, 14865, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14865,0);
Msg("Find size of xmlNodeSet (14865)\n");
#endif

#if __i386__
CheckTypeSize(xmlNodeSet *,4, 14866, 2)
#elif __x86_64__
CheckTypeSize(xmlNodeSet *,8, 14866, 11)
#elif __ia64__
CheckTypeSize(xmlNodeSet *,8, 14866, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14866,0);
Msg("Find size of xmlNodeSet * (14866)\n");
#endif

#if __i386__
CheckTypeSize(xmlNodeSetPtr,4, 14867, 2)
#elif __x86_64__
CheckTypeSize(xmlNodeSetPtr,8, 14867, 11)
#elif __ia64__
CheckTypeSize(xmlNodeSetPtr,8, 14867, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14867,0);
Msg("Find size of xmlNodeSetPtr (14867)\n");
#endif

#if __i386__
CheckTypeSize(xmlXPathObject,40, 14868, 2)
#elif __x86_64__
CheckTypeSize(xmlXPathObject,72, 14868, 11)
#elif __ia64__
CheckTypeSize(xmlXPathObject,72, 14868, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14868,0);
Msg("Find size of xmlXPathObject (14868)\n");
#endif

#if __i386__
CheckTypeSize(xmlXPathObject *,4, 14869, 2)
#elif __x86_64__
CheckTypeSize(xmlXPathObject *,8, 14869, 11)
#elif __ia64__
CheckTypeSize(xmlXPathObject *,8, 14869, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14869,0);
Msg("Find size of xmlXPathObject * (14869)\n");
#endif

#if __i386__
CheckTypeSize(xmlXPathObjectPtr,4, 14870, 2)
#elif __x86_64__
CheckTypeSize(xmlXPathObjectPtr,8, 14870, 11)
#elif __ia64__
CheckTypeSize(xmlXPathObjectPtr,8, 14870, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14870,0);
Msg("Find size of xmlXPathObjectPtr (14870)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14871,0);
Msg("Find size of fptr_xpath_234 (14871)\n");
#endif

#if __i386__
CheckTypeSize(xmlXPathConvertFunc,4, 14872, 2)
#elif __x86_64__
CheckTypeSize(xmlXPathConvertFunc,8, 14872, 11)
#elif __ia64__
CheckTypeSize(xmlXPathConvertFunc,8, 14872, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14872,0);
Msg("Find size of xmlXPathConvertFunc (14872)\n");
#endif

#if __i386__
CheckTypeSize(xmlXPathType,8, 14873, 2)
#elif __x86_64__
CheckTypeSize(xmlXPathType,16, 14873, 11)
#elif __ia64__
CheckTypeSize(xmlXPathType,16, 14873, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14873,0);
Msg("Find size of xmlXPathType (14873)\n");
#endif

#if __i386__
CheckTypeSize(xmlXPathType *,4, 14874, 2)
#elif __x86_64__
CheckTypeSize(xmlXPathType *,8, 14874, 11)
#elif __ia64__
CheckTypeSize(xmlXPathType *,8, 14874, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14874,0);
Msg("Find size of xmlXPathType * (14874)\n");
#endif

#if __i386__
CheckTypeSize(xmlXPathTypePtr,4, 14875, 2)
#elif __x86_64__
CheckTypeSize(xmlXPathTypePtr,8, 14875, 11)
#elif __ia64__
CheckTypeSize(xmlXPathTypePtr,8, 14875, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14875,0);
Msg("Find size of xmlXPathTypePtr (14875)\n");
#endif

#if __i386__
CheckTypeSize(struct _xmlXPathAxis,8, 14876, 2)
CheckMemberSize(struct _xmlXPathAxis,func,4,2,49037)
CheckOffset(struct _xmlXPathAxis,func,4,2,49037)
#elif __x86_64__
CheckTypeSize(struct _xmlXPathAxis,16, 14876, 11)
CheckMemberSize(struct _xmlXPathAxis,func,8,11,49037)
CheckOffset(struct _xmlXPathAxis,func,8,11,49037)
#elif __ia64__
CheckTypeSize(struct _xmlXPathAxis,16, 14876, 3)
CheckMemberSize(struct _xmlXPathAxis,func,8,3,49037)
CheckOffset(struct _xmlXPathAxis,func,8,3,49037)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14876,0);
Msg("Find size of _xmlXPathAxis (14876)\n");
#endif

#if __i386__
CheckTypeSize(struct _xmlXPathParserContext,44, 14877, 2)
CheckMemberSize(struct _xmlXPathParserContext,base,4,2,49025)
CheckOffset(struct _xmlXPathParserContext,base,4,2,49025)
CheckMemberSize(struct _xmlXPathParserContext,error,4,2,49026)
CheckOffset(struct _xmlXPathParserContext,error,8,2,49026)
CheckMemberSize(struct _xmlXPathParserContext,context,4,2,49027)
CheckOffset(struct _xmlXPathParserContext,context,12,2,49027)
CheckMemberSize(struct _xmlXPathParserContext,value,4,2,49028)
CheckOffset(struct _xmlXPathParserContext,value,16,2,49028)
CheckMemberSize(struct _xmlXPathParserContext,valueNr,4,2,49029)
CheckOffset(struct _xmlXPathParserContext,valueNr,20,2,49029)
CheckMemberSize(struct _xmlXPathParserContext,valueMax,4,2,49030)
CheckOffset(struct _xmlXPathParserContext,valueMax,24,2,49030)
CheckMemberSize(struct _xmlXPathParserContext,valueTab,4,2,49031)
CheckOffset(struct _xmlXPathParserContext,valueTab,28,2,49031)
CheckMemberSize(struct _xmlXPathParserContext,comp,4,2,49032)
CheckOffset(struct _xmlXPathParserContext,comp,32,2,49032)
CheckMemberSize(struct _xmlXPathParserContext,xptr,4,2,49033)
CheckOffset(struct _xmlXPathParserContext,xptr,36,2,49033)
CheckMemberSize(struct _xmlXPathParserContext,ancestor,4,2,49034)
CheckOffset(struct _xmlXPathParserContext,ancestor,40,2,49034)
#elif __x86_64__
CheckTypeSize(struct _xmlXPathParserContext,80, 14877, 11)
CheckMemberSize(struct _xmlXPathParserContext,base,8,11,49025)
CheckOffset(struct _xmlXPathParserContext,base,8,11,49025)
CheckMemberSize(struct _xmlXPathParserContext,error,4,11,49026)
CheckOffset(struct _xmlXPathParserContext,error,16,11,49026)
CheckMemberSize(struct _xmlXPathParserContext,context,8,11,49027)
CheckOffset(struct _xmlXPathParserContext,context,24,11,49027)
CheckMemberSize(struct _xmlXPathParserContext,value,8,11,49028)
CheckOffset(struct _xmlXPathParserContext,value,32,11,49028)
CheckMemberSize(struct _xmlXPathParserContext,valueNr,4,11,49029)
CheckOffset(struct _xmlXPathParserContext,valueNr,40,11,49029)
CheckMemberSize(struct _xmlXPathParserContext,valueMax,4,11,49030)
CheckOffset(struct _xmlXPathParserContext,valueMax,44,11,49030)
CheckMemberSize(struct _xmlXPathParserContext,valueTab,8,11,49031)
CheckOffset(struct _xmlXPathParserContext,valueTab,48,11,49031)
CheckMemberSize(struct _xmlXPathParserContext,comp,8,11,49032)
CheckOffset(struct _xmlXPathParserContext,comp,56,11,49032)
CheckMemberSize(struct _xmlXPathParserContext,xptr,4,11,49033)
CheckOffset(struct _xmlXPathParserContext,xptr,64,11,49033)
CheckMemberSize(struct _xmlXPathParserContext,ancestor,8,11,49034)
CheckOffset(struct _xmlXPathParserContext,ancestor,72,11,49034)
#elif __ia64__
CheckTypeSize(struct _xmlXPathParserContext,80, 14877, 3)
CheckMemberSize(struct _xmlXPathParserContext,base,8,3,49025)
CheckOffset(struct _xmlXPathParserContext,base,8,3,49025)
CheckMemberSize(struct _xmlXPathParserContext,error,4,3,49026)
CheckOffset(struct _xmlXPathParserContext,error,16,3,49026)
CheckMemberSize(struct _xmlXPathParserContext,context,8,3,49027)
CheckOffset(struct _xmlXPathParserContext,context,24,3,49027)
CheckMemberSize(struct _xmlXPathParserContext,value,8,3,49028)
CheckOffset(struct _xmlXPathParserContext,value,32,3,49028)
CheckMemberSize(struct _xmlXPathParserContext,valueNr,4,3,49029)
CheckOffset(struct _xmlXPathParserContext,valueNr,40,3,49029)
CheckMemberSize(struct _xmlXPathParserContext,valueMax,4,3,49030)
CheckOffset(struct _xmlXPathParserContext,valueMax,44,3,49030)
CheckMemberSize(struct _xmlXPathParserContext,valueTab,8,3,49031)
CheckOffset(struct _xmlXPathParserContext,valueTab,48,3,49031)
CheckMemberSize(struct _xmlXPathParserContext,comp,8,3,49032)
CheckOffset(struct _xmlXPathParserContext,comp,56,3,49032)
CheckMemberSize(struct _xmlXPathParserContext,xptr,4,3,49033)
CheckOffset(struct _xmlXPathParserContext,xptr,64,3,49033)
CheckMemberSize(struct _xmlXPathParserContext,ancestor,8,3,49034)
CheckOffset(struct _xmlXPathParserContext,ancestor,72,3,49034)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14877,0);
Msg("Find size of _xmlXPathParserContext (14877)\n");
#endif

#if __i386__
CheckTypeSize(xmlXPathContext,200, 14878, 2)
#elif __x86_64__
CheckTypeSize(xmlXPathContext,344, 14878, 11)
#elif __ia64__
CheckTypeSize(xmlXPathContext,344, 14878, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14878,0);
Msg("Find size of xmlXPathContext (14878)\n");
#endif

#if __i386__
CheckTypeSize(xmlXPathContext *,4, 14879, 2)
#elif __x86_64__
CheckTypeSize(xmlXPathContext *,8, 14879, 11)
#elif __ia64__
CheckTypeSize(xmlXPathContext *,8, 14879, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14879,0);
Msg("Find size of xmlXPathContext * (14879)\n");
#endif

#if __i386__
CheckTypeSize(xmlXPathContextPtr,4, 14880, 2)
#elif __x86_64__
CheckTypeSize(xmlXPathContextPtr,8, 14880, 11)
#elif __ia64__
CheckTypeSize(xmlXPathContextPtr,8, 14880, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14880,0);
Msg("Find size of xmlXPathContextPtr (14880)\n");
#endif

#if __i386__
CheckTypeSize(xmlXPathObjectPtr *,4, 14881, 2)
#elif __x86_64__
CheckTypeSize(xmlXPathObjectPtr *,8, 14881, 11)
#elif __ia64__
CheckTypeSize(xmlXPathObjectPtr *,8, 14881, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14881,0);
Msg("Find size of xmlXPathObjectPtr * (14881)\n");
#endif

#if __i386__
CheckTypeSize(xmlXPathParserContext,44, 14882, 2)
#elif __x86_64__
CheckTypeSize(xmlXPathParserContext,80, 14882, 11)
#elif __ia64__
CheckTypeSize(xmlXPathParserContext,80, 14882, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14882,0);
Msg("Find size of xmlXPathParserContext (14882)\n");
#endif

#if __i386__
CheckTypeSize(xmlXPathParserContext *,4, 14883, 2)
#elif __x86_64__
CheckTypeSize(xmlXPathParserContext *,8, 14883, 11)
#elif __ia64__
CheckTypeSize(xmlXPathParserContext *,8, 14883, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14883,0);
Msg("Find size of xmlXPathParserContext * (14883)\n");
#endif

#if __i386__
CheckTypeSize(xmlXPathParserContextPtr,4, 14884, 2)
#elif __x86_64__
CheckTypeSize(xmlXPathParserContextPtr,8, 14884, 11)
#elif __ia64__
CheckTypeSize(xmlXPathParserContextPtr,8, 14884, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14884,0);
Msg("Find size of xmlXPathParserContextPtr (14884)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14885,0);
Msg("Find size of fptr_xpath_319 (14885)\n");
#endif

#if __i386__
CheckTypeSize(xmlXPathAxisFunc,4, 14886, 2)
#elif __x86_64__
CheckTypeSize(xmlXPathAxisFunc,8, 14886, 11)
#elif __ia64__
CheckTypeSize(xmlXPathAxisFunc,8, 14886, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14886,0);
Msg("Find size of xmlXPathAxisFunc (14886)\n");
#endif

#if __i386__
CheckTypeSize(xmlXPathAxis,8, 14887, 2)
#elif __x86_64__
CheckTypeSize(xmlXPathAxis,16, 14887, 11)
#elif __ia64__
CheckTypeSize(xmlXPathAxis,16, 14887, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14887,0);
Msg("Find size of xmlXPathAxis (14887)\n");
#endif

#if __i386__
CheckTypeSize(xmlXPathAxis *,4, 14888, 2)
#elif __x86_64__
CheckTypeSize(xmlXPathAxis *,8, 14888, 11)
#elif __ia64__
CheckTypeSize(xmlXPathAxis *,8, 14888, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14888,0);
Msg("Find size of xmlXPathAxis * (14888)\n");
#endif

#if __i386__
CheckTypeSize(xmlXPathAxisPtr,4, 14889, 2)
#elif __x86_64__
CheckTypeSize(xmlXPathAxisPtr,8, 14889, 11)
#elif __ia64__
CheckTypeSize(xmlXPathAxisPtr,8, 14889, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14889,0);
Msg("Find size of xmlXPathAxisPtr (14889)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14890,0);
Msg("Find size of fptr_xpath_276 (14890)\n");
#endif

#if __i386__
CheckTypeSize(xmlXPathVariableLookupFunc,4, 14891, 2)
#elif __x86_64__
CheckTypeSize(xmlXPathVariableLookupFunc,8, 14891, 11)
#elif __ia64__
CheckTypeSize(xmlXPathVariableLookupFunc,8, 14891, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14891,0);
Msg("Find size of xmlXPathVariableLookupFunc (14891)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14892,0);
Msg("Find size of fptr_xpath_45 (14892)\n");
#endif

#if __i386__
CheckTypeSize(xmlXPathFunction,4, 14893, 2)
#elif __x86_64__
CheckTypeSize(xmlXPathFunction,8, 14893, 11)
#elif __ia64__
CheckTypeSize(xmlXPathFunction,8, 14893, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14893,0);
Msg("Find size of xmlXPathFunction (14893)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14894,0);
Msg("Find size of fptr_xpath_315 (14894)\n");
#endif

#if __i386__
CheckTypeSize(xmlXPathFuncLookupFunc,4, 14895, 2)
#elif __x86_64__
CheckTypeSize(xmlXPathFuncLookupFunc,8, 14895, 11)
#elif __ia64__
CheckTypeSize(xmlXPathFuncLookupFunc,8, 14895, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14895,0);
Msg("Find size of xmlXPathFuncLookupFunc (14895)\n");
#endif

#if __i386__
CheckEnum("XPATH_EXPRESSION_OK",XPATH_EXPRESSION_OK,0);
CheckEnum("XPATH_NUMBER_ERROR",XPATH_NUMBER_ERROR,(0) + 1);
CheckEnum("XPATH_UNFINISHED_LITERAL_ERROR",XPATH_UNFINISHED_LITERAL_ERROR,((0) + 1) + 1);
CheckEnum("XPATH_START_LITERAL_ERROR",XPATH_START_LITERAL_ERROR,(((0) + 1) + 1) + 1);
CheckEnum("XPATH_VARIABLE_REF_ERROR",XPATH_VARIABLE_REF_ERROR,((((0) + 1) + 1) + 1) + 1);
CheckEnum("XPATH_UNDEF_VARIABLE_ERROR",XPATH_UNDEF_VARIABLE_ERROR,(((((0) + 1) + 1) + 1) + 1) + 1);
CheckEnum("XPATH_INVALID_PREDICATE_ERROR",XPATH_INVALID_PREDICATE_ERROR,((((((0) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("XPATH_EXPR_ERROR",XPATH_EXPR_ERROR,(((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("XPATH_UNCLOSED_ERROR",XPATH_UNCLOSED_ERROR,((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("XPATH_UNKNOWN_FUNC_ERROR",XPATH_UNKNOWN_FUNC_ERROR,(((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("XPATH_INVALID_OPERAND",XPATH_INVALID_OPERAND,((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("XPATH_INVALID_TYPE",XPATH_INVALID_TYPE,(((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("XPATH_INVALID_ARITY",XPATH_INVALID_ARITY,((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("XPATH_INVALID_CTXT_SIZE",XPATH_INVALID_CTXT_SIZE,(((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("XPATH_INVALID_CTXT_POSITION",XPATH_INVALID_CTXT_POSITION,((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("XPATH_MEMORY_ERROR",XPATH_MEMORY_ERROR,(((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("XPTR_SYNTAX_ERROR",XPTR_SYNTAX_ERROR,((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("XPTR_RESOURCE_ERROR",XPTR_RESOURCE_ERROR,(((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("XPTR_SUB_RESOURCE_ERROR",XPTR_SUB_RESOURCE_ERROR,((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("XPATH_UNDEF_PREFIX_ERROR",XPATH_UNDEF_PREFIX_ERROR,(((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("XPATH_ENCODING_ERROR",XPATH_ENCODING_ERROR,((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("XPATH_INVALID_CHAR_ERROR",XPATH_INVALID_CHAR_ERROR,(((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("XPATH_INVALID_CTXT",XPATH_INVALID_CTXT,((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
#elif __x86_64__
CheckEnum("XPATH_EXPRESSION_OK",XPATH_EXPRESSION_OK,0);
CheckEnum("XPATH_NUMBER_ERROR",XPATH_NUMBER_ERROR,(0) + 1);
CheckEnum("XPATH_UNFINISHED_LITERAL_ERROR",XPATH_UNFINISHED_LITERAL_ERROR,((0) + 1) + 1);
CheckEnum("XPATH_START_LITERAL_ERROR",XPATH_START_LITERAL_ERROR,(((0) + 1) + 1) + 1);
CheckEnum("XPATH_VARIABLE_REF_ERROR",XPATH_VARIABLE_REF_ERROR,((((0) + 1) + 1) + 1) + 1);
CheckEnum("XPATH_UNDEF_VARIABLE_ERROR",XPATH_UNDEF_VARIABLE_ERROR,(((((0) + 1) + 1) + 1) + 1) + 1);
CheckEnum("XPATH_INVALID_PREDICATE_ERROR",XPATH_INVALID_PREDICATE_ERROR,((((((0) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("XPATH_EXPR_ERROR",XPATH_EXPR_ERROR,(((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("XPATH_UNCLOSED_ERROR",XPATH_UNCLOSED_ERROR,((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("XPATH_UNKNOWN_FUNC_ERROR",XPATH_UNKNOWN_FUNC_ERROR,(((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("XPATH_INVALID_OPERAND",XPATH_INVALID_OPERAND,((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("XPATH_INVALID_TYPE",XPATH_INVALID_TYPE,(((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("XPATH_INVALID_ARITY",XPATH_INVALID_ARITY,((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("XPATH_INVALID_CTXT_SIZE",XPATH_INVALID_CTXT_SIZE,(((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("XPATH_INVALID_CTXT_POSITION",XPATH_INVALID_CTXT_POSITION,((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("XPATH_MEMORY_ERROR",XPATH_MEMORY_ERROR,(((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("XPTR_SYNTAX_ERROR",XPTR_SYNTAX_ERROR,((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("XPTR_RESOURCE_ERROR",XPTR_RESOURCE_ERROR,(((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("XPTR_SUB_RESOURCE_ERROR",XPTR_SUB_RESOURCE_ERROR,((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("XPATH_UNDEF_PREFIX_ERROR",XPATH_UNDEF_PREFIX_ERROR,(((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("XPATH_ENCODING_ERROR",XPATH_ENCODING_ERROR,((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("XPATH_INVALID_CHAR_ERROR",XPATH_INVALID_CHAR_ERROR,(((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("XPATH_INVALID_CTXT",XPATH_INVALID_CTXT,((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
#elif __ia64__
CheckEnum("XPATH_EXPRESSION_OK",XPATH_EXPRESSION_OK,0);
CheckEnum("XPATH_NUMBER_ERROR",XPATH_NUMBER_ERROR,(0) + 1);
CheckEnum("XPATH_UNFINISHED_LITERAL_ERROR",XPATH_UNFINISHED_LITERAL_ERROR,((0) + 1) + 1);
CheckEnum("XPATH_START_LITERAL_ERROR",XPATH_START_LITERAL_ERROR,(((0) + 1) + 1) + 1);
CheckEnum("XPATH_VARIABLE_REF_ERROR",XPATH_VARIABLE_REF_ERROR,((((0) + 1) + 1) + 1) + 1);
CheckEnum("XPATH_UNDEF_VARIABLE_ERROR",XPATH_UNDEF_VARIABLE_ERROR,(((((0) + 1) + 1) + 1) + 1) + 1);
CheckEnum("XPATH_INVALID_PREDICATE_ERROR",XPATH_INVALID_PREDICATE_ERROR,((((((0) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("XPATH_EXPR_ERROR",XPATH_EXPR_ERROR,(((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("XPATH_UNCLOSED_ERROR",XPATH_UNCLOSED_ERROR,((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("XPATH_UNKNOWN_FUNC_ERROR",XPATH_UNKNOWN_FUNC_ERROR,(((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("XPATH_INVALID_OPERAND",XPATH_INVALID_OPERAND,((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("XPATH_INVALID_TYPE",XPATH_INVALID_TYPE,(((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("XPATH_INVALID_ARITY",XPATH_INVALID_ARITY,((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("XPATH_INVALID_CTXT_SIZE",XPATH_INVALID_CTXT_SIZE,(((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("XPATH_INVALID_CTXT_POSITION",XPATH_INVALID_CTXT_POSITION,((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("XPATH_MEMORY_ERROR",XPATH_MEMORY_ERROR,(((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("XPTR_SYNTAX_ERROR",XPTR_SYNTAX_ERROR,((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("XPTR_RESOURCE_ERROR",XPTR_RESOURCE_ERROR,(((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("XPTR_SUB_RESOURCE_ERROR",XPTR_SUB_RESOURCE_ERROR,((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("XPATH_UNDEF_PREFIX_ERROR",XPATH_UNDEF_PREFIX_ERROR,(((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("XPATH_ENCODING_ERROR",XPATH_ENCODING_ERROR,((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("XPATH_INVALID_CHAR_ERROR",XPATH_INVALID_CHAR_ERROR,(((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("XPATH_INVALID_CTXT",XPATH_INVALID_CTXT,((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15093,0);
Msg("Find size of anonymous-xpath.h.types-0 (15093)\n");
#endif

#if __i386__
CheckTypeSize(xmlXPathError,4, 15094, 2)
#elif __x86_64__
CheckTypeSize(xmlXPathError,4, 15094, 11)
#elif __ia64__
CheckTypeSize(xmlXPathError,4, 15094, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15094,0);
Msg("Find size of xmlXPathError (15094)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15095,0);
Msg("Find size of fptr_anonymous-xpath.h.types-2 (15095)\n");
#endif

#if __i386__
CheckTypeSize(xmlXPathEvalFunc,4, 15096, 2)
#elif 1
CheckTypeSize(xmlXPathEvalFunc,8, 15096, 1)
#endif

#if __i386__
CheckTypeSize(struct _xmlXPathFunct,8, 15097, 2)
CheckMemberSize(struct _xmlXPathFunct,func,4,2,50098)
CheckOffset(struct _xmlXPathFunct,func,4,2,50098)
#elif 1
CheckTypeSize(struct _xmlXPathFunct,16, 15097, 1)
CheckMemberSize(struct _xmlXPathFunct,func,8,1,50098)
CheckOffset(struct _xmlXPathFunct,func,8,1,50098)
#endif

#if __i386__
CheckTypeSize(xmlXPathFunct,8, 15098, 2)
#elif 1
CheckTypeSize(xmlXPathFunct,16, 15098, 1)
#endif

#if __i386__
CheckTypeSize(struct _xmlXPathVariable,8, 15099, 2)
CheckMemberSize(struct _xmlXPathVariable,value,4,2,50100)
CheckOffset(struct _xmlXPathVariable,value,4,2,50100)
#elif 1
CheckTypeSize(struct _xmlXPathVariable,16, 15099, 1)
CheckMemberSize(struct _xmlXPathVariable,value,8,1,50100)
CheckOffset(struct _xmlXPathVariable,value,8,1,50100)
#endif

#if __i386__
CheckTypeSize(xmlXPathVariable,8, 15100, 2)
#elif 1
CheckTypeSize(xmlXPathVariable,16, 15100, 1)
#endif

#if __i386__
CheckTypeSize(xmlXPathVariable *,4, 15101, 2)
#elif 1
CheckTypeSize(xmlXPathVariable *,8, 15101, 1)
#endif

#if __i386__
CheckTypeSize(xmlXPathVariablePtr,4, 15102, 2)
#elif 1
CheckTypeSize(xmlXPathVariablePtr,8, 15102, 1)
#endif

#if __i386__
CheckTypeSize(xmlXPathFunct *,4, 15103, 2)
#elif 1
CheckTypeSize(xmlXPathFunct *,8, 15103, 1)
#endif

#if __i386__
CheckTypeSize(xmlXPathFuncPtr,4, 15104, 2)
#elif 1
CheckTypeSize(xmlXPathFuncPtr,8, 15104, 1)
#endif

extern double xmlXPathCastNodeToNumber_db(xmlNodePtr);
CheckInterfacedef(xmlXPathCastNodeToNumber,xmlXPathCastNodeToNumber_db);
extern long int xmlXPathOrderDocElems_db(xmlDocPtr);
CheckInterfacedef(xmlXPathOrderDocElems,xmlXPathOrderDocElems_db);
extern void xmlXPathFreeCompExpr_db(xmlXPathCompExprPtr);
CheckInterfacedef(xmlXPathFreeCompExpr,xmlXPathFreeCompExpr_db);
extern int xmlXPathIsInf_db(double);
CheckInterfacedef(xmlXPathIsInf,xmlXPathIsInf_db);
extern xmlXPathContextPtr xmlXPathNewContext_db(xmlDocPtr);
CheckInterfacedef(xmlXPathNewContext,xmlXPathNewContext_db);
extern double xmlXPathCastNodeSetToNumber_db(xmlNodeSetPtr);
CheckInterfacedef(xmlXPathCastNodeSetToNumber,xmlXPathCastNodeSetToNumber_db);
extern int xmlXPathCastNumberToBoolean_db(double);
CheckInterfacedef(xmlXPathCastNumberToBoolean,xmlXPathCastNumberToBoolean_db);
extern int xmlXPathCmpNodes_db(xmlNodePtr, xmlNodePtr);
CheckInterfacedef(xmlXPathCmpNodes,xmlXPathCmpNodes_db);
extern xmlChar * xmlXPathCastNodeSetToString_db(xmlNodeSetPtr);
CheckInterfacedef(xmlXPathCastNodeSetToString,xmlXPathCastNodeSetToString_db);
extern xmlXPathCompExprPtr xmlXPathCtxtCompile_db(xmlXPathContextPtr, const xmlChar *);
CheckInterfacedef(xmlXPathCtxtCompile,xmlXPathCtxtCompile_db);
extern xmlXPathCompExprPtr xmlXPathCompile_db(const xmlChar *);
CheckInterfacedef(xmlXPathCompile,xmlXPathCompile_db);
extern xmlXPathObjectPtr xmlXPathConvertNumber_db(xmlXPathObjectPtr);
CheckInterfacedef(xmlXPathConvertNumber,xmlXPathConvertNumber_db);
extern int xmlXPathIsNaN_db(double);
CheckInterfacedef(xmlXPathIsNaN,xmlXPathIsNaN_db);
extern xmlChar * xmlXPathCastNodeToString_db(xmlNodePtr);
CheckInterfacedef(xmlXPathCastNodeToString,xmlXPathCastNodeToString_db);
extern int xmlXPathCastToBoolean_db(xmlXPathObjectPtr);
CheckInterfacedef(xmlXPathCastToBoolean,xmlXPathCastToBoolean_db);
extern double xmlXPathCastStringToNumber_db(const xmlChar *);
CheckInterfacedef(xmlXPathCastStringToNumber,xmlXPathCastStringToNumber_db);
extern xmlXPathObjectPtr xmlXPathCompiledEval_db(xmlXPathCompExprPtr, xmlXPathContextPtr);
CheckInterfacedef(xmlXPathCompiledEval,xmlXPathCompiledEval_db);
extern void xmlXPathFreeNodeSet_db(xmlNodeSetPtr);
CheckInterfacedef(xmlXPathFreeNodeSet,xmlXPathFreeNodeSet_db);
extern int xmlXPathCastNodeSetToBoolean_db(xmlNodeSetPtr);
CheckInterfacedef(xmlXPathCastNodeSetToBoolean,xmlXPathCastNodeSetToBoolean_db);
extern xmlChar * xmlXPathCastToString_db(xmlXPathObjectPtr);
CheckInterfacedef(xmlXPathCastToString,xmlXPathCastToString_db);
extern xmlChar * xmlXPathCastNumberToString_db(double);
CheckInterfacedef(xmlXPathCastNumberToString,xmlXPathCastNumberToString_db);
extern void xmlXPathFreeObject_db(xmlXPathObjectPtr);
CheckInterfacedef(xmlXPathFreeObject,xmlXPathFreeObject_db);
extern double xmlXPathCastToNumber_db(xmlXPathObjectPtr);
CheckInterfacedef(xmlXPathCastToNumber,xmlXPathCastToNumber_db);
extern xmlXPathObjectPtr xmlXPathConvertBoolean_db(xmlXPathObjectPtr);
CheckInterfacedef(xmlXPathConvertBoolean,xmlXPathConvertBoolean_db);
extern xmlXPathObjectPtr xmlXPathEvalExpression_db(const xmlChar *, xmlXPathContextPtr);
CheckInterfacedef(xmlXPathEvalExpression,xmlXPathEvalExpression_db);
extern int xmlXPathEvalPredicate_db(xmlXPathContextPtr, xmlXPathObjectPtr);
CheckInterfacedef(xmlXPathEvalPredicate,xmlXPathEvalPredicate_db);
extern int xmlXPathCastStringToBoolean_db(const xmlChar *);
CheckInterfacedef(xmlXPathCastStringToBoolean,xmlXPathCastStringToBoolean_db);
extern xmlXPathObjectPtr xmlXPathObjectCopy_db(xmlXPathObjectPtr);
CheckInterfacedef(xmlXPathObjectCopy,xmlXPathObjectCopy_db);
extern xmlNodeSetPtr xmlXPathNodeSetCreate_db(xmlNodePtr);
CheckInterfacedef(xmlXPathNodeSetCreate,xmlXPathNodeSetCreate_db);
extern void xmlXPathFreeContext_db(xmlXPathContextPtr);
CheckInterfacedef(xmlXPathFreeContext,xmlXPathFreeContext_db);
extern void xmlXPathInit_db(void);
CheckInterfacedef(xmlXPathInit,xmlXPathInit_db);
extern xmlXPathObjectPtr xmlXPathConvertString_db(xmlXPathObjectPtr);
CheckInterfacedef(xmlXPathConvertString,xmlXPathConvertString_db);
extern xmlChar * xmlXPathCastBooleanToString_db(int);
CheckInterfacedef(xmlXPathCastBooleanToString,xmlXPathCastBooleanToString_db);
extern xmlXPathObjectPtr xmlXPathEval_db(const xmlChar *, xmlXPathContextPtr);
CheckInterfacedef(xmlXPathEval,xmlXPathEval_db);
extern double xmlXPathCastBooleanToNumber_db(int);
CheckInterfacedef(xmlXPathCastBooleanToNumber,xmlXPathCastBooleanToNumber_db);
extern void xmlXPathFreeNodeSetList_db(xmlXPathObjectPtr);
CheckInterfacedef(xmlXPathFreeNodeSetList,xmlXPathFreeNodeSetList_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in libxml2/libxml/xpath.h\n\n",pcnt,cnt);
return cnt;
#endif

}
