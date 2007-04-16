/*
 * Test of libxml2/libxml/SAX2.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
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
CheckTypeSize(struct _xmlSAXHandler,128, 14740, 2);
CheckMemberSize(struct _xmlSAXHandler,isStandalone,4,2,48751);
CheckOffset(struct _xmlSAXHandler,isStandalone,4,2,48751);
CheckMemberSize(struct _xmlSAXHandler,hasInternalSubset,4,2,48752);
CheckOffset(struct _xmlSAXHandler,hasInternalSubset,8,2,48752);
CheckMemberSize(struct _xmlSAXHandler,hasExternalSubset,4,2,48753);
CheckOffset(struct _xmlSAXHandler,hasExternalSubset,12,2,48753);
CheckMemberSize(struct _xmlSAXHandler,resolveEntity,4,2,48757);
CheckOffset(struct _xmlSAXHandler,resolveEntity,16,2,48757);
CheckMemberSize(struct _xmlSAXHandler,getEntity,4,2,48760);
CheckOffset(struct _xmlSAXHandler,getEntity,20,2,48760);
CheckMemberSize(struct _xmlSAXHandler,entityDecl,4,2,48767);
CheckOffset(struct _xmlSAXHandler,entityDecl,24,2,48767);
CheckMemberSize(struct _xmlSAXHandler,notationDecl,4,2,48768);
CheckOffset(struct _xmlSAXHandler,notationDecl,28,2,48768);
CheckMemberSize(struct _xmlSAXHandler,attributeDecl,4,2,48778);
CheckOffset(struct _xmlSAXHandler,attributeDecl,32,2,48778);
CheckMemberSize(struct _xmlSAXHandler,elementDecl,4,2,48798);
CheckOffset(struct _xmlSAXHandler,elementDecl,36,2,48798);
CheckMemberSize(struct _xmlSAXHandler,unparsedEntityDecl,4,2,48804);
CheckOffset(struct _xmlSAXHandler,unparsedEntityDecl,40,2,48804);
CheckMemberSize(struct _xmlSAXHandler,setDocumentLocator,4,2,48812);
CheckOffset(struct _xmlSAXHandler,setDocumentLocator,44,2,48812);
CheckMemberSize(struct _xmlSAXHandler,startDocument,4,2,48813);
CheckOffset(struct _xmlSAXHandler,startDocument,48,2,48813);
CheckMemberSize(struct _xmlSAXHandler,endDocument,4,2,48814);
CheckOffset(struct _xmlSAXHandler,endDocument,52,2,48814);
CheckMemberSize(struct _xmlSAXHandler,startElement,4,2,48818);
CheckOffset(struct _xmlSAXHandler,startElement,56,2,48818);
CheckMemberSize(struct _xmlSAXHandler,endElement,4,2,48821);
CheckOffset(struct _xmlSAXHandler,endElement,60,2,48821);
CheckMemberSize(struct _xmlSAXHandler,reference,4,2,48822);
CheckOffset(struct _xmlSAXHandler,reference,64,2,48822);
CheckMemberSize(struct _xmlSAXHandler,characters,4,2,48826);
CheckOffset(struct _xmlSAXHandler,characters,68,2,48826);
CheckMemberSize(struct _xmlSAXHandler,ignorableWhitespace,4,2,48827);
CheckOffset(struct _xmlSAXHandler,ignorableWhitespace,72,2,48827);
CheckMemberSize(struct _xmlSAXHandler,processingInstruction,4,2,48831);
CheckOffset(struct _xmlSAXHandler,processingInstruction,76,2,48831);
CheckMemberSize(struct _xmlSAXHandler,comment,4,2,48832);
CheckOffset(struct _xmlSAXHandler,comment,80,2,48832);
CheckMemberSize(struct _xmlSAXHandler,warning,4,2,48833);
CheckOffset(struct _xmlSAXHandler,warning,84,2,48833);
CheckMemberSize(struct _xmlSAXHandler,error,4,2,48834);
CheckOffset(struct _xmlSAXHandler,error,88,2,48834);
CheckMemberSize(struct _xmlSAXHandler,fatalError,4,2,48835);
CheckOffset(struct _xmlSAXHandler,fatalError,92,2,48835);
CheckMemberSize(struct _xmlSAXHandler,getParameterEntity,4,2,48836);
CheckOffset(struct _xmlSAXHandler,getParameterEntity,96,2,48836);
CheckMemberSize(struct _xmlSAXHandler,cdataBlock,4,2,48837);
CheckOffset(struct _xmlSAXHandler,cdataBlock,100,2,48837);
CheckMemberSize(struct _xmlSAXHandler,externalSubset,4,2,48838);
CheckOffset(struct _xmlSAXHandler,externalSubset,104,2,48838);
CheckMemberSize(struct _xmlSAXHandler,initialized,4,2,48839);
CheckOffset(struct _xmlSAXHandler,initialized,108,2,48839);
CheckMemberSize(struct _xmlSAXHandler,_private,4,2,48840);
CheckOffset(struct _xmlSAXHandler,_private,112,2,48840);
CheckMemberSize(struct _xmlSAXHandler,startElementNs,4,2,48850);
CheckOffset(struct _xmlSAXHandler,startElementNs,116,2,48850);
CheckMemberSize(struct _xmlSAXHandler,endElementNs,4,2,48851);
CheckOffset(struct _xmlSAXHandler,endElementNs,120,2,48851);
CheckMemberSize(struct _xmlSAXHandler,serror,4,2,48852);
CheckOffset(struct _xmlSAXHandler,serror,124,2,48852);
#elif __x86_64__
CheckTypeSize(struct _xmlSAXHandler,256, 14740, 11);
CheckMemberSize(struct _xmlSAXHandler,isStandalone,8,11,48751);
CheckOffset(struct _xmlSAXHandler,isStandalone,8,11,48751);
CheckMemberSize(struct _xmlSAXHandler,hasInternalSubset,8,11,48752);
CheckOffset(struct _xmlSAXHandler,hasInternalSubset,16,11,48752);
CheckMemberSize(struct _xmlSAXHandler,hasExternalSubset,8,11,48753);
CheckOffset(struct _xmlSAXHandler,hasExternalSubset,24,11,48753);
CheckMemberSize(struct _xmlSAXHandler,resolveEntity,8,11,48757);
CheckOffset(struct _xmlSAXHandler,resolveEntity,32,11,48757);
CheckMemberSize(struct _xmlSAXHandler,getEntity,8,11,48760);
CheckOffset(struct _xmlSAXHandler,getEntity,40,11,48760);
CheckMemberSize(struct _xmlSAXHandler,entityDecl,8,11,48767);
CheckOffset(struct _xmlSAXHandler,entityDecl,48,11,48767);
CheckMemberSize(struct _xmlSAXHandler,notationDecl,8,11,48768);
CheckOffset(struct _xmlSAXHandler,notationDecl,56,11,48768);
CheckMemberSize(struct _xmlSAXHandler,attributeDecl,8,11,48778);
CheckOffset(struct _xmlSAXHandler,attributeDecl,64,11,48778);
CheckMemberSize(struct _xmlSAXHandler,elementDecl,8,11,48798);
CheckOffset(struct _xmlSAXHandler,elementDecl,72,11,48798);
CheckMemberSize(struct _xmlSAXHandler,unparsedEntityDecl,8,11,48804);
CheckOffset(struct _xmlSAXHandler,unparsedEntityDecl,80,11,48804);
CheckMemberSize(struct _xmlSAXHandler,setDocumentLocator,8,11,48812);
CheckOffset(struct _xmlSAXHandler,setDocumentLocator,88,11,48812);
CheckMemberSize(struct _xmlSAXHandler,startDocument,8,11,48813);
CheckOffset(struct _xmlSAXHandler,startDocument,96,11,48813);
CheckMemberSize(struct _xmlSAXHandler,endDocument,8,11,48814);
CheckOffset(struct _xmlSAXHandler,endDocument,104,11,48814);
CheckMemberSize(struct _xmlSAXHandler,startElement,8,11,48818);
CheckOffset(struct _xmlSAXHandler,startElement,112,11,48818);
CheckMemberSize(struct _xmlSAXHandler,endElement,8,11,48821);
CheckOffset(struct _xmlSAXHandler,endElement,120,11,48821);
CheckMemberSize(struct _xmlSAXHandler,reference,8,11,48822);
CheckOffset(struct _xmlSAXHandler,reference,128,11,48822);
CheckMemberSize(struct _xmlSAXHandler,characters,8,11,48826);
CheckOffset(struct _xmlSAXHandler,characters,136,11,48826);
CheckMemberSize(struct _xmlSAXHandler,ignorableWhitespace,8,11,48827);
CheckOffset(struct _xmlSAXHandler,ignorableWhitespace,144,11,48827);
CheckMemberSize(struct _xmlSAXHandler,processingInstruction,8,11,48831);
CheckOffset(struct _xmlSAXHandler,processingInstruction,152,11,48831);
CheckMemberSize(struct _xmlSAXHandler,comment,8,11,48832);
CheckOffset(struct _xmlSAXHandler,comment,160,11,48832);
CheckMemberSize(struct _xmlSAXHandler,warning,8,11,48833);
CheckOffset(struct _xmlSAXHandler,warning,168,11,48833);
CheckMemberSize(struct _xmlSAXHandler,error,8,11,48834);
CheckOffset(struct _xmlSAXHandler,error,176,11,48834);
CheckMemberSize(struct _xmlSAXHandler,fatalError,8,11,48835);
CheckOffset(struct _xmlSAXHandler,fatalError,184,11,48835);
CheckMemberSize(struct _xmlSAXHandler,getParameterEntity,8,11,48836);
CheckOffset(struct _xmlSAXHandler,getParameterEntity,192,11,48836);
CheckMemberSize(struct _xmlSAXHandler,cdataBlock,8,11,48837);
CheckOffset(struct _xmlSAXHandler,cdataBlock,200,11,48837);
CheckMemberSize(struct _xmlSAXHandler,externalSubset,8,11,48838);
CheckOffset(struct _xmlSAXHandler,externalSubset,208,11,48838);
CheckMemberSize(struct _xmlSAXHandler,initialized,4,11,48839);
CheckOffset(struct _xmlSAXHandler,initialized,216,11,48839);
CheckMemberSize(struct _xmlSAXHandler,_private,8,11,48840);
CheckOffset(struct _xmlSAXHandler,_private,224,11,48840);
CheckMemberSize(struct _xmlSAXHandler,startElementNs,8,11,48850);
CheckOffset(struct _xmlSAXHandler,startElementNs,232,11,48850);
CheckMemberSize(struct _xmlSAXHandler,endElementNs,8,11,48851);
CheckOffset(struct _xmlSAXHandler,endElementNs,240,11,48851);
CheckMemberSize(struct _xmlSAXHandler,serror,8,11,48852);
CheckOffset(struct _xmlSAXHandler,serror,248,11,48852);
#elif __ia64__
CheckTypeSize(struct _xmlSAXHandler,256, 14740, 3);
CheckMemberSize(struct _xmlSAXHandler,isStandalone,8,3,48751);
CheckOffset(struct _xmlSAXHandler,isStandalone,8,3,48751);
CheckMemberSize(struct _xmlSAXHandler,hasInternalSubset,8,3,48752);
CheckOffset(struct _xmlSAXHandler,hasInternalSubset,16,3,48752);
CheckMemberSize(struct _xmlSAXHandler,hasExternalSubset,8,3,48753);
CheckOffset(struct _xmlSAXHandler,hasExternalSubset,24,3,48753);
CheckMemberSize(struct _xmlSAXHandler,resolveEntity,8,3,48757);
CheckOffset(struct _xmlSAXHandler,resolveEntity,32,3,48757);
CheckMemberSize(struct _xmlSAXHandler,getEntity,8,3,48760);
CheckOffset(struct _xmlSAXHandler,getEntity,40,3,48760);
CheckMemberSize(struct _xmlSAXHandler,entityDecl,8,3,48767);
CheckOffset(struct _xmlSAXHandler,entityDecl,48,3,48767);
CheckMemberSize(struct _xmlSAXHandler,notationDecl,8,3,48768);
CheckOffset(struct _xmlSAXHandler,notationDecl,56,3,48768);
CheckMemberSize(struct _xmlSAXHandler,attributeDecl,8,3,48778);
CheckOffset(struct _xmlSAXHandler,attributeDecl,64,3,48778);
CheckMemberSize(struct _xmlSAXHandler,elementDecl,8,3,48798);
CheckOffset(struct _xmlSAXHandler,elementDecl,72,3,48798);
CheckMemberSize(struct _xmlSAXHandler,unparsedEntityDecl,8,3,48804);
CheckOffset(struct _xmlSAXHandler,unparsedEntityDecl,80,3,48804);
CheckMemberSize(struct _xmlSAXHandler,setDocumentLocator,8,3,48812);
CheckOffset(struct _xmlSAXHandler,setDocumentLocator,88,3,48812);
CheckMemberSize(struct _xmlSAXHandler,startDocument,8,3,48813);
CheckOffset(struct _xmlSAXHandler,startDocument,96,3,48813);
CheckMemberSize(struct _xmlSAXHandler,endDocument,8,3,48814);
CheckOffset(struct _xmlSAXHandler,endDocument,104,3,48814);
CheckMemberSize(struct _xmlSAXHandler,startElement,8,3,48818);
CheckOffset(struct _xmlSAXHandler,startElement,112,3,48818);
CheckMemberSize(struct _xmlSAXHandler,endElement,8,3,48821);
CheckOffset(struct _xmlSAXHandler,endElement,120,3,48821);
CheckMemberSize(struct _xmlSAXHandler,reference,8,3,48822);
CheckOffset(struct _xmlSAXHandler,reference,128,3,48822);
CheckMemberSize(struct _xmlSAXHandler,characters,8,3,48826);
CheckOffset(struct _xmlSAXHandler,characters,136,3,48826);
CheckMemberSize(struct _xmlSAXHandler,ignorableWhitespace,8,3,48827);
CheckOffset(struct _xmlSAXHandler,ignorableWhitespace,144,3,48827);
CheckMemberSize(struct _xmlSAXHandler,processingInstruction,8,3,48831);
CheckOffset(struct _xmlSAXHandler,processingInstruction,152,3,48831);
CheckMemberSize(struct _xmlSAXHandler,comment,8,3,48832);
CheckOffset(struct _xmlSAXHandler,comment,160,3,48832);
CheckMemberSize(struct _xmlSAXHandler,warning,8,3,48833);
CheckOffset(struct _xmlSAXHandler,warning,168,3,48833);
CheckMemberSize(struct _xmlSAXHandler,error,8,3,48834);
CheckOffset(struct _xmlSAXHandler,error,176,3,48834);
CheckMemberSize(struct _xmlSAXHandler,fatalError,8,3,48835);
CheckOffset(struct _xmlSAXHandler,fatalError,184,3,48835);
CheckMemberSize(struct _xmlSAXHandler,getParameterEntity,8,3,48836);
CheckOffset(struct _xmlSAXHandler,getParameterEntity,192,3,48836);
CheckMemberSize(struct _xmlSAXHandler,cdataBlock,8,3,48837);
CheckOffset(struct _xmlSAXHandler,cdataBlock,200,3,48837);
CheckMemberSize(struct _xmlSAXHandler,externalSubset,8,3,48838);
CheckOffset(struct _xmlSAXHandler,externalSubset,208,3,48838);
CheckMemberSize(struct _xmlSAXHandler,initialized,4,3,48839);
CheckOffset(struct _xmlSAXHandler,initialized,216,3,48839);
CheckMemberSize(struct _xmlSAXHandler,_private,8,3,48840);
CheckOffset(struct _xmlSAXHandler,_private,224,3,48840);
CheckMemberSize(struct _xmlSAXHandler,startElementNs,8,3,48850);
CheckOffset(struct _xmlSAXHandler,startElementNs,232,3,48850);
CheckMemberSize(struct _xmlSAXHandler,endElementNs,8,3,48851);
CheckOffset(struct _xmlSAXHandler,endElementNs,240,3,48851);
CheckMemberSize(struct _xmlSAXHandler,serror,8,3,48852);
CheckOffset(struct _xmlSAXHandler,serror,248,3,48852);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _xmlSAXHandler,128, 14740, 6);
CheckMemberSize(struct _xmlSAXHandler,isStandalone,4,6,48751);
CheckOffset(struct _xmlSAXHandler,isStandalone,4,6,48751);
CheckMemberSize(struct _xmlSAXHandler,hasInternalSubset,4,6,48752);
CheckOffset(struct _xmlSAXHandler,hasInternalSubset,8,6,48752);
CheckMemberSize(struct _xmlSAXHandler,hasExternalSubset,4,6,48753);
CheckOffset(struct _xmlSAXHandler,hasExternalSubset,12,6,48753);
CheckMemberSize(struct _xmlSAXHandler,resolveEntity,4,6,48757);
CheckOffset(struct _xmlSAXHandler,resolveEntity,16,6,48757);
CheckMemberSize(struct _xmlSAXHandler,getEntity,4,6,48760);
CheckOffset(struct _xmlSAXHandler,getEntity,20,6,48760);
CheckMemberSize(struct _xmlSAXHandler,entityDecl,4,6,48767);
CheckOffset(struct _xmlSAXHandler,entityDecl,24,6,48767);
CheckMemberSize(struct _xmlSAXHandler,notationDecl,4,6,48768);
CheckOffset(struct _xmlSAXHandler,notationDecl,28,6,48768);
CheckMemberSize(struct _xmlSAXHandler,attributeDecl,4,6,48778);
CheckOffset(struct _xmlSAXHandler,attributeDecl,32,6,48778);
CheckMemberSize(struct _xmlSAXHandler,elementDecl,4,6,48798);
CheckOffset(struct _xmlSAXHandler,elementDecl,36,6,48798);
CheckMemberSize(struct _xmlSAXHandler,unparsedEntityDecl,4,6,48804);
CheckOffset(struct _xmlSAXHandler,unparsedEntityDecl,40,6,48804);
CheckMemberSize(struct _xmlSAXHandler,setDocumentLocator,4,6,48812);
CheckOffset(struct _xmlSAXHandler,setDocumentLocator,44,6,48812);
CheckMemberSize(struct _xmlSAXHandler,startDocument,4,6,48813);
CheckOffset(struct _xmlSAXHandler,startDocument,48,6,48813);
CheckMemberSize(struct _xmlSAXHandler,endDocument,4,6,48814);
CheckOffset(struct _xmlSAXHandler,endDocument,52,6,48814);
CheckMemberSize(struct _xmlSAXHandler,startElement,4,6,48818);
CheckOffset(struct _xmlSAXHandler,startElement,56,6,48818);
CheckMemberSize(struct _xmlSAXHandler,endElement,4,6,48821);
CheckOffset(struct _xmlSAXHandler,endElement,60,6,48821);
CheckMemberSize(struct _xmlSAXHandler,reference,4,6,48822);
CheckOffset(struct _xmlSAXHandler,reference,64,6,48822);
CheckMemberSize(struct _xmlSAXHandler,characters,4,6,48826);
CheckOffset(struct _xmlSAXHandler,characters,68,6,48826);
CheckMemberSize(struct _xmlSAXHandler,ignorableWhitespace,4,6,48827);
CheckOffset(struct _xmlSAXHandler,ignorableWhitespace,72,6,48827);
CheckMemberSize(struct _xmlSAXHandler,processingInstruction,4,6,48831);
CheckOffset(struct _xmlSAXHandler,processingInstruction,76,6,48831);
CheckMemberSize(struct _xmlSAXHandler,comment,4,6,48832);
CheckOffset(struct _xmlSAXHandler,comment,80,6,48832);
CheckMemberSize(struct _xmlSAXHandler,warning,4,6,48833);
CheckOffset(struct _xmlSAXHandler,warning,84,6,48833);
CheckMemberSize(struct _xmlSAXHandler,error,4,6,48834);
CheckOffset(struct _xmlSAXHandler,error,88,6,48834);
CheckMemberSize(struct _xmlSAXHandler,fatalError,4,6,48835);
CheckOffset(struct _xmlSAXHandler,fatalError,92,6,48835);
CheckMemberSize(struct _xmlSAXHandler,getParameterEntity,4,6,48836);
CheckOffset(struct _xmlSAXHandler,getParameterEntity,96,6,48836);
CheckMemberSize(struct _xmlSAXHandler,cdataBlock,4,6,48837);
CheckOffset(struct _xmlSAXHandler,cdataBlock,100,6,48837);
CheckMemberSize(struct _xmlSAXHandler,externalSubset,4,6,48838);
CheckOffset(struct _xmlSAXHandler,externalSubset,104,6,48838);
CheckMemberSize(struct _xmlSAXHandler,initialized,4,6,48839);
CheckOffset(struct _xmlSAXHandler,initialized,108,6,48839);
CheckMemberSize(struct _xmlSAXHandler,_private,4,6,48840);
CheckOffset(struct _xmlSAXHandler,_private,112,6,48840);
CheckMemberSize(struct _xmlSAXHandler,startElementNs,4,6,48850);
CheckOffset(struct _xmlSAXHandler,startElementNs,116,6,48850);
CheckMemberSize(struct _xmlSAXHandler,endElementNs,4,6,48851);
CheckOffset(struct _xmlSAXHandler,endElementNs,120,6,48851);
CheckMemberSize(struct _xmlSAXHandler,serror,4,6,48852);
CheckOffset(struct _xmlSAXHandler,serror,124,6,48852);
#elif __powerpc64__
CheckTypeSize(struct _xmlSAXHandler,256, 14740, 9);
CheckMemberSize(struct _xmlSAXHandler,isStandalone,8,9,48751);
CheckOffset(struct _xmlSAXHandler,isStandalone,8,9,48751);
CheckMemberSize(struct _xmlSAXHandler,hasInternalSubset,8,9,48752);
CheckOffset(struct _xmlSAXHandler,hasInternalSubset,16,9,48752);
CheckMemberSize(struct _xmlSAXHandler,hasExternalSubset,8,9,48753);
CheckOffset(struct _xmlSAXHandler,hasExternalSubset,24,9,48753);
CheckMemberSize(struct _xmlSAXHandler,resolveEntity,8,9,48757);
CheckOffset(struct _xmlSAXHandler,resolveEntity,32,9,48757);
CheckMemberSize(struct _xmlSAXHandler,getEntity,8,9,48760);
CheckOffset(struct _xmlSAXHandler,getEntity,40,9,48760);
CheckMemberSize(struct _xmlSAXHandler,entityDecl,8,9,48767);
CheckOffset(struct _xmlSAXHandler,entityDecl,48,9,48767);
CheckMemberSize(struct _xmlSAXHandler,notationDecl,8,9,48768);
CheckOffset(struct _xmlSAXHandler,notationDecl,56,9,48768);
CheckMemberSize(struct _xmlSAXHandler,attributeDecl,8,9,48778);
CheckOffset(struct _xmlSAXHandler,attributeDecl,64,9,48778);
CheckMemberSize(struct _xmlSAXHandler,elementDecl,8,9,48798);
CheckOffset(struct _xmlSAXHandler,elementDecl,72,9,48798);
CheckMemberSize(struct _xmlSAXHandler,unparsedEntityDecl,8,9,48804);
CheckOffset(struct _xmlSAXHandler,unparsedEntityDecl,80,9,48804);
CheckMemberSize(struct _xmlSAXHandler,setDocumentLocator,8,9,48812);
CheckOffset(struct _xmlSAXHandler,setDocumentLocator,88,9,48812);
CheckMemberSize(struct _xmlSAXHandler,startDocument,8,9,48813);
CheckOffset(struct _xmlSAXHandler,startDocument,96,9,48813);
CheckMemberSize(struct _xmlSAXHandler,endDocument,8,9,48814);
CheckOffset(struct _xmlSAXHandler,endDocument,104,9,48814);
CheckMemberSize(struct _xmlSAXHandler,startElement,8,9,48818);
CheckOffset(struct _xmlSAXHandler,startElement,112,9,48818);
CheckMemberSize(struct _xmlSAXHandler,endElement,8,9,48821);
CheckOffset(struct _xmlSAXHandler,endElement,120,9,48821);
CheckMemberSize(struct _xmlSAXHandler,reference,8,9,48822);
CheckOffset(struct _xmlSAXHandler,reference,128,9,48822);
CheckMemberSize(struct _xmlSAXHandler,characters,8,9,48826);
CheckOffset(struct _xmlSAXHandler,characters,136,9,48826);
CheckMemberSize(struct _xmlSAXHandler,ignorableWhitespace,8,9,48827);
CheckOffset(struct _xmlSAXHandler,ignorableWhitespace,144,9,48827);
CheckMemberSize(struct _xmlSAXHandler,processingInstruction,8,9,48831);
CheckOffset(struct _xmlSAXHandler,processingInstruction,152,9,48831);
CheckMemberSize(struct _xmlSAXHandler,comment,8,9,48832);
CheckOffset(struct _xmlSAXHandler,comment,160,9,48832);
CheckMemberSize(struct _xmlSAXHandler,warning,8,9,48833);
CheckOffset(struct _xmlSAXHandler,warning,168,9,48833);
CheckMemberSize(struct _xmlSAXHandler,error,8,9,48834);
CheckOffset(struct _xmlSAXHandler,error,176,9,48834);
CheckMemberSize(struct _xmlSAXHandler,fatalError,8,9,48835);
CheckOffset(struct _xmlSAXHandler,fatalError,184,9,48835);
CheckMemberSize(struct _xmlSAXHandler,getParameterEntity,8,9,48836);
CheckOffset(struct _xmlSAXHandler,getParameterEntity,192,9,48836);
CheckMemberSize(struct _xmlSAXHandler,cdataBlock,8,9,48837);
CheckOffset(struct _xmlSAXHandler,cdataBlock,200,9,48837);
CheckMemberSize(struct _xmlSAXHandler,externalSubset,8,9,48838);
CheckOffset(struct _xmlSAXHandler,externalSubset,208,9,48838);
CheckMemberSize(struct _xmlSAXHandler,initialized,4,9,48839);
CheckOffset(struct _xmlSAXHandler,initialized,216,9,48839);
CheckMemberSize(struct _xmlSAXHandler,_private,8,9,48840);
CheckOffset(struct _xmlSAXHandler,_private,224,9,48840);
CheckMemberSize(struct _xmlSAXHandler,startElementNs,8,9,48850);
CheckOffset(struct _xmlSAXHandler,startElementNs,232,9,48850);
CheckMemberSize(struct _xmlSAXHandler,endElementNs,8,9,48851);
CheckOffset(struct _xmlSAXHandler,endElementNs,240,9,48851);
CheckMemberSize(struct _xmlSAXHandler,serror,8,9,48852);
CheckOffset(struct _xmlSAXHandler,serror,248,9,48852);
#elif __s390__ && !__s390x__
CheckTypeSize(struct _xmlSAXHandler,128, 14740, 10);
CheckMemberSize(struct _xmlSAXHandler,isStandalone,4,10,48751);
CheckOffset(struct _xmlSAXHandler,isStandalone,4,10,48751);
CheckMemberSize(struct _xmlSAXHandler,hasInternalSubset,4,10,48752);
CheckOffset(struct _xmlSAXHandler,hasInternalSubset,8,10,48752);
CheckMemberSize(struct _xmlSAXHandler,hasExternalSubset,4,10,48753);
CheckOffset(struct _xmlSAXHandler,hasExternalSubset,12,10,48753);
CheckMemberSize(struct _xmlSAXHandler,resolveEntity,4,10,48757);
CheckOffset(struct _xmlSAXHandler,resolveEntity,16,10,48757);
CheckMemberSize(struct _xmlSAXHandler,getEntity,4,10,48760);
CheckOffset(struct _xmlSAXHandler,getEntity,20,10,48760);
CheckMemberSize(struct _xmlSAXHandler,entityDecl,4,10,48767);
CheckOffset(struct _xmlSAXHandler,entityDecl,24,10,48767);
CheckMemberSize(struct _xmlSAXHandler,notationDecl,4,10,48768);
CheckOffset(struct _xmlSAXHandler,notationDecl,28,10,48768);
CheckMemberSize(struct _xmlSAXHandler,attributeDecl,4,10,48778);
CheckOffset(struct _xmlSAXHandler,attributeDecl,32,10,48778);
CheckMemberSize(struct _xmlSAXHandler,elementDecl,4,10,48798);
CheckOffset(struct _xmlSAXHandler,elementDecl,36,10,48798);
CheckMemberSize(struct _xmlSAXHandler,unparsedEntityDecl,4,10,48804);
CheckOffset(struct _xmlSAXHandler,unparsedEntityDecl,40,10,48804);
CheckMemberSize(struct _xmlSAXHandler,setDocumentLocator,4,10,48812);
CheckOffset(struct _xmlSAXHandler,setDocumentLocator,44,10,48812);
CheckMemberSize(struct _xmlSAXHandler,startDocument,4,10,48813);
CheckOffset(struct _xmlSAXHandler,startDocument,48,10,48813);
CheckMemberSize(struct _xmlSAXHandler,endDocument,4,10,48814);
CheckOffset(struct _xmlSAXHandler,endDocument,52,10,48814);
CheckMemberSize(struct _xmlSAXHandler,startElement,4,10,48818);
CheckOffset(struct _xmlSAXHandler,startElement,56,10,48818);
CheckMemberSize(struct _xmlSAXHandler,endElement,4,10,48821);
CheckOffset(struct _xmlSAXHandler,endElement,60,10,48821);
CheckMemberSize(struct _xmlSAXHandler,reference,4,10,48822);
CheckOffset(struct _xmlSAXHandler,reference,64,10,48822);
CheckMemberSize(struct _xmlSAXHandler,characters,4,10,48826);
CheckOffset(struct _xmlSAXHandler,characters,68,10,48826);
CheckMemberSize(struct _xmlSAXHandler,ignorableWhitespace,4,10,48827);
CheckOffset(struct _xmlSAXHandler,ignorableWhitespace,72,10,48827);
CheckMemberSize(struct _xmlSAXHandler,processingInstruction,4,10,48831);
CheckOffset(struct _xmlSAXHandler,processingInstruction,76,10,48831);
CheckMemberSize(struct _xmlSAXHandler,comment,4,10,48832);
CheckOffset(struct _xmlSAXHandler,comment,80,10,48832);
CheckMemberSize(struct _xmlSAXHandler,warning,4,10,48833);
CheckOffset(struct _xmlSAXHandler,warning,84,10,48833);
CheckMemberSize(struct _xmlSAXHandler,error,4,10,48834);
CheckOffset(struct _xmlSAXHandler,error,88,10,48834);
CheckMemberSize(struct _xmlSAXHandler,fatalError,4,10,48835);
CheckOffset(struct _xmlSAXHandler,fatalError,92,10,48835);
CheckMemberSize(struct _xmlSAXHandler,getParameterEntity,4,10,48836);
CheckOffset(struct _xmlSAXHandler,getParameterEntity,96,10,48836);
CheckMemberSize(struct _xmlSAXHandler,cdataBlock,4,10,48837);
CheckOffset(struct _xmlSAXHandler,cdataBlock,100,10,48837);
CheckMemberSize(struct _xmlSAXHandler,externalSubset,4,10,48838);
CheckOffset(struct _xmlSAXHandler,externalSubset,104,10,48838);
CheckMemberSize(struct _xmlSAXHandler,initialized,4,10,48839);
CheckOffset(struct _xmlSAXHandler,initialized,108,10,48839);
CheckMemberSize(struct _xmlSAXHandler,_private,4,10,48840);
CheckOffset(struct _xmlSAXHandler,_private,112,10,48840);
CheckMemberSize(struct _xmlSAXHandler,startElementNs,4,10,48850);
CheckOffset(struct _xmlSAXHandler,startElementNs,116,10,48850);
CheckMemberSize(struct _xmlSAXHandler,endElementNs,4,10,48851);
CheckOffset(struct _xmlSAXHandler,endElementNs,120,10,48851);
CheckMemberSize(struct _xmlSAXHandler,serror,4,10,48852);
CheckOffset(struct _xmlSAXHandler,serror,124,10,48852);
#elif __s390x__
CheckTypeSize(struct _xmlSAXHandler,256, 14740, 12);
CheckMemberSize(struct _xmlSAXHandler,isStandalone,8,12,48751);
CheckOffset(struct _xmlSAXHandler,isStandalone,8,12,48751);
CheckMemberSize(struct _xmlSAXHandler,hasInternalSubset,8,12,48752);
CheckOffset(struct _xmlSAXHandler,hasInternalSubset,16,12,48752);
CheckMemberSize(struct _xmlSAXHandler,hasExternalSubset,8,12,48753);
CheckOffset(struct _xmlSAXHandler,hasExternalSubset,24,12,48753);
CheckMemberSize(struct _xmlSAXHandler,resolveEntity,8,12,48757);
CheckOffset(struct _xmlSAXHandler,resolveEntity,32,12,48757);
CheckMemberSize(struct _xmlSAXHandler,getEntity,8,12,48760);
CheckOffset(struct _xmlSAXHandler,getEntity,40,12,48760);
CheckMemberSize(struct _xmlSAXHandler,entityDecl,8,12,48767);
CheckOffset(struct _xmlSAXHandler,entityDecl,48,12,48767);
CheckMemberSize(struct _xmlSAXHandler,notationDecl,8,12,48768);
CheckOffset(struct _xmlSAXHandler,notationDecl,56,12,48768);
CheckMemberSize(struct _xmlSAXHandler,attributeDecl,8,12,48778);
CheckOffset(struct _xmlSAXHandler,attributeDecl,64,12,48778);
CheckMemberSize(struct _xmlSAXHandler,elementDecl,8,12,48798);
CheckOffset(struct _xmlSAXHandler,elementDecl,72,12,48798);
CheckMemberSize(struct _xmlSAXHandler,unparsedEntityDecl,8,12,48804);
CheckOffset(struct _xmlSAXHandler,unparsedEntityDecl,80,12,48804);
CheckMemberSize(struct _xmlSAXHandler,setDocumentLocator,8,12,48812);
CheckOffset(struct _xmlSAXHandler,setDocumentLocator,88,12,48812);
CheckMemberSize(struct _xmlSAXHandler,startDocument,8,12,48813);
CheckOffset(struct _xmlSAXHandler,startDocument,96,12,48813);
CheckMemberSize(struct _xmlSAXHandler,endDocument,8,12,48814);
CheckOffset(struct _xmlSAXHandler,endDocument,104,12,48814);
CheckMemberSize(struct _xmlSAXHandler,startElement,8,12,48818);
CheckOffset(struct _xmlSAXHandler,startElement,112,12,48818);
CheckMemberSize(struct _xmlSAXHandler,endElement,8,12,48821);
CheckOffset(struct _xmlSAXHandler,endElement,120,12,48821);
CheckMemberSize(struct _xmlSAXHandler,reference,8,12,48822);
CheckOffset(struct _xmlSAXHandler,reference,128,12,48822);
CheckMemberSize(struct _xmlSAXHandler,characters,8,12,48826);
CheckOffset(struct _xmlSAXHandler,characters,136,12,48826);
CheckMemberSize(struct _xmlSAXHandler,ignorableWhitespace,8,12,48827);
CheckOffset(struct _xmlSAXHandler,ignorableWhitespace,144,12,48827);
CheckMemberSize(struct _xmlSAXHandler,processingInstruction,8,12,48831);
CheckOffset(struct _xmlSAXHandler,processingInstruction,152,12,48831);
CheckMemberSize(struct _xmlSAXHandler,comment,8,12,48832);
CheckOffset(struct _xmlSAXHandler,comment,160,12,48832);
CheckMemberSize(struct _xmlSAXHandler,warning,8,12,48833);
CheckOffset(struct _xmlSAXHandler,warning,168,12,48833);
CheckMemberSize(struct _xmlSAXHandler,error,8,12,48834);
CheckOffset(struct _xmlSAXHandler,error,176,12,48834);
CheckMemberSize(struct _xmlSAXHandler,fatalError,8,12,48835);
CheckOffset(struct _xmlSAXHandler,fatalError,184,12,48835);
CheckMemberSize(struct _xmlSAXHandler,getParameterEntity,8,12,48836);
CheckOffset(struct _xmlSAXHandler,getParameterEntity,192,12,48836);
CheckMemberSize(struct _xmlSAXHandler,cdataBlock,8,12,48837);
CheckOffset(struct _xmlSAXHandler,cdataBlock,200,12,48837);
CheckMemberSize(struct _xmlSAXHandler,externalSubset,8,12,48838);
CheckOffset(struct _xmlSAXHandler,externalSubset,208,12,48838);
CheckMemberSize(struct _xmlSAXHandler,initialized,4,12,48839);
CheckOffset(struct _xmlSAXHandler,initialized,216,12,48839);
CheckMemberSize(struct _xmlSAXHandler,_private,8,12,48840);
CheckOffset(struct _xmlSAXHandler,_private,224,12,48840);
CheckMemberSize(struct _xmlSAXHandler,startElementNs,8,12,48850);
CheckOffset(struct _xmlSAXHandler,startElementNs,232,12,48850);
CheckMemberSize(struct _xmlSAXHandler,endElementNs,8,12,48851);
CheckOffset(struct _xmlSAXHandler,endElementNs,240,12,48851);
CheckMemberSize(struct _xmlSAXHandler,serror,8,12,48852);
CheckOffset(struct _xmlSAXHandler,serror,248,12,48852);
#elif 1
CheckTypeSize(struct _xmlSAXHandler,0, 14740, 1);
Msg("Missing member data for _xmlSAXHandler on All\n");
CheckOffset(struct _xmlSAXHandler,internalSubset,0,1,48750);
CheckOffset(struct _xmlSAXHandler,isStandalone,0,1,48751);
CheckOffset(struct _xmlSAXHandler,hasInternalSubset,0,1,48752);
CheckOffset(struct _xmlSAXHandler,hasExternalSubset,0,1,48753);
CheckOffset(struct _xmlSAXHandler,resolveEntity,0,1,48757);
CheckOffset(struct _xmlSAXHandler,getEntity,0,1,48760);
CheckOffset(struct _xmlSAXHandler,entityDecl,0,1,48767);
CheckOffset(struct _xmlSAXHandler,notationDecl,0,1,48768);
CheckOffset(struct _xmlSAXHandler,attributeDecl,0,1,48778);
CheckOffset(struct _xmlSAXHandler,elementDecl,0,1,48798);
CheckOffset(struct _xmlSAXHandler,unparsedEntityDecl,0,1,48804);
CheckOffset(struct _xmlSAXHandler,setDocumentLocator,0,1,48812);
CheckOffset(struct _xmlSAXHandler,startDocument,0,1,48813);
CheckOffset(struct _xmlSAXHandler,endDocument,0,1,48814);
CheckOffset(struct _xmlSAXHandler,startElement,0,1,48818);
CheckOffset(struct _xmlSAXHandler,endElement,0,1,48821);
CheckOffset(struct _xmlSAXHandler,reference,0,1,48822);
CheckOffset(struct _xmlSAXHandler,characters,0,1,48826);
CheckOffset(struct _xmlSAXHandler,ignorableWhitespace,0,1,48827);
CheckOffset(struct _xmlSAXHandler,processingInstruction,0,1,48831);
CheckOffset(struct _xmlSAXHandler,comment,0,1,48832);
CheckOffset(struct _xmlSAXHandler,warning,0,1,48833);
CheckOffset(struct _xmlSAXHandler,error,0,1,48834);
CheckOffset(struct _xmlSAXHandler,fatalError,0,1,48835);
CheckOffset(struct _xmlSAXHandler,getParameterEntity,0,1,48836);
CheckOffset(struct _xmlSAXHandler,cdataBlock,0,1,48837);
CheckOffset(struct _xmlSAXHandler,externalSubset,0,1,48838);
CheckOffset(struct _xmlSAXHandler,initialized,0,1,48839);
CheckOffset(struct _xmlSAXHandler,_private,0,1,48840);
CheckOffset(struct _xmlSAXHandler,startElementNs,0,1,48850);
CheckOffset(struct _xmlSAXHandler,endElementNs,0,1,48851);
CheckOffset(struct _xmlSAXHandler,serror,0,1,48852);
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#elif 1
#endif

#if __i386__
CheckTypeSize(internalSubsetSAXFunc,4, 14742, 2);
#elif __x86_64__
CheckTypeSize(internalSubsetSAXFunc,8, 14742, 11);
#elif __ia64__
CheckTypeSize(internalSubsetSAXFunc,8, 14742, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(internalSubsetSAXFunc,4, 14742, 6);
#elif __powerpc64__
CheckTypeSize(internalSubsetSAXFunc,8, 14742, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(internalSubsetSAXFunc,4, 14742, 10);
#elif __s390x__
CheckTypeSize(internalSubsetSAXFunc,8, 14742, 12);
#elif 1
CheckTypeSize(internalSubsetSAXFunc,0, 14742, 1);
#endif

#if __i386__
CheckTypeSize(isStandaloneSAXFunc,4, 14743, 2);
#elif __x86_64__
CheckTypeSize(isStandaloneSAXFunc,8, 14743, 11);
#elif __ia64__
CheckTypeSize(isStandaloneSAXFunc,8, 14743, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(isStandaloneSAXFunc,4, 14743, 6);
#elif __powerpc64__
CheckTypeSize(isStandaloneSAXFunc,8, 14743, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(isStandaloneSAXFunc,4, 14743, 10);
#elif __s390x__
CheckTypeSize(isStandaloneSAXFunc,8, 14743, 12);
#elif 1
CheckTypeSize(isStandaloneSAXFunc,0, 14743, 1);
#endif

#if __i386__
CheckTypeSize(hasInternalSubsetSAXFunc,4, 14744, 2);
#elif __x86_64__
CheckTypeSize(hasInternalSubsetSAXFunc,8, 14744, 11);
#elif __ia64__
CheckTypeSize(hasInternalSubsetSAXFunc,8, 14744, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(hasInternalSubsetSAXFunc,4, 14744, 6);
#elif __powerpc64__
CheckTypeSize(hasInternalSubsetSAXFunc,8, 14744, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(hasInternalSubsetSAXFunc,4, 14744, 10);
#elif __s390x__
CheckTypeSize(hasInternalSubsetSAXFunc,8, 14744, 12);
#elif 1
CheckTypeSize(hasInternalSubsetSAXFunc,0, 14744, 1);
#endif

#if __i386__
CheckTypeSize(hasExternalSubsetSAXFunc,4, 14745, 2);
#elif __x86_64__
CheckTypeSize(hasExternalSubsetSAXFunc,8, 14745, 11);
#elif __ia64__
CheckTypeSize(hasExternalSubsetSAXFunc,8, 14745, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(hasExternalSubsetSAXFunc,4, 14745, 6);
#elif __powerpc64__
CheckTypeSize(hasExternalSubsetSAXFunc,8, 14745, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(hasExternalSubsetSAXFunc,4, 14745, 10);
#elif __s390x__
CheckTypeSize(hasExternalSubsetSAXFunc,8, 14745, 12);
#elif 1
CheckTypeSize(hasExternalSubsetSAXFunc,0, 14745, 1);
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#elif 1
#endif

#if __i386__
CheckTypeSize(resolveEntitySAXFunc,4, 14747, 2);
#elif __x86_64__
CheckTypeSize(resolveEntitySAXFunc,8, 14747, 11);
#elif __ia64__
CheckTypeSize(resolveEntitySAXFunc,8, 14747, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(resolveEntitySAXFunc,4, 14747, 6);
#elif __powerpc64__
CheckTypeSize(resolveEntitySAXFunc,8, 14747, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(resolveEntitySAXFunc,4, 14747, 10);
#elif __s390x__
CheckTypeSize(resolveEntitySAXFunc,8, 14747, 12);
#elif 1
CheckTypeSize(resolveEntitySAXFunc,0, 14747, 1);
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#elif 1
#endif

#if __i386__
CheckTypeSize(getEntitySAXFunc,4, 14749, 2);
#elif __x86_64__
CheckTypeSize(getEntitySAXFunc,8, 14749, 11);
#elif __ia64__
CheckTypeSize(getEntitySAXFunc,8, 14749, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(getEntitySAXFunc,4, 14749, 6);
#elif __powerpc64__
CheckTypeSize(getEntitySAXFunc,8, 14749, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(getEntitySAXFunc,4, 14749, 10);
#elif __s390x__
CheckTypeSize(getEntitySAXFunc,8, 14749, 12);
#elif 1
CheckTypeSize(getEntitySAXFunc,0, 14749, 1);
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#elif 1
#endif

#if __i386__
CheckTypeSize(entityDeclSAXFunc,4, 14751, 2);
#elif __x86_64__
CheckTypeSize(entityDeclSAXFunc,8, 14751, 11);
#elif __ia64__
CheckTypeSize(entityDeclSAXFunc,8, 14751, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(entityDeclSAXFunc,4, 14751, 6);
#elif __powerpc64__
CheckTypeSize(entityDeclSAXFunc,8, 14751, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(entityDeclSAXFunc,4, 14751, 10);
#elif __s390x__
CheckTypeSize(entityDeclSAXFunc,8, 14751, 12);
#elif 1
CheckTypeSize(entityDeclSAXFunc,0, 14751, 1);
#endif

#if __i386__
CheckTypeSize(notationDeclSAXFunc,4, 14752, 2);
#elif __x86_64__
CheckTypeSize(notationDeclSAXFunc,8, 14752, 11);
#elif __ia64__
CheckTypeSize(notationDeclSAXFunc,8, 14752, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(notationDeclSAXFunc,4, 14752, 6);
#elif __powerpc64__
CheckTypeSize(notationDeclSAXFunc,8, 14752, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(notationDeclSAXFunc,4, 14752, 10);
#elif __s390x__
CheckTypeSize(notationDeclSAXFunc,8, 14752, 12);
#elif 1
CheckTypeSize(notationDeclSAXFunc,0, 14752, 1);
#endif

#if __i386__
CheckTypeSize(struct _xmlEnumeration,8, 14753, 2);
CheckMemberSize(struct _xmlEnumeration,name,4,2,48770);
CheckOffset(struct _xmlEnumeration,name,4,2,48770);
#elif __x86_64__
CheckTypeSize(struct _xmlEnumeration,16, 14753, 11);
CheckMemberSize(struct _xmlEnumeration,name,8,11,48770);
CheckOffset(struct _xmlEnumeration,name,8,11,48770);
#elif __ia64__
CheckTypeSize(struct _xmlEnumeration,16, 14753, 3);
CheckMemberSize(struct _xmlEnumeration,name,8,3,48770);
CheckOffset(struct _xmlEnumeration,name,8,3,48770);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _xmlEnumeration,8, 14753, 6);
CheckMemberSize(struct _xmlEnumeration,name,4,6,48770);
CheckOffset(struct _xmlEnumeration,name,4,6,48770);
#elif __powerpc64__
CheckTypeSize(struct _xmlEnumeration,16, 14753, 9);
CheckMemberSize(struct _xmlEnumeration,name,8,9,48770);
CheckOffset(struct _xmlEnumeration,name,8,9,48770);
#elif __s390__ && !__s390x__
CheckTypeSize(struct _xmlEnumeration,8, 14753, 10);
CheckMemberSize(struct _xmlEnumeration,name,4,10,48770);
CheckOffset(struct _xmlEnumeration,name,4,10,48770);
#elif __s390x__
CheckTypeSize(struct _xmlEnumeration,16, 14753, 12);
CheckMemberSize(struct _xmlEnumeration,name,8,12,48770);
CheckOffset(struct _xmlEnumeration,name,8,12,48770);
#elif 1
CheckTypeSize(struct _xmlEnumeration,0, 14753, 1);
Msg("Missing member data for _xmlEnumeration on All\n");
CheckOffset(struct _xmlEnumeration,next,0,1,48769);
CheckOffset(struct _xmlEnumeration,name,0,1,48770);
#endif

#if __i386__
CheckTypeSize(struct _xmlEnumeration *,4, 14754, 2);
#elif __x86_64__
CheckTypeSize(struct _xmlEnumeration *,8, 14754, 11);
#elif __ia64__
CheckTypeSize(struct _xmlEnumeration *,8, 14754, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _xmlEnumeration *,4, 14754, 6);
#elif __powerpc64__
CheckTypeSize(struct _xmlEnumeration *,8, 14754, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(struct _xmlEnumeration *,4, 14754, 10);
#elif __s390x__
CheckTypeSize(struct _xmlEnumeration *,8, 14754, 12);
#elif 1
CheckTypeSize(struct _xmlEnumeration *,0, 14754, 1);
#endif

#if __i386__
CheckTypeSize(xmlEnumeration,8, 14755, 2);
#elif __x86_64__
CheckTypeSize(xmlEnumeration,16, 14755, 11);
#elif __ia64__
CheckTypeSize(xmlEnumeration,16, 14755, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlEnumeration,8, 14755, 6);
#elif __powerpc64__
CheckTypeSize(xmlEnumeration,16, 14755, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(xmlEnumeration,8, 14755, 10);
#elif __s390x__
CheckTypeSize(xmlEnumeration,16, 14755, 12);
#elif 1
CheckTypeSize(xmlEnumeration,0, 14755, 1);
#endif

#if __i386__
CheckTypeSize(xmlEnumeration *,4, 14756, 2);
#elif __x86_64__
CheckTypeSize(xmlEnumeration *,8, 14756, 11);
#elif __ia64__
CheckTypeSize(xmlEnumeration *,8, 14756, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlEnumeration *,4, 14756, 6);
#elif __powerpc64__
CheckTypeSize(xmlEnumeration *,8, 14756, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(xmlEnumeration *,4, 14756, 10);
#elif __s390x__
CheckTypeSize(xmlEnumeration *,8, 14756, 12);
#elif 1
CheckTypeSize(xmlEnumeration *,0, 14756, 1);
#endif

#if __i386__
CheckTypeSize(xmlEnumerationPtr,4, 14757, 2);
#elif __x86_64__
CheckTypeSize(xmlEnumerationPtr,8, 14757, 11);
#elif __ia64__
CheckTypeSize(xmlEnumerationPtr,8, 14757, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlEnumerationPtr,4, 14757, 6);
#elif __powerpc64__
CheckTypeSize(xmlEnumerationPtr,8, 14757, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(xmlEnumerationPtr,4, 14757, 10);
#elif __s390x__
CheckTypeSize(xmlEnumerationPtr,8, 14757, 12);
#elif 1
CheckTypeSize(xmlEnumerationPtr,0, 14757, 1);
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#elif 1
#endif

#if __i386__
CheckTypeSize(attributeDeclSAXFunc,4, 14759, 2);
#elif __x86_64__
CheckTypeSize(attributeDeclSAXFunc,8, 14759, 11);
#elif __ia64__
CheckTypeSize(attributeDeclSAXFunc,8, 14759, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(attributeDeclSAXFunc,4, 14759, 6);
#elif __powerpc64__
CheckTypeSize(attributeDeclSAXFunc,8, 14759, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(attributeDeclSAXFunc,4, 14759, 10);
#elif __s390x__
CheckTypeSize(attributeDeclSAXFunc,8, 14759, 12);
#elif 1
CheckTypeSize(attributeDeclSAXFunc,0, 14759, 1);
#endif

#if __i386__
CheckTypeSize(struct _xmlElementContent,28, 14760, 2);
CheckMemberSize(struct _xmlElementContent,ocur,4,2,48788);
CheckOffset(struct _xmlElementContent,ocur,4,2,48788);
CheckMemberSize(struct _xmlElementContent,name,4,2,48789);
CheckOffset(struct _xmlElementContent,name,8,2,48789);
CheckMemberSize(struct _xmlElementContent,c1,4,2,48790);
CheckOffset(struct _xmlElementContent,c1,12,2,48790);
CheckMemberSize(struct _xmlElementContent,c2,4,2,48791);
CheckOffset(struct _xmlElementContent,c2,16,2,48791);
CheckMemberSize(struct _xmlElementContent,parent,4,2,48792);
CheckOffset(struct _xmlElementContent,parent,20,2,48792);
CheckMemberSize(struct _xmlElementContent,prefix,4,2,48793);
CheckOffset(struct _xmlElementContent,prefix,24,2,48793);
#elif __x86_64__
CheckTypeSize(struct _xmlElementContent,48, 14760, 11);
CheckMemberSize(struct _xmlElementContent,ocur,4,11,48788);
CheckOffset(struct _xmlElementContent,ocur,4,11,48788);
CheckMemberSize(struct _xmlElementContent,name,8,11,48789);
CheckOffset(struct _xmlElementContent,name,8,11,48789);
CheckMemberSize(struct _xmlElementContent,c1,8,11,48790);
CheckOffset(struct _xmlElementContent,c1,16,11,48790);
CheckMemberSize(struct _xmlElementContent,c2,8,11,48791);
CheckOffset(struct _xmlElementContent,c2,24,11,48791);
CheckMemberSize(struct _xmlElementContent,parent,8,11,48792);
CheckOffset(struct _xmlElementContent,parent,32,11,48792);
CheckMemberSize(struct _xmlElementContent,prefix,8,11,48793);
CheckOffset(struct _xmlElementContent,prefix,40,11,48793);
#elif __ia64__
CheckTypeSize(struct _xmlElementContent,48, 14760, 3);
CheckMemberSize(struct _xmlElementContent,ocur,4,3,48788);
CheckOffset(struct _xmlElementContent,ocur,4,3,48788);
CheckMemberSize(struct _xmlElementContent,name,8,3,48789);
CheckOffset(struct _xmlElementContent,name,8,3,48789);
CheckMemberSize(struct _xmlElementContent,c1,8,3,48790);
CheckOffset(struct _xmlElementContent,c1,16,3,48790);
CheckMemberSize(struct _xmlElementContent,c2,8,3,48791);
CheckOffset(struct _xmlElementContent,c2,24,3,48791);
CheckMemberSize(struct _xmlElementContent,parent,8,3,48792);
CheckOffset(struct _xmlElementContent,parent,32,3,48792);
CheckMemberSize(struct _xmlElementContent,prefix,8,3,48793);
CheckOffset(struct _xmlElementContent,prefix,40,3,48793);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _xmlElementContent,28, 14760, 6);
CheckMemberSize(struct _xmlElementContent,ocur,4,6,48788);
CheckOffset(struct _xmlElementContent,ocur,4,6,48788);
CheckMemberSize(struct _xmlElementContent,name,4,6,48789);
CheckOffset(struct _xmlElementContent,name,8,6,48789);
CheckMemberSize(struct _xmlElementContent,c1,4,6,48790);
CheckOffset(struct _xmlElementContent,c1,12,6,48790);
CheckMemberSize(struct _xmlElementContent,c2,4,6,48791);
CheckOffset(struct _xmlElementContent,c2,16,6,48791);
CheckMemberSize(struct _xmlElementContent,parent,4,6,48792);
CheckOffset(struct _xmlElementContent,parent,20,6,48792);
CheckMemberSize(struct _xmlElementContent,prefix,4,6,48793);
CheckOffset(struct _xmlElementContent,prefix,24,6,48793);
#elif __powerpc64__
CheckTypeSize(struct _xmlElementContent,48, 14760, 9);
CheckMemberSize(struct _xmlElementContent,ocur,4,9,48788);
CheckOffset(struct _xmlElementContent,ocur,4,9,48788);
CheckMemberSize(struct _xmlElementContent,name,8,9,48789);
CheckOffset(struct _xmlElementContent,name,8,9,48789);
CheckMemberSize(struct _xmlElementContent,c1,8,9,48790);
CheckOffset(struct _xmlElementContent,c1,16,9,48790);
CheckMemberSize(struct _xmlElementContent,c2,8,9,48791);
CheckOffset(struct _xmlElementContent,c2,24,9,48791);
CheckMemberSize(struct _xmlElementContent,parent,8,9,48792);
CheckOffset(struct _xmlElementContent,parent,32,9,48792);
CheckMemberSize(struct _xmlElementContent,prefix,8,9,48793);
CheckOffset(struct _xmlElementContent,prefix,40,9,48793);
#elif __s390__ && !__s390x__
CheckTypeSize(struct _xmlElementContent,28, 14760, 10);
CheckMemberSize(struct _xmlElementContent,ocur,4,10,48788);
CheckOffset(struct _xmlElementContent,ocur,4,10,48788);
CheckMemberSize(struct _xmlElementContent,name,4,10,48789);
CheckOffset(struct _xmlElementContent,name,8,10,48789);
CheckMemberSize(struct _xmlElementContent,c1,4,10,48790);
CheckOffset(struct _xmlElementContent,c1,12,10,48790);
CheckMemberSize(struct _xmlElementContent,c2,4,10,48791);
CheckOffset(struct _xmlElementContent,c2,16,10,48791);
CheckMemberSize(struct _xmlElementContent,parent,4,10,48792);
CheckOffset(struct _xmlElementContent,parent,20,10,48792);
CheckMemberSize(struct _xmlElementContent,prefix,4,10,48793);
CheckOffset(struct _xmlElementContent,prefix,24,10,48793);
#elif __s390x__
CheckTypeSize(struct _xmlElementContent,48, 14760, 12);
CheckMemberSize(struct _xmlElementContent,ocur,4,12,48788);
CheckOffset(struct _xmlElementContent,ocur,4,12,48788);
CheckMemberSize(struct _xmlElementContent,name,8,12,48789);
CheckOffset(struct _xmlElementContent,name,8,12,48789);
CheckMemberSize(struct _xmlElementContent,c1,8,12,48790);
CheckOffset(struct _xmlElementContent,c1,16,12,48790);
CheckMemberSize(struct _xmlElementContent,c2,8,12,48791);
CheckOffset(struct _xmlElementContent,c2,24,12,48791);
CheckMemberSize(struct _xmlElementContent,parent,8,12,48792);
CheckOffset(struct _xmlElementContent,parent,32,12,48792);
CheckMemberSize(struct _xmlElementContent,prefix,8,12,48793);
CheckOffset(struct _xmlElementContent,prefix,40,12,48793);
#elif 1
CheckTypeSize(struct _xmlElementContent,0, 14760, 1);
Msg("Missing member data for _xmlElementContent on All\n");
CheckOffset(struct _xmlElementContent,type,0,1,48783);
CheckOffset(struct _xmlElementContent,ocur,0,1,48788);
CheckOffset(struct _xmlElementContent,name,0,1,48789);
CheckOffset(struct _xmlElementContent,c1,0,1,48790);
CheckOffset(struct _xmlElementContent,c2,0,1,48791);
CheckOffset(struct _xmlElementContent,parent,0,1,48792);
CheckOffset(struct _xmlElementContent,prefix,0,1,48793);
#endif

#if __i386__
CheckEnum("XML_ELEMENT_CONTENT_PCDATA",XML_ELEMENT_CONTENT_PCDATA,1,48779);
CheckEnum("XML_ELEMENT_CONTENT_ELEMENT",XML_ELEMENT_CONTENT_ELEMENT,2,48780);
CheckEnum("XML_ELEMENT_CONTENT_SEQ",XML_ELEMENT_CONTENT_SEQ,3,48781);
CheckEnum("XML_ELEMENT_CONTENT_OR",XML_ELEMENT_CONTENT_OR,4,48782);
#elif __x86_64__
CheckEnum("XML_ELEMENT_CONTENT_PCDATA",XML_ELEMENT_CONTENT_PCDATA,1,48779);
CheckEnum("XML_ELEMENT_CONTENT_ELEMENT",XML_ELEMENT_CONTENT_ELEMENT,2,48780);
CheckEnum("XML_ELEMENT_CONTENT_SEQ",XML_ELEMENT_CONTENT_SEQ,3,48781);
CheckEnum("XML_ELEMENT_CONTENT_OR",XML_ELEMENT_CONTENT_OR,4,48782);
#elif __ia64__
CheckEnum("XML_ELEMENT_CONTENT_PCDATA",XML_ELEMENT_CONTENT_PCDATA,1,48779);
CheckEnum("XML_ELEMENT_CONTENT_ELEMENT",XML_ELEMENT_CONTENT_ELEMENT,2,48780);
CheckEnum("XML_ELEMENT_CONTENT_SEQ",XML_ELEMENT_CONTENT_SEQ,3,48781);
CheckEnum("XML_ELEMENT_CONTENT_OR",XML_ELEMENT_CONTENT_OR,4,48782);
#elif __powerpc__ && !__powerpc64__
CheckEnum("XML_ELEMENT_CONTENT_PCDATA",XML_ELEMENT_CONTENT_PCDATA,1,48779);
CheckEnum("XML_ELEMENT_CONTENT_ELEMENT",XML_ELEMENT_CONTENT_ELEMENT,2,48780);
CheckEnum("XML_ELEMENT_CONTENT_SEQ",XML_ELEMENT_CONTENT_SEQ,3,48781);
CheckEnum("XML_ELEMENT_CONTENT_OR",XML_ELEMENT_CONTENT_OR,4,48782);
#elif __powerpc64__
CheckEnum("XML_ELEMENT_CONTENT_PCDATA",XML_ELEMENT_CONTENT_PCDATA,1,48779);
CheckEnum("XML_ELEMENT_CONTENT_ELEMENT",XML_ELEMENT_CONTENT_ELEMENT,2,48780);
CheckEnum("XML_ELEMENT_CONTENT_SEQ",XML_ELEMENT_CONTENT_SEQ,3,48781);
CheckEnum("XML_ELEMENT_CONTENT_OR",XML_ELEMENT_CONTENT_OR,4,48782);
#elif __s390__ && !__s390x__
CheckEnum("XML_ELEMENT_CONTENT_PCDATA",XML_ELEMENT_CONTENT_PCDATA,1,48779);
CheckEnum("XML_ELEMENT_CONTENT_ELEMENT",XML_ELEMENT_CONTENT_ELEMENT,2,48780);
CheckEnum("XML_ELEMENT_CONTENT_SEQ",XML_ELEMENT_CONTENT_SEQ,3,48781);
CheckEnum("XML_ELEMENT_CONTENT_OR",XML_ELEMENT_CONTENT_OR,4,48782);
#elif __s390x__
CheckEnum("XML_ELEMENT_CONTENT_PCDATA",XML_ELEMENT_CONTENT_PCDATA,1,48779);
CheckEnum("XML_ELEMENT_CONTENT_ELEMENT",XML_ELEMENT_CONTENT_ELEMENT,2,48780);
CheckEnum("XML_ELEMENT_CONTENT_SEQ",XML_ELEMENT_CONTENT_SEQ,3,48781);
CheckEnum("XML_ELEMENT_CONTENT_OR",XML_ELEMENT_CONTENT_OR,4,48782);
#elif 1
CheckEnum("XML_ELEMENT_CONTENT_PCDATA",XML_ELEMENT_CONTENT_PCDATA,1,48779);
CheckEnum("XML_ELEMENT_CONTENT_ELEMENT",XML_ELEMENT_CONTENT_ELEMENT,2,48780);
CheckEnum("XML_ELEMENT_CONTENT_SEQ",XML_ELEMENT_CONTENT_SEQ,3,48781);
CheckEnum("XML_ELEMENT_CONTENT_OR",XML_ELEMENT_CONTENT_OR,4,48782);
#endif

#if __i386__
CheckTypeSize(xmlElementContentType,4, 14762, 2);
#elif __x86_64__
CheckTypeSize(xmlElementContentType,4, 14762, 11);
#elif __ia64__
CheckTypeSize(xmlElementContentType,4, 14762, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlElementContentType,4, 14762, 6);
#elif __powerpc64__
CheckTypeSize(xmlElementContentType,4, 14762, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(xmlElementContentType,4, 14762, 10);
#elif __s390x__
CheckTypeSize(xmlElementContentType,4, 14762, 12);
#elif 1
CheckTypeSize(xmlElementContentType,0, 14762, 1);
#endif

#if __i386__
CheckEnum("XML_ELEMENT_CONTENT_ONCE",XML_ELEMENT_CONTENT_ONCE,1,48784);
CheckEnum("XML_ELEMENT_CONTENT_OPT",XML_ELEMENT_CONTENT_OPT,2,48785);
CheckEnum("XML_ELEMENT_CONTENT_MULT",XML_ELEMENT_CONTENT_MULT,3,48786);
CheckEnum("XML_ELEMENT_CONTENT_PLUS",XML_ELEMENT_CONTENT_PLUS,4,48787);
#elif __x86_64__
CheckEnum("XML_ELEMENT_CONTENT_ONCE",XML_ELEMENT_CONTENT_ONCE,1,48784);
CheckEnum("XML_ELEMENT_CONTENT_OPT",XML_ELEMENT_CONTENT_OPT,2,48785);
CheckEnum("XML_ELEMENT_CONTENT_MULT",XML_ELEMENT_CONTENT_MULT,3,48786);
CheckEnum("XML_ELEMENT_CONTENT_PLUS",XML_ELEMENT_CONTENT_PLUS,4,48787);
#elif __ia64__
CheckEnum("XML_ELEMENT_CONTENT_ONCE",XML_ELEMENT_CONTENT_ONCE,1,48784);
CheckEnum("XML_ELEMENT_CONTENT_OPT",XML_ELEMENT_CONTENT_OPT,2,48785);
CheckEnum("XML_ELEMENT_CONTENT_MULT",XML_ELEMENT_CONTENT_MULT,3,48786);
CheckEnum("XML_ELEMENT_CONTENT_PLUS",XML_ELEMENT_CONTENT_PLUS,4,48787);
#elif __powerpc__ && !__powerpc64__
CheckEnum("XML_ELEMENT_CONTENT_ONCE",XML_ELEMENT_CONTENT_ONCE,1,48784);
CheckEnum("XML_ELEMENT_CONTENT_OPT",XML_ELEMENT_CONTENT_OPT,2,48785);
CheckEnum("XML_ELEMENT_CONTENT_MULT",XML_ELEMENT_CONTENT_MULT,3,48786);
CheckEnum("XML_ELEMENT_CONTENT_PLUS",XML_ELEMENT_CONTENT_PLUS,4,48787);
#elif __powerpc64__
CheckEnum("XML_ELEMENT_CONTENT_ONCE",XML_ELEMENT_CONTENT_ONCE,1,48784);
CheckEnum("XML_ELEMENT_CONTENT_OPT",XML_ELEMENT_CONTENT_OPT,2,48785);
CheckEnum("XML_ELEMENT_CONTENT_MULT",XML_ELEMENT_CONTENT_MULT,3,48786);
CheckEnum("XML_ELEMENT_CONTENT_PLUS",XML_ELEMENT_CONTENT_PLUS,4,48787);
#elif __s390__ && !__s390x__
CheckEnum("XML_ELEMENT_CONTENT_ONCE",XML_ELEMENT_CONTENT_ONCE,1,48784);
CheckEnum("XML_ELEMENT_CONTENT_OPT",XML_ELEMENT_CONTENT_OPT,2,48785);
CheckEnum("XML_ELEMENT_CONTENT_MULT",XML_ELEMENT_CONTENT_MULT,3,48786);
CheckEnum("XML_ELEMENT_CONTENT_PLUS",XML_ELEMENT_CONTENT_PLUS,4,48787);
#elif __s390x__
CheckEnum("XML_ELEMENT_CONTENT_ONCE",XML_ELEMENT_CONTENT_ONCE,1,48784);
CheckEnum("XML_ELEMENT_CONTENT_OPT",XML_ELEMENT_CONTENT_OPT,2,48785);
CheckEnum("XML_ELEMENT_CONTENT_MULT",XML_ELEMENT_CONTENT_MULT,3,48786);
CheckEnum("XML_ELEMENT_CONTENT_PLUS",XML_ELEMENT_CONTENT_PLUS,4,48787);
#elif 1
CheckEnum("XML_ELEMENT_CONTENT_ONCE",XML_ELEMENT_CONTENT_ONCE,1,48784);
CheckEnum("XML_ELEMENT_CONTENT_OPT",XML_ELEMENT_CONTENT_OPT,2,48785);
CheckEnum("XML_ELEMENT_CONTENT_MULT",XML_ELEMENT_CONTENT_MULT,3,48786);
CheckEnum("XML_ELEMENT_CONTENT_PLUS",XML_ELEMENT_CONTENT_PLUS,4,48787);
#endif

#if __i386__
CheckTypeSize(xmlElementContentOccur,4, 14764, 2);
#elif __x86_64__
CheckTypeSize(xmlElementContentOccur,4, 14764, 11);
#elif __ia64__
CheckTypeSize(xmlElementContentOccur,4, 14764, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlElementContentOccur,4, 14764, 6);
#elif __powerpc64__
CheckTypeSize(xmlElementContentOccur,4, 14764, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(xmlElementContentOccur,4, 14764, 10);
#elif __s390x__
CheckTypeSize(xmlElementContentOccur,4, 14764, 12);
#elif 1
CheckTypeSize(xmlElementContentOccur,0, 14764, 1);
#endif

#if __i386__
CheckTypeSize(struct _xmlElementContent *,4, 14765, 2);
#elif __x86_64__
CheckTypeSize(struct _xmlElementContent *,8, 14765, 11);
#elif __ia64__
CheckTypeSize(struct _xmlElementContent *,8, 14765, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _xmlElementContent *,4, 14765, 6);
#elif __powerpc64__
CheckTypeSize(struct _xmlElementContent *,8, 14765, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(struct _xmlElementContent *,4, 14765, 10);
#elif __s390x__
CheckTypeSize(struct _xmlElementContent *,8, 14765, 12);
#elif 1
CheckTypeSize(struct _xmlElementContent *,0, 14765, 1);
#endif

#if __i386__
CheckTypeSize(xmlElementContent,28, 14766, 2);
#elif __x86_64__
CheckTypeSize(xmlElementContent,48, 14766, 11);
#elif __ia64__
CheckTypeSize(xmlElementContent,48, 14766, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlElementContent,28, 14766, 6);
#elif __powerpc64__
CheckTypeSize(xmlElementContent,48, 14766, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(xmlElementContent,28, 14766, 10);
#elif __s390x__
CheckTypeSize(xmlElementContent,48, 14766, 12);
#elif 1
CheckTypeSize(xmlElementContent,0, 14766, 1);
#endif

#if __i386__
CheckTypeSize(xmlElementContent *,4, 14767, 2);
#elif __x86_64__
CheckTypeSize(xmlElementContent *,8, 14767, 11);
#elif __ia64__
CheckTypeSize(xmlElementContent *,8, 14767, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlElementContent *,4, 14767, 6);
#elif __powerpc64__
CheckTypeSize(xmlElementContent *,8, 14767, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(xmlElementContent *,4, 14767, 10);
#elif __s390x__
CheckTypeSize(xmlElementContent *,8, 14767, 12);
#elif 1
CheckTypeSize(xmlElementContent *,0, 14767, 1);
#endif

#if __i386__
CheckTypeSize(xmlElementContentPtr,4, 14768, 2);
#elif __x86_64__
CheckTypeSize(xmlElementContentPtr,8, 14768, 11);
#elif __ia64__
CheckTypeSize(xmlElementContentPtr,8, 14768, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlElementContentPtr,4, 14768, 6);
#elif __powerpc64__
CheckTypeSize(xmlElementContentPtr,8, 14768, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(xmlElementContentPtr,4, 14768, 10);
#elif __s390x__
CheckTypeSize(xmlElementContentPtr,8, 14768, 12);
#elif 1
CheckTypeSize(xmlElementContentPtr,0, 14768, 1);
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#elif 1
#endif

#if __i386__
CheckTypeSize(elementDeclSAXFunc,4, 14770, 2);
#elif __x86_64__
CheckTypeSize(elementDeclSAXFunc,8, 14770, 11);
#elif __ia64__
CheckTypeSize(elementDeclSAXFunc,8, 14770, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(elementDeclSAXFunc,4, 14770, 6);
#elif __powerpc64__
CheckTypeSize(elementDeclSAXFunc,8, 14770, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(elementDeclSAXFunc,4, 14770, 10);
#elif __s390x__
CheckTypeSize(elementDeclSAXFunc,8, 14770, 12);
#elif 1
CheckTypeSize(elementDeclSAXFunc,0, 14770, 1);
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#elif 1
#endif

#if __i386__
CheckTypeSize(unparsedEntityDeclSAXFunc,4, 14772, 2);
#elif __x86_64__
CheckTypeSize(unparsedEntityDeclSAXFunc,8, 14772, 11);
#elif __ia64__
CheckTypeSize(unparsedEntityDeclSAXFunc,8, 14772, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(unparsedEntityDeclSAXFunc,4, 14772, 6);
#elif __powerpc64__
CheckTypeSize(unparsedEntityDeclSAXFunc,8, 14772, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(unparsedEntityDeclSAXFunc,4, 14772, 10);
#elif __s390x__
CheckTypeSize(unparsedEntityDeclSAXFunc,8, 14772, 12);
#elif 1
CheckTypeSize(unparsedEntityDeclSAXFunc,0, 14772, 1);
#endif

#if __i386__
CheckTypeSize(struct _xmlSAXLocator,16, 14773, 2);
CheckMemberSize(struct _xmlSAXLocator,getSystemId,4,2,48807);
CheckOffset(struct _xmlSAXLocator,getSystemId,4,2,48807);
CheckMemberSize(struct _xmlSAXLocator,getLineNumber,4,2,48808);
CheckOffset(struct _xmlSAXLocator,getLineNumber,8,2,48808);
CheckMemberSize(struct _xmlSAXLocator,getColumnNumber,4,2,48809);
CheckOffset(struct _xmlSAXLocator,getColumnNumber,12,2,48809);
#elif __x86_64__
CheckTypeSize(struct _xmlSAXLocator,32, 14773, 11);
CheckMemberSize(struct _xmlSAXLocator,getSystemId,8,11,48807);
CheckOffset(struct _xmlSAXLocator,getSystemId,8,11,48807);
CheckMemberSize(struct _xmlSAXLocator,getLineNumber,8,11,48808);
CheckOffset(struct _xmlSAXLocator,getLineNumber,16,11,48808);
CheckMemberSize(struct _xmlSAXLocator,getColumnNumber,8,11,48809);
CheckOffset(struct _xmlSAXLocator,getColumnNumber,24,11,48809);
#elif __ia64__
CheckTypeSize(struct _xmlSAXLocator,32, 14773, 3);
CheckMemberSize(struct _xmlSAXLocator,getSystemId,8,3,48807);
CheckOffset(struct _xmlSAXLocator,getSystemId,8,3,48807);
CheckMemberSize(struct _xmlSAXLocator,getLineNumber,8,3,48808);
CheckOffset(struct _xmlSAXLocator,getLineNumber,16,3,48808);
CheckMemberSize(struct _xmlSAXLocator,getColumnNumber,8,3,48809);
CheckOffset(struct _xmlSAXLocator,getColumnNumber,24,3,48809);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _xmlSAXLocator,16, 14773, 6);
CheckMemberSize(struct _xmlSAXLocator,getSystemId,4,6,48807);
CheckOffset(struct _xmlSAXLocator,getSystemId,4,6,48807);
CheckMemberSize(struct _xmlSAXLocator,getLineNumber,4,6,48808);
CheckOffset(struct _xmlSAXLocator,getLineNumber,8,6,48808);
CheckMemberSize(struct _xmlSAXLocator,getColumnNumber,4,6,48809);
CheckOffset(struct _xmlSAXLocator,getColumnNumber,12,6,48809);
#elif __powerpc64__
CheckTypeSize(struct _xmlSAXLocator,32, 14773, 9);
CheckMemberSize(struct _xmlSAXLocator,getSystemId,8,9,48807);
CheckOffset(struct _xmlSAXLocator,getSystemId,8,9,48807);
CheckMemberSize(struct _xmlSAXLocator,getLineNumber,8,9,48808);
CheckOffset(struct _xmlSAXLocator,getLineNumber,16,9,48808);
CheckMemberSize(struct _xmlSAXLocator,getColumnNumber,8,9,48809);
CheckOffset(struct _xmlSAXLocator,getColumnNumber,24,9,48809);
#elif __s390__ && !__s390x__
CheckTypeSize(struct _xmlSAXLocator,16, 14773, 10);
CheckMemberSize(struct _xmlSAXLocator,getSystemId,4,10,48807);
CheckOffset(struct _xmlSAXLocator,getSystemId,4,10,48807);
CheckMemberSize(struct _xmlSAXLocator,getLineNumber,4,10,48808);
CheckOffset(struct _xmlSAXLocator,getLineNumber,8,10,48808);
CheckMemberSize(struct _xmlSAXLocator,getColumnNumber,4,10,48809);
CheckOffset(struct _xmlSAXLocator,getColumnNumber,12,10,48809);
#elif __s390x__
CheckTypeSize(struct _xmlSAXLocator,32, 14773, 12);
CheckMemberSize(struct _xmlSAXLocator,getSystemId,8,12,48807);
CheckOffset(struct _xmlSAXLocator,getSystemId,8,12,48807);
CheckMemberSize(struct _xmlSAXLocator,getLineNumber,8,12,48808);
CheckOffset(struct _xmlSAXLocator,getLineNumber,16,12,48808);
CheckMemberSize(struct _xmlSAXLocator,getColumnNumber,8,12,48809);
CheckOffset(struct _xmlSAXLocator,getColumnNumber,24,12,48809);
#elif 1
CheckTypeSize(struct _xmlSAXLocator,0, 14773, 1);
Msg("Missing member data for _xmlSAXLocator on All\n");
CheckOffset(struct _xmlSAXLocator,getPublicId,0,1,48806);
CheckOffset(struct _xmlSAXLocator,getSystemId,0,1,48807);
CheckOffset(struct _xmlSAXLocator,getLineNumber,0,1,48808);
CheckOffset(struct _xmlSAXLocator,getColumnNumber,0,1,48809);
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#elif 1
#endif

#if __i386__
CheckTypeSize(xmlSAXLocator,16, 14775, 2);
#elif __x86_64__
CheckTypeSize(xmlSAXLocator,32, 14775, 11);
#elif __ia64__
CheckTypeSize(xmlSAXLocator,32, 14775, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlSAXLocator,16, 14775, 6);
#elif __powerpc64__
CheckTypeSize(xmlSAXLocator,32, 14775, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(xmlSAXLocator,16, 14775, 10);
#elif __s390x__
CheckTypeSize(xmlSAXLocator,32, 14775, 12);
#elif 1
CheckTypeSize(xmlSAXLocator,0, 14775, 1);
#endif

#if __i386__
CheckTypeSize(xmlSAXLocator *,4, 14776, 2);
#elif __x86_64__
CheckTypeSize(xmlSAXLocator *,8, 14776, 11);
#elif __ia64__
CheckTypeSize(xmlSAXLocator *,8, 14776, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlSAXLocator *,4, 14776, 6);
#elif __powerpc64__
CheckTypeSize(xmlSAXLocator *,8, 14776, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(xmlSAXLocator *,4, 14776, 10);
#elif __s390x__
CheckTypeSize(xmlSAXLocator *,8, 14776, 12);
#elif 1
CheckTypeSize(xmlSAXLocator *,0, 14776, 1);
#endif

#if __i386__
CheckTypeSize(xmlSAXLocatorPtr,4, 14777, 2);
#elif __x86_64__
CheckTypeSize(xmlSAXLocatorPtr,8, 14777, 11);
#elif __ia64__
CheckTypeSize(xmlSAXLocatorPtr,8, 14777, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlSAXLocatorPtr,4, 14777, 6);
#elif __powerpc64__
CheckTypeSize(xmlSAXLocatorPtr,8, 14777, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(xmlSAXLocatorPtr,4, 14777, 10);
#elif __s390x__
CheckTypeSize(xmlSAXLocatorPtr,8, 14777, 12);
#elif 1
CheckTypeSize(xmlSAXLocatorPtr,0, 14777, 1);
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#elif 1
#endif

#if __i386__
CheckTypeSize(setDocumentLocatorSAXFunc,4, 14779, 2);
#elif __x86_64__
CheckTypeSize(setDocumentLocatorSAXFunc,8, 14779, 11);
#elif __ia64__
CheckTypeSize(setDocumentLocatorSAXFunc,8, 14779, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(setDocumentLocatorSAXFunc,4, 14779, 6);
#elif __powerpc64__
CheckTypeSize(setDocumentLocatorSAXFunc,8, 14779, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(setDocumentLocatorSAXFunc,4, 14779, 10);
#elif __s390x__
CheckTypeSize(setDocumentLocatorSAXFunc,8, 14779, 12);
#elif 1
CheckTypeSize(setDocumentLocatorSAXFunc,0, 14779, 1);
#endif

#if __i386__
CheckTypeSize(startDocumentSAXFunc,4, 14780, 2);
#elif __x86_64__
CheckTypeSize(startDocumentSAXFunc,8, 14780, 11);
#elif __ia64__
CheckTypeSize(startDocumentSAXFunc,8, 14780, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(startDocumentSAXFunc,4, 14780, 6);
#elif __powerpc64__
CheckTypeSize(startDocumentSAXFunc,8, 14780, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(startDocumentSAXFunc,4, 14780, 10);
#elif __s390x__
CheckTypeSize(startDocumentSAXFunc,8, 14780, 12);
#elif 1
CheckTypeSize(startDocumentSAXFunc,0, 14780, 1);
#endif

#if __i386__
CheckTypeSize(endDocumentSAXFunc,4, 14781, 2);
#elif __x86_64__
CheckTypeSize(endDocumentSAXFunc,8, 14781, 11);
#elif __ia64__
CheckTypeSize(endDocumentSAXFunc,8, 14781, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(endDocumentSAXFunc,4, 14781, 6);
#elif __powerpc64__
CheckTypeSize(endDocumentSAXFunc,8, 14781, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(endDocumentSAXFunc,4, 14781, 10);
#elif __s390x__
CheckTypeSize(endDocumentSAXFunc,8, 14781, 12);
#elif 1
CheckTypeSize(endDocumentSAXFunc,0, 14781, 1);
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#elif 1
#endif

#if __i386__
CheckTypeSize(startElementSAXFunc,4, 14783, 2);
#elif __x86_64__
CheckTypeSize(startElementSAXFunc,8, 14783, 11);
#elif __ia64__
CheckTypeSize(startElementSAXFunc,8, 14783, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(startElementSAXFunc,4, 14783, 6);
#elif __powerpc64__
CheckTypeSize(startElementSAXFunc,8, 14783, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(startElementSAXFunc,4, 14783, 10);
#elif __s390x__
CheckTypeSize(startElementSAXFunc,8, 14783, 12);
#elif 1
CheckTypeSize(startElementSAXFunc,0, 14783, 1);
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#elif 1
#endif

#if __i386__
CheckTypeSize(endElementSAXFunc,4, 14785, 2);
#elif __x86_64__
CheckTypeSize(endElementSAXFunc,8, 14785, 11);
#elif __ia64__
CheckTypeSize(endElementSAXFunc,8, 14785, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(endElementSAXFunc,4, 14785, 6);
#elif __powerpc64__
CheckTypeSize(endElementSAXFunc,8, 14785, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(endElementSAXFunc,4, 14785, 10);
#elif __s390x__
CheckTypeSize(endElementSAXFunc,8, 14785, 12);
#elif 1
CheckTypeSize(endElementSAXFunc,0, 14785, 1);
#endif

#if __i386__
CheckTypeSize(referenceSAXFunc,4, 14786, 2);
#elif __x86_64__
CheckTypeSize(referenceSAXFunc,8, 14786, 11);
#elif __ia64__
CheckTypeSize(referenceSAXFunc,8, 14786, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(referenceSAXFunc,4, 14786, 6);
#elif __powerpc64__
CheckTypeSize(referenceSAXFunc,8, 14786, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(referenceSAXFunc,4, 14786, 10);
#elif __s390x__
CheckTypeSize(referenceSAXFunc,8, 14786, 12);
#elif 1
CheckTypeSize(referenceSAXFunc,0, 14786, 1);
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#elif 1
#endif

#if __i386__
CheckTypeSize(charactersSAXFunc,4, 14788, 2);
#elif __x86_64__
CheckTypeSize(charactersSAXFunc,8, 14788, 11);
#elif __ia64__
CheckTypeSize(charactersSAXFunc,8, 14788, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(charactersSAXFunc,4, 14788, 6);
#elif __powerpc64__
CheckTypeSize(charactersSAXFunc,8, 14788, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(charactersSAXFunc,4, 14788, 10);
#elif __s390x__
CheckTypeSize(charactersSAXFunc,8, 14788, 12);
#elif 1
CheckTypeSize(charactersSAXFunc,0, 14788, 1);
#endif

#if __i386__
CheckTypeSize(ignorableWhitespaceSAXFunc,4, 14789, 2);
#elif __x86_64__
CheckTypeSize(ignorableWhitespaceSAXFunc,8, 14789, 11);
#elif __ia64__
CheckTypeSize(ignorableWhitespaceSAXFunc,8, 14789, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(ignorableWhitespaceSAXFunc,4, 14789, 6);
#elif __powerpc64__
CheckTypeSize(ignorableWhitespaceSAXFunc,8, 14789, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(ignorableWhitespaceSAXFunc,4, 14789, 10);
#elif __s390x__
CheckTypeSize(ignorableWhitespaceSAXFunc,8, 14789, 12);
#elif 1
CheckTypeSize(ignorableWhitespaceSAXFunc,0, 14789, 1);
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#elif 1
#endif

#if __i386__
CheckTypeSize(processingInstructionSAXFunc,4, 14791, 2);
#elif __x86_64__
CheckTypeSize(processingInstructionSAXFunc,8, 14791, 11);
#elif __ia64__
CheckTypeSize(processingInstructionSAXFunc,8, 14791, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(processingInstructionSAXFunc,4, 14791, 6);
#elif __powerpc64__
CheckTypeSize(processingInstructionSAXFunc,8, 14791, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(processingInstructionSAXFunc,4, 14791, 10);
#elif __s390x__
CheckTypeSize(processingInstructionSAXFunc,8, 14791, 12);
#elif 1
CheckTypeSize(processingInstructionSAXFunc,0, 14791, 1);
#endif

#if __i386__
CheckTypeSize(commentSAXFunc,4, 14792, 2);
#elif __x86_64__
CheckTypeSize(commentSAXFunc,8, 14792, 11);
#elif __ia64__
CheckTypeSize(commentSAXFunc,8, 14792, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(commentSAXFunc,4, 14792, 6);
#elif __powerpc64__
CheckTypeSize(commentSAXFunc,8, 14792, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(commentSAXFunc,4, 14792, 10);
#elif __s390x__
CheckTypeSize(commentSAXFunc,8, 14792, 12);
#elif 1
CheckTypeSize(commentSAXFunc,0, 14792, 1);
#endif

#if __i386__
CheckTypeSize(warningSAXFunc,4, 14793, 2);
#elif __x86_64__
CheckTypeSize(warningSAXFunc,8, 14793, 11);
#elif __ia64__
CheckTypeSize(warningSAXFunc,8, 14793, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(warningSAXFunc,4, 14793, 6);
#elif __powerpc64__
CheckTypeSize(warningSAXFunc,8, 14793, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(warningSAXFunc,4, 14793, 10);
#elif __s390x__
CheckTypeSize(warningSAXFunc,8, 14793, 12);
#elif 1
CheckTypeSize(warningSAXFunc,0, 14793, 1);
#endif

#if __i386__
CheckTypeSize(errorSAXFunc,4, 14794, 2);
#elif __x86_64__
CheckTypeSize(errorSAXFunc,8, 14794, 11);
#elif __ia64__
CheckTypeSize(errorSAXFunc,8, 14794, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(errorSAXFunc,4, 14794, 6);
#elif __powerpc64__
CheckTypeSize(errorSAXFunc,8, 14794, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(errorSAXFunc,4, 14794, 10);
#elif __s390x__
CheckTypeSize(errorSAXFunc,8, 14794, 12);
#elif 1
CheckTypeSize(errorSAXFunc,0, 14794, 1);
#endif

#if __i386__
CheckTypeSize(fatalErrorSAXFunc,4, 14795, 2);
#elif __x86_64__
CheckTypeSize(fatalErrorSAXFunc,8, 14795, 11);
#elif __ia64__
CheckTypeSize(fatalErrorSAXFunc,8, 14795, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(fatalErrorSAXFunc,4, 14795, 6);
#elif __powerpc64__
CheckTypeSize(fatalErrorSAXFunc,8, 14795, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(fatalErrorSAXFunc,4, 14795, 10);
#elif __s390x__
CheckTypeSize(fatalErrorSAXFunc,8, 14795, 12);
#elif 1
CheckTypeSize(fatalErrorSAXFunc,0, 14795, 1);
#endif

#if __i386__
CheckTypeSize(getParameterEntitySAXFunc,4, 14796, 2);
#elif __x86_64__
CheckTypeSize(getParameterEntitySAXFunc,8, 14796, 11);
#elif __ia64__
CheckTypeSize(getParameterEntitySAXFunc,8, 14796, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(getParameterEntitySAXFunc,4, 14796, 6);
#elif __powerpc64__
CheckTypeSize(getParameterEntitySAXFunc,8, 14796, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(getParameterEntitySAXFunc,4, 14796, 10);
#elif __s390x__
CheckTypeSize(getParameterEntitySAXFunc,8, 14796, 12);
#elif 1
CheckTypeSize(getParameterEntitySAXFunc,0, 14796, 1);
#endif

#if __i386__
CheckTypeSize(cdataBlockSAXFunc,4, 14797, 2);
#elif __x86_64__
CheckTypeSize(cdataBlockSAXFunc,8, 14797, 11);
#elif __ia64__
CheckTypeSize(cdataBlockSAXFunc,8, 14797, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(cdataBlockSAXFunc,4, 14797, 6);
#elif __powerpc64__
CheckTypeSize(cdataBlockSAXFunc,8, 14797, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(cdataBlockSAXFunc,4, 14797, 10);
#elif __s390x__
CheckTypeSize(cdataBlockSAXFunc,8, 14797, 12);
#elif 1
CheckTypeSize(cdataBlockSAXFunc,0, 14797, 1);
#endif

#if __i386__
CheckTypeSize(externalSubsetSAXFunc,4, 14798, 2);
#elif __x86_64__
CheckTypeSize(externalSubsetSAXFunc,8, 14798, 11);
#elif __ia64__
CheckTypeSize(externalSubsetSAXFunc,8, 14798, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(externalSubsetSAXFunc,4, 14798, 6);
#elif __powerpc64__
CheckTypeSize(externalSubsetSAXFunc,8, 14798, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(externalSubsetSAXFunc,4, 14798, 10);
#elif __s390x__
CheckTypeSize(externalSubsetSAXFunc,8, 14798, 12);
#elif 1
CheckTypeSize(externalSubsetSAXFunc,0, 14798, 1);
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#elif 1
#endif

#if __i386__
CheckTypeSize(startElementNsSAX2Func,4, 14800, 2);
#elif __x86_64__
CheckTypeSize(startElementNsSAX2Func,8, 14800, 11);
#elif __ia64__
CheckTypeSize(startElementNsSAX2Func,8, 14800, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(startElementNsSAX2Func,4, 14800, 6);
#elif __powerpc64__
CheckTypeSize(startElementNsSAX2Func,8, 14800, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(startElementNsSAX2Func,4, 14800, 10);
#elif __s390x__
CheckTypeSize(startElementNsSAX2Func,8, 14800, 12);
#elif 1
CheckTypeSize(startElementNsSAX2Func,0, 14800, 1);
#endif

#if __i386__
CheckTypeSize(endElementNsSAX2Func,4, 14801, 2);
#elif __x86_64__
CheckTypeSize(endElementNsSAX2Func,8, 14801, 11);
#elif __ia64__
CheckTypeSize(endElementNsSAX2Func,8, 14801, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(endElementNsSAX2Func,4, 14801, 6);
#elif __powerpc64__
CheckTypeSize(endElementNsSAX2Func,8, 14801, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(endElementNsSAX2Func,4, 14801, 10);
#elif __s390x__
CheckTypeSize(endElementNsSAX2Func,8, 14801, 12);
#elif 1
CheckTypeSize(endElementNsSAX2Func,0, 14801, 1);
#endif

#if __i386__
CheckTypeSize(xmlSAXHandler,128, 14802, 2);
#elif __x86_64__
CheckTypeSize(xmlSAXHandler,256, 14802, 11);
#elif __ia64__
CheckTypeSize(xmlSAXHandler,256, 14802, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlSAXHandler,128, 14802, 6);
#elif __powerpc64__
CheckTypeSize(xmlSAXHandler,256, 14802, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(xmlSAXHandler,128, 14802, 10);
#elif __s390x__
CheckTypeSize(xmlSAXHandler,256, 14802, 12);
#elif 1
CheckTypeSize(xmlSAXHandler,0, 14802, 1);
#endif

#if __i386__
CheckTypeSize(xmlSAXHandler *,4, 14803, 2);
#elif __x86_64__
CheckTypeSize(xmlSAXHandler *,8, 14803, 11);
#elif __ia64__
CheckTypeSize(xmlSAXHandler *,8, 14803, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlSAXHandler *,4, 14803, 6);
#elif __powerpc64__
CheckTypeSize(xmlSAXHandler *,8, 14803, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(xmlSAXHandler *,4, 14803, 10);
#elif __s390x__
CheckTypeSize(xmlSAXHandler *,8, 14803, 12);
#elif 1
CheckTypeSize(xmlSAXHandler *,0, 14803, 1);
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
