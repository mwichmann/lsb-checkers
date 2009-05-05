/*
 * Test of libxml2/libxml/tree.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include <libxml/xmlregexp.h>
#include <libxml/xmlIO.h>

struct _xmlDict {} ;
#include "libxml2/libxml/tree.h"



#ifdef TET_TEST
void libxml2_libxml_tree_h()
{
#else
int libxml2_libxml_tree_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in libxml2/libxml/tree.h\n");
#endif

printf("Checking data structures in libxml2/libxml/tree.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef BASE_BUFFER_SIZE
	CompareConstant(BASE_BUFFER_SIZE,4096,9360,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: BASE_BUFFER_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for XML_XML_NAMESPACE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XML_XML_ID */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef XML_LOCAL_NAMESPACE
	CompareConstant(XML_LOCAL_NAMESPACE,XML_NAMESPACE_DECL,9363,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: XML_LOCAL_NAMESPACE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for XML_GET_CONTENT(n) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XML_GET_LINE(n) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for xmlChildrenNode */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for xmlRootNode */
#endif

#if defined __s390x__
CheckTypeSize(struct _xmlBuffer,24, 14581, 12, , NULL, 0, NULL)
CheckMemberSize(struct _xmlBuffer,use,4,12,47756)
CheckOffset(struct _xmlBuffer,use,8,12,47756)
CheckMemberSize(struct _xmlBuffer,size,4,12,47757)
CheckOffset(struct _xmlBuffer,size,12,12,47757)
CheckMemberSize(struct _xmlBuffer,alloc,4,12,47761)
CheckOffset(struct _xmlBuffer,alloc,16,12,47761)
#elif defined __x86_64__
CheckTypeSize(struct _xmlBuffer,24, 14581, 11, , NULL, 0, NULL)
CheckMemberSize(struct _xmlBuffer,use,4,11,47756)
CheckOffset(struct _xmlBuffer,use,8,11,47756)
CheckMemberSize(struct _xmlBuffer,size,4,11,47757)
CheckOffset(struct _xmlBuffer,size,12,11,47757)
CheckMemberSize(struct _xmlBuffer,alloc,4,11,47761)
CheckOffset(struct _xmlBuffer,alloc,16,11,47761)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _xmlBuffer,16, 14581, 10, , NULL, 0, NULL)
CheckMemberSize(struct _xmlBuffer,use,4,10,47756)
CheckOffset(struct _xmlBuffer,use,4,10,47756)
CheckMemberSize(struct _xmlBuffer,size,4,10,47757)
CheckOffset(struct _xmlBuffer,size,8,10,47757)
CheckMemberSize(struct _xmlBuffer,alloc,4,10,47761)
CheckOffset(struct _xmlBuffer,alloc,12,10,47761)
#elif defined __powerpc64__
CheckTypeSize(struct _xmlBuffer,24, 14581, 9, , NULL, 0, NULL)
CheckMemberSize(struct _xmlBuffer,use,4,9,47756)
CheckOffset(struct _xmlBuffer,use,8,9,47756)
CheckMemberSize(struct _xmlBuffer,size,4,9,47757)
CheckOffset(struct _xmlBuffer,size,12,9,47757)
CheckMemberSize(struct _xmlBuffer,alloc,4,9,47761)
CheckOffset(struct _xmlBuffer,alloc,16,9,47761)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _xmlBuffer,16, 14581, 6, , NULL, 0, NULL)
CheckMemberSize(struct _xmlBuffer,use,4,6,47756)
CheckOffset(struct _xmlBuffer,use,4,6,47756)
CheckMemberSize(struct _xmlBuffer,size,4,6,47757)
CheckOffset(struct _xmlBuffer,size,8,6,47757)
CheckMemberSize(struct _xmlBuffer,alloc,4,6,47761)
CheckOffset(struct _xmlBuffer,alloc,12,6,47761)
#elif defined __ia64__
CheckTypeSize(struct _xmlBuffer,24, 14581, 3, , NULL, 0, NULL)
CheckMemberSize(struct _xmlBuffer,use,4,3,47756)
CheckOffset(struct _xmlBuffer,use,8,3,47756)
CheckMemberSize(struct _xmlBuffer,size,4,3,47757)
CheckOffset(struct _xmlBuffer,size,12,3,47757)
CheckMemberSize(struct _xmlBuffer,alloc,4,3,47761)
CheckOffset(struct _xmlBuffer,alloc,16,3,47761)
#elif defined __i386__
CheckTypeSize(struct _xmlBuffer,16, 14581, 2, , NULL, 0, NULL)
CheckMemberSize(struct _xmlBuffer,use,4,2,47756)
CheckOffset(struct _xmlBuffer,use,4,2,47756)
CheckMemberSize(struct _xmlBuffer,size,4,2,47757)
CheckOffset(struct _xmlBuffer,size,8,2,47757)
CheckMemberSize(struct _xmlBuffer,alloc,4,2,47761)
CheckOffset(struct _xmlBuffer,alloc,12,2,47761)
#elif 1
CheckTypeSize(struct _xmlBuffer,0, 14581, 1, , NULL, 0, NULL)
Msg("Missing member data for _xmlBuffer on All\n");
CheckOffset(struct _xmlBuffer,content,0,1,47755)
#endif

#if defined __s390x__
CheckTypeSize(xmlBufferAllocationScheme,4, 14583, 12, 3.1, NULL, 14582, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlBufferAllocationScheme,4, 14583, 11, 3.1, NULL, 14582, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlBufferAllocationScheme,4, 14583, 10, 3.1, NULL, 14582, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlBufferAllocationScheme,4, 14583, 9, 3.1, NULL, 14582, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlBufferAllocationScheme,4, 14583, 6, 3.1, NULL, 14582, NULL)
#elif defined __ia64__
CheckTypeSize(xmlBufferAllocationScheme,4, 14583, 3, 3.1, NULL, 14582, NULL)
#elif defined __i386__
CheckTypeSize(xmlBufferAllocationScheme,4, 14583, 2, 3.1, NULL, 14582, NULL)
#else
Msg("Find size of xmlBufferAllocationScheme (14583)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14582,NULL);\n",architecture,14583,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlBuffer,24, 14584, 12, 3.1, NULL, 14581, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlBuffer,24, 14584, 11, 3.1, NULL, 14581, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlBuffer,16, 14584, 10, 3.1, NULL, 14581, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlBuffer,24, 14584, 9, 3.1, NULL, 14581, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlBuffer,16, 14584, 6, 3.1, NULL, 14581, NULL)
#elif defined __ia64__
CheckTypeSize(xmlBuffer,24, 14584, 3, 3.1, NULL, 14581, NULL)
#elif defined __i386__
CheckTypeSize(xmlBuffer,16, 14584, 2, 3.1, NULL, 14581, NULL)
#else
Msg("Find size of xmlBuffer (14584)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14581,NULL);\n",architecture,14584,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlBufferPtr,8, 14586, 12, 3.1, NULL, 14585, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlBufferPtr,8, 14586, 11, 3.1, NULL, 14585, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlBufferPtr,4, 14586, 10, 3.1, NULL, 14585, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlBufferPtr,8, 14586, 9, 3.1, NULL, 14585, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlBufferPtr,4, 14586, 6, 3.1, NULL, 14585, NULL)
#elif defined __ia64__
CheckTypeSize(xmlBufferPtr,8, 14586, 3, 3.1, NULL, 14585, NULL)
#elif defined __i386__
CheckTypeSize(xmlBufferPtr,4, 14586, 2, 3.1, NULL, 14585, NULL)
#else
Msg("Find size of xmlBufferPtr (14586)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14585,NULL);\n",architecture,14586,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _xmlNode,120, 14588, 12, , NULL, 0, NULL)
CheckMemberSize(struct _xmlNode,type,4,12,47784)
CheckOffset(struct _xmlNode,type,8,12,47784)
CheckMemberSize(struct _xmlNode,name,8,12,47785)
CheckOffset(struct _xmlNode,name,16,12,47785)
CheckMemberSize(struct _xmlNode,children,8,12,47786)
CheckOffset(struct _xmlNode,children,24,12,47786)
CheckMemberSize(struct _xmlNode,last,8,12,47787)
CheckOffset(struct _xmlNode,last,32,12,47787)
CheckMemberSize(struct _xmlNode,parent,8,12,47788)
CheckOffset(struct _xmlNode,parent,40,12,47788)
CheckMemberSize(struct _xmlNode,next,8,12,47789)
CheckOffset(struct _xmlNode,next,48,12,47789)
CheckMemberSize(struct _xmlNode,prev,8,12,47790)
CheckOffset(struct _xmlNode,prev,56,12,47790)
CheckMemberSize(struct _xmlNode,doc,8,12,47834)
CheckOffset(struct _xmlNode,doc,64,12,47834)
CheckMemberSize(struct _xmlNode,ns,8,12,47835)
CheckOffset(struct _xmlNode,ns,72,12,47835)
CheckMemberSize(struct _xmlNode,content,8,12,47836)
CheckOffset(struct _xmlNode,content,80,12,47836)
CheckMemberSize(struct _xmlNode,properties,8,12,47859)
CheckOffset(struct _xmlNode,properties,88,12,47859)
CheckMemberSize(struct _xmlNode,nsDef,8,12,47860)
CheckOffset(struct _xmlNode,nsDef,96,12,47860)
CheckMemberSize(struct _xmlNode,psvi,8,12,47861)
CheckOffset(struct _xmlNode,psvi,104,12,47861)
CheckMemberSize(struct _xmlNode,line,2,12,47862)
CheckOffset(struct _xmlNode,line,112,12,47862)
CheckMemberSize(struct _xmlNode,extra,2,12,47863)
CheckOffset(struct _xmlNode,extra,114,12,47863)
#elif defined __x86_64__
CheckTypeSize(struct _xmlNode,120, 14588, 11, , NULL, 0, NULL)
CheckMemberSize(struct _xmlNode,type,4,11,47784)
CheckOffset(struct _xmlNode,type,8,11,47784)
CheckMemberSize(struct _xmlNode,name,8,11,47785)
CheckOffset(struct _xmlNode,name,16,11,47785)
CheckMemberSize(struct _xmlNode,children,8,11,47786)
CheckOffset(struct _xmlNode,children,24,11,47786)
CheckMemberSize(struct _xmlNode,last,8,11,47787)
CheckOffset(struct _xmlNode,last,32,11,47787)
CheckMemberSize(struct _xmlNode,parent,8,11,47788)
CheckOffset(struct _xmlNode,parent,40,11,47788)
CheckMemberSize(struct _xmlNode,next,8,11,47789)
CheckOffset(struct _xmlNode,next,48,11,47789)
CheckMemberSize(struct _xmlNode,prev,8,11,47790)
CheckOffset(struct _xmlNode,prev,56,11,47790)
CheckMemberSize(struct _xmlNode,doc,8,11,47834)
CheckOffset(struct _xmlNode,doc,64,11,47834)
CheckMemberSize(struct _xmlNode,ns,8,11,47835)
CheckOffset(struct _xmlNode,ns,72,11,47835)
CheckMemberSize(struct _xmlNode,content,8,11,47836)
CheckOffset(struct _xmlNode,content,80,11,47836)
CheckMemberSize(struct _xmlNode,properties,8,11,47859)
CheckOffset(struct _xmlNode,properties,88,11,47859)
CheckMemberSize(struct _xmlNode,nsDef,8,11,47860)
CheckOffset(struct _xmlNode,nsDef,96,11,47860)
CheckMemberSize(struct _xmlNode,psvi,8,11,47861)
CheckOffset(struct _xmlNode,psvi,104,11,47861)
CheckMemberSize(struct _xmlNode,line,2,11,47862)
CheckOffset(struct _xmlNode,line,112,11,47862)
CheckMemberSize(struct _xmlNode,extra,2,11,47863)
CheckOffset(struct _xmlNode,extra,114,11,47863)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _xmlNode,60, 14588, 10, , NULL, 0, NULL)
CheckMemberSize(struct _xmlNode,type,4,10,47784)
CheckOffset(struct _xmlNode,type,4,10,47784)
CheckMemberSize(struct _xmlNode,name,4,10,47785)
CheckOffset(struct _xmlNode,name,8,10,47785)
CheckMemberSize(struct _xmlNode,children,4,10,47786)
CheckOffset(struct _xmlNode,children,12,10,47786)
CheckMemberSize(struct _xmlNode,last,4,10,47787)
CheckOffset(struct _xmlNode,last,16,10,47787)
CheckMemberSize(struct _xmlNode,parent,4,10,47788)
CheckOffset(struct _xmlNode,parent,20,10,47788)
CheckMemberSize(struct _xmlNode,next,4,10,47789)
CheckOffset(struct _xmlNode,next,24,10,47789)
CheckMemberSize(struct _xmlNode,prev,4,10,47790)
CheckOffset(struct _xmlNode,prev,28,10,47790)
CheckMemberSize(struct _xmlNode,doc,4,10,47834)
CheckOffset(struct _xmlNode,doc,32,10,47834)
CheckMemberSize(struct _xmlNode,ns,4,10,47835)
CheckOffset(struct _xmlNode,ns,36,10,47835)
CheckMemberSize(struct _xmlNode,content,4,10,47836)
CheckOffset(struct _xmlNode,content,40,10,47836)
CheckMemberSize(struct _xmlNode,properties,4,10,47859)
CheckOffset(struct _xmlNode,properties,44,10,47859)
CheckMemberSize(struct _xmlNode,nsDef,4,10,47860)
CheckOffset(struct _xmlNode,nsDef,48,10,47860)
CheckMemberSize(struct _xmlNode,psvi,4,10,47861)
CheckOffset(struct _xmlNode,psvi,52,10,47861)
CheckMemberSize(struct _xmlNode,line,2,10,47862)
CheckOffset(struct _xmlNode,line,56,10,47862)
CheckMemberSize(struct _xmlNode,extra,2,10,47863)
CheckOffset(struct _xmlNode,extra,58,10,47863)
#elif defined __powerpc64__
CheckTypeSize(struct _xmlNode,120, 14588, 9, , NULL, 0, NULL)
CheckMemberSize(struct _xmlNode,type,4,9,47784)
CheckOffset(struct _xmlNode,type,8,9,47784)
CheckMemberSize(struct _xmlNode,name,8,9,47785)
CheckOffset(struct _xmlNode,name,16,9,47785)
CheckMemberSize(struct _xmlNode,children,8,9,47786)
CheckOffset(struct _xmlNode,children,24,9,47786)
CheckMemberSize(struct _xmlNode,last,8,9,47787)
CheckOffset(struct _xmlNode,last,32,9,47787)
CheckMemberSize(struct _xmlNode,parent,8,9,47788)
CheckOffset(struct _xmlNode,parent,40,9,47788)
CheckMemberSize(struct _xmlNode,next,8,9,47789)
CheckOffset(struct _xmlNode,next,48,9,47789)
CheckMemberSize(struct _xmlNode,prev,8,9,47790)
CheckOffset(struct _xmlNode,prev,56,9,47790)
CheckMemberSize(struct _xmlNode,doc,8,9,47834)
CheckOffset(struct _xmlNode,doc,64,9,47834)
CheckMemberSize(struct _xmlNode,ns,8,9,47835)
CheckOffset(struct _xmlNode,ns,72,9,47835)
CheckMemberSize(struct _xmlNode,content,8,9,47836)
CheckOffset(struct _xmlNode,content,80,9,47836)
CheckMemberSize(struct _xmlNode,properties,8,9,47859)
CheckOffset(struct _xmlNode,properties,88,9,47859)
CheckMemberSize(struct _xmlNode,nsDef,8,9,47860)
CheckOffset(struct _xmlNode,nsDef,96,9,47860)
CheckMemberSize(struct _xmlNode,psvi,8,9,47861)
CheckOffset(struct _xmlNode,psvi,104,9,47861)
CheckMemberSize(struct _xmlNode,line,2,9,47862)
CheckOffset(struct _xmlNode,line,112,9,47862)
CheckMemberSize(struct _xmlNode,extra,2,9,47863)
CheckOffset(struct _xmlNode,extra,114,9,47863)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _xmlNode,60, 14588, 6, , NULL, 0, NULL)
CheckMemberSize(struct _xmlNode,type,4,6,47784)
CheckOffset(struct _xmlNode,type,4,6,47784)
CheckMemberSize(struct _xmlNode,name,4,6,47785)
CheckOffset(struct _xmlNode,name,8,6,47785)
CheckMemberSize(struct _xmlNode,children,4,6,47786)
CheckOffset(struct _xmlNode,children,12,6,47786)
CheckMemberSize(struct _xmlNode,last,4,6,47787)
CheckOffset(struct _xmlNode,last,16,6,47787)
CheckMemberSize(struct _xmlNode,parent,4,6,47788)
CheckOffset(struct _xmlNode,parent,20,6,47788)
CheckMemberSize(struct _xmlNode,next,4,6,47789)
CheckOffset(struct _xmlNode,next,24,6,47789)
CheckMemberSize(struct _xmlNode,prev,4,6,47790)
CheckOffset(struct _xmlNode,prev,28,6,47790)
CheckMemberSize(struct _xmlNode,doc,4,6,47834)
CheckOffset(struct _xmlNode,doc,32,6,47834)
CheckMemberSize(struct _xmlNode,ns,4,6,47835)
CheckOffset(struct _xmlNode,ns,36,6,47835)
CheckMemberSize(struct _xmlNode,content,4,6,47836)
CheckOffset(struct _xmlNode,content,40,6,47836)
CheckMemberSize(struct _xmlNode,properties,4,6,47859)
CheckOffset(struct _xmlNode,properties,44,6,47859)
CheckMemberSize(struct _xmlNode,nsDef,4,6,47860)
CheckOffset(struct _xmlNode,nsDef,48,6,47860)
CheckMemberSize(struct _xmlNode,psvi,4,6,47861)
CheckOffset(struct _xmlNode,psvi,52,6,47861)
CheckMemberSize(struct _xmlNode,line,2,6,47862)
CheckOffset(struct _xmlNode,line,56,6,47862)
CheckMemberSize(struct _xmlNode,extra,2,6,47863)
CheckOffset(struct _xmlNode,extra,58,6,47863)
#elif defined __ia64__
CheckTypeSize(struct _xmlNode,120, 14588, 3, , NULL, 0, NULL)
CheckMemberSize(struct _xmlNode,type,4,3,47784)
CheckOffset(struct _xmlNode,type,8,3,47784)
CheckMemberSize(struct _xmlNode,name,8,3,47785)
CheckOffset(struct _xmlNode,name,16,3,47785)
CheckMemberSize(struct _xmlNode,children,8,3,47786)
CheckOffset(struct _xmlNode,children,24,3,47786)
CheckMemberSize(struct _xmlNode,last,8,3,47787)
CheckOffset(struct _xmlNode,last,32,3,47787)
CheckMemberSize(struct _xmlNode,parent,8,3,47788)
CheckOffset(struct _xmlNode,parent,40,3,47788)
CheckMemberSize(struct _xmlNode,next,8,3,47789)
CheckOffset(struct _xmlNode,next,48,3,47789)
CheckMemberSize(struct _xmlNode,prev,8,3,47790)
CheckOffset(struct _xmlNode,prev,56,3,47790)
CheckMemberSize(struct _xmlNode,doc,8,3,47834)
CheckOffset(struct _xmlNode,doc,64,3,47834)
CheckMemberSize(struct _xmlNode,ns,8,3,47835)
CheckOffset(struct _xmlNode,ns,72,3,47835)
CheckMemberSize(struct _xmlNode,content,8,3,47836)
CheckOffset(struct _xmlNode,content,80,3,47836)
CheckMemberSize(struct _xmlNode,properties,8,3,47859)
CheckOffset(struct _xmlNode,properties,88,3,47859)
CheckMemberSize(struct _xmlNode,nsDef,8,3,47860)
CheckOffset(struct _xmlNode,nsDef,96,3,47860)
CheckMemberSize(struct _xmlNode,psvi,8,3,47861)
CheckOffset(struct _xmlNode,psvi,104,3,47861)
CheckMemberSize(struct _xmlNode,line,2,3,47862)
CheckOffset(struct _xmlNode,line,112,3,47862)
CheckMemberSize(struct _xmlNode,extra,2,3,47863)
CheckOffset(struct _xmlNode,extra,114,3,47863)
#elif defined __i386__
CheckTypeSize(struct _xmlNode,60, 14588, 2, , NULL, 0, NULL)
CheckMemberSize(struct _xmlNode,type,4,2,47784)
CheckOffset(struct _xmlNode,type,4,2,47784)
CheckMemberSize(struct _xmlNode,name,4,2,47785)
CheckOffset(struct _xmlNode,name,8,2,47785)
CheckMemberSize(struct _xmlNode,children,4,2,47786)
CheckOffset(struct _xmlNode,children,12,2,47786)
CheckMemberSize(struct _xmlNode,last,4,2,47787)
CheckOffset(struct _xmlNode,last,16,2,47787)
CheckMemberSize(struct _xmlNode,parent,4,2,47788)
CheckOffset(struct _xmlNode,parent,20,2,47788)
CheckMemberSize(struct _xmlNode,next,4,2,47789)
CheckOffset(struct _xmlNode,next,24,2,47789)
CheckMemberSize(struct _xmlNode,prev,4,2,47790)
CheckOffset(struct _xmlNode,prev,28,2,47790)
CheckMemberSize(struct _xmlNode,doc,4,2,47834)
CheckOffset(struct _xmlNode,doc,32,2,47834)
CheckMemberSize(struct _xmlNode,ns,4,2,47835)
CheckOffset(struct _xmlNode,ns,36,2,47835)
CheckMemberSize(struct _xmlNode,content,4,2,47836)
CheckOffset(struct _xmlNode,content,40,2,47836)
CheckMemberSize(struct _xmlNode,properties,4,2,47859)
CheckOffset(struct _xmlNode,properties,44,2,47859)
CheckMemberSize(struct _xmlNode,nsDef,4,2,47860)
CheckOffset(struct _xmlNode,nsDef,48,2,47860)
CheckMemberSize(struct _xmlNode,psvi,4,2,47861)
CheckOffset(struct _xmlNode,psvi,52,2,47861)
CheckMemberSize(struct _xmlNode,line,2,2,47862)
CheckOffset(struct _xmlNode,line,56,2,47862)
CheckMemberSize(struct _xmlNode,extra,2,2,47863)
CheckOffset(struct _xmlNode,extra,58,2,47863)
#elif 1
CheckTypeSize(struct _xmlNode,0, 14588, 1, , NULL, 0, NULL)
Msg("Missing member data for _xmlNode on All\n");
CheckOffset(struct _xmlNode,_private,0,1,47762)
#endif

