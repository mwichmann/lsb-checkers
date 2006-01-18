/*
 * Test of libxml2/libxml/debugXML.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
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
#ifdef TET_TEST
Msg("Checking data structures in libxml2/libxml/debugXML.h\n");
#endif

printf("Checking data structures in libxml2/libxml/debugXML.h\n");
#if __i386__
CheckTypeSize(struct _xmlShellCtxt,28, 14904, 2)
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
#elif __x86_64__
CheckTypeSize(struct _xmlShellCtxt,56, 14904, 11)
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
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14904,0);
Msg("Find size of _xmlShellCtxt (14904)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14905,0);
Msg("Find size of fptr_debugXML_549 (14905)\n");
#endif

#if __i386__
CheckTypeSize(xmlShellReadlineFunc,4, 14906, 2)
#elif __x86_64__
CheckTypeSize(xmlShellReadlineFunc,8, 14906, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14906,0);
Msg("Find size of xmlShellReadlineFunc (14906)\n");
#endif

#if __i386__
CheckTypeSize(xmlShellCtxt,28, 14907, 2)
#elif __x86_64__
CheckTypeSize(xmlShellCtxt,56, 14907, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14907,0);
Msg("Find size of xmlShellCtxt (14907)\n");
#endif

#if __i386__
CheckTypeSize(xmlShellCtxt *,4, 14908, 2)
#elif __x86_64__
CheckTypeSize(xmlShellCtxt *,8, 14908, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14908,0);
Msg("Find size of xmlShellCtxt * (14908)\n");
#endif

#if __i386__
CheckTypeSize(xmlShellCtxtPtr,4, 14909, 2)
#elif __x86_64__
CheckTypeSize(xmlShellCtxtPtr,8, 14909, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14909,0);
Msg("Find size of xmlShellCtxtPtr (14909)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15125,0);
Msg("Find size of fptr_anonymous-debugXML.h.types-0 (15125)\n");
#endif

#if __i386__
CheckTypeSize(xmlShellCmd,4, 15126, 2)
#elif 1
CheckTypeSize(xmlShellCmd,8, 15126, 1)
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
printf("%d tests passed out of %d tests in libxml2/libxml/debugXML.h\n\n",pcnt,cnt);
return cnt;
#endif

}
