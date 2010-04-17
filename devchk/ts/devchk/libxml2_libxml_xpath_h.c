/*
 * Test of libxml2/libxml/xpath.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
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
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in libxml2/libxml/xpath.h\n");
#endif

printf("Checking data structures in libxml2/libxml/xpath.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef XML_XPATH_CHECKNS
	CompareConstant(XML_XPATH_CHECKNS,(1<<0),9379,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: XML_XPATH_CHECKNS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XML_XPATH_NOVAR
	CompareConstant(XML_XPATH_NOVAR,(1<<1),9380,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: XML_XPATH_NOVAR\n");
cnt++;
#endif

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

#if defined __s390x__
CheckTypeSize(xmlXPathCompExprPtr,8, 14858, 12, 3.1, NULL, 14857, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlXPathCompExprPtr,8, 14858, 11, 3.1, NULL, 14857, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlXPathCompExprPtr,4, 14858, 10, 3.1, NULL, 14857, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlXPathCompExprPtr,8, 14858, 9, 3.1, NULL, 14857, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlXPathCompExprPtr,4, 14858, 6, 3.1, NULL, 14857, NULL)
#elif defined __ia64__
CheckTypeSize(xmlXPathCompExprPtr,8, 14858, 3, 3.1, NULL, 14857, NULL)
#elif defined __i386__
CheckTypeSize(xmlXPathCompExprPtr,4, 14858, 2, 3.1, NULL, 14857, NULL)
#else
Msg("Find size of xmlXPathCompExprPtr (14858)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14857,NULL);\n",architecture,14858,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _xmlXPathContext,344, 14859, 12, , NULL, 0, NULL)
CheckMemberSize(struct _xmlXPathContext,node,8,12,48985)
CheckOffset(struct _xmlXPathContext,node,8,12,48985)
CheckMemberSize(struct _xmlXPathContext,nb_variables_unused,4,12,48986)
CheckOffset(struct _xmlXPathContext,nb_variables_unused,16,12,48986)
CheckMemberSize(struct _xmlXPathContext,max_variables_unused,4,12,48987)
CheckOffset(struct _xmlXPathContext,max_variables_unused,20,12,48987)
CheckMemberSize(struct _xmlXPathContext,varHash,8,12,48988)
CheckOffset(struct _xmlXPathContext,varHash,24,12,48988)
CheckMemberSize(struct _xmlXPathContext,nb_types,4,12,48989)
CheckOffset(struct _xmlXPathContext,nb_types,32,12,48989)
CheckMemberSize(struct _xmlXPathContext,max_types,4,12,48990)
CheckOffset(struct _xmlXPathContext,max_types,36,12,48990)
CheckMemberSize(struct _xmlXPathContext,types,8,12,49017)
CheckOffset(struct _xmlXPathContext,types,40,12,49017)
CheckMemberSize(struct _xmlXPathContext,nb_funcs_unused,4,12,49018)
CheckOffset(struct _xmlXPathContext,nb_funcs_unused,48,12,49018)
CheckMemberSize(struct _xmlXPathContext,max_funcs_unused,4,12,49019)
CheckOffset(struct _xmlXPathContext,max_funcs_unused,52,12,49019)
CheckMemberSize(struct _xmlXPathContext,funcHash,8,12,49020)
CheckOffset(struct _xmlXPathContext,funcHash,56,12,49020)
CheckMemberSize(struct _xmlXPathContext,nb_axis,4,12,49021)
CheckOffset(struct _xmlXPathContext,nb_axis,64,12,49021)
CheckMemberSize(struct _xmlXPathContext,max_axis,4,12,49022)
CheckOffset(struct _xmlXPathContext,max_axis,68,12,49022)
CheckMemberSize(struct _xmlXPathContext,axis,8,12,49038)
CheckOffset(struct _xmlXPathContext,axis,72,12,49038)
CheckMemberSize(struct _xmlXPathContext,namespaces,8,12,49039)
CheckOffset(struct _xmlXPathContext,namespaces,80,12,49039)
CheckMemberSize(struct _xmlXPathContext,nsNr,4,12,49040)
CheckOffset(struct _xmlXPathContext,nsNr,88,12,49040)
CheckMemberSize(struct _xmlXPathContext,user,8,12,49041)
CheckOffset(struct _xmlXPathContext,user,96,12,49041)
CheckMemberSize(struct _xmlXPathContext,contextSize,4,12,49042)
CheckOffset(struct _xmlXPathContext,contextSize,104,12,49042)
CheckMemberSize(struct _xmlXPathContext,proximityPosition,4,12,49043)
CheckOffset(struct _xmlXPathContext,proximityPosition,108,12,49043)
CheckMemberSize(struct _xmlXPathContext,xptr,4,12,49044)
CheckOffset(struct _xmlXPathContext,xptr,112,12,49044)
CheckMemberSize(struct _xmlXPathContext,here,8,12,49045)
CheckOffset(struct _xmlXPathContext,here,120,12,49045)
CheckMemberSize(struct _xmlXPathContext,origin,8,12,49046)
CheckOffset(struct _xmlXPathContext,origin,128,12,49046)
CheckMemberSize(struct _xmlXPathContext,nsHash,8,12,49047)
CheckOffset(struct _xmlXPathContext,nsHash,136,12,49047)
CheckMemberSize(struct _xmlXPathContext,varLookupFunc,8,12,49051)
CheckOffset(struct _xmlXPathContext,varLookupFunc,144,12,49051)
CheckMemberSize(struct _xmlXPathContext,varLookupData,8,12,49052)
CheckOffset(struct _xmlXPathContext,varLookupData,152,12,49052)
CheckMemberSize(struct _xmlXPathContext,extra,8,12,49053)
CheckOffset(struct _xmlXPathContext,extra,160,12,49053)
CheckMemberSize(struct _xmlXPathContext,function,8,12,49054)
CheckOffset(struct _xmlXPathContext,function,168,12,49054)
CheckMemberSize(struct _xmlXPathContext,functionURI,8,12,49055)
CheckOffset(struct _xmlXPathContext,functionURI,176,12,49055)
CheckMemberSize(struct _xmlXPathContext,funcLookupFunc,8,12,49061)
CheckOffset(struct _xmlXPathContext,funcLookupFunc,184,12,49061)
CheckMemberSize(struct _xmlXPathContext,funcLookupData,8,12,49062)
CheckOffset(struct _xmlXPathContext,funcLookupData,192,12,49062)
CheckMemberSize(struct _xmlXPathContext,tmpNsList,8,12,49063)
CheckOffset(struct _xmlXPathContext,tmpNsList,200,12,49063)
CheckMemberSize(struct _xmlXPathContext,tmpNsNr,4,12,49064)
CheckOffset(struct _xmlXPathContext,tmpNsNr,208,12,49064)
CheckMemberSize(struct _xmlXPathContext,userData,8,12,49065)
CheckOffset(struct _xmlXPathContext,userData,216,12,49065)
CheckMemberSize(struct _xmlXPathContext,error,8,12,49066)
CheckOffset(struct _xmlXPathContext,error,224,12,49066)
CheckMemberSize(struct _xmlXPathContext,lastError,88,12,49067)
CheckOffset(struct _xmlXPathContext,lastError,232,12,49067)
CheckMemberSize(struct _xmlXPathContext,debugNode,8,12,49068)
CheckOffset(struct _xmlXPathContext,debugNode,320,12,49068)
CheckMemberSize(struct _xmlXPathContext,dict,8,12,49069)
CheckOffset(struct _xmlXPathContext,dict,328,12,49069)
CheckMemberSize(struct _xmlXPathContext,flags,4,12,49070)
CheckOffset(struct _xmlXPathContext,flags,336,12,49070)
#elif defined __x86_64__
CheckTypeSize(struct _xmlXPathContext,344, 14859, 11, , NULL, 0, NULL)
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
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _xmlXPathContext,200, 14859, 10, , NULL, 0, NULL)
CheckMemberSize(struct _xmlXPathContext,node,4,10,48985)
CheckOffset(struct _xmlXPathContext,node,4,10,48985)
CheckMemberSize(struct _xmlXPathContext,nb_variables_unused,4,10,48986)
CheckOffset(struct _xmlXPathContext,nb_variables_unused,8,10,48986)
CheckMemberSize(struct _xmlXPathContext,max_variables_unused,4,10,48987)
CheckOffset(struct _xmlXPathContext,max_variables_unused,12,10,48987)
CheckMemberSize(struct _xmlXPathContext,varHash,4,10,48988)
CheckOffset(struct _xmlXPathContext,varHash,16,10,48988)
CheckMemberSize(struct _xmlXPathContext,nb_types,4,10,48989)
CheckOffset(struct _xmlXPathContext,nb_types,20,10,48989)
CheckMemberSize(struct _xmlXPathContext,max_types,4,10,48990)
CheckOffset(struct _xmlXPathContext,max_types,24,10,48990)
CheckMemberSize(struct _xmlXPathContext,types,4,10,49017)
CheckOffset(struct _xmlXPathContext,types,28,10,49017)
CheckMemberSize(struct _xmlXPathContext,nb_funcs_unused,4,10,49018)
CheckOffset(struct _xmlXPathContext,nb_funcs_unused,32,10,49018)
CheckMemberSize(struct _xmlXPathContext,max_funcs_unused,4,10,49019)
CheckOffset(struct _xmlXPathContext,max_funcs_unused,36,10,49019)
CheckMemberSize(struct _xmlXPathContext,funcHash,4,10,49020)
CheckOffset(struct _xmlXPathContext,funcHash,40,10,49020)
CheckMemberSize(struct _xmlXPathContext,nb_axis,4,10,49021)
CheckOffset(struct _xmlXPathContext,nb_axis,44,10,49021)
CheckMemberSize(struct _xmlXPathContext,max_axis,4,10,49022)
CheckOffset(struct _xmlXPathContext,max_axis,48,10,49022)
CheckMemberSize(struct _xmlXPathContext,axis,4,10,49038)
CheckOffset(struct _xmlXPathContext,axis,52,10,49038)
CheckMemberSize(struct _xmlXPathContext,namespaces,4,10,49039)
CheckOffset(struct _xmlXPathContext,namespaces,56,10,49039)
CheckMemberSize(struct _xmlXPathContext,nsNr,4,10,49040)
CheckOffset(struct _xmlXPathContext,nsNr,60,10,49040)
CheckMemberSize(struct _xmlXPathContext,user,4,10,49041)
CheckOffset(struct _xmlXPathContext,user,64,10,49041)
CheckMemberSize(struct _xmlXPathContext,contextSize,4,10,49042)
CheckOffset(struct _xmlXPathContext,contextSize,68,10,49042)
CheckMemberSize(struct _xmlXPathContext,proximityPosition,4,10,49043)
CheckOffset(struct _xmlXPathContext,proximityPosition,72,10,49043)
CheckMemberSize(struct _xmlXPathContext,xptr,4,10,49044)
CheckOffset(struct _xmlXPathContext,xptr,76,10,49044)
CheckMemberSize(struct _xmlXPathContext,here,4,10,49045)
CheckOffset(struct _xmlXPathContext,here,80,10,49045)
CheckMemberSize(struct _xmlXPathContext,origin,4,10,49046)
CheckOffset(struct _xmlXPathContext,origin,84,10,49046)
CheckMemberSize(struct _xmlXPathContext,nsHash,4,10,49047)
CheckOffset(struct _xmlXPathContext,nsHash,88,10,49047)
CheckMemberSize(struct _xmlXPathContext,varLookupFunc,4,10,49051)
CheckOffset(struct _xmlXPathContext,varLookupFunc,92,10,49051)
CheckMemberSize(struct _xmlXPathContext,varLookupData,4,10,49052)
CheckOffset(struct _xmlXPathContext,varLookupData,96,10,49052)
CheckMemberSize(struct _xmlXPathContext,extra,4,10,49053)
CheckOffset(struct _xmlXPathContext,extra,100,10,49053)
CheckMemberSize(struct _xmlXPathContext,function,4,10,49054)
CheckOffset(struct _xmlXPathContext,function,104,10,49054)
CheckMemberSize(struct _xmlXPathContext,functionURI,4,10,49055)
CheckOffset(struct _xmlXPathContext,functionURI,108,10,49055)
CheckMemberSize(struct _xmlXPathContext,funcLookupFunc,4,10,49061)
CheckOffset(struct _xmlXPathContext,funcLookupFunc,112,10,49061)
CheckMemberSize(struct _xmlXPathContext,funcLookupData,4,10,49062)
CheckOffset(struct _xmlXPathContext,funcLookupData,116,10,49062)
CheckMemberSize(struct _xmlXPathContext,tmpNsList,4,10,49063)
CheckOffset(struct _xmlXPathContext,tmpNsList,120,10,49063)
CheckMemberSize(struct _xmlXPathContext,tmpNsNr,4,10,49064)
CheckOffset(struct _xmlXPathContext,tmpNsNr,124,10,49064)
CheckMemberSize(struct _xmlXPathContext,userData,4,10,49065)
CheckOffset(struct _xmlXPathContext,userData,128,10,49065)
CheckMemberSize(struct _xmlXPathContext,error,4,10,49066)
CheckOffset(struct _xmlXPathContext,error,132,10,49066)
CheckMemberSize(struct _xmlXPathContext,lastError,52,10,49067)
CheckOffset(struct _xmlXPathContext,lastError,136,10,49067)
CheckMemberSize(struct _xmlXPathContext,debugNode,4,10,49068)
CheckOffset(struct _xmlXPathContext,debugNode,188,10,49068)
CheckMemberSize(struct _xmlXPathContext,dict,4,10,49069)
CheckOffset(struct _xmlXPathContext,dict,192,10,49069)
CheckMemberSize(struct _xmlXPathContext,flags,4,10,49070)
CheckOffset(struct _xmlXPathContext,flags,196,10,49070)
#elif defined __powerpc64__
CheckTypeSize(struct _xmlXPathContext,344, 14859, 9, , NULL, 0, NULL)
CheckMemberSize(struct _xmlXPathContext,node,8,9,48985)
CheckOffset(struct _xmlXPathContext,node,8,9,48985)
CheckMemberSize(struct _xmlXPathContext,nb_variables_unused,4,9,48986)
CheckOffset(struct _xmlXPathContext,nb_variables_unused,16,9,48986)
CheckMemberSize(struct _xmlXPathContext,max_variables_unused,4,9,48987)
CheckOffset(struct _xmlXPathContext,max_variables_unused,20,9,48987)
CheckMemberSize(struct _xmlXPathContext,varHash,8,9,48988)
CheckOffset(struct _xmlXPathContext,varHash,24,9,48988)
CheckMemberSize(struct _xmlXPathContext,nb_types,4,9,48989)
CheckOffset(struct _xmlXPathContext,nb_types,32,9,48989)
CheckMemberSize(struct _xmlXPathContext,max_types,4,9,48990)
CheckOffset(struct _xmlXPathContext,max_types,36,9,48990)
CheckMemberSize(struct _xmlXPathContext,types,8,9,49017)
CheckOffset(struct _xmlXPathContext,types,40,9,49017)
CheckMemberSize(struct _xmlXPathContext,nb_funcs_unused,4,9,49018)
CheckOffset(struct _xmlXPathContext,nb_funcs_unused,48,9,49018)
CheckMemberSize(struct _xmlXPathContext,max_funcs_unused,4,9,49019)
CheckOffset(struct _xmlXPathContext,max_funcs_unused,52,9,49019)
CheckMemberSize(struct _xmlXPathContext,funcHash,8,9,49020)
CheckOffset(struct _xmlXPathContext,funcHash,56,9,49020)
CheckMemberSize(struct _xmlXPathContext,nb_axis,4,9,49021)
CheckOffset(struct _xmlXPathContext,nb_axis,64,9,49021)
CheckMemberSize(struct _xmlXPathContext,max_axis,4,9,49022)
CheckOffset(struct _xmlXPathContext,max_axis,68,9,49022)
CheckMemberSize(struct _xmlXPathContext,axis,8,9,49038)
CheckOffset(struct _xmlXPathContext,axis,72,9,49038)
CheckMemberSize(struct _xmlXPathContext,namespaces,8,9,49039)
CheckOffset(struct _xmlXPathContext,namespaces,80,9,49039)
CheckMemberSize(struct _xmlXPathContext,nsNr,4,9,49040)
CheckOffset(struct _xmlXPathContext,nsNr,88,9,49040)
CheckMemberSize(struct _xmlXPathContext,user,8,9,49041)
CheckOffset(struct _xmlXPathContext,user,96,9,49041)
CheckMemberSize(struct _xmlXPathContext,contextSize,4,9,49042)
CheckOffset(struct _xmlXPathContext,contextSize,104,9,49042)
CheckMemberSize(struct _xmlXPathContext,proximityPosition,4,9,49043)
CheckOffset(struct _xmlXPathContext,proximityPosition,108,9,49043)
CheckMemberSize(struct _xmlXPathContext,xptr,4,9,49044)
CheckOffset(struct _xmlXPathContext,xptr,112,9,49044)
CheckMemberSize(struct _xmlXPathContext,here,8,9,49045)
CheckOffset(struct _xmlXPathContext,here,120,9,49045)
CheckMemberSize(struct _xmlXPathContext,origin,8,9,49046)
CheckOffset(struct _xmlXPathContext,origin,128,9,49046)
CheckMemberSize(struct _xmlXPathContext,nsHash,8,9,49047)
CheckOffset(struct _xmlXPathContext,nsHash,136,9,49047)
CheckMemberSize(struct _xmlXPathContext,varLookupFunc,8,9,49051)
CheckOffset(struct _xmlXPathContext,varLookupFunc,144,9,49051)
CheckMemberSize(struct _xmlXPathContext,varLookupData,8,9,49052)
CheckOffset(struct _xmlXPathContext,varLookupData,152,9,49052)
CheckMemberSize(struct _xmlXPathContext,extra,8,9,49053)
CheckOffset(struct _xmlXPathContext,extra,160,9,49053)
CheckMemberSize(struct _xmlXPathContext,function,8,9,49054)
CheckOffset(struct _xmlXPathContext,function,168,9,49054)
CheckMemberSize(struct _xmlXPathContext,functionURI,8,9,49055)
CheckOffset(struct _xmlXPathContext,functionURI,176,9,49055)
CheckMemberSize(struct _xmlXPathContext,funcLookupFunc,8,9,49061)
CheckOffset(struct _xmlXPathContext,funcLookupFunc,184,9,49061)
CheckMemberSize(struct _xmlXPathContext,funcLookupData,8,9,49062)
CheckOffset(struct _xmlXPathContext,funcLookupData,192,9,49062)
CheckMemberSize(struct _xmlXPathContext,tmpNsList,8,9,49063)
CheckOffset(struct _xmlXPathContext,tmpNsList,200,9,49063)
CheckMemberSize(struct _xmlXPathContext,tmpNsNr,4,9,49064)
CheckOffset(struct _xmlXPathContext,tmpNsNr,208,9,49064)
CheckMemberSize(struct _xmlXPathContext,userData,8,9,49065)
CheckOffset(struct _xmlXPathContext,userData,216,9,49065)
CheckMemberSize(struct _xmlXPathContext,error,8,9,49066)
CheckOffset(struct _xmlXPathContext,error,224,9,49066)
CheckMemberSize(struct _xmlXPathContext,lastError,88,9,49067)
CheckOffset(struct _xmlXPathContext,lastError,232,9,49067)
CheckMemberSize(struct _xmlXPathContext,debugNode,8,9,49068)
CheckOffset(struct _xmlXPathContext,debugNode,320,9,49068)
CheckMemberSize(struct _xmlXPathContext,dict,8,9,49069)
CheckOffset(struct _xmlXPathContext,dict,328,9,49069)
CheckMemberSize(struct _xmlXPathContext,flags,4,9,49070)
CheckOffset(struct _xmlXPathContext,flags,336,9,49070)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _xmlXPathContext,200, 14859, 6, , NULL, 0, NULL)
CheckMemberSize(struct _xmlXPathContext,node,4,6,48985)
CheckOffset(struct _xmlXPathContext,node,4,6,48985)
CheckMemberSize(struct _xmlXPathContext,nb_variables_unused,4,6,48986)
CheckOffset(struct _xmlXPathContext,nb_variables_unused,8,6,48986)
CheckMemberSize(struct _xmlXPathContext,max_variables_unused,4,6,48987)
CheckOffset(struct _xmlXPathContext,max_variables_unused,12,6,48987)
CheckMemberSize(struct _xmlXPathContext,varHash,4,6,48988)
CheckOffset(struct _xmlXPathContext,varHash,16,6,48988)
CheckMemberSize(struct _xmlXPathContext,nb_types,4,6,48989)
CheckOffset(struct _xmlXPathContext,nb_types,20,6,48989)
CheckMemberSize(struct _xmlXPathContext,max_types,4,6,48990)
CheckOffset(struct _xmlXPathContext,max_types,24,6,48990)
CheckMemberSize(struct _xmlXPathContext,types,4,6,49017)
CheckOffset(struct _xmlXPathContext,types,28,6,49017)
CheckMemberSize(struct _xmlXPathContext,nb_funcs_unused,4,6,49018)
CheckOffset(struct _xmlXPathContext,nb_funcs_unused,32,6,49018)
CheckMemberSize(struct _xmlXPathContext,max_funcs_unused,4,6,49019)
CheckOffset(struct _xmlXPathContext,max_funcs_unused,36,6,49019)
CheckMemberSize(struct _xmlXPathContext,funcHash,4,6,49020)
CheckOffset(struct _xmlXPathContext,funcHash,40,6,49020)
CheckMemberSize(struct _xmlXPathContext,nb_axis,4,6,49021)
CheckOffset(struct _xmlXPathContext,nb_axis,44,6,49021)
CheckMemberSize(struct _xmlXPathContext,max_axis,4,6,49022)
CheckOffset(struct _xmlXPathContext,max_axis,48,6,49022)
CheckMemberSize(struct _xmlXPathContext,axis,4,6,49038)
CheckOffset(struct _xmlXPathContext,axis,52,6,49038)
CheckMemberSize(struct _xmlXPathContext,namespaces,4,6,49039)
CheckOffset(struct _xmlXPathContext,namespaces,56,6,49039)
CheckMemberSize(struct _xmlXPathContext,nsNr,4,6,49040)
CheckOffset(struct _xmlXPathContext,nsNr,60,6,49040)
CheckMemberSize(struct _xmlXPathContext,user,4,6,49041)
CheckOffset(struct _xmlXPathContext,user,64,6,49041)
CheckMemberSize(struct _xmlXPathContext,contextSize,4,6,49042)
CheckOffset(struct _xmlXPathContext,contextSize,68,6,49042)
CheckMemberSize(struct _xmlXPathContext,proximityPosition,4,6,49043)
CheckOffset(struct _xmlXPathContext,proximityPosition,72,6,49043)
CheckMemberSize(struct _xmlXPathContext,xptr,4,6,49044)
CheckOffset(struct _xmlXPathContext,xptr,76,6,49044)
CheckMemberSize(struct _xmlXPathContext,here,4,6,49045)
CheckOffset(struct _xmlXPathContext,here,80,6,49045)
CheckMemberSize(struct _xmlXPathContext,origin,4,6,49046)
CheckOffset(struct _xmlXPathContext,origin,84,6,49046)
CheckMemberSize(struct _xmlXPathContext,nsHash,4,6,49047)
CheckOffset(struct _xmlXPathContext,nsHash,88,6,49047)
CheckMemberSize(struct _xmlXPathContext,varLookupFunc,4,6,49051)
CheckOffset(struct _xmlXPathContext,varLookupFunc,92,6,49051)
CheckMemberSize(struct _xmlXPathContext,varLookupData,4,6,49052)
CheckOffset(struct _xmlXPathContext,varLookupData,96,6,49052)
CheckMemberSize(struct _xmlXPathContext,extra,4,6,49053)
CheckOffset(struct _xmlXPathContext,extra,100,6,49053)
CheckMemberSize(struct _xmlXPathContext,function,4,6,49054)
CheckOffset(struct _xmlXPathContext,function,104,6,49054)
CheckMemberSize(struct _xmlXPathContext,functionURI,4,6,49055)
CheckOffset(struct _xmlXPathContext,functionURI,108,6,49055)
CheckMemberSize(struct _xmlXPathContext,funcLookupFunc,4,6,49061)
CheckOffset(struct _xmlXPathContext,funcLookupFunc,112,6,49061)
CheckMemberSize(struct _xmlXPathContext,funcLookupData,4,6,49062)
CheckOffset(struct _xmlXPathContext,funcLookupData,116,6,49062)
CheckMemberSize(struct _xmlXPathContext,tmpNsList,4,6,49063)
CheckOffset(struct _xmlXPathContext,tmpNsList,120,6,49063)
CheckMemberSize(struct _xmlXPathContext,tmpNsNr,4,6,49064)
CheckOffset(struct _xmlXPathContext,tmpNsNr,124,6,49064)
CheckMemberSize(struct _xmlXPathContext,userData,4,6,49065)
CheckOffset(struct _xmlXPathContext,userData,128,6,49065)
CheckMemberSize(struct _xmlXPathContext,error,4,6,49066)
CheckOffset(struct _xmlXPathContext,error,132,6,49066)
CheckMemberSize(struct _xmlXPathContext,lastError,52,6,49067)
CheckOffset(struct _xmlXPathContext,lastError,136,6,49067)
CheckMemberSize(struct _xmlXPathContext,debugNode,4,6,49068)
CheckOffset(struct _xmlXPathContext,debugNode,188,6,49068)
CheckMemberSize(struct _xmlXPathContext,dict,4,6,49069)
CheckOffset(struct _xmlXPathContext,dict,192,6,49069)
CheckMemberSize(struct _xmlXPathContext,flags,4,6,49070)
CheckOffset(struct _xmlXPathContext,flags,196,6,49070)
#elif defined __ia64__
CheckTypeSize(struct _xmlXPathContext,344, 14859, 3, , NULL, 0, NULL)
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
#elif defined __i386__
CheckTypeSize(struct _xmlXPathContext,200, 14859, 2, , NULL, 0, NULL)
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
#elif 1
CheckTypeSize(struct _xmlXPathContext,0, 14859, 1, , NULL, 0, NULL)
Msg("Missing member data for _xmlXPathContext on All\n");
CheckOffset(struct _xmlXPathContext,doc,0,1,48984)
#endif

#if defined __s390x__
CheckTypeSize(struct _xmlXPathType,16, 14860, 12, , NULL, 0, NULL)
CheckMemberSize(struct _xmlXPathType,func,8,12,49016)
CheckOffset(struct _xmlXPathType,func,8,12,49016)
#elif defined __x86_64__
CheckTypeSize(struct _xmlXPathType,16, 14860, 11, , NULL, 0, NULL)
CheckMemberSize(struct _xmlXPathType,func,8,11,49016)
CheckOffset(struct _xmlXPathType,func,8,11,49016)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _xmlXPathType,8, 14860, 10, , NULL, 0, NULL)
CheckMemberSize(struct _xmlXPathType,func,4,10,49016)
CheckOffset(struct _xmlXPathType,func,4,10,49016)
#elif defined __powerpc64__
CheckTypeSize(struct _xmlXPathType,16, 14860, 9, , NULL, 0, NULL)
CheckMemberSize(struct _xmlXPathType,func,8,9,49016)
CheckOffset(struct _xmlXPathType,func,8,9,49016)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _xmlXPathType,8, 14860, 6, , NULL, 0, NULL)
CheckMemberSize(struct _xmlXPathType,func,4,6,49016)
CheckOffset(struct _xmlXPathType,func,4,6,49016)
#elif defined __ia64__
CheckTypeSize(struct _xmlXPathType,16, 14860, 3, , NULL, 0, NULL)
CheckMemberSize(struct _xmlXPathType,func,8,3,49016)
CheckOffset(struct _xmlXPathType,func,8,3,49016)
#elif defined __i386__
CheckTypeSize(struct _xmlXPathType,8, 14860, 2, , NULL, 0, NULL)
CheckMemberSize(struct _xmlXPathType,func,4,2,49016)
CheckOffset(struct _xmlXPathType,func,4,2,49016)
#elif 1
CheckTypeSize(struct _xmlXPathType,0, 14860, 1, , NULL, 0, NULL)
Msg("Missing member data for _xmlXPathType on All\n");
CheckOffset(struct _xmlXPathType,name,0,1,48991)
#endif

#if defined __s390x__
CheckTypeSize(struct _xmlXPathObject,72, 14861, 12, , NULL, 0, NULL)
CheckMemberSize(struct _xmlXPathObject,nodesetval,8,12,49006)
CheckOffset(struct _xmlXPathObject,nodesetval,8,12,49006)
CheckMemberSize(struct _xmlXPathObject,boolval,4,12,49007)
CheckOffset(struct _xmlXPathObject,boolval,16,12,49007)
CheckMemberSize(struct _xmlXPathObject,floatval,8,12,49008)
CheckOffset(struct _xmlXPathObject,floatval,24,12,49008)
CheckMemberSize(struct _xmlXPathObject,stringval,8,12,49009)
CheckOffset(struct _xmlXPathObject,stringval,32,12,49009)
CheckMemberSize(struct _xmlXPathObject,user,8,12,49010)
CheckOffset(struct _xmlXPathObject,user,40,12,49010)
CheckMemberSize(struct _xmlXPathObject,index,4,12,49011)
CheckOffset(struct _xmlXPathObject,index,48,12,49011)
CheckMemberSize(struct _xmlXPathObject,user2,8,12,49012)
CheckOffset(struct _xmlXPathObject,user2,56,12,49012)
CheckMemberSize(struct _xmlXPathObject,index2,4,12,49013)
CheckOffset(struct _xmlXPathObject,index2,64,12,49013)
#elif defined __x86_64__
CheckTypeSize(struct _xmlXPathObject,72, 14861, 11, , NULL, 0, NULL)
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
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _xmlXPathObject,48, 14861, 10, , NULL, 0, NULL)
CheckMemberSize(struct _xmlXPathObject,nodesetval,4,10,49006)
CheckOffset(struct _xmlXPathObject,nodesetval,4,10,49006)
CheckMemberSize(struct _xmlXPathObject,boolval,4,10,49007)
CheckOffset(struct _xmlXPathObject,boolval,8,10,49007)
CheckMemberSize(struct _xmlXPathObject,floatval,8,10,49008)
CheckOffset(struct _xmlXPathObject,floatval,16,10,49008)
CheckMemberSize(struct _xmlXPathObject,stringval,4,10,49009)
CheckOffset(struct _xmlXPathObject,stringval,24,10,49009)
CheckMemberSize(struct _xmlXPathObject,user,4,10,49010)
CheckOffset(struct _xmlXPathObject,user,28,10,49010)
CheckMemberSize(struct _xmlXPathObject,index,4,10,49011)
CheckOffset(struct _xmlXPathObject,index,32,10,49011)
CheckMemberSize(struct _xmlXPathObject,user2,4,10,49012)
CheckOffset(struct _xmlXPathObject,user2,36,10,49012)
CheckMemberSize(struct _xmlXPathObject,index2,4,10,49013)
CheckOffset(struct _xmlXPathObject,index2,40,10,49013)
#elif defined __powerpc64__
CheckTypeSize(struct _xmlXPathObject,72, 14861, 9, , NULL, 0, NULL)
CheckMemberSize(struct _xmlXPathObject,nodesetval,8,9,49006)
CheckOffset(struct _xmlXPathObject,nodesetval,8,9,49006)
CheckMemberSize(struct _xmlXPathObject,boolval,4,9,49007)
CheckOffset(struct _xmlXPathObject,boolval,16,9,49007)
CheckMemberSize(struct _xmlXPathObject,floatval,8,9,49008)
CheckOffset(struct _xmlXPathObject,floatval,24,9,49008)
CheckMemberSize(struct _xmlXPathObject,stringval,8,9,49009)
CheckOffset(struct _xmlXPathObject,stringval,32,9,49009)
CheckMemberSize(struct _xmlXPathObject,user,8,9,49010)
CheckOffset(struct _xmlXPathObject,user,40,9,49010)
CheckMemberSize(struct _xmlXPathObject,index,4,9,49011)
CheckOffset(struct _xmlXPathObject,index,48,9,49011)
CheckMemberSize(struct _xmlXPathObject,user2,8,9,49012)
CheckOffset(struct _xmlXPathObject,user2,56,9,49012)
CheckMemberSize(struct _xmlXPathObject,index2,4,9,49013)
CheckOffset(struct _xmlXPathObject,index2,64,9,49013)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _xmlXPathObject,48, 14861, 6, , NULL, 0, NULL)
CheckMemberSize(struct _xmlXPathObject,nodesetval,4,6,49006)
CheckOffset(struct _xmlXPathObject,nodesetval,4,6,49006)
CheckMemberSize(struct _xmlXPathObject,boolval,4,6,49007)
CheckOffset(struct _xmlXPathObject,boolval,8,6,49007)
CheckMemberSize(struct _xmlXPathObject,floatval,8,6,49008)
CheckOffset(struct _xmlXPathObject,floatval,16,6,49008)
CheckMemberSize(struct _xmlXPathObject,stringval,4,6,49009)
CheckOffset(struct _xmlXPathObject,stringval,24,6,49009)
CheckMemberSize(struct _xmlXPathObject,user,4,6,49010)
CheckOffset(struct _xmlXPathObject,user,28,6,49010)
CheckMemberSize(struct _xmlXPathObject,index,4,6,49011)
CheckOffset(struct _xmlXPathObject,index,32,6,49011)
CheckMemberSize(struct _xmlXPathObject,user2,4,6,49012)
CheckOffset(struct _xmlXPathObject,user2,36,6,49012)
CheckMemberSize(struct _xmlXPathObject,index2,4,6,49013)
CheckOffset(struct _xmlXPathObject,index2,40,6,49013)
#elif defined __ia64__
CheckTypeSize(struct _xmlXPathObject,72, 14861, 3, , NULL, 0, NULL)
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
#elif defined __i386__
CheckTypeSize(struct _xmlXPathObject,40, 14861, 2, , NULL, 0, NULL)
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
#elif 1
CheckTypeSize(struct _xmlXPathObject,0, 14861, 1, , NULL, 0, NULL)
Msg("Missing member data for _xmlXPathObject on All\n");
CheckOffset(struct _xmlXPathObject,type,0,1,49002)
#endif

#if defined __s390x__
CheckTypeSize(xmlXPathObjectType,4, 14863, 12, 3.1, NULL, 14862, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlXPathObjectType,4, 14863, 11, 3.1, NULL, 14862, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlXPathObjectType,4, 14863, 10, 3.1, NULL, 14862, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlXPathObjectType,4, 14863, 9, 3.1, NULL, 14862, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlXPathObjectType,4, 14863, 6, 3.1, NULL, 14862, NULL)
#elif defined __ia64__
CheckTypeSize(xmlXPathObjectType,4, 14863, 3, 3.1, NULL, 14862, NULL)
#elif defined __i386__
CheckTypeSize(xmlXPathObjectType,4, 14863, 2, 3.1, NULL, 14862, NULL)
#else
Msg("Find size of xmlXPathObjectType (14863)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14862,NULL);\n",architecture,14863,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _xmlNodeSet,16, 14864, 12, , NULL, 0, NULL)
CheckMemberSize(struct _xmlNodeSet,nodeMax,4,12,49004)
CheckOffset(struct _xmlNodeSet,nodeMax,4,12,49004)
CheckMemberSize(struct _xmlNodeSet,nodeTab,8,12,49005)
CheckOffset(struct _xmlNodeSet,nodeTab,8,12,49005)
#elif defined __x86_64__
CheckTypeSize(struct _xmlNodeSet,16, 14864, 11, , NULL, 0, NULL)
CheckMemberSize(struct _xmlNodeSet,nodeMax,4,11,49004)
CheckOffset(struct _xmlNodeSet,nodeMax,4,11,49004)
CheckMemberSize(struct _xmlNodeSet,nodeTab,8,11,49005)
CheckOffset(struct _xmlNodeSet,nodeTab,8,11,49005)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _xmlNodeSet,12, 14864, 10, , NULL, 0, NULL)
CheckMemberSize(struct _xmlNodeSet,nodeMax,4,10,49004)
CheckOffset(struct _xmlNodeSet,nodeMax,4,10,49004)
CheckMemberSize(struct _xmlNodeSet,nodeTab,4,10,49005)
CheckOffset(struct _xmlNodeSet,nodeTab,8,10,49005)
#elif defined __powerpc64__
CheckTypeSize(struct _xmlNodeSet,16, 14864, 9, , NULL, 0, NULL)
CheckMemberSize(struct _xmlNodeSet,nodeMax,4,9,49004)
CheckOffset(struct _xmlNodeSet,nodeMax,4,9,49004)
CheckMemberSize(struct _xmlNodeSet,nodeTab,8,9,49005)
CheckOffset(struct _xmlNodeSet,nodeTab,8,9,49005)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _xmlNodeSet,12, 14864, 6, , NULL, 0, NULL)
CheckMemberSize(struct _xmlNodeSet,nodeMax,4,6,49004)
CheckOffset(struct _xmlNodeSet,nodeMax,4,6,49004)
CheckMemberSize(struct _xmlNodeSet,nodeTab,4,6,49005)
CheckOffset(struct _xmlNodeSet,nodeTab,8,6,49005)
#elif defined __ia64__
CheckTypeSize(struct _xmlNodeSet,16, 14864, 3, , NULL, 0, NULL)
CheckMemberSize(struct _xmlNodeSet,nodeMax,4,3,49004)
CheckOffset(struct _xmlNodeSet,nodeMax,4,3,49004)
CheckMemberSize(struct _xmlNodeSet,nodeTab,8,3,49005)
CheckOffset(struct _xmlNodeSet,nodeTab,8,3,49005)
#elif defined __i386__
CheckTypeSize(struct _xmlNodeSet,12, 14864, 2, , NULL, 0, NULL)
CheckMemberSize(struct _xmlNodeSet,nodeMax,4,2,49004)
CheckOffset(struct _xmlNodeSet,nodeMax,4,2,49004)
CheckMemberSize(struct _xmlNodeSet,nodeTab,4,2,49005)
CheckOffset(struct _xmlNodeSet,nodeTab,8,2,49005)
#elif 1
CheckTypeSize(struct _xmlNodeSet,0, 14864, 1, , NULL, 0, NULL)
Msg("Missing member data for _xmlNodeSet on All\n");
CheckOffset(struct _xmlNodeSet,nodeNr,0,1,49003)
#endif

#if defined __s390x__
CheckTypeSize(xmlNodeSet,16, 14865, 12, 3.1, NULL, 14864, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlNodeSet,16, 14865, 11, 3.1, NULL, 14864, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlNodeSet,12, 14865, 10, 3.1, NULL, 14864, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlNodeSet,16, 14865, 9, 3.1, NULL, 14864, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlNodeSet,12, 14865, 6, 3.1, NULL, 14864, NULL)
#elif defined __ia64__
CheckTypeSize(xmlNodeSet,16, 14865, 3, 3.1, NULL, 14864, NULL)
#elif defined __i386__
CheckTypeSize(xmlNodeSet,12, 14865, 2, 3.1, NULL, 14864, NULL)
#else
Msg("Find size of xmlNodeSet (14865)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14864,NULL);\n",architecture,14865,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlNodeSetPtr,8, 14867, 12, 3.1, NULL, 14866, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlNodeSetPtr,8, 14867, 11, 3.1, NULL, 14866, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlNodeSetPtr,4, 14867, 10, 3.1, NULL, 14866, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlNodeSetPtr,8, 14867, 9, 3.1, NULL, 14866, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlNodeSetPtr,4, 14867, 6, 3.1, NULL, 14866, NULL)
#elif defined __ia64__
CheckTypeSize(xmlNodeSetPtr,8, 14867, 3, 3.1, NULL, 14866, NULL)
#elif defined __i386__
CheckTypeSize(xmlNodeSetPtr,4, 14867, 2, 3.1, NULL, 14866, NULL)
#else
Msg("Find size of xmlNodeSetPtr (14867)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14866,NULL);\n",architecture,14867,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlXPathObject,72, 14868, 12, 3.1, NULL, 14861, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlXPathObject,72, 14868, 11, 3.1, NULL, 14861, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlXPathObject,48, 14868, 10, 3.1, NULL, 14861, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlXPathObject,72, 14868, 9, 3.1, NULL, 14861, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlXPathObject,48, 14868, 6, 3.1, NULL, 14861, NULL)
#elif defined __ia64__
CheckTypeSize(xmlXPathObject,72, 14868, 3, 3.1, NULL, 14861, NULL)
#elif defined __i386__
CheckTypeSize(xmlXPathObject,40, 14868, 2, 3.1, NULL, 14861, NULL)
#else
Msg("Find size of xmlXPathObject (14868)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14861,NULL);\n",architecture,14868,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlXPathObjectPtr,8, 14870, 12, 3.1, NULL, 14869, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlXPathObjectPtr,8, 14870, 11, 3.1, NULL, 14869, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlXPathObjectPtr,4, 14870, 10, 3.1, NULL, 14869, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlXPathObjectPtr,8, 14870, 9, 3.1, NULL, 14869, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlXPathObjectPtr,4, 14870, 6, 3.1, NULL, 14869, NULL)
#elif defined __ia64__
CheckTypeSize(xmlXPathObjectPtr,8, 14870, 3, 3.1, NULL, 14869, NULL)
#elif defined __i386__
CheckTypeSize(xmlXPathObjectPtr,4, 14870, 2, 3.1, NULL, 14869, NULL)
#else
Msg("Find size of xmlXPathObjectPtr (14870)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14869,NULL);\n",architecture,14870,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlXPathConvertFunc,8, 14872, 12, 3.1, NULL, 14871, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlXPathConvertFunc,8, 14872, 11, 3.1, NULL, 14871, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlXPathConvertFunc,4, 14872, 10, 3.1, NULL, 14871, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlXPathConvertFunc,8, 14872, 9, 3.1, NULL, 14871, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlXPathConvertFunc,4, 14872, 6, 3.1, NULL, 14871, NULL)
#elif defined __ia64__
CheckTypeSize(xmlXPathConvertFunc,8, 14872, 3, 3.1, NULL, 14871, NULL)
#elif defined __i386__
CheckTypeSize(xmlXPathConvertFunc,4, 14872, 2, 3.1, NULL, 14871, NULL)
#else
Msg("Find size of xmlXPathConvertFunc (14872)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14871,NULL);\n",architecture,14872,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlXPathType,16, 14873, 12, 3.1, NULL, 14860, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlXPathType,16, 14873, 11, 3.1, NULL, 14860, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlXPathType,8, 14873, 10, 3.1, NULL, 14860, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlXPathType,16, 14873, 9, 3.1, NULL, 14860, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlXPathType,8, 14873, 6, 3.1, NULL, 14860, NULL)
#elif defined __ia64__
CheckTypeSize(xmlXPathType,16, 14873, 3, 3.1, NULL, 14860, NULL)
#elif defined __i386__
CheckTypeSize(xmlXPathType,8, 14873, 2, 3.1, NULL, 14860, NULL)
#else
Msg("Find size of xmlXPathType (14873)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14860,NULL);\n",architecture,14873,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlXPathTypePtr,8, 14875, 12, 3.1, NULL, 14874, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlXPathTypePtr,8, 14875, 11, 3.1, NULL, 14874, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlXPathTypePtr,4, 14875, 10, 3.1, NULL, 14874, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlXPathTypePtr,8, 14875, 9, 3.1, NULL, 14874, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlXPathTypePtr,4, 14875, 6, 3.1, NULL, 14874, NULL)
#elif defined __ia64__
CheckTypeSize(xmlXPathTypePtr,8, 14875, 3, 3.1, NULL, 14874, NULL)
#elif defined __i386__
CheckTypeSize(xmlXPathTypePtr,4, 14875, 2, 3.1, NULL, 14874, NULL)
#else
Msg("Find size of xmlXPathTypePtr (14875)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14874,NULL);\n",architecture,14875,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _xmlXPathAxis,16, 14876, 12, , NULL, 0, NULL)
CheckMemberSize(struct _xmlXPathAxis,func,8,12,49037)
CheckOffset(struct _xmlXPathAxis,func,8,12,49037)
#elif defined __x86_64__
CheckTypeSize(struct _xmlXPathAxis,16, 14876, 11, , NULL, 0, NULL)
CheckMemberSize(struct _xmlXPathAxis,func,8,11,49037)
CheckOffset(struct _xmlXPathAxis,func,8,11,49037)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _xmlXPathAxis,8, 14876, 10, , NULL, 0, NULL)
CheckMemberSize(struct _xmlXPathAxis,func,4,10,49037)
CheckOffset(struct _xmlXPathAxis,func,4,10,49037)
#elif defined __powerpc64__
CheckTypeSize(struct _xmlXPathAxis,16, 14876, 9, , NULL, 0, NULL)
CheckMemberSize(struct _xmlXPathAxis,func,8,9,49037)
CheckOffset(struct _xmlXPathAxis,func,8,9,49037)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _xmlXPathAxis,8, 14876, 6, , NULL, 0, NULL)
CheckMemberSize(struct _xmlXPathAxis,func,4,6,49037)
CheckOffset(struct _xmlXPathAxis,func,4,6,49037)
#elif defined __ia64__
CheckTypeSize(struct _xmlXPathAxis,16, 14876, 3, , NULL, 0, NULL)
CheckMemberSize(struct _xmlXPathAxis,func,8,3,49037)
CheckOffset(struct _xmlXPathAxis,func,8,3,49037)
#elif defined __i386__
CheckTypeSize(struct _xmlXPathAxis,8, 14876, 2, , NULL, 0, NULL)
CheckMemberSize(struct _xmlXPathAxis,func,4,2,49037)
CheckOffset(struct _xmlXPathAxis,func,4,2,49037)
#elif 1
CheckTypeSize(struct _xmlXPathAxis,0, 14876, 1, , NULL, 0, NULL)
Msg("Missing member data for _xmlXPathAxis on All\n");
CheckOffset(struct _xmlXPathAxis,name,0,1,49023)
#endif

#if defined __s390x__
CheckTypeSize(struct _xmlXPathParserContext,80, 14877, 12, , NULL, 0, NULL)
CheckMemberSize(struct _xmlXPathParserContext,base,8,12,49025)
CheckOffset(struct _xmlXPathParserContext,base,8,12,49025)
CheckMemberSize(struct _xmlXPathParserContext,error,4,12,49026)
CheckOffset(struct _xmlXPathParserContext,error,16,12,49026)
CheckMemberSize(struct _xmlXPathParserContext,context,8,12,49027)
CheckOffset(struct _xmlXPathParserContext,context,24,12,49027)
CheckMemberSize(struct _xmlXPathParserContext,value,8,12,49028)
CheckOffset(struct _xmlXPathParserContext,value,32,12,49028)
CheckMemberSize(struct _xmlXPathParserContext,valueNr,4,12,49029)
CheckOffset(struct _xmlXPathParserContext,valueNr,40,12,49029)
CheckMemberSize(struct _xmlXPathParserContext,valueMax,4,12,49030)
CheckOffset(struct _xmlXPathParserContext,valueMax,44,12,49030)
CheckMemberSize(struct _xmlXPathParserContext,valueTab,8,12,49031)
CheckOffset(struct _xmlXPathParserContext,valueTab,48,12,49031)
CheckMemberSize(struct _xmlXPathParserContext,comp,8,12,49032)
CheckOffset(struct _xmlXPathParserContext,comp,56,12,49032)
CheckMemberSize(struct _xmlXPathParserContext,xptr,4,12,49033)
CheckOffset(struct _xmlXPathParserContext,xptr,64,12,49033)
CheckMemberSize(struct _xmlXPathParserContext,ancestor,8,12,49034)
CheckOffset(struct _xmlXPathParserContext,ancestor,72,12,49034)
#elif defined __x86_64__
CheckTypeSize(struct _xmlXPathParserContext,80, 14877, 11, , NULL, 0, NULL)
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
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _xmlXPathParserContext,44, 14877, 10, , NULL, 0, NULL)
CheckMemberSize(struct _xmlXPathParserContext,base,4,10,49025)
CheckOffset(struct _xmlXPathParserContext,base,4,10,49025)
CheckMemberSize(struct _xmlXPathParserContext,error,4,10,49026)
CheckOffset(struct _xmlXPathParserContext,error,8,10,49026)
CheckMemberSize(struct _xmlXPathParserContext,context,4,10,49027)
CheckOffset(struct _xmlXPathParserContext,context,12,10,49027)
CheckMemberSize(struct _xmlXPathParserContext,value,4,10,49028)
CheckOffset(struct _xmlXPathParserContext,value,16,10,49028)
CheckMemberSize(struct _xmlXPathParserContext,valueNr,4,10,49029)
CheckOffset(struct _xmlXPathParserContext,valueNr,20,10,49029)
CheckMemberSize(struct _xmlXPathParserContext,valueMax,4,10,49030)
CheckOffset(struct _xmlXPathParserContext,valueMax,24,10,49030)
CheckMemberSize(struct _xmlXPathParserContext,valueTab,4,10,49031)
CheckOffset(struct _xmlXPathParserContext,valueTab,28,10,49031)
CheckMemberSize(struct _xmlXPathParserContext,comp,4,10,49032)
CheckOffset(struct _xmlXPathParserContext,comp,32,10,49032)
CheckMemberSize(struct _xmlXPathParserContext,xptr,4,10,49033)
CheckOffset(struct _xmlXPathParserContext,xptr,36,10,49033)
CheckMemberSize(struct _xmlXPathParserContext,ancestor,4,10,49034)
CheckOffset(struct _xmlXPathParserContext,ancestor,40,10,49034)
#elif defined __powerpc64__
CheckTypeSize(struct _xmlXPathParserContext,80, 14877, 9, , NULL, 0, NULL)
CheckMemberSize(struct _xmlXPathParserContext,base,8,9,49025)
CheckOffset(struct _xmlXPathParserContext,base,8,9,49025)
CheckMemberSize(struct _xmlXPathParserContext,error,4,9,49026)
CheckOffset(struct _xmlXPathParserContext,error,16,9,49026)
CheckMemberSize(struct _xmlXPathParserContext,context,8,9,49027)
CheckOffset(struct _xmlXPathParserContext,context,24,9,49027)
CheckMemberSize(struct _xmlXPathParserContext,value,8,9,49028)
CheckOffset(struct _xmlXPathParserContext,value,32,9,49028)
CheckMemberSize(struct _xmlXPathParserContext,valueNr,4,9,49029)
CheckOffset(struct _xmlXPathParserContext,valueNr,40,9,49029)
CheckMemberSize(struct _xmlXPathParserContext,valueMax,4,9,49030)
CheckOffset(struct _xmlXPathParserContext,valueMax,44,9,49030)
CheckMemberSize(struct _xmlXPathParserContext,valueTab,8,9,49031)
CheckOffset(struct _xmlXPathParserContext,valueTab,48,9,49031)
CheckMemberSize(struct _xmlXPathParserContext,comp,8,9,49032)
CheckOffset(struct _xmlXPathParserContext,comp,56,9,49032)
CheckMemberSize(struct _xmlXPathParserContext,xptr,4,9,49033)
CheckOffset(struct _xmlXPathParserContext,xptr,64,9,49033)
CheckMemberSize(struct _xmlXPathParserContext,ancestor,8,9,49034)
CheckOffset(struct _xmlXPathParserContext,ancestor,72,9,49034)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _xmlXPathParserContext,44, 14877, 6, , NULL, 0, NULL)
CheckMemberSize(struct _xmlXPathParserContext,base,4,6,49025)
CheckOffset(struct _xmlXPathParserContext,base,4,6,49025)
CheckMemberSize(struct _xmlXPathParserContext,error,4,6,49026)
CheckOffset(struct _xmlXPathParserContext,error,8,6,49026)
CheckMemberSize(struct _xmlXPathParserContext,context,4,6,49027)
CheckOffset(struct _xmlXPathParserContext,context,12,6,49027)
CheckMemberSize(struct _xmlXPathParserContext,value,4,6,49028)
CheckOffset(struct _xmlXPathParserContext,value,16,6,49028)
CheckMemberSize(struct _xmlXPathParserContext,valueNr,4,6,49029)
CheckOffset(struct _xmlXPathParserContext,valueNr,20,6,49029)
CheckMemberSize(struct _xmlXPathParserContext,valueMax,4,6,49030)
CheckOffset(struct _xmlXPathParserContext,valueMax,24,6,49030)
CheckMemberSize(struct _xmlXPathParserContext,valueTab,4,6,49031)
CheckOffset(struct _xmlXPathParserContext,valueTab,28,6,49031)
CheckMemberSize(struct _xmlXPathParserContext,comp,4,6,49032)
CheckOffset(struct _xmlXPathParserContext,comp,32,6,49032)
CheckMemberSize(struct _xmlXPathParserContext,xptr,4,6,49033)
CheckOffset(struct _xmlXPathParserContext,xptr,36,6,49033)
CheckMemberSize(struct _xmlXPathParserContext,ancestor,4,6,49034)
CheckOffset(struct _xmlXPathParserContext,ancestor,40,6,49034)
#elif defined __ia64__
CheckTypeSize(struct _xmlXPathParserContext,80, 14877, 3, , NULL, 0, NULL)
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
#elif defined __i386__
CheckTypeSize(struct _xmlXPathParserContext,44, 14877, 2, , NULL, 0, NULL)
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
#elif 1
CheckTypeSize(struct _xmlXPathParserContext,0, 14877, 1, , NULL, 0, NULL)
Msg("Missing member data for _xmlXPathParserContext on All\n");
CheckOffset(struct _xmlXPathParserContext,cur,0,1,49024)
#endif

#if defined __s390x__
CheckTypeSize(xmlXPathContext,344, 14878, 12, 3.1, NULL, 14859, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlXPathContext,344, 14878, 11, 3.1, NULL, 14859, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlXPathContext,200, 14878, 10, 3.1, NULL, 14859, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlXPathContext,344, 14878, 9, 3.1, NULL, 14859, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlXPathContext,200, 14878, 6, 3.1, NULL, 14859, NULL)
#elif defined __ia64__
CheckTypeSize(xmlXPathContext,344, 14878, 3, 3.1, NULL, 14859, NULL)
#elif defined __i386__
CheckTypeSize(xmlXPathContext,200, 14878, 2, 3.1, NULL, 14859, NULL)
#else
Msg("Find size of xmlXPathContext (14878)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14859,NULL);\n",architecture,14878,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlXPathContextPtr,8, 14880, 12, 3.1, NULL, 14879, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlXPathContextPtr,8, 14880, 11, 3.1, NULL, 14879, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlXPathContextPtr,4, 14880, 10, 3.1, NULL, 14879, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlXPathContextPtr,8, 14880, 9, 3.1, NULL, 14879, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlXPathContextPtr,4, 14880, 6, 3.1, NULL, 14879, NULL)
#elif defined __ia64__
CheckTypeSize(xmlXPathContextPtr,8, 14880, 3, 3.1, NULL, 14879, NULL)
#elif defined __i386__
CheckTypeSize(xmlXPathContextPtr,4, 14880, 2, 3.1, NULL, 14879, NULL)
#else
Msg("Find size of xmlXPathContextPtr (14880)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14879,NULL);\n",architecture,14880,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlXPathParserContext,80, 14882, 12, 3.1, NULL, 14877, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlXPathParserContext,80, 14882, 11, 3.1, NULL, 14877, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlXPathParserContext,44, 14882, 10, 3.1, NULL, 14877, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlXPathParserContext,80, 14882, 9, 3.1, NULL, 14877, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlXPathParserContext,44, 14882, 6, 3.1, NULL, 14877, NULL)
#elif defined __ia64__
CheckTypeSize(xmlXPathParserContext,80, 14882, 3, 3.1, NULL, 14877, NULL)
#elif defined __i386__
CheckTypeSize(xmlXPathParserContext,44, 14882, 2, 3.1, NULL, 14877, NULL)
#else
Msg("Find size of xmlXPathParserContext (14882)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14877,NULL);\n",architecture,14882,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlXPathParserContextPtr,8, 14884, 12, 3.1, NULL, 14883, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlXPathParserContextPtr,8, 14884, 11, 3.1, NULL, 14883, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlXPathParserContextPtr,4, 14884, 10, 3.1, NULL, 14883, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlXPathParserContextPtr,8, 14884, 9, 3.1, NULL, 14883, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlXPathParserContextPtr,4, 14884, 6, 3.1, NULL, 14883, NULL)
#elif defined __ia64__
CheckTypeSize(xmlXPathParserContextPtr,8, 14884, 3, 3.1, NULL, 14883, NULL)
#elif defined __i386__
CheckTypeSize(xmlXPathParserContextPtr,4, 14884, 2, 3.1, NULL, 14883, NULL)
#else
Msg("Find size of xmlXPathParserContextPtr (14884)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14883,NULL);\n",architecture,14884,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlXPathAxisFunc,8, 14886, 12, 3.1, NULL, 14885, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlXPathAxisFunc,8, 14886, 11, 3.1, NULL, 14885, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlXPathAxisFunc,4, 14886, 10, 3.1, NULL, 14885, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlXPathAxisFunc,8, 14886, 9, 3.1, NULL, 14885, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlXPathAxisFunc,4, 14886, 6, 3.1, NULL, 14885, NULL)
#elif defined __ia64__
CheckTypeSize(xmlXPathAxisFunc,8, 14886, 3, 3.1, NULL, 14885, NULL)
#elif defined __i386__
CheckTypeSize(xmlXPathAxisFunc,4, 14886, 2, 3.1, NULL, 14885, NULL)
#else
Msg("Find size of xmlXPathAxisFunc (14886)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14885,NULL);\n",architecture,14886,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlXPathAxis,16, 14887, 12, 3.1, NULL, 14876, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlXPathAxis,16, 14887, 11, 3.1, NULL, 14876, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlXPathAxis,8, 14887, 10, 3.1, NULL, 14876, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlXPathAxis,16, 14887, 9, 3.1, NULL, 14876, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlXPathAxis,8, 14887, 6, 3.1, NULL, 14876, NULL)
#elif defined __ia64__
CheckTypeSize(xmlXPathAxis,16, 14887, 3, 3.1, NULL, 14876, NULL)
#elif defined __i386__
CheckTypeSize(xmlXPathAxis,8, 14887, 2, 3.1, NULL, 14876, NULL)
#else
Msg("Find size of xmlXPathAxis (14887)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14876,NULL);\n",architecture,14887,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlXPathAxisPtr,8, 14889, 12, 3.1, NULL, 14888, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlXPathAxisPtr,8, 14889, 11, 3.1, NULL, 14888, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlXPathAxisPtr,4, 14889, 10, 3.1, NULL, 14888, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlXPathAxisPtr,8, 14889, 9, 3.1, NULL, 14888, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlXPathAxisPtr,4, 14889, 6, 3.1, NULL, 14888, NULL)
#elif defined __ia64__
CheckTypeSize(xmlXPathAxisPtr,8, 14889, 3, 3.1, NULL, 14888, NULL)
#elif defined __i386__
CheckTypeSize(xmlXPathAxisPtr,4, 14889, 2, 3.1, NULL, 14888, NULL)
#else
Msg("Find size of xmlXPathAxisPtr (14889)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14888,NULL);\n",architecture,14889,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlXPathVariableLookupFunc,8, 14891, 12, 3.1, NULL, 14890, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlXPathVariableLookupFunc,8, 14891, 11, 3.1, NULL, 14890, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlXPathVariableLookupFunc,4, 14891, 10, 3.1, NULL, 14890, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlXPathVariableLookupFunc,8, 14891, 9, 3.1, NULL, 14890, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlXPathVariableLookupFunc,4, 14891, 6, 3.1, NULL, 14890, NULL)
#elif defined __ia64__
CheckTypeSize(xmlXPathVariableLookupFunc,8, 14891, 3, 3.1, NULL, 14890, NULL)
#elif defined __i386__
CheckTypeSize(xmlXPathVariableLookupFunc,4, 14891, 2, 3.1, NULL, 14890, NULL)
#else
Msg("Find size of xmlXPathVariableLookupFunc (14891)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14890,NULL);\n",architecture,14891,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlXPathFunction,8, 14893, 12, 3.1, NULL, 14892, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlXPathFunction,8, 14893, 11, 3.1, NULL, 14892, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlXPathFunction,4, 14893, 10, 3.1, NULL, 14892, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlXPathFunction,8, 14893, 9, 3.1, NULL, 14892, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlXPathFunction,4, 14893, 6, 3.1, NULL, 14892, NULL)
#elif defined __ia64__
CheckTypeSize(xmlXPathFunction,8, 14893, 3, 3.1, NULL, 14892, NULL)
#elif defined __i386__
CheckTypeSize(xmlXPathFunction,4, 14893, 2, 3.1, NULL, 14892, NULL)
#else
Msg("Find size of xmlXPathFunction (14893)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14892,NULL);\n",architecture,14893,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlXPathFuncLookupFunc,8, 14895, 12, 3.1, NULL, 14894, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlXPathFuncLookupFunc,8, 14895, 11, 3.1, NULL, 14894, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlXPathFuncLookupFunc,4, 14895, 10, 3.1, NULL, 14894, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlXPathFuncLookupFunc,8, 14895, 9, 3.1, NULL, 14894, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlXPathFuncLookupFunc,4, 14895, 6, 3.1, NULL, 14894, NULL)
#elif defined __ia64__
CheckTypeSize(xmlXPathFuncLookupFunc,8, 14895, 3, 3.1, NULL, 14894, NULL)
#elif defined __i386__
CheckTypeSize(xmlXPathFuncLookupFunc,4, 14895, 2, 3.1, NULL, 14894, NULL)
#else
Msg("Find size of xmlXPathFuncLookupFunc (14895)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14894,NULL);\n",architecture,14895,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlXPathError,4, 15094, 12, 3.1, NULL, 15093, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlXPathError,4, 15094, 11, 3.1, NULL, 15093, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlXPathError,4, 15094, 10, 3.1, NULL, 15093, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlXPathError,4, 15094, 9, 3.1, NULL, 15093, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlXPathError,4, 15094, 6, 3.1, NULL, 15093, NULL)
#elif defined __ia64__
CheckTypeSize(xmlXPathError,4, 15094, 3, 3.1, NULL, 15093, NULL)
#elif defined __i386__
CheckTypeSize(xmlXPathError,4, 15094, 2, 3.1, NULL, 15093, NULL)
#else
Msg("Find size of xmlXPathError (15094)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,15093,NULL);\n",architecture,15094,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlXPathEvalFunc,8, 15096, 12, 3.1, NULL, 14892, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlXPathEvalFunc,8, 15096, 11, 3.1, NULL, 14892, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlXPathEvalFunc,4, 15096, 10, 3.1, NULL, 14892, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlXPathEvalFunc,8, 15096, 9, 3.1, NULL, 14892, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlXPathEvalFunc,4, 15096, 6, 3.1, NULL, 14892, NULL)
#elif defined __ia64__
CheckTypeSize(xmlXPathEvalFunc,8, 15096, 3, 3.1, NULL, 14892, NULL)
#elif defined __i386__
CheckTypeSize(xmlXPathEvalFunc,4, 15096, 2, 3.1, NULL, 14892, NULL)
#else
Msg("Find size of xmlXPathEvalFunc (15096)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14892,NULL);\n",architecture,15096,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _xmlXPathFunct,16, 15097, 12, , NULL, 0, NULL)
CheckMemberSize(struct _xmlXPathFunct,func,8,12,50098)
CheckOffset(struct _xmlXPathFunct,func,8,12,50098)
#elif defined __x86_64__
CheckTypeSize(struct _xmlXPathFunct,16, 15097, 11, , NULL, 0, NULL)
CheckMemberSize(struct _xmlXPathFunct,func,8,11,50098)
CheckOffset(struct _xmlXPathFunct,func,8,11,50098)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _xmlXPathFunct,8, 15097, 10, , NULL, 0, NULL)
CheckMemberSize(struct _xmlXPathFunct,func,4,10,50098)
CheckOffset(struct _xmlXPathFunct,func,4,10,50098)
#elif defined __powerpc64__
CheckTypeSize(struct _xmlXPathFunct,16, 15097, 9, , NULL, 0, NULL)
CheckMemberSize(struct _xmlXPathFunct,func,8,9,50098)
CheckOffset(struct _xmlXPathFunct,func,8,9,50098)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _xmlXPathFunct,8, 15097, 6, , NULL, 0, NULL)
CheckMemberSize(struct _xmlXPathFunct,func,4,6,50098)
CheckOffset(struct _xmlXPathFunct,func,4,6,50098)
#elif defined __ia64__
CheckTypeSize(struct _xmlXPathFunct,16, 15097, 3, , NULL, 0, NULL)
CheckMemberSize(struct _xmlXPathFunct,func,8,3,50098)
CheckOffset(struct _xmlXPathFunct,func,8,3,50098)
#elif defined __i386__
CheckTypeSize(struct _xmlXPathFunct,8, 15097, 2, , NULL, 0, NULL)
CheckMemberSize(struct _xmlXPathFunct,func,4,2,50098)
CheckOffset(struct _xmlXPathFunct,func,4,2,50098)
#elif 1
CheckTypeSize(struct _xmlXPathFunct,0, 15097, 1, , NULL, 0, NULL)
Msg("Missing member data for _xmlXPathFunct on All\n");
CheckOffset(struct _xmlXPathFunct,name,0,1,50097)
#endif

#if defined __s390x__
CheckTypeSize(xmlXPathFunct,16, 15098, 12, 3.1, NULL, 15097, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlXPathFunct,16, 15098, 11, 3.1, NULL, 15097, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlXPathFunct,8, 15098, 10, 3.1, NULL, 15097, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlXPathFunct,16, 15098, 9, 3.1, NULL, 15097, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlXPathFunct,8, 15098, 6, 3.1, NULL, 15097, NULL)
#elif defined __ia64__
CheckTypeSize(xmlXPathFunct,16, 15098, 3, 3.1, NULL, 15097, NULL)
#elif defined __i386__
CheckTypeSize(xmlXPathFunct,8, 15098, 2, 3.1, NULL, 15097, NULL)
#else
Msg("Find size of xmlXPathFunct (15098)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,15097,NULL);\n",architecture,15098,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _xmlXPathVariable,16, 15099, 12, , NULL, 0, NULL)
CheckMemberSize(struct _xmlXPathVariable,value,8,12,50100)
CheckOffset(struct _xmlXPathVariable,value,8,12,50100)
#elif defined __x86_64__
CheckTypeSize(struct _xmlXPathVariable,16, 15099, 11, , NULL, 0, NULL)
CheckMemberSize(struct _xmlXPathVariable,value,8,11,50100)
CheckOffset(struct _xmlXPathVariable,value,8,11,50100)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _xmlXPathVariable,8, 15099, 10, , NULL, 0, NULL)
CheckMemberSize(struct _xmlXPathVariable,value,4,10,50100)
CheckOffset(struct _xmlXPathVariable,value,4,10,50100)
#elif defined __powerpc64__
CheckTypeSize(struct _xmlXPathVariable,16, 15099, 9, , NULL, 0, NULL)
CheckMemberSize(struct _xmlXPathVariable,value,8,9,50100)
CheckOffset(struct _xmlXPathVariable,value,8,9,50100)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _xmlXPathVariable,8, 15099, 6, , NULL, 0, NULL)
CheckMemberSize(struct _xmlXPathVariable,value,4,6,50100)
CheckOffset(struct _xmlXPathVariable,value,4,6,50100)
#elif defined __ia64__
CheckTypeSize(struct _xmlXPathVariable,16, 15099, 3, , NULL, 0, NULL)
CheckMemberSize(struct _xmlXPathVariable,value,8,3,50100)
CheckOffset(struct _xmlXPathVariable,value,8,3,50100)
#elif defined __i386__
CheckTypeSize(struct _xmlXPathVariable,8, 15099, 2, , NULL, 0, NULL)
CheckMemberSize(struct _xmlXPathVariable,value,4,2,50100)
CheckOffset(struct _xmlXPathVariable,value,4,2,50100)
#elif 1
CheckTypeSize(struct _xmlXPathVariable,0, 15099, 1, , NULL, 0, NULL)
Msg("Missing member data for _xmlXPathVariable on All\n");
CheckOffset(struct _xmlXPathVariable,name,0,1,50099)
#endif

#if defined __s390x__
CheckTypeSize(xmlXPathVariable,16, 15100, 12, 3.1, NULL, 15099, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlXPathVariable,16, 15100, 11, 3.1, NULL, 15099, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlXPathVariable,8, 15100, 10, 3.1, NULL, 15099, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlXPathVariable,16, 15100, 9, 3.1, NULL, 15099, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlXPathVariable,8, 15100, 6, 3.1, NULL, 15099, NULL)
#elif defined __ia64__
CheckTypeSize(xmlXPathVariable,16, 15100, 3, 3.1, NULL, 15099, NULL)
#elif defined __i386__
CheckTypeSize(xmlXPathVariable,8, 15100, 2, 3.1, NULL, 15099, NULL)
#else
Msg("Find size of xmlXPathVariable (15100)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,15099,NULL);\n",architecture,15100,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlXPathVariablePtr,8, 15102, 12, 3.1, NULL, 15101, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlXPathVariablePtr,8, 15102, 11, 3.1, NULL, 15101, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlXPathVariablePtr,4, 15102, 10, 3.1, NULL, 15101, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlXPathVariablePtr,8, 15102, 9, 3.1, NULL, 15101, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlXPathVariablePtr,4, 15102, 6, 3.1, NULL, 15101, NULL)
#elif defined __ia64__
CheckTypeSize(xmlXPathVariablePtr,8, 15102, 3, 3.1, NULL, 15101, NULL)
#elif defined __i386__
CheckTypeSize(xmlXPathVariablePtr,4, 15102, 2, 3.1, NULL, 15101, NULL)
#else
Msg("Find size of xmlXPathVariablePtr (15102)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,15101,NULL);\n",architecture,15102,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlXPathFuncPtr,8, 15104, 12, 3.1, NULL, 15103, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlXPathFuncPtr,8, 15104, 11, 3.1, NULL, 15103, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlXPathFuncPtr,4, 15104, 10, 3.1, NULL, 15103, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlXPathFuncPtr,8, 15104, 9, 3.1, NULL, 15103, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlXPathFuncPtr,4, 15104, 6, 3.1, NULL, 15103, NULL)
#elif defined __ia64__
CheckTypeSize(xmlXPathFuncPtr,8, 15104, 3, 3.1, NULL, 15103, NULL)
#elif defined __i386__
CheckTypeSize(xmlXPathFuncPtr,4, 15104, 2, 3.1, NULL, 15103, NULL)
#else
Msg("Find size of xmlXPathFuncPtr (15104)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,15103, NULL);\n",architecture,15104,0);
#endif

#if defined __s390x__
/* S390X */
typedef int (*xmlXPathConvertFunc_db)(xmlXPathObjectPtr, int);
CheckFunctionTypedef(xmlXPathConvertFunc,xmlXPathConvertFunc_db);
#elif defined __x86_64__
/* x86-64 */
typedef int (*xmlXPathConvertFunc_db)(xmlXPathObjectPtr, int);
CheckFunctionTypedef(xmlXPathConvertFunc,xmlXPathConvertFunc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef int (*xmlXPathConvertFunc_db)(xmlXPathObjectPtr, int);
CheckFunctionTypedef(xmlXPathConvertFunc,xmlXPathConvertFunc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef int (*xmlXPathConvertFunc_db)(xmlXPathObjectPtr, int);
CheckFunctionTypedef(xmlXPathConvertFunc,xmlXPathConvertFunc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef int (*xmlXPathConvertFunc_db)(xmlXPathObjectPtr, int);
CheckFunctionTypedef(xmlXPathConvertFunc,xmlXPathConvertFunc_db);
#elif defined __ia64__
/* IA64 */
typedef int (*xmlXPathConvertFunc_db)(xmlXPathObjectPtr, int);
CheckFunctionTypedef(xmlXPathConvertFunc,xmlXPathConvertFunc_db);
#elif defined __i386__
/* IA32 */
typedef int (*xmlXPathConvertFunc_db)(xmlXPathObjectPtr, int);
CheckFunctionTypedef(xmlXPathConvertFunc,xmlXPathConvertFunc_db);
#endif

#if defined __s390x__
/* S390X */
typedef xmlXPathObjectPtr (*xmlXPathAxisFunc_db)(xmlXPathParserContextPtr, xmlXPathObjectPtr);
CheckFunctionTypedef(xmlXPathAxisFunc,xmlXPathAxisFunc_db);
#elif defined __x86_64__
/* x86-64 */
typedef xmlXPathObjectPtr (*xmlXPathAxisFunc_db)(xmlXPathParserContextPtr, xmlXPathObjectPtr);
CheckFunctionTypedef(xmlXPathAxisFunc,xmlXPathAxisFunc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef xmlXPathObjectPtr (*xmlXPathAxisFunc_db)(xmlXPathParserContextPtr, xmlXPathObjectPtr);
CheckFunctionTypedef(xmlXPathAxisFunc,xmlXPathAxisFunc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef xmlXPathObjectPtr (*xmlXPathAxisFunc_db)(xmlXPathParserContextPtr, xmlXPathObjectPtr);
CheckFunctionTypedef(xmlXPathAxisFunc,xmlXPathAxisFunc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef xmlXPathObjectPtr (*xmlXPathAxisFunc_db)(xmlXPathParserContextPtr, xmlXPathObjectPtr);
CheckFunctionTypedef(xmlXPathAxisFunc,xmlXPathAxisFunc_db);
#elif defined __ia64__
/* IA64 */
typedef xmlXPathObjectPtr (*xmlXPathAxisFunc_db)(xmlXPathParserContextPtr, xmlXPathObjectPtr);
CheckFunctionTypedef(xmlXPathAxisFunc,xmlXPathAxisFunc_db);
#elif defined __i386__
/* IA32 */
typedef xmlXPathObjectPtr (*xmlXPathAxisFunc_db)(xmlXPathParserContextPtr, xmlXPathObjectPtr);
CheckFunctionTypedef(xmlXPathAxisFunc,xmlXPathAxisFunc_db);
#endif

#if defined __s390x__
/* S390X */
typedef xmlXPathObjectPtr (*xmlXPathVariableLookupFunc_db)(void *, const xmlChar *, const xmlChar *);
CheckFunctionTypedef(xmlXPathVariableLookupFunc,xmlXPathVariableLookupFunc_db);
#elif defined __x86_64__
/* x86-64 */
typedef xmlXPathObjectPtr (*xmlXPathVariableLookupFunc_db)(void *, const xmlChar *, const xmlChar *);
CheckFunctionTypedef(xmlXPathVariableLookupFunc,xmlXPathVariableLookupFunc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef xmlXPathObjectPtr (*xmlXPathVariableLookupFunc_db)(void *, const xmlChar *, const xmlChar *);
CheckFunctionTypedef(xmlXPathVariableLookupFunc,xmlXPathVariableLookupFunc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef xmlXPathObjectPtr (*xmlXPathVariableLookupFunc_db)(void *, const xmlChar *, const xmlChar *);
CheckFunctionTypedef(xmlXPathVariableLookupFunc,xmlXPathVariableLookupFunc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef xmlXPathObjectPtr (*xmlXPathVariableLookupFunc_db)(void *, const xmlChar *, const xmlChar *);
CheckFunctionTypedef(xmlXPathVariableLookupFunc,xmlXPathVariableLookupFunc_db);
#elif defined __ia64__
/* IA64 */
typedef xmlXPathObjectPtr (*xmlXPathVariableLookupFunc_db)(void *, const xmlChar *, const xmlChar *);
CheckFunctionTypedef(xmlXPathVariableLookupFunc,xmlXPathVariableLookupFunc_db);
#elif defined __i386__
/* IA32 */
typedef xmlXPathObjectPtr (*xmlXPathVariableLookupFunc_db)(void *, const xmlChar *, const xmlChar *);
CheckFunctionTypedef(xmlXPathVariableLookupFunc,xmlXPathVariableLookupFunc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*xmlXPathFunction_db)(xmlXPathParserContextPtr, int);
CheckFunctionTypedef(xmlXPathFunction,xmlXPathFunction_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*xmlXPathFunction_db)(xmlXPathParserContextPtr, int);
CheckFunctionTypedef(xmlXPathFunction,xmlXPathFunction_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*xmlXPathFunction_db)(xmlXPathParserContextPtr, int);
CheckFunctionTypedef(xmlXPathFunction,xmlXPathFunction_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*xmlXPathFunction_db)(xmlXPathParserContextPtr, int);
CheckFunctionTypedef(xmlXPathFunction,xmlXPathFunction_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*xmlXPathFunction_db)(xmlXPathParserContextPtr, int);
CheckFunctionTypedef(xmlXPathFunction,xmlXPathFunction_db);
#elif defined __ia64__
/* IA64 */
typedef void (*xmlXPathFunction_db)(xmlXPathParserContextPtr, int);
CheckFunctionTypedef(xmlXPathFunction,xmlXPathFunction_db);
#elif defined __i386__
/* IA32 */
typedef void (*xmlXPathFunction_db)(xmlXPathParserContextPtr, int);
CheckFunctionTypedef(xmlXPathFunction,xmlXPathFunction_db);
#endif

#if defined __s390x__
/* S390X */
typedef xmlXPathFunction (*xmlXPathFuncLookupFunc_db)(void *, const xmlChar *, const xmlChar *);
CheckFunctionTypedef(xmlXPathFuncLookupFunc,xmlXPathFuncLookupFunc_db);
#elif defined __x86_64__
/* x86-64 */
typedef xmlXPathFunction (*xmlXPathFuncLookupFunc_db)(void *, const xmlChar *, const xmlChar *);
CheckFunctionTypedef(xmlXPathFuncLookupFunc,xmlXPathFuncLookupFunc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef xmlXPathFunction (*xmlXPathFuncLookupFunc_db)(void *, const xmlChar *, const xmlChar *);
CheckFunctionTypedef(xmlXPathFuncLookupFunc,xmlXPathFuncLookupFunc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef xmlXPathFunction (*xmlXPathFuncLookupFunc_db)(void *, const xmlChar *, const xmlChar *);
CheckFunctionTypedef(xmlXPathFuncLookupFunc,xmlXPathFuncLookupFunc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef xmlXPathFunction (*xmlXPathFuncLookupFunc_db)(void *, const xmlChar *, const xmlChar *);
CheckFunctionTypedef(xmlXPathFuncLookupFunc,xmlXPathFuncLookupFunc_db);
#elif defined __ia64__
/* IA64 */
typedef xmlXPathFunction (*xmlXPathFuncLookupFunc_db)(void *, const xmlChar *, const xmlChar *);
CheckFunctionTypedef(xmlXPathFuncLookupFunc,xmlXPathFuncLookupFunc_db);
#elif defined __i386__
/* IA32 */
typedef xmlXPathFunction (*xmlXPathFuncLookupFunc_db)(void *, const xmlChar *, const xmlChar *);
CheckFunctionTypedef(xmlXPathFuncLookupFunc,xmlXPathFuncLookupFunc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*xmlXPathEvalFunc_db)(xmlXPathParserContextPtr, int);
CheckFunctionTypedef(xmlXPathEvalFunc,xmlXPathEvalFunc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*xmlXPathEvalFunc_db)(xmlXPathParserContextPtr, int);
CheckFunctionTypedef(xmlXPathEvalFunc,xmlXPathEvalFunc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*xmlXPathEvalFunc_db)(xmlXPathParserContextPtr, int);
CheckFunctionTypedef(xmlXPathEvalFunc,xmlXPathEvalFunc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*xmlXPathEvalFunc_db)(xmlXPathParserContextPtr, int);
CheckFunctionTypedef(xmlXPathEvalFunc,xmlXPathEvalFunc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*xmlXPathEvalFunc_db)(xmlXPathParserContextPtr, int);
CheckFunctionTypedef(xmlXPathEvalFunc,xmlXPathEvalFunc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*xmlXPathEvalFunc_db)(xmlXPathParserContextPtr, int);
CheckFunctionTypedef(xmlXPathEvalFunc,xmlXPathEvalFunc_db);
#elif defined __i386__
/* IA32 */
typedef void (*xmlXPathEvalFunc_db)(xmlXPathParserContextPtr, int);
CheckFunctionTypedef(xmlXPathEvalFunc,xmlXPathEvalFunc_db);
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
double xmlXPathNAN_db ;
CheckGlobalVar(xmlXPathNAN_db, xmlXPathNAN);
double xmlXPathNINF_db ;
CheckGlobalVar(xmlXPathNINF_db, xmlXPathNINF);
double xmlXPathPINF_db ;
CheckGlobalVar(xmlXPathPINF_db, xmlXPathPINF);
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
