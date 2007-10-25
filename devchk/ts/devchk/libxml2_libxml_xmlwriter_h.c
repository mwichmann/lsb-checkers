/*
 * Test of libxml2/libxml/xmlwriter.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include <libxml/xmlregexp.h>
struct _xmlTextWriter {} ;
#include "libxml2/libxml/xmlwriter.h"



#ifdef TET_TEST
void libxml2_libxml_xmlwriter_h()
{
#else
int libxml2_libxml_xmlwriter_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in libxml2/libxml/xmlwriter.h\n");
#endif

printf("Checking data structures in libxml2/libxml/xmlwriter.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for xmlTextWriterWriteProcessingInstruction */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for xmlTextWriterWriteDocType */
#endif

#if defined __i386__
CheckTypeSize(xmlTextWriterPtr,4, 15079, 2, 3.1, NULL, 15078, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlTextWriterPtr,8, 15079, 11, 3.1, NULL, 15078, NULL)
#elif defined __ia64__
CheckTypeSize(xmlTextWriterPtr,8, 15079, 3, 3.1, NULL, 15078, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlTextWriterPtr,4, 15079, 6, 3.1, NULL, 15078, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlTextWriterPtr,8, 15079, 9, 3.1, NULL, 15078, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlTextWriterPtr,4, 15079, 10, 3.1, NULL, 15078, NULL)
#elif defined __s390x__
CheckTypeSize(xmlTextWriterPtr,8, 15079, 12, 3.1, NULL, 15078, NULL)
#else
Msg("Find size of xmlTextWriterPtr (15079)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,15078, NULL);\n",architecture,15079,0);
#endif

