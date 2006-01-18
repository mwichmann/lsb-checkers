/*
 * Test of libxml2/libxml/xmlIO.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
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
#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14804,0);
Msg("Find size of fptr_xmlIO_546 (14804)\n");
#endif

#if __i386__
CheckTypeSize(xmlOutputMatchCallback,4, 14805, 2)
#elif __x86_64__
CheckTypeSize(xmlOutputMatchCallback,8, 14805, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14805,0);
Msg("Find size of xmlOutputMatchCallback (14805)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14806,0);
Msg("Find size of fptr_xmlIO_472 (14806)\n");
#endif

#if __i386__
CheckTypeSize(xmlOutputOpenCallback,4, 14807, 2)
#elif __x86_64__
CheckTypeSize(xmlOutputOpenCallback,8, 14807, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14807,0);
Msg("Find size of xmlOutputOpenCallback (14807)\n");
#endif

#if __i386__
CheckTypeSize(struct _xmlParserCtxt,440, 14808, 2)
CheckMemberSize(struct _xmlParserCtxt,userData,4,2,48856)
CheckOffset(struct _xmlParserCtxt,userData,4,2,48856)
CheckMemberSize(struct _xmlParserCtxt,myDoc,4,2,48857)
CheckOffset(struct _xmlParserCtxt,myDoc,8,2,48857)
CheckMemberSize(struct _xmlParserCtxt,wellFormed,4,2,48858)
CheckOffset(struct _xmlParserCtxt,wellFormed,12,2,48858)
CheckMemberSize(struct _xmlParserCtxt,replaceEntities,4,2,48859)
CheckOffset(struct _xmlParserCtxt,replaceEntities,16,2,48859)
CheckMemberSize(struct _xmlParserCtxt,version,4,2,48860)
CheckOffset(struct _xmlParserCtxt,version,20,2,48860)
CheckMemberSize(struct _xmlParserCtxt,encoding,4,2,48861)
CheckOffset(struct _xmlParserCtxt,encoding,24,2,48861)
CheckMemberSize(struct _xmlParserCtxt,standalone,4,2,48862)
CheckOffset(struct _xmlParserCtxt,standalone,28,2,48862)
CheckMemberSize(struct _xmlParserCtxt,html,4,2,48863)
CheckOffset(struct _xmlParserCtxt,html,32,2,48863)
CheckMemberSize(struct _xmlParserCtxt,input,4,2,48864)
CheckOffset(struct _xmlParserCtxt,input,36,2,48864)
CheckMemberSize(struct _xmlParserCtxt,inputNr,4,2,48865)
CheckOffset(struct _xmlParserCtxt,inputNr,40,2,48865)
CheckMemberSize(struct _xmlParserCtxt,inputMax,4,2,48866)
CheckOffset(struct _xmlParserCtxt,inputMax,44,2,48866)
CheckMemberSize(struct _xmlParserCtxt,inputTab,4,2,48867)
CheckOffset(struct _xmlParserCtxt,inputTab,48,2,48867)
CheckMemberSize(struct _xmlParserCtxt,node,4,2,48868)
CheckOffset(struct _xmlParserCtxt,node,52,2,48868)
CheckMemberSize(struct _xmlParserCtxt,nodeNr,4,2,48869)
CheckOffset(struct _xmlParserCtxt,nodeNr,56,2,48869)
CheckMemberSize(struct _xmlParserCtxt,nodeMax,4,2,48870)
CheckOffset(struct _xmlParserCtxt,nodeMax,60,2,48870)
CheckMemberSize(struct _xmlParserCtxt,nodeTab,4,2,48871)
CheckOffset(struct _xmlParserCtxt,nodeTab,64,2,48871)
CheckMemberSize(struct _xmlParserCtxt,record_info,4,2,48872)
CheckOffset(struct _xmlParserCtxt,record_info,68,2,48872)
CheckMemberSize(struct _xmlParserCtxt,node_seq,12,2,48881)
CheckOffset(struct _xmlParserCtxt,node_seq,72,2,48881)
CheckMemberSize(struct _xmlParserCtxt,errNo,4,2,48882)
CheckOffset(struct _xmlParserCtxt,errNo,84,2,48882)
CheckMemberSize(struct _xmlParserCtxt,hasExternalSubset,4,2,48883)
CheckOffset(struct _xmlParserCtxt,hasExternalSubset,88,2,48883)
CheckMemberSize(struct _xmlParserCtxt,hasPErefs,4,2,48884)
CheckOffset(struct _xmlParserCtxt,hasPErefs,92,2,48884)
CheckMemberSize(struct _xmlParserCtxt,external,4,2,48885)
CheckOffset(struct _xmlParserCtxt,external,96,2,48885)
CheckMemberSize(struct _xmlParserCtxt,valid,4,2,48886)
CheckOffset(struct _xmlParserCtxt,valid,100,2,48886)
CheckMemberSize(struct _xmlParserCtxt,validate,4,2,48887)
CheckOffset(struct _xmlParserCtxt,validate,104,2,48887)
CheckMemberSize(struct _xmlParserCtxt,vctxt,64,2,48904)
CheckOffset(struct _xmlParserCtxt,vctxt,108,2,48904)
CheckMemberSize(struct _xmlParserCtxt,instate,4,2,48923)
CheckOffset(struct _xmlParserCtxt,instate,172,2,48923)
CheckMemberSize(struct _xmlParserCtxt,token,4,2,48924)
CheckOffset(struct _xmlParserCtxt,token,176,2,48924)
CheckMemberSize(struct _xmlParserCtxt,directory,4,2,48925)
CheckOffset(struct _xmlParserCtxt,directory,180,2,48925)
CheckMemberSize(struct _xmlParserCtxt,name,4,2,48926)
CheckOffset(struct _xmlParserCtxt,name,184,2,48926)
CheckMemberSize(struct _xmlParserCtxt,nameNr,4,2,48927)
CheckOffset(struct _xmlParserCtxt,nameNr,188,2,48927)
CheckMemberSize(struct _xmlParserCtxt,nameMax,4,2,48928)
CheckOffset(struct _xmlParserCtxt,nameMax,192,2,48928)
CheckMemberSize(struct _xmlParserCtxt,nameTab,4,2,48929)
CheckOffset(struct _xmlParserCtxt,nameTab,196,2,48929)
CheckMemberSize(struct _xmlParserCtxt,nbChars,4,2,48930)
CheckOffset(struct _xmlParserCtxt,nbChars,200,2,48930)
CheckMemberSize(struct _xmlParserCtxt,checkIndex,4,2,48931)
CheckOffset(struct _xmlParserCtxt,checkIndex,204,2,48931)
CheckMemberSize(struct _xmlParserCtxt,keepBlanks,4,2,48932)
CheckOffset(struct _xmlParserCtxt,keepBlanks,208,2,48932)
CheckMemberSize(struct _xmlParserCtxt,disableSAX,4,2,48933)
CheckOffset(struct _xmlParserCtxt,disableSAX,212,2,48933)
CheckMemberSize(struct _xmlParserCtxt,inSubset,4,2,48934)
CheckOffset(struct _xmlParserCtxt,inSubset,216,2,48934)
CheckMemberSize(struct _xmlParserCtxt,intSubName,4,2,48935)
CheckOffset(struct _xmlParserCtxt,intSubName,220,2,48935)
CheckMemberSize(struct _xmlParserCtxt,extSubURI,4,2,48936)
CheckOffset(struct _xmlParserCtxt,extSubURI,224,2,48936)
CheckMemberSize(struct _xmlParserCtxt,extSubSystem,4,2,48937)
CheckOffset(struct _xmlParserCtxt,extSubSystem,228,2,48937)
CheckMemberSize(struct _xmlParserCtxt,space,4,2,48938)
CheckOffset(struct _xmlParserCtxt,space,232,2,48938)
CheckMemberSize(struct _xmlParserCtxt,spaceNr,4,2,48939)
CheckOffset(struct _xmlParserCtxt,spaceNr,236,2,48939)
CheckMemberSize(struct _xmlParserCtxt,spaceMax,4,2,48940)
CheckOffset(struct _xmlParserCtxt,spaceMax,240,2,48940)
CheckMemberSize(struct _xmlParserCtxt,spaceTab,4,2,48941)
CheckOffset(struct _xmlParserCtxt,spaceTab,244,2,48941)
CheckMemberSize(struct _xmlParserCtxt,depth,4,2,48942)
CheckOffset(struct _xmlParserCtxt,depth,248,2,48942)
CheckMemberSize(struct _xmlParserCtxt,entity,4,2,48943)
CheckOffset(struct _xmlParserCtxt,entity,252,2,48943)
CheckMemberSize(struct _xmlParserCtxt,charset,4,2,48944)
CheckOffset(struct _xmlParserCtxt,charset,256,2,48944)
CheckMemberSize(struct _xmlParserCtxt,nodelen,4,2,48945)
CheckOffset(struct _xmlParserCtxt,nodelen,260,2,48945)
CheckMemberSize(struct _xmlParserCtxt,nodemem,4,2,48946)
CheckOffset(struct _xmlParserCtxt,nodemem,264,2,48946)
CheckMemberSize(struct _xmlParserCtxt,pedantic,4,2,48947)
CheckOffset(struct _xmlParserCtxt,pedantic,268,2,48947)
CheckMemberSize(struct _xmlParserCtxt,_private,4,2,48948)
CheckOffset(struct _xmlParserCtxt,_private,272,2,48948)
CheckMemberSize(struct _xmlParserCtxt,loadsubset,4,2,48949)
CheckOffset(struct _xmlParserCtxt,loadsubset,276,2,48949)
CheckMemberSize(struct _xmlParserCtxt,linenumbers,4,2,48950)
CheckOffset(struct _xmlParserCtxt,linenumbers,280,2,48950)
CheckMemberSize(struct _xmlParserCtxt,catalogs,4,2,48951)
CheckOffset(struct _xmlParserCtxt,catalogs,284,2,48951)
CheckMemberSize(struct _xmlParserCtxt,recovery,4,2,48952)
CheckOffset(struct _xmlParserCtxt,recovery,288,2,48952)
CheckMemberSize(struct _xmlParserCtxt,progressive,4,2,48953)
CheckOffset(struct _xmlParserCtxt,progressive,292,2,48953)
CheckMemberSize(struct _xmlParserCtxt,dict,4,2,48954)
CheckOffset(struct _xmlParserCtxt,dict,296,2,48954)
CheckMemberSize(struct _xmlParserCtxt,atts,4,2,48955)
CheckOffset(struct _xmlParserCtxt,atts,300,2,48955)
CheckMemberSize(struct _xmlParserCtxt,maxatts,4,2,48956)
CheckOffset(struct _xmlParserCtxt,maxatts,304,2,48956)
CheckMemberSize(struct _xmlParserCtxt,docdict,4,2,48957)
CheckOffset(struct _xmlParserCtxt,docdict,308,2,48957)
CheckMemberSize(struct _xmlParserCtxt,str_xml,4,2,48958)
CheckOffset(struct _xmlParserCtxt,str_xml,312,2,48958)
CheckMemberSize(struct _xmlParserCtxt,str_xmlns,4,2,48959)
CheckOffset(struct _xmlParserCtxt,str_xmlns,316,2,48959)
CheckMemberSize(struct _xmlParserCtxt,str_xml_ns,4,2,48960)
CheckOffset(struct _xmlParserCtxt,str_xml_ns,320,2,48960)
CheckMemberSize(struct _xmlParserCtxt,sax2,4,2,48961)
CheckOffset(struct _xmlParserCtxt,sax2,324,2,48961)
CheckMemberSize(struct _xmlParserCtxt,nsNr,4,2,48962)
CheckOffset(struct _xmlParserCtxt,nsNr,328,2,48962)
CheckMemberSize(struct _xmlParserCtxt,nsMax,4,2,48963)
CheckOffset(struct _xmlParserCtxt,nsMax,332,2,48963)
CheckMemberSize(struct _xmlParserCtxt,nsTab,4,2,48964)
CheckOffset(struct _xmlParserCtxt,nsTab,336,2,48964)
CheckMemberSize(struct _xmlParserCtxt,attallocs,4,2,48965)
CheckOffset(struct _xmlParserCtxt,attallocs,340,2,48965)
CheckMemberSize(struct _xmlParserCtxt,pushTab,4,2,48966)
CheckOffset(struct _xmlParserCtxt,pushTab,344,2,48966)
CheckMemberSize(struct _xmlParserCtxt,attsDefault,4,2,48967)
CheckOffset(struct _xmlParserCtxt,attsDefault,348,2,48967)
CheckMemberSize(struct _xmlParserCtxt,attsSpecial,4,2,48968)
CheckOffset(struct _xmlParserCtxt,attsSpecial,352,2,48968)
CheckMemberSize(struct _xmlParserCtxt,nsWellFormed,4,2,48969)
CheckOffset(struct _xmlParserCtxt,nsWellFormed,356,2,48969)
CheckMemberSize(struct _xmlParserCtxt,options,4,2,48970)
CheckOffset(struct _xmlParserCtxt,options,360,2,48970)
CheckMemberSize(struct _xmlParserCtxt,dictNames,4,2,48971)
CheckOffset(struct _xmlParserCtxt,dictNames,364,2,48971)
CheckMemberSize(struct _xmlParserCtxt,freeElemsNr,4,2,48972)
CheckOffset(struct _xmlParserCtxt,freeElemsNr,368,2,48972)
CheckMemberSize(struct _xmlParserCtxt,freeElems,4,2,48973)
CheckOffset(struct _xmlParserCtxt,freeElems,372,2,48973)
CheckMemberSize(struct _xmlParserCtxt,freeAttrsNr,4,2,48974)
CheckOffset(struct _xmlParserCtxt,freeAttrsNr,376,2,48974)
CheckMemberSize(struct _xmlParserCtxt,freeAttrs,4,2,48975)
CheckOffset(struct _xmlParserCtxt,freeAttrs,380,2,48975)
CheckMemberSize(struct _xmlParserCtxt,lastError,52,2,48976)
CheckOffset(struct _xmlParserCtxt,lastError,384,2,48976)
CheckMemberSize(struct _xmlParserCtxt,parseMode,4,2,48983)
CheckOffset(struct _xmlParserCtxt,parseMode,436,2,48983)
#elif __x86_64__
CheckTypeSize(struct _xmlParserCtxt,696, 14808, 11)
CheckMemberSize(struct _xmlParserCtxt,userData,8,11,48856)
CheckOffset(struct _xmlParserCtxt,userData,8,11,48856)
CheckMemberSize(struct _xmlParserCtxt,myDoc,8,11,48857)
CheckOffset(struct _xmlParserCtxt,myDoc,16,11,48857)
CheckMemberSize(struct _xmlParserCtxt,wellFormed,4,11,48858)
CheckOffset(struct _xmlParserCtxt,wellFormed,24,11,48858)
CheckMemberSize(struct _xmlParserCtxt,replaceEntities,4,11,48859)
CheckOffset(struct _xmlParserCtxt,replaceEntities,28,11,48859)
CheckMemberSize(struct _xmlParserCtxt,version,8,11,48860)
CheckOffset(struct _xmlParserCtxt,version,32,11,48860)
CheckMemberSize(struct _xmlParserCtxt,encoding,8,11,48861)
CheckOffset(struct _xmlParserCtxt,encoding,40,11,48861)
CheckMemberSize(struct _xmlParserCtxt,standalone,4,11,48862)
CheckOffset(struct _xmlParserCtxt,standalone,48,11,48862)
CheckMemberSize(struct _xmlParserCtxt,html,4,11,48863)
CheckOffset(struct _xmlParserCtxt,html,52,11,48863)
CheckMemberSize(struct _xmlParserCtxt,input,8,11,48864)
CheckOffset(struct _xmlParserCtxt,input,56,11,48864)
CheckMemberSize(struct _xmlParserCtxt,inputNr,4,11,48865)
CheckOffset(struct _xmlParserCtxt,inputNr,64,11,48865)
CheckMemberSize(struct _xmlParserCtxt,inputMax,4,11,48866)
CheckOffset(struct _xmlParserCtxt,inputMax,68,11,48866)
CheckMemberSize(struct _xmlParserCtxt,inputTab,8,11,48867)
CheckOffset(struct _xmlParserCtxt,inputTab,72,11,48867)
CheckMemberSize(struct _xmlParserCtxt,node,8,11,48868)
CheckOffset(struct _xmlParserCtxt,node,80,11,48868)
CheckMemberSize(struct _xmlParserCtxt,nodeNr,4,11,48869)
CheckOffset(struct _xmlParserCtxt,nodeNr,88,11,48869)
CheckMemberSize(struct _xmlParserCtxt,nodeMax,4,11,48870)
CheckOffset(struct _xmlParserCtxt,nodeMax,92,11,48870)
CheckMemberSize(struct _xmlParserCtxt,nodeTab,8,11,48871)
CheckOffset(struct _xmlParserCtxt,nodeTab,96,11,48871)
CheckMemberSize(struct _xmlParserCtxt,record_info,4,11,48872)
CheckOffset(struct _xmlParserCtxt,record_info,104,11,48872)
CheckMemberSize(struct _xmlParserCtxt,node_seq,24,11,48881)
CheckOffset(struct _xmlParserCtxt,node_seq,112,11,48881)
CheckMemberSize(struct _xmlParserCtxt,errNo,4,11,48882)
CheckOffset(struct _xmlParserCtxt,errNo,136,11,48882)
CheckMemberSize(struct _xmlParserCtxt,hasExternalSubset,4,11,48883)
CheckOffset(struct _xmlParserCtxt,hasExternalSubset,140,11,48883)
CheckMemberSize(struct _xmlParserCtxt,hasPErefs,4,11,48884)
CheckOffset(struct _xmlParserCtxt,hasPErefs,144,11,48884)
CheckMemberSize(struct _xmlParserCtxt,external,4,11,48885)
CheckOffset(struct _xmlParserCtxt,external,148,11,48885)
CheckMemberSize(struct _xmlParserCtxt,valid,4,11,48886)
CheckOffset(struct _xmlParserCtxt,valid,152,11,48886)
CheckMemberSize(struct _xmlParserCtxt,validate,4,11,48887)
CheckOffset(struct _xmlParserCtxt,validate,156,11,48887)
CheckMemberSize(struct _xmlParserCtxt,vctxt,112,11,48904)
CheckOffset(struct _xmlParserCtxt,vctxt,160,11,48904)
CheckMemberSize(struct _xmlParserCtxt,instate,4,11,48923)
CheckOffset(struct _xmlParserCtxt,instate,272,11,48923)
CheckMemberSize(struct _xmlParserCtxt,token,4,11,48924)
CheckOffset(struct _xmlParserCtxt,token,276,11,48924)
CheckMemberSize(struct _xmlParserCtxt,directory,8,11,48925)
CheckOffset(struct _xmlParserCtxt,directory,280,11,48925)
CheckMemberSize(struct _xmlParserCtxt,name,8,11,48926)
CheckOffset(struct _xmlParserCtxt,name,288,11,48926)
CheckMemberSize(struct _xmlParserCtxt,nameNr,4,11,48927)
CheckOffset(struct _xmlParserCtxt,nameNr,296,11,48927)
CheckMemberSize(struct _xmlParserCtxt,nameMax,4,11,48928)
CheckOffset(struct _xmlParserCtxt,nameMax,300,11,48928)
CheckMemberSize(struct _xmlParserCtxt,nameTab,8,11,48929)
CheckOffset(struct _xmlParserCtxt,nameTab,304,11,48929)
CheckMemberSize(struct _xmlParserCtxt,nbChars,8,11,48930)
CheckOffset(struct _xmlParserCtxt,nbChars,312,11,48930)
CheckMemberSize(struct _xmlParserCtxt,checkIndex,8,11,48931)
CheckOffset(struct _xmlParserCtxt,checkIndex,320,11,48931)
CheckMemberSize(struct _xmlParserCtxt,keepBlanks,4,11,48932)
CheckOffset(struct _xmlParserCtxt,keepBlanks,328,11,48932)
CheckMemberSize(struct _xmlParserCtxt,disableSAX,4,11,48933)
CheckOffset(struct _xmlParserCtxt,disableSAX,332,11,48933)
CheckMemberSize(struct _xmlParserCtxt,inSubset,4,11,48934)
CheckOffset(struct _xmlParserCtxt,inSubset,336,11,48934)
CheckMemberSize(struct _xmlParserCtxt,intSubName,8,11,48935)
CheckOffset(struct _xmlParserCtxt,intSubName,344,11,48935)
CheckMemberSize(struct _xmlParserCtxt,extSubURI,8,11,48936)
CheckOffset(struct _xmlParserCtxt,extSubURI,352,11,48936)
CheckMemberSize(struct _xmlParserCtxt,extSubSystem,8,11,48937)
CheckOffset(struct _xmlParserCtxt,extSubSystem,360,11,48937)
CheckMemberSize(struct _xmlParserCtxt,space,8,11,48938)
CheckOffset(struct _xmlParserCtxt,space,368,11,48938)
CheckMemberSize(struct _xmlParserCtxt,spaceNr,4,11,48939)
CheckOffset(struct _xmlParserCtxt,spaceNr,376,11,48939)
CheckMemberSize(struct _xmlParserCtxt,spaceMax,4,11,48940)
CheckOffset(struct _xmlParserCtxt,spaceMax,380,11,48940)
CheckMemberSize(struct _xmlParserCtxt,spaceTab,8,11,48941)
CheckOffset(struct _xmlParserCtxt,spaceTab,384,11,48941)
CheckMemberSize(struct _xmlParserCtxt,depth,4,11,48942)
CheckOffset(struct _xmlParserCtxt,depth,392,11,48942)
CheckMemberSize(struct _xmlParserCtxt,entity,8,11,48943)
CheckOffset(struct _xmlParserCtxt,entity,400,11,48943)
CheckMemberSize(struct _xmlParserCtxt,charset,4,11,48944)
CheckOffset(struct _xmlParserCtxt,charset,408,11,48944)
CheckMemberSize(struct _xmlParserCtxt,nodelen,4,11,48945)
CheckOffset(struct _xmlParserCtxt,nodelen,412,11,48945)
CheckMemberSize(struct _xmlParserCtxt,nodemem,4,11,48946)
CheckOffset(struct _xmlParserCtxt,nodemem,416,11,48946)
CheckMemberSize(struct _xmlParserCtxt,pedantic,4,11,48947)
CheckOffset(struct _xmlParserCtxt,pedantic,420,11,48947)
CheckMemberSize(struct _xmlParserCtxt,_private,8,11,48948)
CheckOffset(struct _xmlParserCtxt,_private,424,11,48948)
CheckMemberSize(struct _xmlParserCtxt,loadsubset,4,11,48949)
CheckOffset(struct _xmlParserCtxt,loadsubset,432,11,48949)
CheckMemberSize(struct _xmlParserCtxt,linenumbers,4,11,48950)
CheckOffset(struct _xmlParserCtxt,linenumbers,436,11,48950)
CheckMemberSize(struct _xmlParserCtxt,catalogs,8,11,48951)
CheckOffset(struct _xmlParserCtxt,catalogs,440,11,48951)
CheckMemberSize(struct _xmlParserCtxt,recovery,4,11,48952)
CheckOffset(struct _xmlParserCtxt,recovery,448,11,48952)
CheckMemberSize(struct _xmlParserCtxt,progressive,4,11,48953)
CheckOffset(struct _xmlParserCtxt,progressive,452,11,48953)
CheckMemberSize(struct _xmlParserCtxt,dict,8,11,48954)
CheckOffset(struct _xmlParserCtxt,dict,456,11,48954)
CheckMemberSize(struct _xmlParserCtxt,atts,8,11,48955)
CheckOffset(struct _xmlParserCtxt,atts,464,11,48955)
CheckMemberSize(struct _xmlParserCtxt,maxatts,4,11,48956)
CheckOffset(struct _xmlParserCtxt,maxatts,472,11,48956)
CheckMemberSize(struct _xmlParserCtxt,docdict,4,11,48957)
CheckOffset(struct _xmlParserCtxt,docdict,476,11,48957)
CheckMemberSize(struct _xmlParserCtxt,str_xml,8,11,48958)
CheckOffset(struct _xmlParserCtxt,str_xml,480,11,48958)
CheckMemberSize(struct _xmlParserCtxt,str_xmlns,8,11,48959)
CheckOffset(struct _xmlParserCtxt,str_xmlns,488,11,48959)
CheckMemberSize(struct _xmlParserCtxt,str_xml_ns,8,11,48960)
CheckOffset(struct _xmlParserCtxt,str_xml_ns,496,11,48960)
CheckMemberSize(struct _xmlParserCtxt,sax2,4,11,48961)
CheckOffset(struct _xmlParserCtxt,sax2,504,11,48961)
CheckMemberSize(struct _xmlParserCtxt,nsNr,4,11,48962)
CheckOffset(struct _xmlParserCtxt,nsNr,508,11,48962)
CheckMemberSize(struct _xmlParserCtxt,nsMax,4,11,48963)
CheckOffset(struct _xmlParserCtxt,nsMax,512,11,48963)
CheckMemberSize(struct _xmlParserCtxt,nsTab,8,11,48964)
CheckOffset(struct _xmlParserCtxt,nsTab,520,11,48964)
CheckMemberSize(struct _xmlParserCtxt,attallocs,8,11,48965)
CheckOffset(struct _xmlParserCtxt,attallocs,528,11,48965)
CheckMemberSize(struct _xmlParserCtxt,pushTab,8,11,48966)
CheckOffset(struct _xmlParserCtxt,pushTab,536,11,48966)
CheckMemberSize(struct _xmlParserCtxt,attsDefault,8,11,48967)
CheckOffset(struct _xmlParserCtxt,attsDefault,544,11,48967)
CheckMemberSize(struct _xmlParserCtxt,attsSpecial,8,11,48968)
CheckOffset(struct _xmlParserCtxt,attsSpecial,552,11,48968)
CheckMemberSize(struct _xmlParserCtxt,nsWellFormed,4,11,48969)
CheckOffset(struct _xmlParserCtxt,nsWellFormed,560,11,48969)
CheckMemberSize(struct _xmlParserCtxt,options,4,11,48970)
CheckOffset(struct _xmlParserCtxt,options,564,11,48970)
CheckMemberSize(struct _xmlParserCtxt,dictNames,4,11,48971)
CheckOffset(struct _xmlParserCtxt,dictNames,568,11,48971)
CheckMemberSize(struct _xmlParserCtxt,freeElemsNr,4,11,48972)
CheckOffset(struct _xmlParserCtxt,freeElemsNr,572,11,48972)
CheckMemberSize(struct _xmlParserCtxt,freeElems,8,11,48973)
CheckOffset(struct _xmlParserCtxt,freeElems,576,11,48973)
CheckMemberSize(struct _xmlParserCtxt,freeAttrsNr,4,11,48974)
CheckOffset(struct _xmlParserCtxt,freeAttrsNr,584,11,48974)
CheckMemberSize(struct _xmlParserCtxt,freeAttrs,8,11,48975)
CheckOffset(struct _xmlParserCtxt,freeAttrs,592,11,48975)
CheckMemberSize(struct _xmlParserCtxt,lastError,88,11,48976)
CheckOffset(struct _xmlParserCtxt,lastError,600,11,48976)
CheckMemberSize(struct _xmlParserCtxt,parseMode,4,11,48983)
CheckOffset(struct _xmlParserCtxt,parseMode,688,11,48983)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14808,0);
Msg("Find size of _xmlParserCtxt (14808)\n");
#endif

#if __i386__
CheckTypeSize(struct _xmlSAXHandler *,4, 14809, 2)
#elif __x86_64__
CheckTypeSize(struct _xmlSAXHandler *,8, 14809, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14809,0);
Msg("Find size of _xmlSAXHandler * (14809)\n");
#endif

#if __i386__
CheckTypeSize(xmlParserInputPtr *,4, 14810, 2)
#elif __x86_64__
CheckTypeSize(xmlParserInputPtr *,8, 14810, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14810,0);
Msg("Find size of xmlParserInputPtr * (14810)\n");
#endif

#if __i386__
CheckTypeSize(xmlNodePtr *,4, 14811, 2)
#elif __x86_64__
CheckTypeSize(xmlNodePtr *,8, 14811, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14811,0);
Msg("Find size of xmlNodePtr * (14811)\n");
#endif

#if __i386__
CheckTypeSize(struct _xmlParserNodeInfoSeq,12, 14812, 2)
CheckMemberSize(struct _xmlParserNodeInfoSeq,length,4,2,48874)
CheckOffset(struct _xmlParserNodeInfoSeq,length,4,2,48874)
CheckMemberSize(struct _xmlParserNodeInfoSeq,buffer,4,2,48880)
CheckOffset(struct _xmlParserNodeInfoSeq,buffer,8,2,48880)
#elif __x86_64__
CheckTypeSize(struct _xmlParserNodeInfoSeq,24, 14812, 11)
CheckMemberSize(struct _xmlParserNodeInfoSeq,length,8,11,48874)
CheckOffset(struct _xmlParserNodeInfoSeq,length,8,11,48874)
CheckMemberSize(struct _xmlParserNodeInfoSeq,buffer,8,11,48880)
CheckOffset(struct _xmlParserNodeInfoSeq,buffer,16,11,48880)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14812,0);
Msg("Find size of _xmlParserNodeInfoSeq (14812)\n");
#endif

#if __i386__
CheckTypeSize(struct _xmlParserNodeInfo,20, 14813, 2)
CheckMemberSize(struct _xmlParserNodeInfo,begin_pos,4,2,48876)
CheckOffset(struct _xmlParserNodeInfo,begin_pos,4,2,48876)
CheckMemberSize(struct _xmlParserNodeInfo,begin_line,4,2,48877)
CheckOffset(struct _xmlParserNodeInfo,begin_line,8,2,48877)
CheckMemberSize(struct _xmlParserNodeInfo,end_pos,4,2,48878)
CheckOffset(struct _xmlParserNodeInfo,end_pos,12,2,48878)
CheckMemberSize(struct _xmlParserNodeInfo,end_line,4,2,48879)
CheckOffset(struct _xmlParserNodeInfo,end_line,16,2,48879)
#elif __x86_64__
CheckTypeSize(struct _xmlParserNodeInfo,40, 14813, 11)
CheckMemberSize(struct _xmlParserNodeInfo,begin_pos,8,11,48876)
CheckOffset(struct _xmlParserNodeInfo,begin_pos,8,11,48876)
CheckMemberSize(struct _xmlParserNodeInfo,begin_line,8,11,48877)
CheckOffset(struct _xmlParserNodeInfo,begin_line,16,11,48877)
CheckMemberSize(struct _xmlParserNodeInfo,end_pos,8,11,48878)
CheckOffset(struct _xmlParserNodeInfo,end_pos,24,11,48878)
CheckMemberSize(struct _xmlParserNodeInfo,end_line,8,11,48879)
CheckOffset(struct _xmlParserNodeInfo,end_line,32,11,48879)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14813,0);
Msg("Find size of _xmlParserNodeInfo (14813)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14814,0);
Msg("Find size of const _xmlNode (14814)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14815,0);
Msg("Find size of const _xmlNode * (14815)\n");
#endif

#if __i386__
CheckTypeSize(xmlParserNodeInfo,20, 14816, 2)
#elif __x86_64__
CheckTypeSize(xmlParserNodeInfo,40, 14816, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14816,0);
Msg("Find size of xmlParserNodeInfo (14816)\n");
#endif

#if __i386__
CheckTypeSize(xmlParserNodeInfo *,4, 14817, 2)
#elif __x86_64__
CheckTypeSize(xmlParserNodeInfo *,8, 14817, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14817,0);
Msg("Find size of xmlParserNodeInfo * (14817)\n");
#endif

#if __i386__
CheckTypeSize(xmlParserNodeInfoSeq,12, 14818, 2)
#elif __x86_64__
CheckTypeSize(xmlParserNodeInfoSeq,24, 14818, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14818,0);
Msg("Find size of xmlParserNodeInfoSeq (14818)\n");
#endif

#if __i386__
CheckTypeSize(struct _xmlValidCtxt,64, 14819, 2)
CheckMemberSize(struct _xmlValidCtxt,error,4,2,48889)
CheckOffset(struct _xmlValidCtxt,error,4,2,48889)
CheckMemberSize(struct _xmlValidCtxt,warning,4,2,48890)
CheckOffset(struct _xmlValidCtxt,warning,8,2,48890)
CheckMemberSize(struct _xmlValidCtxt,node,4,2,48891)
CheckOffset(struct _xmlValidCtxt,node,12,2,48891)
CheckMemberSize(struct _xmlValidCtxt,nodeNr,4,2,48892)
CheckOffset(struct _xmlValidCtxt,nodeNr,16,2,48892)
CheckMemberSize(struct _xmlValidCtxt,nodeMax,4,2,48893)
CheckOffset(struct _xmlValidCtxt,nodeMax,20,2,48893)
CheckMemberSize(struct _xmlValidCtxt,nodeTab,4,2,48894)
CheckOffset(struct _xmlValidCtxt,nodeTab,24,2,48894)
CheckMemberSize(struct _xmlValidCtxt,finishDtd,4,2,48895)
CheckOffset(struct _xmlValidCtxt,finishDtd,28,2,48895)
CheckMemberSize(struct _xmlValidCtxt,doc,4,2,48896)
CheckOffset(struct _xmlValidCtxt,doc,32,2,48896)
CheckMemberSize(struct _xmlValidCtxt,valid,4,2,48897)
CheckOffset(struct _xmlValidCtxt,valid,36,2,48897)
CheckMemberSize(struct _xmlValidCtxt,vstate,4,2,48898)
CheckOffset(struct _xmlValidCtxt,vstate,40,2,48898)
CheckMemberSize(struct _xmlValidCtxt,vstateNr,4,2,48899)
CheckOffset(struct _xmlValidCtxt,vstateNr,44,2,48899)
CheckMemberSize(struct _xmlValidCtxt,vstateMax,4,2,48900)
CheckOffset(struct _xmlValidCtxt,vstateMax,48,2,48900)
CheckMemberSize(struct _xmlValidCtxt,vstateTab,4,2,48901)
CheckOffset(struct _xmlValidCtxt,vstateTab,52,2,48901)
CheckMemberSize(struct _xmlValidCtxt,am,4,2,48902)
CheckOffset(struct _xmlValidCtxt,am,56,2,48902)
CheckMemberSize(struct _xmlValidCtxt,state,4,2,48903)
CheckOffset(struct _xmlValidCtxt,state,60,2,48903)
#elif __x86_64__
CheckTypeSize(struct _xmlValidCtxt,112, 14819, 11)
CheckMemberSize(struct _xmlValidCtxt,error,8,11,48889)
CheckOffset(struct _xmlValidCtxt,error,8,11,48889)
CheckMemberSize(struct _xmlValidCtxt,warning,8,11,48890)
CheckOffset(struct _xmlValidCtxt,warning,16,11,48890)
CheckMemberSize(struct _xmlValidCtxt,node,8,11,48891)
CheckOffset(struct _xmlValidCtxt,node,24,11,48891)
CheckMemberSize(struct _xmlValidCtxt,nodeNr,4,11,48892)
CheckOffset(struct _xmlValidCtxt,nodeNr,32,11,48892)
CheckMemberSize(struct _xmlValidCtxt,nodeMax,4,11,48893)
CheckOffset(struct _xmlValidCtxt,nodeMax,36,11,48893)
CheckMemberSize(struct _xmlValidCtxt,nodeTab,8,11,48894)
CheckOffset(struct _xmlValidCtxt,nodeTab,40,11,48894)
CheckMemberSize(struct _xmlValidCtxt,finishDtd,4,11,48895)
CheckOffset(struct _xmlValidCtxt,finishDtd,48,11,48895)
CheckMemberSize(struct _xmlValidCtxt,doc,8,11,48896)
CheckOffset(struct _xmlValidCtxt,doc,56,11,48896)
CheckMemberSize(struct _xmlValidCtxt,valid,4,11,48897)
CheckOffset(struct _xmlValidCtxt,valid,64,11,48897)
CheckMemberSize(struct _xmlValidCtxt,vstate,8,11,48898)
CheckOffset(struct _xmlValidCtxt,vstate,72,11,48898)
CheckMemberSize(struct _xmlValidCtxt,vstateNr,4,11,48899)
CheckOffset(struct _xmlValidCtxt,vstateNr,80,11,48899)
CheckMemberSize(struct _xmlValidCtxt,vstateMax,4,11,48900)
CheckOffset(struct _xmlValidCtxt,vstateMax,84,11,48900)
CheckMemberSize(struct _xmlValidCtxt,vstateTab,8,11,48901)
CheckOffset(struct _xmlValidCtxt,vstateTab,88,11,48901)
CheckMemberSize(struct _xmlValidCtxt,am,8,11,48902)
CheckOffset(struct _xmlValidCtxt,am,96,11,48902)
CheckMemberSize(struct _xmlValidCtxt,state,8,11,48903)
CheckOffset(struct _xmlValidCtxt,state,104,11,48903)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14819,0);
Msg("Find size of _xmlValidCtxt (14819)\n");
#endif

#if __i386__
CheckTypeSize(xmlValidityErrorFunc,4, 14820, 2)
#elif __x86_64__
CheckTypeSize(xmlValidityErrorFunc,8, 14820, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14820,0);
Msg("Find size of xmlValidityErrorFunc (14820)\n");
#endif

#if __i386__
CheckTypeSize(xmlValidityWarningFunc,4, 14821, 2)
#elif __x86_64__
CheckTypeSize(xmlValidityWarningFunc,8, 14821, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14821,0);
Msg("Find size of xmlValidityWarningFunc (14821)\n");
#endif

#if __i386__
CheckTypeSize(struct _xmlValidState,0, 14822, 2)
Msg("Missing member data for _xmlValidState on IA32\n");
#elif __x86_64__
CheckTypeSize(struct _xmlValidState,0, 14822, 11)
Msg("Missing member data for _xmlValidState on x86-64\n");
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14822,0);
Msg("Find size of _xmlValidState (14822)\n");
#endif

#if __i386__
CheckTypeSize(xmlValidState,0, 14823, 2)
#elif __x86_64__
CheckTypeSize(xmlValidState,0, 14823, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14823,0);
Msg("Find size of xmlValidState (14823)\n");
#endif

#if __i386__
CheckTypeSize(xmlValidState *,4, 14824, 2)
#elif __x86_64__
CheckTypeSize(xmlValidState *,8, 14824, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14824,0);
Msg("Find size of xmlValidState * (14824)\n");
#endif

#if __i386__
CheckTypeSize(xmlValidCtxt,64, 14825, 2)
#elif __x86_64__
CheckTypeSize(xmlValidCtxt,112, 14825, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14825,0);
Msg("Find size of xmlValidCtxt (14825)\n");
#endif

#if __i386__
CheckEnum("XML_PARSER_EOF",XML_PARSER_EOF,-1);
CheckEnum("XML_PARSER_START",XML_PARSER_START,0);
CheckEnum("XML_PARSER_MISC",XML_PARSER_MISC,1);
CheckEnum("XML_PARSER_PI",XML_PARSER_PI,2);
CheckEnum("XML_PARSER_DTD",XML_PARSER_DTD,3);
CheckEnum("XML_PARSER_PROLOG",XML_PARSER_PROLOG,4);
CheckEnum("XML_PARSER_COMMENT",XML_PARSER_COMMENT,5);
CheckEnum("XML_PARSER_START_TAG",XML_PARSER_START_TAG,6);
CheckEnum("XML_PARSER_CONTENT",XML_PARSER_CONTENT,7);
CheckEnum("XML_PARSER_CDATA_SECTION",XML_PARSER_CDATA_SECTION,8);
CheckEnum("XML_PARSER_END_TAG",XML_PARSER_END_TAG,9);
CheckEnum("XML_PARSER_ENTITY_DECL",XML_PARSER_ENTITY_DECL,10);
CheckEnum("XML_PARSER_ENTITY_VALUE",XML_PARSER_ENTITY_VALUE,11);
CheckEnum("XML_PARSER_ATTRIBUTE_VALUE",XML_PARSER_ATTRIBUTE_VALUE,12);
CheckEnum("XML_PARSER_SYSTEM_LITERAL",XML_PARSER_SYSTEM_LITERAL,13);
CheckEnum("XML_PARSER_EPILOG",XML_PARSER_EPILOG,14);
CheckEnum("XML_PARSER_IGNORE",XML_PARSER_IGNORE,15);
CheckEnum("XML_PARSER_PUBLIC_LITERAL",XML_PARSER_PUBLIC_LITERAL,16);
#elif __x86_64__
CheckEnum("XML_PARSER_EOF",XML_PARSER_EOF,-1);
CheckEnum("XML_PARSER_START",XML_PARSER_START,0);
CheckEnum("XML_PARSER_MISC",XML_PARSER_MISC,1);
CheckEnum("XML_PARSER_PI",XML_PARSER_PI,2);
CheckEnum("XML_PARSER_DTD",XML_PARSER_DTD,3);
CheckEnum("XML_PARSER_PROLOG",XML_PARSER_PROLOG,4);
CheckEnum("XML_PARSER_COMMENT",XML_PARSER_COMMENT,5);
CheckEnum("XML_PARSER_START_TAG",XML_PARSER_START_TAG,6);
CheckEnum("XML_PARSER_CONTENT",XML_PARSER_CONTENT,7);
CheckEnum("XML_PARSER_CDATA_SECTION",XML_PARSER_CDATA_SECTION,8);
CheckEnum("XML_PARSER_END_TAG",XML_PARSER_END_TAG,9);
CheckEnum("XML_PARSER_ENTITY_DECL",XML_PARSER_ENTITY_DECL,10);
CheckEnum("XML_PARSER_ENTITY_VALUE",XML_PARSER_ENTITY_VALUE,11);
CheckEnum("XML_PARSER_ATTRIBUTE_VALUE",XML_PARSER_ATTRIBUTE_VALUE,12);
CheckEnum("XML_PARSER_SYSTEM_LITERAL",XML_PARSER_SYSTEM_LITERAL,13);
CheckEnum("XML_PARSER_EPILOG",XML_PARSER_EPILOG,14);
CheckEnum("XML_PARSER_IGNORE",XML_PARSER_IGNORE,15);
CheckEnum("XML_PARSER_PUBLIC_LITERAL",XML_PARSER_PUBLIC_LITERAL,16);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14826,0);
Msg("Find size of anon-libxml2/libxml/xmlIO.h-71 (14826)\n");
#endif

#if __i386__
CheckTypeSize(xmlParserInputState,4, 14827, 2)
#elif __x86_64__
CheckTypeSize(xmlParserInputState,4, 14827, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14827,0);
Msg("Find size of xmlParserInputState (14827)\n");
#endif

#if __i386__
CheckEnum("XML_PARSE_UNKNOWN",XML_PARSE_UNKNOWN,0);
CheckEnum("XML_PARSE_DOM",XML_PARSE_DOM,1);
CheckEnum("XML_PARSE_SAX",XML_PARSE_SAX,2);
CheckEnum("XML_PARSE_PUSH_DOM",XML_PARSE_PUSH_DOM,3);
CheckEnum("XML_PARSE_PUSH_SAX",XML_PARSE_PUSH_SAX,4);
CheckEnum("XML_PARSE_READER",XML_PARSE_READER,5);
#elif __x86_64__
CheckEnum("XML_PARSE_UNKNOWN",XML_PARSE_UNKNOWN,0);
CheckEnum("XML_PARSE_DOM",XML_PARSE_DOM,1);
CheckEnum("XML_PARSE_SAX",XML_PARSE_SAX,2);
CheckEnum("XML_PARSE_PUSH_DOM",XML_PARSE_PUSH_DOM,3);
CheckEnum("XML_PARSE_PUSH_SAX",XML_PARSE_PUSH_SAX,4);
CheckEnum("XML_PARSE_READER",XML_PARSE_READER,5);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14828,0);
Msg("Find size of anon-libxml2/libxml/xmlIO.h-72 (14828)\n");
#endif

#if __i386__
CheckTypeSize(xmlParserMode,4, 14829, 2)
#elif __x86_64__
CheckTypeSize(xmlParserMode,4, 14829, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14829,0);
Msg("Find size of xmlParserMode (14829)\n");
#endif

#if __i386__
CheckTypeSize(xmlParserCtxt,440, 14830, 2)
#elif __x86_64__
CheckTypeSize(xmlParserCtxt,696, 14830, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14830,0);
Msg("Find size of xmlParserCtxt (14830)\n");
#endif

#if __i386__
CheckTypeSize(xmlParserCtxt *,4, 14831, 2)
#elif __x86_64__
CheckTypeSize(xmlParserCtxt *,8, 14831, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14831,0);
Msg("Find size of xmlParserCtxt * (14831)\n");
#endif

#if __i386__
CheckTypeSize(xmlParserCtxtPtr,4, 14832, 2)
#elif __x86_64__
CheckTypeSize(xmlParserCtxtPtr,8, 14832, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14832,0);
Msg("Find size of xmlParserCtxtPtr (14832)\n");
#endif

#if __i386__
CheckTypeSize(xmlInputMatchCallback,4, 14833, 2)
#elif __x86_64__
CheckTypeSize(xmlInputMatchCallback,8, 14833, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14833,0);
Msg("Find size of xmlInputMatchCallback (14833)\n");
#endif

#if __i386__
CheckTypeSize(xmlInputOpenCallback,4, 14834, 2)
#elif __x86_64__
CheckTypeSize(xmlInputOpenCallback,8, 14834, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14834,0);
Msg("Find size of xmlInputOpenCallback (14834)\n");
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
extern xmlOutputBufferPtr __xmlOutputBufferCreateFilename_db(const char *, xmlCharEncodingHandlerPtr, int);
CheckInterfacedef(__xmlOutputBufferCreateFilename,__xmlOutputBufferCreateFilename_db);
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
extern xmlParserInputBufferPtr __xmlParserInputBufferCreateFilename_db(const char *, xmlCharEncoding);
CheckInterfacedef(__xmlParserInputBufferCreateFilename,__xmlParserInputBufferCreateFilename_db);
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
