/*
 * Test of libxml2/libxml/encoding.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include <libxml/xmlregexp.h>
#include "libxml2/libxml/encoding.h"



#ifdef TET_TEST
void libxml2_libxml_encoding_h()
{
#else
int libxml2_libxml_encoding_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in libxml2/libxml/encoding.h\n");
#endif

printf("Checking data structures in libxml2/libxml/encoding.h\n");
#if defined __i386__
CheckTypeSize(xmlCharEncoding,4, 14728, 2, 3.1, NULL, 14727, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlCharEncoding,4, 14728, 11, 3.1, NULL, 14727, NULL)
#elif defined __ia64__
CheckTypeSize(xmlCharEncoding,4, 14728, 3, 3.1, NULL, 14727, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlCharEncoding,4, 14728, 6, 3.1, NULL, 14727, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlCharEncoding,4, 14728, 9, 3.1, NULL, 14727, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlCharEncoding,4, 14728, 10, 3.1, NULL, 14727, NULL)
#elif defined __s390x__
CheckTypeSize(xmlCharEncoding,4, 14728, 12, 3.1, NULL, 14727, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14727, NULL);\n",architecture,14728,0);
Msg("Find size of xmlCharEncoding (14728)\n");
#endif

extern const char * xmlGetCharEncodingName_db(xmlCharEncoding);
CheckInterfacedef(xmlGetCharEncodingName,xmlGetCharEncodingName_db);
extern int xmlCharEncInFunc_db(xmlCharEncodingHandler *, xmlBufferPtr, xmlBufferPtr);
CheckInterfacedef(xmlCharEncInFunc,xmlCharEncInFunc_db);
extern xmlCharEncodingHandlerPtr xmlFindCharEncodingHandler_db(const char *);
CheckInterfacedef(xmlFindCharEncodingHandler,xmlFindCharEncodingHandler_db);
extern int xmlCharEncOutFunc_db(xmlCharEncodingHandler *, xmlBufferPtr, xmlBufferPtr);
CheckInterfacedef(xmlCharEncOutFunc,xmlCharEncOutFunc_db);
extern int UTF8Toisolat1_db(unsigned char *, int *, const unsigned char *, int *);
CheckInterfacedef(UTF8Toisolat1,UTF8Toisolat1_db);
extern int isolat1ToUTF8_db(unsigned char *, int *, const unsigned char *, int *);
CheckInterfacedef(isolat1ToUTF8,isolat1ToUTF8_db);
extern int xmlCharEncCloseFunc_db(xmlCharEncodingHandler *);
CheckInterfacedef(xmlCharEncCloseFunc,xmlCharEncCloseFunc_db);
extern xmlCharEncodingHandlerPtr xmlGetCharEncodingHandler_db(xmlCharEncoding);
CheckInterfacedef(xmlGetCharEncodingHandler,xmlGetCharEncodingHandler_db);
extern void xmlCleanupEncodingAliases_db(void);
CheckInterfacedef(xmlCleanupEncodingAliases,xmlCleanupEncodingAliases_db);
extern void xmlCleanupCharEncodingHandlers_db(void);
CheckInterfacedef(xmlCleanupCharEncodingHandlers,xmlCleanupCharEncodingHandlers_db);
extern xmlCharEncoding xmlDetectCharEncoding_db(const unsigned char *, int);
CheckInterfacedef(xmlDetectCharEncoding,xmlDetectCharEncoding_db);
extern int xmlAddEncodingAlias_db(const char *, const char *);
CheckInterfacedef(xmlAddEncodingAlias,xmlAddEncodingAlias_db);
extern void xmlRegisterCharEncodingHandler_db(xmlCharEncodingHandlerPtr);
CheckInterfacedef(xmlRegisterCharEncodingHandler,xmlRegisterCharEncodingHandler_db);
extern const char * xmlGetEncodingAlias_db(const char *);
CheckInterfacedef(xmlGetEncodingAlias,xmlGetEncodingAlias_db);
extern void xmlInitCharEncodingHandlers_db(void);
CheckInterfacedef(xmlInitCharEncodingHandlers,xmlInitCharEncodingHandlers_db);
extern xmlCharEncodingHandlerPtr xmlNewCharEncodingHandler_db(const char *, xmlCharEncodingInputFunc, xmlCharEncodingOutputFunc);
CheckInterfacedef(xmlNewCharEncodingHandler,xmlNewCharEncodingHandler_db);
extern int xmlDelEncodingAlias_db(const char *);
CheckInterfacedef(xmlDelEncodingAlias,xmlDelEncodingAlias_db);
extern int xmlCharEncFirstLine_db(xmlCharEncodingHandler *, xmlBufferPtr, xmlBufferPtr);
CheckInterfacedef(xmlCharEncFirstLine,xmlCharEncFirstLine_db);
extern xmlCharEncoding xmlParseCharEncoding_db(const char *);
CheckInterfacedef(xmlParseCharEncoding,xmlParseCharEncoding_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in libxml2/libxml/encoding.h\n\n",pcnt,cnt);
return cnt;
#endif

}