#if defined __s390x__
CheckTypeSize(xmlElementType,4, 14590, 12, 3.1, NULL, 14589, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlElementType,4, 14590, 11, 3.1, NULL, 14589, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlElementType,4, 14590, 10, 3.1, NULL, 14589, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlElementType,4, 14590, 9, 3.1, NULL, 14589, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlElementType,4, 14590, 6, 3.1, NULL, 14589, NULL)
#elif defined __ia64__
CheckTypeSize(xmlElementType,4, 14590, 3, 3.1, NULL, 14589, NULL)
#elif defined __i386__
CheckTypeSize(xmlElementType,4, 14590, 2, 3.1, NULL, 14589, NULL)
#else
Msg("Find size of xmlElementType (14590)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14589,NULL);\n",architecture,14590,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _xmlDoc,168, 14592, 12, , NULL, 0, NULL)
CheckMemberSize(struct _xmlDoc,type,4,12,47792)
CheckOffset(struct _xmlDoc,type,8,12,47792)
CheckMemberSize(struct _xmlDoc,name,8,12,47793)
CheckOffset(struct _xmlDoc,name,16,12,47793)
CheckMemberSize(struct _xmlDoc,children,8,12,47794)
CheckOffset(struct _xmlDoc,children,24,12,47794)
CheckMemberSize(struct _xmlDoc,last,8,12,47795)
CheckOffset(struct _xmlDoc,last,32,12,47795)
CheckMemberSize(struct _xmlDoc,parent,8,12,47796)
CheckOffset(struct _xmlDoc,parent,40,12,47796)
CheckMemberSize(struct _xmlDoc,next,8,12,47797)
CheckOffset(struct _xmlDoc,next,48,12,47797)
CheckMemberSize(struct _xmlDoc,prev,8,12,47798)
CheckOffset(struct _xmlDoc,prev,56,12,47798)
CheckMemberSize(struct _xmlDoc,doc,8,12,47799)
CheckOffset(struct _xmlDoc,doc,64,12,47799)
CheckMemberSize(struct _xmlDoc,compression,4,12,47800)
CheckOffset(struct _xmlDoc,compression,72,12,47800)
CheckMemberSize(struct _xmlDoc,standalone,4,12,47801)
CheckOffset(struct _xmlDoc,standalone,76,12,47801)
CheckMemberSize(struct _xmlDoc,intSubset,8,12,47818)
CheckOffset(struct _xmlDoc,intSubset,80,12,47818)
CheckMemberSize(struct _xmlDoc,extSubset,8,12,47819)
CheckOffset(struct _xmlDoc,extSubset,88,12,47819)
CheckMemberSize(struct _xmlDoc,oldNs,8,12,47825)
CheckOffset(struct _xmlDoc,oldNs,96,12,47825)
CheckMemberSize(struct _xmlDoc,version,8,12,47826)
CheckOffset(struct _xmlDoc,version,104,12,47826)
CheckMemberSize(struct _xmlDoc,encoding,8,12,47827)
CheckOffset(struct _xmlDoc,encoding,112,12,47827)
CheckMemberSize(struct _xmlDoc,ids,8,12,47828)
CheckOffset(struct _xmlDoc,ids,120,12,47828)
CheckMemberSize(struct _xmlDoc,refs,8,12,47829)
CheckOffset(struct _xmlDoc,refs,128,12,47829)
CheckMemberSize(struct _xmlDoc,URL,8,12,47830)
CheckOffset(struct _xmlDoc,URL,136,12,47830)
CheckMemberSize(struct _xmlDoc,charset,4,12,47831)
CheckOffset(struct _xmlDoc,charset,144,12,47831)
CheckMemberSize(struct _xmlDoc,dict,8,12,47832)
CheckOffset(struct _xmlDoc,dict,152,12,47832)
CheckMemberSize(struct _xmlDoc,psvi,8,12,47833)
CheckOffset(struct _xmlDoc,psvi,160,12,47833)
#elif defined __x86_64__
CheckTypeSize(struct _xmlDoc,168, 14592, 11, , NULL, 0, NULL)
CheckMemberSize(struct _xmlDoc,type,4,11,47792)
CheckOffset(struct _xmlDoc,type,8,11,47792)
CheckMemberSize(struct _xmlDoc,name,8,11,47793)
CheckOffset(struct _xmlDoc,name,16,11,47793)
CheckMemberSize(struct _xmlDoc,children,8,11,47794)
CheckOffset(struct _xmlDoc,children,24,11,47794)
CheckMemberSize(struct _xmlDoc,last,8,11,47795)
CheckOffset(struct _xmlDoc,last,32,11,47795)
CheckMemberSize(struct _xmlDoc,parent,8,11,47796)
CheckOffset(struct _xmlDoc,parent,40,11,47796)
CheckMemberSize(struct _xmlDoc,next,8,11,47797)
CheckOffset(struct _xmlDoc,next,48,11,47797)
CheckMemberSize(struct _xmlDoc,prev,8,11,47798)
CheckOffset(struct _xmlDoc,prev,56,11,47798)
CheckMemberSize(struct _xmlDoc,doc,8,11,47799)
CheckOffset(struct _xmlDoc,doc,64,11,47799)
CheckMemberSize(struct _xmlDoc,compression,4,11,47800)
CheckOffset(struct _xmlDoc,compression,72,11,47800)
CheckMemberSize(struct _xmlDoc,standalone,4,11,47801)
CheckOffset(struct _xmlDoc,standalone,76,11,47801)
CheckMemberSize(struct _xmlDoc,intSubset,8,11,47818)
CheckOffset(struct _xmlDoc,intSubset,80,11,47818)
CheckMemberSize(struct _xmlDoc,extSubset,8,11,47819)
CheckOffset(struct _xmlDoc,extSubset,88,11,47819)
CheckMemberSize(struct _xmlDoc,oldNs,8,11,47825)
CheckOffset(struct _xmlDoc,oldNs,96,11,47825)
CheckMemberSize(struct _xmlDoc,version,8,11,47826)
CheckOffset(struct _xmlDoc,version,104,11,47826)
CheckMemberSize(struct _xmlDoc,encoding,8,11,47827)
CheckOffset(struct _xmlDoc,encoding,112,11,47827)
CheckMemberSize(struct _xmlDoc,ids,8,11,47828)
CheckOffset(struct _xmlDoc,ids,120,11,47828)
CheckMemberSize(struct _xmlDoc,refs,8,11,47829)
CheckOffset(struct _xmlDoc,refs,128,11,47829)
CheckMemberSize(struct _xmlDoc,URL,8,11,47830)
CheckOffset(struct _xmlDoc,URL,136,11,47830)
CheckMemberSize(struct _xmlDoc,charset,4,11,47831)
CheckOffset(struct _xmlDoc,charset,144,11,47831)
CheckMemberSize(struct _xmlDoc,dict,8,11,47832)
CheckOffset(struct _xmlDoc,dict,152,11,47832)
CheckMemberSize(struct _xmlDoc,psvi,8,11,47833)
CheckOffset(struct _xmlDoc,psvi,160,11,47833)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _xmlDoc,88, 14592, 10, , NULL, 0, NULL)
CheckMemberSize(struct _xmlDoc,type,4,10,47792)
CheckOffset(struct _xmlDoc,type,4,10,47792)
CheckMemberSize(struct _xmlDoc,name,4,10,47793)
CheckOffset(struct _xmlDoc,name,8,10,47793)
CheckMemberSize(struct _xmlDoc,children,4,10,47794)
CheckOffset(struct _xmlDoc,children,12,10,47794)
CheckMemberSize(struct _xmlDoc,last,4,10,47795)
CheckOffset(struct _xmlDoc,last,16,10,47795)
CheckMemberSize(struct _xmlDoc,parent,4,10,47796)
CheckOffset(struct _xmlDoc,parent,20,10,47796)
CheckMemberSize(struct _xmlDoc,next,4,10,47797)
CheckOffset(struct _xmlDoc,next,24,10,47797)
CheckMemberSize(struct _xmlDoc,prev,4,10,47798)
CheckOffset(struct _xmlDoc,prev,28,10,47798)
CheckMemberSize(struct _xmlDoc,doc,4,10,47799)
CheckOffset(struct _xmlDoc,doc,32,10,47799)
CheckMemberSize(struct _xmlDoc,compression,4,10,47800)
CheckOffset(struct _xmlDoc,compression,36,10,47800)
CheckMemberSize(struct _xmlDoc,standalone,4,10,47801)
CheckOffset(struct _xmlDoc,standalone,40,10,47801)
CheckMemberSize(struct _xmlDoc,intSubset,4,10,47818)
CheckOffset(struct _xmlDoc,intSubset,44,10,47818)
CheckMemberSize(struct _xmlDoc,extSubset,4,10,47819)
CheckOffset(struct _xmlDoc,extSubset,48,10,47819)
CheckMemberSize(struct _xmlDoc,oldNs,4,10,47825)
CheckOffset(struct _xmlDoc,oldNs,52,10,47825)
CheckMemberSize(struct _xmlDoc,version,4,10,47826)
CheckOffset(struct _xmlDoc,version,56,10,47826)
CheckMemberSize(struct _xmlDoc,encoding,4,10,47827)
CheckOffset(struct _xmlDoc,encoding,60,10,47827)
CheckMemberSize(struct _xmlDoc,ids,4,10,47828)
CheckOffset(struct _xmlDoc,ids,64,10,47828)
CheckMemberSize(struct _xmlDoc,refs,4,10,47829)
CheckOffset(struct _xmlDoc,refs,68,10,47829)
CheckMemberSize(struct _xmlDoc,URL,4,10,47830)
CheckOffset(struct _xmlDoc,URL,72,10,47830)
CheckMemberSize(struct _xmlDoc,charset,4,10,47831)
CheckOffset(struct _xmlDoc,charset,76,10,47831)
CheckMemberSize(struct _xmlDoc,dict,4,10,47832)
CheckOffset(struct _xmlDoc,dict,80,10,47832)
CheckMemberSize(struct _xmlDoc,psvi,4,10,47833)
CheckOffset(struct _xmlDoc,psvi,84,10,47833)
#elif defined __powerpc64__
CheckTypeSize(struct _xmlDoc,168, 14592, 9, , NULL, 0, NULL)
CheckMemberSize(struct _xmlDoc,type,4,9,47792)
CheckOffset(struct _xmlDoc,type,8,9,47792)
CheckMemberSize(struct _xmlDoc,name,8,9,47793)
CheckOffset(struct _xmlDoc,name,16,9,47793)
CheckMemberSize(struct _xmlDoc,children,8,9,47794)
CheckOffset(struct _xmlDoc,children,24,9,47794)
CheckMemberSize(struct _xmlDoc,last,8,9,47795)
CheckOffset(struct _xmlDoc,last,32,9,47795)
CheckMemberSize(struct _xmlDoc,parent,8,9,47796)
CheckOffset(struct _xmlDoc,parent,40,9,47796)
CheckMemberSize(struct _xmlDoc,next,8,9,47797)
CheckOffset(struct _xmlDoc,next,48,9,47797)
CheckMemberSize(struct _xmlDoc,prev,8,9,47798)
CheckOffset(struct _xmlDoc,prev,56,9,47798)
CheckMemberSize(struct _xmlDoc,doc,8,9,47799)
CheckOffset(struct _xmlDoc,doc,64,9,47799)
CheckMemberSize(struct _xmlDoc,compression,4,9,47800)
CheckOffset(struct _xmlDoc,compression,72,9,47800)
CheckMemberSize(struct _xmlDoc,standalone,4,9,47801)
CheckOffset(struct _xmlDoc,standalone,76,9,47801)
CheckMemberSize(struct _xmlDoc,intSubset,8,9,47818)
CheckOffset(struct _xmlDoc,intSubset,80,9,47818)
CheckMemberSize(struct _xmlDoc,extSubset,8,9,47819)
CheckOffset(struct _xmlDoc,extSubset,88,9,47819)
CheckMemberSize(struct _xmlDoc,oldNs,8,9,47825)
CheckOffset(struct _xmlDoc,oldNs,96,9,47825)
CheckMemberSize(struct _xmlDoc,version,8,9,47826)
CheckOffset(struct _xmlDoc,version,104,9,47826)
CheckMemberSize(struct _xmlDoc,encoding,8,9,47827)
CheckOffset(struct _xmlDoc,encoding,112,9,47827)
CheckMemberSize(struct _xmlDoc,ids,8,9,47828)
CheckOffset(struct _xmlDoc,ids,120,9,47828)
CheckMemberSize(struct _xmlDoc,refs,8,9,47829)
CheckOffset(struct _xmlDoc,refs,128,9,47829)
CheckMemberSize(struct _xmlDoc,URL,8,9,47830)
CheckOffset(struct _xmlDoc,URL,136,9,47830)
CheckMemberSize(struct _xmlDoc,charset,4,9,47831)
CheckOffset(struct _xmlDoc,charset,144,9,47831)
CheckMemberSize(struct _xmlDoc,dict,8,9,47832)
CheckOffset(struct _xmlDoc,dict,152,9,47832)
CheckMemberSize(struct _xmlDoc,psvi,8,9,47833)
CheckOffset(struct _xmlDoc,psvi,160,9,47833)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _xmlDoc,88, 14592, 6, , NULL, 0, NULL)
CheckMemberSize(struct _xmlDoc,type,4,6,47792)
CheckOffset(struct _xmlDoc,type,4,6,47792)
CheckMemberSize(struct _xmlDoc,name,4,6,47793)
CheckOffset(struct _xmlDoc,name,8,6,47793)
CheckMemberSize(struct _xmlDoc,children,4,6,47794)
CheckOffset(struct _xmlDoc,children,12,6,47794)
CheckMemberSize(struct _xmlDoc,last,4,6,47795)
CheckOffset(struct _xmlDoc,last,16,6,47795)
CheckMemberSize(struct _xmlDoc,parent,4,6,47796)
CheckOffset(struct _xmlDoc,parent,20,6,47796)
CheckMemberSize(struct _xmlDoc,next,4,6,47797)
CheckOffset(struct _xmlDoc,next,24,6,47797)
CheckMemberSize(struct _xmlDoc,prev,4,6,47798)
CheckOffset(struct _xmlDoc,prev,28,6,47798)
CheckMemberSize(struct _xmlDoc,doc,4,6,47799)
CheckOffset(struct _xmlDoc,doc,32,6,47799)
CheckMemberSize(struct _xmlDoc,compression,4,6,47800)
CheckOffset(struct _xmlDoc,compression,36,6,47800)
CheckMemberSize(struct _xmlDoc,standalone,4,6,47801)
CheckOffset(struct _xmlDoc,standalone,40,6,47801)
CheckMemberSize(struct _xmlDoc,intSubset,4,6,47818)
CheckOffset(struct _xmlDoc,intSubset,44,6,47818)
CheckMemberSize(struct _xmlDoc,extSubset,4,6,47819)
CheckOffset(struct _xmlDoc,extSubset,48,6,47819)
CheckMemberSize(struct _xmlDoc,oldNs,4,6,47825)
CheckOffset(struct _xmlDoc,oldNs,52,6,47825)
CheckMemberSize(struct _xmlDoc,version,4,6,47826)
CheckOffset(struct _xmlDoc,version,56,6,47826)
CheckMemberSize(struct _xmlDoc,encoding,4,6,47827)
CheckOffset(struct _xmlDoc,encoding,60,6,47827)
CheckMemberSize(struct _xmlDoc,ids,4,6,47828)
CheckOffset(struct _xmlDoc,ids,64,6,47828)
CheckMemberSize(struct _xmlDoc,refs,4,6,47829)
CheckOffset(struct _xmlDoc,refs,68,6,47829)
CheckMemberSize(struct _xmlDoc,URL,4,6,47830)
CheckOffset(struct _xmlDoc,URL,72,6,47830)
CheckMemberSize(struct _xmlDoc,charset,4,6,47831)
CheckOffset(struct _xmlDoc,charset,76,6,47831)
CheckMemberSize(struct _xmlDoc,dict,4,6,47832)
CheckOffset(struct _xmlDoc,dict,80,6,47832)
CheckMemberSize(struct _xmlDoc,psvi,4,6,47833)
CheckOffset(struct _xmlDoc,psvi,84,6,47833)
#elif defined __ia64__
CheckTypeSize(struct _xmlDoc,168, 14592, 3, , NULL, 0, NULL)
CheckMemberSize(struct _xmlDoc,type,4,3,47792)
CheckOffset(struct _xmlDoc,type,8,3,47792)
CheckMemberSize(struct _xmlDoc,name,8,3,47793)
CheckOffset(struct _xmlDoc,name,16,3,47793)
CheckMemberSize(struct _xmlDoc,children,8,3,47794)
CheckOffset(struct _xmlDoc,children,24,3,47794)
CheckMemberSize(struct _xmlDoc,last,8,3,47795)
CheckOffset(struct _xmlDoc,last,32,3,47795)
CheckMemberSize(struct _xmlDoc,parent,8,3,47796)
CheckOffset(struct _xmlDoc,parent,40,3,47796)
CheckMemberSize(struct _xmlDoc,next,8,3,47797)
CheckOffset(struct _xmlDoc,next,48,3,47797)
CheckMemberSize(struct _xmlDoc,prev,8,3,47798)
CheckOffset(struct _xmlDoc,prev,56,3,47798)
CheckMemberSize(struct _xmlDoc,doc,8,3,47799)
CheckOffset(struct _xmlDoc,doc,64,3,47799)
CheckMemberSize(struct _xmlDoc,compression,4,3,47800)
CheckOffset(struct _xmlDoc,compression,72,3,47800)
CheckMemberSize(struct _xmlDoc,standalone,4,3,47801)
CheckOffset(struct _xmlDoc,standalone,76,3,47801)
CheckMemberSize(struct _xmlDoc,intSubset,8,3,47818)
CheckOffset(struct _xmlDoc,intSubset,80,3,47818)
CheckMemberSize(struct _xmlDoc,extSubset,8,3,47819)
CheckOffset(struct _xmlDoc,extSubset,88,3,47819)
CheckMemberSize(struct _xmlDoc,oldNs,8,3,47825)
CheckOffset(struct _xmlDoc,oldNs,96,3,47825)
CheckMemberSize(struct _xmlDoc,version,8,3,47826)
CheckOffset(struct _xmlDoc,version,104,3,47826)
CheckMemberSize(struct _xmlDoc,encoding,8,3,47827)
CheckOffset(struct _xmlDoc,encoding,112,3,47827)
CheckMemberSize(struct _xmlDoc,ids,8,3,47828)
CheckOffset(struct _xmlDoc,ids,120,3,47828)
CheckMemberSize(struct _xmlDoc,refs,8,3,47829)
CheckOffset(struct _xmlDoc,refs,128,3,47829)
CheckMemberSize(struct _xmlDoc,URL,8,3,47830)
CheckOffset(struct _xmlDoc,URL,136,3,47830)
CheckMemberSize(struct _xmlDoc,charset,4,3,47831)
CheckOffset(struct _xmlDoc,charset,144,3,47831)
CheckMemberSize(struct _xmlDoc,dict,8,3,47832)
CheckOffset(struct _xmlDoc,dict,152,3,47832)
CheckMemberSize(struct _xmlDoc,psvi,8,3,47833)
CheckOffset(struct _xmlDoc,psvi,160,3,47833)
#elif defined __i386__
CheckTypeSize(struct _xmlDoc,88, 14592, 2, , NULL, 0, NULL)
CheckMemberSize(struct _xmlDoc,type,4,2,47792)
CheckOffset(struct _xmlDoc,type,4,2,47792)
CheckMemberSize(struct _xmlDoc,name,4,2,47793)
CheckOffset(struct _xmlDoc,name,8,2,47793)
CheckMemberSize(struct _xmlDoc,children,4,2,47794)
CheckOffset(struct _xmlDoc,children,12,2,47794)
CheckMemberSize(struct _xmlDoc,last,4,2,47795)
CheckOffset(struct _xmlDoc,last,16,2,47795)
CheckMemberSize(struct _xmlDoc,parent,4,2,47796)
CheckOffset(struct _xmlDoc,parent,20,2,47796)
CheckMemberSize(struct _xmlDoc,next,4,2,47797)
CheckOffset(struct _xmlDoc,next,24,2,47797)
CheckMemberSize(struct _xmlDoc,prev,4,2,47798)
CheckOffset(struct _xmlDoc,prev,28,2,47798)
CheckMemberSize(struct _xmlDoc,doc,4,2,47799)
CheckOffset(struct _xmlDoc,doc,32,2,47799)
CheckMemberSize(struct _xmlDoc,compression,4,2,47800)
CheckOffset(struct _xmlDoc,compression,36,2,47800)
CheckMemberSize(struct _xmlDoc,standalone,4,2,47801)
CheckOffset(struct _xmlDoc,standalone,40,2,47801)
CheckMemberSize(struct _xmlDoc,intSubset,4,2,47818)
CheckOffset(struct _xmlDoc,intSubset,44,2,47818)
CheckMemberSize(struct _xmlDoc,extSubset,4,2,47819)
CheckOffset(struct _xmlDoc,extSubset,48,2,47819)
CheckMemberSize(struct _xmlDoc,oldNs,4,2,47825)
CheckOffset(struct _xmlDoc,oldNs,52,2,47825)
CheckMemberSize(struct _xmlDoc,version,4,2,47826)
CheckOffset(struct _xmlDoc,version,56,2,47826)
CheckMemberSize(struct _xmlDoc,encoding,4,2,47827)
CheckOffset(struct _xmlDoc,encoding,60,2,47827)
CheckMemberSize(struct _xmlDoc,ids,4,2,47828)
CheckOffset(struct _xmlDoc,ids,64,2,47828)
CheckMemberSize(struct _xmlDoc,refs,4,2,47829)
CheckOffset(struct _xmlDoc,refs,68,2,47829)
CheckMemberSize(struct _xmlDoc,URL,4,2,47830)
CheckOffset(struct _xmlDoc,URL,72,2,47830)
CheckMemberSize(struct _xmlDoc,charset,4,2,47831)
CheckOffset(struct _xmlDoc,charset,76,2,47831)
CheckMemberSize(struct _xmlDoc,dict,4,2,47832)
CheckOffset(struct _xmlDoc,dict,80,2,47832)
CheckMemberSize(struct _xmlDoc,psvi,4,2,47833)
CheckOffset(struct _xmlDoc,psvi,84,2,47833)
#elif 1
CheckTypeSize(struct _xmlDoc,0, 14592, 1, , NULL, 0, NULL)
Msg("Missing member data for _xmlDoc on All\n");
CheckOffset(struct _xmlDoc,_private,0,1,47791)
#endif

