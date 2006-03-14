/*
 * Test of libxml2/libxml/HTMLparser.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include <libxml/xmlregexp.h>
#include "libxml2/libxml/HTMLparser.h"



#ifdef TET_TEST
void libxml2_libxml_HTMLparser_h()
{
#else
int libxml2_libxml_HTMLparser_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in libxml2/libxml/HTMLparser.h\n");
#endif

printf("Checking data structures in libxml2/libxml/HTMLparser.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for htmlDefaultSubelement(elt) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for htmlElementAllowedHereDesc(parent,elt) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for htmlRequiredAttrs(elt) */
#endif

#if __i386__
CheckEnum("HTML_NA",HTML_NA,0,49924);
CheckEnum("HTML_INVALID",HTML_INVALID,1,49925);
CheckEnum("HTML_DEPRECATED",HTML_DEPRECATED,2,49926);
CheckEnum("HTML_VALID",HTML_VALID,4,49927);
CheckEnum("HTML_REQUIRED",HTML_REQUIRED,12,49928);
#elif __x86_64__
CheckEnum("HTML_NA",HTML_NA,0,49924);
CheckEnum("HTML_INVALID",HTML_INVALID,1,49925);
CheckEnum("HTML_DEPRECATED",HTML_DEPRECATED,2,49926);
CheckEnum("HTML_VALID",HTML_VALID,4,49927);
CheckEnum("HTML_REQUIRED",HTML_REQUIRED,12,49928);
#elif __ia64__
CheckEnum("HTML_NA",HTML_NA,0,49924);
CheckEnum("HTML_INVALID",HTML_INVALID,1,49925);
CheckEnum("HTML_DEPRECATED",HTML_DEPRECATED,2,49926);
CheckEnum("HTML_VALID",HTML_VALID,4,49927);
CheckEnum("HTML_REQUIRED",HTML_REQUIRED,12,49928);
#elif __powerpc__ && !__powerpc64__
CheckEnum("HTML_NA",HTML_NA,0,49924);
CheckEnum("HTML_INVALID",HTML_INVALID,1,49925);
CheckEnum("HTML_DEPRECATED",HTML_DEPRECATED,2,49926);
CheckEnum("HTML_VALID",HTML_VALID,4,49927);
CheckEnum("HTML_REQUIRED",HTML_REQUIRED,12,49928);
#elif __powerpc64__
CheckEnum("HTML_NA",HTML_NA,0,49924);
CheckEnum("HTML_INVALID",HTML_INVALID,1,49925);
CheckEnum("HTML_DEPRECATED",HTML_DEPRECATED,2,49926);
CheckEnum("HTML_VALID",HTML_VALID,4,49927);
CheckEnum("HTML_REQUIRED",HTML_REQUIRED,12,49928);
#elif __s390__ && !__s390x__
CheckEnum("HTML_NA",HTML_NA,0,49924);
CheckEnum("HTML_INVALID",HTML_INVALID,1,49925);
CheckEnum("HTML_DEPRECATED",HTML_DEPRECATED,2,49926);
CheckEnum("HTML_VALID",HTML_VALID,4,49927);
CheckEnum("HTML_REQUIRED",HTML_REQUIRED,12,49928);
#elif __s390x__
CheckEnum("HTML_NA",HTML_NA,0,49924);
CheckEnum("HTML_INVALID",HTML_INVALID,1,49925);
CheckEnum("HTML_DEPRECATED",HTML_DEPRECATED,2,49926);
CheckEnum("HTML_VALID",HTML_VALID,4,49927);
CheckEnum("HTML_REQUIRED",HTML_REQUIRED,12,49928);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15002,0);
Msg("Find size of anon-libxml2/libxml/HTMLparser.h-103 (15002)\n");
#endif

