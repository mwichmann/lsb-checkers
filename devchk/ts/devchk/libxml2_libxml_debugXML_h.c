/*
 * Test of libxml2/libxml/debugXML.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include <libxml/xmlregexp.h>
#include "libxml2/libxml/debugXML.h"



#ifdef TET_TEST
void libxml2_libxml_debugXML_h()
{
#else
int libxml2_libxml_debugXML_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

Msg("Checking data structures in libxml2/libxml/debugXML.h\n");
#if defined __s390x__
CheckTypeSize(struct _xmlShellCtxt,56, 14904, 12, , NULL, 0, NULL)
CheckMemberSize(struct _xmlShellCtxt,doc,8,12,49072)
CheckOffset(struct _xmlShellCtxt,doc,8,12,49072)
CheckMemberSize(struct _xmlShellCtxt,node,8,12,49073)
CheckOffset(struct _xmlShellCtxt,node,16,12,49073)
CheckMemberSize(struct _xmlShellCtxt,pctxt,8,12,49074)
CheckOffset(struct _xmlShellCtxt,pctxt,24,12,49074)
CheckMemberSize(struct _xmlShellCtxt,loaded,4,12,49075)
CheckOffset(struct _xmlShellCtxt,loaded,32,12,49075)
CheckMemberSize(struct _xmlShellCtxt,output,8,12,49076)
CheckOffset(struct _xmlShellCtxt,output,40,12,49076)
CheckMemberSize(struct _xmlShellCtxt,input,8,12,49078)
CheckOffset(struct _xmlShellCtxt,input,48,12,49078)
#elif defined __x86_64__
CheckTypeSize(struct _xmlShellCtxt,56, 14904, 11, , NULL, 0, NULL)
CheckMemberSize(struct _xmlShellCtxt,doc,8,11,49072)
CheckOffset(struct _xmlShellCtxt,doc,8,11,49072)
CheckMemberSize(struct _xmlShellCtxt,node,8,11,49073)
CheckOffset(struct _xmlShellCtxt,node,16,11,49073)
CheckMemberSize(struct _xmlShellCtxt,pctxt,8,11,49074)
CheckOffset(struct _xmlShellCtxt,pctxt,24,11,49074)
CheckMemberSize(struct _xmlShellCtxt,loaded,4,11,49075)
CheckOffset(struct _xmlShellCtxt,loaded,32,11,49075)
CheckMemberSize(struct _xmlShellCtxt,output,8,11,49076)
CheckOffset(struct _xmlShellCtxt,output,40,11,49076)
CheckMemberSize(struct _xmlShellCtxt,input,8,11,49078)
CheckOffset(struct _xmlShellCtxt,input,48,11,49078)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _xmlShellCtxt,28, 14904, 10, , NULL, 0, NULL)
CheckMemberSize(struct _xmlShellCtxt,doc,4,10,49072)
CheckOffset(struct _xmlShellCtxt,doc,4,10,49072)
CheckMemberSize(struct _xmlShellCtxt,node,4,10,49073)
CheckOffset(struct _xmlShellCtxt,node,8,10,49073)
CheckMemberSize(struct _xmlShellCtxt,pctxt,4,10,49074)
CheckOffset(struct _xmlShellCtxt,pctxt,12,10,49074)
CheckMemberSize(struct _xmlShellCtxt,loaded,4,10,49075)
CheckOffset(struct _xmlShellCtxt,loaded,16,10,49075)
CheckMemberSize(struct _xmlShellCtxt,output,4,10,49076)
CheckOffset(struct _xmlShellCtxt,output,20,10,49076)
CheckMemberSize(struct _xmlShellCtxt,input,4,10,49078)
CheckOffset(struct _xmlShellCtxt,input,24,10,49078)
#elif defined __powerpc64__
CheckTypeSize(struct _xmlShellCtxt,56, 14904, 9, , NULL, 0, NULL)
CheckMemberSize(struct _xmlShellCtxt,doc,8,9,49072)
CheckOffset(struct _xmlShellCtxt,doc,8,9,49072)
CheckMemberSize(struct _xmlShellCtxt,node,8,9,49073)
CheckOffset(struct _xmlShellCtxt,node,16,9,49073)
CheckMemberSize(struct _xmlShellCtxt,pctxt,8,9,49074)
CheckOffset(struct _xmlShellCtxt,pctxt,24,9,49074)
CheckMemberSize(struct _xmlShellCtxt,loaded,4,9,49075)
CheckOffset(struct _xmlShellCtxt,loaded,32,9,49075)
CheckMemberSize(struct _xmlShellCtxt,output,8,9,49076)
CheckOffset(struct _xmlShellCtxt,output,40,9,49076)
CheckMemberSize(struct _xmlShellCtxt,input,8,9,49078)
CheckOffset(struct _xmlShellCtxt,input,48,9,49078)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _xmlShellCtxt,28, 14904, 6, , NULL, 0, NULL)
CheckMemberSize(struct _xmlShellCtxt,doc,4,6,49072)
CheckOffset(struct _xmlShellCtxt,doc,4,6,49072)
CheckMemberSize(struct _xmlShellCtxt,node,4,6,49073)
CheckOffset(struct _xmlShellCtxt,node,8,6,49073)
CheckMemberSize(struct _xmlShellCtxt,pctxt,4,6,49074)
CheckOffset(struct _xmlShellCtxt,pctxt,12,6,49074)
CheckMemberSize(struct _xmlShellCtxt,loaded,4,6,49075)
CheckOffset(struct _xmlShellCtxt,loaded,16,6,49075)
CheckMemberSize(struct _xmlShellCtxt,output,4,6,49076)
CheckOffset(struct _xmlShellCtxt,output,20,6,49076)
CheckMemberSize(struct _xmlShellCtxt,input,4,6,49078)
CheckOffset(struct _xmlShellCtxt,input,24,6,49078)
#elif defined __ia64__
CheckTypeSize(struct _xmlShellCtxt,56, 14904, 3, , NULL, 0, NULL)
CheckMemberSize(struct _xmlShellCtxt,doc,8,3,49072)
CheckOffset(struct _xmlShellCtxt,doc,8,3,49072)
CheckMemberSize(struct _xmlShellCtxt,node,8,3,49073)
CheckOffset(struct _xmlShellCtxt,node,16,3,49073)
CheckMemberSize(struct _xmlShellCtxt,pctxt,8,3,49074)
CheckOffset(struct _xmlShellCtxt,pctxt,24,3,49074)
CheckMemberSize(struct _xmlShellCtxt,loaded,4,3,49075)
CheckOffset(struct _xmlShellCtxt,loaded,32,3,49075)
CheckMemberSize(struct _xmlShellCtxt,output,8,3,49076)
CheckOffset(struct _xmlShellCtxt,output,40,3,49076)
CheckMemberSize(struct _xmlShellCtxt,input,8,3,49078)
CheckOffset(struct _xmlShellCtxt,input,48,3,49078)
#elif defined __i386__
CheckTypeSize(struct _xmlShellCtxt,28, 14904, 2, , NULL, 0, NULL)
CheckMemberSize(struct _xmlShellCtxt,doc,4,2,49072)
CheckOffset(struct _xmlShellCtxt,doc,4,2,49072)
CheckMemberSize(struct _xmlShellCtxt,node,4,2,49073)
CheckOffset(struct _xmlShellCtxt,node,8,2,49073)
CheckMemberSize(struct _xmlShellCtxt,pctxt,4,2,49074)
CheckOffset(struct _xmlShellCtxt,pctxt,12,2,49074)
CheckMemberSize(struct _xmlShellCtxt,loaded,4,2,49075)
CheckOffset(struct _xmlShellCtxt,loaded,16,2,49075)
CheckMemberSize(struct _xmlShellCtxt,output,4,2,49076)
CheckOffset(struct _xmlShellCtxt,output,20,2,49076)
CheckMemberSize(struct _xmlShellCtxt,input,4,2,49078)
CheckOffset(struct _xmlShellCtxt,input,24,2,49078)
#elif 1
CheckTypeSize(struct _xmlShellCtxt,0, 14904, 1, , NULL, 0, NULL)
Msg("Missing member data for _xmlShellCtxt on All\n");
CheckOffset(struct _xmlShellCtxt,filename,0,1,49071)
#endif

#if defined __s390x__
CheckTypeSize(xmlShellReadlineFunc,8, 14906, 12, 3.1, NULL, 14905, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlShellReadlineFunc,8, 14906, 11, 3.1, NULL, 14905, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlShellReadlineFunc,4, 14906, 10, 3.1, NULL, 14905, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlShellReadlineFunc,8, 14906, 9, 3.1, NULL, 14905, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlShellReadlineFunc,4, 14906, 6, 3.1, NULL, 14905, NULL)
#elif defined __ia64__
CheckTypeSize(xmlShellReadlineFunc,8, 14906, 3, 3.1, NULL, 14905, NULL)
#elif defined __i386__
CheckTypeSize(xmlShellReadlineFunc,4, 14906, 2, 3.1, NULL, 14905, NULL)
#else
Msg("Find size of xmlShellReadlineFunc (14906)\n");
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14905,NULL);\n",architecture,14906,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlShellCtxt,56, 14907, 12, 3.1, NULL, 14904, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlShellCtxt,56, 14907, 11, 3.1, NULL, 14904, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlShellCtxt,28, 14907, 10, 3.1, NULL, 14904, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlShellCtxt,56, 14907, 9, 3.1, NULL, 14904, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlShellCtxt,28, 14907, 6, 3.1, NULL, 14904, NULL)
#elif defined __ia64__
CheckTypeSize(xmlShellCtxt,56, 14907, 3, 3.1, NULL, 14904, NULL)
#elif defined __i386__
CheckTypeSize(xmlShellCtxt,28, 14907, 2, 3.1, NULL, 14904, NULL)
#else
Msg("Find size of xmlShellCtxt (14907)\n");
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14904,NULL);\n",architecture,14907,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlShellCtxtPtr,8, 14909, 12, 3.1, NULL, 14908, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlShellCtxtPtr,8, 14909, 11, 3.1, NULL, 14908, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlShellCtxtPtr,4, 14909, 10, 3.1, NULL, 14908, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlShellCtxtPtr,8, 14909, 9, 3.1, NULL, 14908, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlShellCtxtPtr,4, 14909, 6, 3.1, NULL, 14908, NULL)
#elif defined __ia64__
CheckTypeSize(xmlShellCtxtPtr,8, 14909, 3, 3.1, NULL, 14908, NULL)
#elif defined __i386__
CheckTypeSize(xmlShellCtxtPtr,4, 14909, 2, 3.1, NULL, 14908, NULL)
#else
Msg("Find size of xmlShellCtxtPtr (14909)\n");
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14908,NULL);\n",architecture,14909,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlShellCmd,8, 15126, 12, 3.1, NULL, 15125, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlShellCmd,8, 15126, 11, 3.1, NULL, 15125, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlShellCmd,4, 15126, 10, 3.1, NULL, 15125, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlShellCmd,8, 15126, 9, 3.1, NULL, 15125, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlShellCmd,4, 15126, 6, 3.1, NULL, 15125, NULL)
#elif defined __ia64__
CheckTypeSize(xmlShellCmd,8, 15126, 3, 3.1, NULL, 15125, NULL)
#elif defined __i386__
CheckTypeSize(xmlShellCmd,4, 15126, 2, 3.1, NULL, 15125, NULL)
#else
Msg("Find size of xmlShellCmd (15126)\n");
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,15125, NULL);\n",architecture,15126,0);
#endif

#if defined __s390x__
/* S390X */
typedef char * (*xmlShellReadlineFunc_db)(char *);
CheckFunctionTypedef(xmlShellReadlineFunc,xmlShellReadlineFunc_db);
#elif defined __x86_64__
/* x86-64 */
typedef char * (*xmlShellReadlineFunc_db)(char *);
CheckFunctionTypedef(xmlShellReadlineFunc,xmlShellReadlineFunc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef char * (*xmlShellReadlineFunc_db)(char *);
CheckFunctionTypedef(xmlShellReadlineFunc,xmlShellReadlineFunc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef char * (*xmlShellReadlineFunc_db)(char *);
CheckFunctionTypedef(xmlShellReadlineFunc,xmlShellReadlineFunc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef char * (*xmlShellReadlineFunc_db)(char *);
CheckFunctionTypedef(xmlShellReadlineFunc,xmlShellReadlineFunc_db);
#elif defined __ia64__
/* IA64 */
typedef char * (*xmlShellReadlineFunc_db)(char *);
CheckFunctionTypedef(xmlShellReadlineFunc,xmlShellReadlineFunc_db);
#elif defined __i386__
/* IA32 */
typedef char * (*xmlShellReadlineFunc_db)(char *);
CheckFunctionTypedef(xmlShellReadlineFunc,xmlShellReadlineFunc_db);
#elif defined __s390x__
/* S390X */
typedef int (*xmlShellCmd_db)(xmlShellCtxtPtr, char *, xmlNodePtr, xmlNodePtr);
CheckFunctionTypedef(xmlShellCmd,xmlShellCmd_db);
#elif defined __x86_64__
/* x86-64 */
typedef int (*xmlShellCmd_db)(xmlShellCtxtPtr, char *, xmlNodePtr, xmlNodePtr);
CheckFunctionTypedef(xmlShellCmd,xmlShellCmd_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef int (*xmlShellCmd_db)(xmlShellCtxtPtr, char *, xmlNodePtr, xmlNodePtr);
CheckFunctionTypedef(xmlShellCmd,xmlShellCmd_db);
#elif defined __powerpc64__
/* PPC64 */
typedef int (*xmlShellCmd_db)(xmlShellCtxtPtr, char *, xmlNodePtr, xmlNodePtr);
CheckFunctionTypedef(xmlShellCmd,xmlShellCmd_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef int (*xmlShellCmd_db)(xmlShellCtxtPtr, char *, xmlNodePtr, xmlNodePtr);
CheckFunctionTypedef(xmlShellCmd,xmlShellCmd_db);
#elif defined __ia64__
/* IA64 */
typedef int (*xmlShellCmd_db)(xmlShellCtxtPtr, char *, xmlNodePtr, xmlNodePtr);
CheckFunctionTypedef(xmlShellCmd,xmlShellCmd_db);
#elif defined __i386__
/* IA32 */
typedef int (*xmlShellCmd_db)(xmlShellCtxtPtr, char *, xmlNodePtr, xmlNodePtr);
CheckFunctionTypedef(xmlShellCmd,xmlShellCmd_db);
#endif

extern const char * xmlBoolToText_db(int);
CheckInterfacedef(xmlBoolToText,xmlBoolToText_db);
extern void xmlDebugDumpAttr_db(FILE *, xmlAttrPtr, int);
CheckInterfacedef(xmlDebugDumpAttr,xmlDebugDumpAttr_db);
extern void xmlDebugDumpAttrList_db(FILE *, xmlAttrPtr, int);
CheckInterfacedef(xmlDebugDumpAttrList,xmlDebugDumpAttrList_db);
extern void xmlDebugDumpDocument_db(FILE *, xmlDocPtr);
CheckInterfacedef(xmlDebugDumpDocument,xmlDebugDumpDocument_db);
extern void xmlDebugDumpOneNode_db(FILE *, xmlNodePtr, int);
CheckInterfacedef(xmlDebugDumpOneNode,xmlDebugDumpOneNode_db);
extern int xmlShellCat_db(xmlShellCtxtPtr, char *, xmlNodePtr, xmlNodePtr);
CheckInterfacedef(xmlShellCat,xmlShellCat_db);
extern int xmlShellBase_db(xmlShellCtxtPtr, char *, xmlNodePtr, xmlNodePtr);
CheckInterfacedef(xmlShellBase,xmlShellBase_db);
extern int xmlShellWrite_db(xmlShellCtxtPtr, char *, xmlNodePtr, xmlNodePtr);
CheckInterfacedef(xmlShellWrite,xmlShellWrite_db);
extern int xmlShellLoad_db(xmlShellCtxtPtr, char *, xmlNodePtr, xmlNodePtr);
CheckInterfacedef(xmlShellLoad,xmlShellLoad_db);
extern int xmlDebugCheckDocument_db(FILE *, xmlDocPtr);
CheckInterfacedef(xmlDebugCheckDocument,xmlDebugCheckDocument_db);
extern int xmlShellPwd_db(xmlShellCtxtPtr, char *, xmlNodePtr, xmlNodePtr);
CheckInterfacedef(xmlShellPwd,xmlShellPwd_db);
extern void xmlDebugDumpEntities_db(FILE *, xmlDocPtr);
CheckInterfacedef(xmlDebugDumpEntities,xmlDebugDumpEntities_db);
extern void xmlDebugDumpNodeList_db(FILE *, xmlNodePtr, int);
CheckInterfacedef(xmlDebugDumpNodeList,xmlDebugDumpNodeList_db);
extern void xmlDebugDumpDocumentHead_db(FILE *, xmlDocPtr);
CheckInterfacedef(xmlDebugDumpDocumentHead,xmlDebugDumpDocumentHead_db);
extern void xmlDebugDumpDTD_db(FILE *, xmlDtdPtr);
CheckInterfacedef(xmlDebugDumpDTD,xmlDebugDumpDTD_db);
extern void xmlDebugDumpString_db(FILE *, const xmlChar *);
CheckInterfacedef(xmlDebugDumpString,xmlDebugDumpString_db);
extern int xmlShellValidate_db(xmlShellCtxtPtr, char *, xmlNodePtr, xmlNodePtr);
CheckInterfacedef(xmlShellValidate,xmlShellValidate_db);
extern int xmlShellSave_db(xmlShellCtxtPtr, char *, xmlNodePtr, xmlNodePtr);
CheckInterfacedef(xmlShellSave,xmlShellSave_db);
extern void xmlShell_db(xmlDocPtr, char *, xmlShellReadlineFunc, FILE *);
CheckInterfacedef(xmlShell,xmlShell_db);
extern void xmlDebugDumpNode_db(FILE *, xmlNodePtr, int);
CheckInterfacedef(xmlDebugDumpNode,xmlDebugDumpNode_db);
extern int xmlShellDu_db(xmlShellCtxtPtr, char *, xmlNodePtr, xmlNodePtr);
CheckInterfacedef(xmlShellDu,xmlShellDu_db);
extern void xmlShellPrintXPathResult_db(xmlXPathObjectPtr);
CheckInterfacedef(xmlShellPrintXPathResult,xmlShellPrintXPathResult_db);
extern int xmlShellDir_db(xmlShellCtxtPtr, char *, xmlNodePtr, xmlNodePtr);
CheckInterfacedef(xmlShellDir,xmlShellDir_db);
extern int xmlLsCountNode_db(xmlNodePtr);
CheckInterfacedef(xmlLsCountNode,xmlLsCountNode_db);
extern void xmlShellPrintNode_db(xmlNodePtr);
CheckInterfacedef(xmlShellPrintNode,xmlShellPrintNode_db);
extern void xmlLsOneNode_db(FILE *, xmlNodePtr);
CheckInterfacedef(xmlLsOneNode,xmlLsOneNode_db);
extern int xmlShellList_db(xmlShellCtxtPtr, char *, xmlNodePtr, xmlNodePtr);
CheckInterfacedef(xmlShellList,xmlShellList_db);
extern void xmlShellPrintXPathError_db(int, const char *);
CheckInterfacedef(xmlShellPrintXPathError,xmlShellPrintXPathError_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in libxml2/libxml/debugXML.h\n\n",pcnt,cnt);
return cnt;
#endif

}