#if defined __s390x__
CheckTypeSize(struct _xmlDtd,128, 14594, 12, , NULL, 0, NULL)
CheckMemberSize(struct _xmlDtd,type,4,12,47803)
CheckOffset(struct _xmlDtd,type,8,12,47803)
CheckMemberSize(struct _xmlDtd,name,8,12,47804)
CheckOffset(struct _xmlDtd,name,16,12,47804)
CheckMemberSize(struct _xmlDtd,children,8,12,47805)
CheckOffset(struct _xmlDtd,children,24,12,47805)
CheckMemberSize(struct _xmlDtd,last,8,12,47806)
CheckOffset(struct _xmlDtd,last,32,12,47806)
CheckMemberSize(struct _xmlDtd,parent,8,12,47807)
CheckOffset(struct _xmlDtd,parent,40,12,47807)
CheckMemberSize(struct _xmlDtd,next,8,12,47808)
CheckOffset(struct _xmlDtd,next,48,12,47808)
CheckMemberSize(struct _xmlDtd,prev,8,12,47809)
CheckOffset(struct _xmlDtd,prev,56,12,47809)
CheckMemberSize(struct _xmlDtd,doc,8,12,47810)
CheckOffset(struct _xmlDtd,doc,64,12,47810)
CheckMemberSize(struct _xmlDtd,notations,8,12,47811)
CheckOffset(struct _xmlDtd,notations,72,12,47811)
CheckMemberSize(struct _xmlDtd,elements,8,12,47812)
CheckOffset(struct _xmlDtd,elements,80,12,47812)
CheckMemberSize(struct _xmlDtd,attributes,8,12,47813)
CheckOffset(struct _xmlDtd,attributes,88,12,47813)
CheckMemberSize(struct _xmlDtd,entities,8,12,47814)
CheckOffset(struct _xmlDtd,entities,96,12,47814)
CheckMemberSize(struct _xmlDtd,ExternalID,8,12,47815)
CheckOffset(struct _xmlDtd,ExternalID,104,12,47815)
CheckMemberSize(struct _xmlDtd,SystemID,8,12,47816)
CheckOffset(struct _xmlDtd,SystemID,112,12,47816)
CheckMemberSize(struct _xmlDtd,pentities,8,12,47817)
CheckOffset(struct _xmlDtd,pentities,120,12,47817)
#elif defined __x86_64__
CheckTypeSize(struct _xmlDtd,128, 14594, 11, , NULL, 0, NULL)
CheckMemberSize(struct _xmlDtd,type,4,11,47803)
CheckOffset(struct _xmlDtd,type,8,11,47803)
CheckMemberSize(struct _xmlDtd,name,8,11,47804)
CheckOffset(struct _xmlDtd,name,16,11,47804)
CheckMemberSize(struct _xmlDtd,children,8,11,47805)
CheckOffset(struct _xmlDtd,children,24,11,47805)
CheckMemberSize(struct _xmlDtd,last,8,11,47806)
CheckOffset(struct _xmlDtd,last,32,11,47806)
CheckMemberSize(struct _xmlDtd,parent,8,11,47807)
CheckOffset(struct _xmlDtd,parent,40,11,47807)
CheckMemberSize(struct _xmlDtd,next,8,11,47808)
CheckOffset(struct _xmlDtd,next,48,11,47808)
CheckMemberSize(struct _xmlDtd,prev,8,11,47809)
CheckOffset(struct _xmlDtd,prev,56,11,47809)
CheckMemberSize(struct _xmlDtd,doc,8,11,47810)
CheckOffset(struct _xmlDtd,doc,64,11,47810)
CheckMemberSize(struct _xmlDtd,notations,8,11,47811)
CheckOffset(struct _xmlDtd,notations,72,11,47811)
CheckMemberSize(struct _xmlDtd,elements,8,11,47812)
CheckOffset(struct _xmlDtd,elements,80,11,47812)
CheckMemberSize(struct _xmlDtd,attributes,8,11,47813)
CheckOffset(struct _xmlDtd,attributes,88,11,47813)
CheckMemberSize(struct _xmlDtd,entities,8,11,47814)
CheckOffset(struct _xmlDtd,entities,96,11,47814)
CheckMemberSize(struct _xmlDtd,ExternalID,8,11,47815)
CheckOffset(struct _xmlDtd,ExternalID,104,11,47815)
CheckMemberSize(struct _xmlDtd,SystemID,8,11,47816)
CheckOffset(struct _xmlDtd,SystemID,112,11,47816)
CheckMemberSize(struct _xmlDtd,pentities,8,11,47817)
CheckOffset(struct _xmlDtd,pentities,120,11,47817)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _xmlDtd,64, 14594, 10, , NULL, 0, NULL)
CheckMemberSize(struct _xmlDtd,type,4,10,47803)
CheckOffset(struct _xmlDtd,type,4,10,47803)
CheckMemberSize(struct _xmlDtd,name,4,10,47804)
CheckOffset(struct _xmlDtd,name,8,10,47804)
CheckMemberSize(struct _xmlDtd,children,4,10,47805)
CheckOffset(struct _xmlDtd,children,12,10,47805)
CheckMemberSize(struct _xmlDtd,last,4,10,47806)
CheckOffset(struct _xmlDtd,last,16,10,47806)
CheckMemberSize(struct _xmlDtd,parent,4,10,47807)
CheckOffset(struct _xmlDtd,parent,20,10,47807)
CheckMemberSize(struct _xmlDtd,next,4,10,47808)
CheckOffset(struct _xmlDtd,next,24,10,47808)
CheckMemberSize(struct _xmlDtd,prev,4,10,47809)
CheckOffset(struct _xmlDtd,prev,28,10,47809)
CheckMemberSize(struct _xmlDtd,doc,4,10,47810)
CheckOffset(struct _xmlDtd,doc,32,10,47810)
CheckMemberSize(struct _xmlDtd,notations,4,10,47811)
CheckOffset(struct _xmlDtd,notations,36,10,47811)
CheckMemberSize(struct _xmlDtd,elements,4,10,47812)
CheckOffset(struct _xmlDtd,elements,40,10,47812)
CheckMemberSize(struct _xmlDtd,attributes,4,10,47813)
CheckOffset(struct _xmlDtd,attributes,44,10,47813)
CheckMemberSize(struct _xmlDtd,entities,4,10,47814)
CheckOffset(struct _xmlDtd,entities,48,10,47814)
CheckMemberSize(struct _xmlDtd,ExternalID,4,10,47815)
CheckOffset(struct _xmlDtd,ExternalID,52,10,47815)
CheckMemberSize(struct _xmlDtd,SystemID,4,10,47816)
CheckOffset(struct _xmlDtd,SystemID,56,10,47816)
CheckMemberSize(struct _xmlDtd,pentities,4,10,47817)
CheckOffset(struct _xmlDtd,pentities,60,10,47817)
#elif defined __powerpc64__
CheckTypeSize(struct _xmlDtd,128, 14594, 9, , NULL, 0, NULL)
CheckMemberSize(struct _xmlDtd,type,4,9,47803)
CheckOffset(struct _xmlDtd,type,8,9,47803)
CheckMemberSize(struct _xmlDtd,name,8,9,47804)
CheckOffset(struct _xmlDtd,name,16,9,47804)
CheckMemberSize(struct _xmlDtd,children,8,9,47805)
CheckOffset(struct _xmlDtd,children,24,9,47805)
CheckMemberSize(struct _xmlDtd,last,8,9,47806)
CheckOffset(struct _xmlDtd,last,32,9,47806)
CheckMemberSize(struct _xmlDtd,parent,8,9,47807)
CheckOffset(struct _xmlDtd,parent,40,9,47807)
CheckMemberSize(struct _xmlDtd,next,8,9,47808)
CheckOffset(struct _xmlDtd,next,48,9,47808)
CheckMemberSize(struct _xmlDtd,prev,8,9,47809)
CheckOffset(struct _xmlDtd,prev,56,9,47809)
CheckMemberSize(struct _xmlDtd,doc,8,9,47810)
CheckOffset(struct _xmlDtd,doc,64,9,47810)
CheckMemberSize(struct _xmlDtd,notations,8,9,47811)
CheckOffset(struct _xmlDtd,notations,72,9,47811)
CheckMemberSize(struct _xmlDtd,elements,8,9,47812)
CheckOffset(struct _xmlDtd,elements,80,9,47812)
CheckMemberSize(struct _xmlDtd,attributes,8,9,47813)
CheckOffset(struct _xmlDtd,attributes,88,9,47813)
CheckMemberSize(struct _xmlDtd,entities,8,9,47814)
CheckOffset(struct _xmlDtd,entities,96,9,47814)
CheckMemberSize(struct _xmlDtd,ExternalID,8,9,47815)
CheckOffset(struct _xmlDtd,ExternalID,104,9,47815)
CheckMemberSize(struct _xmlDtd,SystemID,8,9,47816)
CheckOffset(struct _xmlDtd,SystemID,112,9,47816)
CheckMemberSize(struct _xmlDtd,pentities,8,9,47817)
CheckOffset(struct _xmlDtd,pentities,120,9,47817)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _xmlDtd,64, 14594, 6, , NULL, 0, NULL)
CheckMemberSize(struct _xmlDtd,type,4,6,47803)
CheckOffset(struct _xmlDtd,type,4,6,47803)
CheckMemberSize(struct _xmlDtd,name,4,6,47804)
CheckOffset(struct _xmlDtd,name,8,6,47804)
CheckMemberSize(struct _xmlDtd,children,4,6,47805)
CheckOffset(struct _xmlDtd,children,12,6,47805)
CheckMemberSize(struct _xmlDtd,last,4,6,47806)
CheckOffset(struct _xmlDtd,last,16,6,47806)
CheckMemberSize(struct _xmlDtd,parent,4,6,47807)
CheckOffset(struct _xmlDtd,parent,20,6,47807)
CheckMemberSize(struct _xmlDtd,next,4,6,47808)
CheckOffset(struct _xmlDtd,next,24,6,47808)
CheckMemberSize(struct _xmlDtd,prev,4,6,47809)
CheckOffset(struct _xmlDtd,prev,28,6,47809)
CheckMemberSize(struct _xmlDtd,doc,4,6,47810)
CheckOffset(struct _xmlDtd,doc,32,6,47810)
CheckMemberSize(struct _xmlDtd,notations,4,6,47811)
CheckOffset(struct _xmlDtd,notations,36,6,47811)
CheckMemberSize(struct _xmlDtd,elements,4,6,47812)
CheckOffset(struct _xmlDtd,elements,40,6,47812)
CheckMemberSize(struct _xmlDtd,attributes,4,6,47813)
CheckOffset(struct _xmlDtd,attributes,44,6,47813)
CheckMemberSize(struct _xmlDtd,entities,4,6,47814)
CheckOffset(struct _xmlDtd,entities,48,6,47814)
CheckMemberSize(struct _xmlDtd,ExternalID,4,6,47815)
CheckOffset(struct _xmlDtd,ExternalID,52,6,47815)
CheckMemberSize(struct _xmlDtd,SystemID,4,6,47816)
CheckOffset(struct _xmlDtd,SystemID,56,6,47816)
CheckMemberSize(struct _xmlDtd,pentities,4,6,47817)
CheckOffset(struct _xmlDtd,pentities,60,6,47817)
#elif defined __ia64__
CheckTypeSize(struct _xmlDtd,128, 14594, 3, , NULL, 0, NULL)
CheckMemberSize(struct _xmlDtd,type,4,3,47803)
CheckOffset(struct _xmlDtd,type,8,3,47803)
CheckMemberSize(struct _xmlDtd,name,8,3,47804)
CheckOffset(struct _xmlDtd,name,16,3,47804)
CheckMemberSize(struct _xmlDtd,children,8,3,47805)
CheckOffset(struct _xmlDtd,children,24,3,47805)
CheckMemberSize(struct _xmlDtd,last,8,3,47806)
CheckOffset(struct _xmlDtd,last,32,3,47806)
CheckMemberSize(struct _xmlDtd,parent,8,3,47807)
CheckOffset(struct _xmlDtd,parent,40,3,47807)
CheckMemberSize(struct _xmlDtd,next,8,3,47808)
CheckOffset(struct _xmlDtd,next,48,3,47808)
CheckMemberSize(struct _xmlDtd,prev,8,3,47809)
CheckOffset(struct _xmlDtd,prev,56,3,47809)
CheckMemberSize(struct _xmlDtd,doc,8,3,47810)
CheckOffset(struct _xmlDtd,doc,64,3,47810)
CheckMemberSize(struct _xmlDtd,notations,8,3,47811)
CheckOffset(struct _xmlDtd,notations,72,3,47811)
CheckMemberSize(struct _xmlDtd,elements,8,3,47812)
CheckOffset(struct _xmlDtd,elements,80,3,47812)
CheckMemberSize(struct _xmlDtd,attributes,8,3,47813)
CheckOffset(struct _xmlDtd,attributes,88,3,47813)
CheckMemberSize(struct _xmlDtd,entities,8,3,47814)
CheckOffset(struct _xmlDtd,entities,96,3,47814)
CheckMemberSize(struct _xmlDtd,ExternalID,8,3,47815)
CheckOffset(struct _xmlDtd,ExternalID,104,3,47815)
CheckMemberSize(struct _xmlDtd,SystemID,8,3,47816)
CheckOffset(struct _xmlDtd,SystemID,112,3,47816)
CheckMemberSize(struct _xmlDtd,pentities,8,3,47817)
CheckOffset(struct _xmlDtd,pentities,120,3,47817)
#elif defined __i386__
CheckTypeSize(struct _xmlDtd,64, 14594, 2, , NULL, 0, NULL)
CheckMemberSize(struct _xmlDtd,type,4,2,47803)
CheckOffset(struct _xmlDtd,type,4,2,47803)
CheckMemberSize(struct _xmlDtd,name,4,2,47804)
CheckOffset(struct _xmlDtd,name,8,2,47804)
CheckMemberSize(struct _xmlDtd,children,4,2,47805)
CheckOffset(struct _xmlDtd,children,12,2,47805)
CheckMemberSize(struct _xmlDtd,last,4,2,47806)
CheckOffset(struct _xmlDtd,last,16,2,47806)
CheckMemberSize(struct _xmlDtd,parent,4,2,47807)
CheckOffset(struct _xmlDtd,parent,20,2,47807)
CheckMemberSize(struct _xmlDtd,next,4,2,47808)
CheckOffset(struct _xmlDtd,next,24,2,47808)
CheckMemberSize(struct _xmlDtd,prev,4,2,47809)
CheckOffset(struct _xmlDtd,prev,28,2,47809)
CheckMemberSize(struct _xmlDtd,doc,4,2,47810)
CheckOffset(struct _xmlDtd,doc,32,2,47810)
CheckMemberSize(struct _xmlDtd,notations,4,2,47811)
CheckOffset(struct _xmlDtd,notations,36,2,47811)
CheckMemberSize(struct _xmlDtd,elements,4,2,47812)
CheckOffset(struct _xmlDtd,elements,40,2,47812)
CheckMemberSize(struct _xmlDtd,attributes,4,2,47813)
CheckOffset(struct _xmlDtd,attributes,44,2,47813)
CheckMemberSize(struct _xmlDtd,entities,4,2,47814)
CheckOffset(struct _xmlDtd,entities,48,2,47814)
CheckMemberSize(struct _xmlDtd,ExternalID,4,2,47815)
CheckOffset(struct _xmlDtd,ExternalID,52,2,47815)
CheckMemberSize(struct _xmlDtd,SystemID,4,2,47816)
CheckOffset(struct _xmlDtd,SystemID,56,2,47816)
CheckMemberSize(struct _xmlDtd,pentities,4,2,47817)
CheckOffset(struct _xmlDtd,pentities,60,2,47817)
#elif 1
CheckTypeSize(struct _xmlDtd,0, 14594, 1, , NULL, 0, NULL)
Msg("Missing member data for _xmlDtd on All\n");
CheckOffset(struct _xmlDtd,_private,0,1,47802)
#endif

