/*
 * Test of zlib.h
 */
#include "hdrchk.h"
#include "sys/types.h"
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

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in zlib.h\n");
#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef Z_NEED_DICT
	CompareConstant(Z_NEED_DICT,2,4220,architecture)
#else
Msg( "Error: Constant not found: Z_NEED_DICT\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef MAX_WBITS
	CompareConstant(MAX_WBITS,15,5022,architecture)
#else
Msg( "Error: Constant not found: MAX_WBITS\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef Z_ERRNO
	CompareConstant(Z_ERRNO,(-1),4221,architecture)
#else
Msg( "Error: Constant not found: Z_ERRNO\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef Z_STREAM_ERROR
	CompareConstant(Z_STREAM_ERROR,(-2),4222,architecture)
#else
Msg( "Error: Constant not found: Z_STREAM_ERROR\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef Z_DATA_ERROR
	CompareConstant(Z_DATA_ERROR,(-3),4223,architecture)
#else
Msg( "Error: Constant not found: Z_DATA_ERROR\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef Z_MEM_ERROR
	CompareConstant(Z_MEM_ERROR,(-4),4224,architecture)
#else
Msg( "Error: Constant not found: Z_MEM_ERROR\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef Z_BUF_ERROR
	CompareConstant(Z_BUF_ERROR,(-5),4225,architecture)
#else
Msg( "Error: Constant not found: Z_BUF_ERROR\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef Z_NO_COMPRESSION
	CompareConstant(Z_NO_COMPRESSION,0,4227,architecture)
#else
Msg( "Error: Constant not found: Z_NO_COMPRESSION\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef Z_BEST_SPEED
	CompareConstant(Z_BEST_SPEED,1,4228,architecture)
#else
Msg( "Error: Constant not found: Z_BEST_SPEED\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef Z_BEST_COMPRESSION
	CompareConstant(Z_BEST_COMPRESSION,9,4229,architecture)
#else
Msg( "Error: Constant not found: Z_BEST_COMPRESSION\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef Z_DEFAULT_COMPRESSION
	CompareConstant(Z_DEFAULT_COMPRESSION,(-1),4230,architecture)
#else
Msg( "Error: Constant not found: Z_DEFAULT_COMPRESSION\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef Z_FILTERED
	CompareConstant(Z_FILTERED,1,4231,architecture)
#else
Msg( "Error: Constant not found: Z_FILTERED\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef Z_HUFFMAN_ONLY
	CompareConstant(Z_HUFFMAN_ONLY,2,4232,architecture)
#else
Msg( "Error: Constant not found: Z_HUFFMAN_ONLY\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef Z_DEFAULT_STRATEGY
	CompareConstant(Z_DEFAULT_STRATEGY,0,4233,architecture)
#else
Msg( "Error: Constant not found: Z_DEFAULT_STRATEGY\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef Z_BINARY
	CompareConstant(Z_BINARY,0,4234,architecture)
#else
Msg( "Error: Constant not found: Z_BINARY\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef Z_ASCII
	CompareConstant(Z_ASCII,1,4235,architecture)
#else
Msg( "Error: Constant not found: Z_ASCII\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef Z_UNKNOWN
	CompareConstant(Z_UNKNOWN,2,4236,architecture)
#else
Msg( "Error: Constant not found: Z_UNKNOWN\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef Z_DEFLATED
	CompareConstant(Z_DEFLATED,8,4237,architecture)
#else
Msg( "Error: Constant not found: Z_DEFLATED\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef Z_NULL
	CompareConstant(Z_NULL,0,4238,architecture)
#else
Msg( "Error: Constant not found: Z_NULL\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
/* No test for deflateInit(strm,level) */
#endif

#ifdef _LSB_DEFAULT_ARCH
/* No test for inflateInit(strm) */
#endif

#ifdef _LSB_DEFAULT_ARCH
/* No test for deflateInit2(strm,level, method, windowBits, memLevel, stratgey) */
#endif

#ifdef _LSB_DEFAULT_ARCH
/* No test for inflateInit2(strm,windowBits) */
#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef Z_NO_FLUSH
	CompareConstant(Z_NO_FLUSH,0,4213,architecture)
#else
Msg( "Error: Constant not found: Z_NO_FLUSH\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef Z_PARTIAL_FLUSH
	CompareConstant(Z_PARTIAL_FLUSH,1,4214,architecture)
#else
Msg( "Error: Constant not found: Z_PARTIAL_FLUSH\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef Z_SYNC_FLUSH
	CompareConstant(Z_SYNC_FLUSH,2,4215,architecture)
#else
Msg( "Error: Constant not found: Z_SYNC_FLUSH\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef Z_FULL_FLUSH
	CompareConstant(Z_FULL_FLUSH,3,4216,architecture)
#else
Msg( "Error: Constant not found: Z_FULL_FLUSH\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef Z_FINISH
	CompareConstant(Z_FINISH,4,4217,architecture)
#else
Msg( "Error: Constant not found: Z_FINISH\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef Z_OK
	CompareConstant(Z_OK,0,4218,architecture)
#else
Msg( "Error: Constant not found: Z_OK\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef Z_STREAM_END
	CompareConstant(Z_STREAM_END,1,4219,architecture)
#else
Msg( "Error: Constant not found: Z_STREAM_END\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef MAX_MEM_LEVEL
	CompareConstant(MAX_MEM_LEVEL,9,5021,architecture)
#else
Msg( "Error: Constant not found: MAX_MEM_LEVEL\n");
cnt++;
#endif

#endif

#ifdef __i386__
CheckTypeSize(intf,4, 10168, 2)
#elif __ia64__
CheckTypeSize(intf,4, 10168, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10168,0);
Msg("Find size of intf (10168)\n");
#endif

#ifdef __i386__
CheckTypeSize(voidpf,4, 9868, 2)
#elif __powerpc__
CheckTypeSize(voidpf,4, 9868, 6)
#elif __ia64__
CheckTypeSize(voidpf,8, 9868, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9868,0);
Msg("Find size of voidpf (9868)\n");
#endif

#ifdef __i386__
CheckTypeSize(uInt,4, 9870, 2)
#elif __powerpc__
CheckTypeSize(uInt,4, 9870, 6)
#elif __ia64__
CheckTypeSize(uInt,4, 9870, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9870,0);
Msg("Find size of uInt (9870)\n");
#endif

#ifdef __i386__
CheckTypeSize(uLong,4, 9878, 2)
#elif __powerpc__
CheckTypeSize(uLong,4, 9878, 6)
#elif __ia64__
CheckTypeSize(uLong,8, 9878, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9878,0);
Msg("Find size of uLong (9878)\n");
#endif

#ifdef __i386__
CheckTypeSize(uLongf,4, 9883, 2)
#elif __powerpc__
CheckTypeSize(uLongf,4, 9883, 6)
#elif __ia64__
CheckTypeSize(uLongf,8, 9883, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9883,0);
Msg("Find size of uLongf (9883)\n");
#endif

#ifdef __i386__
CheckTypeSize(voidp,4, 9885, 2)
#elif __powerpc__
CheckTypeSize(voidp,4, 9885, 6)
#elif __ia64__
CheckTypeSize(voidp,8, 9885, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9885,0);
Msg("Find size of voidp (9885)\n");
#endif

#ifdef __i386__
CheckTypeSize(Byte,1, 10166, 2)
#elif __powerpc__
CheckTypeSize(Byte,1, 10166, 6)
#elif __ia64__
CheckTypeSize(Byte,1, 10166, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10166,0);
Msg("Find size of Byte (10166)\n");
#endif

#ifdef __i386__
CheckTypeSize(struct z_stream_s,56, 9875, 2)
#elif __powerpc__
CheckTypeSize(struct z_stream_s,56, 9875, 6)
#elif __ia64__
CheckTypeSize(struct z_stream_s,112, 9875, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9875,0);
Msg("Find size of z_stream_s (9875)\n");
#endif

#ifdef __i386__
CheckTypeSize(z_stream,56, 9880, 2)
#elif __powerpc__
CheckTypeSize(z_stream,56, 9880, 6)
#elif __ia64__
CheckTypeSize(z_stream,112, 9880, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9880,0);
Msg("Find size of z_stream (9880)\n");
#endif

#ifdef __i386__
CheckTypeSize(z_streamp,4, 9882, 2)
#elif __ia64__
CheckTypeSize(z_streamp,8, 9882, 3)
#elif __powerpc__
CheckTypeSize(z_streamp,4, 9882, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9882,0);
Msg("Find size of z_streamp (9882)\n");
#endif

#ifdef __i386__
CheckTypeSize(gzFile,4, 9886, 2)
#elif __ia64__
CheckTypeSize(gzFile,8, 9886, 3)
#elif __powerpc__
CheckTypeSize(gzFile,4, 9886, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9886,0);
Msg("Find size of gzFile (9886)\n");
#endif

#ifdef __i386__
CheckTypeSize(alloc_func,4, 9871, 2)
#elif __powerpc__
CheckTypeSize(alloc_func,4, 9871, 6)
#elif __ia64__
CheckTypeSize(alloc_func,8, 9871, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9871,0);
Msg("Find size of alloc_func (9871)\n");
#endif

#ifdef __i386__
CheckTypeSize(free_func,4, 9873, 2)
#elif __powerpc__
CheckTypeSize(free_func,4, 9873, 6)
#elif __ia64__
CheckTypeSize(free_func,8, 9873, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9873,0);
Msg("Find size of free_func (9873)\n");
#endif

#ifdef __i386__
CheckTypeSize(struct internal_state,4, 9874, 2)
#elif __powerpc__
CheckTypeSize(struct internal_state,4, 9874, 6)
#elif __ia64__
CheckTypeSize(struct internal_state,4, 9874, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9874,0);
Msg("Find size of internal_state (9874)\n");
#endif

#ifdef __i386__
CheckTypeSize(Bytef,1, 9876, 2)
#elif __powerpc__
CheckTypeSize(Bytef,1, 9876, 6)
#elif __ia64__
CheckTypeSize(Bytef,1, 9876, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9876,0);
Msg("Find size of Bytef (9876)\n");
#endif

#ifdef __i386__
CheckTypeSize(uIntf,4, 10169, 2)
#elif __ia64__
CheckTypeSize(uIntf,4, 10169, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10169,0);
Msg("Find size of uIntf (10169)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in zlib.h\n",cnt);
return cnt;
#endif

}
