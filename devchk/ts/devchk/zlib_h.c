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
#ifdef ZLIB_VERSION
	CompareStringConstant(ZLIB_VERSION,"1.1.4")
#else
Msg( "Error: Constant not found: ZLIB_VERSION\n");
cnt++;
#endif

#endif

#ifdef __i386__
CheckTypeSize(voidpf,4, 9868, 2)
#elif __powerpc__
CheckTypeSize(voidpf,4, 9868, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9868,0);
Msg("Find size of uInt (9868)\n");
#endif

#ifdef __i386__
CheckTypeSize(uInt,4, 9870, 2)
#elif __powerpc__
CheckTypeSize(uInt,4, 9870, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9870,0);
Msg("Find size of uLong (9870)\n");
#endif

#ifdef __i386__
CheckTypeSize(uLong,4, 9878, 2)
#elif __powerpc__
CheckTypeSize(uLong,4, 9878, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9878,0);
Msg("Find size of uLongf (9878)\n");
#endif

#ifdef __i386__
CheckTypeSize(uLongf,4, 9883, 2)
#elif __powerpc__
CheckTypeSize(uLongf,4, 9883, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9883,0);
Msg("Find size of voidp (9883)\n");
#endif

#ifdef __i386__
CheckTypeSize(voidp,4, 9885, 2)
#elif __powerpc__
CheckTypeSize(voidp,4, 9885, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9885,0);
Msg("Find size of Byte (9885)\n");
#endif

#ifdef __i386__
CheckTypeSize(Byte,1, 10166, 2)
#elif __powerpc__
CheckTypeSize(Byte,1, 10166, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10166,0);
Msg("Find size of z_stream_s (10166)\n");
#endif

#ifdef __i386__
CheckTypeSize(struct z_stream_s,56, 9875, 2)
#elif __powerpc__
CheckTypeSize(struct z_stream_s,56, 9875, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9875,0);
Msg("Find size of z_stream (9875)\n");
#endif

#ifdef __i386__
CheckTypeSize(z_stream,56, 9880, 2)
#elif __powerpc__
CheckTypeSize(z_stream,56, 9880, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9880,0);
Msg("Find size of z_streamp (9880)\n");
#endif

#ifdef __i386__
CheckTypeSize(z_streamp,4, 9882, 2)
#elif __ia64__
CheckTypeSize(z_streamp,8, 9882, 3)
#elif __powerpc__
CheckTypeSize(z_streamp,4, 9882, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9882,0);
Msg("Find size of gzFile (9882)\n");
#endif

#ifdef __i386__
CheckTypeSize(gzFile,4, 9886, 2)
#elif __ia64__
CheckTypeSize(gzFile,8, 9886, 3)
#elif __powerpc__
CheckTypeSize(gzFile,4, 9886, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9886,0);
Msg("Find size of alloc_func (9886)\n");
#endif

#ifdef __i386__
CheckTypeSize(alloc_func,4, 9871, 2)
#elif __powerpc__
CheckTypeSize(alloc_func,4, 9871, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9871,0);
Msg("Find size of free_func (9871)\n");
#endif

#ifdef __i386__
CheckTypeSize(free_func,4, 9873, 2)
#elif __powerpc__
CheckTypeSize(free_func,4, 9873, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9873,0);
Msg("Find size of internal_state (9873)\n");
#endif

#ifdef __i386__
CheckTypeSize(struct internal_state,4, 9874, 2)
#elif __powerpc__
CheckTypeSize(struct internal_state,4, 9874, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9874,0);
Msg("Find size of Bytef (9874)\n");
#endif

#ifdef __i386__
CheckTypeSize(Bytef,1, 9876, 2)
#elif __powerpc__
CheckTypeSize(Bytef,1, 9876, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9876,0);
Msg("Find size of Bytef (9876)\n");
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
