/*
 * Test of libxml2/libxml/SAX2.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include <libxml/xmlregexp.h>
#include "libxml2/libxml/SAX2.h"



#ifdef TET_TEST
void libxml2_libxml_SAX2_h()
{
#else
int libxml2_libxml_SAX2_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in libxml2/libxml/SAX2.h\n");
#endif

printf("Checking data structures in libxml2/libxml/SAX2.h\n");
#if __i386__
CheckTypeSize(struct _xmlSAXHandler,128, 14740, 2)
CheckMemberSize(struct _xmlSAXHandler,isStandalone,4,2,48751)
CheckOffset(struct _xmlSAXHandler,isStandalone,4,2,48751)
CheckMemberSize(struct _xmlSAXHandler,hasInternalSubset,4,2,48752)
CheckOffset(struct _xmlSAXHandler,hasInternalSubset,8,2,48752)
CheckMemberSize(struct _xmlSAXHandler,hasExternalSubset,4,2,48753)
CheckOffset(struct _xmlSAXHandler,hasExternalSubset,12,2,48753)
CheckMemberSize(struct _xmlSAXHandler,resolveEntity,4,2,48757)
CheckOffset(struct _xmlSAXHandler,resolveEntity,16,2,48757)
CheckMemberSize(struct _xmlSAXHandler,getEntity,4,2,48760)
CheckOffset(struct _xmlSAXHandler,getEntity,20,2,48760)
CheckMemberSize(struct _xmlSAXHandler,entityDecl,4,2,48767)
CheckOffset(struct _xmlSAXHandler,entityDecl,24,2,48767)
CheckMemberSize(struct _xmlSAXHandler,notationDecl,4,2,48768)
CheckOffset(struct _xmlSAXHandler,notationDecl,28,2,48768)
CheckMemberSize(struct _xmlSAXHandler,attributeDecl,4,2,48778)
CheckOffset(struct _xmlSAXHandler,attributeDecl,32,2,48778)
CheckMemberSize(struct _xmlSAXHandler,elementDecl,4,2,48798)
CheckOffset(struct _xmlSAXHandler,elementDecl,36,2,48798)
CheckMemberSize(struct _xmlSAXHandler,unparsedEntityDecl,4,2,48804)
CheckOffset(struct _xmlSAXHandler,unparsedEntityDecl,40,2,48804)
CheckMemberSize(struct _xmlSAXHandler,setDocumentLocator,4,2,48812)
CheckOffset(struct _xmlSAXHandler,setDocumentLocator,44,2,48812)
CheckMemberSize(struct _xmlSAXHandler,startDocument,4,2,48813)
CheckOffset(struct _xmlSAXHandler,startDocument,48,2,48813)
CheckMemberSize(struct _xmlSAXHandler,endDocument,4,2,48814)
CheckOffset(struct _xmlSAXHandler,endDocument,52,2,48814)
CheckMemberSize(struct _xmlSAXHandler,startElement,4,2,48818)
CheckOffset(struct _xmlSAXHandler,startElement,56,2,48818)
CheckMemberSize(struct _xmlSAXHandler,endElement,4,2,48821)
CheckOffset(struct _xmlSAXHandler,endElement,60,2,48821)
CheckMemberSize(struct _xmlSAXHandler,reference,4,2,48822)
CheckOffset(struct _xmlSAXHandler,reference,64,2,48822)
CheckMemberSize(struct _xmlSAXHandler,characters,4,2,48826)
CheckOffset(struct _xmlSAXHandler,characters,68,2,48826)
CheckMemberSize(struct _xmlSAXHandler,ignorableWhitespace,4,2,48827)
CheckOffset(struct _xmlSAXHandler,ignorableWhitespace,72,2,48827)
CheckMemberSize(struct _xmlSAXHandler,processingInstruction,4,2,48831)
CheckOffset(struct _xmlSAXHandler,processingInstruction,76,2,48831)
CheckMemberSize(struct _xmlSAXHandler,comment,4,2,48832)
CheckOffset(struct _xmlSAXHandler,comment,80,2,48832)
CheckMemberSize(struct _xmlSAXHandler,warning,4,2,48833)
CheckOffset(struct _xmlSAXHandler,warning,84,2,48833)
CheckMemberSize(struct _xmlSAXHandler,error,4,2,48834)
CheckOffset(struct _xmlSAXHandler,error,88,2,48834)
CheckMemberSize(struct _xmlSAXHandler,fatalError,4,2,48835)
CheckOffset(struct _xmlSAXHandler,fatalError,92,2,48835)
CheckMemberSize(struct _xmlSAXHandler,getParameterEntity,4,2,48836)
CheckOffset(struct _xmlSAXHandler,getParameterEntity,96,2,48836)
CheckMemberSize(struct _xmlSAXHandler,cdataBlock,4,2,48837)
CheckOffset(struct _xmlSAXHandler,cdataBlock,100,2,48837)
CheckMemberSize(struct _xmlSAXHandler,externalSubset,4,2,48838)
CheckOffset(struct _xmlSAXHandler,externalSubset,104,2,48838)
CheckMemberSize(struct _xmlSAXHandler,initialized,4,2,48839)
CheckOffset(struct _xmlSAXHandler,initialized,108,2,48839)
CheckMemberSize(struct _xmlSAXHandler,_private,4,2,48840)
CheckOffset(struct _xmlSAXHandler,_private,112,2,48840)
CheckMemberSize(struct _xmlSAXHandler,startElementNs,4,2,48850)
CheckOffset(struct _xmlSAXHandler,startElementNs,116,2,48850)
CheckMemberSize(struct _xmlSAXHandler,endElementNs,4,2,48851)
CheckOffset(struct _xmlSAXHandler,endElementNs,120,2,48851)
CheckMemberSize(struct _xmlSAXHandler,serror,4,2,48852)
CheckOffset(struct _xmlSAXHandler,serror,124,2,48852)
#elif __x86_64__
CheckTypeSize(struct _xmlSAXHandler,256, 14740, 11)
CheckMemberSize(struct _xmlSAXHandler,isStandalone,8,11,48751)
CheckOffset(struct _xmlSAXHandler,isStandalone,8,11,48751)
CheckMemberSize(struct _xmlSAXHandler,hasInternalSubset,8,11,48752)
CheckOffset(struct _xmlSAXHandler,hasInternalSubset,16,11,48752)
CheckMemberSize(struct _xmlSAXHandler,hasExternalSubset,8,11,48753)
CheckOffset(struct _xmlSAXHandler,hasExternalSubset,24,11,48753)
CheckMemberSize(struct _xmlSAXHandler,resolveEntity,8,11,48757)
CheckOffset(struct _xmlSAXHandler,resolveEntity,32,11,48757)
CheckMemberSize(struct _xmlSAXHandler,getEntity,8,11,48760)
CheckOffset(struct _xmlSAXHandler,getEntity,40,11,48760)
CheckMemberSize(struct _xmlSAXHandler,entityDecl,8,11,48767)
CheckOffset(struct _xmlSAXHandler,entityDecl,48,11,48767)
CheckMemberSize(struct _xmlSAXHandler,notationDecl,8,11,48768)
CheckOffset(struct _xmlSAXHandler,notationDecl,56,11,48768)
CheckMemberSize(struct _xmlSAXHandler,attributeDecl,8,11,48778)
CheckOffset(struct _xmlSAXHandler,attributeDecl,64,11,48778)
CheckMemberSize(struct _xmlSAXHandler,elementDecl,8,11,48798)
CheckOffset(struct _xmlSAXHandler,elementDecl,72,11,48798)
CheckMemberSize(struct _xmlSAXHandler,unparsedEntityDecl,8,11,48804)
CheckOffset(struct _xmlSAXHandler,unparsedEntityDecl,80,11,48804)
CheckMemberSize(struct _xmlSAXHandler,setDocumentLocator,8,11,48812)
CheckOffset(struct _xmlSAXHandler,setDocumentLocator,88,11,48812)
CheckMemberSize(struct _xmlSAXHandler,startDocument,8,11,48813)
CheckOffset(struct _xmlSAXHandler,startDocument,96,11,48813)
CheckMemberSize(struct _xmlSAXHandler,endDocument,8,11,48814)
CheckOffset(struct _xmlSAXHandler,endDocument,104,11,48814)
CheckMemberSize(struct _xmlSAXHandler,startElement,8,11,48818)
CheckOffset(struct _xmlSAXHandler,startElement,112,11,48818)
CheckMemberSize(struct _xmlSAXHandler,endElement,8,11,48821)
CheckOffset(struct _xmlSAXHandler,endElement,120,11,48821)
CheckMemberSize(struct _xmlSAXHandler,reference,8,11,48822)
CheckOffset(struct _xmlSAXHandler,reference,128,11,48822)
CheckMemberSize(struct _xmlSAXHandler,characters,8,11,48826)
CheckOffset(struct _xmlSAXHandler,characters,136,11,48826)
CheckMemberSize(struct _xmlSAXHandler,ignorableWhitespace,8,11,48827)
CheckOffset(struct _xmlSAXHandler,ignorableWhitespace,144,11,48827)
CheckMemberSize(struct _xmlSAXHandler,processingInstruction,8,11,48831)
CheckOffset(struct _xmlSAXHandler,processingInstruction,152,11,48831)
CheckMemberSize(struct _xmlSAXHandler,comment,8,11,48832)
CheckOffset(struct _xmlSAXHandler,comment,160,11,48832)
CheckMemberSize(struct _xmlSAXHandler,warning,8,11,48833)
CheckOffset(struct _xmlSAXHandler,warning,168,11,48833)
CheckMemberSize(struct _xmlSAXHandler,error,8,11,48834)
CheckOffset(struct _xmlSAXHandler,error,176,11,48834)
CheckMemberSize(struct _xmlSAXHandler,fatalError,8,11,48835)
CheckOffset(struct _xmlSAXHandler,fatalError,184,11,48835)
CheckMemberSize(struct _xmlSAXHandler,getParameterEntity,8,11,48836)
CheckOffset(struct _xmlSAXHandler,getParameterEntity,192,11,48836)
CheckMemberSize(struct _xmlSAXHandler,cdataBlock,8,11,48837)
CheckOffset(struct _xmlSAXHandler,cdataBlock,200,11,48837)
CheckMemberSize(struct _xmlSAXHandler,externalSubset,8,11,48838)
CheckOffset(struct _xmlSAXHandler,externalSubset,208,11,48838)
CheckMemberSize(struct _xmlSAXHandler,initialized,4,11,48839)
CheckOffset(struct _xmlSAXHandler,initialized,216,11,48839)
CheckMemberSize(struct _xmlSAXHandler,_private,8,11,48840)
CheckOffset(struct _xmlSAXHandler,_private,224,11,48840)
CheckMemberSize(struct _xmlSAXHandler,startElementNs,8,11,48850)
CheckOffset(struct _xmlSAXHandler,startElementNs,232,11,48850)
CheckMemberSize(struct _xmlSAXHandler,endElementNs,8,11,48851)
CheckOffset(struct _xmlSAXHandler,endElementNs,240,11,48851)
CheckMemberSize(struct _xmlSAXHandler,serror,8,11,48852)
CheckOffset(struct _xmlSAXHandler,serror,248,11,48852)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14740,0);
Msg("Find size of _xmlSAXHandler (14740)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14741,0);
Msg("Find size of fptr_SAX2_467 (14741)\n");
#endif

#if __i386__
CheckTypeSize(internalSubsetSAXFunc,4, 14742, 2)
#elif __x86_64__
CheckTypeSize(internalSubsetSAXFunc,8, 14742, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14742,0);
Msg("Find size of internalSubsetSAXFunc (14742)\n");
#endif

#if __i386__
CheckTypeSize(isStandaloneSAXFunc,4, 14743, 2)
#elif __x86_64__
CheckTypeSize(isStandaloneSAXFunc,8, 14743, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14743,0);
Msg("Find size of isStandaloneSAXFunc (14743)\n");
#endif

#if __i386__
CheckTypeSize(hasInternalSubsetSAXFunc,4, 14744, 2)
#elif __x86_64__
CheckTypeSize(hasInternalSubsetSAXFunc,8, 14744, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14744,0);
Msg("Find size of hasInternalSubsetSAXFunc (14744)\n");
#endif

#if __i386__
CheckTypeSize(hasExternalSubsetSAXFunc,4, 14745, 2)
#elif __x86_64__
CheckTypeSize(hasExternalSubsetSAXFunc,8, 14745, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14745,0);
Msg("Find size of hasExternalSubsetSAXFunc (14745)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14746,0);
Msg("Find size of fptr_SAX2_429 (14746)\n");
#endif

#if __i386__
CheckTypeSize(resolveEntitySAXFunc,4, 14747, 2)
#elif __x86_64__
CheckTypeSize(resolveEntitySAXFunc,8, 14747, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14747,0);
Msg("Find size of resolveEntitySAXFunc (14747)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14748,0);
Msg("Find size of fptr_SAX2_441 (14748)\n");
#endif

#if __i386__
CheckTypeSize(getEntitySAXFunc,4, 14749, 2)
#elif __x86_64__
CheckTypeSize(getEntitySAXFunc,8, 14749, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14749,0);
Msg("Find size of getEntitySAXFunc (14749)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14750,0);
Msg("Find size of fptr_SAX2_162 (14750)\n");
#endif

#if __i386__
CheckTypeSize(entityDeclSAXFunc,4, 14751, 2)
#elif __x86_64__
CheckTypeSize(entityDeclSAXFunc,8, 14751, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14751,0);
Msg("Find size of entityDeclSAXFunc (14751)\n");
#endif

#if __i386__
CheckTypeSize(notationDeclSAXFunc,4, 14752, 2)
#elif __x86_64__
CheckTypeSize(notationDeclSAXFunc,8, 14752, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14752,0);
Msg("Find size of notationDeclSAXFunc (14752)\n");
#endif

#if __i386__
CheckTypeSize(struct _xmlEnumeration,8, 14753, 2)
CheckMemberSize(struct _xmlEnumeration,name,4,2,48770)
CheckOffset(struct _xmlEnumeration,name,4,2,48770)
#elif __x86_64__
CheckTypeSize(struct _xmlEnumeration,16, 14753, 11)
CheckMemberSize(struct _xmlEnumeration,name,8,11,48770)
CheckOffset(struct _xmlEnumeration,name,8,11,48770)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14753,0);
Msg("Find size of _xmlEnumeration (14753)\n");
#endif

#if __i386__
CheckTypeSize(struct _xmlEnumeration *,4, 14754, 2)
#elif __x86_64__
CheckTypeSize(struct _xmlEnumeration *,8, 14754, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14754,0);
Msg("Find size of _xmlEnumeration * (14754)\n");
#endif

#if __i386__
CheckTypeSize(xmlEnumeration,8, 14755, 2)
#elif __x86_64__
CheckTypeSize(xmlEnumeration,16, 14755, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14755,0);
Msg("Find size of xmlEnumeration (14755)\n");
#endif

#if __i386__
CheckTypeSize(xmlEnumeration *,4, 14756, 2)
#elif __x86_64__
CheckTypeSize(xmlEnumeration *,8, 14756, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14756,0);
Msg("Find size of xmlEnumeration * (14756)\n");
#endif

#if __i386__
CheckTypeSize(xmlEnumerationPtr,4, 14757, 2)
#elif __x86_64__
CheckTypeSize(xmlEnumerationPtr,8, 14757, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14757,0);
Msg("Find size of xmlEnumerationPtr (14757)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14758,0);
Msg("Find size of fptr_SAX2_263 (14758)\n");
#endif

#if __i386__
CheckTypeSize(attributeDeclSAXFunc,4, 14759, 2)
#elif __x86_64__
CheckTypeSize(attributeDeclSAXFunc,8, 14759, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14759,0);
Msg("Find size of attributeDeclSAXFunc (14759)\n");
#endif

#if __i386__
CheckTypeSize(struct _xmlElementContent,28, 14760, 2)
CheckMemberSize(struct _xmlElementContent,ocur,4,2,48788)
CheckOffset(struct _xmlElementContent,ocur,4,2,48788)
CheckMemberSize(struct _xmlElementContent,name,4,2,48789)
CheckOffset(struct _xmlElementContent,name,8,2,48789)
CheckMemberSize(struct _xmlElementContent,c1,4,2,48790)
CheckOffset(struct _xmlElementContent,c1,12,2,48790)
CheckMemberSize(struct _xmlElementContent,c2,4,2,48791)
CheckOffset(struct _xmlElementContent,c2,16,2,48791)
CheckMemberSize(struct _xmlElementContent,parent,4,2,48792)
CheckOffset(struct _xmlElementContent,parent,20,2,48792)
CheckMemberSize(struct _xmlElementContent,prefix,4,2,48793)
CheckOffset(struct _xmlElementContent,prefix,24,2,48793)
#elif __x86_64__
CheckTypeSize(struct _xmlElementContent,48, 14760, 11)
CheckMemberSize(struct _xmlElementContent,ocur,4,11,48788)
CheckOffset(struct _xmlElementContent,ocur,4,11,48788)
CheckMemberSize(struct _xmlElementContent,name,8,11,48789)
CheckOffset(struct _xmlElementContent,name,8,11,48789)
CheckMemberSize(struct _xmlElementContent,c1,8,11,48790)
CheckOffset(struct _xmlElementContent,c1,16,11,48790)
CheckMemberSize(struct _xmlElementContent,c2,8,11,48791)
CheckOffset(struct _xmlElementContent,c2,24,11,48791)
CheckMemberSize(struct _xmlElementContent,parent,8,11,48792)
CheckOffset(struct _xmlElementContent,parent,32,11,48792)
CheckMemberSize(struct _xmlElementContent,prefix,8,11,48793)
CheckOffset(struct _xmlElementContent,prefix,40,11,48793)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14760,0);
Msg("Find size of _xmlElementContent (14760)\n");
#endif

#if __i386__
CheckEnum("XML_ELEMENT_CONTENT_PCDATA",XML_ELEMENT_CONTENT_PCDATA,1);
CheckEnum("XML_ELEMENT_CONTENT_ELEMENT",XML_ELEMENT_CONTENT_ELEMENT,2);
CheckEnum("XML_ELEMENT_CONTENT_SEQ",XML_ELEMENT_CONTENT_SEQ,3);
CheckEnum("XML_ELEMENT_CONTENT_OR",XML_ELEMENT_CONTENT_OR,4);
#elif __x86_64__
CheckEnum("XML_ELEMENT_CONTENT_PCDATA",XML_ELEMENT_CONTENT_PCDATA,1);
CheckEnum("XML_ELEMENT_CONTENT_ELEMENT",XML_ELEMENT_CONTENT_ELEMENT,2);
CheckEnum("XML_ELEMENT_CONTENT_SEQ",XML_ELEMENT_CONTENT_SEQ,3);
CheckEnum("XML_ELEMENT_CONTENT_OR",XML_ELEMENT_CONTENT_OR,4);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14761,0);
Msg("Find size of anon-libxml2/libxml/SAX2.h-254 (14761)\n");
#endif

#if __i386__
CheckTypeSize(xmlElementContentType,4, 14762, 2)
#elif __x86_64__
CheckTypeSize(xmlElementContentType,4, 14762, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14762,0);
Msg("Find size of xmlElementContentType (14762)\n");
#endif

#if __i386__
CheckEnum("XML_ELEMENT_CONTENT_ONCE",XML_ELEMENT_CONTENT_ONCE,1);
CheckEnum("XML_ELEMENT_CONTENT_OPT",XML_ELEMENT_CONTENT_OPT,2);
CheckEnum("XML_ELEMENT_CONTENT_MULT",XML_ELEMENT_CONTENT_MULT,3);
CheckEnum("XML_ELEMENT_CONTENT_PLUS",XML_ELEMENT_CONTENT_PLUS,4);
#elif __x86_64__
CheckEnum("XML_ELEMENT_CONTENT_ONCE",XML_ELEMENT_CONTENT_ONCE,1);
CheckEnum("XML_ELEMENT_CONTENT_OPT",XML_ELEMENT_CONTENT_OPT,2);
CheckEnum("XML_ELEMENT_CONTENT_MULT",XML_ELEMENT_CONTENT_MULT,3);
CheckEnum("XML_ELEMENT_CONTENT_PLUS",XML_ELEMENT_CONTENT_PLUS,4);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14763,0);
Msg("Find size of anon-libxml2/libxml/SAX2.h-255 (14763)\n");
#endif

#if __i386__
CheckTypeSize(xmlElementContentOccur,4, 14764, 2)
#elif __x86_64__
CheckTypeSize(xmlElementContentOccur,4, 14764, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14764,0);
Msg("Find size of xmlElementContentOccur (14764)\n");
#endif

#if __i386__
CheckTypeSize(struct _xmlElementContent *,4, 14765, 2)
#elif __x86_64__
CheckTypeSize(struct _xmlElementContent *,8, 14765, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14765,0);
Msg("Find size of _xmlElementContent * (14765)\n");
#endif

#if __i386__
CheckTypeSize(xmlElementContent,28, 14766, 2)
#elif __x86_64__
CheckTypeSize(xmlElementContent,48, 14766, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14766,0);
Msg("Find size of xmlElementContent (14766)\n");
#endif

#if __i386__
CheckTypeSize(xmlElementContent *,4, 14767, 2)
#elif __x86_64__
CheckTypeSize(xmlElementContent *,8, 14767, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14767,0);
Msg("Find size of xmlElementContent * (14767)\n");
#endif

#if __i386__
CheckTypeSize(xmlElementContentPtr,4, 14768, 2)
#elif __x86_64__
CheckTypeSize(xmlElementContentPtr,8, 14768, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14768,0);
Msg("Find size of xmlElementContentPtr (14768)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14769,0);
Msg("Find size of fptr_SAX2_529 (14769)\n");
#endif

#if __i386__
CheckTypeSize(elementDeclSAXFunc,4, 14770, 2)
#elif __x86_64__
CheckTypeSize(elementDeclSAXFunc,8, 14770, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14770,0);
Msg("Find size of elementDeclSAXFunc (14770)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14771,0);
Msg("Find size of fptr_SAX2_22 (14771)\n");
#endif

#if __i386__
CheckTypeSize(unparsedEntityDeclSAXFunc,4, 14772, 2)
#elif __x86_64__
CheckTypeSize(unparsedEntityDeclSAXFunc,8, 14772, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14772,0);
Msg("Find size of unparsedEntityDeclSAXFunc (14772)\n");
#endif

#if __i386__
CheckTypeSize(struct _xmlSAXLocator,16, 14773, 2)
CheckMemberSize(struct _xmlSAXLocator,getSystemId,4,2,48807)
CheckOffset(struct _xmlSAXLocator,getSystemId,4,2,48807)
CheckMemberSize(struct _xmlSAXLocator,getLineNumber,4,2,48808)
CheckOffset(struct _xmlSAXLocator,getLineNumber,8,2,48808)
CheckMemberSize(struct _xmlSAXLocator,getColumnNumber,4,2,48809)
CheckOffset(struct _xmlSAXLocator,getColumnNumber,12,2,48809)
#elif __x86_64__
CheckTypeSize(struct _xmlSAXLocator,32, 14773, 11)
CheckMemberSize(struct _xmlSAXLocator,getSystemId,8,11,48807)
CheckOffset(struct _xmlSAXLocator,getSystemId,8,11,48807)
CheckMemberSize(struct _xmlSAXLocator,getLineNumber,8,11,48808)
CheckOffset(struct _xmlSAXLocator,getLineNumber,16,11,48808)
CheckMemberSize(struct _xmlSAXLocator,getColumnNumber,8,11,48809)
CheckOffset(struct _xmlSAXLocator,getColumnNumber,24,11,48809)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14773,0);
Msg("Find size of _xmlSAXLocator (14773)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14774,0);
Msg("Find size of fptr_SAX2_415 (14774)\n");
#endif

#if __i386__
CheckTypeSize(xmlSAXLocator,16, 14775, 2)
#elif __x86_64__
CheckTypeSize(xmlSAXLocator,32, 14775, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14775,0);
Msg("Find size of xmlSAXLocator (14775)\n");
#endif

#if __i386__
CheckTypeSize(xmlSAXLocator *,4, 14776, 2)
#elif __x86_64__
CheckTypeSize(xmlSAXLocator *,8, 14776, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14776,0);
Msg("Find size of xmlSAXLocator * (14776)\n");
#endif

#if __i386__
CheckTypeSize(xmlSAXLocatorPtr,4, 14777, 2)
#elif __x86_64__
CheckTypeSize(xmlSAXLocatorPtr,8, 14777, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14777,0);
Msg("Find size of xmlSAXLocatorPtr (14777)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14778,0);
Msg("Find size of fptr_SAX2_114 (14778)\n");
#endif

#if __i386__
CheckTypeSize(setDocumentLocatorSAXFunc,4, 14779, 2)
#elif __x86_64__
CheckTypeSize(setDocumentLocatorSAXFunc,8, 14779, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14779,0);
Msg("Find size of setDocumentLocatorSAXFunc (14779)\n");
#endif

#if __i386__
CheckTypeSize(startDocumentSAXFunc,4, 14780, 2)
#elif __x86_64__
CheckTypeSize(startDocumentSAXFunc,8, 14780, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14780,0);
Msg("Find size of startDocumentSAXFunc (14780)\n");
#endif

#if __i386__
CheckTypeSize(endDocumentSAXFunc,4, 14781, 2)
#elif __x86_64__
CheckTypeSize(endDocumentSAXFunc,8, 14781, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14781,0);
Msg("Find size of endDocumentSAXFunc (14781)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14782,0);
Msg("Find size of fptr_SAX2_79 (14782)\n");
#endif

#if __i386__
CheckTypeSize(startElementSAXFunc,4, 14783, 2)
#elif __x86_64__
CheckTypeSize(startElementSAXFunc,8, 14783, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14783,0);
Msg("Find size of startElementSAXFunc (14783)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14784,0);
Msg("Find size of fptr_SAX2_131 (14784)\n");
#endif

#if __i386__
CheckTypeSize(endElementSAXFunc,4, 14785, 2)
#elif __x86_64__
CheckTypeSize(endElementSAXFunc,8, 14785, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14785,0);
Msg("Find size of endElementSAXFunc (14785)\n");
#endif

#if __i386__
CheckTypeSize(referenceSAXFunc,4, 14786, 2)
#elif __x86_64__
CheckTypeSize(referenceSAXFunc,8, 14786, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14786,0);
Msg("Find size of referenceSAXFunc (14786)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14787,0);
Msg("Find size of fptr_SAX2_204 (14787)\n");
#endif

#if __i386__
CheckTypeSize(charactersSAXFunc,4, 14788, 2)
#elif __x86_64__
CheckTypeSize(charactersSAXFunc,8, 14788, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14788,0);
Msg("Find size of charactersSAXFunc (14788)\n");
#endif

#if __i386__
CheckTypeSize(ignorableWhitespaceSAXFunc,4, 14789, 2)
#elif __x86_64__
CheckTypeSize(ignorableWhitespaceSAXFunc,8, 14789, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14789,0);
Msg("Find size of ignorableWhitespaceSAXFunc (14789)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14790,0);
Msg("Find size of fptr_SAX2_414 (14790)\n");
#endif

#if __i386__
CheckTypeSize(processingInstructionSAXFunc,4, 14791, 2)
#elif __x86_64__
CheckTypeSize(processingInstructionSAXFunc,8, 14791, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14791,0);
Msg("Find size of processingInstructionSAXFunc (14791)\n");
#endif

#if __i386__
CheckTypeSize(commentSAXFunc,4, 14792, 2)
#elif __x86_64__
CheckTypeSize(commentSAXFunc,8, 14792, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14792,0);
Msg("Find size of commentSAXFunc (14792)\n");
#endif

#if __i386__
CheckTypeSize(warningSAXFunc,4, 14793, 2)
#elif __x86_64__
CheckTypeSize(warningSAXFunc,8, 14793, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14793,0);
Msg("Find size of warningSAXFunc (14793)\n");
#endif

#if __i386__
CheckTypeSize(errorSAXFunc,4, 14794, 2)
#elif __x86_64__
CheckTypeSize(errorSAXFunc,8, 14794, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14794,0);
Msg("Find size of errorSAXFunc (14794)\n");
#endif

#if __i386__
CheckTypeSize(fatalErrorSAXFunc,4, 14795, 2)
#elif __x86_64__
CheckTypeSize(fatalErrorSAXFunc,8, 14795, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14795,0);
Msg("Find size of fatalErrorSAXFunc (14795)\n");
#endif

#if __i386__
CheckTypeSize(getParameterEntitySAXFunc,4, 14796, 2)
#elif __x86_64__
CheckTypeSize(getParameterEntitySAXFunc,8, 14796, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14796,0);
Msg("Find size of getParameterEntitySAXFunc (14796)\n");
#endif

#if __i386__
CheckTypeSize(cdataBlockSAXFunc,4, 14797, 2)
#elif __x86_64__
CheckTypeSize(cdataBlockSAXFunc,8, 14797, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14797,0);
Msg("Find size of cdataBlockSAXFunc (14797)\n");
#endif

#if __i386__
CheckTypeSize(externalSubsetSAXFunc,4, 14798, 2)
#elif __x86_64__
CheckTypeSize(externalSubsetSAXFunc,8, 14798, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14798,0);
Msg("Find size of externalSubsetSAXFunc (14798)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14799,0);
Msg("Find size of fptr_SAX2_470 (14799)\n");
#endif

#if __i386__
CheckTypeSize(startElementNsSAX2Func,4, 14800, 2)
#elif __x86_64__
CheckTypeSize(startElementNsSAX2Func,8, 14800, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14800,0);
Msg("Find size of startElementNsSAX2Func (14800)\n");
#endif

#if __i386__
CheckTypeSize(endElementNsSAX2Func,4, 14801, 2)
#elif __x86_64__
CheckTypeSize(endElementNsSAX2Func,8, 14801, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14801,0);
Msg("Find size of endElementNsSAX2Func (14801)\n");
#endif

#if __i386__
CheckTypeSize(xmlSAXHandler,128, 14802, 2)
#elif __x86_64__
CheckTypeSize(xmlSAXHandler,256, 14802, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14802,0);
Msg("Find size of xmlSAXHandler (14802)\n");
#endif

#if __i386__
CheckTypeSize(xmlSAXHandler *,4, 14803, 2)
#elif __x86_64__
CheckTypeSize(xmlSAXHandler *,8, 14803, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14803,0);
Msg("Find size of xmlSAXHandler * (14803)\n");
#endif

extern void xmlSAX2EndElement_db(void *, const xmlChar *);
CheckInterfacedef(xmlSAX2EndElement,xmlSAX2EndElement_db);
extern void xmlSAX2Characters_db(void *, const xmlChar *, int);
CheckInterfacedef(xmlSAX2Characters,xmlSAX2Characters_db);
extern int xmlSAX2HasInternalSubset_db(void *);
CheckInterfacedef(xmlSAX2HasInternalSubset,xmlSAX2HasInternalSubset_db);
extern void xmlSAX2Comment_db(void *, const xmlChar *);
CheckInterfacedef(xmlSAX2Comment,xmlSAX2Comment_db);
extern void xmlSAX2ExternalSubset_db(void *, const xmlChar *, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlSAX2ExternalSubset,xmlSAX2ExternalSubset_db);
extern void xmlSAX2StartElementNs_db(void *, const xmlChar *, const xmlChar *, const xmlChar *, int, const xmlChar * *, int, int, const xmlChar * *);
CheckInterfacedef(xmlSAX2StartElementNs,xmlSAX2StartElementNs_db);
extern void xmlSAX2Reference_db(void *, const xmlChar *);
CheckInterfacedef(xmlSAX2Reference,xmlSAX2Reference_db);
extern void xmlSAX2EndElementNs_db(void *, const xmlChar *, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlSAX2EndElementNs,xmlSAX2EndElementNs_db);
extern int xmlSAXDefaultVersion_db(int);
CheckInterfacedef(xmlSAXDefaultVersion,xmlSAXDefaultVersion_db);
extern const xmlChar * xmlSAX2GetSystemId_db(void *);
CheckInterfacedef(xmlSAX2GetSystemId,xmlSAX2GetSystemId_db);
extern void xmlSAX2InitDefaultSAXHandler_db(xmlSAXHandler *, int);
CheckInterfacedef(xmlSAX2InitDefaultSAXHandler,xmlSAX2InitDefaultSAXHandler_db);
extern void xmlDefaultSAXHandlerInit_db(void);
CheckInterfacedef(xmlDefaultSAXHandlerInit,xmlDefaultSAXHandlerInit_db);
extern void xmlSAX2CDataBlock_db(void *, const xmlChar *, int);
CheckInterfacedef(xmlSAX2CDataBlock,xmlSAX2CDataBlock_db);
extern void xmlSAX2IgnorableWhitespace_db(void *, const xmlChar *, int);
CheckInterfacedef(xmlSAX2IgnorableWhitespace,xmlSAX2IgnorableWhitespace_db);
extern void xmlSAX2ElementDecl_db(void *, const xmlChar *, int, xmlElementContentPtr);
CheckInterfacedef(xmlSAX2ElementDecl,xmlSAX2ElementDecl_db);
extern int xmlSAX2IsStandalone_db(void *);
CheckInterfacedef(xmlSAX2IsStandalone,xmlSAX2IsStandalone_db);
extern const xmlChar * xmlSAX2GetPublicId_db(void *);
CheckInterfacedef(xmlSAX2GetPublicId,xmlSAX2GetPublicId_db);
extern int xmlSAX2GetLineNumber_db(void *);
CheckInterfacedef(xmlSAX2GetLineNumber,xmlSAX2GetLineNumber_db);
extern xmlEntityPtr xmlSAX2GetEntity_db(void *, const xmlChar *);
CheckInterfacedef(xmlSAX2GetEntity,xmlSAX2GetEntity_db);
extern void xmlSAX2EndDocument_db(void *);
CheckInterfacedef(xmlSAX2EndDocument,xmlSAX2EndDocument_db);
extern void xmlSAX2AttributeDecl_db(void *, const xmlChar *, const xmlChar *, int, int, const xmlChar *, xmlEnumerationPtr);
CheckInterfacedef(xmlSAX2AttributeDecl,xmlSAX2AttributeDecl_db);
extern void xmlSAX2ProcessingInstruction_db(void *, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlSAX2ProcessingInstruction,xmlSAX2ProcessingInstruction_db);
extern void xmlSAX2NotationDecl_db(void *, const xmlChar *, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlSAX2NotationDecl,xmlSAX2NotationDecl_db);
extern void xmlSAX2EntityDecl_db(void *, const xmlChar *, int, const xmlChar *, const xmlChar *, xmlChar *);
CheckInterfacedef(xmlSAX2EntityDecl,xmlSAX2EntityDecl_db);
extern void xmlSAX2StartDocument_db(void *);
CheckInterfacedef(xmlSAX2StartDocument,xmlSAX2StartDocument_db);
extern xmlParserInputPtr xmlSAX2ResolveEntity_db(void *, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlSAX2ResolveEntity,xmlSAX2ResolveEntity_db);
extern xmlEntityPtr xmlSAX2GetParameterEntity_db(void *, const xmlChar *);
CheckInterfacedef(xmlSAX2GetParameterEntity,xmlSAX2GetParameterEntity_db);
extern int xmlSAX2GetColumnNumber_db(void *);
CheckInterfacedef(xmlSAX2GetColumnNumber,xmlSAX2GetColumnNumber_db);
extern void htmlDefaultSAXHandlerInit_db(void);
CheckInterfacedef(htmlDefaultSAXHandlerInit,htmlDefaultSAXHandlerInit_db);
extern int xmlSAX2HasExternalSubset_db(void *);
CheckInterfacedef(xmlSAX2HasExternalSubset,xmlSAX2HasExternalSubset_db);
extern void xmlSAX2StartElement_db(void *, const xmlChar *, const xmlChar * *);
CheckInterfacedef(xmlSAX2StartElement,xmlSAX2StartElement_db);
extern void xmlSAX2InitDocbDefaultSAXHandler_db(xmlSAXHandler *);
CheckInterfacedef(xmlSAX2InitDocbDefaultSAXHandler,xmlSAX2InitDocbDefaultSAXHandler_db);
extern void xmlSAX2SetDocumentLocator_db(void *, xmlSAXLocatorPtr);
CheckInterfacedef(xmlSAX2SetDocumentLocator,xmlSAX2SetDocumentLocator_db);
extern void xmlSAX2InitHtmlDefaultSAXHandler_db(xmlSAXHandler *);
CheckInterfacedef(xmlSAX2InitHtmlDefaultSAXHandler,xmlSAX2InitHtmlDefaultSAXHandler_db);
extern void docbDefaultSAXHandlerInit_db(void);
CheckInterfacedef(docbDefaultSAXHandlerInit,docbDefaultSAXHandlerInit_db);
extern void xmlSAX2UnparsedEntityDecl_db(void *, const xmlChar *, const xmlChar *, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlSAX2UnparsedEntityDecl,xmlSAX2UnparsedEntityDecl_db);
extern void xmlSAX2InternalSubset_db(void *, const xmlChar *, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlSAX2InternalSubset,xmlSAX2InternalSubset_db);
extern int xmlSAXVersion_db(xmlSAXHandler *, int);
CheckInterfacedef(xmlSAXVersion,xmlSAXVersion_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in libxml2/libxml/SAX2.h\n\n",pcnt,cnt);
return cnt;
#endif

}
