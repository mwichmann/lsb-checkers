/*
 * Test of libxml2/libxml/valid.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include <libxml/xmlversion.h>
#include <libxml/xmlregexp.h>
#include <libxml/globals.h>

struct _xmlValidState {};
struct _xmlHashTable {};
#include "libxml2/libxml/valid.h"



#ifdef TET_TEST
void libxml2_libxml_valid_h()
{
#else
int libxml2_libxml_valid_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in libxml2/libxml/valid.h\n");
#endif

printf("Checking data structures in libxml2/libxml/valid.h\n");
#if defined __s390x__
CheckTypeSize(xmlValidCtxtPtr,8, 14937, 12, 3.1, NULL, 14936, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlValidCtxtPtr,8, 14937, 11, 3.1, NULL, 14936, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlValidCtxtPtr,4, 14937, 10, 3.1, NULL, 14936, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlValidCtxtPtr,8, 14937, 9, 3.1, NULL, 14936, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlValidCtxtPtr,4, 14937, 6, 3.1, NULL, 14936, NULL)
#elif defined __ia64__
CheckTypeSize(xmlValidCtxtPtr,8, 14937, 3, 3.1, NULL, 14936, NULL)
#elif defined __i386__
CheckTypeSize(xmlValidCtxtPtr,4, 14937, 2, 3.1, NULL, 14936, NULL)
#else
Msg("Find size of xmlValidCtxtPtr (14937)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14936,NULL);\n",architecture,14937,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlAttributeTablePtr,8, 14940, 12, 3.1, NULL, 14939, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlAttributeTablePtr,8, 14940, 11, 3.1, NULL, 14939, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlAttributeTablePtr,4, 14940, 10, 3.1, NULL, 14939, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlAttributeTablePtr,8, 14940, 9, 3.1, NULL, 14939, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlAttributeTablePtr,4, 14940, 6, 3.1, NULL, 14939, NULL)
#elif defined __ia64__
CheckTypeSize(xmlAttributeTablePtr,8, 14940, 3, 3.1, NULL, 14939, NULL)
#elif defined __i386__
CheckTypeSize(xmlAttributeTablePtr,4, 14940, 2, 3.1, NULL, 14939, NULL)
#else
Msg("Find size of xmlAttributeTablePtr (14940)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14939,NULL);\n",architecture,14940,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _xmlElement,112, 14941, 12, , NULL, 0, NULL)
CheckMemberSize(struct _xmlElement,type,4,12,49120)
CheckOffset(struct _xmlElement,type,8,12,49120)
CheckMemberSize(struct _xmlElement,name,8,12,49121)
CheckOffset(struct _xmlElement,name,16,12,49121)
CheckMemberSize(struct _xmlElement,children,8,12,49122)
CheckOffset(struct _xmlElement,children,24,12,49122)
CheckMemberSize(struct _xmlElement,last,8,12,49123)
CheckOffset(struct _xmlElement,last,32,12,49123)
CheckMemberSize(struct _xmlElement,parent,8,12,49124)
CheckOffset(struct _xmlElement,parent,40,12,49124)
CheckMemberSize(struct _xmlElement,next,8,12,49125)
CheckOffset(struct _xmlElement,next,48,12,49125)
CheckMemberSize(struct _xmlElement,prev,8,12,49126)
CheckOffset(struct _xmlElement,prev,56,12,49126)
CheckMemberSize(struct _xmlElement,doc,8,12,49127)
CheckOffset(struct _xmlElement,doc,64,12,49127)
CheckMemberSize(struct _xmlElement,etype,4,12,49133)
CheckOffset(struct _xmlElement,etype,72,12,49133)
CheckMemberSize(struct _xmlElement,content,8,12,49134)
CheckOffset(struct _xmlElement,content,80,12,49134)
CheckMemberSize(struct _xmlElement,attributes,8,12,49155)
CheckOffset(struct _xmlElement,attributes,88,12,49155)
CheckMemberSize(struct _xmlElement,prefix,8,12,49156)
CheckOffset(struct _xmlElement,prefix,96,12,49156)
CheckMemberSize(struct _xmlElement,contModel,8,12,49157)
CheckOffset(struct _xmlElement,contModel,104,12,49157)
#elif defined __x86_64__
CheckTypeSize(struct _xmlElement,112, 14941, 11, , NULL, 0, NULL)
CheckMemberSize(struct _xmlElement,type,4,11,49120)
CheckOffset(struct _xmlElement,type,8,11,49120)
CheckMemberSize(struct _xmlElement,name,8,11,49121)
CheckOffset(struct _xmlElement,name,16,11,49121)
CheckMemberSize(struct _xmlElement,children,8,11,49122)
CheckOffset(struct _xmlElement,children,24,11,49122)
CheckMemberSize(struct _xmlElement,last,8,11,49123)
CheckOffset(struct _xmlElement,last,32,11,49123)
CheckMemberSize(struct _xmlElement,parent,8,11,49124)
CheckOffset(struct _xmlElement,parent,40,11,49124)
CheckMemberSize(struct _xmlElement,next,8,11,49125)
CheckOffset(struct _xmlElement,next,48,11,49125)
CheckMemberSize(struct _xmlElement,prev,8,11,49126)
CheckOffset(struct _xmlElement,prev,56,11,49126)
CheckMemberSize(struct _xmlElement,doc,8,11,49127)
CheckOffset(struct _xmlElement,doc,64,11,49127)
CheckMemberSize(struct _xmlElement,etype,4,11,49133)
CheckOffset(struct _xmlElement,etype,72,11,49133)
CheckMemberSize(struct _xmlElement,content,8,11,49134)
CheckOffset(struct _xmlElement,content,80,11,49134)
CheckMemberSize(struct _xmlElement,attributes,8,11,49155)
CheckOffset(struct _xmlElement,attributes,88,11,49155)
CheckMemberSize(struct _xmlElement,prefix,8,11,49156)
CheckOffset(struct _xmlElement,prefix,96,11,49156)
CheckMemberSize(struct _xmlElement,contModel,8,11,49157)
CheckOffset(struct _xmlElement,contModel,104,11,49157)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _xmlElement,56, 14941, 10, , NULL, 0, NULL)
CheckMemberSize(struct _xmlElement,type,4,10,49120)
CheckOffset(struct _xmlElement,type,4,10,49120)
CheckMemberSize(struct _xmlElement,name,4,10,49121)
CheckOffset(struct _xmlElement,name,8,10,49121)
CheckMemberSize(struct _xmlElement,children,4,10,49122)
CheckOffset(struct _xmlElement,children,12,10,49122)
CheckMemberSize(struct _xmlElement,last,4,10,49123)
CheckOffset(struct _xmlElement,last,16,10,49123)
CheckMemberSize(struct _xmlElement,parent,4,10,49124)
CheckOffset(struct _xmlElement,parent,20,10,49124)
CheckMemberSize(struct _xmlElement,next,4,10,49125)
CheckOffset(struct _xmlElement,next,24,10,49125)
CheckMemberSize(struct _xmlElement,prev,4,10,49126)
CheckOffset(struct _xmlElement,prev,28,10,49126)
CheckMemberSize(struct _xmlElement,doc,4,10,49127)
CheckOffset(struct _xmlElement,doc,32,10,49127)
CheckMemberSize(struct _xmlElement,etype,4,10,49133)
CheckOffset(struct _xmlElement,etype,36,10,49133)
CheckMemberSize(struct _xmlElement,content,4,10,49134)
CheckOffset(struct _xmlElement,content,40,10,49134)
CheckMemberSize(struct _xmlElement,attributes,4,10,49155)
CheckOffset(struct _xmlElement,attributes,44,10,49155)
CheckMemberSize(struct _xmlElement,prefix,4,10,49156)
CheckOffset(struct _xmlElement,prefix,48,10,49156)
CheckMemberSize(struct _xmlElement,contModel,4,10,49157)
CheckOffset(struct _xmlElement,contModel,52,10,49157)
#elif defined __powerpc64__
CheckTypeSize(struct _xmlElement,112, 14941, 9, , NULL, 0, NULL)
CheckMemberSize(struct _xmlElement,type,4,9,49120)
CheckOffset(struct _xmlElement,type,8,9,49120)
CheckMemberSize(struct _xmlElement,name,8,9,49121)
CheckOffset(struct _xmlElement,name,16,9,49121)
CheckMemberSize(struct _xmlElement,children,8,9,49122)
CheckOffset(struct _xmlElement,children,24,9,49122)
CheckMemberSize(struct _xmlElement,last,8,9,49123)
CheckOffset(struct _xmlElement,last,32,9,49123)
CheckMemberSize(struct _xmlElement,parent,8,9,49124)
CheckOffset(struct _xmlElement,parent,40,9,49124)
CheckMemberSize(struct _xmlElement,next,8,9,49125)
CheckOffset(struct _xmlElement,next,48,9,49125)
CheckMemberSize(struct _xmlElement,prev,8,9,49126)
CheckOffset(struct _xmlElement,prev,56,9,49126)
CheckMemberSize(struct _xmlElement,doc,8,9,49127)
CheckOffset(struct _xmlElement,doc,64,9,49127)
CheckMemberSize(struct _xmlElement,etype,4,9,49133)
CheckOffset(struct _xmlElement,etype,72,9,49133)
CheckMemberSize(struct _xmlElement,content,8,9,49134)
CheckOffset(struct _xmlElement,content,80,9,49134)
CheckMemberSize(struct _xmlElement,attributes,8,9,49155)
CheckOffset(struct _xmlElement,attributes,88,9,49155)
CheckMemberSize(struct _xmlElement,prefix,8,9,49156)
CheckOffset(struct _xmlElement,prefix,96,9,49156)
CheckMemberSize(struct _xmlElement,contModel,8,9,49157)
CheckOffset(struct _xmlElement,contModel,104,9,49157)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _xmlElement,56, 14941, 6, , NULL, 0, NULL)
CheckMemberSize(struct _xmlElement,type,4,6,49120)
CheckOffset(struct _xmlElement,type,4,6,49120)
CheckMemberSize(struct _xmlElement,name,4,6,49121)
CheckOffset(struct _xmlElement,name,8,6,49121)
CheckMemberSize(struct _xmlElement,children,4,6,49122)
CheckOffset(struct _xmlElement,children,12,6,49122)
CheckMemberSize(struct _xmlElement,last,4,6,49123)
CheckOffset(struct _xmlElement,last,16,6,49123)
CheckMemberSize(struct _xmlElement,parent,4,6,49124)
CheckOffset(struct _xmlElement,parent,20,6,49124)
CheckMemberSize(struct _xmlElement,next,4,6,49125)
CheckOffset(struct _xmlElement,next,24,6,49125)
CheckMemberSize(struct _xmlElement,prev,4,6,49126)
CheckOffset(struct _xmlElement,prev,28,6,49126)
CheckMemberSize(struct _xmlElement,doc,4,6,49127)
CheckOffset(struct _xmlElement,doc,32,6,49127)
CheckMemberSize(struct _xmlElement,etype,4,6,49133)
CheckOffset(struct _xmlElement,etype,36,6,49133)
CheckMemberSize(struct _xmlElement,content,4,6,49134)
CheckOffset(struct _xmlElement,content,40,6,49134)
CheckMemberSize(struct _xmlElement,attributes,4,6,49155)
CheckOffset(struct _xmlElement,attributes,44,6,49155)
CheckMemberSize(struct _xmlElement,prefix,4,6,49156)
CheckOffset(struct _xmlElement,prefix,48,6,49156)
CheckMemberSize(struct _xmlElement,contModel,4,6,49157)
CheckOffset(struct _xmlElement,contModel,52,6,49157)
#elif defined __ia64__
CheckTypeSize(struct _xmlElement,112, 14941, 3, , NULL, 0, NULL)
CheckMemberSize(struct _xmlElement,type,4,3,49120)
CheckOffset(struct _xmlElement,type,8,3,49120)
CheckMemberSize(struct _xmlElement,name,8,3,49121)
CheckOffset(struct _xmlElement,name,16,3,49121)
CheckMemberSize(struct _xmlElement,children,8,3,49122)
CheckOffset(struct _xmlElement,children,24,3,49122)
CheckMemberSize(struct _xmlElement,last,8,3,49123)
CheckOffset(struct _xmlElement,last,32,3,49123)
CheckMemberSize(struct _xmlElement,parent,8,3,49124)
CheckOffset(struct _xmlElement,parent,40,3,49124)
CheckMemberSize(struct _xmlElement,next,8,3,49125)
CheckOffset(struct _xmlElement,next,48,3,49125)
CheckMemberSize(struct _xmlElement,prev,8,3,49126)
CheckOffset(struct _xmlElement,prev,56,3,49126)
CheckMemberSize(struct _xmlElement,doc,8,3,49127)
CheckOffset(struct _xmlElement,doc,64,3,49127)
CheckMemberSize(struct _xmlElement,etype,4,3,49133)
CheckOffset(struct _xmlElement,etype,72,3,49133)
CheckMemberSize(struct _xmlElement,content,8,3,49134)
CheckOffset(struct _xmlElement,content,80,3,49134)
CheckMemberSize(struct _xmlElement,attributes,8,3,49155)
CheckOffset(struct _xmlElement,attributes,88,3,49155)
CheckMemberSize(struct _xmlElement,prefix,8,3,49156)
CheckOffset(struct _xmlElement,prefix,96,3,49156)
CheckMemberSize(struct _xmlElement,contModel,8,3,49157)
CheckOffset(struct _xmlElement,contModel,104,3,49157)
#elif defined __i386__
CheckTypeSize(struct _xmlElement,56, 14941, 2, , NULL, 0, NULL)
CheckMemberSize(struct _xmlElement,type,4,2,49120)
CheckOffset(struct _xmlElement,type,4,2,49120)
CheckMemberSize(struct _xmlElement,name,4,2,49121)
CheckOffset(struct _xmlElement,name,8,2,49121)
CheckMemberSize(struct _xmlElement,children,4,2,49122)
CheckOffset(struct _xmlElement,children,12,2,49122)
CheckMemberSize(struct _xmlElement,last,4,2,49123)
CheckOffset(struct _xmlElement,last,16,2,49123)
CheckMemberSize(struct _xmlElement,parent,4,2,49124)
CheckOffset(struct _xmlElement,parent,20,2,49124)
CheckMemberSize(struct _xmlElement,next,4,2,49125)
CheckOffset(struct _xmlElement,next,24,2,49125)
CheckMemberSize(struct _xmlElement,prev,4,2,49126)
CheckOffset(struct _xmlElement,prev,28,2,49126)
CheckMemberSize(struct _xmlElement,doc,4,2,49127)
CheckOffset(struct _xmlElement,doc,32,2,49127)
CheckMemberSize(struct _xmlElement,etype,4,2,49133)
CheckOffset(struct _xmlElement,etype,36,2,49133)
CheckMemberSize(struct _xmlElement,content,4,2,49134)
CheckOffset(struct _xmlElement,content,40,2,49134)
CheckMemberSize(struct _xmlElement,attributes,4,2,49155)
CheckOffset(struct _xmlElement,attributes,44,2,49155)
CheckMemberSize(struct _xmlElement,prefix,4,2,49156)
CheckOffset(struct _xmlElement,prefix,48,2,49156)
CheckMemberSize(struct _xmlElement,contModel,4,2,49157)
CheckOffset(struct _xmlElement,contModel,52,2,49157)
#elif 1
CheckTypeSize(struct _xmlElement,0, 14941, 1, , NULL, 0, NULL)
Msg("Missing member data for _xmlElement on All\n");
CheckOffset(struct _xmlElement,_private,0,1,49119)
#endif

#if defined __s390x__
CheckTypeSize(xmlElementTypeVal,4, 14943, 12, 3.1, NULL, 14942, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlElementTypeVal,4, 14943, 11, 3.1, NULL, 14942, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlElementTypeVal,4, 14943, 10, 3.1, NULL, 14942, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlElementTypeVal,4, 14943, 9, 3.1, NULL, 14942, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlElementTypeVal,4, 14943, 6, 3.1, NULL, 14942, NULL)
#elif defined __ia64__
CheckTypeSize(xmlElementTypeVal,4, 14943, 3, 3.1, NULL, 14942, NULL)
#elif defined __i386__
CheckTypeSize(xmlElementTypeVal,4, 14943, 2, 3.1, NULL, 14942, NULL)
#else
Msg("Find size of xmlElementTypeVal (14943)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14942,NULL);\n",architecture,14943,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _xmlAttribute,120, 14944, 12, , NULL, 0, NULL)
CheckMemberSize(struct _xmlAttribute,type,4,12,49136)
CheckOffset(struct _xmlAttribute,type,8,12,49136)
CheckMemberSize(struct _xmlAttribute,name,8,12,49137)
CheckOffset(struct _xmlAttribute,name,16,12,49137)
CheckMemberSize(struct _xmlAttribute,children,8,12,49138)
CheckOffset(struct _xmlAttribute,children,24,12,49138)
CheckMemberSize(struct _xmlAttribute,last,8,12,49139)
CheckOffset(struct _xmlAttribute,last,32,12,49139)
CheckMemberSize(struct _xmlAttribute,parent,8,12,49140)
CheckOffset(struct _xmlAttribute,parent,40,12,49140)
CheckMemberSize(struct _xmlAttribute,next,8,12,49141)
CheckOffset(struct _xmlAttribute,next,48,12,49141)
CheckMemberSize(struct _xmlAttribute,prev,8,12,49142)
CheckOffset(struct _xmlAttribute,prev,56,12,49142)
CheckMemberSize(struct _xmlAttribute,doc,8,12,49143)
CheckOffset(struct _xmlAttribute,doc,64,12,49143)
CheckMemberSize(struct _xmlAttribute,nexth,8,12,49144)
CheckOffset(struct _xmlAttribute,nexth,72,12,49144)
CheckMemberSize(struct _xmlAttribute,atype,4,12,49145)
CheckOffset(struct _xmlAttribute,atype,80,12,49145)
CheckMemberSize(struct _xmlAttribute,def,4,12,49150)
CheckOffset(struct _xmlAttribute,def,84,12,49150)
CheckMemberSize(struct _xmlAttribute,defaultValue,8,12,49151)
CheckOffset(struct _xmlAttribute,defaultValue,88,12,49151)
CheckMemberSize(struct _xmlAttribute,tree,8,12,49152)
CheckOffset(struct _xmlAttribute,tree,96,12,49152)
CheckMemberSize(struct _xmlAttribute,prefix,8,12,49153)
CheckOffset(struct _xmlAttribute,prefix,104,12,49153)
CheckMemberSize(struct _xmlAttribute,elem,8,12,49154)
CheckOffset(struct _xmlAttribute,elem,112,12,49154)
#elif defined __x86_64__
CheckTypeSize(struct _xmlAttribute,120, 14944, 11, , NULL, 0, NULL)
CheckMemberSize(struct _xmlAttribute,type,4,11,49136)
CheckOffset(struct _xmlAttribute,type,8,11,49136)
CheckMemberSize(struct _xmlAttribute,name,8,11,49137)
CheckOffset(struct _xmlAttribute,name,16,11,49137)
CheckMemberSize(struct _xmlAttribute,children,8,11,49138)
CheckOffset(struct _xmlAttribute,children,24,11,49138)
CheckMemberSize(struct _xmlAttribute,last,8,11,49139)
CheckOffset(struct _xmlAttribute,last,32,11,49139)
CheckMemberSize(struct _xmlAttribute,parent,8,11,49140)
CheckOffset(struct _xmlAttribute,parent,40,11,49140)
CheckMemberSize(struct _xmlAttribute,next,8,11,49141)
CheckOffset(struct _xmlAttribute,next,48,11,49141)
CheckMemberSize(struct _xmlAttribute,prev,8,11,49142)
CheckOffset(struct _xmlAttribute,prev,56,11,49142)
CheckMemberSize(struct _xmlAttribute,doc,8,11,49143)
CheckOffset(struct _xmlAttribute,doc,64,11,49143)
CheckMemberSize(struct _xmlAttribute,nexth,8,11,49144)
CheckOffset(struct _xmlAttribute,nexth,72,11,49144)
CheckMemberSize(struct _xmlAttribute,atype,4,11,49145)
CheckOffset(struct _xmlAttribute,atype,80,11,49145)
CheckMemberSize(struct _xmlAttribute,def,4,11,49150)
CheckOffset(struct _xmlAttribute,def,84,11,49150)
CheckMemberSize(struct _xmlAttribute,defaultValue,8,11,49151)
CheckOffset(struct _xmlAttribute,defaultValue,88,11,49151)
CheckMemberSize(struct _xmlAttribute,tree,8,11,49152)
CheckOffset(struct _xmlAttribute,tree,96,11,49152)
CheckMemberSize(struct _xmlAttribute,prefix,8,11,49153)
CheckOffset(struct _xmlAttribute,prefix,104,11,49153)
CheckMemberSize(struct _xmlAttribute,elem,8,11,49154)
CheckOffset(struct _xmlAttribute,elem,112,11,49154)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _xmlAttribute,64, 14944, 10, , NULL, 0, NULL)
CheckMemberSize(struct _xmlAttribute,type,4,10,49136)
CheckOffset(struct _xmlAttribute,type,4,10,49136)
CheckMemberSize(struct _xmlAttribute,name,4,10,49137)
CheckOffset(struct _xmlAttribute,name,8,10,49137)
CheckMemberSize(struct _xmlAttribute,children,4,10,49138)
CheckOffset(struct _xmlAttribute,children,12,10,49138)
CheckMemberSize(struct _xmlAttribute,last,4,10,49139)
CheckOffset(struct _xmlAttribute,last,16,10,49139)
CheckMemberSize(struct _xmlAttribute,parent,4,10,49140)
CheckOffset(struct _xmlAttribute,parent,20,10,49140)
CheckMemberSize(struct _xmlAttribute,next,4,10,49141)
CheckOffset(struct _xmlAttribute,next,24,10,49141)
CheckMemberSize(struct _xmlAttribute,prev,4,10,49142)
CheckOffset(struct _xmlAttribute,prev,28,10,49142)
CheckMemberSize(struct _xmlAttribute,doc,4,10,49143)
CheckOffset(struct _xmlAttribute,doc,32,10,49143)
CheckMemberSize(struct _xmlAttribute,nexth,4,10,49144)
CheckOffset(struct _xmlAttribute,nexth,36,10,49144)
CheckMemberSize(struct _xmlAttribute,atype,4,10,49145)
CheckOffset(struct _xmlAttribute,atype,40,10,49145)
CheckMemberSize(struct _xmlAttribute,def,4,10,49150)
CheckOffset(struct _xmlAttribute,def,44,10,49150)
CheckMemberSize(struct _xmlAttribute,defaultValue,4,10,49151)
CheckOffset(struct _xmlAttribute,defaultValue,48,10,49151)
CheckMemberSize(struct _xmlAttribute,tree,4,10,49152)
CheckOffset(struct _xmlAttribute,tree,52,10,49152)
CheckMemberSize(struct _xmlAttribute,prefix,4,10,49153)
CheckOffset(struct _xmlAttribute,prefix,56,10,49153)
CheckMemberSize(struct _xmlAttribute,elem,4,10,49154)
CheckOffset(struct _xmlAttribute,elem,60,10,49154)
#elif defined __powerpc64__
CheckTypeSize(struct _xmlAttribute,120, 14944, 9, , NULL, 0, NULL)
CheckMemberSize(struct _xmlAttribute,type,4,9,49136)
CheckOffset(struct _xmlAttribute,type,8,9,49136)
CheckMemberSize(struct _xmlAttribute,name,8,9,49137)
CheckOffset(struct _xmlAttribute,name,16,9,49137)
CheckMemberSize(struct _xmlAttribute,children,8,9,49138)
CheckOffset(struct _xmlAttribute,children,24,9,49138)
CheckMemberSize(struct _xmlAttribute,last,8,9,49139)
CheckOffset(struct _xmlAttribute,last,32,9,49139)
CheckMemberSize(struct _xmlAttribute,parent,8,9,49140)
CheckOffset(struct _xmlAttribute,parent,40,9,49140)
CheckMemberSize(struct _xmlAttribute,next,8,9,49141)
CheckOffset(struct _xmlAttribute,next,48,9,49141)
CheckMemberSize(struct _xmlAttribute,prev,8,9,49142)
CheckOffset(struct _xmlAttribute,prev,56,9,49142)
CheckMemberSize(struct _xmlAttribute,doc,8,9,49143)
CheckOffset(struct _xmlAttribute,doc,64,9,49143)
CheckMemberSize(struct _xmlAttribute,nexth,8,9,49144)
CheckOffset(struct _xmlAttribute,nexth,72,9,49144)
CheckMemberSize(struct _xmlAttribute,atype,4,9,49145)
CheckOffset(struct _xmlAttribute,atype,80,9,49145)
CheckMemberSize(struct _xmlAttribute,def,4,9,49150)
CheckOffset(struct _xmlAttribute,def,84,9,49150)
CheckMemberSize(struct _xmlAttribute,defaultValue,8,9,49151)
CheckOffset(struct _xmlAttribute,defaultValue,88,9,49151)
CheckMemberSize(struct _xmlAttribute,tree,8,9,49152)
CheckOffset(struct _xmlAttribute,tree,96,9,49152)
CheckMemberSize(struct _xmlAttribute,prefix,8,9,49153)
CheckOffset(struct _xmlAttribute,prefix,104,9,49153)
CheckMemberSize(struct _xmlAttribute,elem,8,9,49154)
CheckOffset(struct _xmlAttribute,elem,112,9,49154)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _xmlAttribute,64, 14944, 6, , NULL, 0, NULL)
CheckMemberSize(struct _xmlAttribute,type,4,6,49136)
CheckOffset(struct _xmlAttribute,type,4,6,49136)
CheckMemberSize(struct _xmlAttribute,name,4,6,49137)
CheckOffset(struct _xmlAttribute,name,8,6,49137)
CheckMemberSize(struct _xmlAttribute,children,4,6,49138)
CheckOffset(struct _xmlAttribute,children,12,6,49138)
CheckMemberSize(struct _xmlAttribute,last,4,6,49139)
CheckOffset(struct _xmlAttribute,last,16,6,49139)
CheckMemberSize(struct _xmlAttribute,parent,4,6,49140)
CheckOffset(struct _xmlAttribute,parent,20,6,49140)
CheckMemberSize(struct _xmlAttribute,next,4,6,49141)
CheckOffset(struct _xmlAttribute,next,24,6,49141)
CheckMemberSize(struct _xmlAttribute,prev,4,6,49142)
CheckOffset(struct _xmlAttribute,prev,28,6,49142)
CheckMemberSize(struct _xmlAttribute,doc,4,6,49143)
CheckOffset(struct _xmlAttribute,doc,32,6,49143)
CheckMemberSize(struct _xmlAttribute,nexth,4,6,49144)
CheckOffset(struct _xmlAttribute,nexth,36,6,49144)
CheckMemberSize(struct _xmlAttribute,atype,4,6,49145)
CheckOffset(struct _xmlAttribute,atype,40,6,49145)
CheckMemberSize(struct _xmlAttribute,def,4,6,49150)
CheckOffset(struct _xmlAttribute,def,44,6,49150)
CheckMemberSize(struct _xmlAttribute,defaultValue,4,6,49151)
CheckOffset(struct _xmlAttribute,defaultValue,48,6,49151)
CheckMemberSize(struct _xmlAttribute,tree,4,6,49152)
CheckOffset(struct _xmlAttribute,tree,52,6,49152)
CheckMemberSize(struct _xmlAttribute,prefix,4,6,49153)
CheckOffset(struct _xmlAttribute,prefix,56,6,49153)
CheckMemberSize(struct _xmlAttribute,elem,4,6,49154)
CheckOffset(struct _xmlAttribute,elem,60,6,49154)
#elif defined __ia64__
CheckTypeSize(struct _xmlAttribute,120, 14944, 3, , NULL, 0, NULL)
CheckMemberSize(struct _xmlAttribute,type,4,3,49136)
CheckOffset(struct _xmlAttribute,type,8,3,49136)
CheckMemberSize(struct _xmlAttribute,name,8,3,49137)
CheckOffset(struct _xmlAttribute,name,16,3,49137)
CheckMemberSize(struct _xmlAttribute,children,8,3,49138)
CheckOffset(struct _xmlAttribute,children,24,3,49138)
CheckMemberSize(struct _xmlAttribute,last,8,3,49139)
CheckOffset(struct _xmlAttribute,last,32,3,49139)
CheckMemberSize(struct _xmlAttribute,parent,8,3,49140)
CheckOffset(struct _xmlAttribute,parent,40,3,49140)
CheckMemberSize(struct _xmlAttribute,next,8,3,49141)
CheckOffset(struct _xmlAttribute,next,48,3,49141)
CheckMemberSize(struct _xmlAttribute,prev,8,3,49142)
CheckOffset(struct _xmlAttribute,prev,56,3,49142)
CheckMemberSize(struct _xmlAttribute,doc,8,3,49143)
CheckOffset(struct _xmlAttribute,doc,64,3,49143)
CheckMemberSize(struct _xmlAttribute,nexth,8,3,49144)
CheckOffset(struct _xmlAttribute,nexth,72,3,49144)
CheckMemberSize(struct _xmlAttribute,atype,4,3,49145)
CheckOffset(struct _xmlAttribute,atype,80,3,49145)
CheckMemberSize(struct _xmlAttribute,def,4,3,49150)
CheckOffset(struct _xmlAttribute,def,84,3,49150)
CheckMemberSize(struct _xmlAttribute,defaultValue,8,3,49151)
CheckOffset(struct _xmlAttribute,defaultValue,88,3,49151)
CheckMemberSize(struct _xmlAttribute,tree,8,3,49152)
CheckOffset(struct _xmlAttribute,tree,96,3,49152)
CheckMemberSize(struct _xmlAttribute,prefix,8,3,49153)
CheckOffset(struct _xmlAttribute,prefix,104,3,49153)
CheckMemberSize(struct _xmlAttribute,elem,8,3,49154)
CheckOffset(struct _xmlAttribute,elem,112,3,49154)
#elif defined __i386__
CheckTypeSize(struct _xmlAttribute,64, 14944, 2, , NULL, 0, NULL)
CheckMemberSize(struct _xmlAttribute,type,4,2,49136)
CheckOffset(struct _xmlAttribute,type,4,2,49136)
CheckMemberSize(struct _xmlAttribute,name,4,2,49137)
CheckOffset(struct _xmlAttribute,name,8,2,49137)
CheckMemberSize(struct _xmlAttribute,children,4,2,49138)
CheckOffset(struct _xmlAttribute,children,12,2,49138)
CheckMemberSize(struct _xmlAttribute,last,4,2,49139)
CheckOffset(struct _xmlAttribute,last,16,2,49139)
CheckMemberSize(struct _xmlAttribute,parent,4,2,49140)
CheckOffset(struct _xmlAttribute,parent,20,2,49140)
CheckMemberSize(struct _xmlAttribute,next,4,2,49141)
CheckOffset(struct _xmlAttribute,next,24,2,49141)
CheckMemberSize(struct _xmlAttribute,prev,4,2,49142)
CheckOffset(struct _xmlAttribute,prev,28,2,49142)
CheckMemberSize(struct _xmlAttribute,doc,4,2,49143)
CheckOffset(struct _xmlAttribute,doc,32,2,49143)
CheckMemberSize(struct _xmlAttribute,nexth,4,2,49144)
CheckOffset(struct _xmlAttribute,nexth,36,2,49144)
CheckMemberSize(struct _xmlAttribute,atype,4,2,49145)
CheckOffset(struct _xmlAttribute,atype,40,2,49145)
CheckMemberSize(struct _xmlAttribute,def,4,2,49150)
CheckOffset(struct _xmlAttribute,def,44,2,49150)
CheckMemberSize(struct _xmlAttribute,defaultValue,4,2,49151)
CheckOffset(struct _xmlAttribute,defaultValue,48,2,49151)
CheckMemberSize(struct _xmlAttribute,tree,4,2,49152)
CheckOffset(struct _xmlAttribute,tree,52,2,49152)
CheckMemberSize(struct _xmlAttribute,prefix,4,2,49153)
CheckOffset(struct _xmlAttribute,prefix,56,2,49153)
CheckMemberSize(struct _xmlAttribute,elem,4,2,49154)
CheckOffset(struct _xmlAttribute,elem,60,2,49154)
#elif 1
CheckTypeSize(struct _xmlAttribute,0, 14944, 1, , NULL, 0, NULL)
Msg("Missing member data for _xmlAttribute on All\n");
CheckOffset(struct _xmlAttribute,_private,0,1,49135)
#endif

#if defined __s390x__
CheckTypeSize(xmlAttributeDefault,4, 14947, 12, 3.1, NULL, 14946, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlAttributeDefault,4, 14947, 11, 3.1, NULL, 14946, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlAttributeDefault,4, 14947, 10, 3.1, NULL, 14946, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlAttributeDefault,4, 14947, 9, 3.1, NULL, 14946, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlAttributeDefault,4, 14947, 6, 3.1, NULL, 14946, NULL)
#elif defined __ia64__
CheckTypeSize(xmlAttributeDefault,4, 14947, 3, 3.1, NULL, 14946, NULL)
#elif defined __i386__
CheckTypeSize(xmlAttributeDefault,4, 14947, 2, 3.1, NULL, 14946, NULL)
#else
Msg("Find size of xmlAttributeDefault (14947)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14946,NULL);\n",architecture,14947,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlAttribute,120, 14948, 12, 3.1, NULL, 14944, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlAttribute,120, 14948, 11, 3.1, NULL, 14944, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlAttribute,64, 14948, 10, 3.1, NULL, 14944, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlAttribute,120, 14948, 9, 3.1, NULL, 14944, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlAttribute,64, 14948, 6, 3.1, NULL, 14944, NULL)
#elif defined __ia64__
CheckTypeSize(xmlAttribute,120, 14948, 3, 3.1, NULL, 14944, NULL)
#elif defined __i386__
CheckTypeSize(xmlAttribute,64, 14948, 2, 3.1, NULL, 14944, NULL)
#else
Msg("Find size of xmlAttribute (14948)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14944,NULL);\n",architecture,14948,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlAttributePtr,8, 14950, 12, 3.1, NULL, 14949, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlAttributePtr,8, 14950, 11, 3.1, NULL, 14949, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlAttributePtr,4, 14950, 10, 3.1, NULL, 14949, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlAttributePtr,8, 14950, 9, 3.1, NULL, 14949, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlAttributePtr,4, 14950, 6, 3.1, NULL, 14949, NULL)
#elif defined __ia64__
CheckTypeSize(xmlAttributePtr,8, 14950, 3, 3.1, NULL, 14949, NULL)
#elif defined __i386__
CheckTypeSize(xmlAttributePtr,4, 14950, 2, 3.1, NULL, 14949, NULL)
#else
Msg("Find size of xmlAttributePtr (14950)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14949,NULL);\n",architecture,14950,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlElement,112, 14951, 12, 3.1, NULL, 14941, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlElement,112, 14951, 11, 3.1, NULL, 14941, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlElement,56, 14951, 10, 3.1, NULL, 14941, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlElement,112, 14951, 9, 3.1, NULL, 14941, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlElement,56, 14951, 6, 3.1, NULL, 14941, NULL)
#elif defined __ia64__
CheckTypeSize(xmlElement,112, 14951, 3, 3.1, NULL, 14941, NULL)
#elif defined __i386__
CheckTypeSize(xmlElement,56, 14951, 2, 3.1, NULL, 14941, NULL)
#else
Msg("Find size of xmlElement (14951)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14941,NULL);\n",architecture,14951,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlElementPtr,8, 14953, 12, 3.1, NULL, 14952, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlElementPtr,8, 14953, 11, 3.1, NULL, 14952, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlElementPtr,4, 14953, 10, 3.1, NULL, 14952, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlElementPtr,8, 14953, 9, 3.1, NULL, 14952, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlElementPtr,4, 14953, 6, 3.1, NULL, 14952, NULL)
#elif defined __ia64__
CheckTypeSize(xmlElementPtr,8, 14953, 3, 3.1, NULL, 14952, NULL)
#elif defined __i386__
CheckTypeSize(xmlElementPtr,4, 14953, 2, 3.1, NULL, 14952, NULL)
#else
Msg("Find size of xmlElementPtr (14953)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14952,NULL);\n",architecture,14953,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlNotationTablePtr,8, 14956, 12, 3.1, NULL, 14955, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlNotationTablePtr,8, 14956, 11, 3.1, NULL, 14955, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlNotationTablePtr,4, 14956, 10, 3.1, NULL, 14955, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlNotationTablePtr,8, 14956, 9, 3.1, NULL, 14955, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlNotationTablePtr,4, 14956, 6, 3.1, NULL, 14955, NULL)
#elif defined __ia64__
CheckTypeSize(xmlNotationTablePtr,8, 14956, 3, 3.1, NULL, 14955, NULL)
#elif defined __i386__
CheckTypeSize(xmlNotationTablePtr,4, 14956, 2, 3.1, NULL, 14955, NULL)
#else
Msg("Find size of xmlNotationTablePtr (14956)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14955,NULL);\n",architecture,14956,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _xmlNotation,24, 14957, 12, , NULL, 0, NULL)
CheckMemberSize(struct _xmlNotation,PublicID,8,12,49159)
CheckOffset(struct _xmlNotation,PublicID,8,12,49159)
CheckMemberSize(struct _xmlNotation,SystemID,8,12,49160)
CheckOffset(struct _xmlNotation,SystemID,16,12,49160)
#elif defined __x86_64__
CheckTypeSize(struct _xmlNotation,24, 14957, 11, , NULL, 0, NULL)
CheckMemberSize(struct _xmlNotation,PublicID,8,11,49159)
CheckOffset(struct _xmlNotation,PublicID,8,11,49159)
CheckMemberSize(struct _xmlNotation,SystemID,8,11,49160)
CheckOffset(struct _xmlNotation,SystemID,16,11,49160)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _xmlNotation,12, 14957, 10, , NULL, 0, NULL)
CheckMemberSize(struct _xmlNotation,PublicID,4,10,49159)
CheckOffset(struct _xmlNotation,PublicID,4,10,49159)
CheckMemberSize(struct _xmlNotation,SystemID,4,10,49160)
CheckOffset(struct _xmlNotation,SystemID,8,10,49160)
#elif defined __powerpc64__
CheckTypeSize(struct _xmlNotation,24, 14957, 9, , NULL, 0, NULL)
CheckMemberSize(struct _xmlNotation,PublicID,8,9,49159)
CheckOffset(struct _xmlNotation,PublicID,8,9,49159)
CheckMemberSize(struct _xmlNotation,SystemID,8,9,49160)
CheckOffset(struct _xmlNotation,SystemID,16,9,49160)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _xmlNotation,12, 14957, 6, , NULL, 0, NULL)
CheckMemberSize(struct _xmlNotation,PublicID,4,6,49159)
CheckOffset(struct _xmlNotation,PublicID,4,6,49159)
CheckMemberSize(struct _xmlNotation,SystemID,4,6,49160)
CheckOffset(struct _xmlNotation,SystemID,8,6,49160)
#elif defined __ia64__
CheckTypeSize(struct _xmlNotation,24, 14957, 3, , NULL, 0, NULL)
CheckMemberSize(struct _xmlNotation,PublicID,8,3,49159)
CheckOffset(struct _xmlNotation,PublicID,8,3,49159)
CheckMemberSize(struct _xmlNotation,SystemID,8,3,49160)
CheckOffset(struct _xmlNotation,SystemID,16,3,49160)
#elif defined __i386__
CheckTypeSize(struct _xmlNotation,12, 14957, 2, , NULL, 0, NULL)
CheckMemberSize(struct _xmlNotation,PublicID,4,2,49159)
CheckOffset(struct _xmlNotation,PublicID,4,2,49159)
CheckMemberSize(struct _xmlNotation,SystemID,4,2,49160)
CheckOffset(struct _xmlNotation,SystemID,8,2,49160)
#elif 1
CheckTypeSize(struct _xmlNotation,0, 14957, 1, , NULL, 0, NULL)
Msg("Missing member data for _xmlNotation on All\n");
CheckOffset(struct _xmlNotation,name,0,1,49158)
#endif

#if defined __s390x__
CheckTypeSize(xmlNotation,24, 14958, 12, 3.1, NULL, 14957, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlNotation,24, 14958, 11, 3.1, NULL, 14957, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlNotation,12, 14958, 10, 3.1, NULL, 14957, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlNotation,24, 14958, 9, 3.1, NULL, 14957, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlNotation,12, 14958, 6, 3.1, NULL, 14957, NULL)
#elif defined __ia64__
CheckTypeSize(xmlNotation,24, 14958, 3, 3.1, NULL, 14957, NULL)
#elif defined __i386__
CheckTypeSize(xmlNotation,12, 14958, 2, 3.1, NULL, 14957, NULL)
#else
Msg("Find size of xmlNotation (14958)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14957,NULL);\n",architecture,14958,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlNotationPtr,8, 14960, 12, 3.1, NULL, 14959, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlNotationPtr,8, 14960, 11, 3.1, NULL, 14959, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlNotationPtr,4, 14960, 10, 3.1, NULL, 14959, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlNotationPtr,8, 14960, 9, 3.1, NULL, 14959, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlNotationPtr,4, 14960, 6, 3.1, NULL, 14959, NULL)
#elif defined __ia64__
CheckTypeSize(xmlNotationPtr,8, 14960, 3, 3.1, NULL, 14959, NULL)
#elif defined __i386__
CheckTypeSize(xmlNotationPtr,4, 14960, 2, 3.1, NULL, 14959, NULL)
#else
Msg("Find size of xmlNotationPtr (14960)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14959,NULL);\n",architecture,14960,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _xmlID,48, 14961, 12, , NULL, 0, NULL)
CheckMemberSize(struct _xmlID,value,8,12,49162)
CheckOffset(struct _xmlID,value,8,12,49162)
CheckMemberSize(struct _xmlID,attr,8,12,49163)
CheckOffset(struct _xmlID,attr,16,12,49163)
CheckMemberSize(struct _xmlID,name,8,12,49164)
CheckOffset(struct _xmlID,name,24,12,49164)
CheckMemberSize(struct _xmlID,lineno,4,12,49165)
CheckOffset(struct _xmlID,lineno,32,12,49165)
CheckMemberSize(struct _xmlID,doc,8,12,49166)
CheckOffset(struct _xmlID,doc,40,12,49166)
#elif defined __x86_64__
CheckTypeSize(struct _xmlID,48, 14961, 11, , NULL, 0, NULL)
CheckMemberSize(struct _xmlID,value,8,11,49162)
CheckOffset(struct _xmlID,value,8,11,49162)
CheckMemberSize(struct _xmlID,attr,8,11,49163)
CheckOffset(struct _xmlID,attr,16,11,49163)
CheckMemberSize(struct _xmlID,name,8,11,49164)
CheckOffset(struct _xmlID,name,24,11,49164)
CheckMemberSize(struct _xmlID,lineno,4,11,49165)
CheckOffset(struct _xmlID,lineno,32,11,49165)
CheckMemberSize(struct _xmlID,doc,8,11,49166)
CheckOffset(struct _xmlID,doc,40,11,49166)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _xmlID,24, 14961, 10, , NULL, 0, NULL)
CheckMemberSize(struct _xmlID,value,4,10,49162)
CheckOffset(struct _xmlID,value,4,10,49162)
CheckMemberSize(struct _xmlID,attr,4,10,49163)
CheckOffset(struct _xmlID,attr,8,10,49163)
CheckMemberSize(struct _xmlID,name,4,10,49164)
CheckOffset(struct _xmlID,name,12,10,49164)
CheckMemberSize(struct _xmlID,lineno,4,10,49165)
CheckOffset(struct _xmlID,lineno,16,10,49165)
CheckMemberSize(struct _xmlID,doc,4,10,49166)
CheckOffset(struct _xmlID,doc,20,10,49166)
#elif defined __powerpc64__
CheckTypeSize(struct _xmlID,48, 14961, 9, , NULL, 0, NULL)
CheckMemberSize(struct _xmlID,value,8,9,49162)
CheckOffset(struct _xmlID,value,8,9,49162)
CheckMemberSize(struct _xmlID,attr,8,9,49163)
CheckOffset(struct _xmlID,attr,16,9,49163)
CheckMemberSize(struct _xmlID,name,8,9,49164)
CheckOffset(struct _xmlID,name,24,9,49164)
CheckMemberSize(struct _xmlID,lineno,4,9,49165)
CheckOffset(struct _xmlID,lineno,32,9,49165)
CheckMemberSize(struct _xmlID,doc,8,9,49166)
CheckOffset(struct _xmlID,doc,40,9,49166)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _xmlID,24, 14961, 6, , NULL, 0, NULL)
CheckMemberSize(struct _xmlID,value,4,6,49162)
CheckOffset(struct _xmlID,value,4,6,49162)
CheckMemberSize(struct _xmlID,attr,4,6,49163)
CheckOffset(struct _xmlID,attr,8,6,49163)
CheckMemberSize(struct _xmlID,name,4,6,49164)
CheckOffset(struct _xmlID,name,12,6,49164)
CheckMemberSize(struct _xmlID,lineno,4,6,49165)
CheckOffset(struct _xmlID,lineno,16,6,49165)
CheckMemberSize(struct _xmlID,doc,4,6,49166)
CheckOffset(struct _xmlID,doc,20,6,49166)
#elif defined __ia64__
CheckTypeSize(struct _xmlID,48, 14961, 3, , NULL, 0, NULL)
CheckMemberSize(struct _xmlID,value,8,3,49162)
CheckOffset(struct _xmlID,value,8,3,49162)
CheckMemberSize(struct _xmlID,attr,8,3,49163)
CheckOffset(struct _xmlID,attr,16,3,49163)
CheckMemberSize(struct _xmlID,name,8,3,49164)
CheckOffset(struct _xmlID,name,24,3,49164)
CheckMemberSize(struct _xmlID,lineno,4,3,49165)
CheckOffset(struct _xmlID,lineno,32,3,49165)
CheckMemberSize(struct _xmlID,doc,8,3,49166)
CheckOffset(struct _xmlID,doc,40,3,49166)
#elif defined __i386__
CheckTypeSize(struct _xmlID,24, 14961, 2, , NULL, 0, NULL)
CheckMemberSize(struct _xmlID,value,4,2,49162)
CheckOffset(struct _xmlID,value,4,2,49162)
CheckMemberSize(struct _xmlID,attr,4,2,49163)
CheckOffset(struct _xmlID,attr,8,2,49163)
CheckMemberSize(struct _xmlID,name,4,2,49164)
CheckOffset(struct _xmlID,name,12,2,49164)
CheckMemberSize(struct _xmlID,lineno,4,2,49165)
CheckOffset(struct _xmlID,lineno,16,2,49165)
CheckMemberSize(struct _xmlID,doc,4,2,49166)
CheckOffset(struct _xmlID,doc,20,2,49166)
#elif 1
CheckTypeSize(struct _xmlID,0, 14961, 1, , NULL, 0, NULL)
Msg("Missing member data for _xmlID on All\n");
CheckOffset(struct _xmlID,next,0,1,49161)
#endif

#if defined __s390x__
CheckTypeSize(xmlID,48, 14963, 12, 3.1, NULL, 14961, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlID,48, 14963, 11, 3.1, NULL, 14961, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlID,24, 14963, 10, 3.1, NULL, 14961, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlID,48, 14963, 9, 3.1, NULL, 14961, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlID,24, 14963, 6, 3.1, NULL, 14961, NULL)
#elif defined __ia64__
CheckTypeSize(xmlID,48, 14963, 3, 3.1, NULL, 14961, NULL)
#elif defined __i386__
CheckTypeSize(xmlID,24, 14963, 2, 3.1, NULL, 14961, NULL)
#else
Msg("Find size of xmlID (14963)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14961,NULL);\n",architecture,14963,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlIDPtr,8, 14965, 12, 3.1, NULL, 14964, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlIDPtr,8, 14965, 11, 3.1, NULL, 14964, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlIDPtr,4, 14965, 10, 3.1, NULL, 14964, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlIDPtr,8, 14965, 9, 3.1, NULL, 14964, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlIDPtr,4, 14965, 6, 3.1, NULL, 14964, NULL)
#elif defined __ia64__
CheckTypeSize(xmlIDPtr,8, 14965, 3, 3.1, NULL, 14964, NULL)
#elif defined __i386__
CheckTypeSize(xmlIDPtr,4, 14965, 2, 3.1, NULL, 14964, NULL)
#else
Msg("Find size of xmlIDPtr (14965)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14964,NULL);\n",architecture,14965,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _xmlRef,40, 14966, 12, , NULL, 0, NULL)
CheckMemberSize(struct _xmlRef,value,8,12,49168)
CheckOffset(struct _xmlRef,value,8,12,49168)
CheckMemberSize(struct _xmlRef,attr,8,12,49169)
CheckOffset(struct _xmlRef,attr,16,12,49169)
CheckMemberSize(struct _xmlRef,name,8,12,49170)
CheckOffset(struct _xmlRef,name,24,12,49170)
CheckMemberSize(struct _xmlRef,lineno,4,12,49171)
CheckOffset(struct _xmlRef,lineno,32,12,49171)
#elif defined __x86_64__
CheckTypeSize(struct _xmlRef,40, 14966, 11, , NULL, 0, NULL)
CheckMemberSize(struct _xmlRef,value,8,11,49168)
CheckOffset(struct _xmlRef,value,8,11,49168)
CheckMemberSize(struct _xmlRef,attr,8,11,49169)
CheckOffset(struct _xmlRef,attr,16,11,49169)
CheckMemberSize(struct _xmlRef,name,8,11,49170)
CheckOffset(struct _xmlRef,name,24,11,49170)
CheckMemberSize(struct _xmlRef,lineno,4,11,49171)
CheckOffset(struct _xmlRef,lineno,32,11,49171)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _xmlRef,20, 14966, 10, , NULL, 0, NULL)
CheckMemberSize(struct _xmlRef,value,4,10,49168)
CheckOffset(struct _xmlRef,value,4,10,49168)
CheckMemberSize(struct _xmlRef,attr,4,10,49169)
CheckOffset(struct _xmlRef,attr,8,10,49169)
CheckMemberSize(struct _xmlRef,name,4,10,49170)
CheckOffset(struct _xmlRef,name,12,10,49170)
CheckMemberSize(struct _xmlRef,lineno,4,10,49171)
CheckOffset(struct _xmlRef,lineno,16,10,49171)
#elif defined __powerpc64__
CheckTypeSize(struct _xmlRef,40, 14966, 9, , NULL, 0, NULL)
CheckMemberSize(struct _xmlRef,value,8,9,49168)
CheckOffset(struct _xmlRef,value,8,9,49168)
CheckMemberSize(struct _xmlRef,attr,8,9,49169)
CheckOffset(struct _xmlRef,attr,16,9,49169)
CheckMemberSize(struct _xmlRef,name,8,9,49170)
CheckOffset(struct _xmlRef,name,24,9,49170)
CheckMemberSize(struct _xmlRef,lineno,4,9,49171)
CheckOffset(struct _xmlRef,lineno,32,9,49171)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _xmlRef,20, 14966, 6, , NULL, 0, NULL)
CheckMemberSize(struct _xmlRef,value,4,6,49168)
CheckOffset(struct _xmlRef,value,4,6,49168)
CheckMemberSize(struct _xmlRef,attr,4,6,49169)
CheckOffset(struct _xmlRef,attr,8,6,49169)
CheckMemberSize(struct _xmlRef,name,4,6,49170)
CheckOffset(struct _xmlRef,name,12,6,49170)
CheckMemberSize(struct _xmlRef,lineno,4,6,49171)
CheckOffset(struct _xmlRef,lineno,16,6,49171)
#elif defined __ia64__
CheckTypeSize(struct _xmlRef,40, 14966, 3, , NULL, 0, NULL)
CheckMemberSize(struct _xmlRef,value,8,3,49168)
CheckOffset(struct _xmlRef,value,8,3,49168)
CheckMemberSize(struct _xmlRef,attr,8,3,49169)
CheckOffset(struct _xmlRef,attr,16,3,49169)
CheckMemberSize(struct _xmlRef,name,8,3,49170)
CheckOffset(struct _xmlRef,name,24,3,49170)
CheckMemberSize(struct _xmlRef,lineno,4,3,49171)
CheckOffset(struct _xmlRef,lineno,32,3,49171)
#elif defined __i386__
CheckTypeSize(struct _xmlRef,20, 14966, 2, , NULL, 0, NULL)
CheckMemberSize(struct _xmlRef,value,4,2,49168)
CheckOffset(struct _xmlRef,value,4,2,49168)
CheckMemberSize(struct _xmlRef,attr,4,2,49169)
CheckOffset(struct _xmlRef,attr,8,2,49169)
CheckMemberSize(struct _xmlRef,name,4,2,49170)
CheckOffset(struct _xmlRef,name,12,2,49170)
CheckMemberSize(struct _xmlRef,lineno,4,2,49171)
CheckOffset(struct _xmlRef,lineno,16,2,49171)
#elif 1
CheckTypeSize(struct _xmlRef,0, 14966, 1, , NULL, 0, NULL)
Msg("Missing member data for _xmlRef on All\n");
CheckOffset(struct _xmlRef,next,0,1,49167)
#endif

#if defined __s390x__
CheckTypeSize(xmlRef,40, 14968, 12, 3.1, NULL, 14966, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlRef,40, 14968, 11, 3.1, NULL, 14966, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlRef,20, 14968, 10, 3.1, NULL, 14966, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlRef,40, 14968, 9, 3.1, NULL, 14966, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlRef,20, 14968, 6, 3.1, NULL, 14966, NULL)
#elif defined __ia64__
CheckTypeSize(xmlRef,40, 14968, 3, 3.1, NULL, 14966, NULL)
#elif defined __i386__
CheckTypeSize(xmlRef,20, 14968, 2, 3.1, NULL, 14966, NULL)
#else
Msg("Find size of xmlRef (14968)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14966,NULL);\n",architecture,14968,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlRefPtr,8, 14970, 12, 3.1, NULL, 14969, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlRefPtr,8, 14970, 11, 3.1, NULL, 14969, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlRefPtr,4, 14970, 10, 3.1, NULL, 14969, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlRefPtr,8, 14970, 9, 3.1, NULL, 14969, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlRefPtr,4, 14970, 6, 3.1, NULL, 14969, NULL)
#elif defined __ia64__
CheckTypeSize(xmlRefPtr,8, 14970, 3, 3.1, NULL, 14969, NULL)
#elif defined __i386__
CheckTypeSize(xmlRefPtr,4, 14970, 2, 3.1, NULL, 14969, NULL)
#else
Msg("Find size of xmlRefPtr (14970)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14969,NULL);\n",architecture,14970,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlElementTablePtr,8, 14973, 12, 3.1, NULL, 14972, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlElementTablePtr,8, 14973, 11, 3.1, NULL, 14972, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlElementTablePtr,4, 14973, 10, 3.1, NULL, 14972, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlElementTablePtr,8, 14973, 9, 3.1, NULL, 14972, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlElementTablePtr,4, 14973, 6, 3.1, NULL, 14972, NULL)
#elif defined __ia64__
CheckTypeSize(xmlElementTablePtr,8, 14973, 3, 3.1, NULL, 14972, NULL)
#elif defined __i386__
CheckTypeSize(xmlElementTablePtr,4, 14973, 2, 3.1, NULL, 14972, NULL)
#else
Msg("Find size of xmlElementTablePtr (14973)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14972,NULL);\n",architecture,14973,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlIDTablePtr,8, 14976, 12, 3.1, NULL, 14975, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlIDTablePtr,8, 14976, 11, 3.1, NULL, 14975, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlIDTablePtr,4, 14976, 10, 3.1, NULL, 14975, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlIDTablePtr,8, 14976, 9, 3.1, NULL, 14975, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlIDTablePtr,4, 14976, 6, 3.1, NULL, 14975, NULL)
#elif defined __ia64__
CheckTypeSize(xmlIDTablePtr,8, 14976, 3, 3.1, NULL, 14975, NULL)
#elif defined __i386__
CheckTypeSize(xmlIDTablePtr,4, 14976, 2, 3.1, NULL, 14975, NULL)
#else
Msg("Find size of xmlIDTablePtr (14976)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14975,NULL);\n",architecture,14976,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlRefTablePtr,8, 14979, 12, 3.1, NULL, 14978, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlRefTablePtr,8, 14979, 11, 3.1, NULL, 14978, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlRefTablePtr,4, 14979, 10, 3.1, NULL, 14978, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlRefTablePtr,8, 14979, 9, 3.1, NULL, 14978, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlRefTablePtr,4, 14979, 6, 3.1, NULL, 14978, NULL)
#elif defined __ia64__
CheckTypeSize(xmlRefTablePtr,8, 14979, 3, 3.1, NULL, 14978, NULL)
#elif defined __i386__
CheckTypeSize(xmlRefTablePtr,4, 14979, 2, 3.1, NULL, 14978, NULL)
#else
Msg("Find size of xmlRefTablePtr (14979)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14978, NULL);\n",architecture,14979,0);
#endif

extern int xmlIsRef_db(xmlDocPtr, xmlNodePtr, xmlAttrPtr);
CheckInterfacedef(xmlIsRef,xmlIsRef_db);
extern int xmlValidateOneNamespace_db(xmlValidCtxtPtr, xmlDocPtr, xmlNodePtr, const xmlChar *, xmlNsPtr, const xmlChar *);
CheckInterfacedef(xmlValidateOneNamespace,xmlValidateOneNamespace_db);
extern xmlEnumerationPtr xmlCreateEnumeration_db(const xmlChar *);
CheckInterfacedef(xmlCreateEnumeration,xmlCreateEnumeration_db);
extern xmlListPtr xmlGetRefs_db(xmlDocPtr, const xmlChar *);
CheckInterfacedef(xmlGetRefs,xmlGetRefs_db);
extern int xmlIsMixedElement_db(xmlDocPtr, const xmlChar *);
CheckInterfacedef(xmlIsMixedElement,xmlIsMixedElement_db);
extern int xmlValidateNmtokensValue_db(const xmlChar *);
CheckInterfacedef(xmlValidateNmtokensValue,xmlValidateNmtokensValue_db);
extern int xmlValidateNameValue_db(const xmlChar *);
CheckInterfacedef(xmlValidateNameValue,xmlValidateNameValue_db);
extern xmlAttributeTablePtr xmlCopyAttributeTable_db(xmlAttributeTablePtr);
CheckInterfacedef(xmlCopyAttributeTable,xmlCopyAttributeTable_db);
extern xmlElementContentPtr xmlNewDocElementContent_db(xmlDocPtr, const xmlChar *, xmlElementContentType);
CheckInterfacedef(xmlNewDocElementContent,xmlNewDocElementContent_db);
extern int xmlValidateAttributeValue_db(xmlAttributeType, const xmlChar *);
CheckInterfacedef(xmlValidateAttributeValue,xmlValidateAttributeValue_db);
extern void xmlDumpElementDecl_db(xmlBufferPtr, xmlElementPtr);
CheckInterfacedef(xmlDumpElementDecl,xmlDumpElementDecl_db);
extern int xmlRemoveID_db(xmlDocPtr, xmlAttrPtr);
CheckInterfacedef(xmlRemoveID,xmlRemoveID_db);
extern void xmlDumpNotationTable_db(xmlBufferPtr, xmlNotationTablePtr);
CheckInterfacedef(xmlDumpNotationTable,xmlDumpNotationTable_db);
extern void xmlFreeEnumeration_db(xmlEnumerationPtr);
CheckInterfacedef(xmlFreeEnumeration,xmlFreeEnumeration_db);
extern void xmlSnprintfElementContent_db(char *, int, xmlElementContentPtr, int);
CheckInterfacedef(xmlSnprintfElementContent,xmlSnprintfElementContent_db);
extern int xmlValidateNotationUse_db(xmlValidCtxtPtr, xmlDocPtr, const xmlChar *);
CheckInterfacedef(xmlValidateNotationUse,xmlValidateNotationUse_db);
extern int xmlValidateDocument_db(xmlValidCtxtPtr, xmlDocPtr);
CheckInterfacedef(xmlValidateDocument,xmlValidateDocument_db);
extern int xmlValidateOneAttribute_db(xmlValidCtxtPtr, xmlDocPtr, xmlNodePtr, xmlAttrPtr, const xmlChar *);
CheckInterfacedef(xmlValidateOneAttribute,xmlValidateOneAttribute_db);
extern xmlChar * xmlValidNormalizeAttributeValue_db(xmlDocPtr, xmlNodePtr, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlValidNormalizeAttributeValue,xmlValidNormalizeAttributeValue_db);
extern xmlElementPtr xmlGetDtdElementDesc_db(xmlDtdPtr, const xmlChar *);
CheckInterfacedef(xmlGetDtdElementDesc,xmlGetDtdElementDesc_db);
extern int xmlValidateDtd_db(xmlValidCtxtPtr, xmlDocPtr, xmlDtdPtr);
CheckInterfacedef(xmlValidateDtd,xmlValidateDtd_db);
extern int xmlValidateDocumentFinal_db(xmlValidCtxtPtr, xmlDocPtr);
CheckInterfacedef(xmlValidateDocumentFinal,xmlValidateDocumentFinal_db);
extern xmlAttributePtr xmlAddAttributeDecl_db(xmlValidCtxtPtr, xmlDtdPtr, const xmlChar *, const xmlChar *, const xmlChar *, xmlAttributeType, xmlAttributeDefault, const xmlChar *, xmlEnumerationPtr);
CheckInterfacedef(xmlAddAttributeDecl,xmlAddAttributeDecl_db);
extern int xmlValidateNamesValue_db(const xmlChar *);
CheckInterfacedef(xmlValidateNamesValue,xmlValidateNamesValue_db);
extern xmlAttributePtr xmlGetDtdQAttrDesc_db(xmlDtdPtr, const xmlChar *, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlGetDtdQAttrDesc,xmlGetDtdQAttrDesc_db);
extern void xmlFreeDocElementContent_db(xmlDocPtr, xmlElementContentPtr);
CheckInterfacedef(xmlFreeDocElementContent,xmlFreeDocElementContent_db);
extern int xmlValidateElementDecl_db(xmlValidCtxtPtr, xmlDocPtr, xmlElementPtr);
CheckInterfacedef(xmlValidateElementDecl,xmlValidateElementDecl_db);
extern xmlValidCtxtPtr xmlNewValidCtxt_db(void);
CheckInterfacedef(xmlNewValidCtxt,xmlNewValidCtxt_db);
extern int xmlValidateNmtokenValue_db(const xmlChar *);
CheckInterfacedef(xmlValidateNmtokenValue,xmlValidateNmtokenValue_db);
extern xmlElementPtr xmlGetDtdQElementDesc_db(xmlDtdPtr, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlGetDtdQElementDesc,xmlGetDtdQElementDesc_db);
extern xmlNotationTablePtr xmlCopyNotationTable_db(xmlNotationTablePtr);
CheckInterfacedef(xmlCopyNotationTable,xmlCopyNotationTable_db);
extern void xmlDumpNotationDecl_db(xmlBufferPtr, xmlNotationPtr);
CheckInterfacedef(xmlDumpNotationDecl,xmlDumpNotationDecl_db);
extern int xmlValidatePushElement_db(xmlValidCtxtPtr, xmlDocPtr, xmlNodePtr, const xmlChar *);
CheckInterfacedef(xmlValidatePushElement,xmlValidatePushElement_db);
extern int xmlValidateNotationDecl_db(xmlValidCtxtPtr, xmlDocPtr, xmlNotationPtr);
CheckInterfacedef(xmlValidateNotationDecl,xmlValidateNotationDecl_db);
extern xmlNotationPtr xmlAddNotationDecl_db(xmlValidCtxtPtr, xmlDtdPtr, const xmlChar *, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlAddNotationDecl,xmlAddNotationDecl_db);
extern int xmlValidBuildContentModel_db(xmlValidCtxtPtr, xmlElementPtr);
CheckInterfacedef(xmlValidBuildContentModel,xmlValidBuildContentModel_db);
extern int xmlValidatePopElement_db(xmlValidCtxtPtr, xmlDocPtr, xmlNodePtr, const xmlChar *);
CheckInterfacedef(xmlValidatePopElement,xmlValidatePopElement_db);
extern xmlIDPtr xmlAddID_db(xmlValidCtxtPtr, xmlDocPtr, const xmlChar *, xmlAttrPtr);
CheckInterfacedef(xmlAddID,xmlAddID_db);
extern xmlElementContentPtr xmlCopyDocElementContent_db(xmlDocPtr, xmlElementContentPtr);
CheckInterfacedef(xmlCopyDocElementContent,xmlCopyDocElementContent_db);
extern xmlAttributePtr xmlGetDtdAttrDesc_db(xmlDtdPtr, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlGetDtdAttrDesc,xmlGetDtdAttrDesc_db);
extern xmlEnumerationPtr xmlCopyEnumeration_db(xmlEnumerationPtr);
CheckInterfacedef(xmlCopyEnumeration,xmlCopyEnumeration_db);
extern int xmlValidateAttributeDecl_db(xmlValidCtxtPtr, xmlDocPtr, xmlAttributePtr);
CheckInterfacedef(xmlValidateAttributeDecl,xmlValidateAttributeDecl_db);
extern xmlRefPtr xmlAddRef_db(xmlValidCtxtPtr, xmlDocPtr, const xmlChar *, xmlAttrPtr);
CheckInterfacedef(xmlAddRef,xmlAddRef_db);
extern void xmlFreeElementTable_db(xmlElementTablePtr);
CheckInterfacedef(xmlFreeElementTable,xmlFreeElementTable_db);
extern void xmlDumpAttributeTable_db(xmlBufferPtr, xmlAttributeTablePtr);
CheckInterfacedef(xmlDumpAttributeTable,xmlDumpAttributeTable_db);
extern int xmlValidateOneElement_db(xmlValidCtxtPtr, xmlDocPtr, xmlNodePtr);
CheckInterfacedef(xmlValidateOneElement,xmlValidateOneElement_db);
extern int xmlIsID_db(xmlDocPtr, xmlNodePtr, xmlAttrPtr);
CheckInterfacedef(xmlIsID,xmlIsID_db);
extern void xmlFreeIDTable_db(xmlIDTablePtr);
CheckInterfacedef(xmlFreeIDTable,xmlFreeIDTable_db);
extern int xmlRemoveRef_db(xmlDocPtr, xmlAttrPtr);
CheckInterfacedef(xmlRemoveRef,xmlRemoveRef_db);
extern int xmlValidGetValidElements_db(xmlNode *, xmlNode *, const xmlChar * *, int);
CheckInterfacedef(xmlValidGetValidElements,xmlValidGetValidElements_db);
extern void xmlFreeNotationTable_db(xmlNotationTablePtr);
CheckInterfacedef(xmlFreeNotationTable,xmlFreeNotationTable_db);
extern void xmlFreeRefTable_db(xmlRefTablePtr);
CheckInterfacedef(xmlFreeRefTable,xmlFreeRefTable_db);
extern xmlNotationPtr xmlGetDtdNotationDesc_db(xmlDtdPtr, const xmlChar *);
CheckInterfacedef(xmlGetDtdNotationDesc,xmlGetDtdNotationDesc_db);
extern int xmlValidateRoot_db(xmlValidCtxtPtr, xmlDocPtr);
CheckInterfacedef(xmlValidateRoot,xmlValidateRoot_db);
extern xmlElementTablePtr xmlCopyElementTable_db(xmlElementTablePtr);
CheckInterfacedef(xmlCopyElementTable,xmlCopyElementTable_db);
extern xmlElementPtr xmlAddElementDecl_db(xmlValidCtxtPtr, xmlDtdPtr, const xmlChar *, xmlElementTypeVal, xmlElementContentPtr);
CheckInterfacedef(xmlAddElementDecl,xmlAddElementDecl_db);
extern void xmlFreeValidCtxt_db(xmlValidCtxtPtr);
CheckInterfacedef(xmlFreeValidCtxt,xmlFreeValidCtxt_db);
extern int xmlValidateDtdFinal_db(xmlValidCtxtPtr, xmlDocPtr);
CheckInterfacedef(xmlValidateDtdFinal,xmlValidateDtdFinal_db);
extern void xmlDumpElementTable_db(xmlBufferPtr, xmlElementTablePtr);
CheckInterfacedef(xmlDumpElementTable,xmlDumpElementTable_db);
extern void xmlDumpAttributeDecl_db(xmlBufferPtr, xmlAttributePtr);
CheckInterfacedef(xmlDumpAttributeDecl,xmlDumpAttributeDecl_db);
extern int xmlValidateElement_db(xmlValidCtxtPtr, xmlDocPtr, xmlNodePtr);
CheckInterfacedef(xmlValidateElement,xmlValidateElement_db);
extern xmlAttrPtr xmlGetID_db(xmlDocPtr, const xmlChar *);
CheckInterfacedef(xmlGetID,xmlGetID_db);
extern int xmlValidatePushCData_db(xmlValidCtxtPtr, const xmlChar *, int);
CheckInterfacedef(xmlValidatePushCData,xmlValidatePushCData_db);
extern void xmlFreeAttributeTable_db(xmlAttributeTablePtr);
CheckInterfacedef(xmlFreeAttributeTable,xmlFreeAttributeTable_db);
extern int xmlValidGetPotentialChildren_db(xmlElementContent *, const xmlChar * *, int *, int);
CheckInterfacedef(xmlValidGetPotentialChildren,xmlValidGetPotentialChildren_db);
extern xmlChar * xmlValidCtxtNormalizeAttributeValue_db(xmlValidCtxtPtr, xmlDocPtr, xmlNodePtr, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlValidCtxtNormalizeAttributeValue,xmlValidCtxtNormalizeAttributeValue_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in libxml2/libxml/valid.h\n\n",pcnt,cnt);
return cnt;
#endif

}