#if defined __s390x__
CheckTypeSize(struct _xmlNs,40, 14596, 12, , NULL, 0, NULL)
CheckMemberSize(struct _xmlNs,type,4,12,47821)
CheckOffset(struct _xmlNs,type,8,12,47821)
CheckMemberSize(struct _xmlNs,href,8,12,47822)
CheckOffset(struct _xmlNs,href,16,12,47822)
CheckMemberSize(struct _xmlNs,prefix,8,12,47823)
CheckOffset(struct _xmlNs,prefix,24,12,47823)
CheckMemberSize(struct _xmlNs,_private,8,12,47824)
CheckOffset(struct _xmlNs,_private,32,12,47824)
#elif defined __x86_64__
CheckTypeSize(struct _xmlNs,40, 14596, 11, , NULL, 0, NULL)
CheckMemberSize(struct _xmlNs,type,4,11,47821)
CheckOffset(struct _xmlNs,type,8,11,47821)
CheckMemberSize(struct _xmlNs,href,8,11,47822)
CheckOffset(struct _xmlNs,href,16,11,47822)
CheckMemberSize(struct _xmlNs,prefix,8,11,47823)
CheckOffset(struct _xmlNs,prefix,24,11,47823)
CheckMemberSize(struct _xmlNs,_private,8,11,47824)
CheckOffset(struct _xmlNs,_private,32,11,47824)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _xmlNs,20, 14596, 10, , NULL, 0, NULL)
CheckMemberSize(struct _xmlNs,type,4,10,47821)
CheckOffset(struct _xmlNs,type,4,10,47821)
CheckMemberSize(struct _xmlNs,href,4,10,47822)
CheckOffset(struct _xmlNs,href,8,10,47822)
CheckMemberSize(struct _xmlNs,prefix,4,10,47823)
CheckOffset(struct _xmlNs,prefix,12,10,47823)
CheckMemberSize(struct _xmlNs,_private,4,10,47824)
CheckOffset(struct _xmlNs,_private,16,10,47824)
#elif defined __powerpc64__
CheckTypeSize(struct _xmlNs,40, 14596, 9, , NULL, 0, NULL)
CheckMemberSize(struct _xmlNs,type,4,9,47821)
CheckOffset(struct _xmlNs,type,8,9,47821)
CheckMemberSize(struct _xmlNs,href,8,9,47822)
CheckOffset(struct _xmlNs,href,16,9,47822)
CheckMemberSize(struct _xmlNs,prefix,8,9,47823)
CheckOffset(struct _xmlNs,prefix,24,9,47823)
CheckMemberSize(struct _xmlNs,_private,8,9,47824)
CheckOffset(struct _xmlNs,_private,32,9,47824)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _xmlNs,20, 14596, 6, , NULL, 0, NULL)
CheckMemberSize(struct _xmlNs,type,4,6,47821)
CheckOffset(struct _xmlNs,type,4,6,47821)
CheckMemberSize(struct _xmlNs,href,4,6,47822)
CheckOffset(struct _xmlNs,href,8,6,47822)
CheckMemberSize(struct _xmlNs,prefix,4,6,47823)
CheckOffset(struct _xmlNs,prefix,12,6,47823)
CheckMemberSize(struct _xmlNs,_private,4,6,47824)
CheckOffset(struct _xmlNs,_private,16,6,47824)
#elif defined __ia64__
CheckTypeSize(struct _xmlNs,40, 14596, 3, , NULL, 0, NULL)
CheckMemberSize(struct _xmlNs,type,4,3,47821)
CheckOffset(struct _xmlNs,type,8,3,47821)
CheckMemberSize(struct _xmlNs,href,8,3,47822)
CheckOffset(struct _xmlNs,href,16,3,47822)
CheckMemberSize(struct _xmlNs,prefix,8,3,47823)
CheckOffset(struct _xmlNs,prefix,24,3,47823)
CheckMemberSize(struct _xmlNs,_private,8,3,47824)
CheckOffset(struct _xmlNs,_private,32,3,47824)
#elif defined __i386__
CheckTypeSize(struct _xmlNs,20, 14596, 2, , NULL, 0, NULL)
CheckMemberSize(struct _xmlNs,type,4,2,47821)
CheckOffset(struct _xmlNs,type,4,2,47821)
CheckMemberSize(struct _xmlNs,href,4,2,47822)
CheckOffset(struct _xmlNs,href,8,2,47822)
CheckMemberSize(struct _xmlNs,prefix,4,2,47823)
CheckOffset(struct _xmlNs,prefix,12,2,47823)
CheckMemberSize(struct _xmlNs,_private,4,2,47824)
CheckOffset(struct _xmlNs,_private,16,2,47824)
#elif 1
CheckTypeSize(struct _xmlNs,0, 14596, 1, , NULL, 0, NULL)
Msg("Missing member data for _xmlNs on All\n");
CheckOffset(struct _xmlNs,next,0,1,47820)
#endif