#if __i386__
CheckTypeSize(htmlStatus,4, 15003, 2)
#elif __x86_64__
CheckTypeSize(htmlStatus,4, 15003, 11)
#elif __ia64__
CheckTypeSize(htmlStatus,4, 15003, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(htmlStatus,4, 15003, 6)
#elif __powerpc64__
CheckTypeSize(htmlStatus,4, 15003, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(htmlStatus,4, 15003, 10)
#elif __s390x__
CheckTypeSize(htmlStatus,4, 15003, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15003,0);
Msg("Find size of htmlStatus (15003)\n");
#endif

#if __i386__
CheckTypeSize(struct _htmlElemDesc,36, 15004, 2)
CheckMemberSize(struct _htmlElemDesc,startTag,1,2,49930)
CheckOffset(struct _htmlElemDesc,startTag,4,2,49930)
CheckMemberSize(struct _htmlElemDesc,endTag,1,2,49931)
CheckOffset(struct _htmlElemDesc,endTag,5,2,49931)
CheckMemberSize(struct _htmlElemDesc,saveEndTag,1,2,49932)
CheckOffset(struct _htmlElemDesc,saveEndTag,6,2,49932)
CheckMemberSize(struct _htmlElemDesc,empty,1,2,49933)
CheckOffset(struct _htmlElemDesc,empty,7,2,49933)
CheckMemberSize(struct _htmlElemDesc,depr,1,2,49934)
CheckOffset(struct _htmlElemDesc,depr,8,2,49934)
CheckMemberSize(struct _htmlElemDesc,dtd,1,2,49935)
CheckOffset(struct _htmlElemDesc,dtd,9,2,49935)
CheckMemberSize(struct _htmlElemDesc,isinline,1,2,49936)
CheckOffset(struct _htmlElemDesc,isinline,10,2,49936)
CheckMemberSize(struct _htmlElemDesc,desc,4,2,49937)
CheckOffset(struct _htmlElemDesc,desc,12,2,49937)
CheckMemberSize(struct _htmlElemDesc,subelts,4,2,49938)
CheckOffset(struct _htmlElemDesc,subelts,16,2,49938)
CheckMemberSize(struct _htmlElemDesc,defaultsubelt,4,2,49939)
CheckOffset(struct _htmlElemDesc,defaultsubelt,20,2,49939)
CheckMemberSize(struct _htmlElemDesc,attrs_opt,4,2,49940)
CheckOffset(struct _htmlElemDesc,attrs_opt,24,2,49940)
CheckMemberSize(struct _htmlElemDesc,attrs_depr,4,2,49941)
CheckOffset(struct _htmlElemDesc,attrs_depr,28,2,49941)
CheckMemberSize(struct _htmlElemDesc,attrs_req,4,2,49942)
CheckOffset(struct _htmlElemDesc,attrs_req,32,2,49942)
#elif __x86_64__
CheckTypeSize(struct _htmlElemDesc,64, 15004, 11)
CheckMemberSize(struct _htmlElemDesc,startTag,1,11,49930)
CheckOffset(struct _htmlElemDesc,startTag,8,11,49930)
CheckMemberSize(struct _htmlElemDesc,endTag,1,11,49931)
CheckOffset(struct _htmlElemDesc,endTag,9,11,49931)
CheckMemberSize(struct _htmlElemDesc,saveEndTag,1,11,49932)
CheckOffset(struct _htmlElemDesc,saveEndTag,10,11,49932)
CheckMemberSize(struct _htmlElemDesc,empty,1,11,49933)
CheckOffset(struct _htmlElemDesc,empty,11,11,49933)
CheckMemberSize(struct _htmlElemDesc,depr,1,11,49934)
CheckOffset(struct _htmlElemDesc,depr,12,11,49934)
CheckMemberSize(struct _htmlElemDesc,dtd,1,11,49935)
CheckOffset(struct _htmlElemDesc,dtd,13,11,49935)
CheckMemberSize(struct _htmlElemDesc,isinline,1,11,49936)
CheckOffset(struct _htmlElemDesc,isinline,14,11,49936)
CheckMemberSize(struct _htmlElemDesc,desc,8,11,49937)
CheckOffset(struct _htmlElemDesc,desc,16,11,49937)
CheckMemberSize(struct _htmlElemDesc,subelts,8,11,49938)
CheckOffset(struct _htmlElemDesc,subelts,24,11,49938)
CheckMemberSize(struct _htmlElemDesc,defaultsubelt,8,11,49939)
CheckOffset(struct _htmlElemDesc,defaultsubelt,32,11,49939)
CheckMemberSize(struct _htmlElemDesc,attrs_opt,8,11,49940)
CheckOffset(struct _htmlElemDesc,attrs_opt,40,11,49940)
CheckMemberSize(struct _htmlElemDesc,attrs_depr,8,11,49941)
CheckOffset(struct _htmlElemDesc,attrs_depr,48,11,49941)
CheckMemberSize(struct _htmlElemDesc,attrs_req,8,11,49942)
CheckOffset(struct _htmlElemDesc,attrs_req,56,11,49942)
#elif __ia64__
CheckTypeSize(struct _htmlElemDesc,64, 15004, 3)
CheckMemberSize(struct _htmlElemDesc,startTag,1,3,49930)
CheckOffset(struct _htmlElemDesc,startTag,8,3,49930)
CheckMemberSize(struct _htmlElemDesc,endTag,1,3,49931)
CheckOffset(struct _htmlElemDesc,endTag,9,3,49931)
CheckMemberSize(struct _htmlElemDesc,saveEndTag,1,3,49932)
CheckOffset(struct _htmlElemDesc,saveEndTag,10,3,49932)
CheckMemberSize(struct _htmlElemDesc,empty,1,3,49933)
CheckOffset(struct _htmlElemDesc,empty,11,3,49933)
CheckMemberSize(struct _htmlElemDesc,depr,1,3,49934)
CheckOffset(struct _htmlElemDesc,depr,12,3,49934)
CheckMemberSize(struct _htmlElemDesc,dtd,1,3,49935)
CheckOffset(struct _htmlElemDesc,dtd,13,3,49935)
CheckMemberSize(struct _htmlElemDesc,isinline,1,3,49936)
CheckOffset(struct _htmlElemDesc,isinline,14,3,49936)
CheckMemberSize(struct _htmlElemDesc,desc,8,3,49937)
CheckOffset(struct _htmlElemDesc,desc,16,3,49937)
CheckMemberSize(struct _htmlElemDesc,subelts,8,3,49938)
CheckOffset(struct _htmlElemDesc,subelts,24,3,49938)
CheckMemberSize(struct _htmlElemDesc,defaultsubelt,8,3,49939)
CheckOffset(struct _htmlElemDesc,defaultsubelt,32,3,49939)
CheckMemberSize(struct _htmlElemDesc,attrs_opt,8,3,49940)
CheckOffset(struct _htmlElemDesc,attrs_opt,40,3,49940)
CheckMemberSize(struct _htmlElemDesc,attrs_depr,8,3,49941)
CheckOffset(struct _htmlElemDesc,attrs_depr,48,3,49941)
CheckMemberSize(struct _htmlElemDesc,attrs_req,8,3,49942)
CheckOffset(struct _htmlElemDesc,attrs_req,56,3,49942)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _htmlElemDesc,36, 15004, 6)
CheckMemberSize(struct _htmlElemDesc,startTag,1,6,49930)
CheckOffset(struct _htmlElemDesc,startTag,4,6,49930)
CheckMemberSize(struct _htmlElemDesc,endTag,1,6,49931)
CheckOffset(struct _htmlElemDesc,endTag,5,6,49931)
CheckMemberSize(struct _htmlElemDesc,saveEndTag,1,6,49932)
CheckOffset(struct _htmlElemDesc,saveEndTag,6,6,49932)
CheckMemberSize(struct _htmlElemDesc,empty,1,6,49933)
CheckOffset(struct _htmlElemDesc,empty,7,6,49933)
CheckMemberSize(struct _htmlElemDesc,depr,1,6,49934)
CheckOffset(struct _htmlElemDesc,depr,8,6,49934)
CheckMemberSize(struct _htmlElemDesc,dtd,1,6,49935)
CheckOffset(struct _htmlElemDesc,dtd,9,6,49935)
CheckMemberSize(struct _htmlElemDesc,isinline,1,6,49936)
CheckOffset(struct _htmlElemDesc,isinline,10,6,49936)
CheckMemberSize(struct _htmlElemDesc,desc,4,6,49937)
CheckOffset(struct _htmlElemDesc,desc,12,6,49937)
CheckMemberSize(struct _htmlElemDesc,subelts,4,6,49938)
CheckOffset(struct _htmlElemDesc,subelts,16,6,49938)
CheckMemberSize(struct _htmlElemDesc,defaultsubelt,4,6,49939)
CheckOffset(struct _htmlElemDesc,defaultsubelt,20,6,49939)
CheckMemberSize(struct _htmlElemDesc,attrs_opt,4,6,49940)
CheckOffset(struct _htmlElemDesc,attrs_opt,24,6,49940)
CheckMemberSize(struct _htmlElemDesc,attrs_depr,4,6,49941)
CheckOffset(struct _htmlElemDesc,attrs_depr,28,6,49941)
CheckMemberSize(struct _htmlElemDesc,attrs_req,4,6,49942)
CheckOffset(struct _htmlElemDesc,attrs_req,32,6,49942)
#elif __powerpc64__
CheckTypeSize(struct _htmlElemDesc,64, 15004, 9)
CheckMemberSize(struct _htmlElemDesc,startTag,1,9,49930)
CheckOffset(struct _htmlElemDesc,startTag,8,9,49930)
CheckMemberSize(struct _htmlElemDesc,endTag,1,9,49931)
CheckOffset(struct _htmlElemDesc,endTag,9,9,49931)
CheckMemberSize(struct _htmlElemDesc,saveEndTag,1,9,49932)
CheckOffset(struct _htmlElemDesc,saveEndTag,10,9,49932)
CheckMemberSize(struct _htmlElemDesc,empty,1,9,49933)
CheckOffset(struct _htmlElemDesc,empty,11,9,49933)
CheckMemberSize(struct _htmlElemDesc,depr,1,9,49934)
CheckOffset(struct _htmlElemDesc,depr,12,9,49934)
CheckMemberSize(struct _htmlElemDesc,dtd,1,9,49935)
CheckOffset(struct _htmlElemDesc,dtd,13,9,49935)
CheckMemberSize(struct _htmlElemDesc,isinline,1,9,49936)
CheckOffset(struct _htmlElemDesc,isinline,14,9,49936)
CheckMemberSize(struct _htmlElemDesc,desc,8,9,49937)
CheckOffset(struct _htmlElemDesc,desc,16,9,49937)
CheckMemberSize(struct _htmlElemDesc,subelts,8,9,49938)
CheckOffset(struct _htmlElemDesc,subelts,24,9,49938)
CheckMemberSize(struct _htmlElemDesc,defaultsubelt,8,9,49939)
CheckOffset(struct _htmlElemDesc,defaultsubelt,32,9,49939)
CheckMemberSize(struct _htmlElemDesc,attrs_opt,8,9,49940)
CheckOffset(struct _htmlElemDesc,attrs_opt,40,9,49940)
CheckMemberSize(struct _htmlElemDesc,attrs_depr,8,9,49941)
CheckOffset(struct _htmlElemDesc,attrs_depr,48,9,49941)
CheckMemberSize(struct _htmlElemDesc,attrs_req,8,9,49942)
CheckOffset(struct _htmlElemDesc,attrs_req,56,9,49942)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _htmlElemDesc,36, 15004, 10)
CheckMemberSize(struct _htmlElemDesc,startTag,1,10,49930)
CheckOffset(struct _htmlElemDesc,startTag,4,10,49930)
CheckMemberSize(struct _htmlElemDesc,endTag,1,10,49931)
CheckOffset(struct _htmlElemDesc,endTag,5,10,49931)
CheckMemberSize(struct _htmlElemDesc,saveEndTag,1,10,49932)
CheckOffset(struct _htmlElemDesc,saveEndTag,6,10,49932)
CheckMemberSize(struct _htmlElemDesc,empty,1,10,49933)
CheckOffset(struct _htmlElemDesc,empty,7,10,49933)
CheckMemberSize(struct _htmlElemDesc,depr,1,10,49934)
CheckOffset(struct _htmlElemDesc,depr,8,10,49934)
CheckMemberSize(struct _htmlElemDesc,dtd,1,10,49935)
CheckOffset(struct _htmlElemDesc,dtd,9,10,49935)
CheckMemberSize(struct _htmlElemDesc,isinline,1,10,49936)
CheckOffset(struct _htmlElemDesc,isinline,10,10,49936)
CheckMemberSize(struct _htmlElemDesc,desc,4,10,49937)
CheckOffset(struct _htmlElemDesc,desc,12,10,49937)
CheckMemberSize(struct _htmlElemDesc,subelts,4,10,49938)
CheckOffset(struct _htmlElemDesc,subelts,16,10,49938)
CheckMemberSize(struct _htmlElemDesc,defaultsubelt,4,10,49939)
CheckOffset(struct _htmlElemDesc,defaultsubelt,20,10,49939)
CheckMemberSize(struct _htmlElemDesc,attrs_opt,4,10,49940)
CheckOffset(struct _htmlElemDesc,attrs_opt,24,10,49940)
CheckMemberSize(struct _htmlElemDesc,attrs_depr,4,10,49941)
CheckOffset(struct _htmlElemDesc,attrs_depr,28,10,49941)
CheckMemberSize(struct _htmlElemDesc,attrs_req,4,10,49942)
CheckOffset(struct _htmlElemDesc,attrs_req,32,10,49942)
#elif __s390x__
CheckTypeSize(struct _htmlElemDesc,64, 15004, 12)
CheckMemberSize(struct _htmlElemDesc,startTag,1,12,49930)
CheckOffset(struct _htmlElemDesc,startTag,8,12,49930)
CheckMemberSize(struct _htmlElemDesc,endTag,1,12,49931)
CheckOffset(struct _htmlElemDesc,endTag,9,12,49931)
CheckMemberSize(struct _htmlElemDesc,saveEndTag,1,12,49932)
CheckOffset(struct _htmlElemDesc,saveEndTag,10,12,49932)
CheckMemberSize(struct _htmlElemDesc,empty,1,12,49933)
CheckOffset(struct _htmlElemDesc,empty,11,12,49933)
CheckMemberSize(struct _htmlElemDesc,depr,1,12,49934)
CheckOffset(struct _htmlElemDesc,depr,12,12,49934)
CheckMemberSize(struct _htmlElemDesc,dtd,1,12,49935)
CheckOffset(struct _htmlElemDesc,dtd,13,12,49935)
CheckMemberSize(struct _htmlElemDesc,isinline,1,12,49936)
CheckOffset(struct _htmlElemDesc,isinline,14,12,49936)
CheckMemberSize(struct _htmlElemDesc,desc,8,12,49937)
CheckOffset(struct _htmlElemDesc,desc,16,12,49937)
CheckMemberSize(struct _htmlElemDesc,subelts,8,12,49938)
CheckOffset(struct _htmlElemDesc,subelts,24,12,49938)
CheckMemberSize(struct _htmlElemDesc,defaultsubelt,8,12,49939)
CheckOffset(struct _htmlElemDesc,defaultsubelt,32,12,49939)
CheckMemberSize(struct _htmlElemDesc,attrs_opt,8,12,49940)
CheckOffset(struct _htmlElemDesc,attrs_opt,40,12,49940)
CheckMemberSize(struct _htmlElemDesc,attrs_depr,8,12,49941)
CheckOffset(struct _htmlElemDesc,attrs_depr,48,12,49941)
CheckMemberSize(struct _htmlElemDesc,attrs_req,8,12,49942)
CheckOffset(struct _htmlElemDesc,attrs_req,56,12,49942)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15004,0);
Msg("Find size of _htmlElemDesc (15004)\n");
#endif

