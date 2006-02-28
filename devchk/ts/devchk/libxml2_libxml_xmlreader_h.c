/*
 * Test of libxml2/libxml/xmlreader.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include <libxml/xmlregexp.h>

struct _xmlTextReader {} ;
#include "libxml2/libxml/xmlreader.h"



#ifdef TET_TEST
void libxml2_libxml_xmlreader_h()
{
#else
int libxml2_libxml_xmlreader_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in libxml2/libxml/xmlreader.h\n");
#endif

printf("Checking data structures in libxml2/libxml/xmlreader.h\n");
#if __i386__
CheckTypeSize(xmlTextReader,0, 15059, 2)
#elif __x86_64__
CheckTypeSize(xmlTextReader,0, 15059, 11)
#elif __ia64__
CheckTypeSize(xmlTextReader,0, 15059, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15059,0);
Msg("Find size of xmlTextReader (15059)\n");
#endif

#if __i386__
CheckTypeSize(xmlTextReader *,4, 15060, 2)
#elif __x86_64__
CheckTypeSize(xmlTextReader *,8, 15060, 11)
#elif __ia64__
CheckTypeSize(xmlTextReader *,8, 15060, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlTextReader *,4, 15060, 6)
#elif __powerpc64__
CheckTypeSize(xmlTextReader *,8, 15060, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlTextReader *,4, 15060, 10)
#elif __s390x__
CheckTypeSize(xmlTextReader *,8, 15060, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15060,0);
Msg("Find size of xmlTextReader * (15060)\n");
#endif

#if __i386__
CheckTypeSize(xmlTextReaderPtr,4, 15061, 2)
#elif __x86_64__
CheckTypeSize(xmlTextReaderPtr,8, 15061, 11)
#elif __ia64__
CheckTypeSize(xmlTextReaderPtr,8, 15061, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlTextReaderPtr,4, 15061, 6)
#elif __powerpc64__
CheckTypeSize(xmlTextReaderPtr,8, 15061, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlTextReaderPtr,4, 15061, 10)
#elif __s390x__
CheckTypeSize(xmlTextReaderPtr,8, 15061, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15061,0);
Msg("Find size of xmlTextReaderPtr (15061)\n");
#endif

#if __i386__
CheckEnum("XML_PARSER_SEVERITY_VALIDITY_WARNING",XML_PARSER_SEVERITY_VALIDITY_WARNING,1);
CheckEnum("XML_PARSER_SEVERITY_VALIDITY_ERROR",XML_PARSER_SEVERITY_VALIDITY_ERROR,2);
CheckEnum("XML_PARSER_SEVERITY_WARNING",XML_PARSER_SEVERITY_WARNING,3);
CheckEnum("XML_PARSER_SEVERITY_ERROR",XML_PARSER_SEVERITY_ERROR,4);
#elif __x86_64__
CheckEnum("XML_PARSER_SEVERITY_VALIDITY_WARNING",XML_PARSER_SEVERITY_VALIDITY_WARNING,1);
CheckEnum("XML_PARSER_SEVERITY_VALIDITY_ERROR",XML_PARSER_SEVERITY_VALIDITY_ERROR,2);
CheckEnum("XML_PARSER_SEVERITY_WARNING",XML_PARSER_SEVERITY_WARNING,3);
CheckEnum("XML_PARSER_SEVERITY_ERROR",XML_PARSER_SEVERITY_ERROR,4);
#elif __ia64__
CheckEnum("XML_PARSER_SEVERITY_VALIDITY_WARNING",XML_PARSER_SEVERITY_VALIDITY_WARNING,1);
CheckEnum("XML_PARSER_SEVERITY_VALIDITY_ERROR",XML_PARSER_SEVERITY_VALIDITY_ERROR,2);
CheckEnum("XML_PARSER_SEVERITY_WARNING",XML_PARSER_SEVERITY_WARNING,3);
CheckEnum("XML_PARSER_SEVERITY_ERROR",XML_PARSER_SEVERITY_ERROR,4);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15062,0);
Msg("Find size of anon-libxml2/libxml/xmlreader.h-238 (15062)\n");
#endif

#if __i386__
CheckTypeSize(xmlParserSeverities,4, 15063, 2)
#elif __x86_64__
CheckTypeSize(xmlParserSeverities,4, 15063, 11)
#elif __ia64__
CheckTypeSize(xmlParserSeverities,4, 15063, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlParserSeverities,4, 15063, 6)
#elif __powerpc64__
CheckTypeSize(xmlParserSeverities,4, 15063, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlParserSeverities,4, 15063, 10)
#elif __s390x__
CheckTypeSize(xmlParserSeverities,4, 15063, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15063,0);
Msg("Find size of xmlParserSeverities (15063)\n");
#endif

#if __i386__
CheckTypeSize(xmlTextReaderLocatorPtr,4, 15064, 2)
#elif __x86_64__
CheckTypeSize(xmlTextReaderLocatorPtr,8, 15064, 11)
#elif __ia64__
CheckTypeSize(xmlTextReaderLocatorPtr,8, 15064, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlTextReaderLocatorPtr,4, 15064, 6)
#elif __powerpc64__
CheckTypeSize(xmlTextReaderLocatorPtr,8, 15064, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlTextReaderLocatorPtr,4, 15064, 10)
#elif __s390x__
CheckTypeSize(xmlTextReaderLocatorPtr,8, 15064, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15064,0);
Msg("Find size of xmlTextReaderLocatorPtr (15064)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15065,0);
Msg("Find size of fptr_xmlreader_140 (15065)\n");
#endif

#if __i386__
CheckTypeSize(xmlTextReaderErrorFunc,4, 15066, 2)
#elif __x86_64__
CheckTypeSize(xmlTextReaderErrorFunc,8, 15066, 11)
#elif __ia64__
CheckTypeSize(xmlTextReaderErrorFunc,8, 15066, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlTextReaderErrorFunc,4, 15066, 6)
#elif __powerpc64__
CheckTypeSize(xmlTextReaderErrorFunc,8, 15066, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlTextReaderErrorFunc,4, 15066, 10)
#elif __s390x__
CheckTypeSize(xmlTextReaderErrorFunc,8, 15066, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15066,0);
Msg("Find size of xmlTextReaderErrorFunc (15066)\n");
#endif

#if __i386__
CheckTypeSize(xmlTextReaderErrorFunc *,4, 15067, 2)
#elif __x86_64__
CheckTypeSize(xmlTextReaderErrorFunc *,8, 15067, 11)
#elif __ia64__
CheckTypeSize(xmlTextReaderErrorFunc *,8, 15067, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlTextReaderErrorFunc *,4, 15067, 6)
#elif __powerpc64__
CheckTypeSize(xmlTextReaderErrorFunc *,8, 15067, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlTextReaderErrorFunc *,4, 15067, 10)
#elif __s390x__
CheckTypeSize(xmlTextReaderErrorFunc *,8, 15067, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15067,0);
Msg("Find size of xmlTextReaderErrorFunc * (15067)\n");
#endif

#if __i386__
CheckEnum("XML_PARSER_LOADDTD",XML_PARSER_LOADDTD,1);
CheckEnum("XML_PARSER_DEFAULTATTRS",XML_PARSER_DEFAULTATTRS,2);
CheckEnum("XML_PARSER_VALIDATE",XML_PARSER_VALIDATE,3);
CheckEnum("XML_PARSER_SUBST_ENTITIES",XML_PARSER_SUBST_ENTITIES,4);
#elif __x86_64__
CheckEnum("XML_PARSER_LOADDTD",XML_PARSER_LOADDTD,1);
CheckEnum("XML_PARSER_DEFAULTATTRS",XML_PARSER_DEFAULTATTRS,2);
CheckEnum("XML_PARSER_VALIDATE",XML_PARSER_VALIDATE,3);
CheckEnum("XML_PARSER_SUBST_ENTITIES",XML_PARSER_SUBST_ENTITIES,4);
#elif __ia64__
CheckEnum("XML_PARSER_LOADDTD",XML_PARSER_LOADDTD,1);
CheckEnum("XML_PARSER_DEFAULTATTRS",XML_PARSER_DEFAULTATTRS,2);
CheckEnum("XML_PARSER_VALIDATE",XML_PARSER_VALIDATE,3);
CheckEnum("XML_PARSER_SUBST_ENTITIES",XML_PARSER_SUBST_ENTITIES,4);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15119,0);
Msg("Find size of anonymous-xmlreader.h.types-0 (15119)\n");
#endif

#if __i386__
CheckTypeSize(xmlParserProperties,4, 15120, 2)
#elif __x86_64__
CheckTypeSize(xmlParserProperties,4, 15120, 11)
#elif __ia64__
CheckTypeSize(xmlParserProperties,4, 15120, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlParserProperties,4, 15120, 6)
#elif __powerpc64__
CheckTypeSize(xmlParserProperties,4, 15120, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlParserProperties,4, 15120, 10)
#elif __s390x__
CheckTypeSize(xmlParserProperties,4, 15120, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15120,0);
Msg("Find size of xmlParserProperties (15120)\n");
#endif

#if __i386__
CheckEnum("XML_READER_TYPE_NONE",XML_READER_TYPE_NONE,0);
CheckEnum("XML_READER_TYPE_ELEMENT",XML_READER_TYPE_ELEMENT,1);
CheckEnum("XML_READER_TYPE_ATTRIBUTE",XML_READER_TYPE_ATTRIBUTE,2);
CheckEnum("XML_READER_TYPE_TEXT",XML_READER_TYPE_TEXT,3);
CheckEnum("XML_READER_TYPE_CDATA",XML_READER_TYPE_CDATA,4);
CheckEnum("XML_READER_TYPE_ENTITY_REFERENCE",XML_READER_TYPE_ENTITY_REFERENCE,5);
CheckEnum("XML_READER_TYPE_ENTITY",XML_READER_TYPE_ENTITY,6);
CheckEnum("XML_READER_TYPE_PROCESSING_INSTRUCTION",XML_READER_TYPE_PROCESSING_INSTRUCTION,7);
CheckEnum("XML_READER_TYPE_COMMENT",XML_READER_TYPE_COMMENT,8);
CheckEnum("XML_READER_TYPE_DOCUMENT",XML_READER_TYPE_DOCUMENT,9);
CheckEnum("XML_READER_TYPE_DOCUMENT_TYPE",XML_READER_TYPE_DOCUMENT_TYPE,10);
CheckEnum("XML_READER_TYPE_DOCUMENT_FRAGMENT",XML_READER_TYPE_DOCUMENT_FRAGMENT,11);
CheckEnum("XML_READER_TYPE_NOTATION",XML_READER_TYPE_NOTATION,12);
CheckEnum("XML_READER_TYPE_WHITESPACE",XML_READER_TYPE_WHITESPACE,13);
CheckEnum("XML_READER_TYPE_SIGNIFICANT_WHITESPACE",XML_READER_TYPE_SIGNIFICANT_WHITESPACE,14);
CheckEnum("XML_READER_TYPE_END_ELEMENT",XML_READER_TYPE_END_ELEMENT,15);
CheckEnum("XML_READER_TYPE_END_ENTITY",XML_READER_TYPE_END_ENTITY,16);
CheckEnum("XML_READER_TYPE_XML_DECLARATION",XML_READER_TYPE_XML_DECLARATION,17);
#elif __x86_64__
CheckEnum("XML_READER_TYPE_NONE",XML_READER_TYPE_NONE,0);
CheckEnum("XML_READER_TYPE_ELEMENT",XML_READER_TYPE_ELEMENT,1);
CheckEnum("XML_READER_TYPE_ATTRIBUTE",XML_READER_TYPE_ATTRIBUTE,2);
CheckEnum("XML_READER_TYPE_TEXT",XML_READER_TYPE_TEXT,3);
CheckEnum("XML_READER_TYPE_CDATA",XML_READER_TYPE_CDATA,4);
CheckEnum("XML_READER_TYPE_ENTITY_REFERENCE",XML_READER_TYPE_ENTITY_REFERENCE,5);
CheckEnum("XML_READER_TYPE_ENTITY",XML_READER_TYPE_ENTITY,6);
CheckEnum("XML_READER_TYPE_PROCESSING_INSTRUCTION",XML_READER_TYPE_PROCESSING_INSTRUCTION,7);
CheckEnum("XML_READER_TYPE_COMMENT",XML_READER_TYPE_COMMENT,8);
CheckEnum("XML_READER_TYPE_DOCUMENT",XML_READER_TYPE_DOCUMENT,9);
CheckEnum("XML_READER_TYPE_DOCUMENT_TYPE",XML_READER_TYPE_DOCUMENT_TYPE,10);
CheckEnum("XML_READER_TYPE_DOCUMENT_FRAGMENT",XML_READER_TYPE_DOCUMENT_FRAGMENT,11);
CheckEnum("XML_READER_TYPE_NOTATION",XML_READER_TYPE_NOTATION,12);
CheckEnum("XML_READER_TYPE_WHITESPACE",XML_READER_TYPE_WHITESPACE,13);
CheckEnum("XML_READER_TYPE_SIGNIFICANT_WHITESPACE",XML_READER_TYPE_SIGNIFICANT_WHITESPACE,14);
CheckEnum("XML_READER_TYPE_END_ELEMENT",XML_READER_TYPE_END_ELEMENT,15);
CheckEnum("XML_READER_TYPE_END_ENTITY",XML_READER_TYPE_END_ENTITY,16);
CheckEnum("XML_READER_TYPE_XML_DECLARATION",XML_READER_TYPE_XML_DECLARATION,17);
#elif __ia64__
CheckEnum("XML_READER_TYPE_NONE",XML_READER_TYPE_NONE,0);
CheckEnum("XML_READER_TYPE_ELEMENT",XML_READER_TYPE_ELEMENT,1);
CheckEnum("XML_READER_TYPE_ATTRIBUTE",XML_READER_TYPE_ATTRIBUTE,2);
CheckEnum("XML_READER_TYPE_TEXT",XML_READER_TYPE_TEXT,3);
CheckEnum("XML_READER_TYPE_CDATA",XML_READER_TYPE_CDATA,4);
CheckEnum("XML_READER_TYPE_ENTITY_REFERENCE",XML_READER_TYPE_ENTITY_REFERENCE,5);
CheckEnum("XML_READER_TYPE_ENTITY",XML_READER_TYPE_ENTITY,6);
CheckEnum("XML_READER_TYPE_PROCESSING_INSTRUCTION",XML_READER_TYPE_PROCESSING_INSTRUCTION,7);
CheckEnum("XML_READER_TYPE_COMMENT",XML_READER_TYPE_COMMENT,8);
CheckEnum("XML_READER_TYPE_DOCUMENT",XML_READER_TYPE_DOCUMENT,9);
CheckEnum("XML_READER_TYPE_DOCUMENT_TYPE",XML_READER_TYPE_DOCUMENT_TYPE,10);
CheckEnum("XML_READER_TYPE_DOCUMENT_FRAGMENT",XML_READER_TYPE_DOCUMENT_FRAGMENT,11);
CheckEnum("XML_READER_TYPE_NOTATION",XML_READER_TYPE_NOTATION,12);
CheckEnum("XML_READER_TYPE_WHITESPACE",XML_READER_TYPE_WHITESPACE,13);
CheckEnum("XML_READER_TYPE_SIGNIFICANT_WHITESPACE",XML_READER_TYPE_SIGNIFICANT_WHITESPACE,14);
CheckEnum("XML_READER_TYPE_END_ELEMENT",XML_READER_TYPE_END_ELEMENT,15);
CheckEnum("XML_READER_TYPE_END_ENTITY",XML_READER_TYPE_END_ENTITY,16);
CheckEnum("XML_READER_TYPE_XML_DECLARATION",XML_READER_TYPE_XML_DECLARATION,17);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15121,0);
Msg("Find size of anonymous-xmlreader.h.types-2 (15121)\n");
#endif

#if __i386__
CheckTypeSize(xmlReaderTypes,4, 15122, 2)
#elif __x86_64__
CheckTypeSize(xmlReaderTypes,4, 15122, 11)
#elif __ia64__
CheckTypeSize(xmlReaderTypes,4, 15122, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlReaderTypes,4, 15122, 6)
#elif __powerpc64__
CheckTypeSize(xmlReaderTypes,4, 15122, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlReaderTypes,4, 15122, 10)
#elif __s390x__
CheckTypeSize(xmlReaderTypes,4, 15122, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15122,0);
Msg("Find size of xmlReaderTypes (15122)\n");
#endif

#if __i386__
CheckEnum("XML_TEXTREADER_MODE_INITIAL",XML_TEXTREADER_MODE_INITIAL,0);
CheckEnum("XML_TEXTREADER_MODE_INTERACTIVE",XML_TEXTREADER_MODE_INTERACTIVE,1);
CheckEnum("XML_TEXTREADER_MODE_ERROR",XML_TEXTREADER_MODE_ERROR,2);
CheckEnum("XML_TEXTREADER_MODE_EOF",XML_TEXTREADER_MODE_EOF,3);
CheckEnum("XML_TEXTREADER_MODE_CLOSED",XML_TEXTREADER_MODE_CLOSED,4);
CheckEnum("XML_TEXTREADER_MODE_READING",XML_TEXTREADER_MODE_READING,5);
#elif __x86_64__
CheckEnum("XML_TEXTREADER_MODE_INITIAL",XML_TEXTREADER_MODE_INITIAL,0);
CheckEnum("XML_TEXTREADER_MODE_INTERACTIVE",XML_TEXTREADER_MODE_INTERACTIVE,1);
CheckEnum("XML_TEXTREADER_MODE_ERROR",XML_TEXTREADER_MODE_ERROR,2);
CheckEnum("XML_TEXTREADER_MODE_EOF",XML_TEXTREADER_MODE_EOF,3);
CheckEnum("XML_TEXTREADER_MODE_CLOSED",XML_TEXTREADER_MODE_CLOSED,4);
CheckEnum("XML_TEXTREADER_MODE_READING",XML_TEXTREADER_MODE_READING,5);
#elif __ia64__
CheckEnum("XML_TEXTREADER_MODE_INITIAL",XML_TEXTREADER_MODE_INITIAL,0);
CheckEnum("XML_TEXTREADER_MODE_INTERACTIVE",XML_TEXTREADER_MODE_INTERACTIVE,1);
CheckEnum("XML_TEXTREADER_MODE_ERROR",XML_TEXTREADER_MODE_ERROR,2);
CheckEnum("XML_TEXTREADER_MODE_EOF",XML_TEXTREADER_MODE_EOF,3);
CheckEnum("XML_TEXTREADER_MODE_CLOSED",XML_TEXTREADER_MODE_CLOSED,4);
CheckEnum("XML_TEXTREADER_MODE_READING",XML_TEXTREADER_MODE_READING,5);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15123,0);
Msg("Find size of anonymous-xmlreader.h.types-4 (15123)\n");
#endif

#if __i386__
CheckTypeSize(xmlTextReaderMode,4, 15124, 2)
#elif __x86_64__
CheckTypeSize(xmlTextReaderMode,4, 15124, 11)
#elif __ia64__
CheckTypeSize(xmlTextReaderMode,4, 15124, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlTextReaderMode,4, 15124, 6)
#elif __powerpc64__
CheckTypeSize(xmlTextReaderMode,4, 15124, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlTextReaderMode,4, 15124, 10)
#elif __s390x__
CheckTypeSize(xmlTextReaderMode,4, 15124, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15124,0);
Msg("Find size of xmlTextReaderMode (15124)\n");
#endif

extern xmlChar * xmlTextReaderNamespaceUri_db(xmlTextReaderPtr);
CheckInterfacedef(xmlTextReaderNamespaceUri,xmlTextReaderNamespaceUri_db);
extern xmlChar * xmlTextReaderBaseUri_db(xmlTextReaderPtr);
CheckInterfacedef(xmlTextReaderBaseUri,xmlTextReaderBaseUri_db);
extern int xmlTextReaderMoveToFirstAttribute_db(xmlTextReaderPtr);
CheckInterfacedef(xmlTextReaderMoveToFirstAttribute,xmlTextReaderMoveToFirstAttribute_db);
extern void xmlTextReaderGetErrorHandler_db(xmlTextReaderPtr, xmlTextReaderErrorFunc *, void * *);
CheckInterfacedef(xmlTextReaderGetErrorHandler,xmlTextReaderGetErrorHandler_db);
extern int xmlTextReaderSchemaValidate_db(xmlTextReaderPtr, const char *);
CheckInterfacedef(xmlTextReaderSchemaValidate,xmlTextReaderSchemaValidate_db);
extern int xmlTextReaderGetParserColumnNumber_db(xmlTextReaderPtr);
CheckInterfacedef(xmlTextReaderGetParserColumnNumber,xmlTextReaderGetParserColumnNumber_db);
extern xmlNodePtr xmlTextReaderCurrentNode_db(xmlTextReaderPtr);
CheckInterfacedef(xmlTextReaderCurrentNode,xmlTextReaderCurrentNode_db);
extern int xmlTextReaderReadState_db(xmlTextReaderPtr);
CheckInterfacedef(xmlTextReaderReadState,xmlTextReaderReadState_db);
extern int xmlTextReaderSetSchema_db(xmlTextReaderPtr, xmlSchemaPtr);
CheckInterfacedef(xmlTextReaderSetSchema,xmlTextReaderSetSchema_db);
extern int xmlTextReaderNext_db(xmlTextReaderPtr);
CheckInterfacedef(xmlTextReaderNext,xmlTextReaderNext_db);
extern int xmlTextReaderIsEmptyElement_db(xmlTextReaderPtr);
CheckInterfacedef(xmlTextReaderIsEmptyElement,xmlTextReaderIsEmptyElement_db);
extern xmlTextReaderPtr xmlNewTextReader_db(xmlParserInputBufferPtr, const char *);
CheckInterfacedef(xmlNewTextReader,xmlNewTextReader_db);
extern int xmlTextReaderGetParserLineNumber_db(xmlTextReaderPtr);
CheckInterfacedef(xmlTextReaderGetParserLineNumber,xmlTextReaderGetParserLineNumber_db);
extern long int xmlTextReaderByteConsumed_db(xmlTextReaderPtr);
CheckInterfacedef(xmlTextReaderByteConsumed,xmlTextReaderByteConsumed_db);
extern int xmlReaderNewIO_db(xmlTextReaderPtr, xmlInputReadCallback, xmlInputCloseCallback, void *, const char *, const char *, int);
CheckInterfacedef(xmlReaderNewIO,xmlReaderNewIO_db);
extern xmlNodePtr xmlTextReaderPreserve_db(xmlTextReaderPtr);
CheckInterfacedef(xmlTextReaderPreserve,xmlTextReaderPreserve_db);
extern xmlChar * xmlTextReaderReadOuterXml_db(xmlTextReaderPtr);
CheckInterfacedef(xmlTextReaderReadOuterXml,xmlTextReaderReadOuterXml_db);
extern const xmlChar * xmlTextReaderConstValue_db(xmlTextReaderPtr);
CheckInterfacedef(xmlTextReaderConstValue,xmlTextReaderConstValue_db);
extern xmlChar * xmlTextReaderGetAttribute_db(xmlTextReaderPtr, const xmlChar *);
CheckInterfacedef(xmlTextReaderGetAttribute,xmlTextReaderGetAttribute_db);
extern xmlChar * xmlTextReaderPrefix_db(xmlTextReaderPtr);
CheckInterfacedef(xmlTextReaderPrefix,xmlTextReaderPrefix_db);
extern int xmlTextReaderMoveToAttribute_db(xmlTextReaderPtr, const xmlChar *);
CheckInterfacedef(xmlTextReaderMoveToAttribute,xmlTextReaderMoveToAttribute_db);
extern int xmlTextReaderMoveToNextAttribute_db(xmlTextReaderPtr);
CheckInterfacedef(xmlTextReaderMoveToNextAttribute,xmlTextReaderMoveToNextAttribute_db);
extern const xmlChar * xmlTextReaderConstNamespaceUri_db(xmlTextReaderPtr);
CheckInterfacedef(xmlTextReaderConstNamespaceUri,xmlTextReaderConstNamespaceUri_db);
extern int xmlTextReaderNextSibling_db(xmlTextReaderPtr);
CheckInterfacedef(xmlTextReaderNextSibling,xmlTextReaderNextSibling_db);
extern xmlChar * xmlTextReaderGetAttributeNs_db(xmlTextReaderPtr, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlTextReaderGetAttributeNs,xmlTextReaderGetAttributeNs_db);
extern xmlTextReaderPtr xmlReaderForFile_db(const char *, const char *, int);
CheckInterfacedef(xmlReaderForFile,xmlReaderForFile_db);
extern xmlTextReaderPtr xmlReaderForDoc_db(const xmlChar *, const char *, const char *, int);
CheckInterfacedef(xmlReaderForDoc,xmlReaderForDoc_db);
extern const xmlChar * xmlTextReaderConstBaseUri_db(xmlTextReaderPtr);
CheckInterfacedef(xmlTextReaderConstBaseUri,xmlTextReaderConstBaseUri_db);
extern const xmlChar * xmlTextReaderConstXmlLang_db(xmlTextReaderPtr);
CheckInterfacedef(xmlTextReaderConstXmlLang,xmlTextReaderConstXmlLang_db);
extern int xmlTextReaderRelaxNGSetSchema_db(xmlTextReaderPtr, xmlRelaxNGPtr);
CheckInterfacedef(xmlTextReaderRelaxNGSetSchema,xmlTextReaderRelaxNGSetSchema_db);
extern xmlChar * xmlTextReaderReadInnerXml_db(xmlTextReaderPtr);
CheckInterfacedef(xmlTextReaderReadInnerXml,xmlTextReaderReadInnerXml_db);
extern int xmlTextReaderQuoteChar_db(xmlTextReaderPtr);
CheckInterfacedef(xmlTextReaderQuoteChar,xmlTextReaderQuoteChar_db);
extern const xmlChar * xmlTextReaderConstString_db(xmlTextReaderPtr, const xmlChar *);
CheckInterfacedef(xmlTextReaderConstString,xmlTextReaderConstString_db);
extern int xmlReaderNewFile_db(xmlTextReaderPtr, const char *, const char *, int);
CheckInterfacedef(xmlReaderNewFile,xmlReaderNewFile_db);
extern int xmlTextReaderHasAttributes_db(xmlTextReaderPtr);
CheckInterfacedef(xmlTextReaderHasAttributes,xmlTextReaderHasAttributes_db);
extern void xmlFreeTextReader_db(xmlTextReaderPtr);
CheckInterfacedef(xmlFreeTextReader,xmlFreeTextReader_db);
extern int xmlReaderNewWalker_db(xmlTextReaderPtr, xmlDocPtr);
CheckInterfacedef(xmlReaderNewWalker,xmlReaderNewWalker_db);
extern int xmlTextReaderRead_db(xmlTextReaderPtr);
CheckInterfacedef(xmlTextReaderRead,xmlTextReaderRead_db);
extern xmlChar * xmlTextReaderLocatorBaseURI_db(xmlTextReaderLocatorPtr);
CheckInterfacedef(xmlTextReaderLocatorBaseURI,xmlTextReaderLocatorBaseURI_db);
extern int xmlTextReaderMoveToElement_db(xmlTextReaderPtr);
CheckInterfacedef(xmlTextReaderMoveToElement,xmlTextReaderMoveToElement_db);
extern int xmlTextReaderLocatorLineNumber_db(xmlTextReaderLocatorPtr);
CheckInterfacedef(xmlTextReaderLocatorLineNumber,xmlTextReaderLocatorLineNumber_db);
extern int xmlTextReaderRelaxNGValidate_db(xmlTextReaderPtr, const char *);
CheckInterfacedef(xmlTextReaderRelaxNGValidate,xmlTextReaderRelaxNGValidate_db);
extern const xmlChar * xmlTextReaderConstEncoding_db(xmlTextReaderPtr);
CheckInterfacedef(xmlTextReaderConstEncoding,xmlTextReaderConstEncoding_db);
extern xmlTextReaderPtr xmlReaderForIO_db(xmlInputReadCallback, xmlInputCloseCallback, void *, const char *, const char *, int);
CheckInterfacedef(xmlReaderForIO,xmlReaderForIO_db);
extern const xmlChar * xmlTextReaderConstPrefix_db(xmlTextReaderPtr);
CheckInterfacedef(xmlTextReaderConstPrefix,xmlTextReaderConstPrefix_db);
extern int xmlTextReaderIsDefault_db(xmlTextReaderPtr);
CheckInterfacedef(xmlTextReaderIsDefault,xmlTextReaderIsDefault_db);
extern xmlDocPtr xmlTextReaderCurrentDoc_db(xmlTextReaderPtr);
CheckInterfacedef(xmlTextReaderCurrentDoc,xmlTextReaderCurrentDoc_db);
extern int xmlTextReaderIsNamespaceDecl_db(xmlTextReaderPtr);
CheckInterfacedef(xmlTextReaderIsNamespaceDecl,xmlTextReaderIsNamespaceDecl_db);
extern xmlNodePtr xmlTextReaderExpand_db(xmlTextReaderPtr);
CheckInterfacedef(xmlTextReaderExpand,xmlTextReaderExpand_db);
extern int xmlTextReaderPreservePattern_db(xmlTextReaderPtr, const xmlChar *, const xmlChar * *);
CheckInterfacedef(xmlTextReaderPreservePattern,xmlTextReaderPreservePattern_db);
extern xmlChar * xmlTextReaderLocalName_db(xmlTextReaderPtr);
CheckInterfacedef(xmlTextReaderLocalName,xmlTextReaderLocalName_db);
extern int xmlReaderNewMemory_db(xmlTextReaderPtr, const char *, int, const char *, const char *, int);
CheckInterfacedef(xmlReaderNewMemory,xmlReaderNewMemory_db);
extern xmlParserInputBufferPtr xmlTextReaderGetRemainder_db(xmlTextReaderPtr);
CheckInterfacedef(xmlTextReaderGetRemainder,xmlTextReaderGetRemainder_db);
extern xmlChar * xmlTextReaderGetAttributeNo_db(xmlTextReaderPtr, int);
CheckInterfacedef(xmlTextReaderGetAttributeNo,xmlTextReaderGetAttributeNo_db);
extern xmlChar * xmlTextReaderLookupNamespace_db(xmlTextReaderPtr, const xmlChar *);
CheckInterfacedef(xmlTextReaderLookupNamespace,xmlTextReaderLookupNamespace_db);
extern int xmlTextReaderReadAttributeValue_db(xmlTextReaderPtr);
CheckInterfacedef(xmlTextReaderReadAttributeValue,xmlTextReaderReadAttributeValue_db);
extern xmlTextReaderPtr xmlReaderForFd_db(int, const char *, const char *, int);
CheckInterfacedef(xmlReaderForFd,xmlReaderForFd_db);
extern int xmlTextReaderClose_db(xmlTextReaderPtr);
CheckInterfacedef(xmlTextReaderClose,xmlTextReaderClose_db);
extern int xmlTextReaderDepth_db(xmlTextReaderPtr);
CheckInterfacedef(xmlTextReaderDepth,xmlTextReaderDepth_db);
extern int xmlTextReaderGetParserProp_db(xmlTextReaderPtr, int);
CheckInterfacedef(xmlTextReaderGetParserProp,xmlTextReaderGetParserProp_db);
extern int xmlReaderNewFd_db(xmlTextReaderPtr, int, const char *, const char *, int);
CheckInterfacedef(xmlReaderNewFd,xmlReaderNewFd_db);
extern xmlTextReaderPtr xmlReaderWalker_db(xmlDocPtr);
CheckInterfacedef(xmlReaderWalker,xmlReaderWalker_db);
extern int xmlTextReaderIsValid_db(xmlTextReaderPtr);
CheckInterfacedef(xmlTextReaderIsValid,xmlTextReaderIsValid_db);
extern void xmlTextReaderSetErrorHandler_db(xmlTextReaderPtr, xmlTextReaderErrorFunc, void *);
CheckInterfacedef(xmlTextReaderSetErrorHandler,xmlTextReaderSetErrorHandler_db);
extern xmlTextReaderPtr xmlNewTextReaderFilename_db(const char *);
CheckInterfacedef(xmlNewTextReaderFilename,xmlNewTextReaderFilename_db);
extern xmlChar * xmlTextReaderValue_db(xmlTextReaderPtr);
CheckInterfacedef(xmlTextReaderValue,xmlTextReaderValue_db);
extern xmlTextReaderPtr xmlReaderForMemory_db(const char *, int, const char *, const char *, int);
CheckInterfacedef(xmlReaderForMemory,xmlReaderForMemory_db);
extern int xmlTextReaderSetParserProp_db(xmlTextReaderPtr, int, int);
CheckInterfacedef(xmlTextReaderSetParserProp,xmlTextReaderSetParserProp_db);
extern const xmlChar * xmlTextReaderConstName_db(xmlTextReaderPtr);
CheckInterfacedef(xmlTextReaderConstName,xmlTextReaderConstName_db);
extern xmlChar * xmlTextReaderXmlLang_db(xmlTextReaderPtr);
CheckInterfacedef(xmlTextReaderXmlLang,xmlTextReaderXmlLang_db);
extern int xmlTextReaderMoveToAttributeNo_db(xmlTextReaderPtr, int);
CheckInterfacedef(xmlTextReaderMoveToAttributeNo,xmlTextReaderMoveToAttributeNo_db);
extern int xmlReaderNewDoc_db(xmlTextReaderPtr, const xmlChar *, const char *, const char *, int);
CheckInterfacedef(xmlReaderNewDoc,xmlReaderNewDoc_db);
extern xmlChar * xmlTextReaderName_db(xmlTextReaderPtr);
CheckInterfacedef(xmlTextReaderName,xmlTextReaderName_db);
extern int xmlTextReaderMoveToAttributeNs_db(xmlTextReaderPtr, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlTextReaderMoveToAttributeNs,xmlTextReaderMoveToAttributeNs_db);
extern xmlChar * xmlTextReaderReadString_db(xmlTextReaderPtr);
CheckInterfacedef(xmlTextReaderReadString,xmlTextReaderReadString_db);
extern int xmlTextReaderNormalization_db(xmlTextReaderPtr);
CheckInterfacedef(xmlTextReaderNormalization,xmlTextReaderNormalization_db);
extern const xmlChar * xmlTextReaderConstLocalName_db(xmlTextReaderPtr);
CheckInterfacedef(xmlTextReaderConstLocalName,xmlTextReaderConstLocalName_db);
extern int xmlTextReaderHasValue_db(xmlTextReaderPtr);
CheckInterfacedef(xmlTextReaderHasValue,xmlTextReaderHasValue_db);
extern int xmlTextReaderNodeType_db(xmlTextReaderPtr);
CheckInterfacedef(xmlTextReaderNodeType,xmlTextReaderNodeType_db);
extern int xmlTextReaderStandalone_db(xmlTextReaderPtr);
CheckInterfacedef(xmlTextReaderStandalone,xmlTextReaderStandalone_db);
extern void xmlTextReaderSetStructuredErrorHandler_db(xmlTextReaderPtr, xmlStructuredErrorFunc, void *);
CheckInterfacedef(xmlTextReaderSetStructuredErrorHandler,xmlTextReaderSetStructuredErrorHandler_db);
extern int xmlTextReaderAttributeCount_db(xmlTextReaderPtr);
CheckInterfacedef(xmlTextReaderAttributeCount,xmlTextReaderAttributeCount_db);
extern const xmlChar * xmlTextReaderConstXmlVersion_db(xmlTextReaderPtr);
CheckInterfacedef(xmlTextReaderConstXmlVersion,xmlTextReaderConstXmlVersion_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in libxml2/libxml/xmlreader.h\n\n",pcnt,cnt);
return cnt;
#endif

}
