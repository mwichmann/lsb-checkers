/*
 * Test of libxml2/libxml/parserInternals.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include <libxml/xmlregexp.h>
#include "libxml2/libxml/parserInternals.h"



#ifdef TET_TEST
void libxml2_libxml_parserInternals_h()
{
#else
int libxml2_libxml_parserInternals_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in libxml2/libxml/parserInternals.h\n");
#endif

printf("Checking data structures in libxml2/libxml/parserInternals.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef XML_MAX_NAMELEN
	CompareConstant(XML_MAX_NAMELEN,100,9448,architecture)
#else
Msg( "Error: Constant not found: XML_MAX_NAMELEN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef INPUT_CHUNK
	CompareConstant(INPUT_CHUNK,250,9449,architecture)
#else
Msg( "Error: Constant not found: INPUT_CHUNK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for IS_BYTE_CHAR(c) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IS_CHAR(c) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IS_CHAR_CH(c) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IS_BLANK(c) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IS_BLANK_CH(c) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IS_BASECHAR(c) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IS_DIGIT(c) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IS_DIGIT_CH(c) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IS_COMBINING(c) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IS_COMBINING_CH(c) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IS_EXTENDER(c) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IS_EXTENDER_CH(c) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IS_IDEOGRAPHIC(c) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IS_LETTER(c) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IS_LETTER_CH(c) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IS_ASCII_LETTER(c) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IS_ASCII_DIGIT(c) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IS_PUBIDCHAR(c) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IS_PUBIDCHAR_CH(c) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SKIP_EOL(p) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for MOVETO_ENDTAG(p) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for MOVETO_STARTTAG(p) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef XML_SUBSTITUTE_NONE
	CompareConstant(XML_SUBSTITUTE_NONE,0,9472,architecture)
#else
Msg( "Error: Constant not found: XML_SUBSTITUTE_NONE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XML_SUBSTITUTE_REF
	CompareConstant(XML_SUBSTITUTE_REF,1,9473,architecture)
#else
Msg( "Error: Constant not found: XML_SUBSTITUTE_REF\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XML_SUBSTITUTE_PEREF
	CompareConstant(XML_SUBSTITUTE_PEREF,2,9474,architecture)
#else
Msg( "Error: Constant not found: XML_SUBSTITUTE_PEREF\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XML_SUBSTITUTE_BOTH
	CompareConstant(XML_SUBSTITUTE_BOTH,3,9475,architecture)
#else
Msg( "Error: Constant not found: XML_SUBSTITUTE_BOTH\n");
cnt++;
#endif

#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15016,0);
Msg("Find size of const xmlChar[8] (15016)\n");
#endif

#if __powerpc64__
#elif __i386__
#elif __powerpc__ && !__powerpc64__
#elif __ia64__
#elif __s390__ && !__s390x__
#elif __x86_64__
#elif __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15017,0);
Msg("Find size of const const xmlChar[8] (15017)\n");
#endif

#if __i386__
CheckTypeSize(xmlElementContentPtr *,4, 15018, 2)
#elif __x86_64__
CheckTypeSize(xmlElementContentPtr *,8, 15018, 11)
#elif __ia64__
CheckTypeSize(xmlElementContentPtr *,8, 15018, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlElementContentPtr *,4, 15018, 6)
#elif __powerpc64__
CheckTypeSize(xmlElementContentPtr *,8, 15018, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlElementContentPtr *,4, 15018, 10)
#elif __s390x__
CheckTypeSize(xmlElementContentPtr *,8, 15018, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15018,0);
Msg("Find size of xmlElementContentPtr * (15018)\n");
#endif

#if __i386__
CheckTypeSize(xmlEnumerationPtr *,4, 15019, 2)
#elif __x86_64__
CheckTypeSize(xmlEnumerationPtr *,8, 15019, 11)
#elif __ia64__
CheckTypeSize(xmlEnumerationPtr *,8, 15019, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlEnumerationPtr *,4, 15019, 6)
#elif __powerpc64__
CheckTypeSize(xmlEnumerationPtr *,8, 15019, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlEnumerationPtr *,4, 15019, 10)
#elif __s390x__
CheckTypeSize(xmlEnumerationPtr *,8, 15019, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15019,0);
Msg("Find size of xmlEnumerationPtr * (15019)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15020,0);
Msg("Find size of fptr_parserInternals_407 (15020)\n");
#endif

#if __i386__
CheckTypeSize(xmlEntityReferenceFunc,4, 15021, 2)
#elif __x86_64__
CheckTypeSize(xmlEntityReferenceFunc,8, 15021, 11)
#elif __ia64__
CheckTypeSize(xmlEntityReferenceFunc,8, 15021, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlEntityReferenceFunc,4, 15021, 6)
#elif __powerpc64__
CheckTypeSize(xmlEntityReferenceFunc,8, 15021, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlEntityReferenceFunc,4, 15021, 10)
#elif __s390x__
CheckTypeSize(xmlEntityReferenceFunc,8, 15021, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15021,0);
Msg("Find size of xmlEntityReferenceFunc (15021)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15022,0);
Msg("Find size of const xmlChar[5] (15022)\n");
#endif

#if __i386__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __x86_64__
#elif __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15023,0);
Msg("Find size of const const xmlChar[5] (15023)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15024,0);
Msg("Find size of const xmlChar[10] (15024)\n");
#endif

#if __i386__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __x86_64__
#elif __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15025,0);
Msg("Find size of const const xmlChar[10] (15025)\n");
#endif

extern int nodePush_db(xmlParserCtxtPtr, xmlNodePtr);
CheckInterfacedef(nodePush,nodePush_db);
extern void xmlParseElement_db(xmlParserCtxtPtr);
CheckInterfacedef(xmlParseElement,xmlParseElement_db);
extern xmlElementContentPtr xmlParseElementChildrenContentDecl_db(xmlParserCtxtPtr, int);
CheckInterfacedef(xmlParseElementChildrenContentDecl,xmlParseElementChildrenContentDecl_db);
extern void xmlParseContent_db(xmlParserCtxtPtr);
CheckInterfacedef(xmlParseContent,xmlParseContent_db);
extern xmlChar * xmlParseEntityValue_db(xmlParserCtxtPtr, xmlChar * *);
CheckInterfacedef(xmlParseEntityValue,xmlParseEntityValue_db);
extern xmlChar * xmlParseNmtoken_db(xmlParserCtxtPtr);
CheckInterfacedef(xmlParseNmtoken,xmlParseNmtoken_db);
extern xmlNodePtr nodePop_db(xmlParserCtxtPtr);
CheckInterfacedef(nodePop,nodePop_db);
extern const xmlChar * xmlParsePITarget_db(xmlParserCtxtPtr);
CheckInterfacedef(xmlParsePITarget,xmlParsePITarget_db);
extern int xmlSwitchToEncoding_db(xmlParserCtxtPtr, xmlCharEncodingHandlerPtr);
CheckInterfacedef(xmlSwitchToEncoding,xmlSwitchToEncoding_db);
extern void xmlPushInput_db(xmlParserCtxtPtr, xmlParserInputPtr);
CheckInterfacedef(xmlPushInput,xmlPushInput_db);
extern int xmlStringCurrentChar_db(xmlParserCtxtPtr, const xmlChar *, int *);
CheckInterfacedef(xmlStringCurrentChar,xmlStringCurrentChar_db);
extern void xmlFreeInputStream_db(xmlParserInputPtr);
CheckInterfacedef(xmlFreeInputStream,xmlFreeInputStream_db);
extern xmlParserInputPtr xmlNewInputFromFile_db(xmlParserCtxtPtr, const char *);
CheckInterfacedef(xmlNewInputFromFile,xmlNewInputFromFile_db);
extern void xmlParseMarkupDecl_db(xmlParserCtxtPtr);
CheckInterfacedef(xmlParseMarkupDecl,xmlParseMarkupDecl_db);
extern int xmlParseDefaultDecl_db(xmlParserCtxtPtr, xmlChar * *);
CheckInterfacedef(xmlParseDefaultDecl,xmlParseDefaultDecl_db);
extern void xmlParseXMLDecl_db(xmlParserCtxtPtr);
CheckInterfacedef(xmlParseXMLDecl,xmlParseXMLDecl_db);
extern xmlChar * xmlStringDecodeEntities_db(xmlParserCtxtPtr, const xmlChar *, int, xmlChar, xmlChar, xmlChar);
CheckInterfacedef(xmlStringDecodeEntities,xmlStringDecodeEntities_db);
extern xmlChar * xmlParsePubidLiteral_db(xmlParserCtxtPtr);
CheckInterfacedef(xmlParsePubidLiteral,xmlParsePubidLiteral_db);
extern xmlParserInputPtr xmlNewEntityInputStream_db(xmlParserCtxtPtr, xmlEntityPtr);
CheckInterfacedef(xmlNewEntityInputStream,xmlNewEntityInputStream_db);
extern xmlChar * xmlParseEncName_db(xmlParserCtxtPtr);
CheckInterfacedef(xmlParseEncName,xmlParseEncName_db);
extern xmlParserCtxtPtr xmlCreateMemoryParserCtxt_db(const char *, int);
CheckInterfacedef(xmlCreateMemoryParserCtxt,xmlCreateMemoryParserCtxt_db);
extern xmlParserCtxtPtr xmlCreateEntityParserCtxt_db(const xmlChar *, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlCreateEntityParserCtxt,xmlCreateEntityParserCtxt_db);
extern void xmlParserInputShrink_db(xmlParserInputPtr);
CheckInterfacedef(xmlParserInputShrink,xmlParserInputShrink_db);
extern void xmlParserHandlePEReference_db(xmlParserCtxtPtr);
CheckInterfacedef(xmlParserHandlePEReference,xmlParserHandlePEReference_db);
extern xmlParserCtxtPtr xmlCreateFileParserCtxt_db(const char *);
CheckInterfacedef(xmlCreateFileParserCtxt,xmlCreateFileParserCtxt_db);
extern const xmlChar * xmlParseAttribute_db(xmlParserCtxtPtr, xmlChar * *);
CheckInterfacedef(xmlParseAttribute,xmlParseAttribute_db);
extern int xmlCurrentChar_db(xmlParserCtxtPtr, int *);
CheckInterfacedef(xmlCurrentChar,xmlCurrentChar_db);
extern int xmlIsLetter_db(int);
CheckInterfacedef(xmlIsLetter,xmlIsLetter_db);
extern int xmlParseCharRef_db(xmlParserCtxtPtr);
CheckInterfacedef(xmlParseCharRef,xmlParseCharRef_db);
extern xmlChar * xmlStringLenDecodeEntities_db(xmlParserCtxtPtr, const xmlChar *, int, int, xmlChar, xmlChar, xmlChar);
CheckInterfacedef(xmlStringLenDecodeEntities,xmlStringLenDecodeEntities_db);
extern void xmlParseCharData_db(xmlParserCtxtPtr, int);
CheckInterfacedef(xmlParseCharData,xmlParseCharData_db);
extern xmlChar * xmlParseExternalID_db(xmlParserCtxtPtr, xmlChar * *, int);
CheckInterfacedef(xmlParseExternalID,xmlParseExternalID_db);
extern xmlChar * xmlParseSystemLiteral_db(xmlParserCtxtPtr);
CheckInterfacedef(xmlParseSystemLiteral,xmlParseSystemLiteral_db);
extern xmlEnumerationPtr xmlParseEnumerationType_db(xmlParserCtxtPtr);
CheckInterfacedef(xmlParseEnumerationType,xmlParseEnumerationType_db);
extern xmlParserInputPtr inputPop_db(xmlParserCtxtPtr);
CheckInterfacedef(inputPop,inputPop_db);
extern xmlParserCtxtPtr xmlCreateURLParserCtxt_db(const char *, int);
CheckInterfacedef(xmlCreateURLParserCtxt,xmlCreateURLParserCtxt_db);
extern const xmlChar * xmlParseEncodingDecl_db(xmlParserCtxtPtr);
CheckInterfacedef(xmlParseEncodingDecl,xmlParseEncodingDecl_db);
extern const xmlChar * xmlParseStartTag_db(xmlParserCtxtPtr);
CheckInterfacedef(xmlParseStartTag,xmlParseStartTag_db);
extern xmlChar * xmlParseVersionNum_db(xmlParserCtxtPtr);
CheckInterfacedef(xmlParseVersionNum,xmlParseVersionNum_db);
extern const xmlChar * namePop_db(xmlParserCtxtPtr);
CheckInterfacedef(namePop,namePop_db);
extern void xmlParseMisc_db(xmlParserCtxtPtr);
CheckInterfacedef(xmlParseMisc,xmlParseMisc_db);
extern void xmlParsePI_db(xmlParserCtxtPtr);
CheckInterfacedef(xmlParsePI,xmlParsePI_db);
extern int xmlSwitchEncoding_db(xmlParserCtxtPtr, xmlCharEncoding);
CheckInterfacedef(xmlSwitchEncoding,xmlSwitchEncoding_db);
extern xmlParserInputPtr xmlNewInputStream_db(xmlParserCtxtPtr);
CheckInterfacedef(xmlNewInputStream,xmlNewInputStream_db);
extern void xmlParseTextDecl_db(xmlParserCtxtPtr);
CheckInterfacedef(xmlParseTextDecl,xmlParseTextDecl_db);
extern xmlChar * xmlParseVersionInfo_db(xmlParserCtxtPtr);
CheckInterfacedef(xmlParseVersionInfo,xmlParseVersionInfo_db);
extern int inputPush_db(xmlParserCtxtPtr, xmlParserInputPtr);
CheckInterfacedef(inputPush,inputPush_db);
extern int xmlParseElementContentDecl_db(xmlParserCtxtPtr, const xmlChar *, xmlElementContentPtr *);
CheckInterfacedef(xmlParseElementContentDecl,xmlParseElementContentDecl_db);
extern xmlChar * xmlSplitQName_db(xmlParserCtxtPtr, const xmlChar *, xmlChar * *);
CheckInterfacedef(xmlSplitQName,xmlSplitQName_db);
extern void xmlParseReference_db(xmlParserCtxtPtr);
CheckInterfacedef(xmlParseReference,xmlParseReference_db);
extern int xmlParseEnumeratedType_db(xmlParserCtxtPtr, xmlEnumerationPtr *);
CheckInterfacedef(xmlParseEnumeratedType,xmlParseEnumeratedType_db);
extern void xmlParseComment_db(xmlParserCtxtPtr);
CheckInterfacedef(xmlParseComment,xmlParseComment_db);
extern void xmlParsePEReference_db(xmlParserCtxtPtr);
CheckInterfacedef(xmlParsePEReference,xmlParsePEReference_db);
extern void xmlSetEntityReferenceFunc_db(xmlEntityReferenceFunc);
CheckInterfacedef(xmlSetEntityReferenceFunc,xmlSetEntityReferenceFunc_db);
extern int xmlParseSDDecl_db(xmlParserCtxtPtr);
CheckInterfacedef(xmlParseSDDecl,xmlParseSDDecl_db);
extern void xmlParseEntityDecl_db(xmlParserCtxtPtr);
CheckInterfacedef(xmlParseEntityDecl,xmlParseEntityDecl_db);
extern int xmlSkipBlankChars_db(xmlParserCtxtPtr);
CheckInterfacedef(xmlSkipBlankChars,xmlSkipBlankChars_db);
extern void xmlParseDocTypeDecl_db(xmlParserCtxtPtr);
CheckInterfacedef(xmlParseDocTypeDecl,xmlParseDocTypeDecl_db);
extern void htmlInitAutoClose_db(void);
CheckInterfacedef(htmlInitAutoClose,htmlInitAutoClose_db);
extern xmlChar * xmlParseAttValue_db(xmlParserCtxtPtr);
CheckInterfacedef(xmlParseAttValue,xmlParseAttValue_db);
extern int namePush_db(xmlParserCtxtPtr, const xmlChar *);
CheckInterfacedef(namePush,namePush_db);
extern int xmlSwitchInputEncoding_db(xmlParserCtxtPtr, xmlParserInputPtr, xmlCharEncodingHandlerPtr);
CheckInterfacedef(xmlSwitchInputEncoding,xmlSwitchInputEncoding_db);
extern xmlElementContentPtr xmlParseElementMixedContentDecl_db(xmlParserCtxtPtr, int);
CheckInterfacedef(xmlParseElementMixedContentDecl,xmlParseElementMixedContentDecl_db);
extern void xmlParseCDSect_db(xmlParserCtxtPtr);
CheckInterfacedef(xmlParseCDSect,xmlParseCDSect_db);
extern htmlParserCtxtPtr htmlCreateFileParserCtxt_db(const char *, const char *);
CheckInterfacedef(htmlCreateFileParserCtxt,htmlCreateFileParserCtxt_db);
extern void xmlParseExternalSubset_db(xmlParserCtxtPtr, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlParseExternalSubset,xmlParseExternalSubset_db);
extern xmlChar xmlPopInput_db(xmlParserCtxtPtr);
CheckInterfacedef(xmlPopInput,xmlPopInput_db);
extern void xmlNextChar_db(xmlParserCtxtPtr);
CheckInterfacedef(xmlNextChar,xmlNextChar_db);
extern xmlParserInputPtr xmlNewStringInputStream_db(xmlParserCtxtPtr, const xmlChar *);
CheckInterfacedef(xmlNewStringInputStream,xmlNewStringInputStream_db);
extern int xmlCopyCharMultiByte_db(xmlChar *, int);
CheckInterfacedef(xmlCopyCharMultiByte,xmlCopyCharMultiByte_db);
extern const xmlChar * xmlParseName_db(xmlParserCtxtPtr);
CheckInterfacedef(xmlParseName,xmlParseName_db);
extern xmlEnumerationPtr xmlParseNotationType_db(xmlParserCtxtPtr);
CheckInterfacedef(xmlParseNotationType,xmlParseNotationType_db);
extern void xmlParseEndTag_db(xmlParserCtxtPtr);
CheckInterfacedef(xmlParseEndTag,xmlParseEndTag_db);
extern void xmlParseNotationDecl_db(xmlParserCtxtPtr);
CheckInterfacedef(xmlParseNotationDecl,xmlParseNotationDecl_db);
extern int xmlParseElementDecl_db(xmlParserCtxtPtr);
CheckInterfacedef(xmlParseElementDecl,xmlParseElementDecl_db);
extern int xmlParseAttributeType_db(xmlParserCtxtPtr, xmlEnumerationPtr *);
CheckInterfacedef(xmlParseAttributeType,xmlParseAttributeType_db);
extern void xmlParseAttributeListDecl_db(xmlParserCtxtPtr);
CheckInterfacedef(xmlParseAttributeListDecl,xmlParseAttributeListDecl_db);
extern int xmlCopyChar_db(int, xmlChar *, int);
CheckInterfacedef(xmlCopyChar,xmlCopyChar_db);
extern xmlEntityPtr xmlParseEntityRef_db(xmlParserCtxtPtr);
CheckInterfacedef(xmlParseEntityRef,xmlParseEntityRef_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in libxml2/libxml/parserInternals.h\n\n",pcnt,cnt);
return cnt;
#endif

}