extern int xmlTextWriterStartCDATA_db(xmlTextWriterPtr);
CheckInterfacedef(xmlTextWriterStartCDATA,xmlTextWriterStartCDATA_db);
extern xmlTextWriterPtr xmlNewTextWriterFilename_db(const char *, int);
CheckInterfacedef(xmlNewTextWriterFilename,xmlNewTextWriterFilename_db);
extern int xmlTextWriterStartDTDEntity_db(xmlTextWriterPtr, int, const xmlChar *);
CheckInterfacedef(xmlTextWriterStartDTDEntity,xmlTextWriterStartDTDEntity_db);
extern int xmlTextWriterWriteFormatDTDInternalEntity_db(xmlTextWriterPtr, int, const xmlChar *, const char *, ...);
CheckInterfacedef(xmlTextWriterWriteFormatDTDInternalEntity,xmlTextWriterWriteFormatDTDInternalEntity_db);
extern int xmlTextWriterWriteVFormatRaw_db(xmlTextWriterPtr, const char *, va_list);
CheckInterfacedef(xmlTextWriterWriteVFormatRaw,xmlTextWriterWriteVFormatRaw_db);
extern int xmlTextWriterStartAttributeNS_db(xmlTextWriterPtr, const xmlChar *, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlTextWriterStartAttributeNS,xmlTextWriterStartAttributeNS_db);
extern xmlTextWriterPtr xmlNewTextWriter_db(xmlOutputBufferPtr);
CheckInterfacedef(xmlNewTextWriter,xmlNewTextWriter_db);
extern int xmlTextWriterEndDocument_db(xmlTextWriterPtr);
CheckInterfacedef(xmlTextWriterEndDocument,xmlTextWriterEndDocument_db);
extern int xmlTextWriterWriteVFormatDTDInternalEntity_db(xmlTextWriterPtr, int, const xmlChar *, const char *, va_list);
CheckInterfacedef(xmlTextWriterWriteVFormatDTDInternalEntity,xmlTextWriterWriteVFormatDTDInternalEntity_db);
extern int xmlTextWriterEndDTDEntity_db(xmlTextWriterPtr);
CheckInterfacedef(xmlTextWriterEndDTDEntity,xmlTextWriterEndDTDEntity_db);
extern int xmlTextWriterFullEndElement_db(xmlTextWriterPtr);
CheckInterfacedef(xmlTextWriterFullEndElement,xmlTextWriterFullEndElement_db);
extern int xmlTextWriterWriteFormatComment_db(xmlTextWriterPtr, const char *, ...);
CheckInterfacedef(xmlTextWriterWriteFormatComment,xmlTextWriterWriteFormatComment_db);
extern int xmlTextWriterWriteDTDInternalEntity_db(xmlTextWriterPtr, int, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlTextWriterWriteDTDInternalEntity,xmlTextWriterWriteDTDInternalEntity_db);
extern int xmlTextWriterWritePI_db(xmlTextWriterPtr, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlTextWriterWritePI,xmlTextWriterWritePI_db);
extern int xmlTextWriterStartAttribute_db(xmlTextWriterPtr, const xmlChar *);
CheckInterfacedef(xmlTextWriterStartAttribute,xmlTextWriterStartAttribute_db);
extern int xmlTextWriterWriteDTDElement_db(xmlTextWriterPtr, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlTextWriterWriteDTDElement,xmlTextWriterWriteDTDElement_db);
extern int xmlTextWriterWriteFormatRaw_db(xmlTextWriterPtr, const char *, ...);
CheckInterfacedef(xmlTextWriterWriteFormatRaw,xmlTextWriterWriteFormatRaw_db);
extern int xmlTextWriterWriteVFormatPI_db(xmlTextWriterPtr, const xmlChar *, const char *, va_list);
CheckInterfacedef(xmlTextWriterWriteVFormatPI,xmlTextWriterWriteVFormatPI_db);
extern int xmlTextWriterWriteDTDExternalEntityContents_db(xmlTextWriterPtr, const xmlChar *, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlTextWriterWriteDTDExternalEntityContents,xmlTextWriterWriteDTDExternalEntityContents_db);
extern int xmlTextWriterWriteCDATA_db(xmlTextWriterPtr, const xmlChar *);
CheckInterfacedef(xmlTextWriterWriteCDATA,xmlTextWriterWriteCDATA_db);
extern int xmlTextWriterWriteVFormatAttributeNS_db(xmlTextWriterPtr, const xmlChar *, const xmlChar *, const xmlChar *, const char *, va_list);
CheckInterfacedef(xmlTextWriterWriteVFormatAttributeNS,xmlTextWriterWriteVFormatAttributeNS_db);
extern int xmlTextWriterWriteAttributeNS_db(xmlTextWriterPtr, const xmlChar *, const xmlChar *, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlTextWriterWriteAttributeNS,xmlTextWriterWriteAttributeNS_db);
extern int xmlTextWriterEndPI_db(xmlTextWriterPtr);
CheckInterfacedef(xmlTextWriterEndPI,xmlTextWriterEndPI_db);
extern int xmlTextWriterWriteVFormatDTDElement_db(xmlTextWriterPtr, const xmlChar *, const char *, va_list);
CheckInterfacedef(xmlTextWriterWriteVFormatDTDElement,xmlTextWriterWriteVFormatDTDElement_db);
extern int xmlTextWriterWriteDTD_db(xmlTextWriterPtr, const xmlChar *, const xmlChar *, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlTextWriterWriteDTD,xmlTextWriterWriteDTD_db);
extern int xmlTextWriterWriteFormatDTDElement_db(xmlTextWriterPtr, const xmlChar *, const char *, ...);
CheckInterfacedef(xmlTextWriterWriteFormatDTDElement,xmlTextWriterWriteFormatDTDElement_db);
extern int xmlTextWriterStartDTDAttlist_db(xmlTextWriterPtr, const xmlChar *);
CheckInterfacedef(xmlTextWriterStartDTDAttlist,xmlTextWriterStartDTDAttlist_db);
extern int xmlTextWriterWriteFormatElementNS_db(xmlTextWriterPtr, const xmlChar *, const xmlChar *, const xmlChar *, const char *, ...);
CheckInterfacedef(xmlTextWriterWriteFormatElementNS,xmlTextWriterWriteFormatElementNS_db);
extern int xmlTextWriterWriteVFormatString_db(xmlTextWriterPtr, const char *, va_list);
CheckInterfacedef(xmlTextWriterWriteVFormatString,xmlTextWriterWriteVFormatString_db);
extern xmlTextWriterPtr xmlNewTextWriterDoc_db(xmlDocPtr *, int);
CheckInterfacedef(xmlNewTextWriterDoc,xmlNewTextWriterDoc_db);
extern int xmlTextWriterStartComment_db(xmlTextWriterPtr);
CheckInterfacedef(xmlTextWriterStartComment,xmlTextWriterStartComment_db);
extern void xmlFreeTextWriter_db(xmlTextWriterPtr);
CheckInterfacedef(xmlFreeTextWriter,xmlFreeTextWriter_db);
extern int xmlTextWriterStartElement_db(xmlTextWriterPtr, const xmlChar *);
CheckInterfacedef(xmlTextWriterStartElement,xmlTextWriterStartElement_db);
extern int xmlTextWriterWriteDTDAttlist_db(xmlTextWriterPtr, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlTextWriterWriteDTDAttlist,xmlTextWriterWriteDTDAttlist_db);
extern int xmlTextWriterWriteDTDExternalEntity_db(xmlTextWriterPtr, int, const xmlChar *, const xmlChar *, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlTextWriterWriteDTDExternalEntity,xmlTextWriterWriteDTDExternalEntity_db);
extern int xmlTextWriterEndComment_db(xmlTextWriterPtr);
CheckInterfacedef(xmlTextWriterEndComment,xmlTextWriterEndComment_db);
extern int xmlTextWriterWriteVFormatDTDAttlist_db(xmlTextWriterPtr, const xmlChar *, const char *, va_list);
CheckInterfacedef(xmlTextWriterWriteVFormatDTDAttlist,xmlTextWriterWriteVFormatDTDAttlist_db);
extern int xmlTextWriterWriteDTDEntity_db(xmlTextWriterPtr, int, const xmlChar *, const xmlChar *, const xmlChar *, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlTextWriterWriteDTDEntity,xmlTextWriterWriteDTDEntity_db);
extern int xmlTextWriterStartDocument_db(xmlTextWriterPtr, const char *, const char *, const char *);
CheckInterfacedef(xmlTextWriterStartDocument,xmlTextWriterStartDocument_db);
extern int xmlTextWriterEndCDATA_db(xmlTextWriterPtr);
CheckInterfacedef(xmlTextWriterEndCDATA,xmlTextWriterEndCDATA_db);
extern int xmlTextWriterWriteBase64_db(xmlTextWriterPtr, const char *, int, int);
CheckInterfacedef(xmlTextWriterWriteBase64,xmlTextWriterWriteBase64_db);
extern xmlTextWriterPtr xmlNewTextWriterPushParser_db(xmlParserCtxtPtr, int);
CheckInterfacedef(xmlNewTextWriterPushParser,xmlNewTextWriterPushParser_db);
extern int xmlTextWriterWriteElementNS_db(xmlTextWriterPtr, const xmlChar *, const xmlChar *, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlTextWriterWriteElementNS,xmlTextWriterWriteElementNS_db);
extern int xmlTextWriterStartPI_db(xmlTextWriterPtr, const xmlChar *);
CheckInterfacedef(xmlTextWriterStartPI,xmlTextWriterStartPI_db);
extern int xmlTextWriterEndElement_db(xmlTextWriterPtr);
CheckInterfacedef(xmlTextWriterEndElement,xmlTextWriterEndElement_db);
extern int xmlTextWriterWriteFormatDTD_db(xmlTextWriterPtr, const xmlChar *, const xmlChar *, const xmlChar *, const char *, ...);
CheckInterfacedef(xmlTextWriterWriteFormatDTD,xmlTextWriterWriteFormatDTD_db);
extern int xmlTextWriterWriteRaw_db(xmlTextWriterPtr, const xmlChar *);
CheckInterfacedef(xmlTextWriterWriteRaw,xmlTextWriterWriteRaw_db);
extern xmlTextWriterPtr xmlNewTextWriterTree_db(xmlDocPtr, xmlNodePtr, int);
CheckInterfacedef(xmlNewTextWriterTree,xmlNewTextWriterTree_db);
extern int xmlTextWriterWriteVFormatDTD_db(xmlTextWriterPtr, const xmlChar *, const xmlChar *, const xmlChar *, const char *, va_list);
CheckInterfacedef(xmlTextWriterWriteVFormatDTD,xmlTextWriterWriteVFormatDTD_db);
extern int xmlTextWriterEndDTDAttlist_db(xmlTextWriterPtr);
CheckInterfacedef(xmlTextWriterEndDTDAttlist,xmlTextWriterEndDTDAttlist_db);
extern int xmlTextWriterStartDTDElement_db(xmlTextWriterPtr, const xmlChar *);
CheckInterfacedef(xmlTextWriterStartDTDElement,xmlTextWriterStartDTDElement_db);
extern int xmlTextWriterSetIndentString_db(xmlTextWriterPtr, const xmlChar *);
CheckInterfacedef(xmlTextWriterSetIndentString,xmlTextWriterSetIndentString_db);
extern int xmlTextWriterWriteElement_db(xmlTextWriterPtr, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlTextWriterWriteElement,xmlTextWriterWriteElement_db);
extern int xmlTextWriterEndDTDElement_db(xmlTextWriterPtr);
CheckInterfacedef(xmlTextWriterEndDTDElement,xmlTextWriterEndDTDElement_db);
extern int xmlTextWriterStartDTD_db(xmlTextWriterPtr, const xmlChar *, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlTextWriterStartDTD,xmlTextWriterStartDTD_db);
extern int xmlTextWriterWriteFormatAttributeNS_db(xmlTextWriterPtr, const xmlChar *, const xmlChar *, const xmlChar *, const char *, ...);
CheckInterfacedef(xmlTextWriterWriteFormatAttributeNS,xmlTextWriterWriteFormatAttributeNS_db);
extern int xmlTextWriterWriteFormatAttribute_db(xmlTextWriterPtr, const xmlChar *, const char *, ...);
CheckInterfacedef(xmlTextWriterWriteFormatAttribute,xmlTextWriterWriteFormatAttribute_db);
extern int xmlTextWriterStartElementNS_db(xmlTextWriterPtr, const xmlChar *, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlTextWriterStartElementNS,xmlTextWriterStartElementNS_db);
extern int xmlTextWriterWriteVFormatElement_db(xmlTextWriterPtr, const xmlChar *, const char *, va_list);
CheckInterfacedef(xmlTextWriterWriteVFormatElement,xmlTextWriterWriteVFormatElement_db);
extern int xmlTextWriterWriteFormatString_db(xmlTextWriterPtr, const char *, ...);
CheckInterfacedef(xmlTextWriterWriteFormatString,xmlTextWriterWriteFormatString_db);
extern int xmlTextWriterWriteAttribute_db(xmlTextWriterPtr, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlTextWriterWriteAttribute,xmlTextWriterWriteAttribute_db);
extern xmlTextWriterPtr xmlNewTextWriterMemory_db(xmlBufferPtr, int);
CheckInterfacedef(xmlNewTextWriterMemory,xmlNewTextWriterMemory_db);
extern int xmlTextWriterWriteRawLen_db(xmlTextWriterPtr, const xmlChar *, int);
CheckInterfacedef(xmlTextWriterWriteRawLen,xmlTextWriterWriteRawLen_db);
extern int xmlTextWriterWriteFormatCDATA_db(xmlTextWriterPtr, const char *, ...);
CheckInterfacedef(xmlTextWriterWriteFormatCDATA,xmlTextWriterWriteFormatCDATA_db);
extern int xmlTextWriterWriteVFormatElementNS_db(xmlTextWriterPtr, const xmlChar *, const xmlChar *, const xmlChar *, const char *, va_list);
CheckInterfacedef(xmlTextWriterWriteVFormatElementNS,xmlTextWriterWriteVFormatElementNS_db);
extern int xmlTextWriterWriteVFormatAttribute_db(xmlTextWriterPtr, const xmlChar *, const char *, va_list);
CheckInterfacedef(xmlTextWriterWriteVFormatAttribute,xmlTextWriterWriteVFormatAttribute_db);
extern int xmlTextWriterSetIndent_db(xmlTextWriterPtr, int);
CheckInterfacedef(xmlTextWriterSetIndent,xmlTextWriterSetIndent_db);
extern int xmlTextWriterWriteDTDNotation_db(xmlTextWriterPtr, const xmlChar *, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlTextWriterWriteDTDNotation,xmlTextWriterWriteDTDNotation_db);
extern int xmlTextWriterWriteFormatDTDAttlist_db(xmlTextWriterPtr, const xmlChar *, const char *, ...);
CheckInterfacedef(xmlTextWriterWriteFormatDTDAttlist,xmlTextWriterWriteFormatDTDAttlist_db);
extern int xmlTextWriterWriteVFormatCDATA_db(xmlTextWriterPtr, const char *, va_list);
CheckInterfacedef(xmlTextWriterWriteVFormatCDATA,xmlTextWriterWriteVFormatCDATA_db);
extern int xmlTextWriterWriteFormatElement_db(xmlTextWriterPtr, const xmlChar *, const char *, ...);
CheckInterfacedef(xmlTextWriterWriteFormatElement,xmlTextWriterWriteFormatElement_db);
extern int xmlTextWriterWriteComment_db(xmlTextWriterPtr, const xmlChar *);
CheckInterfacedef(xmlTextWriterWriteComment,xmlTextWriterWriteComment_db);
extern int xmlTextWriterFlush_db(xmlTextWriterPtr);
CheckInterfacedef(xmlTextWriterFlush,xmlTextWriterFlush_db);
extern int xmlTextWriterWriteVFormatComment_db(xmlTextWriterPtr, const char *, va_list);
CheckInterfacedef(xmlTextWriterWriteVFormatComment,xmlTextWriterWriteVFormatComment_db);
extern int xmlTextWriterWriteString_db(xmlTextWriterPtr, const xmlChar *);
CheckInterfacedef(xmlTextWriterWriteString,xmlTextWriterWriteString_db);
extern int xmlTextWriterWriteFormatPI_db(xmlTextWriterPtr, const xmlChar *, const char *, ...);
CheckInterfacedef(xmlTextWriterWriteFormatPI,xmlTextWriterWriteFormatPI_db);
extern int xmlTextWriterEndDTD_db(xmlTextWriterPtr);
CheckInterfacedef(xmlTextWriterEndDTD,xmlTextWriterEndDTD_db);
extern int xmlTextWriterEndAttribute_db(xmlTextWriterPtr);
CheckInterfacedef(xmlTextWriterEndAttribute,xmlTextWriterEndAttribute_db);
extern int xmlTextWriterWriteBinHex_db(xmlTextWriterPtr, const char *, int, int);
CheckInterfacedef(xmlTextWriterWriteBinHex,xmlTextWriterWriteBinHex_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in libxml2/libxml/xmlwriter.h\n\n",pcnt,cnt);
return cnt;
#endif

}
