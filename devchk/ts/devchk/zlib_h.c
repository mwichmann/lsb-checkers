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
	CompareConstant(Z_NO_FLUSH,0,4213,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: Z_NO_FLUSH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Z_PARTIAL_FLUSH
	CompareConstant(Z_PARTIAL_FLUSH,1,4214,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: Z_PARTIAL_FLUSH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Z_SYNC_FLUSH
	CompareConstant(Z_SYNC_FLUSH,2,4215,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: Z_SYNC_FLUSH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Z_FULL_FLUSH
	CompareConstant(Z_FULL_FLUSH,3,4216,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: Z_FULL_FLUSH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Z_FINISH
	CompareConstant(Z_FINISH,4,4217,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: Z_FINISH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Z_OK
	CompareConstant(Z_OK,0,4218,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: Z_OK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Z_STREAM_END
	CompareConstant(Z_STREAM_END,1,4219,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: Z_STREAM_END\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Z_NEED_DICT
	CompareConstant(Z_NEED_DICT,2,4220,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: Z_NEED_DICT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Z_ERRNO
	CompareConstant(Z_ERRNO,(-1),4221,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: Z_ERRNO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Z_STREAM_ERROR
	CompareConstant(Z_STREAM_ERROR,(-2),4222,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: Z_STREAM_ERROR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Z_DATA_ERROR
	CompareConstant(Z_DATA_ERROR,(-3),4223,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: Z_DATA_ERROR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Z_MEM_ERROR
	CompareConstant(Z_MEM_ERROR,(-4),4224,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: Z_MEM_ERROR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Z_BUF_ERROR
	CompareConstant(Z_BUF_ERROR,(-5),4225,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: Z_BUF_ERROR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Z_VERSION_ERROR
	CompareConstant(Z_VERSION_ERROR,(-6),4226,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: Z_VERSION_ERROR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Z_NO_COMPRESSION
	CompareConstant(Z_NO_COMPRESSION,0,4227,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: Z_NO_COMPRESSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Z_BEST_SPEED
	CompareConstant(Z_BEST_SPEED,1,4228,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: Z_BEST_SPEED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Z_BEST_COMPRESSION
	CompareConstant(Z_BEST_COMPRESSION,9,4229,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: Z_BEST_COMPRESSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Z_DEFAULT_COMPRESSION
	CompareConstant(Z_DEFAULT_COMPRESSION,(-1),4230,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: Z_DEFAULT_COMPRESSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Z_FILTERED
	CompareConstant(Z_FILTERED,1,4231,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: Z_FILTERED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Z_HUFFMAN_ONLY
	CompareConstant(Z_HUFFMAN_ONLY,2,4232,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: Z_HUFFMAN_ONLY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Z_DEFAULT_STRATEGY
	CompareConstant(Z_DEFAULT_STRATEGY,0,4233,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: Z_DEFAULT_STRATEGY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Z_BINARY
	CompareConstant(Z_BINARY,0,4234,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: Z_BINARY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Z_ASCII
	CompareConstant(Z_ASCII,1,4235,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: Z_ASCII\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Z_UNKNOWN
	CompareConstant(Z_UNKNOWN,2,4236,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: Z_UNKNOWN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Z_DEFLATED
	CompareConstant(Z_DEFLATED,8,4237,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: Z_DEFLATED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Z_NULL
	CompareConstant(Z_NULL,0,4238,architecture,1.3,NULL)
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
	CompareConstant(MAX_MEM_LEVEL,9,5021,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: MAX_MEM_LEVEL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MAX_WBITS
	CompareConstant(MAX_WBITS,15,5022,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: MAX_WBITS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Z_BLOCK
	CompareConstant(Z_BLOCK,5,9494,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: Z_BLOCK\n");
cnt++;
#endif

#endif

#if defined __i386__
CheckTypeSize(charf,1, 10167, 2, 2.1, NULL, 2, NULL)
#elif defined __ia64__
CheckTypeSize(charf,1, 10167, 3, 2.1, NULL, 2, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(charf,1, 10167, 6, 2.1, NULL, 2, NULL)
#elif defined __powerpc64__
CheckTypeSize(charf,1, 10167, 9, 2.1, NULL, 2, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(charf,1, 10167, 10, 2.1, NULL, 2, NULL)
#elif defined __s390x__
CheckTypeSize(charf,1, 10167, 12, 2.1, NULL, 2, NULL)
#elif defined __x86_64__
CheckTypeSize(charf,1, 10167, 11, 2.1, NULL, 2, NULL)
#else
Msg("Find size of charf (10167)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.1""',NULL,2,NULL);\n",architecture,10167,0);
#endif

#if defined __i386__
CheckTypeSize(intf,4, 10168, 2, 1.3, NULL, 6, NULL)
#elif defined __ia64__
CheckTypeSize(intf,4, 10168, 3, 1.3, NULL, 6, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(intf,4, 10168, 10, 1.3, NULL, 6, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(intf,4, 10168, 6, 1.3, NULL, 6, NULL)
#elif defined __powerpc64__
CheckTypeSize(intf,4, 10168, 9, 2.0, NULL, 6, NULL)
#elif defined __s390x__
CheckTypeSize(intf,4, 10168, 12, 1.3, NULL, 6, NULL)
#elif defined __x86_64__
CheckTypeSize(intf,4, 10168, 11, 2.0, NULL, 6, NULL)
#else
Msg("Find size of intf (10168)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,6,NULL);\n",architecture,10168,0);
#endif

#if defined __i386__
CheckTypeSize(voidpf,4, 9868, 2, 1.2, NULL, 40, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(voidpf,4, 9868, 6, 1.2, NULL, 40, NULL)
#elif defined __ia64__
CheckTypeSize(voidpf,8, 9868, 3, 1.3, NULL, 40, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(voidpf,4, 9868, 10, 1.3, NULL, 40, NULL)
#elif defined __powerpc64__
CheckTypeSize(voidpf,8, 9868, 9, 2.0, NULL, 40, NULL)
#elif defined __s390x__
CheckTypeSize(voidpf,8, 9868, 12, 1.3, NULL, 40, NULL)
#elif defined __x86_64__
CheckTypeSize(voidpf,8, 9868, 11, 2.0, NULL, 40, NULL)
#else
Msg("Find size of voidpf (9868)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,40,NULL);\n",architecture,9868,0);
#endif

#if defined __i386__
CheckTypeSize(uInt,4, 9870, 2, 1.2, NULL, 7, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(uInt,4, 9870, 6, 1.2, NULL, 7, NULL)
#elif defined __ia64__
CheckTypeSize(uInt,4, 9870, 3, 1.3, NULL, 7, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(uInt,4, 9870, 10, 1.3, NULL, 7, NULL)
#elif defined __powerpc64__
CheckTypeSize(uInt,4, 9870, 9, 2.0, NULL, 7, NULL)
#elif defined __s390x__
CheckTypeSize(uInt,4, 9870, 12, 1.3, NULL, 7, NULL)
#elif defined __x86_64__
CheckTypeSize(uInt,4, 9870, 11, 2.0, NULL, 7, NULL)
#else
Msg("Find size of uInt (9870)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,7,NULL);\n",architecture,9870,0);
#endif

#if defined __i386__
CheckTypeSize(uLong,4, 9878, 2, 1.2, NULL, 9, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(uLong,4, 9878, 6, 1.2, NULL, 9, NULL)
#elif defined __ia64__
CheckTypeSize(uLong,8, 9878, 3, 1.3, NULL, 9, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(uLong,4, 9878, 10, 1.3, NULL, 9, NULL)
#elif defined __powerpc64__
CheckTypeSize(uLong,8, 9878, 9, 2.0, NULL, 9, NULL)
#elif defined __s390x__
CheckTypeSize(uLong,8, 9878, 12, 1.3, NULL, 9, NULL)
#elif defined __x86_64__
CheckTypeSize(uLong,8, 9878, 11, 2.0, NULL, 9, NULL)
#else
Msg("Find size of uLong (9878)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,9,NULL);\n",architecture,9878,0);
#endif

#if defined __i386__
CheckTypeSize(uLongf,4, 9883, 2, 1.2, NULL, 9878, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(uLongf,4, 9883, 6, 1.2, NULL, 9878, NULL)
#elif defined __ia64__
CheckTypeSize(uLongf,8, 9883, 3, 1.3, NULL, 9878, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(uLongf,4, 9883, 10, 1.3, NULL, 9878, NULL)
#elif defined __powerpc64__
CheckTypeSize(uLongf,8, 9883, 9, 2.0, NULL, 9878, NULL)
#elif defined __s390x__
CheckTypeSize(uLongf,8, 9883, 12, 1.3, NULL, 9878, NULL)
#elif defined __x86_64__
CheckTypeSize(uLongf,8, 9883, 11, 2.0, NULL, 9878, NULL)
#else
Msg("Find size of uLongf (9883)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,9878,NULL);\n",architecture,9883,0);
#endif

#if defined __i386__
CheckTypeSize(voidp,4, 9885, 2, 1.2, NULL, 40, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(voidp,4, 9885, 6, 1.2, NULL, 40, NULL)
#elif defined __ia64__
CheckTypeSize(voidp,8, 9885, 3, 1.3, NULL, 40, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(voidp,4, 9885, 10, 1.3, NULL, 40, NULL)
#elif defined __powerpc64__
CheckTypeSize(voidp,8, 9885, 9, 2.0, NULL, 40, NULL)
#elif defined __s390x__
CheckTypeSize(voidp,8, 9885, 12, 1.3, NULL, 40, NULL)
#elif defined __x86_64__
CheckTypeSize(voidp,8, 9885, 11, 2.0, NULL, 40, NULL)
#else
Msg("Find size of voidp (9885)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,40,NULL);\n",architecture,9885,0);
#endif

#if defined __i386__
CheckTypeSize(Byte,1, 10166, 2, 1.2, NULL, 3, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(Byte,1, 10166, 6, 1.2, NULL, 3, NULL)
#elif defined __ia64__
CheckTypeSize(Byte,1, 10166, 3, 1.3, NULL, 3, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(Byte,1, 10166, 10, 1.3, NULL, 3, NULL)
#elif defined __powerpc64__
CheckTypeSize(Byte,1, 10166, 9, 2.0, NULL, 3, NULL)
#elif defined __s390x__
CheckTypeSize(Byte,1, 10166, 12, 1.3, NULL, 3, NULL)
#elif defined __x86_64__
CheckTypeSize(Byte,1, 10166, 11, 2.0, NULL, 3, NULL)
#else
Msg("Find size of Byte (10166)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,3,NULL);\n",architecture,10166,0);
#endif

#if defined __ia64__
CheckTypeSize(z_off_t,8, 10519, 3, 1.3, NULL, 9111, NULL)
#elif defined __i386__
CheckTypeSize(z_off_t,4, 10519, 2, 1.3, NULL, 9111, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(z_off_t,4, 10519, 6, 1.3, NULL, 9111, NULL)
#elif defined __s390x__
CheckTypeSize(z_off_t,8, 10519, 12, 1.3, NULL, 9111, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(z_off_t,4, 10519, 10, 1.3, NULL, 9111, NULL)
#elif defined __x86_64__
CheckTypeSize(z_off_t,8, 10519, 11, 2.0, NULL, 9111, NULL)
#elif defined __powerpc64__
CheckTypeSize(z_off_t,8, 10519, 9, 2.0, NULL, 9111, NULL)
#else
Msg("Find size of z_off_t (10519)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,9111,NULL);\n",architecture,10519,0);
#endif

#if defined __i386__
CheckTypeSize(voidpc,4, 10995, 2, 2.0, NULL, 10989, NULL)
#elif defined __powerpc64__
CheckTypeSize(voidpc,8, 10995, 9, 2.0, NULL, 10989, NULL)
#elif defined __ia64__
CheckTypeSize(voidpc,8, 10995, 3, 2.0, NULL, 10989, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(voidpc,4, 10995, 6, 2.0, NULL, 10989, NULL)
#elif defined __x86_64__
CheckTypeSize(voidpc,8, 10995, 11, 2.0, NULL, 10989, NULL)
#elif defined __s390x__
CheckTypeSize(voidpc,8, 10995, 12, 2.0, NULL, 10989, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(voidpc,4, 10995, 10, 2.0, NULL, 10989, NULL)
#else
Msg("Find size of voidpc (10995)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,10989,NULL);\n",architecture,10995,0);
#endif

#if defined __i386__
CheckTypeSize(z_stream,56, 9880, 2, 1.2, NULL, 9875, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(z_stream,56, 9880, 6, 1.2, NULL, 9875, NULL)
#elif defined __ia64__
CheckTypeSize(z_stream,112, 9880, 3, 1.3, NULL, 9875, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(z_stream,56, 9880, 10, 1.3, NULL, 9875, NULL)
#elif defined __powerpc64__
CheckTypeSize(z_stream,112, 9880, 9, 2.0, NULL, 9875, NULL)
#elif defined __s390x__
CheckTypeSize(z_stream,112, 9880, 12, 1.3, NULL, 9875, NULL)
#elif defined __x86_64__
CheckTypeSize(z_stream,112, 9880, 11, 2.0, NULL, 9875, NULL)
#else
Msg("Find size of z_stream (9880)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,9875,NULL);\n",architecture,9880,0);
#endif

#if defined __i386__
CheckTypeSize(z_streamp,4, 9882, 2, 1.2, NULL, 9881, NULL)
#elif defined __ia64__
CheckTypeSize(z_streamp,8, 9882, 3, 1.3, NULL, 9881, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(z_streamp,4, 9882, 6, 1.2, NULL, 9881, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(z_streamp,4, 9882, 10, 1.3, NULL, 9881, NULL)
#elif defined __powerpc64__
CheckTypeSize(z_streamp,8, 9882, 9, 2.0, NULL, 9881, NULL)
#elif defined __s390x__
CheckTypeSize(z_streamp,8, 9882, 12, 1.3, NULL, 9881, NULL)
#elif defined __x86_64__
CheckTypeSize(z_streamp,8, 9882, 11, 2.0, NULL, 9881, NULL)
#else
Msg("Find size of z_streamp (9882)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,9881,NULL);\n",architecture,9882,0);
#endif

#if defined __i386__
CheckTypeSize(gzFile,4, 9886, 2, 1.2, NULL, 9885, NULL)
#elif defined __ia64__
CheckTypeSize(gzFile,8, 9886, 3, 1.3, NULL, 9885, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(gzFile,4, 9886, 6, 1.2, NULL, 9885, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(gzFile,4, 9886, 10, 1.3, NULL, 9885, NULL)
#elif defined __powerpc64__
CheckTypeSize(gzFile,8, 9886, 9, 2.0, NULL, 9885, NULL)
#elif defined __s390x__
CheckTypeSize(gzFile,8, 9886, 12, 1.3, NULL, 9885, NULL)
#elif defined __x86_64__
CheckTypeSize(gzFile,8, 9886, 11, 2.0, NULL, 9885, NULL)
#else
Msg("Find size of gzFile (9886)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,9885,NULL);\n",architecture,9886,0);
#endif

#if defined __i386__
CheckTypeSize(alloc_func,4, 9871, 2, 1.2, NULL, 9869, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(alloc_func,4, 9871, 6, 1.2, NULL, 9869, NULL)
#elif defined __ia64__
CheckTypeSize(alloc_func,8, 9871, 3, 1.3, NULL, 9869, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(alloc_func,4, 9871, 10, 1.3, NULL, 9869, NULL)
#elif defined __powerpc64__
CheckTypeSize(alloc_func,8, 9871, 9, 2.0, NULL, 9869, NULL)
#elif defined __s390x__
CheckTypeSize(alloc_func,8, 9871, 12, 1.3, NULL, 9869, NULL)
#elif defined __x86_64__
CheckTypeSize(alloc_func,8, 9871, 11, 2.0, NULL, 9869, NULL)
#else
Msg("Find size of alloc_func (9871)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,9869,NULL);\n",architecture,9871,0);
#endif

#if defined __i386__
CheckTypeSize(free_func,4, 9873, 2, 1.2, NULL, 9872, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(free_func,4, 9873, 6, 1.2, NULL, 9872, NULL)
#elif defined __ia64__
CheckTypeSize(free_func,8, 9873, 3, 1.3, NULL, 9872, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(free_func,4, 9873, 10, 1.3, NULL, 9872, NULL)
#elif defined __powerpc64__
CheckTypeSize(free_func,8, 9873, 9, 2.0, NULL, 9872, NULL)
#elif defined __s390x__
CheckTypeSize(free_func,8, 9873, 12, 1.3, NULL, 9872, NULL)
#elif defined __x86_64__
CheckTypeSize(free_func,8, 9873, 11, 2.0, NULL, 9872, NULL)
#else
Msg("Find size of free_func (9873)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,9872,NULL);\n",architecture,9873,0);
#endif

#if defined __i386__
CheckTypeSize(struct internal_state,4, 9874, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct internal_state,dummy,4,2,34081)
CheckOffset(struct internal_state,dummy,0,2,34081)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct internal_state,4, 9874, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct internal_state,dummy,4,6,34081)
CheckOffset(struct internal_state,dummy,0,6,34081)
#elif defined __ia64__
CheckTypeSize(struct internal_state,4, 9874, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct internal_state,dummy,4,3,34081)
CheckOffset(struct internal_state,dummy,0,3,34081)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct internal_state,4, 9874, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct internal_state,dummy,4,10,34081)
CheckOffset(struct internal_state,dummy,0,10,34081)
#elif defined __powerpc64__
CheckTypeSize(struct internal_state,4, 9874, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct internal_state,dummy,4,9,34081)
CheckOffset(struct internal_state,dummy,0,9,34081)
#elif defined __s390x__
CheckTypeSize(struct internal_state,4, 9874, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct internal_state,dummy,4,12,34081)
CheckOffset(struct internal_state,dummy,0,12,34081)
#elif defined __x86_64__
CheckTypeSize(struct internal_state,4, 9874, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct internal_state,dummy,4,11,34081)
CheckOffset(struct internal_state,dummy,0,11,34081)
#else
Msg("Find size of internal_state (9874)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,0,NULL);\n",architecture,9874,0);
#endif

#if defined __i386__
CheckTypeSize(Bytef,1, 9876, 2, 1.2, NULL, 10166, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(Bytef,1, 9876, 6, 1.2, NULL, 10166, NULL)
#elif defined __ia64__
CheckTypeSize(Bytef,1, 9876, 3, 1.3, NULL, 10166, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(Bytef,1, 9876, 10, 1.3, NULL, 10166, NULL)
#elif defined __powerpc64__
CheckTypeSize(Bytef,1, 9876, 9, 2.0, NULL, 10166, NULL)
#elif defined __s390x__
CheckTypeSize(Bytef,1, 9876, 12, 1.3, NULL, 10166, NULL)
#elif defined __x86_64__
CheckTypeSize(Bytef,1, 9876, 11, 2.0, NULL, 10166, NULL)
#else
Msg("Find size of Bytef (9876)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,10166,NULL);\n",architecture,9876,0);
#endif

#if defined __i386__
CheckTypeSize(uIntf,4, 10169, 2, 1.3, NULL, 9870, NULL)
#elif defined __ia64__
CheckTypeSize(uIntf,4, 10169, 3, 1.3, NULL, 9870, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(uIntf,4, 10169, 10, 1.3, NULL, 9870, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(uIntf,4, 10169, 6, 1.3, NULL, 9870, NULL)
#elif defined __powerpc64__
CheckTypeSize(uIntf,4, 10169, 9, 2.0, NULL, 9870, NULL)
#elif defined __s390x__
CheckTypeSize(uIntf,4, 10169, 12, 1.3, NULL, 9870, NULL)
#elif defined __x86_64__
CheckTypeSize(uIntf,4, 10169, 11, 2.0, NULL, 9870, NULL)
#else
Msg("Find size of uIntf (10169)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,9870, NULL);\n",architecture,10169,0);
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