#if defined __s390x__
CheckTypeSize(xmlNsType,4, 14598, 12, 3.1, NULL, 14590, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlNsType,4, 14598, 11, 3.1, NULL, 14590, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlNsType,4, 14598, 10, 3.1, NULL, 14590, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlNsType,4, 14598, 9, 3.1, NULL, 14590, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlNsType,4, 14598, 6, 3.1, NULL, 14590, NULL)
#elif defined __ia64__
CheckTypeSize(xmlNsType,4, 14598, 3, 3.1, NULL, 14590, NULL)
#elif defined __i386__
CheckTypeSize(xmlNsType,4, 14598, 2, 3.1, NULL, 14590, NULL)
#else
Msg("Find size of xmlNsType (14598)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14590,NULL);\n",architecture,14598,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlNs,40, 14601, 12, 3.1, NULL, 14596, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlNs,40, 14601, 11, 3.1, NULL, 14596, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlNs,20, 14601, 10, 3.1, NULL, 14596, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlNs,40, 14601, 9, 3.1, NULL, 14596, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlNs,20, 14601, 6, 3.1, NULL, 14596, NULL)
#elif defined __ia64__
CheckTypeSize(xmlNs,40, 14601, 3, 3.1, NULL, 14596, NULL)
#elif defined __i386__
CheckTypeSize(xmlNs,20, 14601, 2, 3.1, NULL, 14596, NULL)
#else
Msg("Find size of xmlNs (14601)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14596,NULL);\n",architecture,14601,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _xmlAttr,96, 14603, 12, , NULL, 0, NULL)
CheckMemberSize(struct _xmlAttr,type,4,12,47838)
CheckOffset(struct _xmlAttr,type,8,12,47838)
CheckMemberSize(struct _xmlAttr,name,8,12,47839)
CheckOffset(struct _xmlAttr,name,16,12,47839)
CheckMemberSize(struct _xmlAttr,children,8,12,47840)
CheckOffset(struct _xmlAttr,children,24,12,47840)
CheckMemberSize(struct _xmlAttr,last,8,12,47841)
CheckOffset(struct _xmlAttr,last,32,12,47841)
CheckMemberSize(struct _xmlAttr,parent,8,12,47842)
CheckOffset(struct _xmlAttr,parent,40,12,47842)
CheckMemberSize(struct _xmlAttr,next,8,12,47843)
CheckOffset(struct _xmlAttr,next,48,12,47843)
CheckMemberSize(struct _xmlAttr,prev,8,12,47844)
CheckOffset(struct _xmlAttr,prev,56,12,47844)
CheckMemberSize(struct _xmlAttr,doc,8,12,47845)
CheckOffset(struct _xmlAttr,doc,64,12,47845)
CheckMemberSize(struct _xmlAttr,ns,8,12,47846)
CheckOffset(struct _xmlAttr,ns,72,12,47846)
CheckMemberSize(struct _xmlAttr,atype,4,12,47857)
CheckOffset(struct _xmlAttr,atype,80,12,47857)
CheckMemberSize(struct _xmlAttr,psvi,8,12,47858)
CheckOffset(struct _xmlAttr,psvi,88,12,47858)
#elif defined __x86_64__
CheckTypeSize(struct _xmlAttr,96, 14603, 11, , NULL, 0, NULL)
CheckMemberSize(struct _xmlAttr,type,4,11,47838)
CheckOffset(struct _xmlAttr,type,8,11,47838)
CheckMemberSize(struct _xmlAttr,name,8,11,47839)
CheckOffset(struct _xmlAttr,name,16,11,47839)
CheckMemberSize(struct _xmlAttr,children,8,11,47840)
CheckOffset(struct _xmlAttr,children,24,11,47840)
CheckMemberSize(struct _xmlAttr,last,8,11,47841)
CheckOffset(struct _xmlAttr,last,32,11,47841)
CheckMemberSize(struct _xmlAttr,parent,8,11,47842)
CheckOffset(struct _xmlAttr,parent,40,11,47842)
CheckMemberSize(struct _xmlAttr,next,8,11,47843)
CheckOffset(struct _xmlAttr,next,48,11,47843)
CheckMemberSize(struct _xmlAttr,prev,8,11,47844)
CheckOffset(struct _xmlAttr,prev,56,11,47844)
CheckMemberSize(struct _xmlAttr,doc,8,11,47845)
CheckOffset(struct _xmlAttr,doc,64,11,47845)
CheckMemberSize(struct _xmlAttr,ns,8,11,47846)
CheckOffset(struct _xmlAttr,ns,72,11,47846)
CheckMemberSize(struct _xmlAttr,atype,4,11,47857)
CheckOffset(struct _xmlAttr,atype,80,11,47857)
CheckMemberSize(struct _xmlAttr,psvi,8,11,47858)
CheckOffset(struct _xmlAttr,psvi,88,11,47858)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _xmlAttr,48, 14603, 10, , NULL, 0, NULL)
CheckMemberSize(struct _xmlAttr,type,4,10,47838)
CheckOffset(struct _xmlAttr,type,4,10,47838)
CheckMemberSize(struct _xmlAttr,name,4,10,47839)
CheckOffset(struct _xmlAttr,name,8,10,47839)
CheckMemberSize(struct _xmlAttr,children,4,10,47840)
CheckOffset(struct _xmlAttr,children,12,10,47840)
CheckMemberSize(struct _xmlAttr,last,4,10,47841)
CheckOffset(struct _xmlAttr,last,16,10,47841)
CheckMemberSize(struct _xmlAttr,parent,4,10,47842)
CheckOffset(struct _xmlAttr,parent,20,10,47842)
CheckMemberSize(struct _xmlAttr,next,4,10,47843)
CheckOffset(struct _xmlAttr,next,24,10,47843)
CheckMemberSize(struct _xmlAttr,prev,4,10,47844)
CheckOffset(struct _xmlAttr,prev,28,10,47844)
CheckMemberSize(struct _xmlAttr,doc,4,10,47845)
CheckOffset(struct _xmlAttr,doc,32,10,47845)
CheckMemberSize(struct _xmlAttr,ns,4,10,47846)
CheckOffset(struct _xmlAttr,ns,36,10,47846)
CheckMemberSize(struct _xmlAttr,atype,4,10,47857)
CheckOffset(struct _xmlAttr,atype,40,10,47857)
CheckMemberSize(struct _xmlAttr,psvi,4,10,47858)
CheckOffset(struct _xmlAttr,psvi,44,10,47858)
#elif defined __powerpc64__
CheckTypeSize(struct _xmlAttr,96, 14603, 9, , NULL, 0, NULL)
CheckMemberSize(struct _xmlAttr,type,4,9,47838)
CheckOffset(struct _xmlAttr,type,8,9,47838)
CheckMemberSize(struct _xmlAttr,name,8,9,47839)
CheckOffset(struct _xmlAttr,name,16,9,47839)
CheckMemberSize(struct _xmlAttr,children,8,9,47840)
CheckOffset(struct _xmlAttr,children,24,9,47840)
CheckMemberSize(struct _xmlAttr,last,8,9,47841)
CheckOffset(struct _xmlAttr,last,32,9,47841)
CheckMemberSize(struct _xmlAttr,parent,8,9,47842)
CheckOffset(struct _xmlAttr,parent,40,9,47842)
CheckMemberSize(struct _xmlAttr,next,8,9,47843)
CheckOffset(struct _xmlAttr,next,48,9,47843)
CheckMemberSize(struct _xmlAttr,prev,8,9,47844)
CheckOffset(struct _xmlAttr,prev,56,9,47844)
CheckMemberSize(struct _xmlAttr,doc,8,9,47845)
CheckOffset(struct _xmlAttr,doc,64,9,47845)
CheckMemberSize(struct _xmlAttr,ns,8,9,47846)
CheckOffset(struct _xmlAttr,ns,72,9,47846)
CheckMemberSize(struct _xmlAttr,atype,4,9,47857)
CheckOffset(struct _xmlAttr,atype,80,9,47857)
CheckMemberSize(struct _xmlAttr,psvi,8,9,47858)
CheckOffset(struct _xmlAttr,psvi,88,9,47858)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _xmlAttr,48, 14603, 6, , NULL, 0, NULL)
CheckMemberSize(struct _xmlAttr,type,4,6,47838)
CheckOffset(struct _xmlAttr,type,4,6,47838)
CheckMemberSize(struct _xmlAttr,name,4,6,47839)
CheckOffset(struct _xmlAttr,name,8,6,47839)
CheckMemberSize(struct _xmlAttr,children,4,6,47840)
CheckOffset(struct _xmlAttr,children,12,6,47840)
CheckMemberSize(struct _xmlAttr,last,4,6,47841)
CheckOffset(struct _xmlAttr,last,16,6,47841)
CheckMemberSize(struct _xmlAttr,parent,4,6,47842)
CheckOffset(struct _xmlAttr,parent,20,6,47842)
CheckMemberSize(struct _xmlAttr,next,4,6,47843)
CheckOffset(struct _xmlAttr,next,24,6,47843)
CheckMemberSize(struct _xmlAttr,prev,4,6,47844)
CheckOffset(struct _xmlAttr,prev,28,6,47844)
CheckMemberSize(struct _xmlAttr,doc,4,6,47845)
CheckOffset(struct _xmlAttr,doc,32,6,47845)
CheckMemberSize(struct _xmlAttr,ns,4,6,47846)
CheckOffset(struct _xmlAttr,ns,36,6,47846)
CheckMemberSize(struct _xmlAttr,atype,4,6,47857)
CheckOffset(struct _xmlAttr,atype,40,6,47857)
CheckMemberSize(struct _xmlAttr,psvi,4,6,47858)
CheckOffset(struct _xmlAttr,psvi,44,6,47858)
#elif defined __ia64__
CheckTypeSize(struct _xmlAttr,96, 14603, 3, , NULL, 0, NULL)
CheckMemberSize(struct _xmlAttr,type,4,3,47838)
CheckOffset(struct _xmlAttr,type,8,3,47838)
CheckMemberSize(struct _xmlAttr,name,8,3,47839)
CheckOffset(struct _xmlAttr,name,16,3,47839)
CheckMemberSize(struct _xmlAttr,children,8,3,47840)
CheckOffset(struct _xmlAttr,children,24,3,47840)
CheckMemberSize(struct _xmlAttr,last,8,3,47841)
CheckOffset(struct _xmlAttr,last,32,3,47841)
CheckMemberSize(struct _xmlAttr,parent,8,3,47842)
CheckOffset(struct _xmlAttr,parent,40,3,47842)
CheckMemberSize(struct _xmlAttr,next,8,3,47843)
CheckOffset(struct _xmlAttr,next,48,3,47843)
CheckMemberSize(struct _xmlAttr,prev,8,3,47844)
CheckOffset(struct _xmlAttr,prev,56,3,47844)
CheckMemberSize(struct _xmlAttr,doc,8,3,47845)
CheckOffset(struct _xmlAttr,doc,64,3,47845)
CheckMemberSize(struct _xmlAttr,ns,8,3,47846)
CheckOffset(struct _xmlAttr,ns,72,3,47846)
CheckMemberSize(struct _xmlAttr,atype,4,3,47857)
CheckOffset(struct _xmlAttr,atype,80,3,47857)
CheckMemberSize(struct _xmlAttr,psvi,8,3,47858)
CheckOffset(struct _xmlAttr,psvi,88,3,47858)
#elif defined __i386__
CheckTypeSize(struct _xmlAttr,48, 14603, 2, , NULL, 0, NULL)
CheckMemberSize(struct _xmlAttr,type,4,2,47838)
CheckOffset(struct _xmlAttr,type,4,2,47838)
CheckMemberSize(struct _xmlAttr,name,4,2,47839)
CheckOffset(struct _xmlAttr,name,8,2,47839)
CheckMemberSize(struct _xmlAttr,children,4,2,47840)
CheckOffset(struct _xmlAttr,children,12,2,47840)
CheckMemberSize(struct _xmlAttr,last,4,2,47841)
CheckOffset(struct _xmlAttr,last,16,2,47841)
CheckMemberSize(struct _xmlAttr,parent,4,2,47842)
CheckOffset(struct _xmlAttr,parent,20,2,47842)
CheckMemberSize(struct _xmlAttr,next,4,2,47843)
CheckOffset(struct _xmlAttr,next,24,2,47843)
CheckMemberSize(struct _xmlAttr,prev,4,2,47844)
CheckOffset(struct _xmlAttr,prev,28,2,47844)
CheckMemberSize(struct _xmlAttr,doc,4,2,47845)
CheckOffset(struct _xmlAttr,doc,32,2,47845)
CheckMemberSize(struct _xmlAttr,ns,4,2,47846)
CheckOffset(struct _xmlAttr,ns,36,2,47846)
CheckMemberSize(struct _xmlAttr,atype,4,2,47857)
CheckOffset(struct _xmlAttr,atype,40,2,47857)
CheckMemberSize(struct _xmlAttr,psvi,4,2,47858)
CheckOffset(struct _xmlAttr,psvi,44,2,47858)
#elif 1
CheckTypeSize(struct _xmlAttr,0, 14603, 1, , NULL, 0, NULL)
Msg("Missing member data for _xmlAttr on All\n");
CheckOffset(struct _xmlAttr,_private,0,1,47837)
#endif

#if defined __s390x__
CheckTypeSize(xmlAttributeType,4, 14606, 12, 3.1, NULL, 14605, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlAttributeType,4, 14606, 11, 3.1, NULL, 14605, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlAttributeType,4, 14606, 10, 3.1, NULL, 14605, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlAttributeType,4, 14606, 9, 3.1, NULL, 14605, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlAttributeType,4, 14606, 6, 3.1, NULL, 14605, NULL)
#elif defined __ia64__
CheckTypeSize(xmlAttributeType,4, 14606, 3, 3.1, NULL, 14605, NULL)
#elif defined __i386__
CheckTypeSize(xmlAttributeType,4, 14606, 2, 3.1, NULL, 14605, NULL)
#else
Msg("Find size of xmlAttributeType (14606)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14605,NULL);\n",architecture,14606,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlNode,120, 14607, 12, 3.1, NULL, 14588, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlNode,120, 14607, 11, 3.1, NULL, 14588, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlNode,60, 14607, 10, 3.1, NULL, 14588, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlNode,120, 14607, 9, 3.1, NULL, 14588, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlNode,60, 14607, 6, 3.1, NULL, 14588, NULL)
#elif defined __ia64__
CheckTypeSize(xmlNode,120, 14607, 3, 3.1, NULL, 14588, NULL)
#elif defined __i386__
CheckTypeSize(xmlNode,60, 14607, 2, 3.1, NULL, 14588, NULL)
#else
Msg("Find size of xmlNode (14607)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14588,NULL);\n",architecture,14607,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlNodePtr,8, 14609, 12, 3.1, NULL, 14608, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlNodePtr,8, 14609, 11, 3.1, NULL, 14608, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlNodePtr,4, 14609, 10, 3.1, NULL, 14608, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlNodePtr,8, 14609, 9, 3.1, NULL, 14608, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlNodePtr,4, 14609, 6, 3.1, NULL, 14608, NULL)
#elif defined __ia64__
CheckTypeSize(xmlNodePtr,8, 14609, 3, 3.1, NULL, 14608, NULL)
#elif defined __i386__
CheckTypeSize(xmlNodePtr,4, 14609, 2, 3.1, NULL, 14608, NULL)
#else
Msg("Find size of xmlNodePtr (14609)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14608,NULL);\n",architecture,14609,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlDoc,168, 14610, 12, 3.1, NULL, 14592, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlDoc,168, 14610, 11, 3.1, NULL, 14592, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlDoc,88, 14610, 10, 3.1, NULL, 14592, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlDoc,168, 14610, 9, 3.1, NULL, 14592, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlDoc,88, 14610, 6, 3.1, NULL, 14592, NULL)
#elif defined __ia64__
CheckTypeSize(xmlDoc,168, 14610, 3, 3.1, NULL, 14592, NULL)
#elif defined __i386__
CheckTypeSize(xmlDoc,88, 14610, 2, 3.1, NULL, 14592, NULL)
#else
Msg("Find size of xmlDoc (14610)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14592,NULL);\n",architecture,14610,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlDocPtr,8, 14612, 12, 3.1, NULL, 14611, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlDocPtr,8, 14612, 11, 3.1, NULL, 14611, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlDocPtr,4, 14612, 10, 3.1, NULL, 14611, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlDocPtr,8, 14612, 9, 3.1, NULL, 14611, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlDocPtr,4, 14612, 6, 3.1, NULL, 14611, NULL)
#elif defined __ia64__
CheckTypeSize(xmlDocPtr,8, 14612, 3, 3.1, NULL, 14611, NULL)
#elif defined __i386__
CheckTypeSize(xmlDocPtr,4, 14612, 2, 3.1, NULL, 14611, NULL)
#else
Msg("Find size of xmlDocPtr (14612)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14611,NULL);\n",architecture,14612,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlNsPtr,8, 14613, 12, 3.1, NULL, 14602, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlNsPtr,8, 14613, 11, 3.1, NULL, 14602, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlNsPtr,4, 14613, 10, 3.1, NULL, 14602, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlNsPtr,8, 14613, 9, 3.1, NULL, 14602, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlNsPtr,4, 14613, 6, 3.1, NULL, 14602, NULL)
#elif defined __ia64__
CheckTypeSize(xmlNsPtr,8, 14613, 3, 3.1, NULL, 14602, NULL)
#elif defined __i386__
CheckTypeSize(xmlNsPtr,4, 14613, 2, 3.1, NULL, 14602, NULL)
#else
Msg("Find size of xmlNsPtr (14613)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14602,NULL);\n",architecture,14613,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlDtd,128, 14615, 12, 3.1, NULL, 14594, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlDtd,128, 14615, 11, 3.1, NULL, 14594, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlDtd,64, 14615, 10, 3.1, NULL, 14594, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlDtd,128, 14615, 9, 3.1, NULL, 14594, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlDtd,64, 14615, 6, 3.1, NULL, 14594, NULL)
#elif defined __ia64__
CheckTypeSize(xmlDtd,128, 14615, 3, 3.1, NULL, 14594, NULL)
#elif defined __i386__
CheckTypeSize(xmlDtd,64, 14615, 2, 3.1, NULL, 14594, NULL)
#else
Msg("Find size of xmlDtd (14615)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14594,NULL);\n",architecture,14615,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlDtdPtr,8, 14617, 12, 3.1, NULL, 14616, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlDtdPtr,8, 14617, 11, 3.1, NULL, 14616, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlDtdPtr,4, 14617, 10, 3.1, NULL, 14616, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlDtdPtr,8, 14617, 9, 3.1, NULL, 14616, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlDtdPtr,4, 14617, 6, 3.1, NULL, 14616, NULL)
#elif defined __ia64__
CheckTypeSize(xmlDtdPtr,8, 14617, 3, 3.1, NULL, 14616, NULL)
#elif defined __i386__
CheckTypeSize(xmlDtdPtr,4, 14617, 2, 3.1, NULL, 14616, NULL)
#else
Msg("Find size of xmlDtdPtr (14617)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14616,NULL);\n",architecture,14617,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _xmlDOMWrapCtxt,8, 14618, 12, , NULL, 0, NULL)
Msg("Missing member data for _xmlDOMWrapCtxt on S390X\n");
CheckOffset(struct _xmlDOMWrapCtxt,_private,0,12,47864)
#elif defined __x86_64__
CheckTypeSize(struct _xmlDOMWrapCtxt,8, 14618, 11, , NULL, 0, NULL)
Msg("Missing member data for _xmlDOMWrapCtxt on x86-64\n");
CheckOffset(struct _xmlDOMWrapCtxt,_private,0,11,47864)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _xmlDOMWrapCtxt,4, 14618, 10, , NULL, 0, NULL)
Msg("Missing member data for _xmlDOMWrapCtxt on S390\n");
CheckOffset(struct _xmlDOMWrapCtxt,_private,0,10,47864)
#elif defined __powerpc64__
CheckTypeSize(struct _xmlDOMWrapCtxt,8, 14618, 9, , NULL, 0, NULL)
Msg("Missing member data for _xmlDOMWrapCtxt on PPC64\n");
CheckOffset(struct _xmlDOMWrapCtxt,_private,0,9,47864)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _xmlDOMWrapCtxt,4, 14618, 6, , NULL, 0, NULL)
Msg("Missing member data for _xmlDOMWrapCtxt on PPC32\n");
CheckOffset(struct _xmlDOMWrapCtxt,_private,0,6,47864)
#elif defined __ia64__
CheckTypeSize(struct _xmlDOMWrapCtxt,8, 14618, 3, , NULL, 0, NULL)
Msg("Missing member data for _xmlDOMWrapCtxt on IA64\n");
CheckOffset(struct _xmlDOMWrapCtxt,_private,0,3,47864)
#elif defined __i386__
CheckTypeSize(struct _xmlDOMWrapCtxt,4, 14618, 2, , NULL, 0, NULL)
Msg("Missing member data for _xmlDOMWrapCtxt on IA32\n");
CheckOffset(struct _xmlDOMWrapCtxt,_private,0,2,47864)
#elif 1
CheckTypeSize(struct _xmlDOMWrapCtxt,0, 14618, 1, , NULL, 0, NULL)
Msg("Missing member data for _xmlDOMWrapCtxt on All\n");
CheckOffset(struct _xmlDOMWrapCtxt,_private,0,1,47864)
#endif

