/*
 * Test of zlib.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "zlib.h"



#ifdef TET_TEST
void zlib_h()
{
#else
int zlib_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in zlib.h\n");
#endif

printf("Checking data structures in zlib.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef Z_NO_FLUSH
	CompareConstant(Z_NO_FLUSH,0,4213,architecture)
#else
Msg( "Error: Constant not found: Z_NO_FLUSH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Z_PARTIAL_FLUSH
	CompareConstant(Z_PARTIAL_FLUSH,1,4214,architecture)
#else
Msg( "Error: Constant not found: Z_PARTIAL_FLUSH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Z_SYNC_FLUSH
	CompareConstant(Z_SYNC_FLUSH,2,4215,architecture)
#else
Msg( "Error: Constant not found: Z_SYNC_FLUSH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Z_FULL_FLUSH
	CompareConstant(Z_FULL_FLUSH,3,4216,architecture)
#else
Msg( "Error: Constant not found: Z_FULL_FLUSH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Z_FINISH
	CompareConstant(Z_FINISH,4,4217,architecture)
#else
Msg( "Error: Constant not found: Z_FINISH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Z_OK
	CompareConstant(Z_OK,0,4218,architecture)
#else
Msg( "Error: Constant not found: Z_OK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Z_STREAM_END
	CompareConstant(Z_STREAM_END,1,4219,architecture)
#else
Msg( "Error: Constant not found: Z_STREAM_END\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Z_NEED_DICT
	CompareConstant(Z_NEED_DICT,2,4220,architecture)
#else
Msg( "Error: Constant not found: Z_NEED_DICT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Z_ERRNO
	CompareConstant(Z_ERRNO,(-1),4221,architecture)
#else
Msg( "Error: Constant not found: Z_ERRNO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Z_STREAM_ERROR
	CompareConstant(Z_STREAM_ERROR,(-2),4222,architecture)
#else
Msg( "Error: Constant not found: Z_STREAM_ERROR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Z_DATA_ERROR
	CompareConstant(Z_DATA_ERROR,(-3),4223,architecture)
#else
Msg( "Error: Constant not found: Z_DATA_ERROR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Z_MEM_ERROR
	CompareConstant(Z_MEM_ERROR,(-4),4224,architecture)
#else
Msg( "Error: Constant not found: Z_MEM_ERROR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Z_BUF_ERROR
	CompareConstant(Z_BUF_ERROR,(-5),4225,architecture)
#else
Msg( "Error: Constant not found: Z_BUF_ERROR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Z_VERSION_ERROR
	CompareConstant(Z_VERSION_ERROR,(-6),4226,architecture)
#else
Msg( "Error: Constant not found: Z_VERSION_ERROR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Z_NO_COMPRESSION
	CompareConstant(Z_NO_COMPRESSION,0,4227,architecture)
#else
Msg( "Error: Constant not found: Z_NO_COMPRESSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Z_BEST_SPEED
	CompareConstant(Z_BEST_SPEED,1,4228,architecture)
#else
Msg( "Error: Constant not found: Z_BEST_SPEED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Z_BEST_COMPRESSION
	CompareConstant(Z_BEST_COMPRESSION,9,4229,architecture)
#else
Msg( "Error: Constant not found: Z_BEST_COMPRESSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Z_DEFAULT_COMPRESSION
	CompareConstant(Z_DEFAULT_COMPRESSION,(-1),4230,architecture)
#else
Msg( "Error: Constant not found: Z_DEFAULT_COMPRESSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Z_FILTERED
	CompareConstant(Z_FILTERED,1,4231,architecture)
#else
Msg( "Error: Constant not found: Z_FILTERED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Z_HUFFMAN_ONLY
	CompareConstant(Z_HUFFMAN_ONLY,2,4232,architecture)
#else
Msg( "Error: Constant not found: Z_HUFFMAN_ONLY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Z_DEFAULT_STRATEGY
	CompareConstant(Z_DEFAULT_STRATEGY,0,4233,architecture)
#else
Msg( "Error: Constant not found: Z_DEFAULT_STRATEGY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Z_BINARY
	CompareConstant(Z_BINARY,0,4234,architecture)
#else
Msg( "Error: Constant not found: Z_BINARY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Z_ASCII
	CompareConstant(Z_ASCII,1,4235,architecture)
#else
Msg( "Error: Constant not found: Z_ASCII\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Z_UNKNOWN
	CompareConstant(Z_UNKNOWN,2,4236,architecture)
#else
Msg( "Error: Constant not found: Z_UNKNOWN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Z_DEFLATED
	CompareConstant(Z_DEFLATED,8,4237,architecture)
#else
Msg( "Error: Constant not found: Z_DEFLATED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Z_NULL
	CompareConstant(Z_NULL,0,4238,architecture)
#else
Msg( "Error: Constant not found: Z_NULL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for deflateInit(strm,level) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for inflateInit(strm) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for deflateInit2(strm,level,method,windowBits,memLevel,strategy) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for inflateInit2(strm,windowBits) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef MAX_MEM_LEVEL
	CompareConstant(MAX_MEM_LEVEL,9,5021,architecture)
#else
Msg( "Error: Constant not found: MAX_MEM_LEVEL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MAX_WBITS
	CompareConstant(MAX_WBITS,15,5022,architecture)
#else
Msg( "Error: Constant not found: MAX_WBITS\n");
cnt++;
#endif

#endif

#if __i386__
CheckTypeSize(charf,1, 10167, 2)
#elif __ia64__
CheckTypeSize(charf,1, 10167, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(charf,1, 10167, 6)
#elif __powerpc64__
CheckTypeSize(charf,1, 10167, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(charf,1, 10167, 10)
#elif __s390x__
CheckTypeSize(charf,1, 10167, 12)
#elif __x86_64__
CheckTypeSize(charf,1, 10167, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10167,0);
Msg("Find size of charf (10167)\n");
#endif

#if __i386__
CheckTypeSize(intf,4, 10168, 2)
#elif __ia64__
CheckTypeSize(intf,4, 10168, 3)
#elif __s390__ && !__s390x__
CheckTypeSize(intf,4, 10168, 10)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(intf,4, 10168, 6)
#elif __powerpc64__
CheckTypeSize(intf,4, 10168, 9)
#elif __s390x__
CheckTypeSize(intf,4, 10168, 12)
#elif __x86_64__
CheckTypeSize(intf,4, 10168, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10168,0);
Msg("Find size of intf (10168)\n");
#endif

#if __ia64__
#elif __i386__
#elif __powerpc__ && !__powerpc64__
#elif __s390x__
#elif __s390__ && !__s390x__
#elif __x86_64__
#elif __powerpc64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10512,0);
Msg("Find size of const Bytef * (10512)\n");
#endif

#if __ia64__
CheckTypeSize(const uLongf,8, 10517, 3)
#elif __i386__
CheckTypeSize(const uLongf,4, 10517, 2)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(const uLongf,4, 10517, 6)
#elif __s390x__
CheckTypeSize(const uLongf,8, 10517, 12)
#elif __s390__ && !__s390x__
CheckTypeSize(const uLongf,4, 10517, 10)
#elif __x86_64__
CheckTypeSize(const uLongf,8, 10517, 11)
#elif __powerpc64__
CheckTypeSize(const uLongf,8, 10517, 9)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10517,0);
Msg("Find size of const uLongf (10517)\n");
#endif

#if __ia64__
#elif __i386__
#elif __powerpc__ && !__powerpc64__
#elif __s390x__
#elif __s390__ && !__s390x__
#elif __x86_64__
#elif __powerpc64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10518,0);
Msg("Find size of const uLongf * (10518)\n");
#endif

#if __i386__
CheckTypeSize(voidpf,4, 9868, 2)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(voidpf,4, 9868, 6)
#elif __ia64__
CheckTypeSize(voidpf,8, 9868, 3)
#elif __s390__ && !__s390x__
CheckTypeSize(voidpf,4, 9868, 10)
#elif __powerpc64__
CheckTypeSize(voidpf,8, 9868, 9)
#elif __s390x__
CheckTypeSize(voidpf,8, 9868, 12)
#elif __x86_64__
CheckTypeSize(voidpf,8, 9868, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9868,0);
Msg("Find size of voidpf (9868)\n");
#endif

#if __i386__
CheckTypeSize(uInt,4, 9870, 2)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(uInt,4, 9870, 6)
#elif __ia64__
CheckTypeSize(uInt,4, 9870, 3)
#elif __s390__ && !__s390x__
CheckTypeSize(uInt,4, 9870, 10)
#elif __powerpc64__
CheckTypeSize(uInt,4, 9870, 9)
#elif __s390x__
CheckTypeSize(uInt,4, 9870, 12)
#elif __x86_64__
CheckTypeSize(uInt,4, 9870, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9870,0);
Msg("Find size of uInt (9870)\n");
#endif

#if __i386__
CheckTypeSize(uLong,4, 9878, 2)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(uLong,4, 9878, 6)
#elif __ia64__
CheckTypeSize(uLong,8, 9878, 3)
#elif __s390__ && !__s390x__
CheckTypeSize(uLong,4, 9878, 10)
#elif __powerpc64__
CheckTypeSize(uLong,8, 9878, 9)
#elif __s390x__
CheckTypeSize(uLong,8, 9878, 12)
#elif __x86_64__
CheckTypeSize(uLong,8, 9878, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9878,0);
Msg("Find size of uLong (9878)\n");
#endif

#if __i386__
CheckTypeSize(uLongf,4, 9883, 2)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(uLongf,4, 9883, 6)
#elif __ia64__
CheckTypeSize(uLongf,8, 9883, 3)
#elif __s390__ && !__s390x__
CheckTypeSize(uLongf,4, 9883, 10)
#elif __powerpc64__
CheckTypeSize(uLongf,8, 9883, 9)
#elif __s390x__
CheckTypeSize(uLongf,8, 9883, 12)
#elif __x86_64__
CheckTypeSize(uLongf,8, 9883, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9883,0);
Msg("Find size of uLongf (9883)\n");
#endif

#if __i386__
CheckTypeSize(voidp,4, 9885, 2)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(voidp,4, 9885, 6)
#elif __ia64__
CheckTypeSize(voidp,8, 9885, 3)
#elif __s390__ && !__s390x__
CheckTypeSize(voidp,4, 9885, 10)
#elif __powerpc64__
CheckTypeSize(voidp,8, 9885, 9)
#elif __s390x__
CheckTypeSize(voidp,8, 9885, 12)
#elif __x86_64__
CheckTypeSize(voidp,8, 9885, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9885,0);
Msg("Find size of voidp (9885)\n");
#endif

#if __i386__
CheckTypeSize(Byte,1, 10166, 2)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(Byte,1, 10166, 6)
#elif __ia64__
CheckTypeSize(Byte,1, 10166, 3)
#elif __s390__ && !__s390x__
CheckTypeSize(Byte,1, 10166, 10)
#elif __powerpc64__
CheckTypeSize(Byte,1, 10166, 9)
#elif __s390x__
CheckTypeSize(Byte,1, 10166, 12)
#elif __x86_64__
CheckTypeSize(Byte,1, 10166, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10166,0);
Msg("Find size of Byte (10166)\n");
#endif

#if __ia64__
CheckTypeSize(z_off_t,8, 10519, 3)
#elif __i386__
CheckTypeSize(z_off_t,4, 10519, 2)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(z_off_t,4, 10519, 6)
#elif __s390x__
CheckTypeSize(z_off_t,8, 10519, 12)
#elif __s390__ && !__s390x__
CheckTypeSize(z_off_t,4, 10519, 10)
#elif __x86_64__
CheckTypeSize(z_off_t,8, 10519, 11)
#elif __powerpc64__
CheckTypeSize(z_off_t,8, 10519, 9)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10519,0);
Msg("Find size of z_off_t (10519)\n");
#endif

#if __i386__
CheckTypeSize(voidpc,4, 10995, 2)
#elif __powerpc64__
CheckTypeSize(voidpc,8, 10995, 9)
#elif __ia64__
CheckTypeSize(voidpc,8, 10995, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(voidpc,4, 10995, 6)
#elif __x86_64__
CheckTypeSize(voidpc,8, 10995, 11)
#elif __s390x__
CheckTypeSize(voidpc,8, 10995, 12)
#elif __s390__ && !__s390x__
CheckTypeSize(voidpc,4, 10995, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10995,0);
Msg("Find size of voidpc (10995)\n");
#endif

#if __i386__
CheckTypeSize(struct z_stream_s,56, 9875, 2)
CheckMemberSize(struct z_stream_s,next_in,4,2,34067)
CheckOffset(struct z_stream_s,next_in,0,2,34067)
CheckMemberSize(struct z_stream_s,avail_in,4,2,34068)
CheckOffset(struct z_stream_s,avail_in,4,2,34068)
CheckMemberSize(struct z_stream_s,total_in,4,2,34069)
CheckOffset(struct z_stream_s,total_in,8,2,34069)
CheckMemberSize(struct z_stream_s,next_out,4,2,34070)
CheckOffset(struct z_stream_s,next_out,12,2,34070)
CheckMemberSize(struct z_stream_s,avail_out,4,2,34071)
CheckOffset(struct z_stream_s,avail_out,16,2,34071)
CheckMemberSize(struct z_stream_s,total_out,4,2,34072)
CheckOffset(struct z_stream_s,total_out,20,2,34072)
CheckMemberSize(struct z_stream_s,msg,4,2,34073)
CheckOffset(struct z_stream_s,msg,24,2,34073)
CheckMemberSize(struct z_stream_s,state,4,2,34074)
CheckOffset(struct z_stream_s,state,28,2,34074)
CheckMemberSize(struct z_stream_s,zalloc,4,2,34075)
CheckOffset(struct z_stream_s,zalloc,32,2,34075)
CheckMemberSize(struct z_stream_s,zfree,4,2,34076)
CheckOffset(struct z_stream_s,zfree,36,2,34076)
CheckMemberSize(struct z_stream_s,opaque,4,2,34077)
CheckOffset(struct z_stream_s,opaque,40,2,34077)
CheckMemberSize(struct z_stream_s,data_type,4,2,34078)
CheckOffset(struct z_stream_s,data_type,44,2,34078)
CheckMemberSize(struct z_stream_s,adler,4,2,34079)
CheckOffset(struct z_stream_s,adler,48,2,34079)
CheckMemberSize(struct z_stream_s,reserved,4,2,34080)
CheckOffset(struct z_stream_s,reserved,52,2,34080)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct z_stream_s,56, 9875, 6)
CheckMemberSize(struct z_stream_s,avail_in,4,6,34068)
CheckOffset(struct z_stream_s,avail_in,4,6,34068)
CheckMemberSize(struct z_stream_s,total_in,4,6,34069)
CheckOffset(struct z_stream_s,total_in,8,6,34069)
CheckMemberSize(struct z_stream_s,next_out,4,6,34070)
CheckOffset(struct z_stream_s,next_out,12,6,34070)
CheckMemberSize(struct z_stream_s,avail_out,4,6,34071)
CheckOffset(struct z_stream_s,avail_out,16,6,34071)
CheckMemberSize(struct z_stream_s,total_out,4,6,34072)
CheckOffset(struct z_stream_s,total_out,20,6,34072)
CheckMemberSize(struct z_stream_s,msg,4,6,34073)
CheckOffset(struct z_stream_s,msg,24,6,34073)
CheckMemberSize(struct z_stream_s,state,4,6,34074)
CheckOffset(struct z_stream_s,state,28,6,34074)
CheckMemberSize(struct z_stream_s,zalloc,4,6,34075)
CheckOffset(struct z_stream_s,zalloc,32,6,34075)
CheckMemberSize(struct z_stream_s,zfree,4,6,34076)
CheckOffset(struct z_stream_s,zfree,36,6,34076)
CheckMemberSize(struct z_stream_s,opaque,4,6,34077)
CheckOffset(struct z_stream_s,opaque,40,6,34077)
CheckMemberSize(struct z_stream_s,data_type,4,6,34078)
CheckOffset(struct z_stream_s,data_type,44,6,34078)
CheckMemberSize(struct z_stream_s,adler,4,6,34079)
CheckOffset(struct z_stream_s,adler,48,6,34079)
CheckMemberSize(struct z_stream_s,reserved,4,6,34080)
CheckOffset(struct z_stream_s,reserved,52,6,34080)
#elif __ia64__
CheckTypeSize(struct z_stream_s,112, 9875, 3)
CheckMemberSize(struct z_stream_s,avail_in,4,3,34068)
CheckOffset(struct z_stream_s,avail_in,8,3,34068)
CheckMemberSize(struct z_stream_s,total_in,8,3,34069)
CheckOffset(struct z_stream_s,total_in,16,3,34069)
CheckMemberSize(struct z_stream_s,next_out,8,3,34070)
CheckOffset(struct z_stream_s,next_out,24,3,34070)
CheckMemberSize(struct z_stream_s,avail_out,4,3,34071)
CheckOffset(struct z_stream_s,avail_out,32,3,34071)
CheckMemberSize(struct z_stream_s,total_out,8,3,34072)
CheckOffset(struct z_stream_s,total_out,40,3,34072)
CheckMemberSize(struct z_stream_s,msg,8,3,34073)
CheckOffset(struct z_stream_s,msg,48,3,34073)
CheckMemberSize(struct z_stream_s,state,8,3,34074)
CheckOffset(struct z_stream_s,state,56,3,34074)
CheckMemberSize(struct z_stream_s,zalloc,8,3,34075)
CheckOffset(struct z_stream_s,zalloc,64,3,34075)
CheckMemberSize(struct z_stream_s,zfree,8,3,34076)
CheckOffset(struct z_stream_s,zfree,72,3,34076)
CheckMemberSize(struct z_stream_s,opaque,8,3,34077)
CheckOffset(struct z_stream_s,opaque,80,3,34077)
CheckMemberSize(struct z_stream_s,data_type,4,3,34078)
CheckOffset(struct z_stream_s,data_type,88,3,34078)
CheckMemberSize(struct z_stream_s,adler,8,3,34079)
CheckOffset(struct z_stream_s,adler,96,3,34079)
CheckMemberSize(struct z_stream_s,reserved,8,3,34080)
CheckOffset(struct z_stream_s,reserved,104,3,34080)
#elif __s390__ && !__s390x__
CheckTypeSize(struct z_stream_s,56, 9875, 10)
CheckMemberSize(struct z_stream_s,avail_in,4,10,34068)
CheckOffset(struct z_stream_s,avail_in,4,10,34068)
CheckMemberSize(struct z_stream_s,total_in,4,10,34069)
CheckOffset(struct z_stream_s,total_in,8,10,34069)
CheckMemberSize(struct z_stream_s,next_out,4,10,34070)
CheckOffset(struct z_stream_s,next_out,12,10,34070)
CheckMemberSize(struct z_stream_s,avail_out,4,10,34071)
CheckOffset(struct z_stream_s,avail_out,16,10,34071)
CheckMemberSize(struct z_stream_s,total_out,4,10,34072)
CheckOffset(struct z_stream_s,total_out,20,10,34072)
CheckMemberSize(struct z_stream_s,msg,4,10,34073)
CheckOffset(struct z_stream_s,msg,24,10,34073)
CheckMemberSize(struct z_stream_s,state,4,10,34074)
CheckOffset(struct z_stream_s,state,28,10,34074)
CheckMemberSize(struct z_stream_s,zalloc,4,10,34075)
CheckOffset(struct z_stream_s,zalloc,32,10,34075)
CheckMemberSize(struct z_stream_s,zfree,4,10,34076)
CheckOffset(struct z_stream_s,zfree,36,10,34076)
CheckMemberSize(struct z_stream_s,opaque,4,10,34077)
CheckOffset(struct z_stream_s,opaque,40,10,34077)
CheckMemberSize(struct z_stream_s,data_type,4,10,34078)
CheckOffset(struct z_stream_s,data_type,44,10,34078)
CheckMemberSize(struct z_stream_s,adler,4,10,34079)
CheckOffset(struct z_stream_s,adler,48,10,34079)
CheckMemberSize(struct z_stream_s,reserved,4,10,34080)
CheckOffset(struct z_stream_s,reserved,52,10,34080)
#elif __powerpc64__
CheckTypeSize(struct z_stream_s,112, 9875, 9)
CheckMemberSize(struct z_stream_s,avail_in,4,9,34068)
CheckOffset(struct z_stream_s,avail_in,8,9,34068)
CheckMemberSize(struct z_stream_s,total_in,8,9,34069)
CheckOffset(struct z_stream_s,total_in,16,9,34069)
CheckMemberSize(struct z_stream_s,next_out,8,9,34070)
CheckOffset(struct z_stream_s,next_out,24,9,34070)
CheckMemberSize(struct z_stream_s,avail_out,4,9,34071)
CheckOffset(struct z_stream_s,avail_out,32,9,34071)
CheckMemberSize(struct z_stream_s,total_out,8,9,34072)
CheckOffset(struct z_stream_s,total_out,40,9,34072)
CheckMemberSize(struct z_stream_s,msg,8,9,34073)
CheckOffset(struct z_stream_s,msg,48,9,34073)
CheckMemberSize(struct z_stream_s,state,8,9,34074)
CheckOffset(struct z_stream_s,state,56,9,34074)
CheckMemberSize(struct z_stream_s,zalloc,8,9,34075)
CheckOffset(struct z_stream_s,zalloc,64,9,34075)
CheckMemberSize(struct z_stream_s,zfree,8,9,34076)
CheckOffset(struct z_stream_s,zfree,72,9,34076)
CheckMemberSize(struct z_stream_s,opaque,8,9,34077)
CheckOffset(struct z_stream_s,opaque,80,9,34077)
CheckMemberSize(struct z_stream_s,data_type,4,9,34078)
CheckOffset(struct z_stream_s,data_type,88,9,34078)
CheckMemberSize(struct z_stream_s,adler,8,9,34079)
CheckOffset(struct z_stream_s,adler,96,9,34079)
CheckMemberSize(struct z_stream_s,reserved,8,9,34080)
CheckOffset(struct z_stream_s,reserved,104,9,34080)
#elif __s390x__
CheckTypeSize(struct z_stream_s,112, 9875, 12)
CheckMemberSize(struct z_stream_s,avail_in,4,12,34068)
CheckOffset(struct z_stream_s,avail_in,8,12,34068)
CheckMemberSize(struct z_stream_s,total_in,8,12,34069)
CheckOffset(struct z_stream_s,total_in,16,12,34069)
CheckMemberSize(struct z_stream_s,next_out,8,12,34070)
CheckOffset(struct z_stream_s,next_out,24,12,34070)
CheckMemberSize(struct z_stream_s,avail_out,4,12,34071)
CheckOffset(struct z_stream_s,avail_out,32,12,34071)
CheckMemberSize(struct z_stream_s,total_out,8,12,34072)
CheckOffset(struct z_stream_s,total_out,40,12,34072)
CheckMemberSize(struct z_stream_s,msg,8,12,34073)
CheckOffset(struct z_stream_s,msg,48,12,34073)
CheckMemberSize(struct z_stream_s,state,8,12,34074)
CheckOffset(struct z_stream_s,state,56,12,34074)
CheckMemberSize(struct z_stream_s,zalloc,8,12,34075)
CheckOffset(struct z_stream_s,zalloc,64,12,34075)
CheckMemberSize(struct z_stream_s,zfree,8,12,34076)
CheckOffset(struct z_stream_s,zfree,72,12,34076)
CheckMemberSize(struct z_stream_s,opaque,8,12,34077)
CheckOffset(struct z_stream_s,opaque,80,12,34077)
CheckMemberSize(struct z_stream_s,data_type,4,12,34078)
CheckOffset(struct z_stream_s,data_type,88,12,34078)
CheckMemberSize(struct z_stream_s,adler,8,12,34079)
CheckOffset(struct z_stream_s,adler,96,12,34079)
CheckMemberSize(struct z_stream_s,reserved,8,12,34080)
CheckOffset(struct z_stream_s,reserved,104,12,34080)
#elif __x86_64__
CheckTypeSize(struct z_stream_s,112, 9875, 11)
CheckMemberSize(struct z_stream_s,avail_in,4,11,34068)
CheckOffset(struct z_stream_s,avail_in,8,11,34068)
CheckMemberSize(struct z_stream_s,total_in,8,11,34069)
CheckOffset(struct z_stream_s,total_in,16,11,34069)
CheckMemberSize(struct z_stream_s,next_out,8,11,34070)
CheckOffset(struct z_stream_s,next_out,24,11,34070)
CheckMemberSize(struct z_stream_s,avail_out,4,11,34071)
CheckOffset(struct z_stream_s,avail_out,32,11,34071)
CheckMemberSize(struct z_stream_s,total_out,8,11,34072)
CheckOffset(struct z_stream_s,total_out,40,11,34072)
CheckMemberSize(struct z_stream_s,msg,8,11,34073)
CheckOffset(struct z_stream_s,msg,48,11,34073)
CheckMemberSize(struct z_stream_s,state,8,11,34074)
CheckOffset(struct z_stream_s,state,56,11,34074)
CheckMemberSize(struct z_stream_s,zalloc,8,11,34075)
CheckOffset(struct z_stream_s,zalloc,64,11,34075)
CheckMemberSize(struct z_stream_s,zfree,8,11,34076)
CheckOffset(struct z_stream_s,zfree,72,11,34076)
CheckMemberSize(struct z_stream_s,opaque,8,11,34077)
CheckOffset(struct z_stream_s,opaque,80,11,34077)
CheckMemberSize(struct z_stream_s,data_type,4,11,34078)
CheckOffset(struct z_stream_s,data_type,88,11,34078)
CheckMemberSize(struct z_stream_s,adler,8,11,34079)
CheckOffset(struct z_stream_s,adler,96,11,34079)
CheckMemberSize(struct z_stream_s,reserved,8,11,34080)
CheckOffset(struct z_stream_s,reserved,104,11,34080)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9875,0);
Msg("Find size of z_stream_s (9875)\n");
#endif

#if __i386__
CheckTypeSize(z_stream,56, 9880, 2)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(z_stream,56, 9880, 6)
#elif __ia64__
CheckTypeSize(z_stream,112, 9880, 3)
#elif __s390__ && !__s390x__
CheckTypeSize(z_stream,56, 9880, 10)
#elif __powerpc64__
CheckTypeSize(z_stream,112, 9880, 9)
#elif __s390x__
CheckTypeSize(z_stream,112, 9880, 12)
#elif __x86_64__
CheckTypeSize(z_stream,112, 9880, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9880,0);
Msg("Find size of z_stream (9880)\n");
#endif

#if __i386__
CheckTypeSize(z_streamp,4, 9882, 2)
#elif __ia64__
CheckTypeSize(z_streamp,8, 9882, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(z_streamp,4, 9882, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(z_streamp,4, 9882, 10)
#elif __powerpc64__
CheckTypeSize(z_streamp,8, 9882, 9)
#elif __s390x__
CheckTypeSize(z_streamp,8, 9882, 12)
#elif __x86_64__
CheckTypeSize(z_streamp,8, 9882, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9882,0);
Msg("Find size of z_streamp (9882)\n");
#endif

#if __i386__
CheckTypeSize(gzFile,4, 9886, 2)
#elif __ia64__
CheckTypeSize(gzFile,8, 9886, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(gzFile,4, 9886, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(gzFile,4, 9886, 10)
#elif __powerpc64__
CheckTypeSize(gzFile,8, 9886, 9)
#elif __s390x__
CheckTypeSize(gzFile,8, 9886, 12)
#elif __x86_64__
CheckTypeSize(gzFile,8, 9886, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9886,0);
Msg("Find size of gzFile (9886)\n");
#endif

#if __i386__
CheckTypeSize(alloc_func,4, 9871, 2)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(alloc_func,4, 9871, 6)
#elif __ia64__
CheckTypeSize(alloc_func,8, 9871, 3)
#elif __s390__ && !__s390x__
CheckTypeSize(alloc_func,4, 9871, 10)
#elif __powerpc64__
CheckTypeSize(alloc_func,8, 9871, 9)
#elif __s390x__
CheckTypeSize(alloc_func,8, 9871, 12)
#elif __x86_64__
CheckTypeSize(alloc_func,8, 9871, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9871,0);
Msg("Find size of alloc_func (9871)\n");
#endif

#if __i386__
CheckTypeSize(free_func,4, 9873, 2)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(free_func,4, 9873, 6)
#elif __ia64__
CheckTypeSize(free_func,8, 9873, 3)
#elif __s390__ && !__s390x__
CheckTypeSize(free_func,4, 9873, 10)
#elif __powerpc64__
CheckTypeSize(free_func,8, 9873, 9)
#elif __s390x__
CheckTypeSize(free_func,8, 9873, 12)
#elif __x86_64__
CheckTypeSize(free_func,8, 9873, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9873,0);
Msg("Find size of free_func (9873)\n");
#endif

#if __i386__
CheckTypeSize(struct internal_state,4, 9874, 2)
CheckMemberSize(struct internal_state,dummy,4,2,34081)
CheckOffset(struct internal_state,dummy,0,2,34081)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct internal_state,4, 9874, 6)
CheckMemberSize(struct internal_state,dummy,4,6,34081)
CheckOffset(struct internal_state,dummy,0,6,34081)
#elif __ia64__
CheckTypeSize(struct internal_state,4, 9874, 3)
CheckMemberSize(struct internal_state,dummy,4,3,34081)
CheckOffset(struct internal_state,dummy,0,3,34081)
#elif __s390__ && !__s390x__
CheckTypeSize(struct internal_state,4, 9874, 10)
CheckMemberSize(struct internal_state,dummy,4,10,34081)
CheckOffset(struct internal_state,dummy,0,10,34081)
#elif __powerpc64__
CheckTypeSize(struct internal_state,4, 9874, 9)
CheckMemberSize(struct internal_state,dummy,4,9,34081)
CheckOffset(struct internal_state,dummy,0,9,34081)
#elif __s390x__
CheckTypeSize(struct internal_state,4, 9874, 12)
CheckMemberSize(struct internal_state,dummy,4,12,34081)
CheckOffset(struct internal_state,dummy,0,12,34081)
#elif __x86_64__
CheckTypeSize(struct internal_state,4, 9874, 11)
CheckMemberSize(struct internal_state,dummy,4,11,34081)
CheckOffset(struct internal_state,dummy,0,11,34081)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9874,0);
Msg("Find size of internal_state (9874)\n");
#endif

#if __i386__
CheckTypeSize(Bytef,1, 9876, 2)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(Bytef,1, 9876, 6)
#elif __ia64__
CheckTypeSize(Bytef,1, 9876, 3)
#elif __s390__ && !__s390x__
CheckTypeSize(Bytef,1, 9876, 10)
#elif __powerpc64__
CheckTypeSize(Bytef,1, 9876, 9)
#elif __s390x__
CheckTypeSize(Bytef,1, 9876, 12)
#elif __x86_64__
CheckTypeSize(Bytef,1, 9876, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9876,0);
Msg("Find size of Bytef (9876)\n");
#endif

#if __i386__
CheckTypeSize(uIntf,4, 10169, 2)
#elif __ia64__
CheckTypeSize(uIntf,4, 10169, 3)
#elif __s390__ && !__s390x__
CheckTypeSize(uIntf,4, 10169, 10)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(uIntf,4, 10169, 6)
#elif __powerpc64__
CheckTypeSize(uIntf,4, 10169, 9)
#elif __s390x__
CheckTypeSize(uIntf,4, 10169, 12)
#elif __x86_64__
CheckTypeSize(uIntf,4, 10169, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10169,0);
Msg("Find size of uIntf (10169)\n");
#endif

#if __ia64__
CheckTypeSize(const Bytef,1, 10511, 3)
#elif __i386__
CheckTypeSize(const Bytef,1, 10511, 2)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(const Bytef,1, 10511, 6)
#elif __s390x__
CheckTypeSize(const Bytef,1, 10511, 12)
#elif __s390__ && !__s390x__
CheckTypeSize(const Bytef,1, 10511, 10)
#elif __x86_64__
CheckTypeSize(const Bytef,1, 10511, 11)
#elif __powerpc64__
CheckTypeSize(const Bytef,1, 10511, 9)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10511,0);
Msg("Find size of const Bytef (10511)\n");
#endif

extern int gzread_db(gzFile, voidp, unsigned int);
CheckInterfacedef(gzread,gzread_db);
extern int gzclose_db(gzFile);
CheckInterfacedef(gzclose,gzclose_db);
extern gzFile gzopen_db(const char *, const char *);
CheckInterfacedef(gzopen,gzopen_db);
extern gzFile gzdopen_db(int, const char *);
CheckInterfacedef(gzdopen,gzdopen_db);
extern int gzwrite_db(gzFile, voidpc, unsigned int);
CheckInterfacedef(gzwrite,gzwrite_db);
extern int gzflush_db(gzFile, int);
CheckInterfacedef(gzflush,gzflush_db);
extern const char * gzerror_db(gzFile, int *);
CheckInterfacedef(gzerror,gzerror_db);
extern uLong adler32_db(uLong, const Bytef *, uInt);
CheckInterfacedef(adler32,adler32_db);
extern int compress_db(Bytef *, uLongf *, const Bytef *, uLong);
CheckInterfacedef(compress,compress_db);
extern int compress2_db(Bytef *, uLongf *, const Bytef *, uLong, int);
CheckInterfacedef(compress2,compress2_db);
extern uLong crc32_db(uLong, const Bytef *, uInt);
CheckInterfacedef(crc32,crc32_db);
extern int deflate_db(z_streamp, int);
CheckInterfacedef(deflate,deflate_db);
extern int deflateCopy_db(z_streamp, z_streamp);
CheckInterfacedef(deflateCopy,deflateCopy_db);
extern int deflateEnd_db(z_streamp);
CheckInterfacedef(deflateEnd,deflateEnd_db);
extern int deflateInit2__db(z_streamp, int, int, int, int, int, const char *, int);
CheckInterfacedef(deflateInit2_,deflateInit2__db);
extern int deflateInit__db(z_streamp, int, const char *, int);
CheckInterfacedef(deflateInit_,deflateInit__db);
extern int deflateParams_db(z_streamp, int, int);
CheckInterfacedef(deflateParams,deflateParams_db);
extern int deflateReset_db(z_streamp);
CheckInterfacedef(deflateReset,deflateReset_db);
extern int deflateSetDictionary_db(z_streamp, const Bytef *, uInt);
CheckInterfacedef(deflateSetDictionary,deflateSetDictionary_db);
extern const uLongf * get_crc_table_db(void);
CheckInterfacedef(get_crc_table,get_crc_table_db);
extern int gzeof_db(gzFile);
CheckInterfacedef(gzeof,gzeof_db);
extern int gzgetc_db(gzFile);
CheckInterfacedef(gzgetc,gzgetc_db);
extern char * gzgets_db(gzFile, char *, int);
CheckInterfacedef(gzgets,gzgets_db);
extern int gzprintf_db(gzFile, const char *, ...);
CheckInterfacedef(gzprintf,gzprintf_db);
extern int gzputc_db(gzFile, int);
CheckInterfacedef(gzputc,gzputc_db);
extern int gzputs_db(gzFile, const char *);
CheckInterfacedef(gzputs,gzputs_db);
extern int gzrewind_db(gzFile);
CheckInterfacedef(gzrewind,gzrewind_db);
extern z_off_t gzseek_db(gzFile, z_off_t, int);
CheckInterfacedef(gzseek,gzseek_db);
extern int gzsetparams_db(gzFile, int, int);
CheckInterfacedef(gzsetparams,gzsetparams_db);
extern z_off_t gztell_db(gzFile);
CheckInterfacedef(gztell,gztell_db);
extern int inflate_db(z_streamp, int);
CheckInterfacedef(inflate,inflate_db);
extern int inflateEnd_db(z_streamp);
CheckInterfacedef(inflateEnd,inflateEnd_db);
extern int inflateInit2__db(z_streamp, int, const char *, int);
CheckInterfacedef(inflateInit2_,inflateInit2__db);
extern int inflateInit__db(z_streamp, const char *, int);
CheckInterfacedef(inflateInit_,inflateInit__db);
extern int inflateReset_db(z_streamp);
CheckInterfacedef(inflateReset,inflateReset_db);
extern int inflateSetDictionary_db(z_streamp, const Bytef *, uInt);
CheckInterfacedef(inflateSetDictionary,inflateSetDictionary_db);
extern int inflateSync_db(z_streamp);
CheckInterfacedef(inflateSync,inflateSync_db);
extern int inflateSyncPoint_db(z_streamp);
CheckInterfacedef(inflateSyncPoint,inflateSyncPoint_db);
extern int uncompress_db(Bytef *, uLongf *, const Bytef *, uLong);
CheckInterfacedef(uncompress,uncompress_db);
extern const char * zError_db(int);
CheckInterfacedef(zError,zError_db);
extern const char * zlibVersion_db(void);
CheckInterfacedef(zlibVersion,zlibVersion_db);
extern uLong deflateBound_db(z_streamp, uLong);
CheckInterfacedef(deflateBound,deflateBound_db);
extern uLong compressBound_db(uLong);
CheckInterfacedef(compressBound,compressBound_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in zlib.h\n\n",pcnt,cnt);
return cnt;
#endif

}
