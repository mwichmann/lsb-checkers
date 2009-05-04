/*
 * Test of libxml2/libxml/xmlIO.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in libxml2/libxml/xmlIO.h\n");
#endif

printf("Checking data structures in libxml2/libxml/xmlIO.h\n");
#if defined __s390x__
CheckTypeSize(xmlOutputMatchCallback,8, 14805, 12, 3.1, NULL, 14804, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlOutputMatchCallback,8, 14805, 11, 3.1, NULL, 14804, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlOutputMatchCallback,4, 14805, 10, 3.1, NULL, 14804, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlOutputMatchCallback,8, 14805, 9, 3.1, NULL, 14804, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlOutputMatchCallback,4, 14805, 6, 3.1, NULL, 14804, NULL)
#elif defined __ia64__
CheckTypeSize(xmlOutputMatchCallback,8, 14805, 3, 3.1, NULL, 14804, NULL)
#elif defined __i386__
CheckTypeSize(xmlOutputMatchCallback,4, 14805, 2, 3.1, NULL, 14804, NULL)
#else
Msg("Find size of xmlOutputMatchCallback (14805)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14804,NULL);\n",architecture,14805,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlOutputOpenCallback,8, 14807, 12, 3.1, NULL, 9002, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlOutputOpenCallback,8, 14807, 11, 3.1, NULL, 9002, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlOutputOpenCallback,4, 14807, 10, 3.1, NULL, 9002, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlOutputOpenCallback,8, 14807, 9, 3.1, NULL, 9002, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlOutputOpenCallback,4, 14807, 6, 3.1, NULL, 9002, NULL)
#elif defined __ia64__
CheckTypeSize(xmlOutputOpenCallback,8, 14807, 3, 3.1, NULL, 9002, NULL)
#elif defined __i386__
CheckTypeSize(xmlOutputOpenCallback,4, 14807, 2, 3.1, NULL, 9002, NULL)
#else
Msg("Find size of xmlOutputOpenCallback (14807)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,9002,NULL);\n",architecture,14807,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _xmlParserCtxt,696, 14808, 12, , NULL, 0, NULL)
CheckMemberSize(struct _xmlParserCtxt,userData,8,12,48856)
CheckOffset(struct _xmlParserCtxt,userData,8,12,48856)
CheckMemberSize(struct _xmlParserCtxt,myDoc,8,12,48857)
CheckOffset(struct _xmlParserCtxt,myDoc,16,12,48857)
CheckMemberSize(struct _xmlParserCtxt,wellFormed,4,12,48858)
CheckOffset(struct _xmlParserCtxt,wellFormed,24,12,48858)
CheckMemberSize(struct _xmlParserCtxt,replaceEntities,4,12,48859)
CheckOffset(struct _xmlParserCtxt,replaceEntities,28,12,48859)
CheckMemberSize(struct _xmlParserCtxt,version,8,12,48860)
CheckOffset(struct _xmlParserCtxt,version,32,12,48860)
CheckMemberSize(struct _xmlParserCtxt,encoding,8,12,48861)
CheckOffset(struct _xmlParserCtxt,encoding,40,12,48861)
CheckMemberSize(struct _xmlParserCtxt,standalone,4,12,48862)
CheckOffset(struct _xmlParserCtxt,standalone,48,12,48862)
CheckMemberSize(struct _xmlParserCtxt,html,4,12,48863)
CheckOffset(struct _xmlParserCtxt,html,52,12,48863)
CheckMemberSize(struct _xmlParserCtxt,input,8,12,48864)
CheckOffset(struct _xmlParserCtxt,input,56,12,48864)
CheckMemberSize(struct _xmlParserCtxt,inputNr,4,12,48865)
CheckOffset(struct _xmlParserCtxt,inputNr,64,12,48865)
CheckMemberSize(struct _xmlParserCtxt,inputMax,4,12,48866)
CheckOffset(struct _xmlParserCtxt,inputMax,68,12,48866)
CheckMemberSize(struct _xmlParserCtxt,inputTab,8,12,48867)
CheckOffset(struct _xmlParserCtxt,inputTab,72,12,48867)
CheckMemberSize(struct _xmlParserCtxt,node,8,12,48868)
CheckOffset(struct _xmlParserCtxt,node,80,12,48868)
CheckMemberSize(struct _xmlParserCtxt,nodeNr,4,12,48869)
CheckOffset(struct _xmlParserCtxt,nodeNr,88,12,48869)
CheckMemberSize(struct _xmlParserCtxt,nodeMax,4,12,48870)
CheckOffset(struct _xmlParserCtxt,nodeMax,92,12,48870)
CheckMemberSize(struct _xmlParserCtxt,nodeTab,8,12,48871)
CheckOffset(struct _xmlParserCtxt,nodeTab,96,12,48871)
CheckMemberSize(struct _xmlParserCtxt,record_info,4,12,48872)
CheckOffset(struct _xmlParserCtxt,record_info,104,12,48872)
CheckMemberSize(struct _xmlParserCtxt,node_seq,24,12,48881)
CheckOffset(struct _xmlParserCtxt,node_seq,112,12,48881)
CheckMemberSize(struct _xmlParserCtxt,errNo,4,12,48882)
CheckOffset(struct _xmlParserCtxt,errNo,136,12,48882)
CheckMemberSize(struct _xmlParserCtxt,hasExternalSubset,4,12,48883)
CheckOffset(struct _xmlParserCtxt,hasExternalSubset,140,12,48883)
CheckMemberSize(struct _xmlParserCtxt,hasPErefs,4,12,48884)
CheckOffset(struct _xmlParserCtxt,hasPErefs,144,12,48884)
CheckMemberSize(struct _xmlParserCtxt,external,4,12,48885)
CheckOffset(struct _xmlParserCtxt,external,148,12,48885)
CheckMemberSize(struct _xmlParserCtxt,valid,4,12,48886)
CheckOffset(struct _xmlParserCtxt,valid,152,12,48886)
CheckMemberSize(struct _xmlParserCtxt,validate,4,12,48887)
CheckOffset(struct _xmlParserCtxt,validate,156,12,48887)
CheckMemberSize(struct _xmlParserCtxt,vctxt,112,12,48904)
CheckOffset(struct _xmlParserCtxt,vctxt,160,12,48904)
CheckMemberSize(struct _xmlParserCtxt,instate,4,12,48923)
CheckOffset(struct _xmlParserCtxt,instate,272,12,48923)
CheckMemberSize(struct _xmlParserCtxt,token,4,12,48924)
CheckOffset(struct _xmlParserCtxt,token,276,12,48924)
CheckMemberSize(struct _xmlParserCtxt,directory,8,12,48925)
CheckOffset(struct _xmlParserCtxt,directory,280,12,48925)
CheckMemberSize(struct _xmlParserCtxt,name,8,12,48926)
CheckOffset(struct _xmlParserCtxt,name,288,12,48926)
CheckMemberSize(struct _xmlParserCtxt,nameNr,4,12,48927)
CheckOffset(struct _xmlParserCtxt,nameNr,296,12,48927)
CheckMemberSize(struct _xmlParserCtxt,nameMax,4,12,48928)
CheckOffset(struct _xmlParserCtxt,nameMax,300,12,48928)
CheckMemberSize(struct _xmlParserCtxt,nameTab,8,12,48929)
CheckOffset(struct _xmlParserCtxt,nameTab,304,12,48929)
CheckMemberSize(struct _xmlParserCtxt,nbChars,8,12,48930)
CheckOffset(struct _xmlParserCtxt,nbChars,312,12,48930)
CheckMemberSize(struct _xmlParserCtxt,checkIndex,8,12,48931)
CheckOffset(struct _xmlParserCtxt,checkIndex,320,12,48931)
CheckMemberSize(struct _xmlParserCtxt,keepBlanks,4,12,48932)
CheckOffset(struct _xmlParserCtxt,keepBlanks,328,12,48932)
CheckMemberSize(struct _xmlParserCtxt,disableSAX,4,12,48933)
CheckOffset(struct _xmlParserCtxt,disableSAX,332,12,48933)
CheckMemberSize(struct _xmlParserCtxt,inSubset,4,12,48934)
CheckOffset(struct _xmlParserCtxt,inSubset,336,12,48934)
CheckMemberSize(struct _xmlParserCtxt,intSubName,8,12,48935)
CheckOffset(struct _xmlParserCtxt,intSubName,344,12,48935)
CheckMemberSize(struct _xmlParserCtxt,extSubURI,8,12,48936)
CheckOffset(struct _xmlParserCtxt,extSubURI,352,12,48936)
CheckMemberSize(struct _xmlParserCtxt,extSubSystem,8,12,48937)
CheckOffset(struct _xmlParserCtxt,extSubSystem,360,12,48937)
CheckMemberSize(struct _xmlParserCtxt,space,8,12,48938)
CheckOffset(struct _xmlParserCtxt,space,368,12,48938)
CheckMemberSize(struct _xmlParserCtxt,spaceNr,4,12,48939)
CheckOffset(struct _xmlParserCtxt,spaceNr,376,12,48939)
CheckMemberSize(struct _xmlParserCtxt,spaceMax,4,12,48940)
CheckOffset(struct _xmlParserCtxt,spaceMax,380,12,48940)
CheckMemberSize(struct _xmlParserCtxt,spaceTab,8,12,48941)
CheckOffset(struct _xmlParserCtxt,spaceTab,384,12,48941)
CheckMemberSize(struct _xmlParserCtxt,depth,4,12,48942)
CheckOffset(struct _xmlParserCtxt,depth,392,12,48942)
CheckMemberSize(struct _xmlParserCtxt,entity,8,12,48943)
CheckOffset(struct _xmlParserCtxt,entity,400,12,48943)
CheckMemberSize(struct _xmlParserCtxt,charset,4,12,48944)
CheckOffset(struct _xmlParserCtxt,charset,408,12,48944)
CheckMemberSize(struct _xmlParserCtxt,nodelen,4,12,48945)
CheckOffset(struct _xmlParserCtxt,nodelen,412,12,48945)
CheckMemberSize(struct _xmlParserCtxt,nodemem,4,12,48946)
CheckOffset(struct _xmlParserCtxt,nodemem,416,12,48946)
CheckMemberSize(struct _xmlParserCtxt,pedantic,4,12,48947)
CheckOffset(struct _xmlParserCtxt,pedantic,420,12,48947)
CheckMemberSize(struct _xmlParserCtxt,_private,8,12,48948)
CheckOffset(struct _xmlParserCtxt,_private,424,12,48948)
CheckMemberSize(struct _xmlParserCtxt,loadsubset,4,12,48949)
CheckOffset(struct _xmlParserCtxt,loadsubset,432,12,48949)
CheckMemberSize(struct _xmlParserCtxt,linenumbers,4,12,48950)
CheckOffset(struct _xmlParserCtxt,linenumbers,436,12,48950)
CheckMemberSize(struct _xmlParserCtxt,catalogs,8,12,48951)
CheckOffset(struct _xmlParserCtxt,catalogs,440,12,48951)
CheckMemberSize(struct _xmlParserCtxt,recovery,4,12,48952)
CheckOffset(struct _xmlParserCtxt,recovery,448,12,48952)
CheckMemberSize(struct _xmlParserCtxt,progressive,4,12,48953)
CheckOffset(struct _xmlParserCtxt,progressive,452,12,48953)
CheckMemberSize(struct _xmlParserCtxt,dict,8,12,48954)
CheckOffset(struct _xmlParserCtxt,dict,456,12,48954)
CheckMemberSize(struct _xmlParserCtxt,atts,8,12,48955)
CheckOffset(struct _xmlParserCtxt,atts,464,12,48955)
CheckMemberSize(struct _xmlParserCtxt,maxatts,4,12,48956)
CheckOffset(struct _xmlParserCtxt,maxatts,472,12,48956)
CheckMemberSize(struct _xmlParserCtxt,docdict,4,12,48957)
CheckOffset(struct _xmlParserCtxt,docdict,476,12,48957)
CheckMemberSize(struct _xmlParserCtxt,str_xml,8,12,48958)
CheckOffset(struct _xmlParserCtxt,str_xml,480,12,48958)
CheckMemberSize(struct _xmlParserCtxt,str_xmlns,8,12,48959)
CheckOffset(struct _xmlParserCtxt,str_xmlns,488,12,48959)
CheckMemberSize(struct _xmlParserCtxt,str_xml_ns,8,12,48960)
CheckOffset(struct _xmlParserCtxt,str_xml_ns,496,12,48960)
CheckMemberSize(struct _xmlParserCtxt,sax2,4,12,48961)
CheckOffset(struct _xmlParserCtxt,sax2,504,12,48961)
CheckMemberSize(struct _xmlParserCtxt,nsNr,4,12,48962)
CheckOffset(struct _xmlParserCtxt,nsNr,508,12,48962)
CheckMemberSize(struct _xmlParserCtxt,nsMax,4,12,48963)
CheckOffset(struct _xmlParserCtxt,nsMax,512,12,48963)
CheckMemberSize(struct _xmlParserCtxt,nsTab,8,12,48964)
CheckOffset(struct _xmlParserCtxt,nsTab,520,12,48964)
CheckMemberSize(struct _xmlParserCtxt,attallocs,8,12,48965)
CheckOffset(struct _xmlParserCtxt,attallocs,528,12,48965)
CheckMemberSize(struct _xmlParserCtxt,pushTab,8,12,48966)
CheckOffset(struct _xmlParserCtxt,pushTab,536,12,48966)
CheckMemberSize(struct _xmlParserCtxt,attsDefault,8,12,48967)
CheckOffset(struct _xmlParserCtxt,attsDefault,544,12,48967)
CheckMemberSize(struct _xmlParserCtxt,attsSpecial,8,12,48968)
CheckOffset(struct _xmlParserCtxt,attsSpecial,552,12,48968)
CheckMemberSize(struct _xmlParserCtxt,nsWellFormed,4,12,48969)
CheckOffset(struct _xmlParserCtxt,nsWellFormed,560,12,48969)
CheckMemberSize(struct _xmlParserCtxt,options,4,12,48970)
CheckOffset(struct _xmlParserCtxt,options,564,12,48970)
CheckMemberSize(struct _xmlParserCtxt,dictNames,4,12,48971)
CheckOffset(struct _xmlParserCtxt,dictNames,568,12,48971)
CheckMemberSize(struct _xmlParserCtxt,freeElemsNr,4,12,48972)
CheckOffset(struct _xmlParserCtxt,freeElemsNr,572,12,48972)
CheckMemberSize(struct _xmlParserCtxt,freeElems,8,12,48973)
CheckOffset(struct _xmlParserCtxt,freeElems,576,12,48973)
CheckMemberSize(struct _xmlParserCtxt,freeAttrsNr,4,12,48974)
CheckOffset(struct _xmlParserCtxt,freeAttrsNr,584,12,48974)
CheckMemberSize(struct _xmlParserCtxt,freeAttrs,8,12,48975)
CheckOffset(struct _xmlParserCtxt,freeAttrs,592,12,48975)
CheckMemberSize(struct _xmlParserCtxt,lastError,88,12,48976)
CheckOffset(struct _xmlParserCtxt,lastError,600,12,48976)
CheckMemberSize(struct _xmlParserCtxt,parseMode,4,12,48983)
CheckOffset(struct _xmlParserCtxt,parseMode,688,12,48983)
#elif defined __x86_64__
CheckTypeSize(struct _xmlParserCtxt,696, 14808, 11, , NULL, 0, NULL)
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
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _xmlParserCtxt,440, 14808, 10, , NULL, 0, NULL)
CheckMemberSize(struct _xmlParserCtxt,userData,4,10,48856)
CheckOffset(struct _xmlParserCtxt,userData,4,10,48856)
CheckMemberSize(struct _xmlParserCtxt,myDoc,4,10,48857)
CheckOffset(struct _xmlParserCtxt,myDoc,8,10,48857)
CheckMemberSize(struct _xmlParserCtxt,wellFormed,4,10,48858)
CheckOffset(struct _xmlParserCtxt,wellFormed,12,10,48858)
CheckMemberSize(struct _xmlParserCtxt,replaceEntities,4,10,48859)
CheckOffset(struct _xmlParserCtxt,replaceEntities,16,10,48859)
CheckMemberSize(struct _xmlParserCtxt,version,4,10,48860)
CheckOffset(struct _xmlParserCtxt,version,20,10,48860)
CheckMemberSize(struct _xmlParserCtxt,encoding,4,10,48861)
CheckOffset(struct _xmlParserCtxt,encoding,24,10,48861)
CheckMemberSize(struct _xmlParserCtxt,standalone,4,10,48862)
CheckOffset(struct _xmlParserCtxt,standalone,28,10,48862)
CheckMemberSize(struct _xmlParserCtxt,html,4,10,48863)
CheckOffset(struct _xmlParserCtxt,html,32,10,48863)
CheckMemberSize(struct _xmlParserCtxt,input,4,10,48864)
CheckOffset(struct _xmlParserCtxt,input,36,10,48864)
CheckMemberSize(struct _xmlParserCtxt,inputNr,4,10,48865)
CheckOffset(struct _xmlParserCtxt,inputNr,40,10,48865)
CheckMemberSize(struct _xmlParserCtxt,inputMax,4,10,48866)
CheckOffset(struct _xmlParserCtxt,inputMax,44,10,48866)
CheckMemberSize(struct _xmlParserCtxt,inputTab,4,10,48867)
CheckOffset(struct _xmlParserCtxt,inputTab,48,10,48867)
CheckMemberSize(struct _xmlParserCtxt,node,4,10,48868)
CheckOffset(struct _xmlParserCtxt,node,52,10,48868)
CheckMemberSize(struct _xmlParserCtxt,nodeNr,4,10,48869)
CheckOffset(struct _xmlParserCtxt,nodeNr,56,10,48869)
CheckMemberSize(struct _xmlParserCtxt,nodeMax,4,10,48870)
CheckOffset(struct _xmlParserCtxt,nodeMax,60,10,48870)
CheckMemberSize(struct _xmlParserCtxt,nodeTab,4,10,48871)
CheckOffset(struct _xmlParserCtxt,nodeTab,64,10,48871)
CheckMemberSize(struct _xmlParserCtxt,record_info,4,10,48872)
CheckOffset(struct _xmlParserCtxt,record_info,68,10,48872)
CheckMemberSize(struct _xmlParserCtxt,node_seq,12,10,48881)
CheckOffset(struct _xmlParserCtxt,node_seq,72,10,48881)
CheckMemberSize(struct _xmlParserCtxt,errNo,4,10,48882)
CheckOffset(struct _xmlParserCtxt,errNo,84,10,48882)
CheckMemberSize(struct _xmlParserCtxt,hasExternalSubset,4,10,48883)
CheckOffset(struct _xmlParserCtxt,hasExternalSubset,88,10,48883)
CheckMemberSize(struct _xmlParserCtxt,hasPErefs,4,10,48884)
CheckOffset(struct _xmlParserCtxt,hasPErefs,92,10,48884)
CheckMemberSize(struct _xmlParserCtxt,external,4,10,48885)
CheckOffset(struct _xmlParserCtxt,external,96,10,48885)
CheckMemberSize(struct _xmlParserCtxt,valid,4,10,48886)
CheckOffset(struct _xmlParserCtxt,valid,100,10,48886)
CheckMemberSize(struct _xmlParserCtxt,validate,4,10,48887)
CheckOffset(struct _xmlParserCtxt,validate,104,10,48887)
CheckMemberSize(struct _xmlParserCtxt,vctxt,64,10,48904)
CheckOffset(struct _xmlParserCtxt,vctxt,108,10,48904)
CheckMemberSize(struct _xmlParserCtxt,instate,4,10,48923)
CheckOffset(struct _xmlParserCtxt,instate,172,10,48923)
CheckMemberSize(struct _xmlParserCtxt,token,4,10,48924)
CheckOffset(struct _xmlParserCtxt,token,176,10,48924)
CheckMemberSize(struct _xmlParserCtxt,directory,4,10,48925)
CheckOffset(struct _xmlParserCtxt,directory,180,10,48925)
CheckMemberSize(struct _xmlParserCtxt,name,4,10,48926)
CheckOffset(struct _xmlParserCtxt,name,184,10,48926)
CheckMemberSize(struct _xmlParserCtxt,nameNr,4,10,48927)
CheckOffset(struct _xmlParserCtxt,nameNr,188,10,48927)
CheckMemberSize(struct _xmlParserCtxt,nameMax,4,10,48928)
CheckOffset(struct _xmlParserCtxt,nameMax,192,10,48928)
CheckMemberSize(struct _xmlParserCtxt,nameTab,4,10,48929)
CheckOffset(struct _xmlParserCtxt,nameTab,196,10,48929)
CheckMemberSize(struct _xmlParserCtxt,nbChars,4,10,48930)
CheckOffset(struct _xmlParserCtxt,nbChars,200,10,48930)
CheckMemberSize(struct _xmlParserCtxt,checkIndex,4,10,48931)
CheckOffset(struct _xmlParserCtxt,checkIndex,204,10,48931)
CheckMemberSize(struct _xmlParserCtxt,keepBlanks,4,10,48932)
CheckOffset(struct _xmlParserCtxt,keepBlanks,208,10,48932)
CheckMemberSize(struct _xmlParserCtxt,disableSAX,4,10,48933)
CheckOffset(struct _xmlParserCtxt,disableSAX,212,10,48933)
CheckMemberSize(struct _xmlParserCtxt,inSubset,4,10,48934)
CheckOffset(struct _xmlParserCtxt,inSubset,216,10,48934)
CheckMemberSize(struct _xmlParserCtxt,intSubName,4,10,48935)
CheckOffset(struct _xmlParserCtxt,intSubName,220,10,48935)
CheckMemberSize(struct _xmlParserCtxt,extSubURI,4,10,48936)
CheckOffset(struct _xmlParserCtxt,extSubURI,224,10,48936)
CheckMemberSize(struct _xmlParserCtxt,extSubSystem,4,10,48937)
CheckOffset(struct _xmlParserCtxt,extSubSystem,228,10,48937)
CheckMemberSize(struct _xmlParserCtxt,space,4,10,48938)
CheckOffset(struct _xmlParserCtxt,space,232,10,48938)
CheckMemberSize(struct _xmlParserCtxt,spaceNr,4,10,48939)
CheckOffset(struct _xmlParserCtxt,spaceNr,236,10,48939)
CheckMemberSize(struct _xmlParserCtxt,spaceMax,4,10,48940)
CheckOffset(struct _xmlParserCtxt,spaceMax,240,10,48940)
CheckMemberSize(struct _xmlParserCtxt,spaceTab,4,10,48941)
CheckOffset(struct _xmlParserCtxt,spaceTab,244,10,48941)
CheckMemberSize(struct _xmlParserCtxt,depth,4,10,48942)
CheckOffset(struct _xmlParserCtxt,depth,248,10,48942)
CheckMemberSize(struct _xmlParserCtxt,entity,4,10,48943)
CheckOffset(struct _xmlParserCtxt,entity,252,10,48943)
CheckMemberSize(struct _xmlParserCtxt,charset,4,10,48944)
CheckOffset(struct _xmlParserCtxt,charset,256,10,48944)
CheckMemberSize(struct _xmlParserCtxt,nodelen,4,10,48945)
CheckOffset(struct _xmlParserCtxt,nodelen,260,10,48945)
CheckMemberSize(struct _xmlParserCtxt,nodemem,4,10,48946)
CheckOffset(struct _xmlParserCtxt,nodemem,264,10,48946)
CheckMemberSize(struct _xmlParserCtxt,pedantic,4,10,48947)
CheckOffset(struct _xmlParserCtxt,pedantic,268,10,48947)
CheckMemberSize(struct _xmlParserCtxt,_private,4,10,48948)
CheckOffset(struct _xmlParserCtxt,_private,272,10,48948)
CheckMemberSize(struct _xmlParserCtxt,loadsubset,4,10,48949)
CheckOffset(struct _xmlParserCtxt,loadsubset,276,10,48949)
CheckMemberSize(struct _xmlParserCtxt,linenumbers,4,10,48950)
CheckOffset(struct _xmlParserCtxt,linenumbers,280,10,48950)
CheckMemberSize(struct _xmlParserCtxt,catalogs,4,10,48951)
CheckOffset(struct _xmlParserCtxt,catalogs,284,10,48951)
CheckMemberSize(struct _xmlParserCtxt,recovery,4,10,48952)
CheckOffset(struct _xmlParserCtxt,recovery,288,10,48952)
CheckMemberSize(struct _xmlParserCtxt,progressive,4,10,48953)
CheckOffset(struct _xmlParserCtxt,progressive,292,10,48953)
CheckMemberSize(struct _xmlParserCtxt,dict,4,10,48954)
CheckOffset(struct _xmlParserCtxt,dict,296,10,48954)
CheckMemberSize(struct _xmlParserCtxt,atts,4,10,48955)
CheckOffset(struct _xmlParserCtxt,atts,300,10,48955)
CheckMemberSize(struct _xmlParserCtxt,maxatts,4,10,48956)
CheckOffset(struct _xmlParserCtxt,maxatts,304,10,48956)
CheckMemberSize(struct _xmlParserCtxt,docdict,4,10,48957)
CheckOffset(struct _xmlParserCtxt,docdict,308,10,48957)
CheckMemberSize(struct _xmlParserCtxt,str_xml,4,10,48958)
CheckOffset(struct _xmlParserCtxt,str_xml,312,10,48958)
CheckMemberSize(struct _xmlParserCtxt,str_xmlns,4,10,48959)
CheckOffset(struct _xmlParserCtxt,str_xmlns,316,10,48959)
CheckMemberSize(struct _xmlParserCtxt,str_xml_ns,4,10,48960)
CheckOffset(struct _xmlParserCtxt,str_xml_ns,320,10,48960)
CheckMemberSize(struct _xmlParserCtxt,sax2,4,10,48961)
CheckOffset(struct _xmlParserCtxt,sax2,324,10,48961)
CheckMemberSize(struct _xmlParserCtxt,nsNr,4,10,48962)
CheckOffset(struct _xmlParserCtxt,nsNr,328,10,48962)
CheckMemberSize(struct _xmlParserCtxt,nsMax,4,10,48963)
CheckOffset(struct _xmlParserCtxt,nsMax,332,10,48963)
CheckMemberSize(struct _xmlParserCtxt,nsTab,4,10,48964)
CheckOffset(struct _xmlParserCtxt,nsTab,336,10,48964)
CheckMemberSize(struct _xmlParserCtxt,attallocs,4,10,48965)
CheckOffset(struct _xmlParserCtxt,attallocs,340,10,48965)
CheckMemberSize(struct _xmlParserCtxt,pushTab,4,10,48966)
CheckOffset(struct _xmlParserCtxt,pushTab,344,10,48966)
CheckMemberSize(struct _xmlParserCtxt,attsDefault,4,10,48967)
CheckOffset(struct _xmlParserCtxt,attsDefault,348,10,48967)
CheckMemberSize(struct _xmlParserCtxt,attsSpecial,4,10,48968)
CheckOffset(struct _xmlParserCtxt,attsSpecial,352,10,48968)
CheckMemberSize(struct _xmlParserCtxt,nsWellFormed,4,10,48969)
CheckOffset(struct _xmlParserCtxt,nsWellFormed,356,10,48969)
CheckMemberSize(struct _xmlParserCtxt,options,4,10,48970)
CheckOffset(struct _xmlParserCtxt,options,360,10,48970)
CheckMemberSize(struct _xmlParserCtxt,dictNames,4,10,48971)
CheckOffset(struct _xmlParserCtxt,dictNames,364,10,48971)
CheckMemberSize(struct _xmlParserCtxt,freeElemsNr,4,10,48972)
CheckOffset(struct _xmlParserCtxt,freeElemsNr,368,10,48972)
CheckMemberSize(struct _xmlParserCtxt,freeElems,4,10,48973)
CheckOffset(struct _xmlParserCtxt,freeElems,372,10,48973)
CheckMemberSize(struct _xmlParserCtxt,freeAttrsNr,4,10,48974)
CheckOffset(struct _xmlParserCtxt,freeAttrsNr,376,10,48974)
CheckMemberSize(struct _xmlParserCtxt,freeAttrs,4,10,48975)
CheckOffset(struct _xmlParserCtxt,freeAttrs,380,10,48975)
CheckMemberSize(struct _xmlParserCtxt,lastError,52,10,48976)
CheckOffset(struct _xmlParserCtxt,lastError,384,10,48976)
CheckMemberSize(struct _xmlParserCtxt,parseMode,4,10,48983)
CheckOffset(struct _xmlParserCtxt,parseMode,436,10,48983)
#elif defined __powerpc64__
CheckTypeSize(struct _xmlParserCtxt,696, 14808, 9, , NULL, 0, NULL)
CheckMemberSize(struct _xmlParserCtxt,userData,8,9,48856)
CheckOffset(struct _xmlParserCtxt,userData,8,9,48856)
CheckMemberSize(struct _xmlParserCtxt,myDoc,8,9,48857)
CheckOffset(struct _xmlParserCtxt,myDoc,16,9,48857)
CheckMemberSize(struct _xmlParserCtxt,wellFormed,4,9,48858)
CheckOffset(struct _xmlParserCtxt,wellFormed,24,9,48858)
CheckMemberSize(struct _xmlParserCtxt,replaceEntities,4,9,48859)
CheckOffset(struct _xmlParserCtxt,replaceEntities,28,9,48859)
CheckMemberSize(struct _xmlParserCtxt,version,8,9,48860)
CheckOffset(struct _xmlParserCtxt,version,32,9,48860)
CheckMemberSize(struct _xmlParserCtxt,encoding,8,9,48861)
CheckOffset(struct _xmlParserCtxt,encoding,40,9,48861)
CheckMemberSize(struct _xmlParserCtxt,standalone,4,9,48862)
CheckOffset(struct _xmlParserCtxt,standalone,48,9,48862)
CheckMemberSize(struct _xmlParserCtxt,html,4,9,48863)
CheckOffset(struct _xmlParserCtxt,html,52,9,48863)
CheckMemberSize(struct _xmlParserCtxt,input,8,9,48864)
CheckOffset(struct _xmlParserCtxt,input,56,9,48864)
CheckMemberSize(struct _xmlParserCtxt,inputNr,4,9,48865)
CheckOffset(struct _xmlParserCtxt,inputNr,64,9,48865)
CheckMemberSize(struct _xmlParserCtxt,inputMax,4,9,48866)
CheckOffset(struct _xmlParserCtxt,inputMax,68,9,48866)
CheckMemberSize(struct _xmlParserCtxt,inputTab,8,9,48867)
CheckOffset(struct _xmlParserCtxt,inputTab,72,9,48867)
CheckMemberSize(struct _xmlParserCtxt,node,8,9,48868)
CheckOffset(struct _xmlParserCtxt,node,80,9,48868)
CheckMemberSize(struct _xmlParserCtxt,nodeNr,4,9,48869)
CheckOffset(struct _xmlParserCtxt,nodeNr,88,9,48869)
CheckMemberSize(struct _xmlParserCtxt,nodeMax,4,9,48870)
CheckOffset(struct _xmlParserCtxt,nodeMax,92,9,48870)
CheckMemberSize(struct _xmlParserCtxt,nodeTab,8,9,48871)
CheckOffset(struct _xmlParserCtxt,nodeTab,96,9,48871)
CheckMemberSize(struct _xmlParserCtxt,record_info,4,9,48872)
CheckOffset(struct _xmlParserCtxt,record_info,104,9,48872)
CheckMemberSize(struct _xmlParserCtxt,node_seq,24,9,48881)
CheckOffset(struct _xmlParserCtxt,node_seq,112,9,48881)
CheckMemberSize(struct _xmlParserCtxt,errNo,4,9,48882)
CheckOffset(struct _xmlParserCtxt,errNo,136,9,48882)
CheckMemberSize(struct _xmlParserCtxt,hasExternalSubset,4,9,48883)
CheckOffset(struct _xmlParserCtxt,hasExternalSubset,140,9,48883)
CheckMemberSize(struct _xmlParserCtxt,hasPErefs,4,9,48884)
CheckOffset(struct _xmlParserCtxt,hasPErefs,144,9,48884)
CheckMemberSize(struct _xmlParserCtxt,external,4,9,48885)
CheckOffset(struct _xmlParserCtxt,external,148,9,48885)
CheckMemberSize(struct _xmlParserCtxt,valid,4,9,48886)
CheckOffset(struct _xmlParserCtxt,valid,152,9,48886)
CheckMemberSize(struct _xmlParserCtxt,validate,4,9,48887)
CheckOffset(struct _xmlParserCtxt,validate,156,9,48887)
CheckMemberSize(struct _xmlParserCtxt,vctxt,112,9,48904)
CheckOffset(struct _xmlParserCtxt,vctxt,160,9,48904)
CheckMemberSize(struct _xmlParserCtxt,instate,4,9,48923)
CheckOffset(struct _xmlParserCtxt,instate,272,9,48923)
CheckMemberSize(struct _xmlParserCtxt,token,4,9,48924)
CheckOffset(struct _xmlParserCtxt,token,276,9,48924)
CheckMemberSize(struct _xmlParserCtxt,directory,8,9,48925)
CheckOffset(struct _xmlParserCtxt,directory,280,9,48925)
CheckMemberSize(struct _xmlParserCtxt,name,8,9,48926)
CheckOffset(struct _xmlParserCtxt,name,288,9,48926)
CheckMemberSize(struct _xmlParserCtxt,nameNr,4,9,48927)
CheckOffset(struct _xmlParserCtxt,nameNr,296,9,48927)
CheckMemberSize(struct _xmlParserCtxt,nameMax,4,9,48928)
CheckOffset(struct _xmlParserCtxt,nameMax,300,9,48928)
CheckMemberSize(struct _xmlParserCtxt,nameTab,8,9,48929)
CheckOffset(struct _xmlParserCtxt,nameTab,304,9,48929)
CheckMemberSize(struct _xmlParserCtxt,nbChars,8,9,48930)
CheckOffset(struct _xmlParserCtxt,nbChars,312,9,48930)
CheckMemberSize(struct _xmlParserCtxt,checkIndex,8,9,48931)
CheckOffset(struct _xmlParserCtxt,checkIndex,320,9,48931)
CheckMemberSize(struct _xmlParserCtxt,keepBlanks,4,9,48932)
CheckOffset(struct _xmlParserCtxt,keepBlanks,328,9,48932)
CheckMemberSize(struct _xmlParserCtxt,disableSAX,4,9,48933)
CheckOffset(struct _xmlParserCtxt,disableSAX,332,9,48933)
CheckMemberSize(struct _xmlParserCtxt,inSubset,4,9,48934)
CheckOffset(struct _xmlParserCtxt,inSubset,336,9,48934)
CheckMemberSize(struct _xmlParserCtxt,intSubName,8,9,48935)
CheckOffset(struct _xmlParserCtxt,intSubName,344,9,48935)
CheckMemberSize(struct _xmlParserCtxt,extSubURI,8,9,48936)
CheckOffset(struct _xmlParserCtxt,extSubURI,352,9,48936)
CheckMemberSize(struct _xmlParserCtxt,extSubSystem,8,9,48937)
CheckOffset(struct _xmlParserCtxt,extSubSystem,360,9,48937)
CheckMemberSize(struct _xmlParserCtxt,space,8,9,48938)
CheckOffset(struct _xmlParserCtxt,space,368,9,48938)
CheckMemberSize(struct _xmlParserCtxt,spaceNr,4,9,48939)
CheckOffset(struct _xmlParserCtxt,spaceNr,376,9,48939)
CheckMemberSize(struct _xmlParserCtxt,spaceMax,4,9,48940)
CheckOffset(struct _xmlParserCtxt,spaceMax,380,9,48940)
CheckMemberSize(struct _xmlParserCtxt,spaceTab,8,9,48941)
CheckOffset(struct _xmlParserCtxt,spaceTab,384,9,48941)
CheckMemberSize(struct _xmlParserCtxt,depth,4,9,48942)
CheckOffset(struct _xmlParserCtxt,depth,392,9,48942)
CheckMemberSize(struct _xmlParserCtxt,entity,8,9,48943)
CheckOffset(struct _xmlParserCtxt,entity,400,9,48943)
CheckMemberSize(struct _xmlParserCtxt,charset,4,9,48944)
CheckOffset(struct _xmlParserCtxt,charset,408,9,48944)
CheckMemberSize(struct _xmlParserCtxt,nodelen,4,9,48945)
CheckOffset(struct _xmlParserCtxt,nodelen,412,9,48945)
CheckMemberSize(struct _xmlParserCtxt,nodemem,4,9,48946)
CheckOffset(struct _xmlParserCtxt,nodemem,416,9,48946)
CheckMemberSize(struct _xmlParserCtxt,pedantic,4,9,48947)
CheckOffset(struct _xmlParserCtxt,pedantic,420,9,48947)
CheckMemberSize(struct _xmlParserCtxt,_private,8,9,48948)
CheckOffset(struct _xmlParserCtxt,_private,424,9,48948)
CheckMemberSize(struct _xmlParserCtxt,loadsubset,4,9,48949)
CheckOffset(struct _xmlParserCtxt,loadsubset,432,9,48949)
CheckMemberSize(struct _xmlParserCtxt,linenumbers,4,9,48950)
CheckOffset(struct _xmlParserCtxt,linenumbers,436,9,48950)
CheckMemberSize(struct _xmlParserCtxt,catalogs,8,9,48951)
CheckOffset(struct _xmlParserCtxt,catalogs,440,9,48951)
CheckMemberSize(struct _xmlParserCtxt,recovery,4,9,48952)
CheckOffset(struct _xmlParserCtxt,recovery,448,9,48952)
CheckMemberSize(struct _xmlParserCtxt,progressive,4,9,48953)
CheckOffset(struct _xmlParserCtxt,progressive,452,9,48953)
CheckMemberSize(struct _xmlParserCtxt,dict,8,9,48954)
CheckOffset(struct _xmlParserCtxt,dict,456,9,48954)
CheckMemberSize(struct _xmlParserCtxt,atts,8,9,48955)
CheckOffset(struct _xmlParserCtxt,atts,464,9,48955)
CheckMemberSize(struct _xmlParserCtxt,maxatts,4,9,48956)
CheckOffset(struct _xmlParserCtxt,maxatts,472,9,48956)
CheckMemberSize(struct _xmlParserCtxt,docdict,4,9,48957)
CheckOffset(struct _xmlParserCtxt,docdict,476,9,48957)
CheckMemberSize(struct _xmlParserCtxt,str_xml,8,9,48958)
CheckOffset(struct _xmlParserCtxt,str_xml,480,9,48958)
CheckMemberSize(struct _xmlParserCtxt,str_xmlns,8,9,48959)
CheckOffset(struct _xmlParserCtxt,str_xmlns,488,9,48959)
CheckMemberSize(struct _xmlParserCtxt,str_xml_ns,8,9,48960)
CheckOffset(struct _xmlParserCtxt,str_xml_ns,496,9,48960)
CheckMemberSize(struct _xmlParserCtxt,sax2,4,9,48961)
CheckOffset(struct _xmlParserCtxt,sax2,504,9,48961)
CheckMemberSize(struct _xmlParserCtxt,nsNr,4,9,48962)
CheckOffset(struct _xmlParserCtxt,nsNr,508,9,48962)
CheckMemberSize(struct _xmlParserCtxt,nsMax,4,9,48963)
CheckOffset(struct _xmlParserCtxt,nsMax,512,9,48963)
CheckMemberSize(struct _xmlParserCtxt,nsTab,8,9,48964)
CheckOffset(struct _xmlParserCtxt,nsTab,520,9,48964)
CheckMemberSize(struct _xmlParserCtxt,attallocs,8,9,48965)
CheckOffset(struct _xmlParserCtxt,attallocs,528,9,48965)
CheckMemberSize(struct _xmlParserCtxt,pushTab,8,9,48966)
CheckOffset(struct _xmlParserCtxt,pushTab,536,9,48966)
CheckMemberSize(struct _xmlParserCtxt,attsDefault,8,9,48967)
CheckOffset(struct _xmlParserCtxt,attsDefault,544,9,48967)
CheckMemberSize(struct _xmlParserCtxt,attsSpecial,8,9,48968)
CheckOffset(struct _xmlParserCtxt,attsSpecial,552,9,48968)
CheckMemberSize(struct _xmlParserCtxt,nsWellFormed,4,9,48969)
CheckOffset(struct _xmlParserCtxt,nsWellFormed,560,9,48969)
CheckMemberSize(struct _xmlParserCtxt,options,4,9,48970)
CheckOffset(struct _xmlParserCtxt,options,564,9,48970)
CheckMemberSize(struct _xmlParserCtxt,dictNames,4,9,48971)
CheckOffset(struct _xmlParserCtxt,dictNames,568,9,48971)
CheckMemberSize(struct _xmlParserCtxt,freeElemsNr,4,9,48972)
CheckOffset(struct _xmlParserCtxt,freeElemsNr,572,9,48972)
CheckMemberSize(struct _xmlParserCtxt,freeElems,8,9,48973)
CheckOffset(struct _xmlParserCtxt,freeElems,576,9,48973)
CheckMemberSize(struct _xmlParserCtxt,freeAttrsNr,4,9,48974)
CheckOffset(struct _xmlParserCtxt,freeAttrsNr,584,9,48974)
CheckMemberSize(struct _xmlParserCtxt,freeAttrs,8,9,48975)
CheckOffset(struct _xmlParserCtxt,freeAttrs,592,9,48975)
CheckMemberSize(struct _xmlParserCtxt,lastError,88,9,48976)
CheckOffset(struct _xmlParserCtxt,lastError,600,9,48976)
CheckMemberSize(struct _xmlParserCtxt,parseMode,4,9,48983)
CheckOffset(struct _xmlParserCtxt,parseMode,688,9,48983)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _xmlParserCtxt,440, 14808, 6, , NULL, 0, NULL)
CheckMemberSize(struct _xmlParserCtxt,userData,4,6,48856)
CheckOffset(struct _xmlParserCtxt,userData,4,6,48856)
CheckMemberSize(struct _xmlParserCtxt,myDoc,4,6,48857)
CheckOffset(struct _xmlParserCtxt,myDoc,8,6,48857)
CheckMemberSize(struct _xmlParserCtxt,wellFormed,4,6,48858)
CheckOffset(struct _xmlParserCtxt,wellFormed,12,6,48858)
CheckMemberSize(struct _xmlParserCtxt,replaceEntities,4,6,48859)
CheckOffset(struct _xmlParserCtxt,replaceEntities,16,6,48859)
CheckMemberSize(struct _xmlParserCtxt,version,4,6,48860)
CheckOffset(struct _xmlParserCtxt,version,20,6,48860)
CheckMemberSize(struct _xmlParserCtxt,encoding,4,6,48861)
CheckOffset(struct _xmlParserCtxt,encoding,24,6,48861)
CheckMemberSize(struct _xmlParserCtxt,standalone,4,6,48862)
CheckOffset(struct _xmlParserCtxt,standalone,28,6,48862)
CheckMemberSize(struct _xmlParserCtxt,html,4,6,48863)
CheckOffset(struct _xmlParserCtxt,html,32,6,48863)
CheckMemberSize(struct _xmlParserCtxt,input,4,6,48864)
CheckOffset(struct _xmlParserCtxt,input,36,6,48864)
CheckMemberSize(struct _xmlParserCtxt,inputNr,4,6,48865)
CheckOffset(struct _xmlParserCtxt,inputNr,40,6,48865)
CheckMemberSize(struct _xmlParserCtxt,inputMax,4,6,48866)
CheckOffset(struct _xmlParserCtxt,inputMax,44,6,48866)
CheckMemberSize(struct _xmlParserCtxt,inputTab,4,6,48867)
CheckOffset(struct _xmlParserCtxt,inputTab,48,6,48867)
CheckMemberSize(struct _xmlParserCtxt,node,4,6,48868)
CheckOffset(struct _xmlParserCtxt,node,52,6,48868)
CheckMemberSize(struct _xmlParserCtxt,nodeNr,4,6,48869)
CheckOffset(struct _xmlParserCtxt,nodeNr,56,6,48869)
CheckMemberSize(struct _xmlParserCtxt,nodeMax,4,6,48870)
CheckOffset(struct _xmlParserCtxt,nodeMax,60,6,48870)
CheckMemberSize(struct _xmlParserCtxt,nodeTab,4,6,48871)
CheckOffset(struct _xmlParserCtxt,nodeTab,64,6,48871)
CheckMemberSize(struct _xmlParserCtxt,record_info,4,6,48872)
CheckOffset(struct _xmlParserCtxt,record_info,68,6,48872)
CheckMemberSize(struct _xmlParserCtxt,node_seq,12,6,48881)
CheckOffset(struct _xmlParserCtxt,node_seq,72,6,48881)
CheckMemberSize(struct _xmlParserCtxt,errNo,4,6,48882)
CheckOffset(struct _xmlParserCtxt,errNo,84,6,48882)
CheckMemberSize(struct _xmlParserCtxt,hasExternalSubset,4,6,48883)
CheckOffset(struct _xmlParserCtxt,hasExternalSubset,88,6,48883)
CheckMemberSize(struct _xmlParserCtxt,hasPErefs,4,6,48884)
CheckOffset(struct _xmlParserCtxt,hasPErefs,92,6,48884)
CheckMemberSize(struct _xmlParserCtxt,external,4,6,48885)
CheckOffset(struct _xmlParserCtxt,external,96,6,48885)
CheckMemberSize(struct _xmlParserCtxt,valid,4,6,48886)
CheckOffset(struct _xmlParserCtxt,valid,100,6,48886)
CheckMemberSize(struct _xmlParserCtxt,validate,4,6,48887)
CheckOffset(struct _xmlParserCtxt,validate,104,6,48887)
CheckMemberSize(struct _xmlParserCtxt,vctxt,64,6,48904)
CheckOffset(struct _xmlParserCtxt,vctxt,108,6,48904)
CheckMemberSize(struct _xmlParserCtxt,instate,4,6,48923)
CheckOffset(struct _xmlParserCtxt,instate,172,6,48923)
CheckMemberSize(struct _xmlParserCtxt,token,4,6,48924)
CheckOffset(struct _xmlParserCtxt,token,176,6,48924)
CheckMemberSize(struct _xmlParserCtxt,directory,4,6,48925)
CheckOffset(struct _xmlParserCtxt,directory,180,6,48925)
CheckMemberSize(struct _xmlParserCtxt,name,4,6,48926)
CheckOffset(struct _xmlParserCtxt,name,184,6,48926)
CheckMemberSize(struct _xmlParserCtxt,nameNr,4,6,48927)
CheckOffset(struct _xmlParserCtxt,nameNr,188,6,48927)
CheckMemberSize(struct _xmlParserCtxt,nameMax,4,6,48928)
CheckOffset(struct _xmlParserCtxt,nameMax,192,6,48928)
CheckMemberSize(struct _xmlParserCtxt,nameTab,4,6,48929)
CheckOffset(struct _xmlParserCtxt,nameTab,196,6,48929)
CheckMemberSize(struct _xmlParserCtxt,nbChars,4,6,48930)
CheckOffset(struct _xmlParserCtxt,nbChars,200,6,48930)
CheckMemberSize(struct _xmlParserCtxt,checkIndex,4,6,48931)
CheckOffset(struct _xmlParserCtxt,checkIndex,204,6,48931)
CheckMemberSize(struct _xmlParserCtxt,keepBlanks,4,6,48932)
CheckOffset(struct _xmlParserCtxt,keepBlanks,208,6,48932)
CheckMemberSize(struct _xmlParserCtxt,disableSAX,4,6,48933)
CheckOffset(struct _xmlParserCtxt,disableSAX,212,6,48933)
CheckMemberSize(struct _xmlParserCtxt,inSubset,4,6,48934)
CheckOffset(struct _xmlParserCtxt,inSubset,216,6,48934)
CheckMemberSize(struct _xmlParserCtxt,intSubName,4,6,48935)
CheckOffset(struct _xmlParserCtxt,intSubName,220,6,48935)
CheckMemberSize(struct _xmlParserCtxt,extSubURI,4,6,48936)
CheckOffset(struct _xmlParserCtxt,extSubURI,224,6,48936)
CheckMemberSize(struct _xmlParserCtxt,extSubSystem,4,6,48937)
CheckOffset(struct _xmlParserCtxt,extSubSystem,228,6,48937)
CheckMemberSize(struct _xmlParserCtxt,space,4,6,48938)
CheckOffset(struct _xmlParserCtxt,space,232,6,48938)
CheckMemberSize(struct _xmlParserCtxt,spaceNr,4,6,48939)
CheckOffset(struct _xmlParserCtxt,spaceNr,236,6,48939)
CheckMemberSize(struct _xmlParserCtxt,spaceMax,4,6,48940)
CheckOffset(struct _xmlParserCtxt,spaceMax,240,6,48940)
CheckMemberSize(struct _xmlParserCtxt,spaceTab,4,6,48941)
CheckOffset(struct _xmlParserCtxt,spaceTab,244,6,48941)
CheckMemberSize(struct _xmlParserCtxt,depth,4,6,48942)
CheckOffset(struct _xmlParserCtxt,depth,248,6,48942)
CheckMemberSize(struct _xmlParserCtxt,entity,4,6,48943)
CheckOffset(struct _xmlParserCtxt,entity,252,6,48943)
CheckMemberSize(struct _xmlParserCtxt,charset,4,6,48944)
CheckOffset(struct _xmlParserCtxt,charset,256,6,48944)
CheckMemberSize(struct _xmlParserCtxt,nodelen,4,6,48945)
CheckOffset(struct _xmlParserCtxt,nodelen,260,6,48945)
CheckMemberSize(struct _xmlParserCtxt,nodemem,4,6,48946)
CheckOffset(struct _xmlParserCtxt,nodemem,264,6,48946)
CheckMemberSize(struct _xmlParserCtxt,pedantic,4,6,48947)
CheckOffset(struct _xmlParserCtxt,pedantic,268,6,48947)
CheckMemberSize(struct _xmlParserCtxt,_private,4,6,48948)
CheckOffset(struct _xmlParserCtxt,_private,272,6,48948)
CheckMemberSize(struct _xmlParserCtxt,loadsubset,4,6,48949)
CheckOffset(struct _xmlParserCtxt,loadsubset,276,6,48949)
CheckMemberSize(struct _xmlParserCtxt,linenumbers,4,6,48950)
CheckOffset(struct _xmlParserCtxt,linenumbers,280,6,48950)
CheckMemberSize(struct _xmlParserCtxt,catalogs,4,6,48951)
CheckOffset(struct _xmlParserCtxt,catalogs,284,6,48951)
CheckMemberSize(struct _xmlParserCtxt,recovery,4,6,48952)
CheckOffset(struct _xmlParserCtxt,recovery,288,6,48952)
CheckMemberSize(struct _xmlParserCtxt,progressive,4,6,48953)
CheckOffset(struct _xmlParserCtxt,progressive,292,6,48953)
CheckMemberSize(struct _xmlParserCtxt,dict,4,6,48954)
CheckOffset(struct _xmlParserCtxt,dict,296,6,48954)
CheckMemberSize(struct _xmlParserCtxt,atts,4,6,48955)
CheckOffset(struct _xmlParserCtxt,atts,300,6,48955)
CheckMemberSize(struct _xmlParserCtxt,maxatts,4,6,48956)
CheckOffset(struct _xmlParserCtxt,maxatts,304,6,48956)
CheckMemberSize(struct _xmlParserCtxt,docdict,4,6,48957)
CheckOffset(struct _xmlParserCtxt,docdict,308,6,48957)
CheckMemberSize(struct _xmlParserCtxt,str_xml,4,6,48958)
CheckOffset(struct _xmlParserCtxt,str_xml,312,6,48958)
CheckMemberSize(struct _xmlParserCtxt,str_xmlns,4,6,48959)
CheckOffset(struct _xmlParserCtxt,str_xmlns,316,6,48959)
CheckMemberSize(struct _xmlParserCtxt,str_xml_ns,4,6,48960)
CheckOffset(struct _xmlParserCtxt,str_xml_ns,320,6,48960)
CheckMemberSize(struct _xmlParserCtxt,sax2,4,6,48961)
CheckOffset(struct _xmlParserCtxt,sax2,324,6,48961)
CheckMemberSize(struct _xmlParserCtxt,nsNr,4,6,48962)
CheckOffset(struct _xmlParserCtxt,nsNr,328,6,48962)
CheckMemberSize(struct _xmlParserCtxt,nsMax,4,6,48963)
CheckOffset(struct _xmlParserCtxt,nsMax,332,6,48963)
CheckMemberSize(struct _xmlParserCtxt,nsTab,4,6,48964)
CheckOffset(struct _xmlParserCtxt,nsTab,336,6,48964)
CheckMemberSize(struct _xmlParserCtxt,attallocs,4,6,48965)
CheckOffset(struct _xmlParserCtxt,attallocs,340,6,48965)
CheckMemberSize(struct _xmlParserCtxt,pushTab,4,6,48966)
CheckOffset(struct _xmlParserCtxt,pushTab,344,6,48966)
CheckMemberSize(struct _xmlParserCtxt,attsDefault,4,6,48967)
CheckOffset(struct _xmlParserCtxt,attsDefault,348,6,48967)
CheckMemberSize(struct _xmlParserCtxt,attsSpecial,4,6,48968)
CheckOffset(struct _xmlParserCtxt,attsSpecial,352,6,48968)
CheckMemberSize(struct _xmlParserCtxt,nsWellFormed,4,6,48969)
CheckOffset(struct _xmlParserCtxt,nsWellFormed,356,6,48969)
CheckMemberSize(struct _xmlParserCtxt,options,4,6,48970)
CheckOffset(struct _xmlParserCtxt,options,360,6,48970)
CheckMemberSize(struct _xmlParserCtxt,dictNames,4,6,48971)
CheckOffset(struct _xmlParserCtxt,dictNames,364,6,48971)
CheckMemberSize(struct _xmlParserCtxt,freeElemsNr,4,6,48972)
CheckOffset(struct _xmlParserCtxt,freeElemsNr,368,6,48972)
CheckMemberSize(struct _xmlParserCtxt,freeElems,4,6,48973)
CheckOffset(struct _xmlParserCtxt,freeElems,372,6,48973)
CheckMemberSize(struct _xmlParserCtxt,freeAttrsNr,4,6,48974)
CheckOffset(struct _xmlParserCtxt,freeAttrsNr,376,6,48974)
CheckMemberSize(struct _xmlParserCtxt,freeAttrs,4,6,48975)
CheckOffset(struct _xmlParserCtxt,freeAttrs,380,6,48975)
CheckMemberSize(struct _xmlParserCtxt,lastError,52,6,48976)
CheckOffset(struct _xmlParserCtxt,lastError,384,6,48976)
CheckMemberSize(struct _xmlParserCtxt,parseMode,4,6,48983)
CheckOffset(struct _xmlParserCtxt,parseMode,436,6,48983)
#elif defined __ia64__
CheckTypeSize(struct _xmlParserCtxt,696, 14808, 3, , NULL, 0, NULL)
CheckMemberSize(struct _xmlParserCtxt,userData,8,3,48856)
CheckOffset(struct _xmlParserCtxt,userData,8,3,48856)
CheckMemberSize(struct _xmlParserCtxt,myDoc,8,3,48857)
CheckOffset(struct _xmlParserCtxt,myDoc,16,3,48857)
CheckMemberSize(struct _xmlParserCtxt,wellFormed,4,3,48858)
CheckOffset(struct _xmlParserCtxt,wellFormed,24,3,48858)
CheckMemberSize(struct _xmlParserCtxt,replaceEntities,4,3,48859)
CheckOffset(struct _xmlParserCtxt,replaceEntities,28,3,48859)
CheckMemberSize(struct _xmlParserCtxt,version,8,3,48860)
CheckOffset(struct _xmlParserCtxt,version,32,3,48860)
CheckMemberSize(struct _xmlParserCtxt,encoding,8,3,48861)
CheckOffset(struct _xmlParserCtxt,encoding,40,3,48861)
CheckMemberSize(struct _xmlParserCtxt,standalone,4,3,48862)
CheckOffset(struct _xmlParserCtxt,standalone,48,3,48862)
CheckMemberSize(struct _xmlParserCtxt,html,4,3,48863)
CheckOffset(struct _xmlParserCtxt,html,52,3,48863)
CheckMemberSize(struct _xmlParserCtxt,input,8,3,48864)
CheckOffset(struct _xmlParserCtxt,input,56,3,48864)
CheckMemberSize(struct _xmlParserCtxt,inputNr,4,3,48865)
CheckOffset(struct _xmlParserCtxt,inputNr,64,3,48865)
CheckMemberSize(struct _xmlParserCtxt,inputMax,4,3,48866)
CheckOffset(struct _xmlParserCtxt,inputMax,68,3,48866)
CheckMemberSize(struct _xmlParserCtxt,inputTab,8,3,48867)
CheckOffset(struct _xmlParserCtxt,inputTab,72,3,48867)
CheckMemberSize(struct _xmlParserCtxt,node,8,3,48868)
CheckOffset(struct _xmlParserCtxt,node,80,3,48868)
CheckMemberSize(struct _xmlParserCtxt,nodeNr,4,3,48869)
CheckOffset(struct _xmlParserCtxt,nodeNr,88,3,48869)
CheckMemberSize(struct _xmlParserCtxt,nodeMax,4,3,48870)
CheckOffset(struct _xmlParserCtxt,nodeMax,92,3,48870)
CheckMemberSize(struct _xmlParserCtxt,nodeTab,8,3,48871)
CheckOffset(struct _xmlParserCtxt,nodeTab,96,3,48871)
CheckMemberSize(struct _xmlParserCtxt,record_info,4,3,48872)
CheckOffset(struct _xmlParserCtxt,record_info,104,3,48872)
CheckMemberSize(struct _xmlParserCtxt,node_seq,24,3,48881)
CheckOffset(struct _xmlParserCtxt,node_seq,112,3,48881)
CheckMemberSize(struct _xmlParserCtxt,errNo,4,3,48882)
CheckOffset(struct _xmlParserCtxt,errNo,136,3,48882)
CheckMemberSize(struct _xmlParserCtxt,hasExternalSubset,4,3,48883)
CheckOffset(struct _xmlParserCtxt,hasExternalSubset,140,3,48883)
CheckMemberSize(struct _xmlParserCtxt,hasPErefs,4,3,48884)
CheckOffset(struct _xmlParserCtxt,hasPErefs,144,3,48884)
CheckMemberSize(struct _xmlParserCtxt,external,4,3,48885)
CheckOffset(struct _xmlParserCtxt,external,148,3,48885)
CheckMemberSize(struct _xmlParserCtxt,valid,4,3,48886)
CheckOffset(struct _xmlParserCtxt,valid,152,3,48886)
CheckMemberSize(struct _xmlParserCtxt,validate,4,3,48887)
CheckOffset(struct _xmlParserCtxt,validate,156,3,48887)
CheckMemberSize(struct _xmlParserCtxt,vctxt,112,3,48904)
CheckOffset(struct _xmlParserCtxt,vctxt,160,3,48904)
CheckMemberSize(struct _xmlParserCtxt,instate,4,3,48923)
CheckOffset(struct _xmlParserCtxt,instate,272,3,48923)
CheckMemberSize(struct _xmlParserCtxt,token,4,3,48924)
CheckOffset(struct _xmlParserCtxt,token,276,3,48924)
CheckMemberSize(struct _xmlParserCtxt,directory,8,3,48925)
CheckOffset(struct _xmlParserCtxt,directory,280,3,48925)
CheckMemberSize(struct _xmlParserCtxt,name,8,3,48926)
CheckOffset(struct _xmlParserCtxt,name,288,3,48926)
CheckMemberSize(struct _xmlParserCtxt,nameNr,4,3,48927)
CheckOffset(struct _xmlParserCtxt,nameNr,296,3,48927)
CheckMemberSize(struct _xmlParserCtxt,nameMax,4,3,48928)
CheckOffset(struct _xmlParserCtxt,nameMax,300,3,48928)
CheckMemberSize(struct _xmlParserCtxt,nameTab,8,3,48929)
CheckOffset(struct _xmlParserCtxt,nameTab,304,3,48929)
CheckMemberSize(struct _xmlParserCtxt,nbChars,8,3,48930)
CheckOffset(struct _xmlParserCtxt,nbChars,312,3,48930)
CheckMemberSize(struct _xmlParserCtxt,checkIndex,8,3,48931)
CheckOffset(struct _xmlParserCtxt,checkIndex,320,3,48931)
CheckMemberSize(struct _xmlParserCtxt,keepBlanks,4,3,48932)
CheckOffset(struct _xmlParserCtxt,keepBlanks,328,3,48932)
CheckMemberSize(struct _xmlParserCtxt,disableSAX,4,3,48933)
CheckOffset(struct _xmlParserCtxt,disableSAX,332,3,48933)
CheckMemberSize(struct _xmlParserCtxt,inSubset,4,3,48934)
CheckOffset(struct _xmlParserCtxt,inSubset,336,3,48934)
CheckMemberSize(struct _xmlParserCtxt,intSubName,8,3,48935)
CheckOffset(struct _xmlParserCtxt,intSubName,344,3,48935)
CheckMemberSize(struct _xmlParserCtxt,extSubURI,8,3,48936)
CheckOffset(struct _xmlParserCtxt,extSubURI,352,3,48936)
CheckMemberSize(struct _xmlParserCtxt,extSubSystem,8,3,48937)
CheckOffset(struct _xmlParserCtxt,extSubSystem,360,3,48937)
CheckMemberSize(struct _xmlParserCtxt,space,8,3,48938)
CheckOffset(struct _xmlParserCtxt,space,368,3,48938)
CheckMemberSize(struct _xmlParserCtxt,spaceNr,4,3,48939)
CheckOffset(struct _xmlParserCtxt,spaceNr,376,3,48939)
CheckMemberSize(struct _xmlParserCtxt,spaceMax,4,3,48940)
CheckOffset(struct _xmlParserCtxt,spaceMax,380,3,48940)
CheckMemberSize(struct _xmlParserCtxt,spaceTab,8,3,48941)
CheckOffset(struct _xmlParserCtxt,spaceTab,384,3,48941)
CheckMemberSize(struct _xmlParserCtxt,depth,4,3,48942)
CheckOffset(struct _xmlParserCtxt,depth,392,3,48942)
CheckMemberSize(struct _xmlParserCtxt,entity,8,3,48943)
CheckOffset(struct _xmlParserCtxt,entity,400,3,48943)
CheckMemberSize(struct _xmlParserCtxt,charset,4,3,48944)
CheckOffset(struct _xmlParserCtxt,charset,408,3,48944)
CheckMemberSize(struct _xmlParserCtxt,nodelen,4,3,48945)
CheckOffset(struct _xmlParserCtxt,nodelen,412,3,48945)
CheckMemberSize(struct _xmlParserCtxt,nodemem,4,3,48946)
CheckOffset(struct _xmlParserCtxt,nodemem,416,3,48946)
CheckMemberSize(struct _xmlParserCtxt,pedantic,4,3,48947)
CheckOffset(struct _xmlParserCtxt,pedantic,420,3,48947)
CheckMemberSize(struct _xmlParserCtxt,_private,8,3,48948)
CheckOffset(struct _xmlParserCtxt,_private,424,3,48948)
CheckMemberSize(struct _xmlParserCtxt,loadsubset,4,3,48949)
CheckOffset(struct _xmlParserCtxt,loadsubset,432,3,48949)
CheckMemberSize(struct _xmlParserCtxt,linenumbers,4,3,48950)
CheckOffset(struct _xmlParserCtxt,linenumbers,436,3,48950)
CheckMemberSize(struct _xmlParserCtxt,catalogs,8,3,48951)
CheckOffset(struct _xmlParserCtxt,catalogs,440,3,48951)
CheckMemberSize(struct _xmlParserCtxt,recovery,4,3,48952)
CheckOffset(struct _xmlParserCtxt,recovery,448,3,48952)
CheckMemberSize(struct _xmlParserCtxt,progressive,4,3,48953)
CheckOffset(struct _xmlParserCtxt,progressive,452,3,48953)
CheckMemberSize(struct _xmlParserCtxt,dict,8,3,48954)
CheckOffset(struct _xmlParserCtxt,dict,456,3,48954)
CheckMemberSize(struct _xmlParserCtxt,atts,8,3,48955)
CheckOffset(struct _xmlParserCtxt,atts,464,3,48955)
CheckMemberSize(struct _xmlParserCtxt,maxatts,4,3,48956)
CheckOffset(struct _xmlParserCtxt,maxatts,472,3,48956)
CheckMemberSize(struct _xmlParserCtxt,docdict,4,3,48957)
CheckOffset(struct _xmlParserCtxt,docdict,476,3,48957)
CheckMemberSize(struct _xmlParserCtxt,str_xml,8,3,48958)
CheckOffset(struct _xmlParserCtxt,str_xml,480,3,48958)
CheckMemberSize(struct _xmlParserCtxt,str_xmlns,8,3,48959)
CheckOffset(struct _xmlParserCtxt,str_xmlns,488,3,48959)
CheckMemberSize(struct _xmlParserCtxt,str_xml_ns,8,3,48960)
CheckOffset(struct _xmlParserCtxt,str_xml_ns,496,3,48960)
CheckMemberSize(struct _xmlParserCtxt,sax2,4,3,48961)
CheckOffset(struct _xmlParserCtxt,sax2,504,3,48961)
CheckMemberSize(struct _xmlParserCtxt,nsNr,4,3,48962)
CheckOffset(struct _xmlParserCtxt,nsNr,508,3,48962)
CheckMemberSize(struct _xmlParserCtxt,nsMax,4,3,48963)
CheckOffset(struct _xmlParserCtxt,nsMax,512,3,48963)
CheckMemberSize(struct _xmlParserCtxt,nsTab,8,3,48964)
CheckOffset(struct _xmlParserCtxt,nsTab,520,3,48964)
CheckMemberSize(struct _xmlParserCtxt,attallocs,8,3,48965)
CheckOffset(struct _xmlParserCtxt,attallocs,528,3,48965)
CheckMemberSize(struct _xmlParserCtxt,pushTab,8,3,48966)
CheckOffset(struct _xmlParserCtxt,pushTab,536,3,48966)
CheckMemberSize(struct _xmlParserCtxt,attsDefault,8,3,48967)
CheckOffset(struct _xmlParserCtxt,attsDefault,544,3,48967)
CheckMemberSize(struct _xmlParserCtxt,attsSpecial,8,3,48968)
CheckOffset(struct _xmlParserCtxt,attsSpecial,552,3,48968)
CheckMemberSize(struct _xmlParserCtxt,nsWellFormed,4,3,48969)
CheckOffset(struct _xmlParserCtxt,nsWellFormed,560,3,48969)
CheckMemberSize(struct _xmlParserCtxt,options,4,3,48970)
CheckOffset(struct _xmlParserCtxt,options,564,3,48970)
CheckMemberSize(struct _xmlParserCtxt,dictNames,4,3,48971)
CheckOffset(struct _xmlParserCtxt,dictNames,568,3,48971)
CheckMemberSize(struct _xmlParserCtxt,freeElemsNr,4,3,48972)
CheckOffset(struct _xmlParserCtxt,freeElemsNr,572,3,48972)
CheckMemberSize(struct _xmlParserCtxt,freeElems,8,3,48973)
CheckOffset(struct _xmlParserCtxt,freeElems,576,3,48973)
CheckMemberSize(struct _xmlParserCtxt,freeAttrsNr,4,3,48974)
CheckOffset(struct _xmlParserCtxt,freeAttrsNr,584,3,48974)
CheckMemberSize(struct _xmlParserCtxt,freeAttrs,8,3,48975)
CheckOffset(struct _xmlParserCtxt,freeAttrs,592,3,48975)
CheckMemberSize(struct _xmlParserCtxt,lastError,88,3,48976)
CheckOffset(struct _xmlParserCtxt,lastError,600,3,48976)
CheckMemberSize(struct _xmlParserCtxt,parseMode,4,3,48983)
CheckOffset(struct _xmlParserCtxt,parseMode,688,3,48983)
#elif defined __i386__
CheckTypeSize(struct _xmlParserCtxt,440, 14808, 2, , NULL, 0, NULL)
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
#elif 1
CheckTypeSize(struct _xmlParserCtxt,0, 14808, 1, , NULL, 0, NULL)
Msg("Missing member data for _xmlParserCtxt on All\n");
CheckOffset(struct _xmlParserCtxt,sax,0,1,48855)
#endif

#if defined __s390x__
CheckTypeSize(struct _xmlParserNodeInfoSeq,24, 14812, 12, , NULL, 0, NULL)
CheckMemberSize(struct _xmlParserNodeInfoSeq,length,8,12,48874)
CheckOffset(struct _xmlParserNodeInfoSeq,length,8,12,48874)
CheckMemberSize(struct _xmlParserNodeInfoSeq,buffer,8,12,48880)
CheckOffset(struct _xmlParserNodeInfoSeq,buffer,16,12,48880)
#elif defined __x86_64__
CheckTypeSize(struct _xmlParserNodeInfoSeq,24, 14812, 11, , NULL, 0, NULL)
CheckMemberSize(struct _xmlParserNodeInfoSeq,length,8,11,48874)
CheckOffset(struct _xmlParserNodeInfoSeq,length,8,11,48874)
CheckMemberSize(struct _xmlParserNodeInfoSeq,buffer,8,11,48880)
CheckOffset(struct _xmlParserNodeInfoSeq,buffer,16,11,48880)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _xmlParserNodeInfoSeq,12, 14812, 10, , NULL, 0, NULL)
CheckMemberSize(struct _xmlParserNodeInfoSeq,length,4,10,48874)
CheckOffset(struct _xmlParserNodeInfoSeq,length,4,10,48874)
CheckMemberSize(struct _xmlParserNodeInfoSeq,buffer,4,10,48880)
CheckOffset(struct _xmlParserNodeInfoSeq,buffer,8,10,48880)
#elif defined __powerpc64__
CheckTypeSize(struct _xmlParserNodeInfoSeq,24, 14812, 9, , NULL, 0, NULL)
CheckMemberSize(struct _xmlParserNodeInfoSeq,length,8,9,48874)
CheckOffset(struct _xmlParserNodeInfoSeq,length,8,9,48874)
CheckMemberSize(struct _xmlParserNodeInfoSeq,buffer,8,9,48880)
CheckOffset(struct _xmlParserNodeInfoSeq,buffer,16,9,48880)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _xmlParserNodeInfoSeq,12, 14812, 6, , NULL, 0, NULL)
CheckMemberSize(struct _xmlParserNodeInfoSeq,length,4,6,48874)
CheckOffset(struct _xmlParserNodeInfoSeq,length,4,6,48874)
CheckMemberSize(struct _xmlParserNodeInfoSeq,buffer,4,6,48880)
CheckOffset(struct _xmlParserNodeInfoSeq,buffer,8,6,48880)
#elif defined __ia64__
CheckTypeSize(struct _xmlParserNodeInfoSeq,24, 14812, 3, , NULL, 0, NULL)
CheckMemberSize(struct _xmlParserNodeInfoSeq,length,8,3,48874)
CheckOffset(struct _xmlParserNodeInfoSeq,length,8,3,48874)
CheckMemberSize(struct _xmlParserNodeInfoSeq,buffer,8,3,48880)
CheckOffset(struct _xmlParserNodeInfoSeq,buffer,16,3,48880)
#elif defined __i386__
CheckTypeSize(struct _xmlParserNodeInfoSeq,12, 14812, 2, , NULL, 0, NULL)
CheckMemberSize(struct _xmlParserNodeInfoSeq,length,4,2,48874)
CheckOffset(struct _xmlParserNodeInfoSeq,length,4,2,48874)
CheckMemberSize(struct _xmlParserNodeInfoSeq,buffer,4,2,48880)
CheckOffset(struct _xmlParserNodeInfoSeq,buffer,8,2,48880)
#elif 1
CheckTypeSize(struct _xmlParserNodeInfoSeq,0, 14812, 1, , NULL, 0, NULL)
Msg("Missing member data for _xmlParserNodeInfoSeq on All\n");
CheckOffset(struct _xmlParserNodeInfoSeq,maximum,0,1,48873)
#endif

#if defined __s390x__
CheckTypeSize(struct _xmlParserNodeInfo,40, 14813, 12, , NULL, 0, NULL)
CheckMemberSize(struct _xmlParserNodeInfo,begin_pos,8,12,48876)
CheckOffset(struct _xmlParserNodeInfo,begin_pos,8,12,48876)
CheckMemberSize(struct _xmlParserNodeInfo,begin_line,8,12,48877)
CheckOffset(struct _xmlParserNodeInfo,begin_line,16,12,48877)
CheckMemberSize(struct _xmlParserNodeInfo,end_pos,8,12,48878)
CheckOffset(struct _xmlParserNodeInfo,end_pos,24,12,48878)
CheckMemberSize(struct _xmlParserNodeInfo,end_line,8,12,48879)
CheckOffset(struct _xmlParserNodeInfo,end_line,32,12,48879)
#elif defined __x86_64__
CheckTypeSize(struct _xmlParserNodeInfo,40, 14813, 11, , NULL, 0, NULL)
CheckMemberSize(struct _xmlParserNodeInfo,begin_pos,8,11,48876)
CheckOffset(struct _xmlParserNodeInfo,begin_pos,8,11,48876)
CheckMemberSize(struct _xmlParserNodeInfo,begin_line,8,11,48877)
CheckOffset(struct _xmlParserNodeInfo,begin_line,16,11,48877)
CheckMemberSize(struct _xmlParserNodeInfo,end_pos,8,11,48878)
CheckOffset(struct _xmlParserNodeInfo,end_pos,24,11,48878)
CheckMemberSize(struct _xmlParserNodeInfo,end_line,8,11,48879)
CheckOffset(struct _xmlParserNodeInfo,end_line,32,11,48879)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _xmlParserNodeInfo,20, 14813, 10, , NULL, 0, NULL)
CheckMemberSize(struct _xmlParserNodeInfo,begin_pos,4,10,48876)
CheckOffset(struct _xmlParserNodeInfo,begin_pos,4,10,48876)
CheckMemberSize(struct _xmlParserNodeInfo,begin_line,4,10,48877)
CheckOffset(struct _xmlParserNodeInfo,begin_line,8,10,48877)
CheckMemberSize(struct _xmlParserNodeInfo,end_pos,4,10,48878)
CheckOffset(struct _xmlParserNodeInfo,end_pos,12,10,48878)
CheckMemberSize(struct _xmlParserNodeInfo,end_line,4,10,48879)
CheckOffset(struct _xmlParserNodeInfo,end_line,16,10,48879)
#elif defined __powerpc64__
CheckTypeSize(struct _xmlParserNodeInfo,40, 14813, 9, , NULL, 0, NULL)
CheckMemberSize(struct _xmlParserNodeInfo,begin_pos,8,9,48876)
CheckOffset(struct _xmlParserNodeInfo,begin_pos,8,9,48876)
CheckMemberSize(struct _xmlParserNodeInfo,begin_line,8,9,48877)
CheckOffset(struct _xmlParserNodeInfo,begin_line,16,9,48877)
CheckMemberSize(struct _xmlParserNodeInfo,end_pos,8,9,48878)
CheckOffset(struct _xmlParserNodeInfo,end_pos,24,9,48878)
CheckMemberSize(struct _xmlParserNodeInfo,end_line,8,9,48879)
CheckOffset(struct _xmlParserNodeInfo,end_line,32,9,48879)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _xmlParserNodeInfo,20, 14813, 6, , NULL, 0, NULL)
CheckMemberSize(struct _xmlParserNodeInfo,begin_pos,4,6,48876)
CheckOffset(struct _xmlParserNodeInfo,begin_pos,4,6,48876)
CheckMemberSize(struct _xmlParserNodeInfo,begin_line,4,6,48877)
CheckOffset(struct _xmlParserNodeInfo,begin_line,8,6,48877)
CheckMemberSize(struct _xmlParserNodeInfo,end_pos,4,6,48878)
CheckOffset(struct _xmlParserNodeInfo,end_pos,12,6,48878)
CheckMemberSize(struct _xmlParserNodeInfo,end_line,4,6,48879)
CheckOffset(struct _xmlParserNodeInfo,end_line,16,6,48879)
#elif defined __ia64__
CheckTypeSize(struct _xmlParserNodeInfo,40, 14813, 3, , NULL, 0, NULL)
CheckMemberSize(struct _xmlParserNodeInfo,begin_pos,8,3,48876)
CheckOffset(struct _xmlParserNodeInfo,begin_pos,8,3,48876)
CheckMemberSize(struct _xmlParserNodeInfo,begin_line,8,3,48877)
CheckOffset(struct _xmlParserNodeInfo,begin_line,16,3,48877)
CheckMemberSize(struct _xmlParserNodeInfo,end_pos,8,3,48878)
CheckOffset(struct _xmlParserNodeInfo,end_pos,24,3,48878)
CheckMemberSize(struct _xmlParserNodeInfo,end_line,8,3,48879)
CheckOffset(struct _xmlParserNodeInfo,end_line,32,3,48879)
#elif defined __i386__
CheckTypeSize(struct _xmlParserNodeInfo,20, 14813, 2, , NULL, 0, NULL)
CheckMemberSize(struct _xmlParserNodeInfo,begin_pos,4,2,48876)
CheckOffset(struct _xmlParserNodeInfo,begin_pos,4,2,48876)
CheckMemberSize(struct _xmlParserNodeInfo,begin_line,4,2,48877)
CheckOffset(struct _xmlParserNodeInfo,begin_line,8,2,48877)
CheckMemberSize(struct _xmlParserNodeInfo,end_pos,4,2,48878)
CheckOffset(struct _xmlParserNodeInfo,end_pos,12,2,48878)
CheckMemberSize(struct _xmlParserNodeInfo,end_line,4,2,48879)
CheckOffset(struct _xmlParserNodeInfo,end_line,16,2,48879)
#elif 1
CheckTypeSize(struct _xmlParserNodeInfo,0, 14813, 1, , NULL, 0, NULL)
Msg("Missing member data for _xmlParserNodeInfo on All\n");
CheckOffset(struct _xmlParserNodeInfo,node,0,1,48875)
#endif

#if defined __s390x__
CheckTypeSize(xmlParserNodeInfo,40, 14816, 12, 3.1, NULL, 14813, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlParserNodeInfo,40, 14816, 11, 3.1, NULL, 14813, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlParserNodeInfo,20, 14816, 10, 3.1, NULL, 14813, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlParserNodeInfo,40, 14816, 9, 3.1, NULL, 14813, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlParserNodeInfo,20, 14816, 6, 3.1, NULL, 14813, NULL)
#elif defined __ia64__
CheckTypeSize(xmlParserNodeInfo,40, 14816, 3, 3.1, NULL, 14813, NULL)
#elif defined __i386__
CheckTypeSize(xmlParserNodeInfo,20, 14816, 2, 3.1, NULL, 14813, NULL)
#else
Msg("Find size of xmlParserNodeInfo (14816)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14813,NULL);\n",architecture,14816,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlParserNodeInfoSeq,24, 14818, 12, 3.1, NULL, 14812, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlParserNodeInfoSeq,24, 14818, 11, 3.1, NULL, 14812, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlParserNodeInfoSeq,12, 14818, 10, 3.1, NULL, 14812, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlParserNodeInfoSeq,24, 14818, 9, 3.1, NULL, 14812, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlParserNodeInfoSeq,12, 14818, 6, 3.1, NULL, 14812, NULL)
#elif defined __ia64__
CheckTypeSize(xmlParserNodeInfoSeq,24, 14818, 3, 3.1, NULL, 14812, NULL)
#elif defined __i386__
CheckTypeSize(xmlParserNodeInfoSeq,12, 14818, 2, 3.1, NULL, 14812, NULL)
#else
Msg("Find size of xmlParserNodeInfoSeq (14818)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14812,NULL);\n",architecture,14818,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _xmlValidCtxt,112, 14819, 12, , NULL, 0, NULL)
CheckMemberSize(struct _xmlValidCtxt,error,8,12,48889)
CheckOffset(struct _xmlValidCtxt,error,8,12,48889)
CheckMemberSize(struct _xmlValidCtxt,warning,8,12,48890)
CheckOffset(struct _xmlValidCtxt,warning,16,12,48890)
CheckMemberSize(struct _xmlValidCtxt,node,8,12,48891)
CheckOffset(struct _xmlValidCtxt,node,24,12,48891)
CheckMemberSize(struct _xmlValidCtxt,nodeNr,4,12,48892)
CheckOffset(struct _xmlValidCtxt,nodeNr,32,12,48892)
CheckMemberSize(struct _xmlValidCtxt,nodeMax,4,12,48893)
CheckOffset(struct _xmlValidCtxt,nodeMax,36,12,48893)
CheckMemberSize(struct _xmlValidCtxt,nodeTab,8,12,48894)
CheckOffset(struct _xmlValidCtxt,nodeTab,40,12,48894)
CheckMemberSize(struct _xmlValidCtxt,finishDtd,4,12,48895)
CheckOffset(struct _xmlValidCtxt,finishDtd,48,12,48895)
CheckMemberSize(struct _xmlValidCtxt,doc,8,12,48896)
CheckOffset(struct _xmlValidCtxt,doc,56,12,48896)
CheckMemberSize(struct _xmlValidCtxt,valid,4,12,48897)
CheckOffset(struct _xmlValidCtxt,valid,64,12,48897)
CheckMemberSize(struct _xmlValidCtxt,vstate,8,12,48898)
CheckOffset(struct _xmlValidCtxt,vstate,72,12,48898)
CheckMemberSize(struct _xmlValidCtxt,vstateNr,4,12,48899)
CheckOffset(struct _xmlValidCtxt,vstateNr,80,12,48899)
CheckMemberSize(struct _xmlValidCtxt,vstateMax,4,12,48900)
CheckOffset(struct _xmlValidCtxt,vstateMax,84,12,48900)
CheckMemberSize(struct _xmlValidCtxt,vstateTab,8,12,48901)
CheckOffset(struct _xmlValidCtxt,vstateTab,88,12,48901)
CheckMemberSize(struct _xmlValidCtxt,am,8,12,48902)
CheckOffset(struct _xmlValidCtxt,am,96,12,48902)
CheckMemberSize(struct _xmlValidCtxt,state,8,12,48903)
CheckOffset(struct _xmlValidCtxt,state,104,12,48903)
#elif defined __x86_64__
CheckTypeSize(struct _xmlValidCtxt,112, 14819, 11, , NULL, 0, NULL)
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
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _xmlValidCtxt,64, 14819, 10, , NULL, 0, NULL)
CheckMemberSize(struct _xmlValidCtxt,error,4,10,48889)
CheckOffset(struct _xmlValidCtxt,error,4,10,48889)
CheckMemberSize(struct _xmlValidCtxt,warning,4,10,48890)
CheckOffset(struct _xmlValidCtxt,warning,8,10,48890)
CheckMemberSize(struct _xmlValidCtxt,node,4,10,48891)
CheckOffset(struct _xmlValidCtxt,node,12,10,48891)
CheckMemberSize(struct _xmlValidCtxt,nodeNr,4,10,48892)
CheckOffset(struct _xmlValidCtxt,nodeNr,16,10,48892)
CheckMemberSize(struct _xmlValidCtxt,nodeMax,4,10,48893)
CheckOffset(struct _xmlValidCtxt,nodeMax,20,10,48893)
CheckMemberSize(struct _xmlValidCtxt,nodeTab,4,10,48894)
CheckOffset(struct _xmlValidCtxt,nodeTab,24,10,48894)
CheckMemberSize(struct _xmlValidCtxt,finishDtd,4,10,48895)
CheckOffset(struct _xmlValidCtxt,finishDtd,28,10,48895)
CheckMemberSize(struct _xmlValidCtxt,doc,4,10,48896)
CheckOffset(struct _xmlValidCtxt,doc,32,10,48896)
CheckMemberSize(struct _xmlValidCtxt,valid,4,10,48897)
CheckOffset(struct _xmlValidCtxt,valid,36,10,48897)
CheckMemberSize(struct _xmlValidCtxt,vstate,4,10,48898)
CheckOffset(struct _xmlValidCtxt,vstate,40,10,48898)
CheckMemberSize(struct _xmlValidCtxt,vstateNr,4,10,48899)
CheckOffset(struct _xmlValidCtxt,vstateNr,44,10,48899)
CheckMemberSize(struct _xmlValidCtxt,vstateMax,4,10,48900)
CheckOffset(struct _xmlValidCtxt,vstateMax,48,10,48900)
CheckMemberSize(struct _xmlValidCtxt,vstateTab,4,10,48901)
CheckOffset(struct _xmlValidCtxt,vstateTab,52,10,48901)
CheckMemberSize(struct _xmlValidCtxt,am,4,10,48902)
CheckOffset(struct _xmlValidCtxt,am,56,10,48902)
CheckMemberSize(struct _xmlValidCtxt,state,4,10,48903)
CheckOffset(struct _xmlValidCtxt,state,60,10,48903)
#elif defined __powerpc64__
CheckTypeSize(struct _xmlValidCtxt,112, 14819, 9, , NULL, 0, NULL)
CheckMemberSize(struct _xmlValidCtxt,error,8,9,48889)
CheckOffset(struct _xmlValidCtxt,error,8,9,48889)
CheckMemberSize(struct _xmlValidCtxt,warning,8,9,48890)
CheckOffset(struct _xmlValidCtxt,warning,16,9,48890)
CheckMemberSize(struct _xmlValidCtxt,node,8,9,48891)
CheckOffset(struct _xmlValidCtxt,node,24,9,48891)
CheckMemberSize(struct _xmlValidCtxt,nodeNr,4,9,48892)
CheckOffset(struct _xmlValidCtxt,nodeNr,32,9,48892)
CheckMemberSize(struct _xmlValidCtxt,nodeMax,4,9,48893)
CheckOffset(struct _xmlValidCtxt,nodeMax,36,9,48893)
CheckMemberSize(struct _xmlValidCtxt,nodeTab,8,9,48894)
CheckOffset(struct _xmlValidCtxt,nodeTab,40,9,48894)
CheckMemberSize(struct _xmlValidCtxt,finishDtd,4,9,48895)
CheckOffset(struct _xmlValidCtxt,finishDtd,48,9,48895)
CheckMemberSize(struct _xmlValidCtxt,doc,8,9,48896)
CheckOffset(struct _xmlValidCtxt,doc,56,9,48896)
CheckMemberSize(struct _xmlValidCtxt,valid,4,9,48897)
CheckOffset(struct _xmlValidCtxt,valid,64,9,48897)
CheckMemberSize(struct _xmlValidCtxt,vstate,8,9,48898)
CheckOffset(struct _xmlValidCtxt,vstate,72,9,48898)
CheckMemberSize(struct _xmlValidCtxt,vstateNr,4,9,48899)
CheckOffset(struct _xmlValidCtxt,vstateNr,80,9,48899)
CheckMemberSize(struct _xmlValidCtxt,vstateMax,4,9,48900)
CheckOffset(struct _xmlValidCtxt,vstateMax,84,9,48900)
CheckMemberSize(struct _xmlValidCtxt,vstateTab,8,9,48901)
CheckOffset(struct _xmlValidCtxt,vstateTab,88,9,48901)
CheckMemberSize(struct _xmlValidCtxt,am,8,9,48902)
CheckOffset(struct _xmlValidCtxt,am,96,9,48902)
CheckMemberSize(struct _xmlValidCtxt,state,8,9,48903)
CheckOffset(struct _xmlValidCtxt,state,104,9,48903)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _xmlValidCtxt,64, 14819, 6, , NULL, 0, NULL)
CheckMemberSize(struct _xmlValidCtxt,error,4,6,48889)
CheckOffset(struct _xmlValidCtxt,error,4,6,48889)
CheckMemberSize(struct _xmlValidCtxt,warning,4,6,48890)
CheckOffset(struct _xmlValidCtxt,warning,8,6,48890)
CheckMemberSize(struct _xmlValidCtxt,node,4,6,48891)
CheckOffset(struct _xmlValidCtxt,node,12,6,48891)
CheckMemberSize(struct _xmlValidCtxt,nodeNr,4,6,48892)
CheckOffset(struct _xmlValidCtxt,nodeNr,16,6,48892)
CheckMemberSize(struct _xmlValidCtxt,nodeMax,4,6,48893)
CheckOffset(struct _xmlValidCtxt,nodeMax,20,6,48893)
CheckMemberSize(struct _xmlValidCtxt,nodeTab,4,6,48894)
CheckOffset(struct _xmlValidCtxt,nodeTab,24,6,48894)
CheckMemberSize(struct _xmlValidCtxt,finishDtd,4,6,48895)
CheckOffset(struct _xmlValidCtxt,finishDtd,28,6,48895)
CheckMemberSize(struct _xmlValidCtxt,doc,4,6,48896)
CheckOffset(struct _xmlValidCtxt,doc,32,6,48896)
CheckMemberSize(struct _xmlValidCtxt,valid,4,6,48897)
CheckOffset(struct _xmlValidCtxt,valid,36,6,48897)
CheckMemberSize(struct _xmlValidCtxt,vstate,4,6,48898)
CheckOffset(struct _xmlValidCtxt,vstate,40,6,48898)
CheckMemberSize(struct _xmlValidCtxt,vstateNr,4,6,48899)
CheckOffset(struct _xmlValidCtxt,vstateNr,44,6,48899)
CheckMemberSize(struct _xmlValidCtxt,vstateMax,4,6,48900)
CheckOffset(struct _xmlValidCtxt,vstateMax,48,6,48900)
CheckMemberSize(struct _xmlValidCtxt,vstateTab,4,6,48901)
CheckOffset(struct _xmlValidCtxt,vstateTab,52,6,48901)
CheckMemberSize(struct _xmlValidCtxt,am,4,6,48902)
CheckOffset(struct _xmlValidCtxt,am,56,6,48902)
CheckMemberSize(struct _xmlValidCtxt,state,4,6,48903)
CheckOffset(struct _xmlValidCtxt,state,60,6,48903)
#elif defined __ia64__
CheckTypeSize(struct _xmlValidCtxt,112, 14819, 3, , NULL, 0, NULL)
CheckMemberSize(struct _xmlValidCtxt,error,8,3,48889)
CheckOffset(struct _xmlValidCtxt,error,8,3,48889)
CheckMemberSize(struct _xmlValidCtxt,warning,8,3,48890)
CheckOffset(struct _xmlValidCtxt,warning,16,3,48890)
CheckMemberSize(struct _xmlValidCtxt,node,8,3,48891)
CheckOffset(struct _xmlValidCtxt,node,24,3,48891)
CheckMemberSize(struct _xmlValidCtxt,nodeNr,4,3,48892)
CheckOffset(struct _xmlValidCtxt,nodeNr,32,3,48892)
CheckMemberSize(struct _xmlValidCtxt,nodeMax,4,3,48893)
CheckOffset(struct _xmlValidCtxt,nodeMax,36,3,48893)
CheckMemberSize(struct _xmlValidCtxt,nodeTab,8,3,48894)
CheckOffset(struct _xmlValidCtxt,nodeTab,40,3,48894)
CheckMemberSize(struct _xmlValidCtxt,finishDtd,4,3,48895)
CheckOffset(struct _xmlValidCtxt,finishDtd,48,3,48895)
CheckMemberSize(struct _xmlValidCtxt,doc,8,3,48896)
CheckOffset(struct _xmlValidCtxt,doc,56,3,48896)
CheckMemberSize(struct _xmlValidCtxt,valid,4,3,48897)
CheckOffset(struct _xmlValidCtxt,valid,64,3,48897)
CheckMemberSize(struct _xmlValidCtxt,vstate,8,3,48898)
CheckOffset(struct _xmlValidCtxt,vstate,72,3,48898)
CheckMemberSize(struct _xmlValidCtxt,vstateNr,4,3,48899)
CheckOffset(struct _xmlValidCtxt,vstateNr,80,3,48899)
CheckMemberSize(struct _xmlValidCtxt,vstateMax,4,3,48900)
CheckOffset(struct _xmlValidCtxt,vstateMax,84,3,48900)
CheckMemberSize(struct _xmlValidCtxt,vstateTab,8,3,48901)
CheckOffset(struct _xmlValidCtxt,vstateTab,88,3,48901)
CheckMemberSize(struct _xmlValidCtxt,am,8,3,48902)
CheckOffset(struct _xmlValidCtxt,am,96,3,48902)
CheckMemberSize(struct _xmlValidCtxt,state,8,3,48903)
CheckOffset(struct _xmlValidCtxt,state,104,3,48903)
#elif defined __i386__
CheckTypeSize(struct _xmlValidCtxt,64, 14819, 2, , NULL, 0, NULL)
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
#elif 1
CheckTypeSize(struct _xmlValidCtxt,0, 14819, 1, , NULL, 0, NULL)
Msg("Missing member data for _xmlValidCtxt on All\n");
CheckOffset(struct _xmlValidCtxt,userData,0,1,48888)
#endif

#if defined __s390x__
CheckTypeSize(xmlValidityErrorFunc,8, 14820, 12, 3.1, NULL, 14655, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlValidityErrorFunc,8, 14820, 11, 3.1, NULL, 14655, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlValidityErrorFunc,4, 14820, 10, 3.1, NULL, 14655, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlValidityErrorFunc,8, 14820, 9, 3.1, NULL, 14655, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlValidityErrorFunc,4, 14820, 6, 3.1, NULL, 14655, NULL)
#elif defined __ia64__
CheckTypeSize(xmlValidityErrorFunc,8, 14820, 3, 3.1, NULL, 14655, NULL)
#elif defined __i386__
CheckTypeSize(xmlValidityErrorFunc,4, 14820, 2, 3.1, NULL, 14655, NULL)
#else
Msg("Find size of xmlValidityErrorFunc (14820)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14655,NULL);\n",architecture,14820,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlValidityWarningFunc,8, 14821, 12, 3.1, NULL, 14655, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlValidityWarningFunc,8, 14821, 11, 3.1, NULL, 14655, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlValidityWarningFunc,4, 14821, 10, 3.1, NULL, 14655, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlValidityWarningFunc,8, 14821, 9, 3.1, NULL, 14655, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlValidityWarningFunc,4, 14821, 6, 3.1, NULL, 14655, NULL)
#elif defined __ia64__
CheckTypeSize(xmlValidityWarningFunc,8, 14821, 3, 3.1, NULL, 14655, NULL)
#elif defined __i386__
CheckTypeSize(xmlValidityWarningFunc,4, 14821, 2, 3.1, NULL, 14655, NULL)
#else
Msg("Find size of xmlValidityWarningFunc (14821)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14655,NULL);\n",architecture,14821,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlValidCtxt,112, 14825, 12, 3.1, NULL, 14819, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlValidCtxt,112, 14825, 11, 3.1, NULL, 14819, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlValidCtxt,64, 14825, 10, 3.1, NULL, 14819, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlValidCtxt,112, 14825, 9, 3.1, NULL, 14819, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlValidCtxt,64, 14825, 6, 3.1, NULL, 14819, NULL)
#elif defined __ia64__
CheckTypeSize(xmlValidCtxt,112, 14825, 3, 3.1, NULL, 14819, NULL)
#elif defined __i386__
CheckTypeSize(xmlValidCtxt,64, 14825, 2, 3.1, NULL, 14819, NULL)
#else
Msg("Find size of xmlValidCtxt (14825)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14819,NULL);\n",architecture,14825,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlParserInputState,4, 14827, 12, 3.1, NULL, 14826, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlParserInputState,4, 14827, 11, 3.1, NULL, 14826, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlParserInputState,4, 14827, 10, 3.1, NULL, 14826, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlParserInputState,4, 14827, 9, 3.1, NULL, 14826, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlParserInputState,4, 14827, 6, 3.1, NULL, 14826, NULL)
#elif defined __ia64__
CheckTypeSize(xmlParserInputState,4, 14827, 3, 3.1, NULL, 14826, NULL)
#elif defined __i386__
CheckTypeSize(xmlParserInputState,4, 14827, 2, 3.1, NULL, 14826, NULL)
#else
Msg("Find size of xmlParserInputState (14827)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14826,NULL);\n",architecture,14827,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlParserMode,4, 14829, 12, 3.1, NULL, 14828, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlParserMode,4, 14829, 11, 3.1, NULL, 14828, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlParserMode,4, 14829, 10, 3.1, NULL, 14828, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlParserMode,4, 14829, 9, 3.1, NULL, 14828, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlParserMode,4, 14829, 6, 3.1, NULL, 14828, NULL)
#elif defined __ia64__
CheckTypeSize(xmlParserMode,4, 14829, 3, 3.1, NULL, 14828, NULL)
#elif defined __i386__
CheckTypeSize(xmlParserMode,4, 14829, 2, 3.1, NULL, 14828, NULL)
#else
Msg("Find size of xmlParserMode (14829)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14828,NULL);\n",architecture,14829,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlParserCtxt,696, 14830, 12, 3.1, NULL, 14808, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlParserCtxt,696, 14830, 11, 3.1, NULL, 14808, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlParserCtxt,440, 14830, 10, 3.1, NULL, 14808, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlParserCtxt,696, 14830, 9, 3.1, NULL, 14808, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlParserCtxt,440, 14830, 6, 3.1, NULL, 14808, NULL)
#elif defined __ia64__
CheckTypeSize(xmlParserCtxt,696, 14830, 3, 3.1, NULL, 14808, NULL)
#elif defined __i386__
CheckTypeSize(xmlParserCtxt,440, 14830, 2, 3.1, NULL, 14808, NULL)
#else
Msg("Find size of xmlParserCtxt (14830)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14808,NULL);\n",architecture,14830,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlParserCtxtPtr,8, 14832, 12, 3.1, NULL, 14831, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlParserCtxtPtr,8, 14832, 11, 3.1, NULL, 14831, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlParserCtxtPtr,4, 14832, 10, 3.1, NULL, 14831, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlParserCtxtPtr,8, 14832, 9, 3.1, NULL, 14831, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlParserCtxtPtr,4, 14832, 6, 3.1, NULL, 14831, NULL)
#elif defined __ia64__
CheckTypeSize(xmlParserCtxtPtr,8, 14832, 3, 3.1, NULL, 14831, NULL)
#elif defined __i386__
CheckTypeSize(xmlParserCtxtPtr,4, 14832, 2, 3.1, NULL, 14831, NULL)
#else
Msg("Find size of xmlParserCtxtPtr (14832)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14831,NULL);\n",architecture,14832,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlInputMatchCallback,8, 14833, 12, 3.1, NULL, 14804, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlInputMatchCallback,8, 14833, 11, 3.1, NULL, 14804, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlInputMatchCallback,4, 14833, 10, 3.1, NULL, 14804, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlInputMatchCallback,8, 14833, 9, 3.1, NULL, 14804, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlInputMatchCallback,4, 14833, 6, 3.1, NULL, 14804, NULL)
#elif defined __ia64__
CheckTypeSize(xmlInputMatchCallback,8, 14833, 3, 3.1, NULL, 14804, NULL)
#elif defined __i386__
CheckTypeSize(xmlInputMatchCallback,4, 14833, 2, 3.1, NULL, 14804, NULL)
#else
Msg("Find size of xmlInputMatchCallback (14833)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14804,NULL);\n",architecture,14833,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlInputOpenCallback,8, 14834, 12, 3.1, NULL, 9002, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlInputOpenCallback,8, 14834, 11, 3.1, NULL, 9002, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlInputOpenCallback,4, 14834, 10, 3.1, NULL, 9002, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlInputOpenCallback,8, 14834, 9, 3.1, NULL, 9002, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlInputOpenCallback,4, 14834, 6, 3.1, NULL, 9002, NULL)
#elif defined __ia64__
CheckTypeSize(xmlInputOpenCallback,8, 14834, 3, 3.1, NULL, 9002, NULL)
#elif defined __i386__
CheckTypeSize(xmlInputOpenCallback,4, 14834, 2, 3.1, NULL, 9002, NULL)
#else
Msg("Find size of xmlInputOpenCallback (14834)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,9002, NULL);\n",architecture,14834,0);
#endif

#if defined __s390x__
/* S390X */
typedef int (*xmlOutputMatchCallback_db)(const char *);
CheckFunctionTypedef(xmlOutputMatchCallback,xmlOutputMatchCallback_db);
#elif defined __x86_64__
/* x86-64 */
typedef int (*xmlOutputMatchCallback_db)(const char *);
CheckFunctionTypedef(xmlOutputMatchCallback,xmlOutputMatchCallback_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef int (*xmlOutputMatchCallback_db)(const char *);
CheckFunctionTypedef(xmlOutputMatchCallback,xmlOutputMatchCallback_db);
#elif defined __powerpc64__
/* PPC64 */
typedef int (*xmlOutputMatchCallback_db)(const char *);
CheckFunctionTypedef(xmlOutputMatchCallback,xmlOutputMatchCallback_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef int (*xmlOutputMatchCallback_db)(const char *);
CheckFunctionTypedef(xmlOutputMatchCallback,xmlOutputMatchCallback_db);
#elif defined __ia64__
/* IA64 */
typedef int (*xmlOutputMatchCallback_db)(const char *);
CheckFunctionTypedef(xmlOutputMatchCallback,xmlOutputMatchCallback_db);
#elif defined __i386__
/* IA32 */
typedef int (*xmlOutputMatchCallback_db)(const char *);
CheckFunctionTypedef(xmlOutputMatchCallback,xmlOutputMatchCallback_db);
#endif

#if defined __s390x__
/* S390X */
typedef void * (*xmlOutputOpenCallback_db)(const char *);
CheckFunctionTypedef(xmlOutputOpenCallback,xmlOutputOpenCallback_db);
#elif defined __x86_64__
/* x86-64 */
typedef void * (*xmlOutputOpenCallback_db)(const char *);
CheckFunctionTypedef(xmlOutputOpenCallback,xmlOutputOpenCallback_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void * (*xmlOutputOpenCallback_db)(const char *);
CheckFunctionTypedef(xmlOutputOpenCallback,xmlOutputOpenCallback_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void * (*xmlOutputOpenCallback_db)(const char *);
CheckFunctionTypedef(xmlOutputOpenCallback,xmlOutputOpenCallback_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void * (*xmlOutputOpenCallback_db)(const char *);
CheckFunctionTypedef(xmlOutputOpenCallback,xmlOutputOpenCallback_db);
#elif defined __ia64__
/* IA64 */
typedef void * (*xmlOutputOpenCallback_db)(const char *);
CheckFunctionTypedef(xmlOutputOpenCallback,xmlOutputOpenCallback_db);
#elif defined __i386__
/* IA32 */
typedef void * (*xmlOutputOpenCallback_db)(const char *);
CheckFunctionTypedef(xmlOutputOpenCallback,xmlOutputOpenCallback_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*xmlValidityErrorFunc_db)(void *, const char *, ...);
CheckFunctionTypedef(xmlValidityErrorFunc,xmlValidityErrorFunc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*xmlValidityErrorFunc_db)(void *, const char *, ...);
CheckFunctionTypedef(xmlValidityErrorFunc,xmlValidityErrorFunc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*xmlValidityErrorFunc_db)(void *, const char *, ...);
CheckFunctionTypedef(xmlValidityErrorFunc,xmlValidityErrorFunc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*xmlValidityErrorFunc_db)(void *, const char *, ...);
CheckFunctionTypedef(xmlValidityErrorFunc,xmlValidityErrorFunc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*xmlValidityErrorFunc_db)(void *, const char *, ...);
CheckFunctionTypedef(xmlValidityErrorFunc,xmlValidityErrorFunc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*xmlValidityErrorFunc_db)(void *, const char *, ...);
CheckFunctionTypedef(xmlValidityErrorFunc,xmlValidityErrorFunc_db);
#elif defined __i386__
/* IA32 */
typedef void (*xmlValidityErrorFunc_db)(void *, const char *, ...);
CheckFunctionTypedef(xmlValidityErrorFunc,xmlValidityErrorFunc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*xmlValidityWarningFunc_db)(void *, const char *, ...);
CheckFunctionTypedef(xmlValidityWarningFunc,xmlValidityWarningFunc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*xmlValidityWarningFunc_db)(void *, const char *, ...);
CheckFunctionTypedef(xmlValidityWarningFunc,xmlValidityWarningFunc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*xmlValidityWarningFunc_db)(void *, const char *, ...);
CheckFunctionTypedef(xmlValidityWarningFunc,xmlValidityWarningFunc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*xmlValidityWarningFunc_db)(void *, const char *, ...);
CheckFunctionTypedef(xmlValidityWarningFunc,xmlValidityWarningFunc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*xmlValidityWarningFunc_db)(void *, const char *, ...);
CheckFunctionTypedef(xmlValidityWarningFunc,xmlValidityWarningFunc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*xmlValidityWarningFunc_db)(void *, const char *, ...);
CheckFunctionTypedef(xmlValidityWarningFunc,xmlValidityWarningFunc_db);
#elif defined __i386__
/* IA32 */
typedef void (*xmlValidityWarningFunc_db)(void *, const char *, ...);
CheckFunctionTypedef(xmlValidityWarningFunc,xmlValidityWarningFunc_db);
#endif

#if defined __s390x__
/* S390X */
typedef int (*xmlInputMatchCallback_db)(const char *);
CheckFunctionTypedef(xmlInputMatchCallback,xmlInputMatchCallback_db);
#elif defined __x86_64__
/* x86-64 */
typedef int (*xmlInputMatchCallback_db)(const char *);
CheckFunctionTypedef(xmlInputMatchCallback,xmlInputMatchCallback_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef int (*xmlInputMatchCallback_db)(const char *);
CheckFunctionTypedef(xmlInputMatchCallback,xmlInputMatchCallback_db);
#elif defined __powerpc64__
/* PPC64 */
typedef int (*xmlInputMatchCallback_db)(const char *);
CheckFunctionTypedef(xmlInputMatchCallback,xmlInputMatchCallback_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef int (*xmlInputMatchCallback_db)(const char *);
CheckFunctionTypedef(xmlInputMatchCallback,xmlInputMatchCallback_db);
#elif defined __ia64__
/* IA64 */
typedef int (*xmlInputMatchCallback_db)(const char *);
CheckFunctionTypedef(xmlInputMatchCallback,xmlInputMatchCallback_db);
#elif defined __i386__
/* IA32 */
typedef int (*xmlInputMatchCallback_db)(const char *);
CheckFunctionTypedef(xmlInputMatchCallback,xmlInputMatchCallback_db);
#elif defined __s390x__
/* S390X */
typedef void * (*xmlInputOpenCallback_db)(const char *);
CheckFunctionTypedef(xmlInputOpenCallback,xmlInputOpenCallback_db);
#elif defined __x86_64__
/* x86-64 */
typedef void * (*xmlInputOpenCallback_db)(const char *);
CheckFunctionTypedef(xmlInputOpenCallback,xmlInputOpenCallback_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void * (*xmlInputOpenCallback_db)(const char *);
CheckFunctionTypedef(xmlInputOpenCallback,xmlInputOpenCallback_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void * (*xmlInputOpenCallback_db)(const char *);
CheckFunctionTypedef(xmlInputOpenCallback,xmlInputOpenCallback_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void * (*xmlInputOpenCallback_db)(const char *);
CheckFunctionTypedef(xmlInputOpenCallback,xmlInputOpenCallback_db);
#elif defined __ia64__
/* IA64 */
typedef void * (*xmlInputOpenCallback_db)(const char *);
CheckFunctionTypedef(xmlInputOpenCallback,xmlInputOpenCallback_db);
#elif defined __i386__
/* IA32 */
typedef void * (*xmlInputOpenCallback_db)(const char *);
CheckFunctionTypedef(xmlInputOpenCallback,xmlInputOpenCallback_db);
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