#if defined __s390x__
CheckTypeSize(xmlDOMWrapCtxt,8, 14619, 12, 3.1, NULL, 14618, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlDOMWrapCtxt,8, 14619, 11, 3.1, NULL, 14618, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlDOMWrapCtxt,4, 14619, 10, 3.1, NULL, 14618, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlDOMWrapCtxt,8, 14619, 9, 3.1, NULL, 14618, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlDOMWrapCtxt,4, 14619, 6, 3.1, NULL, 14618, NULL)
#elif defined __ia64__
CheckTypeSize(xmlDOMWrapCtxt,8, 14619, 3, 3.1, NULL, 14618, NULL)
#elif defined __i386__
CheckTypeSize(xmlDOMWrapCtxt,4, 14619, 2, 3.1, NULL, 14618, NULL)
#else
Msg("Find size of xmlDOMWrapCtxt (14619)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14618,NULL);\n",architecture,14619,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlDOMWrapCtxtPtr,8, 14621, 12, 3.1, NULL, 14620, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlDOMWrapCtxtPtr,8, 14621, 11, 3.1, NULL, 14620, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlDOMWrapCtxtPtr,4, 14621, 10, 3.1, NULL, 14620, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlDOMWrapCtxtPtr,8, 14621, 9, 3.1, NULL, 14620, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlDOMWrapCtxtPtr,4, 14621, 6, 3.1, NULL, 14620, NULL)
#elif defined __ia64__
CheckTypeSize(xmlDOMWrapCtxtPtr,8, 14621, 3, 3.1, NULL, 14620, NULL)
#elif defined __i386__
CheckTypeSize(xmlDOMWrapCtxtPtr,4, 14621, 2, 3.1, NULL, 14620, NULL)
#else
Msg("Find size of xmlDOMWrapCtxtPtr (14621)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14620,NULL);\n",architecture,14621,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlAttr,96, 14623, 12, 3.1, NULL, 14603, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlAttr,96, 14623, 11, 3.1, NULL, 14603, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlAttr,48, 14623, 10, 3.1, NULL, 14603, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlAttr,96, 14623, 9, 3.1, NULL, 14603, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlAttr,48, 14623, 6, 3.1, NULL, 14603, NULL)
#elif defined __ia64__
CheckTypeSize(xmlAttr,96, 14623, 3, 3.1, NULL, 14603, NULL)
#elif defined __i386__
CheckTypeSize(xmlAttr,48, 14623, 2, 3.1, NULL, 14603, NULL)
#else
Msg("Find size of xmlAttr (14623)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14603,NULL);\n",architecture,14623,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlAttrPtr,8, 14625, 12, 3.1, NULL, 14624, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlAttrPtr,8, 14625, 11, 3.1, NULL, 14624, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlAttrPtr,4, 14625, 10, 3.1, NULL, 14624, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlAttrPtr,8, 14625, 9, 3.1, NULL, 14624, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlAttrPtr,4, 14625, 6, 3.1, NULL, 14624, NULL)
#elif defined __ia64__
CheckTypeSize(xmlAttrPtr,8, 14625, 3, 3.1, NULL, 14624, NULL)
#elif defined __i386__
CheckTypeSize(xmlAttrPtr,4, 14625, 2, 3.1, NULL, 14624, NULL)
#else
Msg("Find size of xmlAttrPtr (14625)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14624,NULL);\n",architecture,14625,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _xmlOutputBuffer,56, 14626, 12, , NULL, 0, NULL)
CheckMemberSize(struct _xmlOutputBuffer,writecallback,8,12,47869)
CheckOffset(struct _xmlOutputBuffer,writecallback,8,12,47869)
CheckMemberSize(struct _xmlOutputBuffer,closecallback,8,12,47871)
CheckOffset(struct _xmlOutputBuffer,closecallback,16,12,47871)
CheckMemberSize(struct _xmlOutputBuffer,encoder,8,12,47881)
CheckOffset(struct _xmlOutputBuffer,encoder,24,12,47881)
CheckMemberSize(struct _xmlOutputBuffer,buffer,8,12,47882)
CheckOffset(struct _xmlOutputBuffer,buffer,32,12,47882)
CheckMemberSize(struct _xmlOutputBuffer,conv,8,12,47883)
CheckOffset(struct _xmlOutputBuffer,conv,40,12,47883)
CheckMemberSize(struct _xmlOutputBuffer,written,4,12,47884)
CheckOffset(struct _xmlOutputBuffer,written,48,12,47884)
CheckMemberSize(struct _xmlOutputBuffer,error,4,12,47885)
CheckOffset(struct _xmlOutputBuffer,error,52,12,47885)
#elif defined __x86_64__
CheckTypeSize(struct _xmlOutputBuffer,56, 14626, 11, , NULL, 0, NULL)
CheckMemberSize(struct _xmlOutputBuffer,writecallback,8,11,47869)
CheckOffset(struct _xmlOutputBuffer,writecallback,8,11,47869)
CheckMemberSize(struct _xmlOutputBuffer,closecallback,8,11,47871)
CheckOffset(struct _xmlOutputBuffer,closecallback,16,11,47871)
CheckMemberSize(struct _xmlOutputBuffer,encoder,8,11,47881)
CheckOffset(struct _xmlOutputBuffer,encoder,24,11,47881)
CheckMemberSize(struct _xmlOutputBuffer,buffer,8,11,47882)
CheckOffset(struct _xmlOutputBuffer,buffer,32,11,47882)
CheckMemberSize(struct _xmlOutputBuffer,conv,8,11,47883)
CheckOffset(struct _xmlOutputBuffer,conv,40,11,47883)
CheckMemberSize(struct _xmlOutputBuffer,written,4,11,47884)
CheckOffset(struct _xmlOutputBuffer,written,48,11,47884)
CheckMemberSize(struct _xmlOutputBuffer,error,4,11,47885)
CheckOffset(struct _xmlOutputBuffer,error,52,11,47885)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _xmlOutputBuffer,32, 14626, 10, , NULL, 0, NULL)
CheckMemberSize(struct _xmlOutputBuffer,writecallback,4,10,47869)
CheckOffset(struct _xmlOutputBuffer,writecallback,4,10,47869)
CheckMemberSize(struct _xmlOutputBuffer,closecallback,4,10,47871)
CheckOffset(struct _xmlOutputBuffer,closecallback,8,10,47871)
CheckMemberSize(struct _xmlOutputBuffer,encoder,4,10,47881)
CheckOffset(struct _xmlOutputBuffer,encoder,12,10,47881)
CheckMemberSize(struct _xmlOutputBuffer,buffer,4,10,47882)
CheckOffset(struct _xmlOutputBuffer,buffer,16,10,47882)
CheckMemberSize(struct _xmlOutputBuffer,conv,4,10,47883)
CheckOffset(struct _xmlOutputBuffer,conv,20,10,47883)
CheckMemberSize(struct _xmlOutputBuffer,written,4,10,47884)
CheckOffset(struct _xmlOutputBuffer,written,24,10,47884)
CheckMemberSize(struct _xmlOutputBuffer,error,4,10,47885)
CheckOffset(struct _xmlOutputBuffer,error,28,10,47885)
#elif defined __powerpc64__
CheckTypeSize(struct _xmlOutputBuffer,56, 14626, 9, , NULL, 0, NULL)
CheckMemberSize(struct _xmlOutputBuffer,writecallback,8,9,47869)
CheckOffset(struct _xmlOutputBuffer,writecallback,8,9,47869)
CheckMemberSize(struct _xmlOutputBuffer,closecallback,8,9,47871)
CheckOffset(struct _xmlOutputBuffer,closecallback,16,9,47871)
CheckMemberSize(struct _xmlOutputBuffer,encoder,8,9,47881)
CheckOffset(struct _xmlOutputBuffer,encoder,24,9,47881)
CheckMemberSize(struct _xmlOutputBuffer,buffer,8,9,47882)
CheckOffset(struct _xmlOutputBuffer,buffer,32,9,47882)
CheckMemberSize(struct _xmlOutputBuffer,conv,8,9,47883)
CheckOffset(struct _xmlOutputBuffer,conv,40,9,47883)
CheckMemberSize(struct _xmlOutputBuffer,written,4,9,47884)
CheckOffset(struct _xmlOutputBuffer,written,48,9,47884)
CheckMemberSize(struct _xmlOutputBuffer,error,4,9,47885)
CheckOffset(struct _xmlOutputBuffer,error,52,9,47885)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _xmlOutputBuffer,32, 14626, 6, , NULL, 0, NULL)
CheckMemberSize(struct _xmlOutputBuffer,writecallback,4,6,47869)
CheckOffset(struct _xmlOutputBuffer,writecallback,4,6,47869)
CheckMemberSize(struct _xmlOutputBuffer,closecallback,4,6,47871)
CheckOffset(struct _xmlOutputBuffer,closecallback,8,6,47871)
CheckMemberSize(struct _xmlOutputBuffer,encoder,4,6,47881)
CheckOffset(struct _xmlOutputBuffer,encoder,12,6,47881)
CheckMemberSize(struct _xmlOutputBuffer,buffer,4,6,47882)
CheckOffset(struct _xmlOutputBuffer,buffer,16,6,47882)
CheckMemberSize(struct _xmlOutputBuffer,conv,4,6,47883)
CheckOffset(struct _xmlOutputBuffer,conv,20,6,47883)
CheckMemberSize(struct _xmlOutputBuffer,written,4,6,47884)
CheckOffset(struct _xmlOutputBuffer,written,24,6,47884)
CheckMemberSize(struct _xmlOutputBuffer,error,4,6,47885)
CheckOffset(struct _xmlOutputBuffer,error,28,6,47885)
#elif defined __ia64__
CheckTypeSize(struct _xmlOutputBuffer,56, 14626, 3, , NULL, 0, NULL)
CheckMemberSize(struct _xmlOutputBuffer,writecallback,8,3,47869)
CheckOffset(struct _xmlOutputBuffer,writecallback,8,3,47869)
CheckMemberSize(struct _xmlOutputBuffer,closecallback,8,3,47871)
CheckOffset(struct _xmlOutputBuffer,closecallback,16,3,47871)
CheckMemberSize(struct _xmlOutputBuffer,encoder,8,3,47881)
CheckOffset(struct _xmlOutputBuffer,encoder,24,3,47881)
CheckMemberSize(struct _xmlOutputBuffer,buffer,8,3,47882)
CheckOffset(struct _xmlOutputBuffer,buffer,32,3,47882)
CheckMemberSize(struct _xmlOutputBuffer,conv,8,3,47883)
CheckOffset(struct _xmlOutputBuffer,conv,40,3,47883)
CheckMemberSize(struct _xmlOutputBuffer,written,4,3,47884)
CheckOffset(struct _xmlOutputBuffer,written,48,3,47884)
CheckMemberSize(struct _xmlOutputBuffer,error,4,3,47885)
CheckOffset(struct _xmlOutputBuffer,error,52,3,47885)
#elif defined __i386__
CheckTypeSize(struct _xmlOutputBuffer,32, 14626, 2, , NULL, 0, NULL)
CheckMemberSize(struct _xmlOutputBuffer,writecallback,4,2,47869)
CheckOffset(struct _xmlOutputBuffer,writecallback,4,2,47869)
CheckMemberSize(struct _xmlOutputBuffer,closecallback,4,2,47871)
CheckOffset(struct _xmlOutputBuffer,closecallback,8,2,47871)
CheckMemberSize(struct _xmlOutputBuffer,encoder,4,2,47881)
CheckOffset(struct _xmlOutputBuffer,encoder,12,2,47881)
CheckMemberSize(struct _xmlOutputBuffer,buffer,4,2,47882)
CheckOffset(struct _xmlOutputBuffer,buffer,16,2,47882)
CheckMemberSize(struct _xmlOutputBuffer,conv,4,2,47883)
CheckOffset(struct _xmlOutputBuffer,conv,20,2,47883)
CheckMemberSize(struct _xmlOutputBuffer,written,4,2,47884)
CheckOffset(struct _xmlOutputBuffer,written,24,2,47884)
CheckMemberSize(struct _xmlOutputBuffer,error,4,2,47885)
CheckOffset(struct _xmlOutputBuffer,error,28,2,47885)
#elif 1
CheckTypeSize(struct _xmlOutputBuffer,0, 14626, 1, , NULL, 0, NULL)
Msg("Missing member data for _xmlOutputBuffer on All\n");
CheckOffset(struct _xmlOutputBuffer,context,0,1,47865)
#endif

#if defined __s390x__
CheckTypeSize(xmlOutputWriteCallback,8, 14628, 12, 3.1, NULL, 14627, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlOutputWriteCallback,8, 14628, 11, 3.1, NULL, 14627, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlOutputWriteCallback,4, 14628, 10, 3.1, NULL, 14627, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlOutputWriteCallback,8, 14628, 9, 3.1, NULL, 14627, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlOutputWriteCallback,4, 14628, 6, 3.1, NULL, 14627, NULL)
#elif defined __ia64__
CheckTypeSize(xmlOutputWriteCallback,8, 14628, 3, 3.1, NULL, 14627, NULL)
#elif defined __i386__
CheckTypeSize(xmlOutputWriteCallback,4, 14628, 2, 3.1, NULL, 14627, NULL)
#else
Msg("Find size of xmlOutputWriteCallback (14628)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14627,NULL);\n",architecture,14628,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlOutputCloseCallback,8, 14630, 12, 3.1, NULL, 14629, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlOutputCloseCallback,8, 14630, 11, 3.1, NULL, 14629, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlOutputCloseCallback,4, 14630, 10, 3.1, NULL, 14629, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlOutputCloseCallback,8, 14630, 9, 3.1, NULL, 14629, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlOutputCloseCallback,4, 14630, 6, 3.1, NULL, 14629, NULL)
#elif defined __ia64__
CheckTypeSize(xmlOutputCloseCallback,8, 14630, 3, 3.1, NULL, 14629, NULL)
#elif defined __i386__
CheckTypeSize(xmlOutputCloseCallback,4, 14630, 2, 3.1, NULL, 14629, NULL)
#else
Msg("Find size of xmlOutputCloseCallback (14630)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14629,NULL);\n",architecture,14630,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _xmlCharEncodingHandler,40, 14631, 12, , NULL, 0, NULL)
CheckMemberSize(struct _xmlCharEncodingHandler,input,8,12,47877)
CheckOffset(struct _xmlCharEncodingHandler,input,8,12,47877)
CheckMemberSize(struct _xmlCharEncodingHandler,output,8,12,47878)
CheckOffset(struct _xmlCharEncodingHandler,output,16,12,47878)
CheckMemberSize(struct _xmlCharEncodingHandler,iconv_in,8,12,47879)
CheckOffset(struct _xmlCharEncodingHandler,iconv_in,24,12,47879)
CheckMemberSize(struct _xmlCharEncodingHandler,iconv_out,8,12,47880)
CheckOffset(struct _xmlCharEncodingHandler,iconv_out,32,12,47880)
#elif defined __x86_64__
CheckTypeSize(struct _xmlCharEncodingHandler,40, 14631, 11, , NULL, 0, NULL)
CheckMemberSize(struct _xmlCharEncodingHandler,input,8,11,47877)
CheckOffset(struct _xmlCharEncodingHandler,input,8,11,47877)
CheckMemberSize(struct _xmlCharEncodingHandler,output,8,11,47878)
CheckOffset(struct _xmlCharEncodingHandler,output,16,11,47878)
CheckMemberSize(struct _xmlCharEncodingHandler,iconv_in,8,11,47879)
CheckOffset(struct _xmlCharEncodingHandler,iconv_in,24,11,47879)
CheckMemberSize(struct _xmlCharEncodingHandler,iconv_out,8,11,47880)
CheckOffset(struct _xmlCharEncodingHandler,iconv_out,32,11,47880)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _xmlCharEncodingHandler,20, 14631, 10, , NULL, 0, NULL)
CheckMemberSize(struct _xmlCharEncodingHandler,input,4,10,47877)
CheckOffset(struct _xmlCharEncodingHandler,input,4,10,47877)
CheckMemberSize(struct _xmlCharEncodingHandler,output,4,10,47878)
CheckOffset(struct _xmlCharEncodingHandler,output,8,10,47878)
CheckMemberSize(struct _xmlCharEncodingHandler,iconv_in,4,10,47879)
CheckOffset(struct _xmlCharEncodingHandler,iconv_in,12,10,47879)
CheckMemberSize(struct _xmlCharEncodingHandler,iconv_out,4,10,47880)
CheckOffset(struct _xmlCharEncodingHandler,iconv_out,16,10,47880)
#elif defined __powerpc64__
CheckTypeSize(struct _xmlCharEncodingHandler,40, 14631, 9, , NULL, 0, NULL)
CheckMemberSize(struct _xmlCharEncodingHandler,input,8,9,47877)
CheckOffset(struct _xmlCharEncodingHandler,input,8,9,47877)
CheckMemberSize(struct _xmlCharEncodingHandler,output,8,9,47878)
CheckOffset(struct _xmlCharEncodingHandler,output,16,9,47878)
CheckMemberSize(struct _xmlCharEncodingHandler,iconv_in,8,9,47879)
CheckOffset(struct _xmlCharEncodingHandler,iconv_in,24,9,47879)
CheckMemberSize(struct _xmlCharEncodingHandler,iconv_out,8,9,47880)
CheckOffset(struct _xmlCharEncodingHandler,iconv_out,32,9,47880)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _xmlCharEncodingHandler,20, 14631, 6, , NULL, 0, NULL)
CheckMemberSize(struct _xmlCharEncodingHandler,input,4,6,47877)
CheckOffset(struct _xmlCharEncodingHandler,input,4,6,47877)
CheckMemberSize(struct _xmlCharEncodingHandler,output,4,6,47878)
CheckOffset(struct _xmlCharEncodingHandler,output,8,6,47878)
CheckMemberSize(struct _xmlCharEncodingHandler,iconv_in,4,6,47879)
CheckOffset(struct _xmlCharEncodingHandler,iconv_in,12,6,47879)
CheckMemberSize(struct _xmlCharEncodingHandler,iconv_out,4,6,47880)
CheckOffset(struct _xmlCharEncodingHandler,iconv_out,16,6,47880)
#elif defined __ia64__
CheckTypeSize(struct _xmlCharEncodingHandler,40, 14631, 3, , NULL, 0, NULL)
CheckMemberSize(struct _xmlCharEncodingHandler,input,8,3,47877)
CheckOffset(struct _xmlCharEncodingHandler,input,8,3,47877)
CheckMemberSize(struct _xmlCharEncodingHandler,output,8,3,47878)
CheckOffset(struct _xmlCharEncodingHandler,output,16,3,47878)
CheckMemberSize(struct _xmlCharEncodingHandler,iconv_in,8,3,47879)
CheckOffset(struct _xmlCharEncodingHandler,iconv_in,24,3,47879)
CheckMemberSize(struct _xmlCharEncodingHandler,iconv_out,8,3,47880)
CheckOffset(struct _xmlCharEncodingHandler,iconv_out,32,3,47880)
#elif defined __i386__
CheckTypeSize(struct _xmlCharEncodingHandler,20, 14631, 2, , NULL, 0, NULL)
CheckMemberSize(struct _xmlCharEncodingHandler,input,4,2,47877)
CheckOffset(struct _xmlCharEncodingHandler,input,4,2,47877)
CheckMemberSize(struct _xmlCharEncodingHandler,output,4,2,47878)
CheckOffset(struct _xmlCharEncodingHandler,output,8,2,47878)
CheckMemberSize(struct _xmlCharEncodingHandler,iconv_in,4,2,47879)
CheckOffset(struct _xmlCharEncodingHandler,iconv_in,12,2,47879)
CheckMemberSize(struct _xmlCharEncodingHandler,iconv_out,4,2,47880)
CheckOffset(struct _xmlCharEncodingHandler,iconv_out,16,2,47880)
#elif 1
CheckTypeSize(struct _xmlCharEncodingHandler,0, 14631, 1, , NULL, 0, NULL)
Msg("Missing member data for _xmlCharEncodingHandler on All\n");
CheckOffset(struct _xmlCharEncodingHandler,name,0,1,47872)
#endif

