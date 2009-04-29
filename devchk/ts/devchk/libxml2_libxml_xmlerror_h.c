/*
 * Test of libxml2/libxml/xmlerror.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include <libxml/xmlregexp.h>
#include "libxml2/libxml/xmlerror.h"



#ifdef TET_TEST
void libxml2_libxml_xmlerror_h()
{
#else
int libxml2_libxml_xmlerror_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in libxml2/libxml/xmlerror.h\n");
#endif

printf("Checking data structures in libxml2/libxml/xmlerror.h\n");
#if defined __s390x__
CheckTypeSize(struct _xmlParserInput,104, 14642, 12, , NULL, 0, NULL)
CheckMemberSize(struct _xmlParserInput,filename,8,12,47899)
CheckOffset(struct _xmlParserInput,filename,8,12,47899)
CheckMemberSize(struct _xmlParserInput,directory,8,12,47900)
CheckOffset(struct _xmlParserInput,directory,16,12,47900)
CheckMemberSize(struct _xmlParserInput,base,8,12,47901)
CheckOffset(struct _xmlParserInput,base,24,12,47901)
CheckMemberSize(struct _xmlParserInput,cur,8,12,47902)
CheckOffset(struct _xmlParserInput,cur,32,12,47902)
CheckMemberSize(struct _xmlParserInput,end,8,12,47903)
CheckOffset(struct _xmlParserInput,end,40,12,47903)
CheckMemberSize(struct _xmlParserInput,length,4,12,47904)
CheckOffset(struct _xmlParserInput,length,48,12,47904)
CheckMemberSize(struct _xmlParserInput,line,4,12,47905)
CheckOffset(struct _xmlParserInput,line,52,12,47905)
CheckMemberSize(struct _xmlParserInput,col,4,12,47906)
CheckOffset(struct _xmlParserInput,col,56,12,47906)
CheckMemberSize(struct _xmlParserInput,consumed,8,12,47907)
CheckOffset(struct _xmlParserInput,consumed,64,12,47907)
CheckMemberSize(struct _xmlParserInput,free,8,12,47909)
CheckOffset(struct _xmlParserInput,free,72,12,47909)
CheckMemberSize(struct _xmlParserInput,encoding,8,12,47910)
CheckOffset(struct _xmlParserInput,encoding,80,12,47910)
CheckMemberSize(struct _xmlParserInput,version,8,12,47911)
CheckOffset(struct _xmlParserInput,version,88,12,47911)
CheckMemberSize(struct _xmlParserInput,standalone,4,12,47912)
CheckOffset(struct _xmlParserInput,standalone,96,12,47912)
CheckMemberSize(struct _xmlParserInput,id,4,12,47913)
CheckOffset(struct _xmlParserInput,id,100,12,47913)
#elif defined __x86_64__
CheckTypeSize(struct _xmlParserInput,104, 14642, 11, , NULL, 0, NULL)
CheckMemberSize(struct _xmlParserInput,filename,8,11,47899)
CheckOffset(struct _xmlParserInput,filename,8,11,47899)
CheckMemberSize(struct _xmlParserInput,directory,8,11,47900)
CheckOffset(struct _xmlParserInput,directory,16,11,47900)
CheckMemberSize(struct _xmlParserInput,base,8,11,47901)
CheckOffset(struct _xmlParserInput,base,24,11,47901)
CheckMemberSize(struct _xmlParserInput,cur,8,11,47902)
CheckOffset(struct _xmlParserInput,cur,32,11,47902)
CheckMemberSize(struct _xmlParserInput,end,8,11,47903)
CheckOffset(struct _xmlParserInput,end,40,11,47903)
CheckMemberSize(struct _xmlParserInput,length,4,11,47904)
CheckOffset(struct _xmlParserInput,length,48,11,47904)
CheckMemberSize(struct _xmlParserInput,line,4,11,47905)
CheckOffset(struct _xmlParserInput,line,52,11,47905)
CheckMemberSize(struct _xmlParserInput,col,4,11,47906)
CheckOffset(struct _xmlParserInput,col,56,11,47906)
CheckMemberSize(struct _xmlParserInput,consumed,8,11,47907)
CheckOffset(struct _xmlParserInput,consumed,64,11,47907)
CheckMemberSize(struct _xmlParserInput,free,8,11,47909)
CheckOffset(struct _xmlParserInput,free,72,11,47909)
CheckMemberSize(struct _xmlParserInput,encoding,8,11,47910)
CheckOffset(struct _xmlParserInput,encoding,80,11,47910)
CheckMemberSize(struct _xmlParserInput,version,8,11,47911)
CheckOffset(struct _xmlParserInput,version,88,11,47911)
CheckMemberSize(struct _xmlParserInput,standalone,4,11,47912)
CheckOffset(struct _xmlParserInput,standalone,96,11,47912)
CheckMemberSize(struct _xmlParserInput,id,4,11,47913)
CheckOffset(struct _xmlParserInput,id,100,11,47913)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _xmlParserInput,60, 14642, 10, , NULL, 0, NULL)
CheckMemberSize(struct _xmlParserInput,filename,4,10,47899)
CheckOffset(struct _xmlParserInput,filename,4,10,47899)
CheckMemberSize(struct _xmlParserInput,directory,4,10,47900)
CheckOffset(struct _xmlParserInput,directory,8,10,47900)
CheckMemberSize(struct _xmlParserInput,base,4,10,47901)
CheckOffset(struct _xmlParserInput,base,12,10,47901)
CheckMemberSize(struct _xmlParserInput,cur,4,10,47902)
CheckOffset(struct _xmlParserInput,cur,16,10,47902)
CheckMemberSize(struct _xmlParserInput,end,4,10,47903)
CheckOffset(struct _xmlParserInput,end,20,10,47903)
CheckMemberSize(struct _xmlParserInput,length,4,10,47904)
CheckOffset(struct _xmlParserInput,length,24,10,47904)
CheckMemberSize(struct _xmlParserInput,line,4,10,47905)
CheckOffset(struct _xmlParserInput,line,28,10,47905)
CheckMemberSize(struct _xmlParserInput,col,4,10,47906)
CheckOffset(struct _xmlParserInput,col,32,10,47906)
CheckMemberSize(struct _xmlParserInput,consumed,4,10,47907)
CheckOffset(struct _xmlParserInput,consumed,36,10,47907)
CheckMemberSize(struct _xmlParserInput,free,4,10,47909)
CheckOffset(struct _xmlParserInput,free,40,10,47909)
CheckMemberSize(struct _xmlParserInput,encoding,4,10,47910)
CheckOffset(struct _xmlParserInput,encoding,44,10,47910)
CheckMemberSize(struct _xmlParserInput,version,4,10,47911)
CheckOffset(struct _xmlParserInput,version,48,10,47911)
CheckMemberSize(struct _xmlParserInput,standalone,4,10,47912)
CheckOffset(struct _xmlParserInput,standalone,52,10,47912)
CheckMemberSize(struct _xmlParserInput,id,4,10,47913)
CheckOffset(struct _xmlParserInput,id,56,10,47913)
#elif defined __powerpc64__
CheckTypeSize(struct _xmlParserInput,104, 14642, 9, , NULL, 0, NULL)
CheckMemberSize(struct _xmlParserInput,filename,8,9,47899)
CheckOffset(struct _xmlParserInput,filename,8,9,47899)
CheckMemberSize(struct _xmlParserInput,directory,8,9,47900)
CheckOffset(struct _xmlParserInput,directory,16,9,47900)
CheckMemberSize(struct _xmlParserInput,base,8,9,47901)
CheckOffset(struct _xmlParserInput,base,24,9,47901)
CheckMemberSize(struct _xmlParserInput,cur,8,9,47902)
CheckOffset(struct _xmlParserInput,cur,32,9,47902)
CheckMemberSize(struct _xmlParserInput,end,8,9,47903)
CheckOffset(struct _xmlParserInput,end,40,9,47903)
CheckMemberSize(struct _xmlParserInput,length,4,9,47904)
CheckOffset(struct _xmlParserInput,length,48,9,47904)
CheckMemberSize(struct _xmlParserInput,line,4,9,47905)
CheckOffset(struct _xmlParserInput,line,52,9,47905)
CheckMemberSize(struct _xmlParserInput,col,4,9,47906)
CheckOffset(struct _xmlParserInput,col,56,9,47906)
CheckMemberSize(struct _xmlParserInput,consumed,8,9,47907)
CheckOffset(struct _xmlParserInput,consumed,64,9,47907)
CheckMemberSize(struct _xmlParserInput,free,8,9,47909)
CheckOffset(struct _xmlParserInput,free,72,9,47909)
CheckMemberSize(struct _xmlParserInput,encoding,8,9,47910)
CheckOffset(struct _xmlParserInput,encoding,80,9,47910)
CheckMemberSize(struct _xmlParserInput,version,8,9,47911)
CheckOffset(struct _xmlParserInput,version,88,9,47911)
CheckMemberSize(struct _xmlParserInput,standalone,4,9,47912)
CheckOffset(struct _xmlParserInput,standalone,96,9,47912)
CheckMemberSize(struct _xmlParserInput,id,4,9,47913)
CheckOffset(struct _xmlParserInput,id,100,9,47913)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _xmlParserInput,60, 14642, 6, , NULL, 0, NULL)
CheckMemberSize(struct _xmlParserInput,filename,4,6,47899)
CheckOffset(struct _xmlParserInput,filename,4,6,47899)
CheckMemberSize(struct _xmlParserInput,directory,4,6,47900)
CheckOffset(struct _xmlParserInput,directory,8,6,47900)
CheckMemberSize(struct _xmlParserInput,base,4,6,47901)
CheckOffset(struct _xmlParserInput,base,12,6,47901)
CheckMemberSize(struct _xmlParserInput,cur,4,6,47902)
CheckOffset(struct _xmlParserInput,cur,16,6,47902)
CheckMemberSize(struct _xmlParserInput,end,4,6,47903)
CheckOffset(struct _xmlParserInput,end,20,6,47903)
CheckMemberSize(struct _xmlParserInput,length,4,6,47904)
CheckOffset(struct _xmlParserInput,length,24,6,47904)
CheckMemberSize(struct _xmlParserInput,line,4,6,47905)
CheckOffset(struct _xmlParserInput,line,28,6,47905)
CheckMemberSize(struct _xmlParserInput,col,4,6,47906)
CheckOffset(struct _xmlParserInput,col,32,6,47906)
CheckMemberSize(struct _xmlParserInput,consumed,4,6,47907)
CheckOffset(struct _xmlParserInput,consumed,36,6,47907)
CheckMemberSize(struct _xmlParserInput,free,4,6,47909)
CheckOffset(struct _xmlParserInput,free,40,6,47909)
CheckMemberSize(struct _xmlParserInput,encoding,4,6,47910)
CheckOffset(struct _xmlParserInput,encoding,44,6,47910)
CheckMemberSize(struct _xmlParserInput,version,4,6,47911)
CheckOffset(struct _xmlParserInput,version,48,6,47911)
CheckMemberSize(struct _xmlParserInput,standalone,4,6,47912)
CheckOffset(struct _xmlParserInput,standalone,52,6,47912)
CheckMemberSize(struct _xmlParserInput,id,4,6,47913)
CheckOffset(struct _xmlParserInput,id,56,6,47913)
#elif defined __ia64__
CheckTypeSize(struct _xmlParserInput,104, 14642, 3, , NULL, 0, NULL)
CheckMemberSize(struct _xmlParserInput,filename,8,3,47899)
CheckOffset(struct _xmlParserInput,filename,8,3,47899)
CheckMemberSize(struct _xmlParserInput,directory,8,3,47900)
CheckOffset(struct _xmlParserInput,directory,16,3,47900)
CheckMemberSize(struct _xmlParserInput,base,8,3,47901)
CheckOffset(struct _xmlParserInput,base,24,3,47901)
CheckMemberSize(struct _xmlParserInput,cur,8,3,47902)
CheckOffset(struct _xmlParserInput,cur,32,3,47902)
CheckMemberSize(struct _xmlParserInput,end,8,3,47903)
CheckOffset(struct _xmlParserInput,end,40,3,47903)
CheckMemberSize(struct _xmlParserInput,length,4,3,47904)
CheckOffset(struct _xmlParserInput,length,48,3,47904)
CheckMemberSize(struct _xmlParserInput,line,4,3,47905)
CheckOffset(struct _xmlParserInput,line,52,3,47905)
CheckMemberSize(struct _xmlParserInput,col,4,3,47906)
CheckOffset(struct _xmlParserInput,col,56,3,47906)
CheckMemberSize(struct _xmlParserInput,consumed,8,3,47907)
CheckOffset(struct _xmlParserInput,consumed,64,3,47907)
CheckMemberSize(struct _xmlParserInput,free,8,3,47909)
CheckOffset(struct _xmlParserInput,free,72,3,47909)
CheckMemberSize(struct _xmlParserInput,encoding,8,3,47910)
CheckOffset(struct _xmlParserInput,encoding,80,3,47910)
CheckMemberSize(struct _xmlParserInput,version,8,3,47911)
CheckOffset(struct _xmlParserInput,version,88,3,47911)
CheckMemberSize(struct _xmlParserInput,standalone,4,3,47912)
CheckOffset(struct _xmlParserInput,standalone,96,3,47912)
CheckMemberSize(struct _xmlParserInput,id,4,3,47913)
CheckOffset(struct _xmlParserInput,id,100,3,47913)
#elif defined __i386__
CheckTypeSize(struct _xmlParserInput,60, 14642, 2, , NULL, 0, NULL)
CheckMemberSize(struct _xmlParserInput,filename,4,2,47899)
CheckOffset(struct _xmlParserInput,filename,4,2,47899)
CheckMemberSize(struct _xmlParserInput,directory,4,2,47900)
CheckOffset(struct _xmlParserInput,directory,8,2,47900)
CheckMemberSize(struct _xmlParserInput,base,4,2,47901)
CheckOffset(struct _xmlParserInput,base,12,2,47901)
CheckMemberSize(struct _xmlParserInput,cur,4,2,47902)
CheckOffset(struct _xmlParserInput,cur,16,2,47902)
CheckMemberSize(struct _xmlParserInput,end,4,2,47903)
CheckOffset(struct _xmlParserInput,end,20,2,47903)
CheckMemberSize(struct _xmlParserInput,length,4,2,47904)
CheckOffset(struct _xmlParserInput,length,24,2,47904)
CheckMemberSize(struct _xmlParserInput,line,4,2,47905)
CheckOffset(struct _xmlParserInput,line,28,2,47905)
CheckMemberSize(struct _xmlParserInput,col,4,2,47906)
CheckOffset(struct _xmlParserInput,col,32,2,47906)
CheckMemberSize(struct _xmlParserInput,consumed,4,2,47907)
CheckOffset(struct _xmlParserInput,consumed,36,2,47907)
CheckMemberSize(struct _xmlParserInput,free,4,2,47909)
CheckOffset(struct _xmlParserInput,free,40,2,47909)
CheckMemberSize(struct _xmlParserInput,encoding,4,2,47910)
CheckOffset(struct _xmlParserInput,encoding,44,2,47910)
CheckMemberSize(struct _xmlParserInput,version,4,2,47911)
CheckOffset(struct _xmlParserInput,version,48,2,47911)
CheckMemberSize(struct _xmlParserInput,standalone,4,2,47912)
CheckOffset(struct _xmlParserInput,standalone,52,2,47912)
CheckMemberSize(struct _xmlParserInput,id,4,2,47913)
CheckOffset(struct _xmlParserInput,id,56,2,47913)
#elif 1
CheckTypeSize(struct _xmlParserInput,0, 14642, 1, , NULL, 0, NULL)
Msg("Missing member data for _xmlParserInput on All\n");
CheckOffset(struct _xmlParserInput,buf,0,1,47898)
#endif

#if defined __s390x__
CheckTypeSize(struct _xmlParserInputBuffer,64, 14643, 12, , NULL, 0, NULL)
CheckMemberSize(struct _xmlParserInputBuffer,readcallback,8,12,47890)
CheckOffset(struct _xmlParserInputBuffer,readcallback,8,12,47890)
CheckMemberSize(struct _xmlParserInputBuffer,closecallback,8,12,47891)
CheckOffset(struct _xmlParserInputBuffer,closecallback,16,12,47891)
CheckMemberSize(struct _xmlParserInputBuffer,encoder,8,12,47892)
CheckOffset(struct _xmlParserInputBuffer,encoder,24,12,47892)
CheckMemberSize(struct _xmlParserInputBuffer,buffer,8,12,47893)
CheckOffset(struct _xmlParserInputBuffer,buffer,32,12,47893)
CheckMemberSize(struct _xmlParserInputBuffer,raw,8,12,47894)
CheckOffset(struct _xmlParserInputBuffer,raw,40,12,47894)
CheckMemberSize(struct _xmlParserInputBuffer,compressed,4,12,47895)
CheckOffset(struct _xmlParserInputBuffer,compressed,48,12,47895)
CheckMemberSize(struct _xmlParserInputBuffer,error,4,12,47896)
CheckOffset(struct _xmlParserInputBuffer,error,52,12,47896)
CheckMemberSize(struct _xmlParserInputBuffer,rawconsumed,8,12,47897)
CheckOffset(struct _xmlParserInputBuffer,rawconsumed,56,12,47897)
#elif defined __x86_64__
CheckTypeSize(struct _xmlParserInputBuffer,64, 14643, 11, , NULL, 0, NULL)
CheckMemberSize(struct _xmlParserInputBuffer,readcallback,8,11,47890)
CheckOffset(struct _xmlParserInputBuffer,readcallback,8,11,47890)
CheckMemberSize(struct _xmlParserInputBuffer,closecallback,8,11,47891)
CheckOffset(struct _xmlParserInputBuffer,closecallback,16,11,47891)
CheckMemberSize(struct _xmlParserInputBuffer,encoder,8,11,47892)
CheckOffset(struct _xmlParserInputBuffer,encoder,24,11,47892)
CheckMemberSize(struct _xmlParserInputBuffer,buffer,8,11,47893)
CheckOffset(struct _xmlParserInputBuffer,buffer,32,11,47893)
CheckMemberSize(struct _xmlParserInputBuffer,raw,8,11,47894)
CheckOffset(struct _xmlParserInputBuffer,raw,40,11,47894)
CheckMemberSize(struct _xmlParserInputBuffer,compressed,4,11,47895)
CheckOffset(struct _xmlParserInputBuffer,compressed,48,11,47895)
CheckMemberSize(struct _xmlParserInputBuffer,error,4,11,47896)
CheckOffset(struct _xmlParserInputBuffer,error,52,11,47896)
CheckMemberSize(struct _xmlParserInputBuffer,rawconsumed,8,11,47897)
CheckOffset(struct _xmlParserInputBuffer,rawconsumed,56,11,47897)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _xmlParserInputBuffer,36, 14643, 10, , NULL, 0, NULL)
CheckMemberSize(struct _xmlParserInputBuffer,readcallback,4,10,47890)
CheckOffset(struct _xmlParserInputBuffer,readcallback,4,10,47890)
CheckMemberSize(struct _xmlParserInputBuffer,closecallback,4,10,47891)
CheckOffset(struct _xmlParserInputBuffer,closecallback,8,10,47891)
CheckMemberSize(struct _xmlParserInputBuffer,encoder,4,10,47892)
CheckOffset(struct _xmlParserInputBuffer,encoder,12,10,47892)
CheckMemberSize(struct _xmlParserInputBuffer,buffer,4,10,47893)
CheckOffset(struct _xmlParserInputBuffer,buffer,16,10,47893)
CheckMemberSize(struct _xmlParserInputBuffer,raw,4,10,47894)
CheckOffset(struct _xmlParserInputBuffer,raw,20,10,47894)
CheckMemberSize(struct _xmlParserInputBuffer,compressed,4,10,47895)
CheckOffset(struct _xmlParserInputBuffer,compressed,24,10,47895)
CheckMemberSize(struct _xmlParserInputBuffer,error,4,10,47896)
CheckOffset(struct _xmlParserInputBuffer,error,28,10,47896)
CheckMemberSize(struct _xmlParserInputBuffer,rawconsumed,4,10,47897)
CheckOffset(struct _xmlParserInputBuffer,rawconsumed,32,10,47897)
#elif defined __powerpc64__
CheckTypeSize(struct _xmlParserInputBuffer,64, 14643, 9, , NULL, 0, NULL)
CheckMemberSize(struct _xmlParserInputBuffer,readcallback,8,9,47890)
CheckOffset(struct _xmlParserInputBuffer,readcallback,8,9,47890)
CheckMemberSize(struct _xmlParserInputBuffer,closecallback,8,9,47891)
CheckOffset(struct _xmlParserInputBuffer,closecallback,16,9,47891)
CheckMemberSize(struct _xmlParserInputBuffer,encoder,8,9,47892)
CheckOffset(struct _xmlParserInputBuffer,encoder,24,9,47892)
CheckMemberSize(struct _xmlParserInputBuffer,buffer,8,9,47893)
CheckOffset(struct _xmlParserInputBuffer,buffer,32,9,47893)
CheckMemberSize(struct _xmlParserInputBuffer,raw,8,9,47894)
CheckOffset(struct _xmlParserInputBuffer,raw,40,9,47894)
CheckMemberSize(struct _xmlParserInputBuffer,compressed,4,9,47895)
CheckOffset(struct _xmlParserInputBuffer,compressed,48,9,47895)
CheckMemberSize(struct _xmlParserInputBuffer,error,4,9,47896)
CheckOffset(struct _xmlParserInputBuffer,error,52,9,47896)
CheckMemberSize(struct _xmlParserInputBuffer,rawconsumed,8,9,47897)
CheckOffset(struct _xmlParserInputBuffer,rawconsumed,56,9,47897)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _xmlParserInputBuffer,36, 14643, 6, , NULL, 0, NULL)
CheckMemberSize(struct _xmlParserInputBuffer,readcallback,4,6,47890)
CheckOffset(struct _xmlParserInputBuffer,readcallback,4,6,47890)
CheckMemberSize(struct _xmlParserInputBuffer,closecallback,4,6,47891)
CheckOffset(struct _xmlParserInputBuffer,closecallback,8,6,47891)
CheckMemberSize(struct _xmlParserInputBuffer,encoder,4,6,47892)
CheckOffset(struct _xmlParserInputBuffer,encoder,12,6,47892)
CheckMemberSize(struct _xmlParserInputBuffer,buffer,4,6,47893)
CheckOffset(struct _xmlParserInputBuffer,buffer,16,6,47893)
CheckMemberSize(struct _xmlParserInputBuffer,raw,4,6,47894)
CheckOffset(struct _xmlParserInputBuffer,raw,20,6,47894)
CheckMemberSize(struct _xmlParserInputBuffer,compressed,4,6,47895)
CheckOffset(struct _xmlParserInputBuffer,compressed,24,6,47895)
CheckMemberSize(struct _xmlParserInputBuffer,error,4,6,47896)
CheckOffset(struct _xmlParserInputBuffer,error,28,6,47896)
CheckMemberSize(struct _xmlParserInputBuffer,rawconsumed,4,6,47897)
CheckOffset(struct _xmlParserInputBuffer,rawconsumed,32,6,47897)
#elif defined __ia64__
CheckTypeSize(struct _xmlParserInputBuffer,64, 14643, 3, , NULL, 0, NULL)
CheckMemberSize(struct _xmlParserInputBuffer,readcallback,8,3,47890)
CheckOffset(struct _xmlParserInputBuffer,readcallback,8,3,47890)
CheckMemberSize(struct _xmlParserInputBuffer,closecallback,8,3,47891)
CheckOffset(struct _xmlParserInputBuffer,closecallback,16,3,47891)
CheckMemberSize(struct _xmlParserInputBuffer,encoder,8,3,47892)
CheckOffset(struct _xmlParserInputBuffer,encoder,24,3,47892)
CheckMemberSize(struct _xmlParserInputBuffer,buffer,8,3,47893)
CheckOffset(struct _xmlParserInputBuffer,buffer,32,3,47893)
CheckMemberSize(struct _xmlParserInputBuffer,raw,8,3,47894)
CheckOffset(struct _xmlParserInputBuffer,raw,40,3,47894)
CheckMemberSize(struct _xmlParserInputBuffer,compressed,4,3,47895)
CheckOffset(struct _xmlParserInputBuffer,compressed,48,3,47895)
CheckMemberSize(struct _xmlParserInputBuffer,error,4,3,47896)
CheckOffset(struct _xmlParserInputBuffer,error,52,3,47896)
CheckMemberSize(struct _xmlParserInputBuffer,rawconsumed,8,3,47897)
CheckOffset(struct _xmlParserInputBuffer,rawconsumed,56,3,47897)
#elif defined __i386__
CheckTypeSize(struct _xmlParserInputBuffer,36, 14643, 2, , NULL, 0, NULL)
CheckMemberSize(struct _xmlParserInputBuffer,readcallback,4,2,47890)
CheckOffset(struct _xmlParserInputBuffer,readcallback,4,2,47890)
CheckMemberSize(struct _xmlParserInputBuffer,closecallback,4,2,47891)
CheckOffset(struct _xmlParserInputBuffer,closecallback,8,2,47891)
CheckMemberSize(struct _xmlParserInputBuffer,encoder,4,2,47892)
CheckOffset(struct _xmlParserInputBuffer,encoder,12,2,47892)
CheckMemberSize(struct _xmlParserInputBuffer,buffer,4,2,47893)
CheckOffset(struct _xmlParserInputBuffer,buffer,16,2,47893)
CheckMemberSize(struct _xmlParserInputBuffer,raw,4,2,47894)
CheckOffset(struct _xmlParserInputBuffer,raw,20,2,47894)
CheckMemberSize(struct _xmlParserInputBuffer,compressed,4,2,47895)
CheckOffset(struct _xmlParserInputBuffer,compressed,24,2,47895)
CheckMemberSize(struct _xmlParserInputBuffer,error,4,2,47896)
CheckOffset(struct _xmlParserInputBuffer,error,28,2,47896)
CheckMemberSize(struct _xmlParserInputBuffer,rawconsumed,4,2,47897)
CheckOffset(struct _xmlParserInputBuffer,rawconsumed,32,2,47897)
#elif 1
CheckTypeSize(struct _xmlParserInputBuffer,0, 14643, 1, , NULL, 0, NULL)
Msg("Missing member data for _xmlParserInputBuffer on All\n");
CheckOffset(struct _xmlParserInputBuffer,context,0,1,47886)
#endif

#if defined __s390x__
CheckTypeSize(xmlInputReadCallback,8, 14645, 12, 3.1, NULL, 14644, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlInputReadCallback,8, 14645, 11, 3.1, NULL, 14644, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlInputReadCallback,4, 14645, 10, 3.1, NULL, 14644, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlInputReadCallback,8, 14645, 9, 3.1, NULL, 14644, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlInputReadCallback,4, 14645, 6, 3.1, NULL, 14644, NULL)
#elif defined __ia64__
CheckTypeSize(xmlInputReadCallback,8, 14645, 3, 3.1, NULL, 14644, NULL)
#elif defined __i386__
CheckTypeSize(xmlInputReadCallback,4, 14645, 2, 3.1, NULL, 14644, NULL)
#else
Msg("Find size of xmlInputReadCallback (14645)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14644,NULL);\n",architecture,14645,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlInputCloseCallback,8, 14646, 12, 3.1, NULL, 14629, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlInputCloseCallback,8, 14646, 11, 3.1, NULL, 14629, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlInputCloseCallback,4, 14646, 10, 3.1, NULL, 14629, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlInputCloseCallback,8, 14646, 9, 3.1, NULL, 14629, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlInputCloseCallback,4, 14646, 6, 3.1, NULL, 14629, NULL)
#elif defined __ia64__
CheckTypeSize(xmlInputCloseCallback,8, 14646, 3, 3.1, NULL, 14629, NULL)
#elif defined __i386__
CheckTypeSize(xmlInputCloseCallback,4, 14646, 2, 3.1, NULL, 14629, NULL)
#else
Msg("Find size of xmlInputCloseCallback (14646)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14629,NULL);\n",architecture,14646,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlParserInputBuffer,64, 14647, 12, 3.1, NULL, 14643, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlParserInputBuffer,64, 14647, 11, 3.1, NULL, 14643, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlParserInputBuffer,36, 14647, 10, 3.1, NULL, 14643, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlParserInputBuffer,64, 14647, 9, 3.1, NULL, 14643, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlParserInputBuffer,36, 14647, 6, 3.1, NULL, 14643, NULL)
#elif defined __ia64__
CheckTypeSize(xmlParserInputBuffer,64, 14647, 3, 3.1, NULL, 14643, NULL)
#elif defined __i386__
CheckTypeSize(xmlParserInputBuffer,36, 14647, 2, 3.1, NULL, 14643, NULL)
#else
Msg("Find size of xmlParserInputBuffer (14647)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14643,NULL);\n",architecture,14647,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlParserInputBufferPtr,8, 14649, 12, 3.1, NULL, 14648, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlParserInputBufferPtr,8, 14649, 11, 3.1, NULL, 14648, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlParserInputBufferPtr,4, 14649, 10, 3.1, NULL, 14648, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlParserInputBufferPtr,8, 14649, 9, 3.1, NULL, 14648, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlParserInputBufferPtr,4, 14649, 6, 3.1, NULL, 14648, NULL)
#elif defined __ia64__
CheckTypeSize(xmlParserInputBufferPtr,8, 14649, 3, 3.1, NULL, 14648, NULL)
#elif defined __i386__
CheckTypeSize(xmlParserInputBufferPtr,4, 14649, 2, 3.1, NULL, 14648, NULL)
#else
Msg("Find size of xmlParserInputBufferPtr (14649)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14648,NULL);\n",architecture,14649,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlParserInputDeallocate,8, 14651, 12, 3.1, NULL, 14650, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlParserInputDeallocate,8, 14651, 11, 3.1, NULL, 14650, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlParserInputDeallocate,4, 14651, 10, 3.1, NULL, 14650, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlParserInputDeallocate,8, 14651, 9, 3.1, NULL, 14650, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlParserInputDeallocate,4, 14651, 6, 3.1, NULL, 14650, NULL)
#elif defined __ia64__
CheckTypeSize(xmlParserInputDeallocate,8, 14651, 3, 3.1, NULL, 14650, NULL)
#elif defined __i386__
CheckTypeSize(xmlParserInputDeallocate,4, 14651, 2, 3.1, NULL, 14650, NULL)
#else
Msg("Find size of xmlParserInputDeallocate (14651)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14650,NULL);\n",architecture,14651,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlParserInput,104, 14652, 12, 3.1, NULL, 14642, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlParserInput,104, 14652, 11, 3.1, NULL, 14642, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlParserInput,60, 14652, 10, 3.1, NULL, 14642, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlParserInput,104, 14652, 9, 3.1, NULL, 14642, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlParserInput,60, 14652, 6, 3.1, NULL, 14642, NULL)
#elif defined __ia64__
CheckTypeSize(xmlParserInput,104, 14652, 3, 3.1, NULL, 14642, NULL)
#elif defined __i386__
CheckTypeSize(xmlParserInput,60, 14652, 2, 3.1, NULL, 14642, NULL)
#else
Msg("Find size of xmlParserInput (14652)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14642,NULL);\n",architecture,14652,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlParserInputPtr,8, 14654, 12, 3.1, NULL, 14653, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlParserInputPtr,8, 14654, 11, 3.1, NULL, 14653, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlParserInputPtr,4, 14654, 10, 3.1, NULL, 14653, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlParserInputPtr,8, 14654, 9, 3.1, NULL, 14653, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlParserInputPtr,4, 14654, 6, 3.1, NULL, 14653, NULL)
#elif defined __ia64__
CheckTypeSize(xmlParserInputPtr,8, 14654, 3, 3.1, NULL, 14653, NULL)
#elif defined __i386__
CheckTypeSize(xmlParserInputPtr,4, 14654, 2, 3.1, NULL, 14653, NULL)
#else
Msg("Find size of xmlParserInputPtr (14654)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14653,NULL);\n",architecture,14654,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlGenericErrorFunc,8, 14656, 12, 3.1, NULL, 14655, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlGenericErrorFunc,8, 14656, 11, 3.1, NULL, 14655, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlGenericErrorFunc,4, 14656, 10, 3.1, NULL, 14655, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlGenericErrorFunc,8, 14656, 9, 3.1, NULL, 14655, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlGenericErrorFunc,4, 14656, 6, 3.1, NULL, 14655, NULL)
#elif defined __ia64__
CheckTypeSize(xmlGenericErrorFunc,8, 14656, 3, 3.1, NULL, 14655, NULL)
#elif defined __i386__
CheckTypeSize(xmlGenericErrorFunc,4, 14656, 2, 3.1, NULL, 14655, NULL)
#else
Msg("Find size of xmlGenericErrorFunc (14656)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14655,NULL);\n",architecture,14656,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _xmlError,88, 14657, 12, , NULL, 0, NULL)
CheckMemberSize(struct _xmlError,code,4,12,47918)
CheckOffset(struct _xmlError,code,4,12,47918)
CheckMemberSize(struct _xmlError,message,8,12,47919)
CheckOffset(struct _xmlError,message,8,12,47919)
CheckMemberSize(struct _xmlError,level,4,12,47924)
CheckOffset(struct _xmlError,level,16,12,47924)
CheckMemberSize(struct _xmlError,file,8,12,47925)
CheckOffset(struct _xmlError,file,24,12,47925)
CheckMemberSize(struct _xmlError,line,4,12,47926)
CheckOffset(struct _xmlError,line,32,12,47926)
CheckMemberSize(struct _xmlError,str1,8,12,47927)
CheckOffset(struct _xmlError,str1,40,12,47927)
CheckMemberSize(struct _xmlError,str2,8,12,47928)
CheckOffset(struct _xmlError,str2,48,12,47928)
CheckMemberSize(struct _xmlError,str3,8,12,47929)
CheckOffset(struct _xmlError,str3,56,12,47929)
CheckMemberSize(struct _xmlError,int1,4,12,47930)
CheckOffset(struct _xmlError,int1,64,12,47930)
CheckMemberSize(struct _xmlError,int2,4,12,47931)
CheckOffset(struct _xmlError,int2,68,12,47931)
CheckMemberSize(struct _xmlError,ctxt,8,12,47932)
CheckOffset(struct _xmlError,ctxt,72,12,47932)
CheckMemberSize(struct _xmlError,node,8,12,47933)
CheckOffset(struct _xmlError,node,80,12,47933)
#elif defined __x86_64__
CheckTypeSize(struct _xmlError,88, 14657, 11, , NULL, 0, NULL)
CheckMemberSize(struct _xmlError,code,4,11,47918)
CheckOffset(struct _xmlError,code,4,11,47918)
CheckMemberSize(struct _xmlError,message,8,11,47919)
CheckOffset(struct _xmlError,message,8,11,47919)
CheckMemberSize(struct _xmlError,level,4,11,47924)
CheckOffset(struct _xmlError,level,16,11,47924)
CheckMemberSize(struct _xmlError,file,8,11,47925)
CheckOffset(struct _xmlError,file,24,11,47925)
CheckMemberSize(struct _xmlError,line,4,11,47926)
CheckOffset(struct _xmlError,line,32,11,47926)
CheckMemberSize(struct _xmlError,str1,8,11,47927)
CheckOffset(struct _xmlError,str1,40,11,47927)
CheckMemberSize(struct _xmlError,str2,8,11,47928)
CheckOffset(struct _xmlError,str2,48,11,47928)
CheckMemberSize(struct _xmlError,str3,8,11,47929)
CheckOffset(struct _xmlError,str3,56,11,47929)
CheckMemberSize(struct _xmlError,int1,4,11,47930)
CheckOffset(struct _xmlError,int1,64,11,47930)
CheckMemberSize(struct _xmlError,int2,4,11,47931)
CheckOffset(struct _xmlError,int2,68,11,47931)
CheckMemberSize(struct _xmlError,ctxt,8,11,47932)
CheckOffset(struct _xmlError,ctxt,72,11,47932)
CheckMemberSize(struct _xmlError,node,8,11,47933)
CheckOffset(struct _xmlError,node,80,11,47933)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _xmlError,52, 14657, 10, , NULL, 0, NULL)
CheckMemberSize(struct _xmlError,code,4,10,47918)
CheckOffset(struct _xmlError,code,4,10,47918)
CheckMemberSize(struct _xmlError,message,4,10,47919)
CheckOffset(struct _xmlError,message,8,10,47919)
CheckMemberSize(struct _xmlError,level,4,10,47924)
CheckOffset(struct _xmlError,level,12,10,47924)
CheckMemberSize(struct _xmlError,file,4,10,47925)
CheckOffset(struct _xmlError,file,16,10,47925)
CheckMemberSize(struct _xmlError,line,4,10,47926)
CheckOffset(struct _xmlError,line,20,10,47926)
CheckMemberSize(struct _xmlError,str1,4,10,47927)
CheckOffset(struct _xmlError,str1,24,10,47927)
CheckMemberSize(struct _xmlError,str2,4,10,47928)
CheckOffset(struct _xmlError,str2,28,10,47928)
CheckMemberSize(struct _xmlError,str3,4,10,47929)
CheckOffset(struct _xmlError,str3,32,10,47929)
CheckMemberSize(struct _xmlError,int1,4,10,47930)
CheckOffset(struct _xmlError,int1,36,10,47930)
CheckMemberSize(struct _xmlError,int2,4,10,47931)
CheckOffset(struct _xmlError,int2,40,10,47931)
CheckMemberSize(struct _xmlError,ctxt,4,10,47932)
CheckOffset(struct _xmlError,ctxt,44,10,47932)
CheckMemberSize(struct _xmlError,node,4,10,47933)
CheckOffset(struct _xmlError,node,48,10,47933)
#elif defined __powerpc64__
CheckTypeSize(struct _xmlError,88, 14657, 9, , NULL, 0, NULL)
CheckMemberSize(struct _xmlError,code,4,9,47918)
CheckOffset(struct _xmlError,code,4,9,47918)
CheckMemberSize(struct _xmlError,message,8,9,47919)
CheckOffset(struct _xmlError,message,8,9,47919)
CheckMemberSize(struct _xmlError,level,4,9,47924)
CheckOffset(struct _xmlError,level,16,9,47924)
CheckMemberSize(struct _xmlError,file,8,9,47925)
CheckOffset(struct _xmlError,file,24,9,47925)
CheckMemberSize(struct _xmlError,line,4,9,47926)
CheckOffset(struct _xmlError,line,32,9,47926)
CheckMemberSize(struct _xmlError,str1,8,9,47927)
CheckOffset(struct _xmlError,str1,40,9,47927)
CheckMemberSize(struct _xmlError,str2,8,9,47928)
CheckOffset(struct _xmlError,str2,48,9,47928)
CheckMemberSize(struct _xmlError,str3,8,9,47929)
CheckOffset(struct _xmlError,str3,56,9,47929)
CheckMemberSize(struct _xmlError,int1,4,9,47930)
CheckOffset(struct _xmlError,int1,64,9,47930)
CheckMemberSize(struct _xmlError,int2,4,9,47931)
CheckOffset(struct _xmlError,int2,68,9,47931)
CheckMemberSize(struct _xmlError,ctxt,8,9,47932)
CheckOffset(struct _xmlError,ctxt,72,9,47932)
CheckMemberSize(struct _xmlError,node,8,9,47933)
CheckOffset(struct _xmlError,node,80,9,47933)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _xmlError,52, 14657, 6, , NULL, 0, NULL)
CheckMemberSize(struct _xmlError,code,4,6,47918)
CheckOffset(struct _xmlError,code,4,6,47918)
CheckMemberSize(struct _xmlError,message,4,6,47919)
CheckOffset(struct _xmlError,message,8,6,47919)
CheckMemberSize(struct _xmlError,level,4,6,47924)
CheckOffset(struct _xmlError,level,12,6,47924)
CheckMemberSize(struct _xmlError,file,4,6,47925)
CheckOffset(struct _xmlError,file,16,6,47925)
CheckMemberSize(struct _xmlError,line,4,6,47926)
CheckOffset(struct _xmlError,line,20,6,47926)
CheckMemberSize(struct _xmlError,str1,4,6,47927)
CheckOffset(struct _xmlError,str1,24,6,47927)
CheckMemberSize(struct _xmlError,str2,4,6,47928)
CheckOffset(struct _xmlError,str2,28,6,47928)
CheckMemberSize(struct _xmlError,str3,4,6,47929)
CheckOffset(struct _xmlError,str3,32,6,47929)
CheckMemberSize(struct _xmlError,int1,4,6,47930)
CheckOffset(struct _xmlError,int1,36,6,47930)
CheckMemberSize(struct _xmlError,int2,4,6,47931)
CheckOffset(struct _xmlError,int2,40,6,47931)
CheckMemberSize(struct _xmlError,ctxt,4,6,47932)
CheckOffset(struct _xmlError,ctxt,44,6,47932)
CheckMemberSize(struct _xmlError,node,4,6,47933)
CheckOffset(struct _xmlError,node,48,6,47933)
#elif defined __ia64__
CheckTypeSize(struct _xmlError,88, 14657, 3, , NULL, 0, NULL)
CheckMemberSize(struct _xmlError,code,4,3,47918)
CheckOffset(struct _xmlError,code,4,3,47918)
CheckMemberSize(struct _xmlError,message,8,3,47919)
CheckOffset(struct _xmlError,message,8,3,47919)
CheckMemberSize(struct _xmlError,level,4,3,47924)
CheckOffset(struct _xmlError,level,16,3,47924)
CheckMemberSize(struct _xmlError,file,8,3,47925)
CheckOffset(struct _xmlError,file,24,3,47925)
CheckMemberSize(struct _xmlError,line,4,3,47926)
CheckOffset(struct _xmlError,line,32,3,47926)
CheckMemberSize(struct _xmlError,str1,8,3,47927)
CheckOffset(struct _xmlError,str1,40,3,47927)
CheckMemberSize(struct _xmlError,str2,8,3,47928)
CheckOffset(struct _xmlError,str2,48,3,47928)
CheckMemberSize(struct _xmlError,str3,8,3,47929)
CheckOffset(struct _xmlError,str3,56,3,47929)
CheckMemberSize(struct _xmlError,int1,4,3,47930)
CheckOffset(struct _xmlError,int1,64,3,47930)
CheckMemberSize(struct _xmlError,int2,4,3,47931)
CheckOffset(struct _xmlError,int2,68,3,47931)
CheckMemberSize(struct _xmlError,ctxt,8,3,47932)
CheckOffset(struct _xmlError,ctxt,72,3,47932)
CheckMemberSize(struct _xmlError,node,8,3,47933)
CheckOffset(struct _xmlError,node,80,3,47933)
#elif defined __i386__
CheckTypeSize(struct _xmlError,52, 14657, 2, , NULL, 0, NULL)
CheckMemberSize(struct _xmlError,code,4,2,47918)
CheckOffset(struct _xmlError,code,4,2,47918)
CheckMemberSize(struct _xmlError,message,4,2,47919)
CheckOffset(struct _xmlError,message,8,2,47919)
CheckMemberSize(struct _xmlError,level,4,2,47924)
CheckOffset(struct _xmlError,level,12,2,47924)
CheckMemberSize(struct _xmlError,file,4,2,47925)
CheckOffset(struct _xmlError,file,16,2,47925)
CheckMemberSize(struct _xmlError,line,4,2,47926)
CheckOffset(struct _xmlError,line,20,2,47926)
CheckMemberSize(struct _xmlError,str1,4,2,47927)
CheckOffset(struct _xmlError,str1,24,2,47927)
CheckMemberSize(struct _xmlError,str2,4,2,47928)
CheckOffset(struct _xmlError,str2,28,2,47928)
CheckMemberSize(struct _xmlError,str3,4,2,47929)
CheckOffset(struct _xmlError,str3,32,2,47929)
CheckMemberSize(struct _xmlError,int1,4,2,47930)
CheckOffset(struct _xmlError,int1,36,2,47930)
CheckMemberSize(struct _xmlError,int2,4,2,47931)
CheckOffset(struct _xmlError,int2,40,2,47931)
CheckMemberSize(struct _xmlError,ctxt,4,2,47932)
CheckOffset(struct _xmlError,ctxt,44,2,47932)
CheckMemberSize(struct _xmlError,node,4,2,47933)
CheckOffset(struct _xmlError,node,48,2,47933)
#elif 1
CheckTypeSize(struct _xmlError,0, 14657, 1, , NULL, 0, NULL)
Msg("Missing member data for _xmlError on All\n");
CheckOffset(struct _xmlError,domain,0,1,47917)
#endif

#if defined __s390x__
CheckTypeSize(xmlErrorLevel,4, 14659, 12, 3.1, NULL, 14658, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlErrorLevel,4, 14659, 11, 3.1, NULL, 14658, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlErrorLevel,4, 14659, 10, 3.1, NULL, 14658, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlErrorLevel,4, 14659, 9, 3.1, NULL, 14658, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlErrorLevel,4, 14659, 6, 3.1, NULL, 14658, NULL)
#elif defined __ia64__
CheckTypeSize(xmlErrorLevel,4, 14659, 3, 3.1, NULL, 14658, NULL)
#elif defined __i386__
CheckTypeSize(xmlErrorLevel,4, 14659, 2, 3.1, NULL, 14658, NULL)
#else
Msg("Find size of xmlErrorLevel (14659)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14658,NULL);\n",architecture,14659,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlError,88, 14660, 12, 3.1, NULL, 14657, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlError,88, 14660, 11, 3.1, NULL, 14657, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlError,52, 14660, 10, 3.1, NULL, 14657, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlError,88, 14660, 9, 3.1, NULL, 14657, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlError,52, 14660, 6, 3.1, NULL, 14657, NULL)
#elif defined __ia64__
CheckTypeSize(xmlError,88, 14660, 3, 3.1, NULL, 14657, NULL)
#elif defined __i386__
CheckTypeSize(xmlError,52, 14660, 2, 3.1, NULL, 14657, NULL)
#else
Msg("Find size of xmlError (14660)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14657,NULL);\n",architecture,14660,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlErrorPtr,8, 14662, 12, 3.1, NULL, 14661, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlErrorPtr,8, 14662, 11, 3.1, NULL, 14661, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlErrorPtr,4, 14662, 10, 3.1, NULL, 14661, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlErrorPtr,8, 14662, 9, 3.1, NULL, 14661, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlErrorPtr,4, 14662, 6, 3.1, NULL, 14661, NULL)
#elif defined __ia64__
CheckTypeSize(xmlErrorPtr,8, 14662, 3, 3.1, NULL, 14661, NULL)
#elif defined __i386__
CheckTypeSize(xmlErrorPtr,4, 14662, 2, 3.1, NULL, 14661, NULL)
#else
Msg("Find size of xmlErrorPtr (14662)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14661,NULL);\n",architecture,14662,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlStructuredErrorFunc,8, 14665, 12, 3.1, NULL, 14664, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlStructuredErrorFunc,8, 14665, 11, 3.1, NULL, 14664, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlStructuredErrorFunc,4, 14665, 10, 3.1, NULL, 14664, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlStructuredErrorFunc,8, 14665, 9, 3.1, NULL, 14664, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlStructuredErrorFunc,4, 14665, 6, 3.1, NULL, 14664, NULL)
#elif defined __ia64__
CheckTypeSize(xmlStructuredErrorFunc,8, 14665, 3, 3.1, NULL, 14664, NULL)
#elif defined __i386__
CheckTypeSize(xmlStructuredErrorFunc,4, 14665, 2, 3.1, NULL, 14664, NULL)
#else
Msg("Find size of xmlStructuredErrorFunc (14665)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14664,NULL);\n",architecture,14665,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlErrorDomain,4, 14667, 12, 3.1, NULL, 14666, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlErrorDomain,4, 14667, 11, 3.1, NULL, 14666, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlErrorDomain,4, 14667, 10, 3.1, NULL, 14666, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlErrorDomain,4, 14667, 9, 3.1, NULL, 14666, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlErrorDomain,4, 14667, 6, 3.1, NULL, 14666, NULL)
#elif defined __ia64__
CheckTypeSize(xmlErrorDomain,4, 14667, 3, 3.1, NULL, 14666, NULL)
#elif defined __i386__
CheckTypeSize(xmlErrorDomain,4, 14667, 2, 3.1, NULL, 14666, NULL)
#else
Msg("Find size of xmlErrorDomain (14667)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14666,NULL);\n",architecture,14667,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlParserErrors,4, 14669, 12, 3.1, NULL, 14668, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlParserErrors,4, 14669, 11, 3.1, NULL, 14668, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlParserErrors,4, 14669, 10, 3.1, NULL, 14668, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlParserErrors,4, 14669, 9, 3.1, NULL, 14668, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlParserErrors,4, 14669, 6, 3.1, NULL, 14668, NULL)
#elif defined __ia64__
CheckTypeSize(xmlParserErrors,4, 14669, 3, 3.1, NULL, 14668, NULL)
#elif defined __i386__
CheckTypeSize(xmlParserErrors,4, 14669, 2, 3.1, NULL, 14668, NULL)
#else
Msg("Find size of xmlParserErrors (14669)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14668, NULL);\n",architecture,14669,0);
#endif

#if defined __s390x__
/* S390X */
typedef int (*xmlInputReadCallback_db)(void *, char *, int);
CheckFunctionTypedef(xmlInputReadCallback,xmlInputReadCallback_db);
#elif defined __x86_64__
/* x86-64 */
typedef int (*xmlInputReadCallback_db)(void *, char *, int);
CheckFunctionTypedef(xmlInputReadCallback,xmlInputReadCallback_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef int (*xmlInputReadCallback_db)(void *, char *, int);
CheckFunctionTypedef(xmlInputReadCallback,xmlInputReadCallback_db);
#elif defined __powerpc64__
/* PPC64 */
typedef int (*xmlInputReadCallback_db)(void *, char *, int);
CheckFunctionTypedef(xmlInputReadCallback,xmlInputReadCallback_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef int (*xmlInputReadCallback_db)(void *, char *, int);
CheckFunctionTypedef(xmlInputReadCallback,xmlInputReadCallback_db);
#elif defined __ia64__
/* IA64 */
typedef int (*xmlInputReadCallback_db)(void *, char *, int);
CheckFunctionTypedef(xmlInputReadCallback,xmlInputReadCallback_db);
#elif defined __i386__
/* IA32 */
typedef int (*xmlInputReadCallback_db)(void *, char *, int);
CheckFunctionTypedef(xmlInputReadCallback,xmlInputReadCallback_db);
#endif

#if defined __s390x__
/* S390X */
typedef int (*xmlInputCloseCallback_db)(void *);
CheckFunctionTypedef(xmlInputCloseCallback,xmlInputCloseCallback_db);
#elif defined __x86_64__
/* x86-64 */
typedef int (*xmlInputCloseCallback_db)(void *);
CheckFunctionTypedef(xmlInputCloseCallback,xmlInputCloseCallback_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef int (*xmlInputCloseCallback_db)(void *);
CheckFunctionTypedef(xmlInputCloseCallback,xmlInputCloseCallback_db);
#elif defined __powerpc64__
/* PPC64 */
typedef int (*xmlInputCloseCallback_db)(void *);
CheckFunctionTypedef(xmlInputCloseCallback,xmlInputCloseCallback_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef int (*xmlInputCloseCallback_db)(void *);
CheckFunctionTypedef(xmlInputCloseCallback,xmlInputCloseCallback_db);
#elif defined __ia64__
/* IA64 */
typedef int (*xmlInputCloseCallback_db)(void *);
CheckFunctionTypedef(xmlInputCloseCallback,xmlInputCloseCallback_db);
#elif defined __i386__
/* IA32 */
typedef int (*xmlInputCloseCallback_db)(void *);
CheckFunctionTypedef(xmlInputCloseCallback,xmlInputCloseCallback_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*xmlParserInputDeallocate_db)(xmlChar *);
CheckFunctionTypedef(xmlParserInputDeallocate,xmlParserInputDeallocate_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*xmlParserInputDeallocate_db)(xmlChar *);
CheckFunctionTypedef(xmlParserInputDeallocate,xmlParserInputDeallocate_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*xmlParserInputDeallocate_db)(xmlChar *);
CheckFunctionTypedef(xmlParserInputDeallocate,xmlParserInputDeallocate_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*xmlParserInputDeallocate_db)(xmlChar *);
CheckFunctionTypedef(xmlParserInputDeallocate,xmlParserInputDeallocate_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*xmlParserInputDeallocate_db)(xmlChar *);
CheckFunctionTypedef(xmlParserInputDeallocate,xmlParserInputDeallocate_db);
#elif defined __ia64__
/* IA64 */
typedef void (*xmlParserInputDeallocate_db)(xmlChar *);
CheckFunctionTypedef(xmlParserInputDeallocate,xmlParserInputDeallocate_db);
#elif defined __i386__
/* IA32 */
typedef void (*xmlParserInputDeallocate_db)(xmlChar *);
CheckFunctionTypedef(xmlParserInputDeallocate,xmlParserInputDeallocate_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*xmlGenericErrorFunc_db)(void *, const char *, ...);
CheckFunctionTypedef(xmlGenericErrorFunc,xmlGenericErrorFunc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*xmlGenericErrorFunc_db)(void *, const char *, ...);
CheckFunctionTypedef(xmlGenericErrorFunc,xmlGenericErrorFunc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*xmlGenericErrorFunc_db)(void *, const char *, ...);
CheckFunctionTypedef(xmlGenericErrorFunc,xmlGenericErrorFunc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*xmlGenericErrorFunc_db)(void *, const char *, ...);
CheckFunctionTypedef(xmlGenericErrorFunc,xmlGenericErrorFunc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*xmlGenericErrorFunc_db)(void *, const char *, ...);
CheckFunctionTypedef(xmlGenericErrorFunc,xmlGenericErrorFunc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*xmlGenericErrorFunc_db)(void *, const char *, ...);
CheckFunctionTypedef(xmlGenericErrorFunc,xmlGenericErrorFunc_db);
#elif defined __i386__
/* IA32 */
typedef void (*xmlGenericErrorFunc_db)(void *, const char *, ...);
CheckFunctionTypedef(xmlGenericErrorFunc,xmlGenericErrorFunc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*xmlStructuredErrorFunc_db)(void *, xmlErrorPtr);
CheckFunctionTypedef(xmlStructuredErrorFunc,xmlStructuredErrorFunc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*xmlStructuredErrorFunc_db)(void *, xmlErrorPtr);
CheckFunctionTypedef(xmlStructuredErrorFunc,xmlStructuredErrorFunc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*xmlStructuredErrorFunc_db)(void *, xmlErrorPtr);
CheckFunctionTypedef(xmlStructuredErrorFunc,xmlStructuredErrorFunc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*xmlStructuredErrorFunc_db)(void *, xmlErrorPtr);
CheckFunctionTypedef(xmlStructuredErrorFunc,xmlStructuredErrorFunc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*xmlStructuredErrorFunc_db)(void *, xmlErrorPtr);
CheckFunctionTypedef(xmlStructuredErrorFunc,xmlStructuredErrorFunc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*xmlStructuredErrorFunc_db)(void *, xmlErrorPtr);
CheckFunctionTypedef(xmlStructuredErrorFunc,xmlStructuredErrorFunc_db);
#elif defined __i386__
/* IA32 */
typedef void (*xmlStructuredErrorFunc_db)(void *, xmlErrorPtr);
CheckFunctionTypedef(xmlStructuredErrorFunc,xmlStructuredErrorFunc_db);
#endif

extern void xmlParserPrintFileInfo_db(xmlParserInputPtr);
CheckInterfacedef(xmlParserPrintFileInfo,xmlParserPrintFileInfo_db);
extern void xmlSetGenericErrorFunc_db(void *, xmlGenericErrorFunc);
CheckInterfacedef(xmlSetGenericErrorFunc,xmlSetGenericErrorFunc_db);
extern void xmlCtxtResetLastError_db(void *);
CheckInterfacedef(xmlCtxtResetLastError,xmlCtxtResetLastError_db);
extern void xmlParserValidityWarning_db(void *, const char *, ...);
CheckInterfacedef(xmlParserValidityWarning,xmlParserValidityWarning_db);
extern int xmlCopyError_db(xmlErrorPtr, xmlErrorPtr);
CheckInterfacedef(xmlCopyError,xmlCopyError_db);
extern void initGenericErrorDefaultFunc_db(xmlGenericErrorFunc *);
CheckInterfacedef(initGenericErrorDefaultFunc,initGenericErrorDefaultFunc_db);
extern xmlErrorPtr xmlCtxtGetLastError_db(void *);
CheckInterfacedef(xmlCtxtGetLastError,xmlCtxtGetLastError_db);
extern void xmlParserPrintFileContext_db(xmlParserInputPtr);
CheckInterfacedef(xmlParserPrintFileContext,xmlParserPrintFileContext_db);
extern void xmlResetLastError_db(void);
CheckInterfacedef(xmlResetLastError,xmlResetLastError_db);
extern void xmlSetStructuredErrorFunc_db(void *, xmlStructuredErrorFunc);
CheckInterfacedef(xmlSetStructuredErrorFunc,xmlSetStructuredErrorFunc_db);
extern void xmlParserWarning_db(void *, const char *, ...);
CheckInterfacedef(xmlParserWarning,xmlParserWarning_db);
extern void xmlResetError_db(xmlErrorPtr);
CheckInterfacedef(xmlResetError,xmlResetError_db);
extern xmlErrorPtr xmlGetLastError_db(void);
CheckInterfacedef(xmlGetLastError,xmlGetLastError_db);
extern void xmlParserValidityError_db(void *, const char *, ...);
CheckInterfacedef(xmlParserValidityError,xmlParserValidityError_db);
extern void xmlParserError_db(void *, const char *, ...);
CheckInterfacedef(xmlParserError,xmlParserError_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in libxml2/libxml/xmlerror.h\n\n",pcnt,cnt);
return cnt;
#endif

}
