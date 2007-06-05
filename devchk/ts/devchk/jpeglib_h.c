/*
 * Test of jpeglib.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include <stdio.h>
#include "jpeglib.h"



#ifdef TET_TEST
void jpeglib_h()
{
#else
int jpeglib_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in jpeglib.h\n");
#endif

printf("Checking data structures in jpeglib.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for HAVE_PROTOTYPES */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for HAVE_UNSIGNED_CHAR */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for HAVE_UNSIGNED_SHORT */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef BITS_IN_JSAMPLE
	CompareConstant(BITS_IN_JSAMPLE,8,5740,architecture)
#else
Msg( "Error: Constant not found: BITS_IN_JSAMPLE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MAX_COMPONENTS
	CompareConstant(MAX_COMPONENTS,10,5741,architecture)
#else
Msg( "Error: Constant not found: MAX_COMPONENTS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for GETJSAMPLE(value) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef MAXJSAMPLE
	CompareConstant(MAXJSAMPLE,255,5743,architecture)
#else
Msg( "Error: Constant not found: MAXJSAMPLE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CENTERJSAMPLE
	CompareConstant(CENTERJSAMPLE,128,5744,architecture)
#else
Msg( "Error: Constant not found: CENTERJSAMPLE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for GETJOCTET(value) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef JPEG_MAX_DIMENSION
	CompareConstant(JPEG_MAX_DIMENSION,65500L,5746,architecture)
#else
Msg( "Error: Constant not found: JPEG_MAX_DIMENSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for METHODDEF(type) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for LOCAL(type) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GLOBAL(type) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for EXTERN(type) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for JMETHOD(type,methodname,arglist) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FAR */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef JPEG_LIB_VERSION
	CompareConstant(JPEG_LIB_VERSION,62,5753,architecture)
#else
Msg( "Error: Constant not found: JPEG_LIB_VERSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DCTSIZE
	CompareConstant(DCTSIZE,8,5754,architecture)
#else
Msg( "Error: Constant not found: DCTSIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DCTSIZE2
	CompareConstant(DCTSIZE2,64,5755,architecture)
#else
Msg( "Error: Constant not found: DCTSIZE2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NUM_QUANT_TBLS
	CompareConstant(NUM_QUANT_TBLS,4,5756,architecture)
#else
Msg( "Error: Constant not found: NUM_QUANT_TBLS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NUM_HUFF_TBLS
	CompareConstant(NUM_HUFF_TBLS,4,5757,architecture)
#else
Msg( "Error: Constant not found: NUM_HUFF_TBLS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NUM_ARITH_TBLS
	CompareConstant(NUM_ARITH_TBLS,16,5758,architecture)
#else
Msg( "Error: Constant not found: NUM_ARITH_TBLS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MAX_COMPS_IN_SCAN
	CompareConstant(MAX_COMPS_IN_SCAN,4,5759,architecture)
#else
Msg( "Error: Constant not found: MAX_COMPS_IN_SCAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MAX_SAMP_FACTOR
	CompareConstant(MAX_SAMP_FACTOR,4,5760,architecture)
#else
Msg( "Error: Constant not found: MAX_SAMP_FACTOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef C_MAX_BLOCKS_IN_MCU
	CompareConstant(C_MAX_BLOCKS_IN_MCU,10,5761,architecture)
#else
Msg( "Error: Constant not found: C_MAX_BLOCKS_IN_MCU\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef D_MAX_BLOCKS_IN_MCU
	CompareConstant(D_MAX_BLOCKS_IN_MCU,10,5762,architecture)
#else
Msg( "Error: Constant not found: D_MAX_BLOCKS_IN_MCU\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for JDCT_DEFAULT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for JDCT_FASTEST */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for jpeg_common_fields */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef JMSG_LENGTH_MAX
	CompareConstant(JMSG_LENGTH_MAX,200,5766,architecture)
#else
Msg( "Error: Constant not found: JMSG_LENGTH_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef JMSG_STR_PARM_MAX
	CompareConstant(JMSG_STR_PARM_MAX,80,5767,architecture)
#else
Msg( "Error: Constant not found: JMSG_STR_PARM_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef JPOOL_PERMANENT
	CompareConstant(JPOOL_PERMANENT,0,5768,architecture)
#else
Msg( "Error: Constant not found: JPOOL_PERMANENT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef JPOOL_IMAGE
	CompareConstant(JPOOL_IMAGE,1,5769,architecture)
#else
Msg( "Error: Constant not found: JPOOL_IMAGE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef JPOOL_NUMPOOLS
	CompareConstant(JPOOL_NUMPOOLS,2,5770,architecture)
#else
Msg( "Error: Constant not found: JPOOL_NUMPOOLS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for JPP(arglist) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for jpeg_create_compress(cinfo) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for jpeg_create_decompress(cinfo) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef JPEG_SUSPENDED
	CompareConstant(JPEG_SUSPENDED,0,5774,architecture)
#else
Msg( "Error: Constant not found: JPEG_SUSPENDED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef JPEG_HEADER_OK
	CompareConstant(JPEG_HEADER_OK,1,5775,architecture)
#else
Msg( "Error: Constant not found: JPEG_HEADER_OK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef JPEG_HEADER_TABLES_ONLY
	CompareConstant(JPEG_HEADER_TABLES_ONLY,2,5776,architecture)
#else
Msg( "Error: Constant not found: JPEG_HEADER_TABLES_ONLY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef JPEG_REACHED_SOS
	CompareConstant(JPEG_REACHED_SOS,1,5777,architecture)
#else
Msg( "Error: Constant not found: JPEG_REACHED_SOS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef JPEG_REACHED_EOI
	CompareConstant(JPEG_REACHED_EOI,2,5778,architecture)
#else
Msg( "Error: Constant not found: JPEG_REACHED_EOI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef JPEG_ROW_COMPLETED
	CompareConstant(JPEG_ROW_COMPLETED,3,5779,architecture)
#else
Msg( "Error: Constant not found: JPEG_ROW_COMPLETED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef JPEG_SCAN_COMPLETED
	CompareConstant(JPEG_SCAN_COMPLETED,4,5780,architecture)
#else
Msg( "Error: Constant not found: JPEG_SCAN_COMPLETED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef JPEG_RST0
	CompareConstant(JPEG_RST0,0xD0,5781,architecture)
#else
Msg( "Error: Constant not found: JPEG_RST0\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef JPEG_EOI
	CompareConstant(JPEG_EOI,0xD9,5782,architecture)
#else
Msg( "Error: Constant not found: JPEG_EOI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef JPEG_APP0
	CompareConstant(JPEG_APP0,0xE0,5783,architecture)
#else
Msg( "Error: Constant not found: JPEG_APP0\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef JPEG_COM
	CompareConstant(JPEG_COM,0xFE,5784,architecture)
#else
Msg( "Error: Constant not found: JPEG_COM\n");
cnt++;
#endif

#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11249,0);
Msg("Find size of jpeg_decompress_struct (11249)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11250,0);
Msg("Find size of jpeg_error_mgr (11250)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11251,0);
Msg("Find size of jpeg_common_struct (11251)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11253,0);
Msg("Find size of jpeg_memory_mgr (11253)\n");
#endif

#if __i386__
CheckTypeSize(j_common_ptr,4, 11255, 2)
#elif __x86_64__
CheckTypeSize(j_common_ptr,8, 11255, 11)
#elif __ia64__
CheckTypeSize(j_common_ptr,8, 11255, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(j_common_ptr,4, 11255, 6)
#elif __powerpc64__
CheckTypeSize(j_common_ptr,8, 11255, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(j_common_ptr,4, 11255, 10)
#elif __s390x__
CheckTypeSize(j_common_ptr,8, 11255, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11255,0);
Msg("Find size of j_common_ptr (11255)\n");
#endif

#if __i386__
CheckTypeSize(JSAMPLE,1, 11257, 2)
#elif __x86_64__
CheckTypeSize(JSAMPLE,1, 11257, 11)
#elif __ia64__
CheckTypeSize(JSAMPLE,1, 11257, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(JSAMPLE,1, 11257, 6)
#elif __powerpc64__
CheckTypeSize(JSAMPLE,1, 11257, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(JSAMPLE,1, 11257, 10)
#elif __s390x__
CheckTypeSize(JSAMPLE,1, 11257, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11257,0);
Msg("Find size of JSAMPLE (11257)\n");
#endif

#if __i386__
CheckTypeSize(JSAMPROW,4, 11259, 2)
#elif __x86_64__
CheckTypeSize(JSAMPROW,8, 11259, 11)
#elif __ia64__
CheckTypeSize(JSAMPROW,8, 11259, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(JSAMPROW,4, 11259, 6)
#elif __powerpc64__
CheckTypeSize(JSAMPROW,8, 11259, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(JSAMPROW,4, 11259, 10)
#elif __s390x__
CheckTypeSize(JSAMPROW,8, 11259, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11259,0);
Msg("Find size of JSAMPROW (11259)\n");
#endif

#if __i386__
CheckTypeSize(JSAMPARRAY,4, 11261, 2)
#elif __x86_64__
CheckTypeSize(JSAMPARRAY,8, 11261, 11)
#elif __ia64__
CheckTypeSize(JSAMPARRAY,8, 11261, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(JSAMPARRAY,4, 11261, 6)
#elif __powerpc64__
CheckTypeSize(JSAMPARRAY,8, 11261, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(JSAMPARRAY,4, 11261, 10)
#elif __s390x__
CheckTypeSize(JSAMPARRAY,8, 11261, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11261,0);
Msg("Find size of JSAMPARRAY (11261)\n");
#endif

#if __i386__
CheckTypeSize(JDIMENSION,4, 11262, 2)
#elif __x86_64__
CheckTypeSize(JDIMENSION,4, 11262, 11)
#elif __ia64__
CheckTypeSize(JDIMENSION,4, 11262, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(JDIMENSION,4, 11262, 6)
#elif __powerpc64__
CheckTypeSize(JDIMENSION,4, 11262, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(JDIMENSION,4, 11262, 10)
#elif __s390x__
CheckTypeSize(JDIMENSION,4, 11262, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11262,0);
Msg("Find size of JDIMENSION (11262)\n");
#endif

#if __i386__
CheckTypeSize(JCOEF,2, 11265, 2)
#elif __x86_64__
CheckTypeSize(JCOEF,2, 11265, 11)
#elif __ia64__
CheckTypeSize(JCOEF,2, 11265, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(JCOEF,2, 11265, 6)
#elif __powerpc64__
CheckTypeSize(JCOEF,2, 11265, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(JCOEF,2, 11265, 10)
#elif __s390x__
CheckTypeSize(JCOEF,2, 11265, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11265,0);
Msg("Find size of JCOEF (11265)\n");
#endif

#if __i386__
CheckTypeSize(JBLOCK,128, 11267, 2)
#elif __x86_64__
CheckTypeSize(JBLOCK,128, 11267, 11)
#elif __ia64__
CheckTypeSize(JBLOCK,128, 11267, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(JBLOCK,128, 11267, 6)
#elif __powerpc64__
CheckTypeSize(JBLOCK,128, 11267, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(JBLOCK,128, 11267, 10)
#elif __s390x__
CheckTypeSize(JBLOCK,128, 11267, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11267,0);
Msg("Find size of JBLOCK (11267)\n");
#endif

#if __i386__
CheckTypeSize(JBLOCKROW,4, 11269, 2)
#elif __x86_64__
CheckTypeSize(JBLOCKROW,8, 11269, 11)
#elif __ia64__
CheckTypeSize(JBLOCKROW,8, 11269, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(JBLOCKROW,4, 11269, 6)
#elif __powerpc64__
CheckTypeSize(JBLOCKROW,8, 11269, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(JBLOCKROW,4, 11269, 10)
#elif __s390x__
CheckTypeSize(JBLOCKROW,8, 11269, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11269,0);
Msg("Find size of JBLOCKROW (11269)\n");
#endif

#if __i386__
CheckTypeSize(JBLOCKARRAY,4, 11271, 2)
#elif __x86_64__
CheckTypeSize(JBLOCKARRAY,8, 11271, 11)
#elif __ia64__
CheckTypeSize(JBLOCKARRAY,8, 11271, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(JBLOCKARRAY,4, 11271, 6)
#elif __powerpc64__
CheckTypeSize(JBLOCKARRAY,8, 11271, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(JBLOCKARRAY,4, 11271, 10)
#elif __s390x__
CheckTypeSize(JBLOCKARRAY,8, 11271, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11271,0);
Msg("Find size of JBLOCKARRAY (11271)\n");
#endif

#if __i386__
CheckTypeSize(jvirt_sarray_ptr,4, 11275, 2)
#elif __x86_64__
CheckTypeSize(jvirt_sarray_ptr,8, 11275, 11)
#elif __ia64__
CheckTypeSize(jvirt_sarray_ptr,8, 11275, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(jvirt_sarray_ptr,4, 11275, 6)
#elif __powerpc64__
CheckTypeSize(jvirt_sarray_ptr,8, 11275, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(jvirt_sarray_ptr,4, 11275, 10)
#elif __s390x__
CheckTypeSize(jvirt_sarray_ptr,8, 11275, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11275,0);
Msg("Find size of jvirt_sarray_ptr (11275)\n");
#endif

#if __i386__
CheckTypeSize(boolean,4, 11276, 2)
#elif __x86_64__
CheckTypeSize(boolean,4, 11276, 11)
#elif __ia64__
CheckTypeSize(boolean,4, 11276, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(boolean,4, 11276, 6)
#elif __powerpc64__
CheckTypeSize(boolean,4, 11276, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(boolean,4, 11276, 10)
#elif __s390x__
CheckTypeSize(boolean,4, 11276, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11276,0);
Msg("Find size of boolean (11276)\n");
#endif

#if __i386__
CheckTypeSize(jvirt_barray_ptr,4, 11280, 2)
#elif __x86_64__
CheckTypeSize(jvirt_barray_ptr,8, 11280, 11)
#elif __ia64__
CheckTypeSize(jvirt_barray_ptr,8, 11280, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(jvirt_barray_ptr,4, 11280, 6)
#elif __powerpc64__
CheckTypeSize(jvirt_barray_ptr,8, 11280, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(jvirt_barray_ptr,4, 11280, 10)
#elif __s390x__
CheckTypeSize(jvirt_barray_ptr,8, 11280, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11280,0);
Msg("Find size of jvirt_barray_ptr (11280)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11287,0);
Msg("Find size of jpeg_progress_mgr (11287)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11295,0);
Msg("Find size of jpeg_source_mgr (11295)\n");
#endif

#if __i386__
CheckTypeSize(JOCTET,1, 11296, 2)
#elif __x86_64__
CheckTypeSize(JOCTET,1, 11296, 11)
#elif __ia64__
CheckTypeSize(JOCTET,1, 11296, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(JOCTET,1, 11296, 6)
#elif __powerpc64__
CheckTypeSize(JOCTET,1, 11296, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(JOCTET,1, 11296, 10)
#elif __s390x__
CheckTypeSize(JOCTET,1, 11296, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11296,0);
Msg("Find size of JOCTET (11296)\n");
#endif

#if __i386__
CheckTypeSize(j_decompress_ptr,4, 11300, 2)
#elif __x86_64__
CheckTypeSize(j_decompress_ptr,8, 11300, 11)
#elif __ia64__
CheckTypeSize(j_decompress_ptr,8, 11300, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(j_decompress_ptr,4, 11300, 6)
#elif __powerpc64__
CheckTypeSize(j_decompress_ptr,8, 11300, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(j_decompress_ptr,4, 11300, 10)
#elif __s390x__
CheckTypeSize(j_decompress_ptr,8, 11300, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11300,0);
Msg("Find size of j_decompress_ptr (11300)\n");
#endif

#if __i386__
CheckTypeSize(J_COLOR_SPACE,4, 11307, 2)
#elif __x86_64__
CheckTypeSize(J_COLOR_SPACE,4, 11307, 11)
#elif __ia64__
CheckTypeSize(J_COLOR_SPACE,4, 11307, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(J_COLOR_SPACE,4, 11307, 6)
#elif __powerpc64__
CheckTypeSize(J_COLOR_SPACE,4, 11307, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(J_COLOR_SPACE,4, 11307, 10)
#elif __s390x__
CheckTypeSize(J_COLOR_SPACE,4, 11307, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11307,0);
Msg("Find size of J_COLOR_SPACE (11307)\n");
#endif

#if __i386__
CheckTypeSize(J_DCT_METHOD,4, 11309, 2)
#elif __x86_64__
CheckTypeSize(J_DCT_METHOD,4, 11309, 11)
#elif __ia64__
CheckTypeSize(J_DCT_METHOD,4, 11309, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(J_DCT_METHOD,4, 11309, 6)
#elif __powerpc64__
CheckTypeSize(J_DCT_METHOD,4, 11309, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(J_DCT_METHOD,4, 11309, 10)
#elif __s390x__
CheckTypeSize(J_DCT_METHOD,4, 11309, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11309,0);
Msg("Find size of J_DCT_METHOD (11309)\n");
#endif

#if __i386__
CheckTypeSize(J_DITHER_MODE,4, 11311, 2)
#elif __x86_64__
CheckTypeSize(J_DITHER_MODE,4, 11311, 11)
#elif __ia64__
CheckTypeSize(J_DITHER_MODE,4, 11311, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(J_DITHER_MODE,4, 11311, 6)
#elif __powerpc64__
CheckTypeSize(J_DITHER_MODE,4, 11311, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(J_DITHER_MODE,4, 11311, 10)
#elif __s390x__
CheckTypeSize(J_DITHER_MODE,4, 11311, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11311,0);
Msg("Find size of J_DITHER_MODE (11311)\n");
#endif

#if __i386__
CheckTypeSize(UINT16,2, 11314, 2)
#elif __x86_64__
CheckTypeSize(UINT16,2, 11314, 11)
#elif __ia64__
CheckTypeSize(UINT16,2, 11314, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(UINT16,2, 11314, 6)
#elif __powerpc64__
CheckTypeSize(UINT16,2, 11314, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(UINT16,2, 11314, 10)
#elif __s390x__
CheckTypeSize(UINT16,2, 11314, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11314,0);
Msg("Find size of UINT16 (11314)\n");
#endif

#if __i386__
CheckTypeSize(JQUANT_TBL,132, 11317, 2)
#elif __x86_64__
CheckTypeSize(JQUANT_TBL,132, 11317, 11)
#elif __ia64__
CheckTypeSize(JQUANT_TBL,132, 11317, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(JQUANT_TBL,132, 11317, 6)
#elif __powerpc64__
CheckTypeSize(JQUANT_TBL,132, 11317, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(JQUANT_TBL,132, 11317, 10)
#elif __s390x__
CheckTypeSize(JQUANT_TBL,132, 11317, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11317,0);
Msg("Find size of JQUANT_TBL (11317)\n");
#endif

#if __i386__
CheckTypeSize(UINT8,1, 11320, 2)
#elif __x86_64__
CheckTypeSize(UINT8,1, 11320, 11)
#elif __ia64__
CheckTypeSize(UINT8,1, 11320, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(UINT8,1, 11320, 6)
#elif __powerpc64__
CheckTypeSize(UINT8,1, 11320, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(UINT8,1, 11320, 10)
#elif __s390x__
CheckTypeSize(UINT8,1, 11320, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11320,0);
Msg("Find size of UINT8 (11320)\n");
#endif

#if __i386__
CheckTypeSize(JHUFF_TBL,280, 11324, 2)
#elif __x86_64__
CheckTypeSize(JHUFF_TBL,280, 11324, 11)
#elif __ia64__
CheckTypeSize(JHUFF_TBL,280, 11324, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(JHUFF_TBL,280, 11324, 6)
#elif __powerpc64__
CheckTypeSize(JHUFF_TBL,280, 11324, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(JHUFF_TBL,280, 11324, 10)
#elif __s390x__
CheckTypeSize(JHUFF_TBL,280, 11324, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11324,0);
Msg("Find size of JHUFF_TBL (11324)\n");
#endif

#if __i386__
CheckTypeSize(jpeg_component_info,84, 11328, 2)
#elif __x86_64__
CheckTypeSize(jpeg_component_info,96, 11328, 11)
#elif __ia64__
CheckTypeSize(jpeg_component_info,96, 11328, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(jpeg_component_info,84, 11328, 6)
#elif __powerpc64__
CheckTypeSize(jpeg_component_info,96, 11328, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(jpeg_component_info,84, 11328, 10)
#elif __s390x__
CheckTypeSize(jpeg_component_info,96, 11328, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11328,0);
Msg("Find size of jpeg_component_info (11328)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11331,0);
Msg("Find size of jpeg_marker_struct (11331)\n");
#endif

#if __i386__
CheckTypeSize(jpeg_saved_marker_ptr,4, 11333, 2)
#elif __x86_64__
CheckTypeSize(jpeg_saved_marker_ptr,8, 11333, 11)
#elif __ia64__
CheckTypeSize(jpeg_saved_marker_ptr,8, 11333, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(jpeg_saved_marker_ptr,4, 11333, 6)
#elif __powerpc64__
CheckTypeSize(jpeg_saved_marker_ptr,8, 11333, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(jpeg_saved_marker_ptr,4, 11333, 10)
#elif __s390x__
CheckTypeSize(jpeg_saved_marker_ptr,8, 11333, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11333,0);
Msg("Find size of jpeg_saved_marker_ptr (11333)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11359,0);
Msg("Find size of jpeg_compress_struct (11359)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11360,0);
Msg("Find size of jpeg_destination_mgr (11360)\n");
#endif

#if __i386__
CheckTypeSize(j_compress_ptr,4, 11362, 2)
#elif __x86_64__
CheckTypeSize(j_compress_ptr,8, 11362, 11)
#elif __ia64__
CheckTypeSize(j_compress_ptr,8, 11362, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(j_compress_ptr,4, 11362, 6)
#elif __powerpc64__
CheckTypeSize(j_compress_ptr,8, 11362, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(j_compress_ptr,4, 11362, 10)
#elif __s390x__
CheckTypeSize(j_compress_ptr,8, 11362, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11362,0);
Msg("Find size of j_compress_ptr (11362)\n");
#endif

#if __i386__
CheckTypeSize(jpeg_scan_info,36, 11368, 2)
#elif __x86_64__
CheckTypeSize(jpeg_scan_info,36, 11368, 11)
#elif __ia64__
CheckTypeSize(jpeg_scan_info,36, 11368, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(jpeg_scan_info,36, 11368, 6)
#elif __powerpc64__
CheckTypeSize(jpeg_scan_info,36, 11368, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(jpeg_scan_info,36, 11368, 10)
#elif __s390x__
CheckTypeSize(jpeg_scan_info,36, 11368, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11368,0);
Msg("Find size of jpeg_scan_info (11368)\n");
#endif

#if __i386__
CheckTypeSize(JSAMPIMAGE,4, 11392, 2)
#elif __x86_64__
CheckTypeSize(JSAMPIMAGE,8, 11392, 11)
#elif __ia64__
CheckTypeSize(JSAMPIMAGE,8, 11392, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(JSAMPIMAGE,4, 11392, 6)
#elif __powerpc64__
CheckTypeSize(JSAMPIMAGE,8, 11392, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(JSAMPIMAGE,4, 11392, 10)
#elif __s390x__
CheckTypeSize(JSAMPIMAGE,8, 11392, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11392,0);
Msg("Find size of JSAMPIMAGE (11392)\n");
#endif

#if __i386__
CheckTypeSize(jpeg_marker_parser_method,4, 11393, 2)
#elif __x86_64__
CheckTypeSize(jpeg_marker_parser_method,8, 11393, 11)
#elif __ia64__
CheckTypeSize(jpeg_marker_parser_method,8, 11393, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(jpeg_marker_parser_method,4, 11393, 6)
#elif __powerpc64__
CheckTypeSize(jpeg_marker_parser_method,8, 11393, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(jpeg_marker_parser_method,4, 11393, 10)
#elif __s390x__
CheckTypeSize(jpeg_marker_parser_method,8, 11393, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11393,0);
Msg("Find size of jpeg_marker_parser_method (11393)\n");
#endif

extern void jpeg_save_markers_db(j_decompress_ptr, int, unsigned int);
CheckInterfacedef(jpeg_save_markers,jpeg_save_markers_db);
extern boolean jpeg_has_multiple_scans_db(j_decompress_ptr);
CheckInterfacedef(jpeg_has_multiple_scans,jpeg_has_multiple_scans_db);
extern void jpeg_set_linear_quality_db(j_compress_ptr, int, boolean);
CheckInterfacedef(jpeg_set_linear_quality,jpeg_set_linear_quality_db);
extern int jpeg_consume_input_db(j_decompress_ptr);
CheckInterfacedef(jpeg_consume_input,jpeg_consume_input_db);
extern void jpeg_stdio_src_db(j_decompress_ptr, FILE *);
CheckInterfacedef(jpeg_stdio_src,jpeg_stdio_src_db);
extern void jpeg_abort_db(j_common_ptr);
CheckInterfacedef(jpeg_abort,jpeg_abort_db);
extern boolean jpeg_finish_output_db(j_decompress_ptr);
CheckInterfacedef(jpeg_finish_output,jpeg_finish_output_db);
extern void jpeg_set_colorspace_db(j_compress_ptr, J_COLOR_SPACE);
CheckInterfacedef(jpeg_set_colorspace,jpeg_set_colorspace_db);
extern void jpeg_copy_critical_parameters_db(j_decompress_ptr, j_compress_ptr);
CheckInterfacedef(jpeg_copy_critical_parameters,jpeg_copy_critical_parameters_db);
extern jvirt_barray_ptr * jpeg_read_coefficients_db(j_decompress_ptr);
CheckInterfacedef(jpeg_read_coefficients,jpeg_read_coefficients_db);
extern void jpeg_destroy_decompress_db(j_decompress_ptr);
CheckInterfacedef(jpeg_destroy_decompress,jpeg_destroy_decompress_db);
extern void jpeg_write_m_header_db(j_compress_ptr, int, unsigned int);
CheckInterfacedef(jpeg_write_m_header,jpeg_write_m_header_db);
extern boolean jpeg_resync_to_restart_db(j_decompress_ptr, int);
CheckInterfacedef(jpeg_resync_to_restart,jpeg_resync_to_restart_db);
extern JDIMENSION jpeg_read_raw_data_db(j_decompress_ptr, JSAMPIMAGE, JDIMENSION);
CheckInterfacedef(jpeg_read_raw_data,jpeg_read_raw_data_db);
extern JDIMENSION jpeg_write_raw_data_db(j_compress_ptr, JSAMPIMAGE, JDIMENSION);
CheckInterfacedef(jpeg_write_raw_data,jpeg_write_raw_data_db);
extern JQUANT_TBL * jpeg_alloc_quant_table_db(j_common_ptr);
CheckInterfacedef(jpeg_alloc_quant_table,jpeg_alloc_quant_table_db);
extern int jpeg_read_header_db(j_decompress_ptr, boolean);
CheckInterfacedef(jpeg_read_header,jpeg_read_header_db);
extern struct jpeg_error_mgr * jpeg_std_error_db(struct jpeg_error_mgr *);
CheckInterfacedef(jpeg_std_error,jpeg_std_error_db);
extern void jpeg_write_tables_db(j_compress_ptr);
CheckInterfacedef(jpeg_write_tables,jpeg_write_tables_db);
extern void jpeg_simple_progression_db(j_compress_ptr);
CheckInterfacedef(jpeg_simple_progression,jpeg_simple_progression_db);
extern void jpeg_set_marker_processor_db(j_decompress_ptr, int, jpeg_marker_parser_method);
CheckInterfacedef(jpeg_set_marker_processor,jpeg_set_marker_processor_db);
extern void jpeg_suppress_tables_db(j_compress_ptr, boolean);
CheckInterfacedef(jpeg_suppress_tables,jpeg_suppress_tables_db);
extern JDIMENSION jpeg_write_scanlines_db(j_compress_ptr, JSAMPARRAY, JDIMENSION);
CheckInterfacedef(jpeg_write_scanlines,jpeg_write_scanlines_db);
extern void jpeg_abort_decompress_db(j_decompress_ptr);
CheckInterfacedef(jpeg_abort_decompress,jpeg_abort_decompress_db);
extern void jpeg_default_colorspace_db(j_compress_ptr);
CheckInterfacedef(jpeg_default_colorspace,jpeg_default_colorspace_db);
extern JHUFF_TBL * jpeg_alloc_huff_table_db(j_common_ptr);
CheckInterfacedef(jpeg_alloc_huff_table,jpeg_alloc_huff_table_db);
extern void jpeg_abort_compress_db(j_compress_ptr);
CheckInterfacedef(jpeg_abort_compress,jpeg_abort_compress_db);
extern void jpeg_add_quant_table_db(j_compress_ptr, int, const unsigned int *, int, boolean);
CheckInterfacedef(jpeg_add_quant_table,jpeg_add_quant_table_db);
extern void jpeg_calc_output_dimensions_db(j_decompress_ptr);
CheckInterfacedef(jpeg_calc_output_dimensions,jpeg_calc_output_dimensions_db);
extern void jpeg_destroy_compress_db(j_compress_ptr);
CheckInterfacedef(jpeg_destroy_compress,jpeg_destroy_compress_db);
extern boolean jpeg_finish_decompress_db(j_decompress_ptr);
CheckInterfacedef(jpeg_finish_decompress,jpeg_finish_decompress_db);
extern void jpeg_write_coefficients_db(j_compress_ptr, jvirt_barray_ptr *);
CheckInterfacedef(jpeg_write_coefficients,jpeg_write_coefficients_db);
extern void jpeg_set_defaults_db(j_compress_ptr);
CheckInterfacedef(jpeg_set_defaults,jpeg_set_defaults_db);
extern boolean jpeg_start_decompress_db(j_decompress_ptr);
CheckInterfacedef(jpeg_start_decompress,jpeg_start_decompress_db);
extern void jpeg_CreateDecompress_db(j_decompress_ptr, int, size_t);
CheckInterfacedef(jpeg_CreateDecompress,jpeg_CreateDecompress_db);
extern void jpeg_new_colormap_db(j_decompress_ptr);
CheckInterfacedef(jpeg_new_colormap,jpeg_new_colormap_db);
extern JDIMENSION jpeg_read_scanlines_db(j_decompress_ptr, JSAMPARRAY, JDIMENSION);
CheckInterfacedef(jpeg_read_scanlines,jpeg_read_scanlines_db);
extern int jpeg_quality_scaling_db(int);
CheckInterfacedef(jpeg_quality_scaling,jpeg_quality_scaling_db);
extern void jpeg_finish_compress_db(j_compress_ptr);
CheckInterfacedef(jpeg_finish_compress,jpeg_finish_compress_db);
extern boolean jpeg_input_complete_db(j_decompress_ptr);
CheckInterfacedef(jpeg_input_complete,jpeg_input_complete_db);
extern void jpeg_CreateCompress_db(j_compress_ptr, int, size_t);
CheckInterfacedef(jpeg_CreateCompress,jpeg_CreateCompress_db);
extern void jpeg_destroy_db(j_common_ptr);
CheckInterfacedef(jpeg_destroy,jpeg_destroy_db);
extern boolean jpeg_start_output_db(j_decompress_ptr, int);
CheckInterfacedef(jpeg_start_output,jpeg_start_output_db);
extern void jpeg_start_compress_db(j_compress_ptr, boolean);
CheckInterfacedef(jpeg_start_compress,jpeg_start_compress_db);
extern void jpeg_set_quality_db(j_compress_ptr, int, boolean);
CheckInterfacedef(jpeg_set_quality,jpeg_set_quality_db);
extern void jpeg_write_marker_db(j_compress_ptr, int, const JOCTET *, unsigned int);
CheckInterfacedef(jpeg_write_marker,jpeg_write_marker_db);
extern void jpeg_write_m_byte_db(j_compress_ptr, int);
CheckInterfacedef(jpeg_write_m_byte,jpeg_write_m_byte_db);
extern void jpeg_stdio_dest_db(j_compress_ptr, FILE *);
CheckInterfacedef(jpeg_stdio_dest,jpeg_stdio_dest_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in jpeglib.h\n\n",pcnt,cnt);
return cnt;
#endif

}
