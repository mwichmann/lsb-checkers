/*
 * Test of libxml2/libxml/encoding.h
 */
#include "hdrchk.h"
#include "sys/types.h"
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
#if __i386__
CheckEnum("XML_CHAR_ENCODING_ERROR",XML_CHAR_ENCODING_ERROR,-1);
CheckEnum("XML_CHAR_ENCODING_NONE",XML_CHAR_ENCODING_NONE,0);
CheckEnum("XML_CHAR_ENCODING_UTF8",XML_CHAR_ENCODING_UTF8,1);
CheckEnum("XML_CHAR_ENCODING_UTF16LE",XML_CHAR_ENCODING_UTF16LE,2);
CheckEnum("XML_CHAR_ENCODING_UTF16BE",XML_CHAR_ENCODING_UTF16BE,3);
CheckEnum("XML_CHAR_ENCODING_UCS4LE",XML_CHAR_ENCODING_UCS4LE,4);
CheckEnum("XML_CHAR_ENCODING_UCS4BE",XML_CHAR_ENCODING_UCS4BE,5);
CheckEnum("XML_CHAR_ENCODING_EBCDIC",XML_CHAR_ENCODING_EBCDIC,6);
CheckEnum("XML_CHAR_ENCODING_UCS4_2143",XML_CHAR_ENCODING_UCS4_2143,7);
CheckEnum("XML_CHAR_ENCODING_UCS4_3412",XML_CHAR_ENCODING_UCS4_3412,8);
CheckEnum("XML_CHAR_ENCODING_UCS2",XML_CHAR_ENCODING_UCS2,9);
CheckEnum("XML_CHAR_ENCODING_8859_1",XML_CHAR_ENCODING_8859_1,10);
CheckEnum("XML_CHAR_ENCODING_8859_2",XML_CHAR_ENCODING_8859_2,11);
CheckEnum("XML_CHAR_ENCODING_8859_3",XML_CHAR_ENCODING_8859_3,12);
CheckEnum("XML_CHAR_ENCODING_8859_4",XML_CHAR_ENCODING_8859_4,13);
CheckEnum("XML_CHAR_ENCODING_8859_5",XML_CHAR_ENCODING_8859_5,14);
CheckEnum("XML_CHAR_ENCODING_8859_6",XML_CHAR_ENCODING_8859_6,15);
CheckEnum("XML_CHAR_ENCODING_8859_7",XML_CHAR_ENCODING_8859_7,16);
CheckEnum("XML_CHAR_ENCODING_8859_8",XML_CHAR_ENCODING_8859_8,17);
CheckEnum("XML_CHAR_ENCODING_8859_9",XML_CHAR_ENCODING_8859_9,18);
CheckEnum("XML_CHAR_ENCODING_2022_JP",XML_CHAR_ENCODING_2022_JP,19);
CheckEnum("XML_CHAR_ENCODING_SHIFT_JIS",XML_CHAR_ENCODING_SHIFT_JIS,20);
CheckEnum("XML_CHAR_ENCODING_EUC_JP",XML_CHAR_ENCODING_EUC_JP,21);
CheckEnum("XML_CHAR_ENCODING_ASCII",XML_CHAR_ENCODING_ASCII,22);
#elif __x86_64__
CheckEnum("XML_CHAR_ENCODING_ERROR",XML_CHAR_ENCODING_ERROR,-1);
CheckEnum("XML_CHAR_ENCODING_NONE",XML_CHAR_ENCODING_NONE,0);
CheckEnum("XML_CHAR_ENCODING_UTF8",XML_CHAR_ENCODING_UTF8,1);
CheckEnum("XML_CHAR_ENCODING_UTF16LE",XML_CHAR_ENCODING_UTF16LE,2);
CheckEnum("XML_CHAR_ENCODING_UTF16BE",XML_CHAR_ENCODING_UTF16BE,3);
CheckEnum("XML_CHAR_ENCODING_UCS4LE",XML_CHAR_ENCODING_UCS4LE,4);
CheckEnum("XML_CHAR_ENCODING_UCS4BE",XML_CHAR_ENCODING_UCS4BE,5);
CheckEnum("XML_CHAR_ENCODING_EBCDIC",XML_CHAR_ENCODING_EBCDIC,6);
CheckEnum("XML_CHAR_ENCODING_UCS4_2143",XML_CHAR_ENCODING_UCS4_2143,7);
CheckEnum("XML_CHAR_ENCODING_UCS4_3412",XML_CHAR_ENCODING_UCS4_3412,8);
CheckEnum("XML_CHAR_ENCODING_UCS2",XML_CHAR_ENCODING_UCS2,9);
CheckEnum("XML_CHAR_ENCODING_8859_1",XML_CHAR_ENCODING_8859_1,10);
CheckEnum("XML_CHAR_ENCODING_8859_2",XML_CHAR_ENCODING_8859_2,11);
CheckEnum("XML_CHAR_ENCODING_8859_3",XML_CHAR_ENCODING_8859_3,12);
CheckEnum("XML_CHAR_ENCODING_8859_4",XML_CHAR_ENCODING_8859_4,13);
CheckEnum("XML_CHAR_ENCODING_8859_5",XML_CHAR_ENCODING_8859_5,14);
CheckEnum("XML_CHAR_ENCODING_8859_6",XML_CHAR_ENCODING_8859_6,15);
CheckEnum("XML_CHAR_ENCODING_8859_7",XML_CHAR_ENCODING_8859_7,16);
CheckEnum("XML_CHAR_ENCODING_8859_8",XML_CHAR_ENCODING_8859_8,17);
CheckEnum("XML_CHAR_ENCODING_8859_9",XML_CHAR_ENCODING_8859_9,18);
CheckEnum("XML_CHAR_ENCODING_2022_JP",XML_CHAR_ENCODING_2022_JP,19);
CheckEnum("XML_CHAR_ENCODING_SHIFT_JIS",XML_CHAR_ENCODING_SHIFT_JIS,20);
CheckEnum("XML_CHAR_ENCODING_EUC_JP",XML_CHAR_ENCODING_EUC_JP,21);
CheckEnum("XML_CHAR_ENCODING_ASCII",XML_CHAR_ENCODING_ASCII,22);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14727,0);
Msg("Find size of anon-libxml2/libxml/encoding.h-21 (14727)\n");
#endif

#if __i386__
CheckTypeSize(xmlCharEncoding,4, 14728, 2)
#elif __x86_64__
CheckTypeSize(xmlCharEncoding,4, 14728, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14728,0);
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
