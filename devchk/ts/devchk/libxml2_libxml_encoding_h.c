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
#if __i386__
CheckEnum("XML_CHAR_ENCODING_ERROR",XML_CHAR_ENCODING_ERROR,-1,48710);
CheckEnum("XML_CHAR_ENCODING_NONE",XML_CHAR_ENCODING_NONE,0,48711);
CheckEnum("XML_CHAR_ENCODING_UTF8",XML_CHAR_ENCODING_UTF8,1,48712);
CheckEnum("XML_CHAR_ENCODING_UTF16LE",XML_CHAR_ENCODING_UTF16LE,2,48713);
CheckEnum("XML_CHAR_ENCODING_UTF16BE",XML_CHAR_ENCODING_UTF16BE,3,48714);
CheckEnum("XML_CHAR_ENCODING_UCS4LE",XML_CHAR_ENCODING_UCS4LE,4,48715);
CheckEnum("XML_CHAR_ENCODING_UCS4BE",XML_CHAR_ENCODING_UCS4BE,5,48716);
CheckEnum("XML_CHAR_ENCODING_EBCDIC",XML_CHAR_ENCODING_EBCDIC,6,48717);
CheckEnum("XML_CHAR_ENCODING_UCS4_2143",XML_CHAR_ENCODING_UCS4_2143,7,48718);
CheckEnum("XML_CHAR_ENCODING_UCS4_3412",XML_CHAR_ENCODING_UCS4_3412,8,48719);
CheckEnum("XML_CHAR_ENCODING_UCS2",XML_CHAR_ENCODING_UCS2,9,48720);
CheckEnum("XML_CHAR_ENCODING_8859_1",XML_CHAR_ENCODING_8859_1,10,48721);
CheckEnum("XML_CHAR_ENCODING_8859_2",XML_CHAR_ENCODING_8859_2,11,48722);
CheckEnum("XML_CHAR_ENCODING_8859_3",XML_CHAR_ENCODING_8859_3,12,48723);
CheckEnum("XML_CHAR_ENCODING_8859_4",XML_CHAR_ENCODING_8859_4,13,48724);
CheckEnum("XML_CHAR_ENCODING_8859_5",XML_CHAR_ENCODING_8859_5,14,48725);
CheckEnum("XML_CHAR_ENCODING_8859_6",XML_CHAR_ENCODING_8859_6,15,48726);
CheckEnum("XML_CHAR_ENCODING_8859_7",XML_CHAR_ENCODING_8859_7,16,48727);
CheckEnum("XML_CHAR_ENCODING_8859_8",XML_CHAR_ENCODING_8859_8,17,48728);
CheckEnum("XML_CHAR_ENCODING_8859_9",XML_CHAR_ENCODING_8859_9,18,48729);
CheckEnum("XML_CHAR_ENCODING_2022_JP",XML_CHAR_ENCODING_2022_JP,19,48730);
CheckEnum("XML_CHAR_ENCODING_SHIFT_JIS",XML_CHAR_ENCODING_SHIFT_JIS,20,48731);
CheckEnum("XML_CHAR_ENCODING_EUC_JP",XML_CHAR_ENCODING_EUC_JP,21,48732);
CheckEnum("XML_CHAR_ENCODING_ASCII",XML_CHAR_ENCODING_ASCII,22,48733);
#elif __x86_64__
CheckEnum("XML_CHAR_ENCODING_ERROR",XML_CHAR_ENCODING_ERROR,-1,48710);
CheckEnum("XML_CHAR_ENCODING_NONE",XML_CHAR_ENCODING_NONE,0,48711);
CheckEnum("XML_CHAR_ENCODING_UTF8",XML_CHAR_ENCODING_UTF8,1,48712);
CheckEnum("XML_CHAR_ENCODING_UTF16LE",XML_CHAR_ENCODING_UTF16LE,2,48713);
CheckEnum("XML_CHAR_ENCODING_UTF16BE",XML_CHAR_ENCODING_UTF16BE,3,48714);
CheckEnum("XML_CHAR_ENCODING_UCS4LE",XML_CHAR_ENCODING_UCS4LE,4,48715);
CheckEnum("XML_CHAR_ENCODING_UCS4BE",XML_CHAR_ENCODING_UCS4BE,5,48716);
CheckEnum("XML_CHAR_ENCODING_EBCDIC",XML_CHAR_ENCODING_EBCDIC,6,48717);
CheckEnum("XML_CHAR_ENCODING_UCS4_2143",XML_CHAR_ENCODING_UCS4_2143,7,48718);
CheckEnum("XML_CHAR_ENCODING_UCS4_3412",XML_CHAR_ENCODING_UCS4_3412,8,48719);
CheckEnum("XML_CHAR_ENCODING_UCS2",XML_CHAR_ENCODING_UCS2,9,48720);
CheckEnum("XML_CHAR_ENCODING_8859_1",XML_CHAR_ENCODING_8859_1,10,48721);
CheckEnum("XML_CHAR_ENCODING_8859_2",XML_CHAR_ENCODING_8859_2,11,48722);
CheckEnum("XML_CHAR_ENCODING_8859_3",XML_CHAR_ENCODING_8859_3,12,48723);
CheckEnum("XML_CHAR_ENCODING_8859_4",XML_CHAR_ENCODING_8859_4,13,48724);
CheckEnum("XML_CHAR_ENCODING_8859_5",XML_CHAR_ENCODING_8859_5,14,48725);
CheckEnum("XML_CHAR_ENCODING_8859_6",XML_CHAR_ENCODING_8859_6,15,48726);
CheckEnum("XML_CHAR_ENCODING_8859_7",XML_CHAR_ENCODING_8859_7,16,48727);
CheckEnum("XML_CHAR_ENCODING_8859_8",XML_CHAR_ENCODING_8859_8,17,48728);
CheckEnum("XML_CHAR_ENCODING_8859_9",XML_CHAR_ENCODING_8859_9,18,48729);
CheckEnum("XML_CHAR_ENCODING_2022_JP",XML_CHAR_ENCODING_2022_JP,19,48730);
CheckEnum("XML_CHAR_ENCODING_SHIFT_JIS",XML_CHAR_ENCODING_SHIFT_JIS,20,48731);
CheckEnum("XML_CHAR_ENCODING_EUC_JP",XML_CHAR_ENCODING_EUC_JP,21,48732);
CheckEnum("XML_CHAR_ENCODING_ASCII",XML_CHAR_ENCODING_ASCII,22,48733);
#elif __ia64__
CheckEnum("XML_CHAR_ENCODING_ERROR",XML_CHAR_ENCODING_ERROR,-1,48710);
CheckEnum("XML_CHAR_ENCODING_NONE",XML_CHAR_ENCODING_NONE,0,48711);
CheckEnum("XML_CHAR_ENCODING_UTF8",XML_CHAR_ENCODING_UTF8,1,48712);
CheckEnum("XML_CHAR_ENCODING_UTF16LE",XML_CHAR_ENCODING_UTF16LE,2,48713);
CheckEnum("XML_CHAR_ENCODING_UTF16BE",XML_CHAR_ENCODING_UTF16BE,3,48714);
CheckEnum("XML_CHAR_ENCODING_UCS4LE",XML_CHAR_ENCODING_UCS4LE,4,48715);
CheckEnum("XML_CHAR_ENCODING_UCS4BE",XML_CHAR_ENCODING_UCS4BE,5,48716);
CheckEnum("XML_CHAR_ENCODING_EBCDIC",XML_CHAR_ENCODING_EBCDIC,6,48717);
CheckEnum("XML_CHAR_ENCODING_UCS4_2143",XML_CHAR_ENCODING_UCS4_2143,7,48718);
CheckEnum("XML_CHAR_ENCODING_UCS4_3412",XML_CHAR_ENCODING_UCS4_3412,8,48719);
CheckEnum("XML_CHAR_ENCODING_UCS2",XML_CHAR_ENCODING_UCS2,9,48720);
CheckEnum("XML_CHAR_ENCODING_8859_1",XML_CHAR_ENCODING_8859_1,10,48721);
CheckEnum("XML_CHAR_ENCODING_8859_2",XML_CHAR_ENCODING_8859_2,11,48722);
CheckEnum("XML_CHAR_ENCODING_8859_3",XML_CHAR_ENCODING_8859_3,12,48723);
CheckEnum("XML_CHAR_ENCODING_8859_4",XML_CHAR_ENCODING_8859_4,13,48724);
CheckEnum("XML_CHAR_ENCODING_8859_5",XML_CHAR_ENCODING_8859_5,14,48725);
CheckEnum("XML_CHAR_ENCODING_8859_6",XML_CHAR_ENCODING_8859_6,15,48726);
CheckEnum("XML_CHAR_ENCODING_8859_7",XML_CHAR_ENCODING_8859_7,16,48727);
CheckEnum("XML_CHAR_ENCODING_8859_8",XML_CHAR_ENCODING_8859_8,17,48728);
CheckEnum("XML_CHAR_ENCODING_8859_9",XML_CHAR_ENCODING_8859_9,18,48729);
CheckEnum("XML_CHAR_ENCODING_2022_JP",XML_CHAR_ENCODING_2022_JP,19,48730);
CheckEnum("XML_CHAR_ENCODING_SHIFT_JIS",XML_CHAR_ENCODING_SHIFT_JIS,20,48731);
CheckEnum("XML_CHAR_ENCODING_EUC_JP",XML_CHAR_ENCODING_EUC_JP,21,48732);
CheckEnum("XML_CHAR_ENCODING_ASCII",XML_CHAR_ENCODING_ASCII,22,48733);
#elif __powerpc__ && !__powerpc64__
CheckEnum("XML_CHAR_ENCODING_ERROR",XML_CHAR_ENCODING_ERROR,-1,48710);
CheckEnum("XML_CHAR_ENCODING_NONE",XML_CHAR_ENCODING_NONE,0,48711);
CheckEnum("XML_CHAR_ENCODING_UTF8",XML_CHAR_ENCODING_UTF8,1,48712);
CheckEnum("XML_CHAR_ENCODING_UTF16LE",XML_CHAR_ENCODING_UTF16LE,2,48713);
CheckEnum("XML_CHAR_ENCODING_UTF16BE",XML_CHAR_ENCODING_UTF16BE,3,48714);
CheckEnum("XML_CHAR_ENCODING_UCS4LE",XML_CHAR_ENCODING_UCS4LE,4,48715);
CheckEnum("XML_CHAR_ENCODING_UCS4BE",XML_CHAR_ENCODING_UCS4BE,5,48716);
CheckEnum("XML_CHAR_ENCODING_EBCDIC",XML_CHAR_ENCODING_EBCDIC,6,48717);
CheckEnum("XML_CHAR_ENCODING_UCS4_2143",XML_CHAR_ENCODING_UCS4_2143,7,48718);
CheckEnum("XML_CHAR_ENCODING_UCS4_3412",XML_CHAR_ENCODING_UCS4_3412,8,48719);
CheckEnum("XML_CHAR_ENCODING_UCS2",XML_CHAR_ENCODING_UCS2,9,48720);
CheckEnum("XML_CHAR_ENCODING_8859_1",XML_CHAR_ENCODING_8859_1,10,48721);
CheckEnum("XML_CHAR_ENCODING_8859_2",XML_CHAR_ENCODING_8859_2,11,48722);
CheckEnum("XML_CHAR_ENCODING_8859_3",XML_CHAR_ENCODING_8859_3,12,48723);
CheckEnum("XML_CHAR_ENCODING_8859_4",XML_CHAR_ENCODING_8859_4,13,48724);
CheckEnum("XML_CHAR_ENCODING_8859_5",XML_CHAR_ENCODING_8859_5,14,48725);
CheckEnum("XML_CHAR_ENCODING_8859_6",XML_CHAR_ENCODING_8859_6,15,48726);
CheckEnum("XML_CHAR_ENCODING_8859_7",XML_CHAR_ENCODING_8859_7,16,48727);
CheckEnum("XML_CHAR_ENCODING_8859_8",XML_CHAR_ENCODING_8859_8,17,48728);
CheckEnum("XML_CHAR_ENCODING_8859_9",XML_CHAR_ENCODING_8859_9,18,48729);
CheckEnum("XML_CHAR_ENCODING_2022_JP",XML_CHAR_ENCODING_2022_JP,19,48730);
CheckEnum("XML_CHAR_ENCODING_SHIFT_JIS",XML_CHAR_ENCODING_SHIFT_JIS,20,48731);
CheckEnum("XML_CHAR_ENCODING_EUC_JP",XML_CHAR_ENCODING_EUC_JP,21,48732);
CheckEnum("XML_CHAR_ENCODING_ASCII",XML_CHAR_ENCODING_ASCII,22,48733);
#elif __powerpc64__
CheckEnum("XML_CHAR_ENCODING_ERROR",XML_CHAR_ENCODING_ERROR,-1,48710);
CheckEnum("XML_CHAR_ENCODING_NONE",XML_CHAR_ENCODING_NONE,0,48711);
CheckEnum("XML_CHAR_ENCODING_UTF8",XML_CHAR_ENCODING_UTF8,1,48712);
CheckEnum("XML_CHAR_ENCODING_UTF16LE",XML_CHAR_ENCODING_UTF16LE,2,48713);
CheckEnum("XML_CHAR_ENCODING_UTF16BE",XML_CHAR_ENCODING_UTF16BE,3,48714);
CheckEnum("XML_CHAR_ENCODING_UCS4LE",XML_CHAR_ENCODING_UCS4LE,4,48715);
CheckEnum("XML_CHAR_ENCODING_UCS4BE",XML_CHAR_ENCODING_UCS4BE,5,48716);
CheckEnum("XML_CHAR_ENCODING_EBCDIC",XML_CHAR_ENCODING_EBCDIC,6,48717);
CheckEnum("XML_CHAR_ENCODING_UCS4_2143",XML_CHAR_ENCODING_UCS4_2143,7,48718);
CheckEnum("XML_CHAR_ENCODING_UCS4_3412",XML_CHAR_ENCODING_UCS4_3412,8,48719);
CheckEnum("XML_CHAR_ENCODING_UCS2",XML_CHAR_ENCODING_UCS2,9,48720);
CheckEnum("XML_CHAR_ENCODING_8859_1",XML_CHAR_ENCODING_8859_1,10,48721);
CheckEnum("XML_CHAR_ENCODING_8859_2",XML_CHAR_ENCODING_8859_2,11,48722);
CheckEnum("XML_CHAR_ENCODING_8859_3",XML_CHAR_ENCODING_8859_3,12,48723);
CheckEnum("XML_CHAR_ENCODING_8859_4",XML_CHAR_ENCODING_8859_4,13,48724);
CheckEnum("XML_CHAR_ENCODING_8859_5",XML_CHAR_ENCODING_8859_5,14,48725);
CheckEnum("XML_CHAR_ENCODING_8859_6",XML_CHAR_ENCODING_8859_6,15,48726);
CheckEnum("XML_CHAR_ENCODING_8859_7",XML_CHAR_ENCODING_8859_7,16,48727);
CheckEnum("XML_CHAR_ENCODING_8859_8",XML_CHAR_ENCODING_8859_8,17,48728);
CheckEnum("XML_CHAR_ENCODING_8859_9",XML_CHAR_ENCODING_8859_9,18,48729);
CheckEnum("XML_CHAR_ENCODING_2022_JP",XML_CHAR_ENCODING_2022_JP,19,48730);
CheckEnum("XML_CHAR_ENCODING_SHIFT_JIS",XML_CHAR_ENCODING_SHIFT_JIS,20,48731);
CheckEnum("XML_CHAR_ENCODING_EUC_JP",XML_CHAR_ENCODING_EUC_JP,21,48732);
CheckEnum("XML_CHAR_ENCODING_ASCII",XML_CHAR_ENCODING_ASCII,22,48733);
#elif __s390__ && !__s390x__
CheckEnum("XML_CHAR_ENCODING_ERROR",XML_CHAR_ENCODING_ERROR,-1,48710);
CheckEnum("XML_CHAR_ENCODING_NONE",XML_CHAR_ENCODING_NONE,0,48711);
CheckEnum("XML_CHAR_ENCODING_UTF8",XML_CHAR_ENCODING_UTF8,1,48712);
CheckEnum("XML_CHAR_ENCODING_UTF16LE",XML_CHAR_ENCODING_UTF16LE,2,48713);
CheckEnum("XML_CHAR_ENCODING_UTF16BE",XML_CHAR_ENCODING_UTF16BE,3,48714);
CheckEnum("XML_CHAR_ENCODING_UCS4LE",XML_CHAR_ENCODING_UCS4LE,4,48715);
CheckEnum("XML_CHAR_ENCODING_UCS4BE",XML_CHAR_ENCODING_UCS4BE,5,48716);
CheckEnum("XML_CHAR_ENCODING_EBCDIC",XML_CHAR_ENCODING_EBCDIC,6,48717);
CheckEnum("XML_CHAR_ENCODING_UCS4_2143",XML_CHAR_ENCODING_UCS4_2143,7,48718);
CheckEnum("XML_CHAR_ENCODING_UCS4_3412",XML_CHAR_ENCODING_UCS4_3412,8,48719);
CheckEnum("XML_CHAR_ENCODING_UCS2",XML_CHAR_ENCODING_UCS2,9,48720);
CheckEnum("XML_CHAR_ENCODING_8859_1",XML_CHAR_ENCODING_8859_1,10,48721);
CheckEnum("XML_CHAR_ENCODING_8859_2",XML_CHAR_ENCODING_8859_2,11,48722);
CheckEnum("XML_CHAR_ENCODING_8859_3",XML_CHAR_ENCODING_8859_3,12,48723);
CheckEnum("XML_CHAR_ENCODING_8859_4",XML_CHAR_ENCODING_8859_4,13,48724);
CheckEnum("XML_CHAR_ENCODING_8859_5",XML_CHAR_ENCODING_8859_5,14,48725);
CheckEnum("XML_CHAR_ENCODING_8859_6",XML_CHAR_ENCODING_8859_6,15,48726);
CheckEnum("XML_CHAR_ENCODING_8859_7",XML_CHAR_ENCODING_8859_7,16,48727);
CheckEnum("XML_CHAR_ENCODING_8859_8",XML_CHAR_ENCODING_8859_8,17,48728);
CheckEnum("XML_CHAR_ENCODING_8859_9",XML_CHAR_ENCODING_8859_9,18,48729);
CheckEnum("XML_CHAR_ENCODING_2022_JP",XML_CHAR_ENCODING_2022_JP,19,48730);
CheckEnum("XML_CHAR_ENCODING_SHIFT_JIS",XML_CHAR_ENCODING_SHIFT_JIS,20,48731);
CheckEnum("XML_CHAR_ENCODING_EUC_JP",XML_CHAR_ENCODING_EUC_JP,21,48732);
CheckEnum("XML_CHAR_ENCODING_ASCII",XML_CHAR_ENCODING_ASCII,22,48733);
#elif __s390x__
CheckEnum("XML_CHAR_ENCODING_ERROR",XML_CHAR_ENCODING_ERROR,-1,48710);
CheckEnum("XML_CHAR_ENCODING_NONE",XML_CHAR_ENCODING_NONE,0,48711);
CheckEnum("XML_CHAR_ENCODING_UTF8",XML_CHAR_ENCODING_UTF8,1,48712);
CheckEnum("XML_CHAR_ENCODING_UTF16LE",XML_CHAR_ENCODING_UTF16LE,2,48713);
CheckEnum("XML_CHAR_ENCODING_UTF16BE",XML_CHAR_ENCODING_UTF16BE,3,48714);
CheckEnum("XML_CHAR_ENCODING_UCS4LE",XML_CHAR_ENCODING_UCS4LE,4,48715);
CheckEnum("XML_CHAR_ENCODING_UCS4BE",XML_CHAR_ENCODING_UCS4BE,5,48716);
CheckEnum("XML_CHAR_ENCODING_EBCDIC",XML_CHAR_ENCODING_EBCDIC,6,48717);
CheckEnum("XML_CHAR_ENCODING_UCS4_2143",XML_CHAR_ENCODING_UCS4_2143,7,48718);
CheckEnum("XML_CHAR_ENCODING_UCS4_3412",XML_CHAR_ENCODING_UCS4_3412,8,48719);
CheckEnum("XML_CHAR_ENCODING_UCS2",XML_CHAR_ENCODING_UCS2,9,48720);
CheckEnum("XML_CHAR_ENCODING_8859_1",XML_CHAR_ENCODING_8859_1,10,48721);
CheckEnum("XML_CHAR_ENCODING_8859_2",XML_CHAR_ENCODING_8859_2,11,48722);
CheckEnum("XML_CHAR_ENCODING_8859_3",XML_CHAR_ENCODING_8859_3,12,48723);
CheckEnum("XML_CHAR_ENCODING_8859_4",XML_CHAR_ENCODING_8859_4,13,48724);
CheckEnum("XML_CHAR_ENCODING_8859_5",XML_CHAR_ENCODING_8859_5,14,48725);
CheckEnum("XML_CHAR_ENCODING_8859_6",XML_CHAR_ENCODING_8859_6,15,48726);
CheckEnum("XML_CHAR_ENCODING_8859_7",XML_CHAR_ENCODING_8859_7,16,48727);
CheckEnum("XML_CHAR_ENCODING_8859_8",XML_CHAR_ENCODING_8859_8,17,48728);
CheckEnum("XML_CHAR_ENCODING_8859_9",XML_CHAR_ENCODING_8859_9,18,48729);
CheckEnum("XML_CHAR_ENCODING_2022_JP",XML_CHAR_ENCODING_2022_JP,19,48730);
CheckEnum("XML_CHAR_ENCODING_SHIFT_JIS",XML_CHAR_ENCODING_SHIFT_JIS,20,48731);
CheckEnum("XML_CHAR_ENCODING_EUC_JP",XML_CHAR_ENCODING_EUC_JP,21,48732);
CheckEnum("XML_CHAR_ENCODING_ASCII",XML_CHAR_ENCODING_ASCII,22,48733);
#elif 1
CheckEnum("XML_CHAR_ENCODING_ERROR",XML_CHAR_ENCODING_ERROR,-1,48710);
CheckEnum("XML_CHAR_ENCODING_NONE",XML_CHAR_ENCODING_NONE,0,48711);
CheckEnum("XML_CHAR_ENCODING_UTF8",XML_CHAR_ENCODING_UTF8,1,48712);
CheckEnum("XML_CHAR_ENCODING_UTF16LE",XML_CHAR_ENCODING_UTF16LE,2,48713);
CheckEnum("XML_CHAR_ENCODING_UTF16BE",XML_CHAR_ENCODING_UTF16BE,3,48714);
CheckEnum("XML_CHAR_ENCODING_UCS4LE",XML_CHAR_ENCODING_UCS4LE,4,48715);
CheckEnum("XML_CHAR_ENCODING_UCS4BE",XML_CHAR_ENCODING_UCS4BE,5,48716);
CheckEnum("XML_CHAR_ENCODING_EBCDIC",XML_CHAR_ENCODING_EBCDIC,6,48717);
CheckEnum("XML_CHAR_ENCODING_UCS4_2143",XML_CHAR_ENCODING_UCS4_2143,7,48718);
CheckEnum("XML_CHAR_ENCODING_UCS4_3412",XML_CHAR_ENCODING_UCS4_3412,8,48719);
CheckEnum("XML_CHAR_ENCODING_UCS2",XML_CHAR_ENCODING_UCS2,9,48720);
CheckEnum("XML_CHAR_ENCODING_8859_1",XML_CHAR_ENCODING_8859_1,10,48721);
CheckEnum("XML_CHAR_ENCODING_8859_2",XML_CHAR_ENCODING_8859_2,11,48722);
CheckEnum("XML_CHAR_ENCODING_8859_3",XML_CHAR_ENCODING_8859_3,12,48723);
CheckEnum("XML_CHAR_ENCODING_8859_4",XML_CHAR_ENCODING_8859_4,13,48724);
CheckEnum("XML_CHAR_ENCODING_8859_5",XML_CHAR_ENCODING_8859_5,14,48725);
CheckEnum("XML_CHAR_ENCODING_8859_6",XML_CHAR_ENCODING_8859_6,15,48726);
CheckEnum("XML_CHAR_ENCODING_8859_7",XML_CHAR_ENCODING_8859_7,16,48727);
CheckEnum("XML_CHAR_ENCODING_8859_8",XML_CHAR_ENCODING_8859_8,17,48728);
CheckEnum("XML_CHAR_ENCODING_8859_9",XML_CHAR_ENCODING_8859_9,18,48729);
CheckEnum("XML_CHAR_ENCODING_2022_JP",XML_CHAR_ENCODING_2022_JP,19,48730);
CheckEnum("XML_CHAR_ENCODING_SHIFT_JIS",XML_CHAR_ENCODING_SHIFT_JIS,20,48731);
CheckEnum("XML_CHAR_ENCODING_EUC_JP",XML_CHAR_ENCODING_EUC_JP,21,48732);
CheckEnum("XML_CHAR_ENCODING_ASCII",XML_CHAR_ENCODING_ASCII,22,48733);
#endif

#if __i386__
CheckTypeSize(xmlCharEncoding,4, 14728, 2);
#elif __x86_64__
CheckTypeSize(xmlCharEncoding,4, 14728, 11);
#elif __ia64__
CheckTypeSize(xmlCharEncoding,4, 14728, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlCharEncoding,4, 14728, 6);
#elif __powerpc64__
CheckTypeSize(xmlCharEncoding,4, 14728, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(xmlCharEncoding,4, 14728, 10);
#elif __s390x__
CheckTypeSize(xmlCharEncoding,4, 14728, 12);
#elif 1
CheckTypeSize(xmlCharEncoding,0, 14728, 1);
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