#if defined __s390x__
CheckTypeSize(xmlCharEncodingInputFunc,8, 14633, 12, 3.1, NULL, 14632, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlCharEncodingInputFunc,8, 14633, 11, 3.1, NULL, 14632, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlCharEncodingInputFunc,4, 14633, 10, 3.1, NULL, 14632, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlCharEncodingInputFunc,8, 14633, 9, 3.1, NULL, 14632, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlCharEncodingInputFunc,4, 14633, 6, 3.1, NULL, 14632, NULL)
#elif defined __ia64__
CheckTypeSize(xmlCharEncodingInputFunc,8, 14633, 3, 3.1, NULL, 14632, NULL)
#elif defined __i386__
CheckTypeSize(xmlCharEncodingInputFunc,4, 14633, 2, 3.1, NULL, 14632, NULL)
#else
Msg("Find size of xmlCharEncodingInputFunc (14633)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14632,NULL);\n",architecture,14633,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlCharEncodingOutputFunc,8, 14634, 12, 3.1, NULL, 14632, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlCharEncodingOutputFunc,8, 14634, 11, 3.1, NULL, 14632, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlCharEncodingOutputFunc,4, 14634, 10, 3.1, NULL, 14632, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlCharEncodingOutputFunc,8, 14634, 9, 3.1, NULL, 14632, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlCharEncodingOutputFunc,4, 14634, 6, 3.1, NULL, 14632, NULL)
#elif defined __ia64__
CheckTypeSize(xmlCharEncodingOutputFunc,8, 14634, 3, 3.1, NULL, 14632, NULL)
#elif defined __i386__
CheckTypeSize(xmlCharEncodingOutputFunc,4, 14634, 2, 3.1, NULL, 14632, NULL)
#else
Msg("Find size of xmlCharEncodingOutputFunc (14634)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14632,NULL);\n",architecture,14634,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlCharEncodingHandler,40, 14635, 12, 3.1, NULL, 14631, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlCharEncodingHandler,40, 14635, 11, 3.1, NULL, 14631, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlCharEncodingHandler,20, 14635, 10, 3.1, NULL, 14631, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlCharEncodingHandler,40, 14635, 9, 3.1, NULL, 14631, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlCharEncodingHandler,20, 14635, 6, 3.1, NULL, 14631, NULL)
#elif defined __ia64__
CheckTypeSize(xmlCharEncodingHandler,40, 14635, 3, 3.1, NULL, 14631, NULL)
#elif defined __i386__
CheckTypeSize(xmlCharEncodingHandler,20, 14635, 2, 3.1, NULL, 14631, NULL)
#else
Msg("Find size of xmlCharEncodingHandler (14635)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14631,NULL);\n",architecture,14635,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlCharEncodingHandlerPtr,8, 14637, 12, 3.1, NULL, 14636, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlCharEncodingHandlerPtr,8, 14637, 11, 3.1, NULL, 14636, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlCharEncodingHandlerPtr,4, 14637, 10, 3.1, NULL, 14636, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlCharEncodingHandlerPtr,8, 14637, 9, 3.1, NULL, 14636, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlCharEncodingHandlerPtr,4, 14637, 6, 3.1, NULL, 14636, NULL)
#elif defined __ia64__
CheckTypeSize(xmlCharEncodingHandlerPtr,8, 14637, 3, 3.1, NULL, 14636, NULL)
#elif defined __i386__
CheckTypeSize(xmlCharEncodingHandlerPtr,4, 14637, 2, 3.1, NULL, 14636, NULL)
#else
Msg("Find size of xmlCharEncodingHandlerPtr (14637)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14636,NULL);\n",architecture,14637,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlOutputBuffer,56, 14638, 12, 3.1, NULL, 14626, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlOutputBuffer,56, 14638, 11, 3.1, NULL, 14626, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlOutputBuffer,32, 14638, 10, 3.1, NULL, 14626, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlOutputBuffer,56, 14638, 9, 3.1, NULL, 14626, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlOutputBuffer,32, 14638, 6, 3.1, NULL, 14626, NULL)
#elif defined __ia64__
CheckTypeSize(xmlOutputBuffer,56, 14638, 3, 3.1, NULL, 14626, NULL)
#elif defined __i386__
CheckTypeSize(xmlOutputBuffer,32, 14638, 2, 3.1, NULL, 14626, NULL)
#else
Msg("Find size of xmlOutputBuffer (14638)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14626,NULL);\n",architecture,14638,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlOutputBufferPtr,8, 14640, 12, 3.1, NULL, 14639, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlOutputBufferPtr,8, 14640, 11, 3.1, NULL, 14639, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlOutputBufferPtr,4, 14640, 10, 3.1, NULL, 14639, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlOutputBufferPtr,8, 14640, 9, 3.1, NULL, 14639, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlOutputBufferPtr,4, 14640, 6, 3.1, NULL, 14639, NULL)
#elif defined __ia64__
CheckTypeSize(xmlOutputBufferPtr,8, 14640, 3, 3.1, NULL, 14639, NULL)
#elif defined __i386__
CheckTypeSize(xmlOutputBufferPtr,4, 14640, 2, 3.1, NULL, 14639, NULL)
#else
Msg("Find size of xmlOutputBufferPtr (14640)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14639, NULL);\n",architecture,14640,0);
#endif