#if __i386__
CheckTypeSize(htmlElemDesc,36, 15005, 2)
#elif __x86_64__
CheckTypeSize(htmlElemDesc,64, 15005, 11)
#elif __ia64__
CheckTypeSize(htmlElemDesc,64, 15005, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(htmlElemDesc,36, 15005, 6)
#elif __powerpc64__
CheckTypeSize(htmlElemDesc,64, 15005, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(htmlElemDesc,36, 15005, 10)
#elif __s390x__
CheckTypeSize(htmlElemDesc,64, 15005, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15005,0);
Msg("Find size of htmlElemDesc (15005)\n");
#endif

#if __i386__
CheckTypeSize(const htmlElemDesc,36, 15006, 2)
#elif __x86_64__
CheckTypeSize(const htmlElemDesc,64, 15006, 11)
#elif __ia64__
CheckTypeSize(const htmlElemDesc,64, 15006, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(const htmlElemDesc,36, 15006, 6)
#elif __powerpc64__
CheckTypeSize(const htmlElemDesc,64, 15006, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(const htmlElemDesc,36, 15006, 10)
#elif __s390x__
CheckTypeSize(const htmlElemDesc,64, 15006, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15006,0);
Msg("Find size of const htmlElemDesc (15006)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15007,0);
Msg("Find size of const htmlElemDesc * (15007)\n");
#endif

#if __i386__
CheckTypeSize(htmlDocPtr,4, 15008, 2)
#elif __x86_64__
CheckTypeSize(htmlDocPtr,8, 15008, 11)
#elif __ia64__
CheckTypeSize(htmlDocPtr,8, 15008, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(htmlDocPtr,4, 15008, 6)
#elif __powerpc64__
CheckTypeSize(htmlDocPtr,8, 15008, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(htmlDocPtr,4, 15008, 10)
#elif __s390x__
CheckTypeSize(htmlDocPtr,8, 15008, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15008,0);
Msg("Find size of htmlDocPtr (15008)\n");
#endif

#if __i386__
CheckTypeSize(htmlSAXHandlerPtr,4, 15009, 2)
#elif __x86_64__
CheckTypeSize(htmlSAXHandlerPtr,8, 15009, 11)
#elif __ia64__
CheckTypeSize(htmlSAXHandlerPtr,8, 15009, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(htmlSAXHandlerPtr,4, 15009, 6)
#elif __powerpc64__
CheckTypeSize(htmlSAXHandlerPtr,8, 15009, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(htmlSAXHandlerPtr,4, 15009, 10)
#elif __s390x__
CheckTypeSize(htmlSAXHandlerPtr,8, 15009, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15009,0);
Msg("Find size of htmlSAXHandlerPtr (15009)\n");
#endif

#if __i386__
CheckTypeSize(htmlParserCtxtPtr,4, 15010, 2)
#elif __x86_64__
CheckTypeSize(htmlParserCtxtPtr,8, 15010, 11)
#elif __ia64__
CheckTypeSize(htmlParserCtxtPtr,8, 15010, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(htmlParserCtxtPtr,4, 15010, 6)
#elif __powerpc64__
CheckTypeSize(htmlParserCtxtPtr,8, 15010, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(htmlParserCtxtPtr,4, 15010, 10)
#elif __s390x__
CheckTypeSize(htmlParserCtxtPtr,8, 15010, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15010,0);
Msg("Find size of htmlParserCtxtPtr (15010)\n");
#endif

#if __i386__
CheckTypeSize(struct _htmlEntityDesc,12, 15011, 2)
CheckMemberSize(struct _htmlEntityDesc,name,4,2,49944)
CheckOffset(struct _htmlEntityDesc,name,4,2,49944)
CheckMemberSize(struct _htmlEntityDesc,desc,4,2,49945)
CheckOffset(struct _htmlEntityDesc,desc,8,2,49945)
#elif __x86_64__
CheckTypeSize(struct _htmlEntityDesc,24, 15011, 11)
CheckMemberSize(struct _htmlEntityDesc,name,8,11,49944)
CheckOffset(struct _htmlEntityDesc,name,8,11,49944)
CheckMemberSize(struct _htmlEntityDesc,desc,8,11,49945)
CheckOffset(struct _htmlEntityDesc,desc,16,11,49945)
#elif __ia64__
CheckTypeSize(struct _htmlEntityDesc,24, 15011, 3)
CheckMemberSize(struct _htmlEntityDesc,name,8,3,49944)
CheckOffset(struct _htmlEntityDesc,name,8,3,49944)
CheckMemberSize(struct _htmlEntityDesc,desc,8,3,49945)
CheckOffset(struct _htmlEntityDesc,desc,16,3,49945)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _htmlEntityDesc,12, 15011, 6)
CheckMemberSize(struct _htmlEntityDesc,name,4,6,49944)
CheckOffset(struct _htmlEntityDesc,name,4,6,49944)
CheckMemberSize(struct _htmlEntityDesc,desc,4,6,49945)
CheckOffset(struct _htmlEntityDesc,desc,8,6,49945)
#elif __powerpc64__
CheckTypeSize(struct _htmlEntityDesc,24, 15011, 9)
CheckMemberSize(struct _htmlEntityDesc,name,8,9,49944)
CheckOffset(struct _htmlEntityDesc,name,8,9,49944)
CheckMemberSize(struct _htmlEntityDesc,desc,8,9,49945)
CheckOffset(struct _htmlEntityDesc,desc,16,9,49945)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _htmlEntityDesc,12, 15011, 10)
CheckMemberSize(struct _htmlEntityDesc,name,4,10,49944)
CheckOffset(struct _htmlEntityDesc,name,4,10,49944)
CheckMemberSize(struct _htmlEntityDesc,desc,4,10,49945)
CheckOffset(struct _htmlEntityDesc,desc,8,10,49945)
#elif __s390x__
CheckTypeSize(struct _htmlEntityDesc,24, 15011, 12)
CheckMemberSize(struct _htmlEntityDesc,name,8,12,49944)
CheckOffset(struct _htmlEntityDesc,name,8,12,49944)
CheckMemberSize(struct _htmlEntityDesc,desc,8,12,49945)
CheckOffset(struct _htmlEntityDesc,desc,16,12,49945)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15011,0);
Msg("Find size of _htmlEntityDesc (15011)\n");
#endif

#if __i386__
CheckTypeSize(htmlEntityDesc,12, 15012, 2)
#elif __x86_64__
CheckTypeSize(htmlEntityDesc,24, 15012, 11)
#elif __ia64__
CheckTypeSize(htmlEntityDesc,24, 15012, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(htmlEntityDesc,12, 15012, 6)
#elif __powerpc64__
CheckTypeSize(htmlEntityDesc,24, 15012, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(htmlEntityDesc,12, 15012, 10)
#elif __s390x__
CheckTypeSize(htmlEntityDesc,24, 15012, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15012,0);
Msg("Find size of htmlEntityDesc (15012)\n");
#endif

#if __i386__
CheckTypeSize(const htmlEntityDesc,12, 15013, 2)
#elif __x86_64__
CheckTypeSize(const htmlEntityDesc,24, 15013, 11)
#elif __ia64__
CheckTypeSize(const htmlEntityDesc,24, 15013, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(const htmlEntityDesc,12, 15013, 6)
#elif __powerpc64__
CheckTypeSize(const htmlEntityDesc,24, 15013, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(const htmlEntityDesc,12, 15013, 10)
#elif __s390x__
CheckTypeSize(const htmlEntityDesc,24, 15013, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15013,0);
Msg("Find size of const htmlEntityDesc (15013)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15014,0);
Msg("Find size of const htmlEntityDesc * (15014)\n");
#endif

#if __i386__
CheckTypeSize(htmlNodePtr,4, 15015, 2)
#elif __x86_64__
CheckTypeSize(htmlNodePtr,8, 15015, 11)
#elif __ia64__
CheckTypeSize(htmlNodePtr,8, 15015, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(htmlNodePtr,4, 15015, 6)
#elif __powerpc64__
CheckTypeSize(htmlNodePtr,8, 15015, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(htmlNodePtr,4, 15015, 10)
#elif __s390x__
CheckTypeSize(htmlNodePtr,8, 15015, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15015,0);
Msg("Find size of htmlNodePtr (15015)\n");
#endif

#if __i386__
CheckEnum("HTML_PARSE_RECOVER",HTML_PARSE_RECOVER,1<<0,50122);
CheckEnum("HTML_PARSE_NOERROR",HTML_PARSE_NOERROR,1<<5,50123);
CheckEnum("HTML_PARSE_NOWARNING",HTML_PARSE_NOWARNING,1<<6,50124);
CheckEnum("HTML_PARSE_PEDANTIC",HTML_PARSE_PEDANTIC,1<<7,50125);
CheckEnum("HTML_PARSE_NOBLANKS",HTML_PARSE_NOBLANKS,1<<8,50126);
CheckEnum("HTML_PARSE_NONET",HTML_PARSE_NONET,1<<11,50127);
CheckEnum("HTML_PARSE_COMPACT",HTML_PARSE_COMPACT,1<<16,50128);
#elif __x86_64__
CheckEnum("HTML_PARSE_RECOVER",HTML_PARSE_RECOVER,1<<0,50122);
CheckEnum("HTML_PARSE_NOERROR",HTML_PARSE_NOERROR,1<<5,50123);
CheckEnum("HTML_PARSE_NOWARNING",HTML_PARSE_NOWARNING,1<<6,50124);
CheckEnum("HTML_PARSE_PEDANTIC",HTML_PARSE_PEDANTIC,1<<7,50125);
CheckEnum("HTML_PARSE_NOBLANKS",HTML_PARSE_NOBLANKS,1<<8,50126);
CheckEnum("HTML_PARSE_NONET",HTML_PARSE_NONET,1<<11,50127);
CheckEnum("HTML_PARSE_COMPACT",HTML_PARSE_COMPACT,1<<16,50128);
#elif __ia64__
CheckEnum("HTML_PARSE_RECOVER",HTML_PARSE_RECOVER,1<<0,50122);
CheckEnum("HTML_PARSE_NOERROR",HTML_PARSE_NOERROR,1<<5,50123);
CheckEnum("HTML_PARSE_NOWARNING",HTML_PARSE_NOWARNING,1<<6,50124);
CheckEnum("HTML_PARSE_PEDANTIC",HTML_PARSE_PEDANTIC,1<<7,50125);
CheckEnum("HTML_PARSE_NOBLANKS",HTML_PARSE_NOBLANKS,1<<8,50126);
CheckEnum("HTML_PARSE_NONET",HTML_PARSE_NONET,1<<11,50127);
CheckEnum("HTML_PARSE_COMPACT",HTML_PARSE_COMPACT,1<<16,50128);
#elif __powerpc__ && !__powerpc64__
CheckEnum("HTML_PARSE_RECOVER",HTML_PARSE_RECOVER,1<<0,50122);
CheckEnum("HTML_PARSE_NOERROR",HTML_PARSE_NOERROR,1<<5,50123);
CheckEnum("HTML_PARSE_NOWARNING",HTML_PARSE_NOWARNING,1<<6,50124);
CheckEnum("HTML_PARSE_PEDANTIC",HTML_PARSE_PEDANTIC,1<<7,50125);
CheckEnum("HTML_PARSE_NOBLANKS",HTML_PARSE_NOBLANKS,1<<8,50126);
CheckEnum("HTML_PARSE_NONET",HTML_PARSE_NONET,1<<11,50127);
CheckEnum("HTML_PARSE_COMPACT",HTML_PARSE_COMPACT,1<<16,50128);
#elif __powerpc64__
CheckEnum("HTML_PARSE_RECOVER",HTML_PARSE_RECOVER,1<<0,50122);
CheckEnum("HTML_PARSE_NOERROR",HTML_PARSE_NOERROR,1<<5,50123);
CheckEnum("HTML_PARSE_NOWARNING",HTML_PARSE_NOWARNING,1<<6,50124);
CheckEnum("HTML_PARSE_PEDANTIC",HTML_PARSE_PEDANTIC,1<<7,50125);
CheckEnum("HTML_PARSE_NOBLANKS",HTML_PARSE_NOBLANKS,1<<8,50126);
CheckEnum("HTML_PARSE_NONET",HTML_PARSE_NONET,1<<11,50127);
CheckEnum("HTML_PARSE_COMPACT",HTML_PARSE_COMPACT,1<<16,50128);
#elif __s390__ && !__s390x__
CheckEnum("HTML_PARSE_RECOVER",HTML_PARSE_RECOVER,1<<0,50122);
CheckEnum("HTML_PARSE_NOERROR",HTML_PARSE_NOERROR,1<<5,50123);
CheckEnum("HTML_PARSE_NOWARNING",HTML_PARSE_NOWARNING,1<<6,50124);
CheckEnum("HTML_PARSE_PEDANTIC",HTML_PARSE_PEDANTIC,1<<7,50125);
CheckEnum("HTML_PARSE_NOBLANKS",HTML_PARSE_NOBLANKS,1<<8,50126);
CheckEnum("HTML_PARSE_NONET",HTML_PARSE_NONET,1<<11,50127);
CheckEnum("HTML_PARSE_COMPACT",HTML_PARSE_COMPACT,1<<16,50128);
#elif __s390x__
CheckEnum("HTML_PARSE_RECOVER",HTML_PARSE_RECOVER,1<<0,50122);
CheckEnum("HTML_PARSE_NOERROR",HTML_PARSE_NOERROR,1<<5,50123);
CheckEnum("HTML_PARSE_NOWARNING",HTML_PARSE_NOWARNING,1<<6,50124);
CheckEnum("HTML_PARSE_PEDANTIC",HTML_PARSE_PEDANTIC,1<<7,50125);
CheckEnum("HTML_PARSE_NOBLANKS",HTML_PARSE_NOBLANKS,1<<8,50126);
CheckEnum("HTML_PARSE_NONET",HTML_PARSE_NONET,1<<11,50127);
CheckEnum("HTML_PARSE_COMPACT",HTML_PARSE_COMPACT,1<<16,50128);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15109,0);
Msg("Find size of anonymous-HTMLparser.h.types-0 (15109)\n");
#endif

#if __i386__
CheckTypeSize(htmlParserOption,4, 15110, 2)
#elif __x86_64__
CheckTypeSize(htmlParserOption,4, 15110, 11)
#elif __ia64__
CheckTypeSize(htmlParserOption,4, 15110, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(htmlParserOption,4, 15110, 6)
#elif __powerpc64__
CheckTypeSize(htmlParserOption,4, 15110, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(htmlParserOption,4, 15110, 10)
#elif __s390x__
CheckTypeSize(htmlParserOption,4, 15110, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15110,0);
Msg("Find size of htmlParserOption (15110)\n");
#endif

#if __i386__
CheckTypeSize(htmlParserInputPtr,4, 15111, 2)
#elif __ia64__
CheckTypeSize(htmlParserInputPtr,8, 15111, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(htmlParserInputPtr,4, 15111, 6)
#elif __powerpc64__
CheckTypeSize(htmlParserInputPtr,8, 15111, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(htmlParserInputPtr,4, 15111, 10)
#elif __s390x__
CheckTypeSize(htmlParserInputPtr,8, 15111, 12)
#elif __x86_64__
CheckTypeSize(htmlParserInputPtr,8, 15111, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15111,0);
Msg("Find size of htmlParserInputPtr (15111)\n");
#endif

#if __i386__
CheckTypeSize(htmlElemDesc *,4, 15112, 2)
#elif __ia64__
CheckTypeSize(htmlElemDesc *,8, 15112, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(htmlElemDesc *,4, 15112, 6)
#elif __powerpc64__
CheckTypeSize(htmlElemDesc *,8, 15112, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(htmlElemDesc *,4, 15112, 10)
#elif __s390x__
CheckTypeSize(htmlElemDesc *,8, 15112, 12)
#elif __x86_64__
CheckTypeSize(htmlElemDesc *,8, 15112, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15112,0);
Msg("Find size of htmlElemDesc * (15112)\n");
#endif

#if __i386__
CheckTypeSize(htmlElemDescPtr,4, 15113, 2)
#elif __ia64__
CheckTypeSize(htmlElemDescPtr,8, 15113, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(htmlElemDescPtr,4, 15113, 6)
#elif __powerpc64__
CheckTypeSize(htmlElemDescPtr,8, 15113, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(htmlElemDescPtr,4, 15113, 10)
#elif __s390x__
CheckTypeSize(htmlElemDescPtr,8, 15113, 12)
#elif __x86_64__
CheckTypeSize(htmlElemDescPtr,8, 15113, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15113,0);
Msg("Find size of htmlElemDescPtr (15113)\n");
#endif

#if __i386__
CheckTypeSize(htmlEntityDesc *,4, 15114, 2)
#elif __ia64__
CheckTypeSize(htmlEntityDesc *,8, 15114, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(htmlEntityDesc *,4, 15114, 6)
#elif __powerpc64__
CheckTypeSize(htmlEntityDesc *,8, 15114, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(htmlEntityDesc *,4, 15114, 10)
#elif __s390x__
CheckTypeSize(htmlEntityDesc *,8, 15114, 12)
#elif __x86_64__
CheckTypeSize(htmlEntityDesc *,8, 15114, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15114,0);
Msg("Find size of htmlEntityDesc * (15114)\n");
#endif

#if __i386__
CheckTypeSize(htmlEntityDescPtr,4, 15115, 2)
#elif __ia64__
CheckTypeSize(htmlEntityDescPtr,8, 15115, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(htmlEntityDescPtr,4, 15115, 6)
#elif __powerpc64__
CheckTypeSize(htmlEntityDescPtr,8, 15115, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(htmlEntityDescPtr,4, 15115, 10)
#elif __s390x__
CheckTypeSize(htmlEntityDescPtr,8, 15115, 12)
#elif __x86_64__
CheckTypeSize(htmlEntityDescPtr,8, 15115, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15115,0);
Msg("Find size of htmlEntityDescPtr (15115)\n");
#endif

#if __i386__
CheckTypeSize(htmlParserInput,60, 15116, 2)
#elif __ia64__
CheckTypeSize(htmlParserInput,104, 15116, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(htmlParserInput,60, 15116, 6)
#elif __powerpc64__
CheckTypeSize(htmlParserInput,104, 15116, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(htmlParserInput,60, 15116, 10)
#elif __s390x__
CheckTypeSize(htmlParserInput,104, 15116, 12)
#elif __x86_64__
CheckTypeSize(htmlParserInput,104, 15116, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15116,0);
Msg("Find size of htmlParserInput (15116)\n");
#endif

extern htmlStatus htmlElementStatusHere_db(const htmlElemDesc *, const htmlElemDesc *);
CheckInterfacedef(htmlElementStatusHere,htmlElementStatusHere_db);
extern htmlDocPtr htmlParseDoc_db(xmlChar *, const char *);
CheckInterfacedef(htmlParseDoc,htmlParseDoc_db);
extern htmlDocPtr htmlSAXParseDoc_db(xmlChar *, const char *, htmlSAXHandlerPtr, void *);
CheckInterfacedef(htmlSAXParseDoc,htmlSAXParseDoc_db);
extern htmlDocPtr htmlCtxtReadDoc_db(htmlParserCtxtPtr, const xmlChar *, const char *, const char *, int);
CheckInterfacedef(htmlCtxtReadDoc,htmlCtxtReadDoc_db);
extern htmlDocPtr htmlReadIO_db(xmlInputReadCallback, xmlInputCloseCallback, void *, const char *, const char *, int);
CheckInterfacedef(htmlReadIO,htmlReadIO_db);
extern htmlDocPtr htmlCtxtReadIO_db(htmlParserCtxtPtr, xmlInputReadCallback, xmlInputCloseCallback, void *, const char *, const char *, int);
CheckInterfacedef(htmlCtxtReadIO,htmlCtxtReadIO_db);
extern int htmlHandleOmittedElem_db(int);
CheckInterfacedef(htmlHandleOmittedElem,htmlHandleOmittedElem_db);
extern htmlDocPtr htmlReadMemory_db(const char *, int, const char *, const char *, int);
CheckInterfacedef(htmlReadMemory,htmlReadMemory_db);
extern htmlDocPtr htmlCtxtReadMemory_db(htmlParserCtxtPtr, const char *, int, const char *, const char *, int);
CheckInterfacedef(htmlCtxtReadMemory,htmlCtxtReadMemory_db);
extern void htmlParseElement_db(htmlParserCtxtPtr);
CheckInterfacedef(htmlParseElement,htmlParseElement_db);
extern const htmlEntityDesc * htmlEntityValueLookup_db(unsigned int);
CheckInterfacedef(htmlEntityValueLookup,htmlEntityValueLookup_db);
extern int htmlEncodeEntities_db(unsigned char *, int *, const unsigned char *, int *, int);
CheckInterfacedef(htmlEncodeEntities,htmlEncodeEntities_db);
extern htmlDocPtr htmlParseFile_db(const char *, const char *);
CheckInterfacedef(htmlParseFile,htmlParseFile_db);
extern htmlDocPtr htmlSAXParseFile_db(const char *, const char *, htmlSAXHandlerPtr, void *);
CheckInterfacedef(htmlSAXParseFile,htmlSAXParseFile_db);
extern int htmlIsAutoClosed_db(htmlDocPtr, htmlNodePtr);
CheckInterfacedef(htmlIsAutoClosed,htmlIsAutoClosed_db);
extern htmlParserCtxtPtr htmlCreatePushParserCtxt_db(htmlSAXHandlerPtr, void *, const char *, int, const char *, xmlCharEncoding);
CheckInterfacedef(htmlCreatePushParserCtxt,htmlCreatePushParserCtxt_db);
extern int htmlIsScriptAttribute_db(const xmlChar *);
CheckInterfacedef(htmlIsScriptAttribute,htmlIsScriptAttribute_db);
extern int UTF8ToHtml_db(unsigned char *, int *, const unsigned char *, int *);
CheckInterfacedef(UTF8ToHtml,UTF8ToHtml_db);
extern int htmlElementAllowedHere_db(const htmlElemDesc *, const xmlChar *);
CheckInterfacedef(htmlElementAllowedHere,htmlElementAllowedHere_db);
extern int htmlParseCharRef_db(htmlParserCtxtPtr);
CheckInterfacedef(htmlParseCharRef,htmlParseCharRef_db);
extern int htmlCtxtUseOptions_db(htmlParserCtxtPtr, int);
CheckInterfacedef(htmlCtxtUseOptions,htmlCtxtUseOptions_db);
extern int htmlParseChunk_db(htmlParserCtxtPtr, const char *, int, int);
CheckInterfacedef(htmlParseChunk,htmlParseChunk_db);
extern htmlDocPtr htmlReadFd_db(int, const char *, const char *, int);
CheckInterfacedef(htmlReadFd,htmlReadFd_db);
extern void htmlCtxtReset_db(htmlParserCtxtPtr);
CheckInterfacedef(htmlCtxtReset,htmlCtxtReset_db);
extern htmlDocPtr htmlCtxtReadFile_db(htmlParserCtxtPtr, const char *, const char *, int);
CheckInterfacedef(htmlCtxtReadFile,htmlCtxtReadFile_db);
extern const htmlEntityDesc * htmlEntityLookup_db(const xmlChar *);
CheckInterfacedef(htmlEntityLookup,htmlEntityLookup_db);
extern htmlDocPtr htmlCtxtReadFd_db(htmlParserCtxtPtr, int, const char *, const char *, int);
CheckInterfacedef(htmlCtxtReadFd,htmlCtxtReadFd_db);
extern const htmlElemDesc * htmlTagLookup_db(const xmlChar *);
CheckInterfacedef(htmlTagLookup,htmlTagLookup_db);
extern void htmlFreeParserCtxt_db(htmlParserCtxtPtr);
CheckInterfacedef(htmlFreeParserCtxt,htmlFreeParserCtxt_db);
extern int htmlAutoCloseTag_db(htmlDocPtr, const xmlChar *, htmlNodePtr);
CheckInterfacedef(htmlAutoCloseTag,htmlAutoCloseTag_db);
extern htmlParserCtxtPtr htmlCreateMemoryParserCtxt_db(const char *, int);
CheckInterfacedef(htmlCreateMemoryParserCtxt,htmlCreateMemoryParserCtxt_db);
extern htmlDocPtr htmlReadFile_db(const char *, const char *, int);
CheckInterfacedef(htmlReadFile,htmlReadFile_db);
extern htmlDocPtr htmlReadDoc_db(const xmlChar *, const char *, const char *, int);
CheckInterfacedef(htmlReadDoc,htmlReadDoc_db);
extern const htmlEntityDesc * htmlParseEntityRef_db(htmlParserCtxtPtr, const xmlChar * *);
CheckInterfacedef(htmlParseEntityRef,htmlParseEntityRef_db);
extern int htmlParseDocument_db(htmlParserCtxtPtr);
CheckInterfacedef(htmlParseDocument,htmlParseDocument_db);
extern htmlStatus htmlAttrAllowed_db(const htmlElemDesc *, const xmlChar *, int);
CheckInterfacedef(htmlAttrAllowed,htmlAttrAllowed_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in libxml2/libxml/HTMLparser.h\n\n",pcnt,cnt);
return cnt;
#endif

}
