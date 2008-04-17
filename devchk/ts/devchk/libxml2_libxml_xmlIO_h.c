/*
 * Test of libxml2/libxml/xmlIO.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include <libxml/xmlregexp.h>
struct _xmlValidState {} ;
#include "libxml2/libxml/xmlIO.h"



#ifdef TET_TEST
void libxml2_libxml_xmlIO_h()
{
#else
int libxml2_libxml_xmlIO_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in libxml2/libxml/xmlIO.h\n");
#endif

printf("Checking data structures in libxml2/libxml/xmlIO.h\n");
#if defined __i386__
CheckTypeSize(xmlOutputMatchCallback,4, 14805, 2, 3.1, NULL, 14804, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlOutputMatchCallback,8, 14805, 11, 3.1, NULL, 14804, NULL)
#elif defined __ia64__
CheckTypeSize(xmlOutputMatchCallback,8, 14805, 3, 3.1, NULL, 14804, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlOutputMatchCallback,4, 14805, 6, 3.1, NULL, 14804, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlOutputMatchCallback,8, 14805, 9, 3.1, NULL, 14804, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlOutputMatchCallback,4, 14805, 10, 3.1, NULL, 14804, NULL)
#elif defined __s390x__
CheckTypeSize(xmlOutputMatchCallback,8, 14805, 12, 3.1, NULL, 14804, NULL)
#else
Msg("Find size of xmlOutputMatchCallback (14805)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14804,NULL);\n",architecture,14805,0);
#endif

#if defined __i386__
CheckTypeSize(xmlOutputOpenCallback,4, 14807, 2, 3.1, NULL, 14806, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlOutputOpenCallback,8, 14807, 11, 3.1, NULL, 14806, NULL)
#elif defined __ia64__
CheckTypeSize(xmlOutputOpenCallback,8, 14807, 3, 3.1, NULL, 14806, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlOutputOpenCallback,4, 14807, 6, 3.1, NULL, 14806, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlOutputOpenCallback,8, 14807, 9, 3.1, NULL, 14806, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlOutputOpenCallback,4, 14807, 10, 3.1, NULL, 14806, NULL)
#elif defined __s390x__
CheckTypeSize(xmlOutputOpenCallback,8, 14807, 12, 3.1, NULL, 14806, NULL)
#else
Msg("Find size of xmlOutputOpenCallback (14807)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14806,NULL);\n",architecture,14807,0);
#endif

#if defined __i386__
CheckTypeSize(xmlParserNodeInfo,20, 14816, 2, 3.1, NULL, 14813, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlParserNodeInfo,40, 14816, 11, 3.1, NULL, 14813, NULL)
#elif defined __ia64__
CheckTypeSize(xmlParserNodeInfo,40, 14816, 3, 3.1, NULL, 14813, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlParserNodeInfo,20, 14816, 6, 3.1, NULL, 14813, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlParserNodeInfo,40, 14816, 9, 3.1, NULL, 14813, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlParserNodeInfo,20, 14816, 10, 3.1, NULL, 14813, NULL)
#elif defined __s390x__
CheckTypeSize(xmlParserNodeInfo,40, 14816, 12, 3.1, NULL, 14813, NULL)
#else
Msg("Find size of xmlParserNodeInfo (14816)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14813,NULL);\n",architecture,14816,0);
#endif

#if defined __i386__
CheckTypeSize(xmlParserNodeInfoSeq,12, 14818, 2, 3.1, NULL, 14812, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlParserNodeInfoSeq,24, 14818, 11, 3.1, NULL, 14812, NULL)
#elif defined __ia64__
CheckTypeSize(xmlParserNodeInfoSeq,24, 14818, 3, 3.1, NULL, 14812, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlParserNodeInfoSeq,12, 14818, 6, 3.1, NULL, 14812, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlParserNodeInfoSeq,24, 14818, 9, 3.1, NULL, 14812, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlParserNodeInfoSeq,12, 14818, 10, 3.1, NULL, 14812, NULL)
#elif defined __s390x__
CheckTypeSize(xmlParserNodeInfoSeq,24, 14818, 12, 3.1, NULL, 14812, NULL)
#else
Msg("Find size of xmlParserNodeInfoSeq (14818)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14812,NULL);\n",architecture,14818,0);
#endif

#if defined __i386__
CheckTypeSize(xmlValidityErrorFunc,4, 14820, 2, 3.1, NULL, 14655, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlValidityErrorFunc,8, 14820, 11, 3.1, NULL, 14655, NULL)
#elif defined __ia64__
CheckTypeSize(xmlValidityErrorFunc,8, 14820, 3, 3.1, NULL, 14655, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlValidityErrorFunc,4, 14820, 6, 3.1, NULL, 14655, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlValidityErrorFunc,8, 14820, 9, 3.1, NULL, 14655, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlValidityErrorFunc,4, 14820, 10, 3.1, NULL, 14655, NULL)
#elif defined __s390x__
CheckTypeSize(xmlValidityErrorFunc,8, 14820, 12, 3.1, NULL, 14655, NULL)
#else
Msg("Find size of xmlValidityErrorFunc (14820)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14655,NULL);\n",architecture,14820,0);
#endif

#if defined __i386__
CheckTypeSize(xmlValidityWarningFunc,4, 14821, 2, 3.1, NULL, 14655, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlValidityWarningFunc,8, 14821, 11, 3.1, NULL, 14655, NULL)
#elif defined __ia64__
CheckTypeSize(xmlValidityWarningFunc,8, 14821, 3, 3.1, NULL, 14655, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlValidityWarningFunc,4, 14821, 6, 3.1, NULL, 14655, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlValidityWarningFunc,8, 14821, 9, 3.1, NULL, 14655, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlValidityWarningFunc,4, 14821, 10, 3.1, NULL, 14655, NULL)
#elif defined __s390x__
CheckTypeSize(xmlValidityWarningFunc,8, 14821, 12, 3.1, NULL, 14655, NULL)
#else
Msg("Find size of xmlValidityWarningFunc (14821)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14655,NULL);\n",architecture,14821,0);
#endif

#if defined __i386__
CheckTypeSize(xmlValidCtxt,64, 14825, 2, 3.1, NULL, 14819, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlValidCtxt,112, 14825, 11, 3.1, NULL, 14819, NULL)
#elif defined __ia64__
CheckTypeSize(xmlValidCtxt,112, 14825, 3, 3.1, NULL, 14819, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlValidCtxt,64, 14825, 6, 3.1, NULL, 14819, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlValidCtxt,112, 14825, 9, 3.1, NULL, 14819, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlValidCtxt,64, 14825, 10, 3.1, NULL, 14819, NULL)
#elif defined __s390x__
CheckTypeSize(xmlValidCtxt,112, 14825, 12, 3.1, NULL, 14819, NULL)
#else
Msg("Find size of xmlValidCtxt (14825)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14819,NULL);\n",architecture,14825,0);
#endif

#if defined __i386__
CheckTypeSize(xmlParserInputState,4, 14827, 2, 3.1, NULL, 14826, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlParserInputState,4, 14827, 11, 3.1, NULL, 14826, NULL)
#elif defined __ia64__
CheckTypeSize(xmlParserInputState,4, 14827, 3, 3.1, NULL, 14826, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlParserInputState,4, 14827, 6, 3.1, NULL, 14826, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlParserInputState,4, 14827, 9, 3.1, NULL, 14826, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlParserInputState,4, 14827, 10, 3.1, NULL, 14826, NULL)
#elif defined __s390x__
CheckTypeSize(xmlParserInputState,4, 14827, 12, 3.1, NULL, 14826, NULL)
#else
Msg("Find size of xmlParserInputState (14827)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14826,NULL);\n",architecture,14827,0);
#endif

#if defined __i386__
CheckTypeSize(xmlParserMode,4, 14829, 2, 3.1, NULL, 14828, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlParserMode,4, 14829, 11, 3.1, NULL, 14828, NULL)
#elif defined __ia64__
CheckTypeSize(xmlParserMode,4, 14829, 3, 3.1, NULL, 14828, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlParserMode,4, 14829, 6, 3.1, NULL, 14828, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlParserMode,4, 14829, 9, 3.1, NULL, 14828, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlParserMode,4, 14829, 10, 3.1, NULL, 14828, NULL)
#elif defined __s390x__
CheckTypeSize(xmlParserMode,4, 14829, 12, 3.1, NULL, 14828, NULL)
#else
Msg("Find size of xmlParserMode (14829)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14828,NULL);\n",architecture,14829,0);
#endif

#if defined __i386__
CheckTypeSize(xmlParserCtxt,440, 14830, 2, 3.1, NULL, 14808, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlParserCtxt,696, 14830, 11, 3.1, NULL, 14808, NULL)
#elif defined __ia64__
CheckTypeSize(xmlParserCtxt,696, 14830, 3, 3.1, NULL, 14808, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlParserCtxt,440, 14830, 6, 3.1, NULL, 14808, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlParserCtxt,696, 14830, 9, 3.1, NULL, 14808, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlParserCtxt,440, 14830, 10, 3.1, NULL, 14808, NULL)
#elif defined __s390x__
CheckTypeSize(xmlParserCtxt,696, 14830, 12, 3.1, NULL, 14808, NULL)
#else
Msg("Find size of xmlParserCtxt (14830)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14808,NULL);\n",architecture,14830,0);
#endif

#if defined __i386__
CheckTypeSize(xmlParserCtxtPtr,4, 14832, 2, 3.1, NULL, 14831, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlParserCtxtPtr,8, 14832, 11, 3.1, NULL, 14831, NULL)
#elif defined __ia64__
CheckTypeSize(xmlParserCtxtPtr,8, 14832, 3, 3.1, NULL, 14831, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlParserCtxtPtr,4, 14832, 6, 3.1, NULL, 14831, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlParserCtxtPtr,8, 14832, 9, 3.1, NULL, 14831, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlParserCtxtPtr,4, 14832, 10, 3.1, NULL, 14831, NULL)
#elif defined __s390x__
CheckTypeSize(xmlParserCtxtPtr,8, 14832, 12, 3.1, NULL, 14831, NULL)
#else
Msg("Find size of xmlParserCtxtPtr (14832)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14831,NULL);\n",architecture,14832,0);
#endif

#if defined __i386__
CheckTypeSize(xmlInputMatchCallback,4, 14833, 2, 3.1, NULL, 14804, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlInputMatchCallback,8, 14833, 11, 3.1, NULL, 14804, NULL)
#elif defined __ia64__
CheckTypeSize(xmlInputMatchCallback,8, 14833, 3, 3.1, NULL, 14804, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlInputMatchCallback,4, 14833, 6, 3.1, NULL, 14804, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlInputMatchCallback,8, 14833, 9, 3.1, NULL, 14804, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlInputMatchCallback,4, 14833, 10, 3.1, NULL, 14804, NULL)
#elif defined __s390x__
CheckTypeSize(xmlInputMatchCallback,8, 14833, 12, 3.1, NULL, 14804, NULL)
#else
Msg("Find size of xmlInputMatchCallback (14833)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14804,NULL);\n",architecture,14833,0);
#endif

#if defined __i386__
CheckTypeSize(xmlInputOpenCallback,4, 14834, 2, 3.1, NULL, 14806, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlInputOpenCallback,8, 14834, 11, 3.1, NULL, 14806, NULL)
#elif defined __ia64__
CheckTypeSize(xmlInputOpenCallback,8, 14834, 3, 3.1, NULL, 14806, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlInputOpenCallback,4, 14834, 6, 3.1, NULL, 14806, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlInputOpenCallback,8, 14834, 9, 3.1, NULL, 14806, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlInputOpenCallback,4, 14834, 10, 3.1, NULL, 14806, NULL)
#elif defined __s390x__
CheckTypeSize(xmlInputOpenCallback,8, 14834, 12, 3.1, NULL, 14806, NULL)
#else
Msg("Find size of xmlInputOpenCallback (14834)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14806, NULL);\n",architecture,14834,0);
#endif

extern int xmlOutputBufferClose_db(xmlOutputBufferPtr);
CheckInterfacedef(xmlOutputBufferClose,xmlOutputBufferClose_db);
extern void * xmlIOHTTPOpenW_db(const char *, int);
CheckInterfacedef(xmlIOHTTPOpenW,xmlIOHTTPOpenW_db);
extern char * xmlParserGetDirectory_db(const char *);
CheckInterfacedef(xmlParserGetDirectory,xmlParserGetDirectory_db);
extern void xmlRegisterDefaultOutputCallbacks_db(void);
CheckInterfacedef(xmlRegisterDefaultOutputCallbacks,xmlRegisterDefaultOutputCallbacks_db);
extern int xmlOutputBufferWriteString_db(xmlOutputBufferPtr, const char *);
CheckInterfacedef(xmlOutputBufferWriteString,xmlOutputBufferWriteString_db);
extern int xmlOutputBufferWrite_db(xmlOutputBufferPtr, int, const char *);
CheckInterfacedef(xmlOutputBufferWrite,xmlOutputBufferWrite_db);
extern int xmlRegisterOutputCallbacks_db(xmlOutputMatchCallback, xmlOutputOpenCallback, xmlOutputWriteCallback, xmlOutputCloseCallback);
CheckInterfacedef(xmlRegisterOutputCallbacks,xmlRegisterOutputCallbacks_db);
extern void xmlCleanupInputCallbacks_db(void);
CheckInterfacedef(xmlCleanupInputCallbacks,xmlCleanupInputCallbacks_db);
extern void xmlRegisterHTTPPostCallbacks_db(void);
CheckInterfacedef(xmlRegisterHTTPPostCallbacks,xmlRegisterHTTPPostCallbacks_db);
extern xmlOutputBufferPtr xmlOutputBufferCreateFd_db(int, xmlCharEncodingHandlerPtr);
CheckInterfacedef(xmlOutputBufferCreateFd,xmlOutputBufferCreateFd_db);
extern int xmlIOFTPMatch_db(const char *);
CheckInterfacedef(xmlIOFTPMatch,xmlIOFTPMatch_db);
extern xmlParserInputBufferPtr xmlParserInputBufferCreateFile_db(FILE *, xmlCharEncoding);
CheckInterfacedef(xmlParserInputBufferCreateFile,xmlParserInputBufferCreateFile_db);
extern int xmlFileClose_db(void *);
CheckInterfacedef(xmlFileClose,xmlFileClose_db);
extern xmlParserInputBufferPtr xmlParserInputBufferCreateFd_db(int, xmlCharEncoding);
CheckInterfacedef(xmlParserInputBufferCreateFd,xmlParserInputBufferCreateFd_db);
extern int xmlIOHTTPMatch_db(const char *);
CheckInterfacedef(xmlIOHTTPMatch,xmlIOHTTPMatch_db);
extern xmlOutputBufferPtr xmlAllocOutputBuffer_db(xmlCharEncodingHandlerPtr);
CheckInterfacedef(xmlAllocOutputBuffer,xmlAllocOutputBuffer_db);
extern xmlParserInputBufferPtr xmlParserInputBufferCreateStatic_db(const char *, int, xmlCharEncoding);
CheckInterfacedef(xmlParserInputBufferCreateStatic,xmlParserInputBufferCreateStatic_db);
extern xmlParserInputBufferPtr xmlParserInputBufferCreateMem_db(const char *, int, xmlCharEncoding);
CheckInterfacedef(xmlParserInputBufferCreateMem,xmlParserInputBufferCreateMem_db);
extern int xmlIOFTPRead_db(void *, char *, int);
CheckInterfacedef(xmlIOFTPRead,xmlIOFTPRead_db);
extern xmlOutputBufferPtr xmlOutputBufferCreateIO_db(xmlOutputWriteCallback, xmlOutputCloseCallback, void *, xmlCharEncodingHandlerPtr);
CheckInterfacedef(xmlOutputBufferCreateIO,xmlOutputBufferCreateIO_db);
extern int xmlCheckFilename_db(const char *);
CheckInterfacedef(xmlCheckFilename,xmlCheckFilename_db);
extern xmlChar * xmlNormalizeWindowsPath_db(const xmlChar *);
CheckInterfacedef(xmlNormalizeWindowsPath,xmlNormalizeWindowsPath_db);
extern int xmlIOFTPClose_db(void *);
CheckInterfacedef(xmlIOFTPClose,xmlIOFTPClose_db);
extern int xmlFileRead_db(void *, char *, int);
CheckInterfacedef(xmlFileRead,xmlFileRead_db);
extern xmlParserInputPtr xmlNoNetExternalEntityLoader_db(const char *, const char *, xmlParserCtxtPtr);
CheckInterfacedef(xmlNoNetExternalEntityLoader,xmlNoNetExternalEntityLoader_db);
extern xmlParserInputBufferPtr xmlAllocParserInputBuffer_db(xmlCharEncoding);
CheckInterfacedef(xmlAllocParserInputBuffer,xmlAllocParserInputBuffer_db);
extern xmlParserInputPtr xmlCheckHTTPInput_db(xmlParserCtxtPtr, xmlParserInputPtr);
CheckInterfacedef(xmlCheckHTTPInput,xmlCheckHTTPInput_db);
extern int xmlRegisterInputCallbacks_db(xmlInputMatchCallback, xmlInputOpenCallback, xmlInputReadCallback, xmlInputCloseCallback);
CheckInterfacedef(xmlRegisterInputCallbacks,xmlRegisterInputCallbacks_db);
extern void xmlCleanupOutputCallbacks_db(void);
CheckInterfacedef(xmlCleanupOutputCallbacks,xmlCleanupOutputCallbacks_db);
extern void * xmlIOFTPOpen_db(const char *);
CheckInterfacedef(xmlIOFTPOpen,xmlIOFTPOpen_db);
extern void xmlRegisterDefaultInputCallbacks_db(void);
CheckInterfacedef(xmlRegisterDefaultInputCallbacks,xmlRegisterDefaultInputCallbacks_db);
extern int xmlPopInputCallbacks_db(void);
CheckInterfacedef(xmlPopInputCallbacks,xmlPopInputCallbacks_db);
extern xmlParserInputBufferPtr xmlParserInputBufferCreateIO_db(xmlInputReadCallback, xmlInputCloseCallback, void *, xmlCharEncoding);
CheckInterfacedef(xmlParserInputBufferCreateIO,xmlParserInputBufferCreateIO_db);
extern int xmlParserInputBufferPush_db(xmlParserInputBufferPtr, int, const char *);
CheckInterfacedef(xmlParserInputBufferPush,xmlParserInputBufferPush_db);
extern int xmlParserInputBufferRead_db(xmlParserInputBufferPtr, int);
CheckInterfacedef(xmlParserInputBufferRead,xmlParserInputBufferRead_db);
extern xmlOutputBufferPtr xmlOutputBufferCreateFile_db(FILE *, xmlCharEncodingHandlerPtr);
CheckInterfacedef(xmlOutputBufferCreateFile,xmlOutputBufferCreateFile_db);
extern void * xmlIOHTTPOpen_db(const char *);
CheckInterfacedef(xmlIOHTTPOpen,xmlIOHTTPOpen_db);
extern int xmlIOHTTPRead_db(void *, char *, int);
CheckInterfacedef(xmlIOHTTPRead,xmlIOHTTPRead_db);
extern int xmlOutputBufferFlush_db(xmlOutputBufferPtr);
CheckInterfacedef(xmlOutputBufferFlush,xmlOutputBufferFlush_db);
extern int xmlFileMatch_db(const char *);
CheckInterfacedef(xmlFileMatch,xmlFileMatch_db);
extern int xmlParserInputBufferGrow_db(xmlParserInputBufferPtr, int);
CheckInterfacedef(xmlParserInputBufferGrow,xmlParserInputBufferGrow_db);
extern void * xmlFileOpen_db(const char *);
CheckInterfacedef(xmlFileOpen,xmlFileOpen_db);
extern int xmlOutputBufferWriteEscape_db(xmlOutputBufferPtr, const xmlChar *, xmlCharEncodingOutputFunc);
CheckInterfacedef(xmlOutputBufferWriteEscape,xmlOutputBufferWriteEscape_db);
extern int xmlIOHTTPClose_db(void *);
CheckInterfacedef(xmlIOHTTPClose,xmlIOHTTPClose_db);
extern void xmlFreeParserInputBuffer_db(xmlParserInputBufferPtr);
CheckInterfacedef(xmlFreeParserInputBuffer,xmlFreeParserInputBuffer_db);
extern xmlOutputBufferPtr xmlOutputBufferCreateFilename_db(const char *, xmlCharEncodingHandlerPtr, int);
CheckInterfacedef(xmlOutputBufferCreateFilename,xmlOutputBufferCreateFilename_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in libxml2/libxml/xmlIO.h\n\n",pcnt,cnt);
return cnt;
#endif

}