#if defined __s390x__
/* S390X */
typedef int (*xmlOutputWriteCallback_db)(void *, const char *, int);
CheckFunctionTypedef(xmlOutputWriteCallback,xmlOutputWriteCallback_db);
#elif defined __x86_64__
/* x86-64 */
typedef int (*xmlOutputWriteCallback_db)(void *, const char *, int);
CheckFunctionTypedef(xmlOutputWriteCallback,xmlOutputWriteCallback_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef int (*xmlOutputWriteCallback_db)(void *, const char *, int);
CheckFunctionTypedef(xmlOutputWriteCallback,xmlOutputWriteCallback_db);
#elif defined __powerpc64__
/* PPC64 */
typedef int (*xmlOutputWriteCallback_db)(void *, const char *, int);
CheckFunctionTypedef(xmlOutputWriteCallback,xmlOutputWriteCallback_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef int (*xmlOutputWriteCallback_db)(void *, const char *, int);
CheckFunctionTypedef(xmlOutputWriteCallback,xmlOutputWriteCallback_db);
#elif defined __ia64__
/* IA64 */
typedef int (*xmlOutputWriteCallback_db)(void *, const char *, int);
CheckFunctionTypedef(xmlOutputWriteCallback,xmlOutputWriteCallback_db);
#elif defined __i386__
/* IA32 */
typedef int (*xmlOutputWriteCallback_db)(void *, const char *, int);
CheckFunctionTypedef(xmlOutputWriteCallback,xmlOutputWriteCallback_db);
#endif

#if defined __s390x__
/* S390X */
typedef int (*xmlOutputCloseCallback_db)(void *);
CheckFunctionTypedef(xmlOutputCloseCallback,xmlOutputCloseCallback_db);
#elif defined __x86_64__
/* x86-64 */
typedef int (*xmlOutputCloseCallback_db)(void *);
CheckFunctionTypedef(xmlOutputCloseCallback,xmlOutputCloseCallback_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef int (*xmlOutputCloseCallback_db)(void *);
CheckFunctionTypedef(xmlOutputCloseCallback,xmlOutputCloseCallback_db);
#elif defined __powerpc64__
/* PPC64 */
typedef int (*xmlOutputCloseCallback_db)(void *);
CheckFunctionTypedef(xmlOutputCloseCallback,xmlOutputCloseCallback_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef int (*xmlOutputCloseCallback_db)(void *);
CheckFunctionTypedef(xmlOutputCloseCallback,xmlOutputCloseCallback_db);
#elif defined __ia64__
/* IA64 */
typedef int (*xmlOutputCloseCallback_db)(void *);
CheckFunctionTypedef(xmlOutputCloseCallback,xmlOutputCloseCallback_db);
#elif defined __i386__
/* IA32 */
typedef int (*xmlOutputCloseCallback_db)(void *);
CheckFunctionTypedef(xmlOutputCloseCallback,xmlOutputCloseCallback_db);
#endif

#if defined __s390x__
/* S390X */
typedef int (*xmlCharEncodingInputFunc_db)(unsigned char *, int *, const unsigned char *, int *);
CheckFunctionTypedef(xmlCharEncodingInputFunc,xmlCharEncodingInputFunc_db);
#elif defined __x86_64__
/* x86-64 */
typedef int (*xmlCharEncodingInputFunc_db)(unsigned char *, int *, const unsigned char *, int *);
CheckFunctionTypedef(xmlCharEncodingInputFunc,xmlCharEncodingInputFunc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef int (*xmlCharEncodingInputFunc_db)(unsigned char *, int *, const unsigned char *, int *);
CheckFunctionTypedef(xmlCharEncodingInputFunc,xmlCharEncodingInputFunc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef int (*xmlCharEncodingInputFunc_db)(unsigned char *, int *, const unsigned char *, int *);
CheckFunctionTypedef(xmlCharEncodingInputFunc,xmlCharEncodingInputFunc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef int (*xmlCharEncodingInputFunc_db)(unsigned char *, int *, const unsigned char *, int *);
CheckFunctionTypedef(xmlCharEncodingInputFunc,xmlCharEncodingInputFunc_db);
#elif defined __ia64__
/* IA64 */
typedef int (*xmlCharEncodingInputFunc_db)(unsigned char *, int *, const unsigned char *, int *);
CheckFunctionTypedef(xmlCharEncodingInputFunc,xmlCharEncodingInputFunc_db);
#elif defined __i386__
/* IA32 */
typedef int (*xmlCharEncodingInputFunc_db)(unsigned char *, int *, const unsigned char *, int *);
CheckFunctionTypedef(xmlCharEncodingInputFunc,xmlCharEncodingInputFunc_db);
#endif

#if defined __s390x__
/* S390X */
typedef int (*xmlCharEncodingOutputFunc_db)(unsigned char *, int *, const unsigned char *, int *);
CheckFunctionTypedef(xmlCharEncodingOutputFunc,xmlCharEncodingOutputFunc_db);
#elif defined __x86_64__
/* x86-64 */
typedef int (*xmlCharEncodingOutputFunc_db)(unsigned char *, int *, const unsigned char *, int *);
CheckFunctionTypedef(xmlCharEncodingOutputFunc,xmlCharEncodingOutputFunc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef int (*xmlCharEncodingOutputFunc_db)(unsigned char *, int *, const unsigned char *, int *);
CheckFunctionTypedef(xmlCharEncodingOutputFunc,xmlCharEncodingOutputFunc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef int (*xmlCharEncodingOutputFunc_db)(unsigned char *, int *, const unsigned char *, int *);
CheckFunctionTypedef(xmlCharEncodingOutputFunc,xmlCharEncodingOutputFunc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef int (*xmlCharEncodingOutputFunc_db)(unsigned char *, int *, const unsigned char *, int *);
CheckFunctionTypedef(xmlCharEncodingOutputFunc,xmlCharEncodingOutputFunc_db);
#elif defined __ia64__
/* IA64 */
typedef int (*xmlCharEncodingOutputFunc_db)(unsigned char *, int *, const unsigned char *, int *);
CheckFunctionTypedef(xmlCharEncodingOutputFunc,xmlCharEncodingOutputFunc_db);
#elif defined __i386__
/* IA32 */
typedef int (*xmlCharEncodingOutputFunc_db)(unsigned char *, int *, const unsigned char *, int *);
CheckFunctionTypedef(xmlCharEncodingOutputFunc,xmlCharEncodingOutputFunc_db);
#endif

extern const xmlChar * xmlBufferContent_db(const xmlBufferPtr);
CheckInterfacedef(xmlBufferContent,xmlBufferContent_db);
extern void xmlSetBufferAllocationScheme_db(xmlBufferAllocationScheme);
CheckInterfacedef(xmlSetBufferAllocationScheme,xmlSetBufferAllocationScheme_db);
extern xmlNodePtr xmlDocSetRootElement_db(xmlDocPtr, xmlNodePtr);
CheckInterfacedef(xmlDocSetRootElement,xmlDocSetRootElement_db);
extern xmlNsPtr xmlNewNs_db(xmlNodePtr, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlNewNs,xmlNewNs_db);
extern xmlChar * xmlGetNsProp_db(xmlNodePtr, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlGetNsProp,xmlGetNsProp_db);
extern int xmlSaveFile_db(const char *, xmlDocPtr);
CheckInterfacedef(xmlSaveFile,xmlSaveFile_db);
extern int xmlNodeDump_db(xmlBufferPtr, xmlDocPtr, xmlNodePtr, int, int);
CheckInterfacedef(xmlNodeDump,xmlNodeDump_db);
extern void xmlSetTreeDoc_db(xmlNodePtr, xmlDocPtr);
CheckInterfacedef(xmlSetTreeDoc,xmlSetTreeDoc_db);
extern void xmlUnlinkNode_db(xmlNodePtr);
CheckInterfacedef(xmlUnlinkNode,xmlUnlinkNode_db);
extern xmlChar * xmlSplitQName2_db(const xmlChar *, xmlChar * *);
CheckInterfacedef(xmlSplitQName2,xmlSplitQName2_db);
extern void xmlFreeDtd_db(xmlDtdPtr);
CheckInterfacedef(xmlFreeDtd,xmlFreeDtd_db);
extern const xmlChar * xmlSplitQName3_db(const xmlChar *, int *);
CheckInterfacedef(xmlSplitQName3,xmlSplitQName3_db);
extern void xmlDOMWrapFreeCtxt_db(xmlDOMWrapCtxtPtr);
CheckInterfacedef(xmlDOMWrapFreeCtxt,xmlDOMWrapFreeCtxt_db);
extern int xmlGetCompressMode_db(void);
CheckInterfacedef(xmlGetCompressMode,xmlGetCompressMode_db);
extern xmlNodePtr xmlDocCopyNodeList_db(xmlDocPtr, const xmlNodePtr);
CheckInterfacedef(xmlDocCopyNodeList,xmlDocCopyNodeList_db);
extern xmlNodePtr xmlNewDocNodeEatName_db(xmlDocPtr, xmlNsPtr, xmlChar *, const xmlChar *);
CheckInterfacedef(xmlNewDocNodeEatName,xmlNewDocNodeEatName_db);
extern xmlNodePtr xmlStringGetNodeList_db(xmlDocPtr, const xmlChar *);
CheckInterfacedef(xmlStringGetNodeList,xmlStringGetNodeList_db);
extern xmlNodePtr xmlNewDocPI_db(xmlDocPtr, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlNewDocPI,xmlNewDocPI_db);
extern int xmlUnsetNsProp_db(xmlNodePtr, xmlNsPtr, const xmlChar *);
CheckInterfacedef(xmlUnsetNsProp,xmlUnsetNsProp_db);
extern void xmlSetCompressMode_db(int);
CheckInterfacedef(xmlSetCompressMode,xmlSetCompressMode_db);
extern void xmlSetDocCompressMode_db(xmlDocPtr, int);
CheckInterfacedef(xmlSetDocCompressMode,xmlSetDocCompressMode_db);
extern xmlNodePtr xmlNewText_db(const xmlChar *);
CheckInterfacedef(xmlNewText,xmlNewText_db);
extern xmlNodePtr xmlDocGetRootElement_db(xmlDocPtr);
CheckInterfacedef(xmlDocGetRootElement,xmlDocGetRootElement_db);
extern int xmlValidateName_db(const xmlChar *, int);
CheckInterfacedef(xmlValidateName,xmlValidateName_db);
extern void xmlAttrSerializeTxtContent_db(xmlBufferPtr, xmlDocPtr, xmlAttrPtr, const xmlChar *);
CheckInterfacedef(xmlAttrSerializeTxtContent,xmlAttrSerializeTxtContent_db);
extern long int xmlGetLineNo_db(xmlNodePtr);
CheckInterfacedef(xmlGetLineNo,xmlGetLineNo_db);
extern int xmlNodeBufGetContent_db(xmlBufferPtr, xmlNodePtr);
CheckInterfacedef(xmlNodeBufGetContent,xmlNodeBufGetContent_db);
extern xmlAttrPtr xmlHasProp_db(xmlNodePtr, const xmlChar *);
CheckInterfacedef(xmlHasProp,xmlHasProp_db);
extern xmlNodePtr xmlNewReference_db(xmlDocPtr, const xmlChar *);
CheckInterfacedef(xmlNewReference,xmlNewReference_db);
extern void xmlNodeSetContentLen_db(xmlNodePtr, const xmlChar *, int);
CheckInterfacedef(xmlNodeSetContentLen,xmlNodeSetContentLen_db);
extern void xmlFreeNsList_db(xmlNsPtr);
CheckInterfacedef(xmlFreeNsList,xmlFreeNsList_db);
extern int xmlSaveFormatFileEnc_db(const char *, xmlDocPtr, const char *, int);
CheckInterfacedef(xmlSaveFormatFileEnc,xmlSaveFormatFileEnc_db);
extern void xmlFreeDoc_db(xmlDocPtr);
CheckInterfacedef(xmlFreeDoc,xmlFreeDoc_db);
extern xmlNodePtr xmlNewDocFragment_db(xmlDocPtr);
CheckInterfacedef(xmlNewDocFragment,xmlNewDocFragment_db);
extern xmlNodePtr xmlNewCharRef_db(xmlDocPtr, const xmlChar *);
CheckInterfacedef(xmlNewCharRef,xmlNewCharRef_db);
extern int xmlTextConcat_db(xmlNodePtr, const xmlChar *, int);
CheckInterfacedef(xmlTextConcat,xmlTextConcat_db);
extern void xmlBufferEmpty_db(xmlBufferPtr);
CheckInterfacedef(xmlBufferEmpty,xmlBufferEmpty_db);
extern int xmlNodeGetSpacePreserve_db(xmlNodePtr);
CheckInterfacedef(xmlNodeGetSpacePreserve,xmlNodeGetSpacePreserve_db);
extern int xmlBufferCCat_db(xmlBufferPtr, const char *);
CheckInterfacedef(xmlBufferCCat,xmlBufferCCat_db);
extern int xmlSaveFormatFileTo_db(xmlOutputBufferPtr, xmlDocPtr, const char *, int);
CheckInterfacedef(xmlSaveFormatFileTo,xmlSaveFormatFileTo_db);
extern xmlBufferPtr xmlBufferCreate_db(void);
CheckInterfacedef(xmlBufferCreate,xmlBufferCreate_db);
extern xmlChar * xmlNodeGetBase_db(xmlDocPtr, xmlNodePtr);
CheckInterfacedef(xmlNodeGetBase,xmlNodeGetBase_db);
extern xmlChar * xmlGetNoNsProp_db(xmlNodePtr, const xmlChar *);
CheckInterfacedef(xmlGetNoNsProp,xmlGetNoNsProp_db);
extern xmlDOMWrapCtxtPtr xmlDOMWrapNewCtxt_db(void);
CheckInterfacedef(xmlDOMWrapNewCtxt,xmlDOMWrapNewCtxt_db);
extern void xmlBufferWriteQuotedString_db(xmlBufferPtr, const xmlChar *);
CheckInterfacedef(xmlBufferWriteQuotedString,xmlBufferWriteQuotedString_db);
extern xmlAttrPtr xmlNewDocProp_db(xmlDocPtr, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlNewDocProp,xmlNewDocProp_db);
extern int xmlBufferAddHead_db(xmlBufferPtr, const xmlChar *, int);
CheckInterfacedef(xmlBufferAddHead,xmlBufferAddHead_db);
extern xmlNodePtr xmlNewTextLen_db(const xmlChar *, int);
CheckInterfacedef(xmlNewTextLen,xmlNewTextLen_db);
extern int xmlUnsetProp_db(xmlNodePtr, const xmlChar *);
CheckInterfacedef(xmlUnsetProp,xmlUnsetProp_db);
extern xmlNsPtr * xmlGetNsList_db(xmlDocPtr, xmlNodePtr);
CheckInterfacedef(xmlGetNsList,xmlGetNsList_db);
extern void xmlDocDumpMemory_db(xmlDocPtr, xmlChar * *, int *);
CheckInterfacedef(xmlDocDumpMemory,xmlDocDumpMemory_db);
extern int xmlSaveFileEnc_db(const char *, xmlDocPtr, const char *);
CheckInterfacedef(xmlSaveFileEnc,xmlSaveFileEnc_db);
extern xmlNodePtr xmlNewPI_db(const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlNewPI,xmlNewPI_db);
extern xmlDocPtr xmlNewDoc_db(const xmlChar *);
CheckInterfacedef(xmlNewDoc,xmlNewDoc_db);
extern xmlChar * xmlNodeListGetString_db(xmlDocPtr, xmlNodePtr, int);
CheckInterfacedef(xmlNodeListGetString,xmlNodeListGetString_db);
extern xmlChar * xmlNodeListGetRawString_db(xmlDocPtr, xmlNodePtr, int);
CheckInterfacedef(xmlNodeListGetRawString,xmlNodeListGetRawString_db);
extern void xmlFreePropList_db(xmlAttrPtr);
CheckInterfacedef(xmlFreePropList,xmlFreePropList_db);
extern void xmlBufferWriteCHAR_db(xmlBufferPtr, const xmlChar *);
CheckInterfacedef(xmlBufferWriteCHAR,xmlBufferWriteCHAR_db);
extern xmlNodePtr xmlNewDocNode_db(xmlDocPtr, xmlNsPtr, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlNewDocNode,xmlNewDocNode_db);
extern int xmlRemoveProp_db(xmlAttrPtr);
CheckInterfacedef(xmlRemoveProp,xmlRemoveProp_db);
extern int xmlBufferShrink_db(xmlBufferPtr, unsigned int);
CheckInterfacedef(xmlBufferShrink,xmlBufferShrink_db);
extern xmlNodePtr xmlStringLenGetNodeList_db(xmlDocPtr, const xmlChar *, int);
CheckInterfacedef(xmlStringLenGetNodeList,xmlStringLenGetNodeList_db);
extern xmlNodePtr xmlTextMerge_db(xmlNodePtr, xmlNodePtr);
CheckInterfacedef(xmlTextMerge,xmlTextMerge_db);
extern void xmlFreeNs_db(xmlNsPtr);
CheckInterfacedef(xmlFreeNs,xmlFreeNs_db);
extern xmlNodePtr xmlNewTextChild_db(xmlNodePtr, xmlNsPtr, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlNewTextChild,xmlNewTextChild_db);
extern xmlNsPtr xmlCopyNamespaceList_db(xmlNsPtr);
CheckInterfacedef(xmlCopyNamespaceList,xmlCopyNamespaceList_db);
extern void xmlBufferWriteChar_db(xmlBufferPtr, const char *);
CheckInterfacedef(xmlBufferWriteChar,xmlBufferWriteChar_db);
extern xmlChar * xmlNodeGetContent_db(xmlNodePtr);
CheckInterfacedef(xmlNodeGetContent,xmlNodeGetContent_db);
extern xmlNodePtr xmlCopyNodeList_db(const xmlNodePtr);
CheckInterfacedef(xmlCopyNodeList,xmlCopyNodeList_db);
extern xmlChar * xmlNodeGetLang_db(xmlNodePtr);
CheckInterfacedef(xmlNodeGetLang,xmlNodeGetLang_db);
extern int xmlValidateNMToken_db(const xmlChar *, int);
CheckInterfacedef(xmlValidateNMToken,xmlValidateNMToken_db);
extern xmlBufferPtr xmlBufferCreateStatic_db(void *, size_t);
CheckInterfacedef(xmlBufferCreateStatic,xmlBufferCreateStatic_db);
extern int xmlBufferGrow_db(xmlBufferPtr, unsigned int);
CheckInterfacedef(xmlBufferGrow,xmlBufferGrow_db);
extern xmlNodePtr xmlAddPrevSibling_db(xmlNodePtr, xmlNodePtr);
CheckInterfacedef(xmlAddPrevSibling,xmlAddPrevSibling_db);
extern int xmlReconciliateNs_db(xmlDocPtr, xmlNodePtr);
CheckInterfacedef(xmlReconciliateNs,xmlReconciliateNs_db);
extern int xmlValidateQName_db(const xmlChar *, int);
CheckInterfacedef(xmlValidateQName,xmlValidateQName_db);
extern int xmlValidateNCName_db(const xmlChar *, int);
CheckInterfacedef(xmlValidateNCName,xmlValidateNCName_db);
extern void xmlNodeDumpOutput_db(xmlOutputBufferPtr, xmlDocPtr, xmlNodePtr, int, int, const char *);
CheckInterfacedef(xmlNodeDumpOutput,xmlNodeDumpOutput_db);
extern xmlDtdPtr xmlGetIntSubset_db(xmlDocPtr);
CheckInterfacedef(xmlGetIntSubset,xmlGetIntSubset_db);
extern xmlAttrPtr xmlNewNsProp_db(xmlNodePtr, xmlNsPtr, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlNewNsProp,xmlNewNsProp_db);
extern xmlNodePtr xmlNewComment_db(const xmlChar *);
CheckInterfacedef(xmlNewComment,xmlNewComment_db);
extern int xmlGetDocCompressMode_db(xmlDocPtr);
CheckInterfacedef(xmlGetDocCompressMode,xmlGetDocCompressMode_db);
extern xmlAttrPtr xmlSetProp_db(xmlNodePtr, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlSetProp,xmlSetProp_db);
extern xmlBufferAllocationScheme xmlGetBufferAllocationScheme_db(void);
CheckInterfacedef(xmlGetBufferAllocationScheme,xmlGetBufferAllocationScheme_db);
extern xmlNodePtr xmlNewCDataBlock_db(xmlDocPtr, const xmlChar *, int);
CheckInterfacedef(xmlNewCDataBlock,xmlNewCDataBlock_db);
extern void xmlNodeSetContent_db(xmlNodePtr, const xmlChar *);
CheckInterfacedef(xmlNodeSetContent,xmlNodeSetContent_db);
extern void xmlFreeProp_db(xmlAttrPtr);
CheckInterfacedef(xmlFreeProp,xmlFreeProp_db);
extern xmlNodePtr xmlNewDocRawNode_db(xmlDocPtr, xmlNsPtr, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlNewDocRawNode,xmlNewDocRawNode_db);
extern xmlAttrPtr xmlNewProp_db(xmlNodePtr, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlNewProp,xmlNewProp_db);
extern int xmlBufferDump_db(FILE *, xmlBufferPtr);
CheckInterfacedef(xmlBufferDump,xmlBufferDump_db);
extern xmlNodePtr xmlNewDocTextLen_db(xmlDocPtr, const xmlChar *, int);
CheckInterfacedef(xmlNewDocTextLen,xmlNewDocTextLen_db);
extern xmlDtdPtr xmlCopyDtd_db(xmlDtdPtr);
CheckInterfacedef(xmlCopyDtd,xmlCopyDtd_db);
extern xmlBufferPtr xmlBufferCreateSize_db(size_t);
CheckInterfacedef(xmlBufferCreateSize,xmlBufferCreateSize_db);
extern void xmlNodeSetBase_db(xmlNodePtr, const xmlChar *);
CheckInterfacedef(xmlNodeSetBase,xmlNodeSetBase_db);
extern xmlNodePtr xmlReplaceNode_db(xmlNodePtr, xmlNodePtr);
CheckInterfacedef(xmlReplaceNode,xmlReplaceNode_db);
extern int xmlSaveFileTo_db(xmlOutputBufferPtr, xmlDocPtr, const char *);
CheckInterfacedef(xmlSaveFileTo,xmlSaveFileTo_db);
extern xmlAttrPtr xmlNewNsPropEatName_db(xmlNodePtr, xmlNsPtr, xmlChar *, const xmlChar *);
CheckInterfacedef(xmlNewNsPropEatName,xmlNewNsPropEatName_db);
extern xmlChar * xmlBuildQName_db(const xmlChar *, const xmlChar *, xmlChar *, int);
CheckInterfacedef(xmlBuildQName,xmlBuildQName_db);
extern int xmlBufferResize_db(xmlBufferPtr, unsigned int);
CheckInterfacedef(xmlBufferResize,xmlBufferResize_db);
extern void xmlNodeAddContentLen_db(xmlNodePtr, const xmlChar *, int);
CheckInterfacedef(xmlNodeAddContentLen,xmlNodeAddContentLen_db);
extern void xmlSetNs_db(xmlNodePtr, xmlNsPtr);
CheckInterfacedef(xmlSetNs,xmlSetNs_db);
extern xmlDtdPtr xmlCreateIntSubset_db(xmlDocPtr, const xmlChar *, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlCreateIntSubset,xmlCreateIntSubset_db);
extern void xmlDocDumpFormatMemory_db(xmlDocPtr, xmlChar * *, int *, int);
CheckInterfacedef(xmlDocDumpFormatMemory,xmlDocDumpFormatMemory_db);
extern int xmlBufferLength_db(const xmlBufferPtr);
CheckInterfacedef(xmlBufferLength,xmlBufferLength_db);
extern void xmlBufferSetAllocationScheme_db(xmlBufferPtr, xmlBufferAllocationScheme);
CheckInterfacedef(xmlBufferSetAllocationScheme,xmlBufferSetAllocationScheme_db);
extern int xmlBufferAdd_db(xmlBufferPtr, const xmlChar *, int);
CheckInterfacedef(xmlBufferAdd,xmlBufferAdd_db);
extern xmlNodePtr xmlNewDocComment_db(xmlDocPtr, const xmlChar *);
CheckInterfacedef(xmlNewDocComment,xmlNewDocComment_db);
extern xmlNsPtr xmlSearchNsByHref_db(xmlDocPtr, xmlNodePtr, const xmlChar *);
CheckInterfacedef(xmlSearchNsByHref,xmlSearchNsByHref_db);
extern int xmlBufferCat_db(xmlBufferPtr, const xmlChar *);
CheckInterfacedef(xmlBufferCat,xmlBufferCat_db);
extern xmlNodePtr xmlNewNode_db(xmlNsPtr, const xmlChar *);
CheckInterfacedef(xmlNewNode,xmlNewNode_db);
extern int xmlNodeIsText_db(xmlNodePtr);
CheckInterfacedef(xmlNodeIsText,xmlNodeIsText_db);
extern xmlNodePtr xmlDocCopyNode_db(const xmlNodePtr, xmlDocPtr, int);
CheckInterfacedef(xmlDocCopyNode,xmlDocCopyNode_db);
extern int xmlDocFormatDump_db(FILE *, xmlDocPtr, int);
CheckInterfacedef(xmlDocFormatDump,xmlDocFormatDump_db);
extern xmlNodePtr xmlCopyNode_db(const xmlNodePtr, int);
CheckInterfacedef(xmlCopyNode,xmlCopyNode_db);
extern int xmlIsBlankNode_db(xmlNodePtr);
CheckInterfacedef(xmlIsBlankNode,xmlIsBlankNode_db);
extern xmlNodePtr xmlAddChild_db(xmlNodePtr, xmlNodePtr);
CheckInterfacedef(xmlAddChild,xmlAddChild_db);
extern xmlAttrPtr xmlCopyPropList_db(xmlNodePtr, xmlAttrPtr);
CheckInterfacedef(xmlCopyPropList,xmlCopyPropList_db);
extern int xmlDocDump_db(FILE *, xmlDocPtr);
CheckInterfacedef(xmlDocDump,xmlDocDump_db);
extern void xmlBufferFree_db(xmlBufferPtr);
CheckInterfacedef(xmlBufferFree,xmlBufferFree_db);
extern void xmlElemDump_db(FILE *, xmlDocPtr, xmlNodePtr);
CheckInterfacedef(xmlElemDump,xmlElemDump_db);
extern xmlAttrPtr xmlCopyProp_db(xmlNodePtr, xmlAttrPtr);
CheckInterfacedef(xmlCopyProp,xmlCopyProp_db);
extern xmlNodePtr xmlAddSibling_db(xmlNodePtr, xmlNodePtr);
CheckInterfacedef(xmlAddSibling,xmlAddSibling_db);
extern void xmlNodeSetSpacePreserve_db(xmlNodePtr, int);
CheckInterfacedef(xmlNodeSetSpacePreserve,xmlNodeSetSpacePreserve_db);
extern int xmlIsXHTML_db(const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlIsXHTML,xmlIsXHTML_db);
extern xmlChar * xmlGetProp_db(xmlNodePtr, const xmlChar *);
CheckInterfacedef(xmlGetProp,xmlGetProp_db);
extern xmlNodePtr xmlGetLastChild_db(xmlNodePtr);
CheckInterfacedef(xmlGetLastChild,xmlGetLastChild_db);
extern int xmlSaveFormatFile_db(const char *, xmlDocPtr, int);
CheckInterfacedef(xmlSaveFormatFile,xmlSaveFormatFile_db);
extern void xmlSetListDoc_db(xmlNodePtr, xmlDocPtr);
CheckInterfacedef(xmlSetListDoc,xmlSetListDoc_db);
extern xmlNodePtr xmlNewDocText_db(xmlDocPtr, const xmlChar *);
CheckInterfacedef(xmlNewDocText,xmlNewDocText_db);
extern void xmlDocDumpMemoryEnc_db(xmlDocPtr, xmlChar * *, int *, const char *);
CheckInterfacedef(xmlDocDumpMemoryEnc,xmlDocDumpMemoryEnc_db);
extern void xmlNodeAddContent_db(xmlNodePtr, const xmlChar *);
CheckInterfacedef(xmlNodeAddContent,xmlNodeAddContent_db);
extern xmlDocPtr xmlCopyDoc_db(xmlDocPtr, int);
CheckInterfacedef(xmlCopyDoc,xmlCopyDoc_db);
extern xmlNodePtr xmlNewChild_db(xmlNodePtr, xmlNsPtr, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlNewChild,xmlNewChild_db);
extern xmlNsPtr xmlCopyNamespace_db(xmlNsPtr);
CheckInterfacedef(xmlCopyNamespace,xmlCopyNamespace_db);
extern xmlChar * xmlGetNodePath_db(xmlNodePtr);
CheckInterfacedef(xmlGetNodePath,xmlGetNodePath_db);
extern void xmlFreeNode_db(xmlNodePtr);
CheckInterfacedef(xmlFreeNode,xmlFreeNode_db);
extern void xmlDocDumpFormatMemoryEnc_db(xmlDocPtr, xmlChar * *, int *, const char *, int);
CheckInterfacedef(xmlDocDumpFormatMemoryEnc,xmlDocDumpFormatMemoryEnc_db);
extern xmlNsPtr xmlSearchNs_db(xmlDocPtr, xmlNodePtr, const xmlChar *);
CheckInterfacedef(xmlSearchNs,xmlSearchNs_db);
extern void xmlNodeSetLang_db(xmlNodePtr, const xmlChar *);
CheckInterfacedef(xmlNodeSetLang,xmlNodeSetLang_db);
extern xmlNodePtr xmlAddChildList_db(xmlNodePtr, xmlNodePtr);
CheckInterfacedef(xmlAddChildList,xmlAddChildList_db);
extern void xmlNodeSetName_db(xmlNodePtr, const xmlChar *);
CheckInterfacedef(xmlNodeSetName,xmlNodeSetName_db);
extern xmlDtdPtr xmlNewDtd_db(xmlDocPtr, const xmlChar *, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlNewDtd,xmlNewDtd_db);
extern xmlAttrPtr xmlSetNsProp_db(xmlNodePtr, xmlNsPtr, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlSetNsProp,xmlSetNsProp_db);
extern xmlNodePtr xmlNewNodeEatName_db(xmlNsPtr, xmlChar *);
CheckInterfacedef(xmlNewNodeEatName,xmlNewNodeEatName_db);
extern xmlAttrPtr xmlHasNsProp_db(xmlNodePtr, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlHasNsProp,xmlHasNsProp_db);
extern void xmlFreeNodeList_db(xmlNodePtr);
CheckInterfacedef(xmlFreeNodeList,xmlFreeNodeList_db);
extern xmlNodePtr xmlAddNextSibling_db(xmlNodePtr, xmlNodePtr);
CheckInterfacedef(xmlAddNextSibling,xmlAddNextSibling_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in libxml2/libxml/tree.h\n\n",pcnt,cnt);
return cnt;
#endif

}
