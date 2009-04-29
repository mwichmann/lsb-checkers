/*
 * Test of png.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#ifndef LSBCC_MODE
#include <png.h>
#if (PNG_LIBPNG_VER_MAJOR != 1) || (PNG_LIBPNG_VER_MINOR != 0) || (PNG_LIBPNG_VER_RELEASE != 8)
    typedef void * version_1_2_8;
#endif
#endif

#include "png.h"



#ifdef TET_TEST
void png_h()
{
#else
int png_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in png.h\n");
#endif

printf("Checking data structures in png.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for png.h depends on string.h */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_LIBPNG_VER_STRING
	CompareStringConstant(PNG_LIBPNG_VER_STRING,"1.2.8",5415,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_LIBPNG_VER_STRING\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_HEADER_VERSION_STRING
	CompareStringConstant(PNG_HEADER_VERSION_STRING," libpng version 1.2.8 - December 3, 2004 (header)\n",5416,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_HEADER_VERSION_STRING\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_LIBPNG_VER_SONUM
	CompareConstant(PNG_LIBPNG_VER_SONUM,0,5417,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_LIBPNG_VER_SONUM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_LIBPNG_VER_DLLNUM
	CompareConstant(PNG_LIBPNG_VER_DLLNUM,13,5418,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_LIBPNG_VER_DLLNUM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_LIBPNG_VER_MAJOR
	CompareConstant(PNG_LIBPNG_VER_MAJOR,1,5419,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_LIBPNG_VER_MAJOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_LIBPNG_VER_MINOR
	CompareConstant(PNG_LIBPNG_VER_MINOR,2,5420,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_LIBPNG_VER_MINOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_LIBPNG_VER_RELEASE
	CompareConstant(PNG_LIBPNG_VER_RELEASE,8,5421,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_LIBPNG_VER_RELEASE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_LIBPNG_VER_BUILD
	CompareConstant(PNG_LIBPNG_VER_BUILD,0,5422,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_LIBPNG_VER_BUILD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_LIBPNG_BUILD_ALPHA
	CompareConstant(PNG_LIBPNG_BUILD_ALPHA,1,5423,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_LIBPNG_BUILD_ALPHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_LIBPNG_BUILD_BETA
	CompareConstant(PNG_LIBPNG_BUILD_BETA,2,5424,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_LIBPNG_BUILD_BETA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_LIBPNG_BUILD_RC
	CompareConstant(PNG_LIBPNG_BUILD_RC,3,5425,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_LIBPNG_BUILD_RC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_LIBPNG_BUILD_STABLE
	CompareConstant(PNG_LIBPNG_BUILD_STABLE,4,5426,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_LIBPNG_BUILD_STABLE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_LIBPNG_BUILD_RELEASE_STATUS_MASK
	CompareConstant(PNG_LIBPNG_BUILD_RELEASE_STATUS_MASK,7,5427,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_LIBPNG_BUILD_RELEASE_STATUS_MASK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_LIBPNG_BUILD_PATCH
	CompareConstant(PNG_LIBPNG_BUILD_PATCH,8,5428,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_LIBPNG_BUILD_PATCH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_LIBPNG_BUILD_PRIVATE
	CompareConstant(PNG_LIBPNG_BUILD_PRIVATE,16,5429,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_LIBPNG_BUILD_PRIVATE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_LIBPNG_BUILD_SPECIAL
	CompareConstant(PNG_LIBPNG_BUILD_SPECIAL,32,5430,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_LIBPNG_BUILD_SPECIAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_LIBPNG_BUILD_BASE_TYPE
	CompareConstant(PNG_LIBPNG_BUILD_BASE_TYPE,PNG_LIBPNG_BUILD_STABLE,5431,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_LIBPNG_BUILD_BASE_TYPE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_LIBPNG_VER
	CompareConstant(PNG_LIBPNG_VER,10208,5432,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_LIBPNG_VER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_1_2_X
Msg( "Error: Constant not found: PNG_1_2_X\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_ZBUF_SIZE
	CompareConstant(PNG_ZBUF_SIZE,8192,5434,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_ZBUF_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_READ_SUPPORTED
Msg( "Error: Constant not found: PNG_READ_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_WRITE_SUPPORTED
Msg( "Error: Constant not found: PNG_WRITE_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_MNG_FEATURES_SUPPORTED
Msg( "Error: Constant not found: PNG_MNG_FEATURES_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_FLOATING_POINT_SUPPORTED
Msg( "Error: Constant not found: PNG_FLOATING_POINT_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_CONST */
#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_NO_READ_iTXt
Msg( "Error: Constant not found: PNG_NO_READ_iTXt\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_NO_WRITE_iTXt
Msg( "Error: Constant not found: PNG_NO_WRITE_iTXt\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_FIXED_POINT_SUPPORTED
Msg( "Error: Constant not found: PNG_FIXED_POINT_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_FREE_ME_SUPPORTED
Msg( "Error: Constant not found: PNG_FREE_ME_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_READ_TRANSFORMS_SUPPORTED
Msg( "Error: Constant not found: PNG_READ_TRANSFORMS_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_READ_EXPAND_SUPPORTED
Msg( "Error: Constant not found: PNG_READ_EXPAND_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_READ_SHIFT_SUPPORTED
Msg( "Error: Constant not found: PNG_READ_SHIFT_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_READ_PACK_SUPPORTED
Msg( "Error: Constant not found: PNG_READ_PACK_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_READ_BGR_SUPPORTED
Msg( "Error: Constant not found: PNG_READ_BGR_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_READ_SWAP_SUPPORTED
Msg( "Error: Constant not found: PNG_READ_SWAP_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_READ_PACKSWAP_SUPPORTED
Msg( "Error: Constant not found: PNG_READ_PACKSWAP_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_READ_INVERT_SUPPORTED
Msg( "Error: Constant not found: PNG_READ_INVERT_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_READ_DITHER_SUPPORTED
Msg( "Error: Constant not found: PNG_READ_DITHER_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_READ_BACKGROUND_SUPPORTED
Msg( "Error: Constant not found: PNG_READ_BACKGROUND_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_READ_16_TO_8_SUPPORTED
Msg( "Error: Constant not found: PNG_READ_16_TO_8_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_READ_FILLER_SUPPORTED
Msg( "Error: Constant not found: PNG_READ_FILLER_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_READ_GAMMA_SUPPORTED
Msg( "Error: Constant not found: PNG_READ_GAMMA_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_READ_GRAY_TO_RGB_SUPPORTED
Msg( "Error: Constant not found: PNG_READ_GRAY_TO_RGB_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_READ_SWAP_ALPHA_SUPPORTED
Msg( "Error: Constant not found: PNG_READ_SWAP_ALPHA_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_READ_INVERT_ALPHA_SUPPORTED
Msg( "Error: Constant not found: PNG_READ_INVERT_ALPHA_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_READ_STRIP_ALPHA_SUPPORTED
Msg( "Error: Constant not found: PNG_READ_STRIP_ALPHA_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_READ_USER_TRANSFORM_SUPPORTED
Msg( "Error: Constant not found: PNG_READ_USER_TRANSFORM_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_READ_RGB_TO_GRAY_SUPPORTED
Msg( "Error: Constant not found: PNG_READ_RGB_TO_GRAY_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_PROGRESSIVE_READ_SUPPORTED
Msg( "Error: Constant not found: PNG_PROGRESSIVE_READ_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_READ_INTERLACING_SUPPORTED
Msg( "Error: Constant not found: PNG_READ_INTERLACING_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_READ_COMPOSITE_NODIV_SUPPORTED
Msg( "Error: Constant not found: PNG_READ_COMPOSITE_NODIV_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_READ_EMPTY_PLTE_SUPPORTED
Msg( "Error: Constant not found: PNG_READ_EMPTY_PLTE_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_WRITE_TRANSFORMS_SUPPORTED
Msg( "Error: Constant not found: PNG_WRITE_TRANSFORMS_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_WRITE_SHIFT_SUPPORTED
Msg( "Error: Constant not found: PNG_WRITE_SHIFT_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_WRITE_PACK_SUPPORTED
Msg( "Error: Constant not found: PNG_WRITE_PACK_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_WRITE_BGR_SUPPORTED
Msg( "Error: Constant not found: PNG_WRITE_BGR_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_WRITE_SWAP_SUPPORTED
Msg( "Error: Constant not found: PNG_WRITE_SWAP_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_WRITE_PACKSWAP_SUPPORTED
Msg( "Error: Constant not found: PNG_WRITE_PACKSWAP_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_WRITE_INVERT_SUPPORTED
Msg( "Error: Constant not found: PNG_WRITE_INVERT_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_WRITE_FILLER_SUPPORTED
Msg( "Error: Constant not found: PNG_WRITE_FILLER_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_WRITE_SWAP_ALPHA_SUPPORTED
Msg( "Error: Constant not found: PNG_WRITE_SWAP_ALPHA_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_WRITE_INVERT_ALPHA_SUPPORTED
Msg( "Error: Constant not found: PNG_WRITE_INVERT_ALPHA_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_WRITE_USER_TRANSFORM_SUPPORTED
Msg( "Error: Constant not found: PNG_WRITE_USER_TRANSFORM_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_WRITE_INTERLACING_SUPPORTED
Msg( "Error: Constant not found: PNG_WRITE_INTERLACING_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_WRITE_WEIGHTED_FILTER_SUPPORTED
Msg( "Error: Constant not found: PNG_WRITE_WEIGHTED_FILTER_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_WRITE_FLUSH_SUPPORTED
Msg( "Error: Constant not found: PNG_WRITE_FLUSH_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_WRITE_EMPTY_PLTE_SUPPORTED
Msg( "Error: Constant not found: PNG_WRITE_EMPTY_PLTE_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_ERROR_NUMBERS_SUPPORTED
Msg( "Error: Constant not found: PNG_ERROR_NUMBERS_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_USER_TRANSFORM_PTR_SUPPORTED
Msg( "Error: Constant not found: PNG_USER_TRANSFORM_PTR_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_TIME_RFC1123_SUPPORTED
Msg( "Error: Constant not found: PNG_TIME_RFC1123_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_EASY_ACCESS_SUPPORTED
Msg( "Error: Constant not found: PNG_EASY_ACCESS_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_ASSEMBLER_CODE_SUPPORTED
Msg( "Error: Constant not found: PNG_ASSEMBLER_CODE_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_MMX_CODE_SUPPORTED
Msg( "Error: Constant not found: PNG_MMX_CODE_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_USER_MEM_SUPPORTED
Msg( "Error: Constant not found: PNG_USER_MEM_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_SET_USER_LIMITS_SUPPORTED
Msg( "Error: Constant not found: PNG_SET_USER_LIMITS_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_USER_WIDTH_MAX
	CompareConstant(PNG_USER_WIDTH_MAX,1000000L,5490,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_USER_WIDTH_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_USER_HEIGHT_MAX
	CompareConstant(PNG_USER_HEIGHT_MAX,1000000L,5491,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_USER_HEIGHT_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_READ_ANCILLARY_CHUNKS_SUPPORTED
Msg( "Error: Constant not found: PNG_READ_ANCILLARY_CHUNKS_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_WRITE_ANCILLARY_CHUNKS_SUPPORTED
Msg( "Error: Constant not found: PNG_WRITE_ANCILLARY_CHUNKS_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_READ_bKGD_SUPPORTED
Msg( "Error: Constant not found: PNG_READ_bKGD_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_bKGD_SUPPORTED
Msg( "Error: Constant not found: PNG_bKGD_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_READ_cHRM_SUPPORTED
Msg( "Error: Constant not found: PNG_READ_cHRM_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_cHRM_SUPPORTED
Msg( "Error: Constant not found: PNG_cHRM_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_READ_gAMA_SUPPORTED
Msg( "Error: Constant not found: PNG_READ_gAMA_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_gAMA_SUPPORTED
Msg( "Error: Constant not found: PNG_gAMA_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_READ_hIST_SUPPORTED
Msg( "Error: Constant not found: PNG_READ_hIST_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_hIST_SUPPORTED
Msg( "Error: Constant not found: PNG_hIST_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_READ_iCCP_SUPPORTED
Msg( "Error: Constant not found: PNG_READ_iCCP_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_iCCP_SUPPORTED
Msg( "Error: Constant not found: PNG_iCCP_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_READ_oFFs_SUPPORTED
Msg( "Error: Constant not found: PNG_READ_oFFs_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_oFFs_SUPPORTED
Msg( "Error: Constant not found: PNG_oFFs_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_READ_pCAL_SUPPORTED
Msg( "Error: Constant not found: PNG_READ_pCAL_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_pCAL_SUPPORTED
Msg( "Error: Constant not found: PNG_pCAL_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_READ_sCAL_SUPPORTED
Msg( "Error: Constant not found: PNG_READ_sCAL_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_sCAL_SUPPORTED
Msg( "Error: Constant not found: PNG_sCAL_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_READ_pHYs_SUPPORTED
Msg( "Error: Constant not found: PNG_READ_pHYs_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_pHYs_SUPPORTED
Msg( "Error: Constant not found: PNG_pHYs_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_READ_sBIT_SUPPORTED
Msg( "Error: Constant not found: PNG_READ_sBIT_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_sBIT_SUPPORTED
Msg( "Error: Constant not found: PNG_sBIT_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_READ_sPLT_SUPPORTED
Msg( "Error: Constant not found: PNG_READ_sPLT_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_sPLT_SUPPORTED
Msg( "Error: Constant not found: PNG_sPLT_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_READ_sRGB_SUPPORTED
Msg( "Error: Constant not found: PNG_READ_sRGB_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_sRGB_SUPPORTED
Msg( "Error: Constant not found: PNG_sRGB_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_READ_tEXt_SUPPORTED
Msg( "Error: Constant not found: PNG_READ_tEXt_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_tEXt_SUPPORTED
Msg( "Error: Constant not found: PNG_tEXt_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_READ_tIME_SUPPORTED
Msg( "Error: Constant not found: PNG_READ_tIME_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_tIME_SUPPORTED
Msg( "Error: Constant not found: PNG_tIME_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_READ_tRNS_SUPPORTED
Msg( "Error: Constant not found: PNG_READ_tRNS_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_tRNS_SUPPORTED
Msg( "Error: Constant not found: PNG_tRNS_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_READ_zTXt_SUPPORTED
Msg( "Error: Constant not found: PNG_READ_zTXt_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_zTXt_SUPPORTED
Msg( "Error: Constant not found: PNG_zTXt_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_READ_UNKNOWN_CHUNKS_SUPPORTED
Msg( "Error: Constant not found: PNG_READ_UNKNOWN_CHUNKS_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_UNKNOWN_CHUNKS_SUPPORTED
Msg( "Error: Constant not found: PNG_UNKNOWN_CHUNKS_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_HANDLE_AS_UNKNOWN_SUPPORTED
Msg( "Error: Constant not found: PNG_HANDLE_AS_UNKNOWN_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_READ_USER_CHUNKS_SUPPORTED
Msg( "Error: Constant not found: PNG_READ_USER_CHUNKS_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_USER_CHUNKS_SUPPORTED
Msg( "Error: Constant not found: PNG_USER_CHUNKS_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_READ_OPT_PLTE_SUPPORTED
Msg( "Error: Constant not found: PNG_READ_OPT_PLTE_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_READ_TEXT_SUPPORTED
Msg( "Error: Constant not found: PNG_READ_TEXT_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_TEXT_SUPPORTED
Msg( "Error: Constant not found: PNG_TEXT_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_WRITE_bKGD_SUPPORTED
Msg( "Error: Constant not found: PNG_WRITE_bKGD_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_WRITE_cHRM_SUPPORTED
Msg( "Error: Constant not found: PNG_WRITE_cHRM_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_WRITE_gAMA_SUPPORTED
Msg( "Error: Constant not found: PNG_WRITE_gAMA_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_WRITE_hIST_SUPPORTED
Msg( "Error: Constant not found: PNG_WRITE_hIST_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_WRITE_iCCP_SUPPORTED
Msg( "Error: Constant not found: PNG_WRITE_iCCP_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_WRITE_oFFs_SUPPORTED
Msg( "Error: Constant not found: PNG_WRITE_oFFs_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_WRITE_pCAL_SUPPORTED
Msg( "Error: Constant not found: PNG_WRITE_pCAL_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_WRITE_sCAL_SUPPORTED
Msg( "Error: Constant not found: PNG_WRITE_sCAL_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_WRITE_pHYs_SUPPORTED
Msg( "Error: Constant not found: PNG_WRITE_pHYs_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_WRITE_sBIT_SUPPORTED
Msg( "Error: Constant not found: PNG_WRITE_sBIT_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_WRITE_sPLT_SUPPORTED
Msg( "Error: Constant not found: PNG_WRITE_sPLT_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_WRITE_sRGB_SUPPORTED
Msg( "Error: Constant not found: PNG_WRITE_sRGB_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_WRITE_tEXt_SUPPORTED
Msg( "Error: Constant not found: PNG_WRITE_tEXt_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_WRITE_tIME_SUPPORTED
Msg( "Error: Constant not found: PNG_WRITE_tIME_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_WRITE_tRNS_SUPPORTED
Msg( "Error: Constant not found: PNG_WRITE_tRNS_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_WRITE_zTXt_SUPPORTED
Msg( "Error: Constant not found: PNG_WRITE_zTXt_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_WRITE_UNKNOWN_CHUNKS_SUPPORTED
Msg( "Error: Constant not found: PNG_WRITE_UNKNOWN_CHUNKS_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_WRITE_TEXT_SUPPORTED
Msg( "Error: Constant not found: PNG_WRITE_TEXT_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_INFO_IMAGE_SUPPORTED
Msg( "Error: Constant not found: PNG_INFO_IMAGE_SUPPORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for png_sizeof(x) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FARDATA */
#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_USE_GLOBAL_ARRAYS
Msg( "Error: Constant not found: PNG_USE_GLOBAL_ARRAYS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNGAPI */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_IMPEXP */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_EXPORT(type,symbol) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_EXPORT_VAR(type) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_ABORT() */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for png_jmpbuf(png_ptr) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for CVT_PTR(ptr) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for CVT_PTR_NOCHECK(ptr) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for png_strcpy */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for png_strncpy */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for png_strlen */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for png_memcmp */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for png_memcpy */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for png_memset */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_LIBPNG_BUILD_TYPE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for int_p_NULL */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for png_bytep_NULL */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for png_bytepp_NULL */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for png_doublep_NULL */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for png_error_ptr_NULL */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for png_flush_ptr_NULL */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for png_infopp_NULL */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for png_rw_ptr_NULL */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for png_structp_NULL */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for png_uint_16p_NULL */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for png_voidp_NULL */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_TEXT_COMPRESSION_NONE_WR
	CompareConstant(PNG_TEXT_COMPRESSION_NONE_WR,-3,5586,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_TEXT_COMPRESSION_NONE_WR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_TEXT_COMPRESSION_zTXt_WR
	CompareConstant(PNG_TEXT_COMPRESSION_zTXt_WR,-2,5587,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_TEXT_COMPRESSION_zTXt_WR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_TEXT_COMPRESSION_NONE
	CompareConstant(PNG_TEXT_COMPRESSION_NONE,-1,5588,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_TEXT_COMPRESSION_NONE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_TEXT_COMPRESSION_zTXt
	CompareConstant(PNG_TEXT_COMPRESSION_zTXt,0,5589,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_TEXT_COMPRESSION_zTXt\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_ITXT_COMPRESSION_NONE
	CompareConstant(PNG_ITXT_COMPRESSION_NONE,1,5590,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_ITXT_COMPRESSION_NONE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_ITXT_COMPRESSION_zTXt
	CompareConstant(PNG_ITXT_COMPRESSION_zTXt,2,5591,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_ITXT_COMPRESSION_zTXt\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_TEXT_COMPRESSION_LAST
	CompareConstant(PNG_TEXT_COMPRESSION_LAST,3,5592,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_TEXT_COMPRESSION_LAST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_UINT_31_MAX */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_UINT_32_MAX */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_SIZE_MAX */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_MAX_UINT */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_COLOR_MASK_PALETTE
	CompareConstant(PNG_COLOR_MASK_PALETTE,1,5597,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_COLOR_MASK_PALETTE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_COLOR_MASK_COLOR
	CompareConstant(PNG_COLOR_MASK_COLOR,2,5598,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_COLOR_MASK_COLOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_COLOR_MASK_ALPHA
	CompareConstant(PNG_COLOR_MASK_ALPHA,4,5599,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_COLOR_MASK_ALPHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_COLOR_TYPE_GRAY
	CompareConstant(PNG_COLOR_TYPE_GRAY,0,5600,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_COLOR_TYPE_GRAY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_COLOR_TYPE_PALETTE
	CompareConstant(PNG_COLOR_TYPE_PALETTE,(PNG_COLOR_MASK_COLOR | PNG_COLOR_MASK_PALETTE),5601,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_COLOR_TYPE_PALETTE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_COLOR_TYPE_RGB
	CompareConstant(PNG_COLOR_TYPE_RGB,(PNG_COLOR_MASK_COLOR),5602,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_COLOR_TYPE_RGB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_COLOR_TYPE_RGB_ALPHA
	CompareConstant(PNG_COLOR_TYPE_RGB_ALPHA,(PNG_COLOR_MASK_COLOR | PNG_COLOR_MASK_ALPHA),5603,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_COLOR_TYPE_RGB_ALPHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_COLOR_TYPE_GRAY_ALPHA
	CompareConstant(PNG_COLOR_TYPE_GRAY_ALPHA,(PNG_COLOR_MASK_ALPHA),5604,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_COLOR_TYPE_GRAY_ALPHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_COLOR_TYPE_RGBA
	CompareConstant(PNG_COLOR_TYPE_RGBA,PNG_COLOR_TYPE_RGB_ALPHA,5605,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_COLOR_TYPE_RGBA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_COLOR_TYPE_GA
	CompareConstant(PNG_COLOR_TYPE_GA,PNG_COLOR_TYPE_GRAY_ALPHA,5606,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_COLOR_TYPE_GA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_COMPRESSION_TYPE_BASE
	CompareConstant(PNG_COMPRESSION_TYPE_BASE,0,5607,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_COMPRESSION_TYPE_BASE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_COMPRESSION_TYPE_DEFAULT
	CompareConstant(PNG_COMPRESSION_TYPE_DEFAULT,PNG_COMPRESSION_TYPE_BASE,5608,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_COMPRESSION_TYPE_DEFAULT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FILTER_TYPE_BASE
	CompareConstant(PNG_FILTER_TYPE_BASE,0,5609,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_FILTER_TYPE_BASE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_INTRAPIXEL_DIFFERENCING
	CompareConstant(PNG_INTRAPIXEL_DIFFERENCING,64,5610,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_INTRAPIXEL_DIFFERENCING\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FILTER_TYPE_DEFAULT
	CompareConstant(PNG_FILTER_TYPE_DEFAULT,PNG_FILTER_TYPE_BASE,5611,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_FILTER_TYPE_DEFAULT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_INTERLACE_NONE
	CompareConstant(PNG_INTERLACE_NONE,0,5612,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_INTERLACE_NONE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_INTERLACE_ADAM7
	CompareConstant(PNG_INTERLACE_ADAM7,1,5613,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_INTERLACE_ADAM7\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_INTERLACE_LAST
	CompareConstant(PNG_INTERLACE_LAST,2,5614,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_INTERLACE_LAST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_OFFSET_PIXEL
	CompareConstant(PNG_OFFSET_PIXEL,0,5615,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_OFFSET_PIXEL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_OFFSET_MICROMETER
	CompareConstant(PNG_OFFSET_MICROMETER,1,5616,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_OFFSET_MICROMETER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_OFFSET_LAST
	CompareConstant(PNG_OFFSET_LAST,2,5617,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_OFFSET_LAST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_EQUATION_LINEAR
	CompareConstant(PNG_EQUATION_LINEAR,0,5618,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_EQUATION_LINEAR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_EQUATION_BASE_E
	CompareConstant(PNG_EQUATION_BASE_E,1,5619,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_EQUATION_BASE_E\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_EQUATION_ARBITRARY
	CompareConstant(PNG_EQUATION_ARBITRARY,2,5620,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_EQUATION_ARBITRARY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_EQUATION_HYPERBOLIC
	CompareConstant(PNG_EQUATION_HYPERBOLIC,3,5621,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_EQUATION_HYPERBOLIC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_EQUATION_LAST
	CompareConstant(PNG_EQUATION_LAST,4,5622,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_EQUATION_LAST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_SCALE_UNKNOWN
	CompareConstant(PNG_SCALE_UNKNOWN,0,5623,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_SCALE_UNKNOWN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_SCALE_METER
	CompareConstant(PNG_SCALE_METER,1,5624,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_SCALE_METER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_SCALE_RADIAN
	CompareConstant(PNG_SCALE_RADIAN,2,5625,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_SCALE_RADIAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_SCALE_LAST
	CompareConstant(PNG_SCALE_LAST,3,5626,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_SCALE_LAST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_RESOLUTION_UNKNOWN
	CompareConstant(PNG_RESOLUTION_UNKNOWN,0,5627,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_RESOLUTION_UNKNOWN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_RESOLUTION_METER
	CompareConstant(PNG_RESOLUTION_METER,1,5628,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_RESOLUTION_METER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_RESOLUTION_LAST
	CompareConstant(PNG_RESOLUTION_LAST,2,5629,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_RESOLUTION_LAST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_sRGB_INTENT_PERCEPTUAL
	CompareConstant(PNG_sRGB_INTENT_PERCEPTUAL,0,5630,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_sRGB_INTENT_PERCEPTUAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_sRGB_INTENT_RELATIVE
	CompareConstant(PNG_sRGB_INTENT_RELATIVE,1,5631,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_sRGB_INTENT_RELATIVE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_sRGB_INTENT_SATURATION
	CompareConstant(PNG_sRGB_INTENT_SATURATION,2,5632,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_sRGB_INTENT_SATURATION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_sRGB_INTENT_ABSOLUTE
	CompareConstant(PNG_sRGB_INTENT_ABSOLUTE,3,5633,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_sRGB_INTENT_ABSOLUTE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_sRGB_INTENT_LAST
	CompareConstant(PNG_sRGB_INTENT_LAST,4,5634,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_sRGB_INTENT_LAST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_KEYWORD_MAX_LENGTH
	CompareConstant(PNG_KEYWORD_MAX_LENGTH,79,5635,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_KEYWORD_MAX_LENGTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_MAX_PALETTE_LENGTH
	CompareConstant(PNG_MAX_PALETTE_LENGTH,256,5636,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_MAX_PALETTE_LENGTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_INFO_gAMA
	CompareConstant(PNG_INFO_gAMA,0x0001,5637,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_INFO_gAMA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_INFO_sBIT
	CompareConstant(PNG_INFO_sBIT,0x0002,5638,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_INFO_sBIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_INFO_cHRM
	CompareConstant(PNG_INFO_cHRM,0x0004,5639,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_INFO_cHRM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_INFO_PLTE
	CompareConstant(PNG_INFO_PLTE,0x0008,5640,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_INFO_PLTE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_INFO_tRNS
	CompareConstant(PNG_INFO_tRNS,0x0010,5641,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_INFO_tRNS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_INFO_bKGD
	CompareConstant(PNG_INFO_bKGD,0x0020,5642,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_INFO_bKGD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_INFO_hIST
	CompareConstant(PNG_INFO_hIST,0x0040,5643,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_INFO_hIST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_INFO_pHYs
	CompareConstant(PNG_INFO_pHYs,0x0080,5644,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_INFO_pHYs\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_INFO_oFFs
	CompareConstant(PNG_INFO_oFFs,0x0100,5645,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_INFO_oFFs\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_INFO_tIME
	CompareConstant(PNG_INFO_tIME,0x0200,5646,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_INFO_tIME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_INFO_pCAL
	CompareConstant(PNG_INFO_pCAL,0x0400,5647,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_INFO_pCAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_INFO_sRGB
	CompareConstant(PNG_INFO_sRGB,0x0800,5648,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_INFO_sRGB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_INFO_iCCP
	CompareConstant(PNG_INFO_iCCP,0x1000,5649,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_INFO_iCCP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_INFO_sPLT
	CompareConstant(PNG_INFO_sPLT,0x2000,5650,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_INFO_sPLT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_INFO_sCAL
	CompareConstant(PNG_INFO_sCAL,0x4000,5651,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_INFO_sCAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_INFO_IDAT
	CompareConstant(PNG_INFO_IDAT,0x8000L,5652,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_INFO_IDAT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_TRANSFORM_IDENTITY
	CompareConstant(PNG_TRANSFORM_IDENTITY,0x0000,5653,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_TRANSFORM_IDENTITY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_TRANSFORM_STRIP_16
	CompareConstant(PNG_TRANSFORM_STRIP_16,0x0001,5654,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_TRANSFORM_STRIP_16\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_TRANSFORM_STRIP_ALPHA
	CompareConstant(PNG_TRANSFORM_STRIP_ALPHA,0x0002,5655,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_TRANSFORM_STRIP_ALPHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_TRANSFORM_PACKING
	CompareConstant(PNG_TRANSFORM_PACKING,0x0004,5656,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_TRANSFORM_PACKING\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_TRANSFORM_PACKSWAP
	CompareConstant(PNG_TRANSFORM_PACKSWAP,0x0008,5657,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_TRANSFORM_PACKSWAP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_TRANSFORM_EXPAND
	CompareConstant(PNG_TRANSFORM_EXPAND,0x0010,5658,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_TRANSFORM_EXPAND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_TRANSFORM_INVERT_MONO
	CompareConstant(PNG_TRANSFORM_INVERT_MONO,0x0020,5659,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_TRANSFORM_INVERT_MONO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_TRANSFORM_SHIFT
	CompareConstant(PNG_TRANSFORM_SHIFT,0x0040,5660,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_TRANSFORM_SHIFT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_TRANSFORM_BGR
	CompareConstant(PNG_TRANSFORM_BGR,0x0080,5661,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_TRANSFORM_BGR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_TRANSFORM_SWAP_ALPHA
	CompareConstant(PNG_TRANSFORM_SWAP_ALPHA,0x0100,5662,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_TRANSFORM_SWAP_ALPHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_TRANSFORM_SWAP_ENDIAN
	CompareConstant(PNG_TRANSFORM_SWAP_ENDIAN,0x0200,5663,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_TRANSFORM_SWAP_ENDIAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_TRANSFORM_INVERT_ALPHA
	CompareConstant(PNG_TRANSFORM_INVERT_ALPHA,0x0400,5664,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_TRANSFORM_INVERT_ALPHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_TRANSFORM_STRIP_FILLER
	CompareConstant(PNG_TRANSFORM_STRIP_FILLER,0x0800,5665,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_TRANSFORM_STRIP_FILLER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FLAG_MNG_EMPTY_PLTE
	CompareConstant(PNG_FLAG_MNG_EMPTY_PLTE,0x01,5666,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_FLAG_MNG_EMPTY_PLTE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FLAG_MNG_FILTER_64
	CompareConstant(PNG_FLAG_MNG_FILTER_64,0x04,5667,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_FLAG_MNG_FILTER_64\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_ALL_MNG_FEATURES
	CompareConstant(PNG_ALL_MNG_FEATURES,0x05,5668,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_ALL_MNG_FEATURES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for png_info_init(info_ptr) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FILLER_BEFORE
	CompareConstant(PNG_FILLER_BEFORE,0,5670,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_FILLER_BEFORE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FILLER_AFTER
	CompareConstant(PNG_FILLER_AFTER,1,5671,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_FILLER_AFTER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_BACKGROUND_GAMMA_UNKNOWN
	CompareConstant(PNG_BACKGROUND_GAMMA_UNKNOWN,0,5672,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_BACKGROUND_GAMMA_UNKNOWN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_BACKGROUND_GAMMA_SCREEN
	CompareConstant(PNG_BACKGROUND_GAMMA_SCREEN,1,5673,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_BACKGROUND_GAMMA_SCREEN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_BACKGROUND_GAMMA_FILE
	CompareConstant(PNG_BACKGROUND_GAMMA_FILE,2,5674,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_BACKGROUND_GAMMA_FILE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_BACKGROUND_GAMMA_UNIQUE
	CompareConstant(PNG_BACKGROUND_GAMMA_UNIQUE,3,5675,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_BACKGROUND_GAMMA_UNIQUE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_CRC_DEFAULT
	CompareConstant(PNG_CRC_DEFAULT,0,5676,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_CRC_DEFAULT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_CRC_ERROR_QUIT
	CompareConstant(PNG_CRC_ERROR_QUIT,1,5677,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_CRC_ERROR_QUIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_CRC_WARN_DISCARD
	CompareConstant(PNG_CRC_WARN_DISCARD,2,5678,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_CRC_WARN_DISCARD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_CRC_WARN_USE
	CompareConstant(PNG_CRC_WARN_USE,3,5679,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_CRC_WARN_USE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_CRC_QUIET_USE
	CompareConstant(PNG_CRC_QUIET_USE,4,5680,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_CRC_QUIET_USE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_CRC_NO_CHANGE
	CompareConstant(PNG_CRC_NO_CHANGE,5,5681,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_CRC_NO_CHANGE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_NO_FILTERS
	CompareConstant(PNG_NO_FILTERS,0x00,5682,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_NO_FILTERS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FILTER_NONE
	CompareConstant(PNG_FILTER_NONE,0x08,5683,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_FILTER_NONE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FILTER_SUB
	CompareConstant(PNG_FILTER_SUB,0x10,5684,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_FILTER_SUB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FILTER_UP
	CompareConstant(PNG_FILTER_UP,0x20,5685,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_FILTER_UP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FILTER_AVG
	CompareConstant(PNG_FILTER_AVG,0x40,5686,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_FILTER_AVG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FILTER_PAETH
	CompareConstant(PNG_FILTER_PAETH,0x80,5687,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_FILTER_PAETH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_ALL_FILTERS */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FILTER_VALUE_NONE
	CompareConstant(PNG_FILTER_VALUE_NONE,0,5689,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_FILTER_VALUE_NONE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FILTER_VALUE_SUB
	CompareConstant(PNG_FILTER_VALUE_SUB,1,5690,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_FILTER_VALUE_SUB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FILTER_VALUE_UP
	CompareConstant(PNG_FILTER_VALUE_UP,2,5691,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_FILTER_VALUE_UP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FILTER_VALUE_AVG
	CompareConstant(PNG_FILTER_VALUE_AVG,3,5692,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_FILTER_VALUE_AVG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FILTER_VALUE_PAETH
	CompareConstant(PNG_FILTER_VALUE_PAETH,4,5693,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_FILTER_VALUE_PAETH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FILTER_VALUE_LAST
	CompareConstant(PNG_FILTER_VALUE_LAST,5,5694,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_FILTER_VALUE_LAST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FILTER_HEURISTIC_DEFAULT
	CompareConstant(PNG_FILTER_HEURISTIC_DEFAULT,0,5695,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_FILTER_HEURISTIC_DEFAULT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FILTER_HEURISTIC_UNWEIGHTED
	CompareConstant(PNG_FILTER_HEURISTIC_UNWEIGHTED,1,5696,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_FILTER_HEURISTIC_UNWEIGHTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FILTER_HEURISTIC_WEIGHTED
	CompareConstant(PNG_FILTER_HEURISTIC_WEIGHTED,2,5697,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_FILTER_HEURISTIC_WEIGHTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FILTER_HEURISTIC_LAST
	CompareConstant(PNG_FILTER_HEURISTIC_LAST,3,5698,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_FILTER_HEURISTIC_LAST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_DESTROY_WILL_FREE_DATA
	CompareConstant(PNG_DESTROY_WILL_FREE_DATA,1,5699,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_DESTROY_WILL_FREE_DATA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_SET_WILL_FREE_DATA
	CompareConstant(PNG_SET_WILL_FREE_DATA,1,5700,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_SET_WILL_FREE_DATA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_USER_WILL_FREE_DATA
	CompareConstant(PNG_USER_WILL_FREE_DATA,2,5701,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_USER_WILL_FREE_DATA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FREE_HIST
	CompareConstant(PNG_FREE_HIST,0x0008,5702,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_FREE_HIST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FREE_ICCP
	CompareConstant(PNG_FREE_ICCP,0x0010,5703,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_FREE_ICCP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FREE_SPLT
	CompareConstant(PNG_FREE_SPLT,0x0020,5704,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_FREE_SPLT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FREE_ROWS
	CompareConstant(PNG_FREE_ROWS,0x0040,5705,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_FREE_ROWS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FREE_PCAL
	CompareConstant(PNG_FREE_PCAL,0x0080,5706,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_FREE_PCAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FREE_SCAL
	CompareConstant(PNG_FREE_SCAL,0x0100,5707,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_FREE_SCAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FREE_UNKN
	CompareConstant(PNG_FREE_UNKN,0x0200,5708,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_FREE_UNKN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FREE_LIST
	CompareConstant(PNG_FREE_LIST,0x0400,5709,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_FREE_LIST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FREE_PLTE
	CompareConstant(PNG_FREE_PLTE,0x1000,5710,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_FREE_PLTE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FREE_TRNS
	CompareConstant(PNG_FREE_TRNS,0x2000,5711,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_FREE_TRNS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FREE_TEXT
	CompareConstant(PNG_FREE_TEXT,0x4000,5712,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_FREE_TEXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FREE_ALL
	CompareConstant(PNG_FREE_ALL,0x7fff,5713,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_FREE_ALL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FREE_MUL
	CompareConstant(PNG_FREE_MUL,0x4220,5714,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_FREE_MUL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_HANDLE_CHUNK_AS_DEFAULT
	CompareConstant(PNG_HANDLE_CHUNK_AS_DEFAULT,0,5715,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_HANDLE_CHUNK_AS_DEFAULT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_HANDLE_CHUNK_NEVER
	CompareConstant(PNG_HANDLE_CHUNK_NEVER,1,5716,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_HANDLE_CHUNK_NEVER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_HANDLE_CHUNK_IF_SAFE
	CompareConstant(PNG_HANDLE_CHUNK_IF_SAFE,2,5717,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_HANDLE_CHUNK_IF_SAFE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_HANDLE_CHUNK_ALWAYS
	CompareConstant(PNG_HANDLE_CHUNK_ALWAYS,3,5718,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_HANDLE_CHUNK_ALWAYS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_ASM_FLAG_MMX_SUPPORT_COMPILED
	CompareConstant(PNG_ASM_FLAG_MMX_SUPPORT_COMPILED,0x01,5719,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_ASM_FLAG_MMX_SUPPORT_COMPILED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_ASM_FLAG_MMX_SUPPORT_IN_CPU
	CompareConstant(PNG_ASM_FLAG_MMX_SUPPORT_IN_CPU,0x02,5720,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_ASM_FLAG_MMX_SUPPORT_IN_CPU\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_ASM_FLAG_MMX_READ_COMBINE_ROW
	CompareConstant(PNG_ASM_FLAG_MMX_READ_COMBINE_ROW,0x04,5721,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_ASM_FLAG_MMX_READ_COMBINE_ROW\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_ASM_FLAG_MMX_READ_INTERLACE
	CompareConstant(PNG_ASM_FLAG_MMX_READ_INTERLACE,0x08,5722,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_ASM_FLAG_MMX_READ_INTERLACE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_ASM_FLAG_MMX_READ_FILTER_SUB
	CompareConstant(PNG_ASM_FLAG_MMX_READ_FILTER_SUB,0x10,5723,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_ASM_FLAG_MMX_READ_FILTER_SUB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_ASM_FLAG_MMX_READ_FILTER_UP
	CompareConstant(PNG_ASM_FLAG_MMX_READ_FILTER_UP,0x20,5724,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_ASM_FLAG_MMX_READ_FILTER_UP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_ASM_FLAG_MMX_READ_FILTER_AVG
	CompareConstant(PNG_ASM_FLAG_MMX_READ_FILTER_AVG,0x40,5725,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_ASM_FLAG_MMX_READ_FILTER_AVG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_ASM_FLAG_MMX_READ_FILTER_PAETH
	CompareConstant(PNG_ASM_FLAG_MMX_READ_FILTER_PAETH,0x80,5726,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_ASM_FLAG_MMX_READ_FILTER_PAETH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_ASM_FLAGS_INITIALIZED
	CompareConstant(PNG_ASM_FLAGS_INITIALIZED,0x80000000,5727,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_ASM_FLAGS_INITIALIZED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_MMX_READ_FLAGS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_MMX_WRITE_FLAGS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_MMX_FLAGS */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_SELECT_READ
	CompareConstant(PNG_SELECT_READ,1,5731,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_SELECT_READ\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_SELECT_WRITE
	CompareConstant(PNG_SELECT_WRITE,2,5732,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PNG_SELECT_WRITE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for png_composite(composite,fg,alpha,bg) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for png_composite_16(composite,fg,alpha,bg) */
#endif

#if _LSB_DEFAULT_ARCH
#ifndef PNG_SETJMP_SUPPORTED
Msg( "Error: Constant not found: PNG_SETJMP_SUPPORTED\n");
cnt++;
#endif

#endif

#if defined __s390x__
CheckTypeSize(png_unknown_chunkp,8, 1094, 12, 3.1, NULL, 1092, NULL)
#elif defined __x86_64__
CheckTypeSize(png_unknown_chunkp,8, 1094, 11, 3.1, NULL, 1092, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_unknown_chunkp,4, 1094, 10, 3.1, NULL, 1092, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_unknown_chunkp,8, 1094, 9, 3.1, NULL, 1092, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_unknown_chunkp,4, 1094, 6, 3.1, NULL, 1092, NULL)
#elif defined __ia64__
CheckTypeSize(png_unknown_chunkp,8, 1094, 3, 3.1, NULL, 1092, NULL)
#elif defined __i386__
CheckTypeSize(png_unknown_chunkp,4, 1094, 2, 3.1, NULL, 1092, NULL)
#else
Msg("Find size of png_unknown_chunkp (1094)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,1092,NULL);\n",architecture,1094,0);
#endif

#if defined __s390x__
CheckTypeSize(png_unknown_chunkpp,8, 1095, 12, 4.0, NULL, 1093, NULL)
#elif defined __x86_64__
CheckTypeSize(png_unknown_chunkpp,8, 1095, 11, 4.0, NULL, 1093, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_unknown_chunkpp,4, 1095, 10, 4.0, NULL, 1093, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_unknown_chunkpp,8, 1095, 9, 4.0, NULL, 1093, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_unknown_chunkpp,4, 1095, 6, 4.0, NULL, 1093, NULL)
#elif defined __ia64__
CheckTypeSize(png_unknown_chunkpp,8, 1095, 3, 4.0, NULL, 1093, NULL)
#elif defined __i386__
CheckTypeSize(png_unknown_chunkpp,4, 1095, 2, 4.0, NULL, 1093, NULL)
#else
Msg("Find size of png_unknown_chunkpp (1095)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""4.0""',NULL,1093,NULL);\n",architecture,1095,0);
#endif

#if defined __s390x__
CheckTypeSize(struct png_sPLT_struct,32, 1096, 12, 3.1, NULL, 0, NULL)
CheckMemberSize(struct png_sPLT_struct,depth,1,12,78480)
CheckOffset(struct png_sPLT_struct,depth,8,12,78480)
CheckMemberSize(struct png_sPLT_struct,entries,8,12,78481)
CheckOffset(struct png_sPLT_struct,entries,16,12,78481)
CheckMemberSize(struct png_sPLT_struct,nentries,8,12,78482)
CheckOffset(struct png_sPLT_struct,nentries,24,12,78482)
#elif defined __x86_64__
CheckTypeSize(struct png_sPLT_struct,32, 1096, 11, 3.1, NULL, 0, NULL)
CheckMemberSize(struct png_sPLT_struct,depth,1,11,78480)
CheckOffset(struct png_sPLT_struct,depth,8,11,78480)
CheckMemberSize(struct png_sPLT_struct,entries,8,11,78481)
CheckOffset(struct png_sPLT_struct,entries,16,11,78481)
CheckMemberSize(struct png_sPLT_struct,nentries,8,11,78482)
CheckOffset(struct png_sPLT_struct,nentries,24,11,78482)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct png_sPLT_struct,16, 1096, 10, 3.1, NULL, 0, NULL)
CheckMemberSize(struct png_sPLT_struct,depth,1,10,78480)
CheckOffset(struct png_sPLT_struct,depth,4,10,78480)
CheckMemberSize(struct png_sPLT_struct,entries,4,10,78481)
CheckOffset(struct png_sPLT_struct,entries,8,10,78481)
CheckMemberSize(struct png_sPLT_struct,nentries,4,10,78482)
CheckOffset(struct png_sPLT_struct,nentries,12,10,78482)
#elif defined __powerpc64__
CheckTypeSize(struct png_sPLT_struct,32, 1096, 9, 3.1, NULL, 0, NULL)
CheckMemberSize(struct png_sPLT_struct,depth,1,9,78480)
CheckOffset(struct png_sPLT_struct,depth,8,9,78480)
CheckMemberSize(struct png_sPLT_struct,entries,8,9,78481)
CheckOffset(struct png_sPLT_struct,entries,16,9,78481)
CheckMemberSize(struct png_sPLT_struct,nentries,8,9,78482)
CheckOffset(struct png_sPLT_struct,nentries,24,9,78482)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct png_sPLT_struct,16, 1096, 6, 3.1, NULL, 0, NULL)
CheckMemberSize(struct png_sPLT_struct,depth,1,6,78480)
CheckOffset(struct png_sPLT_struct,depth,4,6,78480)
CheckMemberSize(struct png_sPLT_struct,entries,4,6,78481)
CheckOffset(struct png_sPLT_struct,entries,8,6,78481)
CheckMemberSize(struct png_sPLT_struct,nentries,4,6,78482)
CheckOffset(struct png_sPLT_struct,nentries,12,6,78482)
#elif defined __ia64__
CheckTypeSize(struct png_sPLT_struct,32, 1096, 3, 3.1, NULL, 0, NULL)
CheckMemberSize(struct png_sPLT_struct,depth,1,3,78480)
CheckOffset(struct png_sPLT_struct,depth,8,3,78480)
CheckMemberSize(struct png_sPLT_struct,entries,8,3,78481)
CheckOffset(struct png_sPLT_struct,entries,16,3,78481)
CheckMemberSize(struct png_sPLT_struct,nentries,8,3,78482)
CheckOffset(struct png_sPLT_struct,nentries,24,3,78482)
#elif defined __i386__
CheckTypeSize(struct png_sPLT_struct,16, 1096, 2, 3.1, NULL, 0, NULL)
CheckMemberSize(struct png_sPLT_struct,depth,1,2,78480)
CheckOffset(struct png_sPLT_struct,depth,4,2,78480)
CheckMemberSize(struct png_sPLT_struct,entries,4,2,78481)
CheckOffset(struct png_sPLT_struct,entries,8,2,78481)
CheckMemberSize(struct png_sPLT_struct,nentries,4,2,78482)
CheckOffset(struct png_sPLT_struct,nentries,12,2,78482)
#else
Msg("Find size of png_sPLT_struct (1096)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,0,NULL);\n",architecture,1096,0);
#endif

#if 1
CheckTypeSize(struct png_sPLT_entry_struct,10, 1097, 1, 3.1, NULL, 0, NULL)
CheckMemberSize(struct png_sPLT_entry_struct,green,2,1,78475)
CheckOffset(struct png_sPLT_entry_struct,green,2,1,78475)
CheckMemberSize(struct png_sPLT_entry_struct,blue,2,1,78476)
CheckOffset(struct png_sPLT_entry_struct,blue,4,1,78476)
CheckMemberSize(struct png_sPLT_entry_struct,alpha,2,1,78477)
CheckOffset(struct png_sPLT_entry_struct,alpha,6,1,78477)
CheckMemberSize(struct png_sPLT_entry_struct,frequency,2,1,78478)
CheckOffset(struct png_sPLT_entry_struct,frequency,8,1,78478)
#endif

#if 1
CheckTypeSize(png_sPLT_entry,10, 1098, 1, 3.1, NULL, 1097, NULL)
#endif

#if defined __s390x__
CheckTypeSize(png_sPLT_entryp,8, 1101, 12, 3.1, NULL, 1099, NULL)
#elif defined __x86_64__
CheckTypeSize(png_sPLT_entryp,8, 1101, 11, 3.1, NULL, 1099, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_sPLT_entryp,4, 1101, 10, 3.1, NULL, 1099, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_sPLT_entryp,8, 1101, 9, 3.1, NULL, 1099, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_sPLT_entryp,4, 1101, 6, 3.1, NULL, 1099, NULL)
#elif defined __ia64__
CheckTypeSize(png_sPLT_entryp,8, 1101, 3, 3.1, NULL, 1099, NULL)
#elif defined __i386__
CheckTypeSize(png_sPLT_entryp,4, 1101, 2, 3.1, NULL, 1099, NULL)
#else
Msg("Find size of png_sPLT_entryp (1101)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,1099,NULL);\n",architecture,1101,0);
#endif

#if defined __s390x__
CheckTypeSize(png_sPLT_entrypp,8, 1102, 12, 3.1, NULL, 1100, NULL)
#elif defined __x86_64__
CheckTypeSize(png_sPLT_entrypp,8, 1102, 11, 3.1, NULL, 1100, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_sPLT_entrypp,4, 1102, 10, 3.1, NULL, 1100, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_sPLT_entrypp,8, 1102, 9, 3.1, NULL, 1100, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_sPLT_entrypp,4, 1102, 6, 3.1, NULL, 1100, NULL)
#elif defined __ia64__
CheckTypeSize(png_sPLT_entrypp,8, 1102, 3, 3.1, NULL, 1100, NULL)
#elif defined __i386__
CheckTypeSize(png_sPLT_entrypp,4, 1102, 2, 3.1, NULL, 1100, NULL)
#else
Msg("Find size of png_sPLT_entrypp (1102)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,1100,NULL);\n",architecture,1102,0);
#endif

#if defined __s390x__
CheckTypeSize(png_sPLT_t,32, 1103, 12, 3.1, NULL, 1096, NULL)
#elif defined __x86_64__
CheckTypeSize(png_sPLT_t,32, 1103, 11, 3.1, NULL, 1096, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_sPLT_t,16, 1103, 10, 3.1, NULL, 1096, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_sPLT_t,32, 1103, 9, 3.1, NULL, 1096, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_sPLT_t,16, 1103, 6, 3.1, NULL, 1096, NULL)
#elif defined __ia64__
CheckTypeSize(png_sPLT_t,32, 1103, 3, 3.1, NULL, 1096, NULL)
#elif defined __i386__
CheckTypeSize(png_sPLT_t,16, 1103, 2, 3.1, NULL, 1096, NULL)
#else
Msg("Find size of png_sPLT_t (1103)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,1096,NULL);\n",architecture,1103,0);
#endif

#if defined __s390x__
CheckTypeSize(png_sPLT_tp,8, 1106, 12, 3.1, NULL, 1104, NULL)
#elif defined __x86_64__
CheckTypeSize(png_sPLT_tp,8, 1106, 11, 3.1, NULL, 1104, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_sPLT_tp,4, 1106, 10, 3.1, NULL, 1104, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_sPLT_tp,8, 1106, 9, 3.1, NULL, 1104, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_sPLT_tp,4, 1106, 6, 3.1, NULL, 1104, NULL)
#elif defined __ia64__
CheckTypeSize(png_sPLT_tp,8, 1106, 3, 3.1, NULL, 1104, NULL)
#elif defined __i386__
CheckTypeSize(png_sPLT_tp,4, 1106, 2, 3.1, NULL, 1104, NULL)
#else
Msg("Find size of png_sPLT_tp (1106)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,1104,NULL);\n",architecture,1106,0);
#endif

#if defined __s390x__
CheckTypeSize(png_sPLT_tpp,8, 1107, 12, 3.1, NULL, 1105, NULL)
#elif defined __x86_64__
CheckTypeSize(png_sPLT_tpp,8, 1107, 11, 3.1, NULL, 1105, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_sPLT_tpp,4, 1107, 10, 3.1, NULL, 1105, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_sPLT_tpp,8, 1107, 9, 3.1, NULL, 1105, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_sPLT_tpp,4, 1107, 6, 3.1, NULL, 1105, NULL)
#elif defined __ia64__
CheckTypeSize(png_sPLT_tpp,8, 1107, 3, 3.1, NULL, 1105, NULL)
#elif defined __i386__
CheckTypeSize(png_sPLT_tpp,4, 1107, 2, 3.1, NULL, 1105, NULL)
#else
Msg("Find size of png_sPLT_tpp (1107)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,1105,NULL);\n",architecture,1107,0);
#endif

#if defined __s390x__
CheckTypeSize(png_unknown_chunk,32, 6954, 12, 3.1, NULL, 6965, NULL)
#elif defined __x86_64__
CheckTypeSize(png_unknown_chunk,32, 6954, 11, 3.1, NULL, 6965, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_unknown_chunk,20, 6954, 10, 3.1, NULL, 6965, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_unknown_chunk,32, 6954, 9, 3.1, NULL, 6965, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_unknown_chunk,20, 6954, 6, 3.1, NULL, 6965, NULL)
#elif defined __ia64__
CheckTypeSize(png_unknown_chunk,32, 6954, 3, 3.1, NULL, 6965, NULL)
#elif defined __i386__
CheckTypeSize(png_unknown_chunk,20, 6954, 2, 3.1, NULL, 6965, NULL)
#else
Msg("Find size of png_unknown_chunk (6954)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,6965,NULL);\n",architecture,6954,0);
#endif

#if defined __s390x__
CheckTypeSize(struct png_unknown_chunk_t,32, 6965, 12, 3.1, NULL, 0, NULL)
CheckMemberSize(struct png_unknown_chunk_t,data,8,12,78471)
CheckOffset(struct png_unknown_chunk_t,data,8,12,78471)
CheckMemberSize(struct png_unknown_chunk_t,size,8,12,78472)
CheckOffset(struct png_unknown_chunk_t,size,16,12,78472)
CheckMemberSize(struct png_unknown_chunk_t,location,1,12,78473)
CheckOffset(struct png_unknown_chunk_t,location,24,12,78473)
#elif defined __x86_64__
CheckTypeSize(struct png_unknown_chunk_t,32, 6965, 11, 3.1, NULL, 0, NULL)
CheckMemberSize(struct png_unknown_chunk_t,data,8,11,78471)
CheckOffset(struct png_unknown_chunk_t,data,8,11,78471)
CheckMemberSize(struct png_unknown_chunk_t,size,8,11,78472)
CheckOffset(struct png_unknown_chunk_t,size,16,11,78472)
CheckMemberSize(struct png_unknown_chunk_t,location,1,11,78473)
CheckOffset(struct png_unknown_chunk_t,location,24,11,78473)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct png_unknown_chunk_t,20, 6965, 10, 3.1, NULL, 0, NULL)
CheckMemberSize(struct png_unknown_chunk_t,data,4,10,78471)
CheckOffset(struct png_unknown_chunk_t,data,8,10,78471)
CheckMemberSize(struct png_unknown_chunk_t,size,4,10,78472)
CheckOffset(struct png_unknown_chunk_t,size,12,10,78472)
CheckMemberSize(struct png_unknown_chunk_t,location,1,10,78473)
CheckOffset(struct png_unknown_chunk_t,location,16,10,78473)
#elif defined __powerpc64__
CheckTypeSize(struct png_unknown_chunk_t,32, 6965, 9, 3.1, NULL, 0, NULL)
CheckMemberSize(struct png_unknown_chunk_t,data,8,9,78471)
CheckOffset(struct png_unknown_chunk_t,data,8,9,78471)
CheckMemberSize(struct png_unknown_chunk_t,size,8,9,78472)
CheckOffset(struct png_unknown_chunk_t,size,16,9,78472)
CheckMemberSize(struct png_unknown_chunk_t,location,1,9,78473)
CheckOffset(struct png_unknown_chunk_t,location,24,9,78473)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct png_unknown_chunk_t,20, 6965, 6, 3.1, NULL, 0, NULL)
CheckMemberSize(struct png_unknown_chunk_t,data,4,6,78471)
CheckOffset(struct png_unknown_chunk_t,data,8,6,78471)
CheckMemberSize(struct png_unknown_chunk_t,size,4,6,78472)
CheckOffset(struct png_unknown_chunk_t,size,12,6,78472)
CheckMemberSize(struct png_unknown_chunk_t,location,1,6,78473)
CheckOffset(struct png_unknown_chunk_t,location,16,6,78473)
#elif defined __ia64__
CheckTypeSize(struct png_unknown_chunk_t,32, 6965, 3, 3.1, NULL, 0, NULL)
CheckMemberSize(struct png_unknown_chunk_t,data,8,3,78471)
CheckOffset(struct png_unknown_chunk_t,data,8,3,78471)
CheckMemberSize(struct png_unknown_chunk_t,size,8,3,78472)
CheckOffset(struct png_unknown_chunk_t,size,16,3,78472)
CheckMemberSize(struct png_unknown_chunk_t,location,1,3,78473)
CheckOffset(struct png_unknown_chunk_t,location,24,3,78473)
#elif defined __i386__
CheckTypeSize(struct png_unknown_chunk_t,20, 6965, 2, 3.1, NULL, 0, NULL)
CheckMemberSize(struct png_unknown_chunk_t,data,4,2,78471)
CheckOffset(struct png_unknown_chunk_t,data,8,2,78471)
CheckMemberSize(struct png_unknown_chunk_t,size,4,2,78472)
CheckOffset(struct png_unknown_chunk_t,size,12,2,78472)
CheckMemberSize(struct png_unknown_chunk_t,location,1,2,78473)
CheckOffset(struct png_unknown_chunk_t,location,16,2,78473)
#else
Msg("Find size of png_unknown_chunk_t (6965)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,0,NULL);\n",architecture,6965,0);
#endif

#if defined __i386__
CheckTypeSize(struct png_struct_def,712, 11172, 2, , NULL, 0, NULL)
Msg("Missing member data for png_struct_def on IA32\n");
CheckOffset(struct png_struct_def,jmpbuf,0,2,78498)
CheckOffset(struct png_struct_def,error_fn,0,2,78499)
CheckOffset(struct png_struct_def,warning_fn,0,2,78500)
CheckOffset(struct png_struct_def,error_ptr,0,2,78501)
CheckOffset(struct png_struct_def,write_data_fn,0,2,78502)
CheckOffset(struct png_struct_def,read_data_fn,0,2,78503)
CheckOffset(struct png_struct_def,io_ptr,0,2,78504)
CheckOffset(struct png_struct_def,read_user_transform_fn,0,2,78505)
CheckOffset(struct png_struct_def,write_user_transform_fn,0,2,78506)
CheckOffset(struct png_struct_def,user_transform_ptr,0,2,78507)
CheckOffset(struct png_struct_def,user_transform_depth,0,2,78508)
CheckOffset(struct png_struct_def,user_transform_channels,0,2,78509)
CheckOffset(struct png_struct_def,mode,0,2,78510)
CheckOffset(struct png_struct_def,flags,0,2,78511)
CheckOffset(struct png_struct_def,transformations,0,2,78512)
CheckOffset(struct png_struct_def,zstream,0,2,78513)
CheckOffset(struct png_struct_def,zbuf,0,2,78514)
CheckOffset(struct png_struct_def,zbuf_size,0,2,78515)
CheckOffset(struct png_struct_def,zlib_level,0,2,78516)
CheckOffset(struct png_struct_def,zlib_method,0,2,78517)
CheckOffset(struct png_struct_def,zlib_window_bits,0,2,78518)
CheckOffset(struct png_struct_def,zlib_mem_level,0,2,78519)
CheckOffset(struct png_struct_def,zlib_strategy,0,2,78520)
CheckOffset(struct png_struct_def,width,0,2,78521)
CheckOffset(struct png_struct_def,height,0,2,78522)
CheckOffset(struct png_struct_def,num_rows,0,2,78523)
CheckOffset(struct png_struct_def,usr_width,0,2,78524)
CheckOffset(struct png_struct_def,rowbytes,0,2,78525)
CheckOffset(struct png_struct_def,irowbytes,0,2,78526)
CheckOffset(struct png_struct_def,iwidth,0,2,78527)
CheckOffset(struct png_struct_def,row_number,0,2,78528)
CheckOffset(struct png_struct_def,prev_row,0,2,78529)
CheckOffset(struct png_struct_def,row_buf,0,2,78530)
CheckOffset(struct png_struct_def,sub_row,0,2,78531)
CheckOffset(struct png_struct_def,up_row,0,2,78532)
CheckOffset(struct png_struct_def,avg_row,0,2,78533)
CheckOffset(struct png_struct_def,paeth_row,0,2,78534)
CheckOffset(struct png_struct_def,row_info,0,2,78535)
CheckOffset(struct png_struct_def,idat_size,0,2,78536)
CheckOffset(struct png_struct_def,crc,0,2,78537)
CheckOffset(struct png_struct_def,palette,0,2,78538)
CheckOffset(struct png_struct_def,num_palette,0,2,78539)
CheckOffset(struct png_struct_def,num_trans,0,2,78540)
CheckOffset(struct png_struct_def,chunk_name,0,2,78541)
CheckOffset(struct png_struct_def,compression,0,2,78542)
CheckOffset(struct png_struct_def,filter,0,2,78543)
CheckOffset(struct png_struct_def,interlaced,0,2,78544)
CheckOffset(struct png_struct_def,pass,0,2,78545)
CheckOffset(struct png_struct_def,do_filter,0,2,78546)
CheckOffset(struct png_struct_def,color_type,0,2,78547)
CheckOffset(struct png_struct_def,bit_depth,0,2,78548)
CheckOffset(struct png_struct_def,usr_bit_depth,0,2,78549)
CheckOffset(struct png_struct_def,pixel_depth,0,2,78550)
CheckOffset(struct png_struct_def,channels,0,2,78551)
CheckOffset(struct png_struct_def,usr_channels,0,2,78552)
CheckOffset(struct png_struct_def,sig_bytes,0,2,78553)
CheckOffset(struct png_struct_def,filler,0,2,78554)
CheckOffset(struct png_struct_def,background_gamma_type,0,2,78555)
CheckOffset(struct png_struct_def,background_gamma,0,2,78556)
CheckOffset(struct png_struct_def,background,0,2,78557)
CheckOffset(struct png_struct_def,background_1,0,2,78558)
CheckOffset(struct png_struct_def,output_flush_fn,0,2,78559)
CheckOffset(struct png_struct_def,flush_dist,0,2,78560)
CheckOffset(struct png_struct_def,flush_rows,0,2,78561)
CheckOffset(struct png_struct_def,gamma_shift,0,2,78562)
CheckOffset(struct png_struct_def,gamma,0,2,78563)
CheckOffset(struct png_struct_def,screen_gamma,0,2,78564)
CheckOffset(struct png_struct_def,gamma_table,0,2,78565)
CheckOffset(struct png_struct_def,gamma_from_1,0,2,78566)
CheckOffset(struct png_struct_def,gamma_to_1,0,2,78567)
CheckOffset(struct png_struct_def,gamma_16_table,0,2,78568)
CheckOffset(struct png_struct_def,gamma_16_from_1,0,2,78569)
CheckOffset(struct png_struct_def,gamma_16_to_1,0,2,78570)
CheckOffset(struct png_struct_def,sig_bit,0,2,78571)
CheckOffset(struct png_struct_def,shift,0,2,78572)
CheckOffset(struct png_struct_def,trans,0,2,78573)
CheckOffset(struct png_struct_def,trans_values,0,2,78574)
CheckOffset(struct png_struct_def,read_row_fn,0,2,78575)
CheckOffset(struct png_struct_def,write_row_fn,0,2,78576)
CheckOffset(struct png_struct_def,info_fn,0,2,78577)
CheckOffset(struct png_struct_def,row_fn,0,2,78578)
CheckOffset(struct png_struct_def,end_fn,0,2,78579)
CheckOffset(struct png_struct_def,save_buffer_ptr,0,2,78580)
CheckOffset(struct png_struct_def,save_buffer,0,2,78581)
CheckOffset(struct png_struct_def,current_buffer_ptr,0,2,78582)
CheckOffset(struct png_struct_def,current_buffer,0,2,78583)
CheckOffset(struct png_struct_def,push_length,0,2,78584)
CheckOffset(struct png_struct_def,skip_length,0,2,78585)
CheckOffset(struct png_struct_def,save_buffer_size,0,2,78586)
CheckOffset(struct png_struct_def,save_buffer_max,0,2,78587)
CheckOffset(struct png_struct_def,buffer_size,0,2,78588)
CheckOffset(struct png_struct_def,current_buffer_size,0,2,78589)
CheckOffset(struct png_struct_def,process_mode,0,2,78590)
CheckOffset(struct png_struct_def,cur_palette,0,2,78591)
CheckOffset(struct png_struct_def,current_text_size,0,2,78592)
CheckOffset(struct png_struct_def,current_text_left,0,2,78593)
CheckOffset(struct png_struct_def,current_text,0,2,78594)
CheckOffset(struct png_struct_def,current_text_ptr,0,2,78595)
CheckOffset(struct png_struct_def,palette_lookup,0,2,78596)
CheckOffset(struct png_struct_def,dither_index,0,2,78597)
CheckOffset(struct png_struct_def,hist,0,2,78598)
CheckOffset(struct png_struct_def,heuristic_method,0,2,78599)
CheckOffset(struct png_struct_def,num_prev_filters,0,2,78600)
CheckOffset(struct png_struct_def,prev_filters,0,2,78601)
CheckOffset(struct png_struct_def,filter_weights,0,2,78602)
CheckOffset(struct png_struct_def,inv_filter_weights,0,2,78603)
CheckOffset(struct png_struct_def,filter_costs,0,2,78604)
CheckOffset(struct png_struct_def,inv_filter_costs,0,2,78605)
CheckOffset(struct png_struct_def,time_buffer,0,2,78606)
CheckOffset(struct png_struct_def,free_me,0,2,78607)
CheckOffset(struct png_struct_def,user_chunk_ptr,0,2,78608)
CheckOffset(struct png_struct_def,read_user_chunk_fn,0,2,78609)
CheckOffset(struct png_struct_def,num_chunk_list,0,2,78610)
CheckOffset(struct png_struct_def,chunk_list,0,2,78611)
CheckOffset(struct png_struct_def,rgb_to_gray_status,0,2,78612)
CheckOffset(struct png_struct_def,rgb_to_gray_red_coeff,0,2,78613)
CheckOffset(struct png_struct_def,rgb_to_gray_green_coeff,0,2,78614)
CheckOffset(struct png_struct_def,rgb_to_gray_blue_coeff,0,2,78615)
CheckOffset(struct png_struct_def,mng_features_permitted,0,2,78616)
CheckOffset(struct png_struct_def,int_gamma,0,2,78617)
CheckOffset(struct png_struct_def,filter_type,0,2,78618)
CheckOffset(struct png_struct_def,mmx_bitdepth_threshold,0,2,78619)
CheckOffset(struct png_struct_def,mmx_rowbytes_threshold,0,2,78620)
CheckOffset(struct png_struct_def,asm_flags,0,2,78621)
CheckOffset(struct png_struct_def,mem_ptr,0,2,78622)
CheckOffset(struct png_struct_def,malloc_fn,0,2,78623)
CheckOffset(struct png_struct_def,free_fn,0,2,78624)
CheckOffset(struct png_struct_def,big_row_buf,0,2,78625)
CheckOffset(struct png_struct_def,dither_sort,0,2,78626)
CheckOffset(struct png_struct_def,index_to_palette,0,2,78627)
CheckOffset(struct png_struct_def,palette_to_index,0,2,78628)
CheckOffset(struct png_struct_def,compression_type,0,2,78629)
CheckOffset(struct png_struct_def,user_width_max,0,2,78630)
CheckOffset(struct png_struct_def,user_height_max,0,2,78631)
CheckOffset(struct png_struct_def,unknown_chunk,0,2,78632)
#elif 1
CheckTypeSize(struct png_struct_def,0, 11172, 1, , NULL, 0, NULL)
Msg("Missing member data for png_struct_def on All\n");
CheckOffset(struct png_struct_def,jmpbuf,0,1,78498)
CheckOffset(struct png_struct_def,error_fn,0,1,78499)
CheckOffset(struct png_struct_def,warning_fn,0,1,78500)
CheckOffset(struct png_struct_def,error_ptr,0,1,78501)
CheckOffset(struct png_struct_def,write_data_fn,0,1,78502)
CheckOffset(struct png_struct_def,read_data_fn,0,1,78503)
CheckOffset(struct png_struct_def,io_ptr,0,1,78504)
CheckOffset(struct png_struct_def,read_user_transform_fn,0,1,78505)
CheckOffset(struct png_struct_def,write_user_transform_fn,0,1,78506)
CheckOffset(struct png_struct_def,user_transform_ptr,0,1,78507)
CheckOffset(struct png_struct_def,user_transform_depth,0,1,78508)
CheckOffset(struct png_struct_def,user_transform_channels,0,1,78509)
CheckOffset(struct png_struct_def,mode,0,1,78510)
CheckOffset(struct png_struct_def,flags,0,1,78511)
CheckOffset(struct png_struct_def,transformations,0,1,78512)
CheckOffset(struct png_struct_def,zstream,0,1,78513)
CheckOffset(struct png_struct_def,zbuf,0,1,78514)
CheckOffset(struct png_struct_def,zbuf_size,0,1,78515)
CheckOffset(struct png_struct_def,zlib_level,0,1,78516)
CheckOffset(struct png_struct_def,zlib_method,0,1,78517)
CheckOffset(struct png_struct_def,zlib_window_bits,0,1,78518)
CheckOffset(struct png_struct_def,zlib_mem_level,0,1,78519)
CheckOffset(struct png_struct_def,zlib_strategy,0,1,78520)
CheckOffset(struct png_struct_def,width,0,1,78521)
CheckOffset(struct png_struct_def,height,0,1,78522)
CheckOffset(struct png_struct_def,num_rows,0,1,78523)
CheckOffset(struct png_struct_def,usr_width,0,1,78524)
CheckOffset(struct png_struct_def,rowbytes,0,1,78525)
CheckOffset(struct png_struct_def,irowbytes,0,1,78526)
CheckOffset(struct png_struct_def,iwidth,0,1,78527)
CheckOffset(struct png_struct_def,row_number,0,1,78528)
CheckOffset(struct png_struct_def,prev_row,0,1,78529)
CheckOffset(struct png_struct_def,row_buf,0,1,78530)
CheckOffset(struct png_struct_def,sub_row,0,1,78531)
CheckOffset(struct png_struct_def,up_row,0,1,78532)
CheckOffset(struct png_struct_def,avg_row,0,1,78533)
CheckOffset(struct png_struct_def,paeth_row,0,1,78534)
CheckOffset(struct png_struct_def,row_info,0,1,78535)
CheckOffset(struct png_struct_def,idat_size,0,1,78536)
CheckOffset(struct png_struct_def,crc,0,1,78537)
CheckOffset(struct png_struct_def,palette,0,1,78538)
CheckOffset(struct png_struct_def,num_palette,0,1,78539)
CheckOffset(struct png_struct_def,num_trans,0,1,78540)
CheckOffset(struct png_struct_def,chunk_name,0,1,78541)
CheckOffset(struct png_struct_def,compression,0,1,78542)
CheckOffset(struct png_struct_def,filter,0,1,78543)
CheckOffset(struct png_struct_def,interlaced,0,1,78544)
CheckOffset(struct png_struct_def,pass,0,1,78545)
CheckOffset(struct png_struct_def,do_filter,0,1,78546)
CheckOffset(struct png_struct_def,color_type,0,1,78547)
CheckOffset(struct png_struct_def,bit_depth,0,1,78548)
CheckOffset(struct png_struct_def,usr_bit_depth,0,1,78549)
CheckOffset(struct png_struct_def,pixel_depth,0,1,78550)
CheckOffset(struct png_struct_def,channels,0,1,78551)
CheckOffset(struct png_struct_def,usr_channels,0,1,78552)
CheckOffset(struct png_struct_def,sig_bytes,0,1,78553)
CheckOffset(struct png_struct_def,filler,0,1,78554)
CheckOffset(struct png_struct_def,background_gamma_type,0,1,78555)
CheckOffset(struct png_struct_def,background_gamma,0,1,78556)
CheckOffset(struct png_struct_def,background,0,1,78557)
CheckOffset(struct png_struct_def,background_1,0,1,78558)
CheckOffset(struct png_struct_def,output_flush_fn,0,1,78559)
CheckOffset(struct png_struct_def,flush_dist,0,1,78560)
CheckOffset(struct png_struct_def,flush_rows,0,1,78561)
CheckOffset(struct png_struct_def,gamma_shift,0,1,78562)
CheckOffset(struct png_struct_def,gamma,0,1,78563)
CheckOffset(struct png_struct_def,screen_gamma,0,1,78564)
CheckOffset(struct png_struct_def,gamma_table,0,1,78565)
CheckOffset(struct png_struct_def,gamma_from_1,0,1,78566)
CheckOffset(struct png_struct_def,gamma_to_1,0,1,78567)
CheckOffset(struct png_struct_def,gamma_16_table,0,1,78568)
CheckOffset(struct png_struct_def,gamma_16_from_1,0,1,78569)
CheckOffset(struct png_struct_def,gamma_16_to_1,0,1,78570)
CheckOffset(struct png_struct_def,sig_bit,0,1,78571)
CheckOffset(struct png_struct_def,shift,0,1,78572)
CheckOffset(struct png_struct_def,trans,0,1,78573)
CheckOffset(struct png_struct_def,trans_values,0,1,78574)
CheckOffset(struct png_struct_def,read_row_fn,0,1,78575)
CheckOffset(struct png_struct_def,write_row_fn,0,1,78576)
CheckOffset(struct png_struct_def,info_fn,0,1,78577)
CheckOffset(struct png_struct_def,row_fn,0,1,78578)
CheckOffset(struct png_struct_def,end_fn,0,1,78579)
CheckOffset(struct png_struct_def,save_buffer_ptr,0,1,78580)
CheckOffset(struct png_struct_def,save_buffer,0,1,78581)
CheckOffset(struct png_struct_def,current_buffer_ptr,0,1,78582)
CheckOffset(struct png_struct_def,current_buffer,0,1,78583)
CheckOffset(struct png_struct_def,push_length,0,1,78584)
CheckOffset(struct png_struct_def,skip_length,0,1,78585)
CheckOffset(struct png_struct_def,save_buffer_size,0,1,78586)
CheckOffset(struct png_struct_def,save_buffer_max,0,1,78587)
CheckOffset(struct png_struct_def,buffer_size,0,1,78588)
CheckOffset(struct png_struct_def,current_buffer_size,0,1,78589)
CheckOffset(struct png_struct_def,process_mode,0,1,78590)
CheckOffset(struct png_struct_def,cur_palette,0,1,78591)
CheckOffset(struct png_struct_def,current_text_size,0,1,78592)
CheckOffset(struct png_struct_def,current_text_left,0,1,78593)
CheckOffset(struct png_struct_def,current_text,0,1,78594)
CheckOffset(struct png_struct_def,current_text_ptr,0,1,78595)
CheckOffset(struct png_struct_def,palette_lookup,0,1,78596)
CheckOffset(struct png_struct_def,dither_index,0,1,78597)
CheckOffset(struct png_struct_def,hist,0,1,78598)
CheckOffset(struct png_struct_def,heuristic_method,0,1,78599)
CheckOffset(struct png_struct_def,num_prev_filters,0,1,78600)
CheckOffset(struct png_struct_def,prev_filters,0,1,78601)
CheckOffset(struct png_struct_def,filter_weights,0,1,78602)
CheckOffset(struct png_struct_def,inv_filter_weights,0,1,78603)
CheckOffset(struct png_struct_def,filter_costs,0,1,78604)
CheckOffset(struct png_struct_def,inv_filter_costs,0,1,78605)
CheckOffset(struct png_struct_def,time_buffer,0,1,78606)
CheckOffset(struct png_struct_def,free_me,0,1,78607)
CheckOffset(struct png_struct_def,user_chunk_ptr,0,1,78608)
CheckOffset(struct png_struct_def,read_user_chunk_fn,0,1,78609)
CheckOffset(struct png_struct_def,num_chunk_list,0,1,78610)
CheckOffset(struct png_struct_def,chunk_list,0,1,78611)
CheckOffset(struct png_struct_def,rgb_to_gray_status,0,1,78612)
CheckOffset(struct png_struct_def,rgb_to_gray_red_coeff,0,1,78613)
CheckOffset(struct png_struct_def,rgb_to_gray_green_coeff,0,1,78614)
CheckOffset(struct png_struct_def,rgb_to_gray_blue_coeff,0,1,78615)
CheckOffset(struct png_struct_def,mng_features_permitted,0,1,78616)
CheckOffset(struct png_struct_def,int_gamma,0,1,78617)
CheckOffset(struct png_struct_def,filter_type,0,1,78618)
CheckOffset(struct png_struct_def,mmx_bitdepth_threshold,0,1,78619)
CheckOffset(struct png_struct_def,mmx_rowbytes_threshold,0,1,78620)
CheckOffset(struct png_struct_def,asm_flags,0,1,78621)
CheckOffset(struct png_struct_def,mem_ptr,0,1,78622)
CheckOffset(struct png_struct_def,malloc_fn,0,1,78623)
CheckOffset(struct png_struct_def,free_fn,0,1,78624)
CheckOffset(struct png_struct_def,big_row_buf,0,1,78625)
CheckOffset(struct png_struct_def,dither_sort,0,1,78626)
CheckOffset(struct png_struct_def,index_to_palette,0,1,78627)
CheckOffset(struct png_struct_def,palette_to_index,0,1,78628)
CheckOffset(struct png_struct_def,compression_type,0,1,78629)
CheckOffset(struct png_struct_def,user_width_max,0,1,78630)
CheckOffset(struct png_struct_def,user_height_max,0,1,78631)
CheckOffset(struct png_struct_def,unknown_chunk,0,1,78632)
#endif

#if defined __s390x__
CheckTypeSize(png_struct,1288, 11173, 12, 3.1, NULL, 11172, NULL)
#elif defined __x86_64__
CheckTypeSize(png_struct,1208, 11173, 11, 3.1, NULL, 11172, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_struct,744, 11173, 10, 3.1, NULL, 11172, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_struct,1664, 11173, 9, 3.1, NULL, 11172, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_struct,1152, 11173, 6, 3.1, NULL, 11172, NULL)
#elif defined __ia64__
CheckTypeSize(png_struct,1712, 11173, 3, 3.1, NULL, 11172, NULL)
#elif defined __i386__
CheckTypeSize(png_struct,712, 11173, 2, 3.1, NULL, 11172, NULL)
#else
Msg("Find size of png_struct (11173)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11172,NULL);\n",architecture,11173,0);
#endif

#if defined __s390x__
CheckTypeSize(png_structp,8, 11175, 12, 3.1, NULL, 11174, NULL)
#elif defined __x86_64__
CheckTypeSize(png_structp,8, 11175, 11, 3.1, NULL, 11174, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_structp,4, 11175, 10, 3.1, NULL, 11174, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_structp,8, 11175, 9, 3.1, NULL, 11174, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_structp,4, 11175, 6, 3.1, NULL, 11174, NULL)
#elif defined __ia64__
CheckTypeSize(png_structp,8, 11175, 3, 3.1, NULL, 11174, NULL)
#elif defined __i386__
CheckTypeSize(png_structp,4, 11175, 2, 3.1, NULL, 11174, NULL)
#else
Msg("Find size of png_structp (11175)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11174,NULL);\n",architecture,11175,0);
#endif

#if defined __i386__
CheckTypeSize(struct png_info_struct,288, 11176, 2, , NULL, 0, NULL)
Msg("Missing member data for png_info_struct on IA32\n");
CheckOffset(struct png_info_struct,width,0,2,78633)
CheckOffset(struct png_info_struct,height,0,2,78634)
CheckOffset(struct png_info_struct,valid,0,2,78635)
CheckOffset(struct png_info_struct,rowbytes,0,2,78636)
CheckOffset(struct png_info_struct,palette,0,2,78637)
CheckOffset(struct png_info_struct,num_palette,0,2,78638)
CheckOffset(struct png_info_struct,num_trans,0,2,78639)
CheckOffset(struct png_info_struct,bit_depth,0,2,78640)
CheckOffset(struct png_info_struct,color_type,0,2,78641)
CheckOffset(struct png_info_struct,compression_type,0,2,78642)
CheckOffset(struct png_info_struct,filter_type,0,2,78643)
CheckOffset(struct png_info_struct,interlace_type,0,2,78644)
CheckOffset(struct png_info_struct,channels,0,2,78645)
CheckOffset(struct png_info_struct,pixel_depth,0,2,78646)
CheckOffset(struct png_info_struct,spare_byte,0,2,78647)
CheckOffset(struct png_info_struct,signature,0,2,78648)
CheckOffset(struct png_info_struct,gamma,0,2,78649)
CheckOffset(struct png_info_struct,srgb_intent,0,2,78650)
CheckOffset(struct png_info_struct,num_text,0,2,78651)
CheckOffset(struct png_info_struct,max_text,0,2,78652)
CheckOffset(struct png_info_struct,text,0,2,78653)
CheckOffset(struct png_info_struct,mod_time,0,2,78654)
CheckOffset(struct png_info_struct,sig_bit,0,2,78655)
CheckOffset(struct png_info_struct,trans,0,2,78656)
CheckOffset(struct png_info_struct,trans_values,0,2,78657)
CheckOffset(struct png_info_struct,background,0,2,78658)
CheckOffset(struct png_info_struct,x_offset,0,2,78659)
CheckOffset(struct png_info_struct,y_offset,0,2,78660)
CheckOffset(struct png_info_struct,offset_unit_type,0,2,78661)
CheckOffset(struct png_info_struct,x_pixels_per_unit,0,2,78662)
CheckOffset(struct png_info_struct,y_pixels_per_unit,0,2,78663)
CheckOffset(struct png_info_struct,phys_unit_type,0,2,78664)
CheckOffset(struct png_info_struct,hist,0,2,78665)
CheckOffset(struct png_info_struct,x_white,0,2,78666)
CheckOffset(struct png_info_struct,y_white,0,2,78667)
CheckOffset(struct png_info_struct,x_red,0,2,78668)
CheckOffset(struct png_info_struct,y_red,0,2,78669)
CheckOffset(struct png_info_struct,x_green,0,2,78670)
CheckOffset(struct png_info_struct,y_green,0,2,78671)
CheckOffset(struct png_info_struct,x_blue,0,2,78672)
CheckOffset(struct png_info_struct,y_blue,0,2,78673)
CheckOffset(struct png_info_struct,pcal_purpose,0,2,78674)
CheckOffset(struct png_info_struct,pcal_X0,0,2,78675)
CheckOffset(struct png_info_struct,pcal_X1,0,2,78676)
CheckOffset(struct png_info_struct,pcal_units,0,2,78677)
CheckOffset(struct png_info_struct,pcal_params,0,2,78678)
CheckOffset(struct png_info_struct,pcal_type,0,2,78679)
CheckOffset(struct png_info_struct,pcal_nparams,0,2,78680)
CheckOffset(struct png_info_struct,free_me,0,2,78681)
CheckOffset(struct png_info_struct,unknown_chunks,0,2,78682)
CheckOffset(struct png_info_struct,unknown_chunks_num,0,2,78683)
CheckOffset(struct png_info_struct,iccp_name,0,2,78684)
CheckOffset(struct png_info_struct,iccp_profile,0,2,78685)
CheckOffset(struct png_info_struct,iccp_proflen,0,2,78686)
CheckOffset(struct png_info_struct,iccp_compression,0,2,78687)
CheckOffset(struct png_info_struct,splt_palettes,0,2,78688)
CheckOffset(struct png_info_struct,splt_palettes_num,0,2,78689)
CheckOffset(struct png_info_struct,scal_unit,0,2,78690)
CheckOffset(struct png_info_struct,scal_pixel_width,0,2,78691)
CheckOffset(struct png_info_struct,scal_pixel_height,0,2,78692)
CheckOffset(struct png_info_struct,scal_s_width,0,2,78693)
CheckOffset(struct png_info_struct,scal_s_height,0,2,78694)
CheckOffset(struct png_info_struct,row_pointers,0,2,78695)
CheckOffset(struct png_info_struct,int_gamma,0,2,78696)
CheckOffset(struct png_info_struct,int_x_white,0,2,78697)
CheckOffset(struct png_info_struct,int_y_white,0,2,78698)
CheckOffset(struct png_info_struct,int_x_red,0,2,78699)
CheckOffset(struct png_info_struct,int_y_red,0,2,78700)
CheckOffset(struct png_info_struct,int_x_green,0,2,78701)
CheckOffset(struct png_info_struct,int_y_green,0,2,78702)
CheckOffset(struct png_info_struct,int_x_blue,0,2,78703)
CheckOffset(struct png_info_struct,int_y_blue,0,2,78704)
#elif 1
CheckTypeSize(struct png_info_struct,0, 11176, 1, , NULL, 0, NULL)
Msg("Missing member data for png_info_struct on All\n");
CheckOffset(struct png_info_struct,width,0,1,78633)
CheckOffset(struct png_info_struct,height,0,1,78634)
CheckOffset(struct png_info_struct,valid,0,1,78635)
CheckOffset(struct png_info_struct,rowbytes,0,1,78636)
CheckOffset(struct png_info_struct,palette,0,1,78637)
CheckOffset(struct png_info_struct,num_palette,0,1,78638)
CheckOffset(struct png_info_struct,num_trans,0,1,78639)
CheckOffset(struct png_info_struct,bit_depth,0,1,78640)
CheckOffset(struct png_info_struct,color_type,0,1,78641)
CheckOffset(struct png_info_struct,compression_type,0,1,78642)
CheckOffset(struct png_info_struct,filter_type,0,1,78643)
CheckOffset(struct png_info_struct,interlace_type,0,1,78644)
CheckOffset(struct png_info_struct,channels,0,1,78645)
CheckOffset(struct png_info_struct,pixel_depth,0,1,78646)
CheckOffset(struct png_info_struct,spare_byte,0,1,78647)
CheckOffset(struct png_info_struct,signature,0,1,78648)
CheckOffset(struct png_info_struct,gamma,0,1,78649)
CheckOffset(struct png_info_struct,srgb_intent,0,1,78650)
CheckOffset(struct png_info_struct,num_text,0,1,78651)
CheckOffset(struct png_info_struct,max_text,0,1,78652)
CheckOffset(struct png_info_struct,text,0,1,78653)
CheckOffset(struct png_info_struct,mod_time,0,1,78654)
CheckOffset(struct png_info_struct,sig_bit,0,1,78655)
CheckOffset(struct png_info_struct,trans,0,1,78656)
CheckOffset(struct png_info_struct,trans_values,0,1,78657)
CheckOffset(struct png_info_struct,background,0,1,78658)
CheckOffset(struct png_info_struct,x_offset,0,1,78659)
CheckOffset(struct png_info_struct,y_offset,0,1,78660)
CheckOffset(struct png_info_struct,offset_unit_type,0,1,78661)
CheckOffset(struct png_info_struct,x_pixels_per_unit,0,1,78662)
CheckOffset(struct png_info_struct,y_pixels_per_unit,0,1,78663)
CheckOffset(struct png_info_struct,phys_unit_type,0,1,78664)
CheckOffset(struct png_info_struct,hist,0,1,78665)
CheckOffset(struct png_info_struct,x_white,0,1,78666)
CheckOffset(struct png_info_struct,y_white,0,1,78667)
CheckOffset(struct png_info_struct,x_red,0,1,78668)
CheckOffset(struct png_info_struct,y_red,0,1,78669)
CheckOffset(struct png_info_struct,x_green,0,1,78670)
CheckOffset(struct png_info_struct,y_green,0,1,78671)
CheckOffset(struct png_info_struct,x_blue,0,1,78672)
CheckOffset(struct png_info_struct,y_blue,0,1,78673)
CheckOffset(struct png_info_struct,pcal_purpose,0,1,78674)
CheckOffset(struct png_info_struct,pcal_X0,0,1,78675)
CheckOffset(struct png_info_struct,pcal_X1,0,1,78676)
CheckOffset(struct png_info_struct,pcal_units,0,1,78677)
CheckOffset(struct png_info_struct,pcal_params,0,1,78678)
CheckOffset(struct png_info_struct,pcal_type,0,1,78679)
CheckOffset(struct png_info_struct,pcal_nparams,0,1,78680)
CheckOffset(struct png_info_struct,free_me,0,1,78681)
CheckOffset(struct png_info_struct,unknown_chunks,0,1,78682)
CheckOffset(struct png_info_struct,unknown_chunks_num,0,1,78683)
CheckOffset(struct png_info_struct,iccp_name,0,1,78684)
CheckOffset(struct png_info_struct,iccp_profile,0,1,78685)
CheckOffset(struct png_info_struct,iccp_proflen,0,1,78686)
CheckOffset(struct png_info_struct,iccp_compression,0,1,78687)
CheckOffset(struct png_info_struct,splt_palettes,0,1,78688)
CheckOffset(struct png_info_struct,splt_palettes_num,0,1,78689)
CheckOffset(struct png_info_struct,scal_unit,0,1,78690)
CheckOffset(struct png_info_struct,scal_pixel_width,0,1,78691)
CheckOffset(struct png_info_struct,scal_pixel_height,0,1,78692)
CheckOffset(struct png_info_struct,scal_s_width,0,1,78693)
CheckOffset(struct png_info_struct,scal_s_height,0,1,78694)
CheckOffset(struct png_info_struct,row_pointers,0,1,78695)
CheckOffset(struct png_info_struct,int_gamma,0,1,78696)
CheckOffset(struct png_info_struct,int_x_white,0,1,78697)
CheckOffset(struct png_info_struct,int_y_white,0,1,78698)
CheckOffset(struct png_info_struct,int_x_red,0,1,78699)
CheckOffset(struct png_info_struct,int_y_red,0,1,78700)
CheckOffset(struct png_info_struct,int_x_green,0,1,78701)
CheckOffset(struct png_info_struct,int_y_green,0,1,78702)
CheckOffset(struct png_info_struct,int_x_blue,0,1,78703)
CheckOffset(struct png_info_struct,int_y_blue,0,1,78704)
#endif

#if defined __s390x__
CheckTypeSize(png_info,464, 11177, 12, 3.1, NULL, 11176, NULL)
#elif defined __x86_64__
CheckTypeSize(png_info,464, 11177, 11, 3.1, NULL, 11176, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_info,288, 11177, 10, 3.1, NULL, 11176, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_info,464, 11177, 9, 3.1, NULL, 11176, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_info,288, 11177, 6, 3.1, NULL, 11176, NULL)
#elif defined __ia64__
CheckTypeSize(png_info,464, 11177, 3, 3.1, NULL, 11176, NULL)
#elif defined __i386__
CheckTypeSize(png_info,288, 11177, 2, 3.1, NULL, 11176, NULL)
#else
Msg("Find size of png_info (11177)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11176,NULL);\n",architecture,11177,0);
#endif

#if defined __s390x__
CheckTypeSize(png_infop,8, 11179, 12, 3.1, NULL, 11178, NULL)
#elif defined __x86_64__
CheckTypeSize(png_infop,8, 11179, 11, 3.1, NULL, 11178, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_infop,4, 11179, 10, 3.1, NULL, 11178, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_infop,8, 11179, 9, 3.1, NULL, 11178, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_infop,4, 11179, 6, 3.1, NULL, 11178, NULL)
#elif defined __ia64__
CheckTypeSize(png_infop,8, 11179, 3, 3.1, NULL, 11178, NULL)
#elif defined __i386__
CheckTypeSize(png_infop,4, 11179, 2, 3.1, NULL, 11178, NULL)
#else
Msg("Find size of png_infop (11179)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11178,NULL);\n",architecture,11179,0);
#endif

#if defined __s390x__
CheckTypeSize(png_voidp,8, 11180, 12, 3.1, NULL, 40, NULL)
#elif defined __x86_64__
CheckTypeSize(png_voidp,8, 11180, 11, 3.1, NULL, 40, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_voidp,4, 11180, 10, 3.1, NULL, 40, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_voidp,8, 11180, 9, 3.1, NULL, 40, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_voidp,4, 11180, 6, 3.1, NULL, 40, NULL)
#elif defined __ia64__
CheckTypeSize(png_voidp,8, 11180, 3, 3.1, NULL, 40, NULL)
#elif defined __i386__
CheckTypeSize(png_voidp,4, 11180, 2, 3.1, NULL, 40, NULL)
#else
Msg("Find size of png_voidp (11180)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,40,NULL);\n",architecture,11180,0);
#endif

#if defined __s390x__
CheckTypeSize(png_progressive_info_ptr,8, 11182, 12, 3.1, NULL, 11181, NULL)
#elif defined __x86_64__
CheckTypeSize(png_progressive_info_ptr,8, 11182, 11, 3.1, NULL, 11181, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_progressive_info_ptr,4, 11182, 10, 3.1, NULL, 11181, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_progressive_info_ptr,8, 11182, 9, 3.1, NULL, 11181, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_progressive_info_ptr,4, 11182, 6, 3.1, NULL, 11181, NULL)
#elif defined __ia64__
CheckTypeSize(png_progressive_info_ptr,8, 11182, 3, 3.1, NULL, 11181, NULL)
#elif defined __i386__
CheckTypeSize(png_progressive_info_ptr,4, 11182, 2, 3.1, NULL, 11181, NULL)
#else
Msg("Find size of png_progressive_info_ptr (11182)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11181,NULL);\n",architecture,11182,0);
#endif

#if defined __s390x__
CheckTypeSize(png_byte,1, 11183, 12, 3.1, NULL, 3, NULL)
#elif defined __x86_64__
CheckTypeSize(png_byte,1, 11183, 11, 3.1, NULL, 3, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_byte,1, 11183, 10, 3.1, NULL, 3, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_byte,1, 11183, 9, 3.1, NULL, 3, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_byte,1, 11183, 6, 3.1, NULL, 3, NULL)
#elif defined __ia64__
CheckTypeSize(png_byte,1, 11183, 3, 3.1, NULL, 3, NULL)
#elif defined __i386__
CheckTypeSize(png_byte,1, 11183, 2, 3.1, NULL, 3, NULL)
#else
Msg("Find size of png_byte (11183)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,3,NULL);\n",architecture,11183,0);
#endif

#if defined __s390x__
CheckTypeSize(png_bytep,8, 11185, 12, 3.1, NULL, 11184, NULL)
#elif defined __x86_64__
CheckTypeSize(png_bytep,8, 11185, 11, 3.1, NULL, 11184, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_bytep,4, 11185, 10, 3.1, NULL, 11184, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_bytep,8, 11185, 9, 3.1, NULL, 11184, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_bytep,4, 11185, 6, 3.1, NULL, 11184, NULL)
#elif defined __ia64__
CheckTypeSize(png_bytep,8, 11185, 3, 3.1, NULL, 11184, NULL)
#elif defined __i386__
CheckTypeSize(png_bytep,4, 11185, 2, 3.1, NULL, 11184, NULL)
#else
Msg("Find size of png_bytep (11185)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11184,NULL);\n",architecture,11185,0);
#endif

#if defined __s390x__
CheckTypeSize(png_uint_32,8, 11187, 12, 3.1, NULL, 9, NULL)
#elif defined __x86_64__
CheckTypeSize(png_uint_32,8, 11187, 11, 3.1, NULL, 9, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_uint_32,4, 11187, 10, 3.1, NULL, 9, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_uint_32,8, 11187, 9, 3.1, NULL, 9, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_uint_32,4, 11187, 6, 3.1, NULL, 9, NULL)
#elif defined __ia64__
CheckTypeSize(png_uint_32,8, 11187, 3, 3.1, NULL, 9, NULL)
#elif defined __i386__
CheckTypeSize(png_uint_32,4, 11187, 2, 3.1, NULL, 9, NULL)
#else
Msg("Find size of png_uint_32 (11187)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,9,NULL);\n",architecture,11187,0);
#endif

#if defined __s390x__
CheckTypeSize(png_progressive_row_ptr,8, 11189, 12, 3.1, NULL, 11188, NULL)
#elif defined __x86_64__
CheckTypeSize(png_progressive_row_ptr,8, 11189, 11, 3.1, NULL, 11188, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_progressive_row_ptr,4, 11189, 10, 3.1, NULL, 11188, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_progressive_row_ptr,8, 11189, 9, 3.1, NULL, 11188, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_progressive_row_ptr,4, 11189, 6, 3.1, NULL, 11188, NULL)
#elif defined __ia64__
CheckTypeSize(png_progressive_row_ptr,8, 11189, 3, 3.1, NULL, 11188, NULL)
#elif defined __i386__
CheckTypeSize(png_progressive_row_ptr,4, 11189, 2, 3.1, NULL, 11188, NULL)
#else
Msg("Find size of png_progressive_row_ptr (11189)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11188,NULL);\n",architecture,11189,0);
#endif

#if defined __s390x__
CheckTypeSize(png_progressive_end_ptr,8, 11190, 12, 3.1, NULL, 11181, NULL)
#elif defined __x86_64__
CheckTypeSize(png_progressive_end_ptr,8, 11190, 11, 3.1, NULL, 11181, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_progressive_end_ptr,4, 11190, 10, 3.1, NULL, 11181, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_progressive_end_ptr,8, 11190, 9, 3.1, NULL, 11181, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_progressive_end_ptr,4, 11190, 6, 3.1, NULL, 11181, NULL)
#elif defined __ia64__
CheckTypeSize(png_progressive_end_ptr,8, 11190, 3, 3.1, NULL, 11181, NULL)
#elif defined __i386__
CheckTypeSize(png_progressive_end_ptr,4, 11190, 2, 3.1, NULL, 11181, NULL)
#else
Msg("Find size of png_progressive_end_ptr (11190)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11181,NULL);\n",architecture,11190,0);
#endif

#if defined __s390x__
CheckTypeSize(struct png_color_8_struct,5, 11191, 12, 3.1, NULL, 0, NULL)
CheckMemberSize(struct png_color_8_struct,green,1,12,40968)
CheckOffset(struct png_color_8_struct,green,1,12,40968)
CheckMemberSize(struct png_color_8_struct,blue,1,12,40969)
CheckOffset(struct png_color_8_struct,blue,2,12,40969)
CheckMemberSize(struct png_color_8_struct,gray,1,12,40970)
CheckOffset(struct png_color_8_struct,gray,3,12,40970)
CheckMemberSize(struct png_color_8_struct,alpha,1,12,40971)
CheckOffset(struct png_color_8_struct,alpha,4,12,40971)
#elif defined __x86_64__
CheckTypeSize(struct png_color_8_struct,5, 11191, 11, 3.1, NULL, 0, NULL)
CheckMemberSize(struct png_color_8_struct,green,1,11,40968)
CheckOffset(struct png_color_8_struct,green,1,11,40968)
CheckMemberSize(struct png_color_8_struct,blue,1,11,40969)
CheckOffset(struct png_color_8_struct,blue,2,11,40969)
CheckMemberSize(struct png_color_8_struct,gray,1,11,40970)
CheckOffset(struct png_color_8_struct,gray,3,11,40970)
CheckMemberSize(struct png_color_8_struct,alpha,1,11,40971)
CheckOffset(struct png_color_8_struct,alpha,4,11,40971)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct png_color_8_struct,5, 11191, 10, 3.1, NULL, 0, NULL)
CheckMemberSize(struct png_color_8_struct,green,1,10,40968)
CheckOffset(struct png_color_8_struct,green,1,10,40968)
CheckMemberSize(struct png_color_8_struct,blue,1,10,40969)
CheckOffset(struct png_color_8_struct,blue,2,10,40969)
CheckMemberSize(struct png_color_8_struct,gray,1,10,40970)
CheckOffset(struct png_color_8_struct,gray,3,10,40970)
CheckMemberSize(struct png_color_8_struct,alpha,1,10,40971)
CheckOffset(struct png_color_8_struct,alpha,4,10,40971)
#elif defined __powerpc64__
CheckTypeSize(struct png_color_8_struct,5, 11191, 9, 3.1, NULL, 0, NULL)
CheckMemberSize(struct png_color_8_struct,green,1,9,40968)
CheckOffset(struct png_color_8_struct,green,1,9,40968)
CheckMemberSize(struct png_color_8_struct,blue,1,9,40969)
CheckOffset(struct png_color_8_struct,blue,2,9,40969)
CheckMemberSize(struct png_color_8_struct,gray,1,9,40970)
CheckOffset(struct png_color_8_struct,gray,3,9,40970)
CheckMemberSize(struct png_color_8_struct,alpha,1,9,40971)
CheckOffset(struct png_color_8_struct,alpha,4,9,40971)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct png_color_8_struct,5, 11191, 6, 3.1, NULL, 0, NULL)
CheckMemberSize(struct png_color_8_struct,green,1,6,40968)
CheckOffset(struct png_color_8_struct,green,1,6,40968)
CheckMemberSize(struct png_color_8_struct,blue,1,6,40969)
CheckOffset(struct png_color_8_struct,blue,2,6,40969)
CheckMemberSize(struct png_color_8_struct,gray,1,6,40970)
CheckOffset(struct png_color_8_struct,gray,3,6,40970)
CheckMemberSize(struct png_color_8_struct,alpha,1,6,40971)
CheckOffset(struct png_color_8_struct,alpha,4,6,40971)
#elif defined __ia64__
CheckTypeSize(struct png_color_8_struct,5, 11191, 3, 3.1, NULL, 0, NULL)
CheckMemberSize(struct png_color_8_struct,green,1,3,40968)
CheckOffset(struct png_color_8_struct,green,1,3,40968)
CheckMemberSize(struct png_color_8_struct,blue,1,3,40969)
CheckOffset(struct png_color_8_struct,blue,2,3,40969)
CheckMemberSize(struct png_color_8_struct,gray,1,3,40970)
CheckOffset(struct png_color_8_struct,gray,3,3,40970)
CheckMemberSize(struct png_color_8_struct,alpha,1,3,40971)
CheckOffset(struct png_color_8_struct,alpha,4,3,40971)
#elif defined __i386__
CheckTypeSize(struct png_color_8_struct,5, 11191, 2, 3.1, NULL, 0, NULL)
CheckMemberSize(struct png_color_8_struct,green,1,2,40968)
CheckOffset(struct png_color_8_struct,green,1,2,40968)
CheckMemberSize(struct png_color_8_struct,blue,1,2,40969)
CheckOffset(struct png_color_8_struct,blue,2,2,40969)
CheckMemberSize(struct png_color_8_struct,gray,1,2,40970)
CheckOffset(struct png_color_8_struct,gray,3,2,40970)
CheckMemberSize(struct png_color_8_struct,alpha,1,2,40971)
CheckOffset(struct png_color_8_struct,alpha,4,2,40971)
#else
Msg("Find size of png_color_8_struct (11191)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,0,NULL);\n",architecture,11191,0);
#endif

#if defined __s390x__
CheckTypeSize(png_color_8,5, 11192, 12, 3.1, NULL, 11191, NULL)
#elif defined __x86_64__
CheckTypeSize(png_color_8,5, 11192, 11, 3.1, NULL, 11191, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_color_8,5, 11192, 10, 3.1, NULL, 11191, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_color_8,5, 11192, 9, 3.1, NULL, 11191, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_color_8,5, 11192, 6, 3.1, NULL, 11191, NULL)
#elif defined __ia64__
CheckTypeSize(png_color_8,5, 11192, 3, 3.1, NULL, 11191, NULL)
#elif defined __i386__
CheckTypeSize(png_color_8,5, 11192, 2, 3.1, NULL, 11191, NULL)
#else
Msg("Find size of png_color_8 (11192)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11191,NULL);\n",architecture,11192,0);
#endif

#if defined __s390x__
CheckTypeSize(png_color_8p,8, 11194, 12, 3.1, NULL, 11193, NULL)
#elif defined __x86_64__
CheckTypeSize(png_color_8p,8, 11194, 11, 3.1, NULL, 11193, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_color_8p,4, 11194, 10, 3.1, NULL, 11193, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_color_8p,8, 11194, 9, 3.1, NULL, 11193, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_color_8p,4, 11194, 6, 3.1, NULL, 11193, NULL)
#elif defined __ia64__
CheckTypeSize(png_color_8p,8, 11194, 3, 3.1, NULL, 11193, NULL)
#elif defined __i386__
CheckTypeSize(png_color_8p,4, 11194, 2, 3.1, NULL, 11193, NULL)
#else
Msg("Find size of png_color_8p (11194)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11193,NULL);\n",architecture,11194,0);
#endif

#if defined __s390x__
CheckTypeSize(png_int_32,8, 11195, 12, 3.1, NULL, 8, NULL)
#elif defined __x86_64__
CheckTypeSize(png_int_32,8, 11195, 11, 3.1, NULL, 8, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_int_32,4, 11195, 10, 3.1, NULL, 8, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_int_32,8, 11195, 9, 3.1, NULL, 8, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_int_32,4, 11195, 6, 3.1, NULL, 8, NULL)
#elif defined __ia64__
CheckTypeSize(png_int_32,8, 11195, 3, 3.1, NULL, 8, NULL)
#elif defined __i386__
CheckTypeSize(png_int_32,4, 11195, 2, 3.1, NULL, 8, NULL)
#else
Msg("Find size of png_int_32 (11195)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,8,NULL);\n",architecture,11195,0);
#endif

#if defined __s390x__
CheckTypeSize(png_charp,8, 11196, 12, 3.1, NULL, 63, NULL)
#elif defined __x86_64__
CheckTypeSize(png_charp,8, 11196, 11, 3.1, NULL, 63, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_charp,4, 11196, 10, 3.1, NULL, 63, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_charp,8, 11196, 9, 3.1, NULL, 63, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_charp,4, 11196, 6, 3.1, NULL, 63, NULL)
#elif defined __ia64__
CheckTypeSize(png_charp,8, 11196, 3, 3.1, NULL, 63, NULL)
#elif defined __i386__
CheckTypeSize(png_charp,4, 11196, 2, 3.1, NULL, 63, NULL)
#else
Msg("Find size of png_charp (11196)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,63,NULL);\n",architecture,11196,0);
#endif

#if defined __s390x__
CheckTypeSize(png_size_t,8, 11198, 12, 3.1, NULL, 8969, NULL)
#elif defined __x86_64__
CheckTypeSize(png_size_t,8, 11198, 11, 3.1, NULL, 8969, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_size_t,4, 11198, 10, 3.1, NULL, 8969, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_size_t,8, 11198, 9, 3.1, NULL, 8969, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_size_t,4, 11198, 6, 3.1, NULL, 8969, NULL)
#elif defined __ia64__
CheckTypeSize(png_size_t,8, 11198, 3, 3.1, NULL, 8969, NULL)
#elif defined __i386__
CheckTypeSize(png_size_t,4, 11198, 2, 3.1, NULL, 8969, NULL)
#else
Msg("Find size of png_size_t (11198)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,8969,NULL);\n",architecture,11198,0);
#endif

#if defined __s390x__
CheckTypeSize(struct png_text_struct,32, 11199, 12, , NULL, 0, NULL)
CheckMemberSize(struct png_text_struct,key,8,12,40973)
CheckOffset(struct png_text_struct,key,8,12,40973)
CheckMemberSize(struct png_text_struct,text,8,12,40974)
CheckOffset(struct png_text_struct,text,16,12,40974)
CheckMemberSize(struct png_text_struct,text_length,8,12,40975)
CheckOffset(struct png_text_struct,text_length,24,12,40975)
#elif defined __x86_64__
CheckTypeSize(struct png_text_struct,32, 11199, 11, , NULL, 0, NULL)
CheckMemberSize(struct png_text_struct,key,8,11,40973)
CheckOffset(struct png_text_struct,key,8,11,40973)
CheckMemberSize(struct png_text_struct,text,8,11,40974)
CheckOffset(struct png_text_struct,text,16,11,40974)
CheckMemberSize(struct png_text_struct,text_length,8,11,40975)
CheckOffset(struct png_text_struct,text_length,24,11,40975)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct png_text_struct,16, 11199, 10, , NULL, 0, NULL)
CheckMemberSize(struct png_text_struct,key,4,10,40973)
CheckOffset(struct png_text_struct,key,4,10,40973)
CheckMemberSize(struct png_text_struct,text,4,10,40974)
CheckOffset(struct png_text_struct,text,8,10,40974)
CheckMemberSize(struct png_text_struct,text_length,4,10,40975)
CheckOffset(struct png_text_struct,text_length,12,10,40975)
#elif defined __powerpc64__
CheckTypeSize(struct png_text_struct,32, 11199, 9, , NULL, 0, NULL)
CheckMemberSize(struct png_text_struct,key,8,9,40973)
CheckOffset(struct png_text_struct,key,8,9,40973)
CheckMemberSize(struct png_text_struct,text,8,9,40974)
CheckOffset(struct png_text_struct,text,16,9,40974)
CheckMemberSize(struct png_text_struct,text_length,8,9,40975)
CheckOffset(struct png_text_struct,text_length,24,9,40975)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct png_text_struct,16, 11199, 6, , NULL, 0, NULL)
CheckMemberSize(struct png_text_struct,key,4,6,40973)
CheckOffset(struct png_text_struct,key,4,6,40973)
CheckMemberSize(struct png_text_struct,text,4,6,40974)
CheckOffset(struct png_text_struct,text,8,6,40974)
CheckMemberSize(struct png_text_struct,text_length,4,6,40975)
CheckOffset(struct png_text_struct,text_length,12,6,40975)
#elif defined __ia64__
CheckTypeSize(struct png_text_struct,32, 11199, 3, , NULL, 0, NULL)
CheckMemberSize(struct png_text_struct,key,8,3,40973)
CheckOffset(struct png_text_struct,key,8,3,40973)
CheckMemberSize(struct png_text_struct,text,8,3,40974)
CheckOffset(struct png_text_struct,text,16,3,40974)
CheckMemberSize(struct png_text_struct,text_length,8,3,40975)
CheckOffset(struct png_text_struct,text_length,24,3,40975)
#elif defined __i386__
CheckTypeSize(struct png_text_struct,16, 11199, 2, , NULL, 0, NULL)
CheckMemberSize(struct png_text_struct,key,4,2,40973)
CheckOffset(struct png_text_struct,key,4,2,40973)
CheckMemberSize(struct png_text_struct,text,4,2,40974)
CheckOffset(struct png_text_struct,text,8,2,40974)
CheckMemberSize(struct png_text_struct,text_length,4,2,40975)
CheckOffset(struct png_text_struct,text_length,12,2,40975)
#elif 1
CheckTypeSize(struct png_text_struct,0, 11199, 1, , NULL, 0, NULL)
Msg("Missing member data for png_text_struct on All\n");
CheckOffset(struct png_text_struct,compression,0,1,40972)
#endif

#if defined __s390x__
CheckTypeSize(png_text,32, 11200, 12, 3.1, NULL, 11199, NULL)
#elif defined __x86_64__
CheckTypeSize(png_text,32, 11200, 11, 3.1, NULL, 11199, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_text,16, 11200, 10, 3.1, NULL, 11199, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_text,32, 11200, 9, 3.1, NULL, 11199, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_text,16, 11200, 6, 3.1, NULL, 11199, NULL)
#elif defined __ia64__
CheckTypeSize(png_text,32, 11200, 3, 3.1, NULL, 11199, NULL)
#elif defined __i386__
CheckTypeSize(png_text,16, 11200, 2, 3.1, NULL, 11199, NULL)
#else
Msg("Find size of png_text (11200)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11199,NULL);\n",architecture,11200,0);
#endif

#if defined __s390x__
CheckTypeSize(png_textp,8, 11202, 12, 3.1, NULL, 11201, NULL)
#elif defined __x86_64__
CheckTypeSize(png_textp,8, 11202, 11, 3.1, NULL, 11201, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_textp,4, 11202, 10, 3.1, NULL, 11201, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_textp,8, 11202, 9, 3.1, NULL, 11201, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_textp,4, 11202, 6, 3.1, NULL, 11201, NULL)
#elif defined __ia64__
CheckTypeSize(png_textp,8, 11202, 3, 3.1, NULL, 11201, NULL)
#elif defined __i386__
CheckTypeSize(png_textp,4, 11202, 2, 3.1, NULL, 11201, NULL)
#else
Msg("Find size of png_textp (11202)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11201,NULL);\n",architecture,11202,0);
#endif

#if defined __s390x__
CheckTypeSize(png_bytepp,8, 11205, 12, 3.1, NULL, 11204, NULL)
#elif defined __x86_64__
CheckTypeSize(png_bytepp,8, 11205, 11, 3.1, NULL, 11204, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_bytepp,4, 11205, 10, 3.1, NULL, 11204, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_bytepp,8, 11205, 9, 3.1, NULL, 11204, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_bytepp,4, 11205, 6, 3.1, NULL, 11204, NULL)
#elif defined __ia64__
CheckTypeSize(png_bytepp,8, 11205, 3, 3.1, NULL, 11204, NULL)
#elif defined __i386__
CheckTypeSize(png_bytepp,4, 11205, 2, 3.1, NULL, 11204, NULL)
#else
Msg("Find size of png_bytepp (11205)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11204,NULL);\n",architecture,11205,0);
#endif

#if defined __s390x__
CheckTypeSize(struct png_color_16_struct,10, 11208, 12, 3.1, NULL, 0, NULL)
CheckMemberSize(struct png_color_16_struct,red,2,12,40977)
CheckOffset(struct png_color_16_struct,red,2,12,40977)
CheckMemberSize(struct png_color_16_struct,green,2,12,40978)
CheckOffset(struct png_color_16_struct,green,4,12,40978)
CheckMemberSize(struct png_color_16_struct,blue,2,12,40979)
CheckOffset(struct png_color_16_struct,blue,6,12,40979)
CheckMemberSize(struct png_color_16_struct,gray,2,12,40980)
CheckOffset(struct png_color_16_struct,gray,8,12,40980)
#elif defined __x86_64__
CheckTypeSize(struct png_color_16_struct,10, 11208, 11, 3.1, NULL, 0, NULL)
CheckMemberSize(struct png_color_16_struct,red,2,11,40977)
CheckOffset(struct png_color_16_struct,red,2,11,40977)
CheckMemberSize(struct png_color_16_struct,green,2,11,40978)
CheckOffset(struct png_color_16_struct,green,4,11,40978)
CheckMemberSize(struct png_color_16_struct,blue,2,11,40979)
CheckOffset(struct png_color_16_struct,blue,6,11,40979)
CheckMemberSize(struct png_color_16_struct,gray,2,11,40980)
CheckOffset(struct png_color_16_struct,gray,8,11,40980)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct png_color_16_struct,10, 11208, 10, 3.1, NULL, 0, NULL)
CheckMemberSize(struct png_color_16_struct,red,2,10,40977)
CheckOffset(struct png_color_16_struct,red,2,10,40977)
CheckMemberSize(struct png_color_16_struct,green,2,10,40978)
CheckOffset(struct png_color_16_struct,green,4,10,40978)
CheckMemberSize(struct png_color_16_struct,blue,2,10,40979)
CheckOffset(struct png_color_16_struct,blue,6,10,40979)
CheckMemberSize(struct png_color_16_struct,gray,2,10,40980)
CheckOffset(struct png_color_16_struct,gray,8,10,40980)
#elif defined __powerpc64__
CheckTypeSize(struct png_color_16_struct,10, 11208, 9, 3.1, NULL, 0, NULL)
CheckMemberSize(struct png_color_16_struct,red,2,9,40977)
CheckOffset(struct png_color_16_struct,red,2,9,40977)
CheckMemberSize(struct png_color_16_struct,green,2,9,40978)
CheckOffset(struct png_color_16_struct,green,4,9,40978)
CheckMemberSize(struct png_color_16_struct,blue,2,9,40979)
CheckOffset(struct png_color_16_struct,blue,6,9,40979)
CheckMemberSize(struct png_color_16_struct,gray,2,9,40980)
CheckOffset(struct png_color_16_struct,gray,8,9,40980)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct png_color_16_struct,10, 11208, 6, 3.1, NULL, 0, NULL)
CheckMemberSize(struct png_color_16_struct,red,2,6,40977)
CheckOffset(struct png_color_16_struct,red,2,6,40977)
CheckMemberSize(struct png_color_16_struct,green,2,6,40978)
CheckOffset(struct png_color_16_struct,green,4,6,40978)
CheckMemberSize(struct png_color_16_struct,blue,2,6,40979)
CheckOffset(struct png_color_16_struct,blue,6,6,40979)
CheckMemberSize(struct png_color_16_struct,gray,2,6,40980)
CheckOffset(struct png_color_16_struct,gray,8,6,40980)
#elif defined __ia64__
CheckTypeSize(struct png_color_16_struct,10, 11208, 3, 3.1, NULL, 0, NULL)
CheckMemberSize(struct png_color_16_struct,red,2,3,40977)
CheckOffset(struct png_color_16_struct,red,2,3,40977)
CheckMemberSize(struct png_color_16_struct,green,2,3,40978)
CheckOffset(struct png_color_16_struct,green,4,3,40978)
CheckMemberSize(struct png_color_16_struct,blue,2,3,40979)
CheckOffset(struct png_color_16_struct,blue,6,3,40979)
CheckMemberSize(struct png_color_16_struct,gray,2,3,40980)
CheckOffset(struct png_color_16_struct,gray,8,3,40980)
#elif defined __i386__
CheckTypeSize(struct png_color_16_struct,10, 11208, 2, 3.1, NULL, 0, NULL)
CheckMemberSize(struct png_color_16_struct,red,2,2,40977)
CheckOffset(struct png_color_16_struct,red,2,2,40977)
CheckMemberSize(struct png_color_16_struct,green,2,2,40978)
CheckOffset(struct png_color_16_struct,green,4,2,40978)
CheckMemberSize(struct png_color_16_struct,blue,2,2,40979)
CheckOffset(struct png_color_16_struct,blue,6,2,40979)
CheckMemberSize(struct png_color_16_struct,gray,2,2,40980)
CheckOffset(struct png_color_16_struct,gray,8,2,40980)
#else
Msg("Find size of png_color_16_struct (11208)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,0,NULL);\n",architecture,11208,0);
#endif

#if defined __s390x__
CheckTypeSize(png_uint_16,2, 11210, 12, 3.1, NULL, 5, NULL)
#elif defined __x86_64__
CheckTypeSize(png_uint_16,2, 11210, 11, 3.1, NULL, 5, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_uint_16,2, 11210, 10, 3.1, NULL, 5, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_uint_16,2, 11210, 9, 3.1, NULL, 5, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_uint_16,2, 11210, 6, 3.1, NULL, 5, NULL)
#elif defined __ia64__
CheckTypeSize(png_uint_16,2, 11210, 3, 3.1, NULL, 5, NULL)
#elif defined __i386__
CheckTypeSize(png_uint_16,2, 11210, 2, 3.1, NULL, 5, NULL)
#else
Msg("Find size of png_uint_16 (11210)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,5,NULL);\n",architecture,11210,0);
#endif

#if defined __s390x__
CheckTypeSize(png_color_16,10, 11211, 12, 3.1, NULL, 11208, NULL)
#elif defined __x86_64__
CheckTypeSize(png_color_16,10, 11211, 11, 3.1, NULL, 11208, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_color_16,10, 11211, 10, 3.1, NULL, 11208, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_color_16,10, 11211, 9, 3.1, NULL, 11208, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_color_16,10, 11211, 6, 3.1, NULL, 11208, NULL)
#elif defined __ia64__
CheckTypeSize(png_color_16,10, 11211, 3, 3.1, NULL, 11208, NULL)
#elif defined __i386__
CheckTypeSize(png_color_16,10, 11211, 2, 3.1, NULL, 11208, NULL)
#else
Msg("Find size of png_color_16 (11211)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11208,NULL);\n",architecture,11211,0);
#endif

#if defined __s390x__
CheckTypeSize(png_color_16p,8, 11213, 12, 3.1, NULL, 11212, NULL)
#elif defined __x86_64__
CheckTypeSize(png_color_16p,8, 11213, 11, 3.1, NULL, 11212, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_color_16p,4, 11213, 10, 3.1, NULL, 11212, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_color_16p,8, 11213, 9, 3.1, NULL, 11212, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_color_16p,4, 11213, 6, 3.1, NULL, 11212, NULL)
#elif defined __ia64__
CheckTypeSize(png_color_16p,8, 11213, 3, 3.1, NULL, 11212, NULL)
#elif defined __i386__
CheckTypeSize(png_color_16p,4, 11213, 2, 3.1, NULL, 11212, NULL)
#else
Msg("Find size of png_color_16p (11213)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11212,NULL);\n",architecture,11213,0);
#endif

#if defined __s390x__
CheckTypeSize(struct png_color_struct,3, 11215, 12, , NULL, 0, NULL)
CheckMemberSize(struct png_color_struct,green,1,12,40982)
CheckOffset(struct png_color_struct,green,1,12,40982)
CheckMemberSize(struct png_color_struct,blue,1,12,40983)
CheckOffset(struct png_color_struct,blue,2,12,40983)
#elif defined __x86_64__
CheckTypeSize(struct png_color_struct,3, 11215, 11, , NULL, 0, NULL)
CheckMemberSize(struct png_color_struct,green,1,11,40982)
CheckOffset(struct png_color_struct,green,1,11,40982)
CheckMemberSize(struct png_color_struct,blue,1,11,40983)
CheckOffset(struct png_color_struct,blue,2,11,40983)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct png_color_struct,3, 11215, 10, , NULL, 0, NULL)
CheckMemberSize(struct png_color_struct,green,1,10,40982)
CheckOffset(struct png_color_struct,green,1,10,40982)
CheckMemberSize(struct png_color_struct,blue,1,10,40983)
CheckOffset(struct png_color_struct,blue,2,10,40983)
#elif defined __powerpc64__
CheckTypeSize(struct png_color_struct,3, 11215, 9, , NULL, 0, NULL)
CheckMemberSize(struct png_color_struct,green,1,9,40982)
CheckOffset(struct png_color_struct,green,1,9,40982)
CheckMemberSize(struct png_color_struct,blue,1,9,40983)
CheckOffset(struct png_color_struct,blue,2,9,40983)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct png_color_struct,3, 11215, 6, , NULL, 0, NULL)
CheckMemberSize(struct png_color_struct,green,1,6,40982)
CheckOffset(struct png_color_struct,green,1,6,40982)
CheckMemberSize(struct png_color_struct,blue,1,6,40983)
CheckOffset(struct png_color_struct,blue,2,6,40983)
#elif defined __ia64__
CheckTypeSize(struct png_color_struct,3, 11215, 3, , NULL, 0, NULL)
CheckMemberSize(struct png_color_struct,green,1,3,40982)
CheckOffset(struct png_color_struct,green,1,3,40982)
CheckMemberSize(struct png_color_struct,blue,1,3,40983)
CheckOffset(struct png_color_struct,blue,2,3,40983)
#elif defined __i386__
CheckTypeSize(struct png_color_struct,3, 11215, 2, , NULL, 0, NULL)
CheckMemberSize(struct png_color_struct,green,1,2,40982)
CheckOffset(struct png_color_struct,green,1,2,40982)
CheckMemberSize(struct png_color_struct,blue,1,2,40983)
CheckOffset(struct png_color_struct,blue,2,2,40983)
#elif 1
CheckTypeSize(struct png_color_struct,0, 11215, 1, , NULL, 0, NULL)
Msg("Missing member data for png_color_struct on All\n");
CheckOffset(struct png_color_struct,red,0,1,40981)
#endif

#if defined __s390x__
CheckTypeSize(png_color,3, 11216, 12, 3.1, NULL, 11215, NULL)
#elif defined __x86_64__
CheckTypeSize(png_color,3, 11216, 11, 3.1, NULL, 11215, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_color,3, 11216, 10, 3.1, NULL, 11215, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_color,3, 11216, 9, 3.1, NULL, 11215, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_color,3, 11216, 6, 3.1, NULL, 11215, NULL)
#elif defined __ia64__
CheckTypeSize(png_color,3, 11216, 3, 3.1, NULL, 11215, NULL)
#elif defined __i386__
CheckTypeSize(png_color,3, 11216, 2, 3.1, NULL, 11215, NULL)
#else
Msg("Find size of png_color (11216)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11215,NULL);\n",architecture,11216,0);
#endif

#if defined __s390x__
CheckTypeSize(png_colorp,8, 11218, 12, 3.1, NULL, 11217, NULL)
#elif defined __x86_64__
CheckTypeSize(png_colorp,8, 11218, 11, 3.1, NULL, 11217, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_colorp,4, 11218, 10, 3.1, NULL, 11217, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_colorp,8, 11218, 9, 3.1, NULL, 11217, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_colorp,4, 11218, 6, 3.1, NULL, 11217, NULL)
#elif defined __ia64__
CheckTypeSize(png_colorp,8, 11218, 3, 3.1, NULL, 11217, NULL)
#elif defined __i386__
CheckTypeSize(png_colorp,4, 11218, 2, 3.1, NULL, 11217, NULL)
#else
Msg("Find size of png_colorp (11218)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11217,NULL);\n",architecture,11218,0);
#endif

#if defined __s390x__
CheckTypeSize(png_const_charp,8, 11220, 12, 3.1, NULL, 10295, NULL)
#elif defined __x86_64__
CheckTypeSize(png_const_charp,8, 11220, 11, 3.1, NULL, 10295, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_const_charp,4, 11220, 10, 3.1, NULL, 10295, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_const_charp,8, 11220, 9, 3.1, NULL, 10295, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_const_charp,4, 11220, 6, 3.1, NULL, 10295, NULL)
#elif defined __ia64__
CheckTypeSize(png_const_charp,8, 11220, 3, 3.1, NULL, 10295, NULL)
#elif defined __i386__
CheckTypeSize(png_const_charp,4, 11220, 2, 3.1, NULL, 10295, NULL)
#else
Msg("Find size of png_const_charp (11220)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,10295,NULL);\n",architecture,11220,0);
#endif

#if defined __s390x__
CheckTypeSize(png_error_ptr,8, 11222, 12, 3.1, NULL, 11221, NULL)
#elif defined __x86_64__
CheckTypeSize(png_error_ptr,8, 11222, 11, 3.1, NULL, 11221, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_error_ptr,4, 11222, 10, 3.1, NULL, 11221, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_error_ptr,8, 11222, 9, 3.1, NULL, 11221, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_error_ptr,4, 11222, 6, 3.1, NULL, 11221, NULL)
#elif defined __ia64__
CheckTypeSize(png_error_ptr,8, 11222, 3, 3.1, NULL, 11221, NULL)
#elif defined __i386__
CheckTypeSize(png_error_ptr,4, 11222, 2, 3.1, NULL, 11221, NULL)
#else
Msg("Find size of png_error_ptr (11222)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11221,NULL);\n",architecture,11222,0);
#endif

#if defined __s390x__
CheckTypeSize(png_rw_ptr,8, 11224, 12, 3.1, NULL, 11223, NULL)
#elif defined __x86_64__
CheckTypeSize(png_rw_ptr,8, 11224, 11, 3.1, NULL, 11223, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_rw_ptr,4, 11224, 10, 3.1, NULL, 11223, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_rw_ptr,8, 11224, 9, 3.1, NULL, 11223, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_rw_ptr,4, 11224, 6, 3.1, NULL, 11223, NULL)
#elif defined __ia64__
CheckTypeSize(png_rw_ptr,8, 11224, 3, 3.1, NULL, 11223, NULL)
#elif defined __i386__
CheckTypeSize(png_rw_ptr,4, 11224, 2, 3.1, NULL, 11223, NULL)
#else
Msg("Find size of png_rw_ptr (11224)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11223,NULL);\n",architecture,11224,0);
#endif

#if defined __s390x__
CheckTypeSize(struct png_time_struct,8, 11225, 12, 3.1, NULL, 0, NULL)
CheckMemberSize(struct png_time_struct,month,1,12,40990)
CheckOffset(struct png_time_struct,month,2,12,40990)
CheckMemberSize(struct png_time_struct,day,1,12,40991)
CheckOffset(struct png_time_struct,day,3,12,40991)
CheckMemberSize(struct png_time_struct,hour,1,12,40992)
CheckOffset(struct png_time_struct,hour,4,12,40992)
CheckMemberSize(struct png_time_struct,minute,1,12,40993)
CheckOffset(struct png_time_struct,minute,5,12,40993)
CheckMemberSize(struct png_time_struct,second,1,12,40994)
CheckOffset(struct png_time_struct,second,6,12,40994)
#elif defined __x86_64__
CheckTypeSize(struct png_time_struct,8, 11225, 11, 3.1, NULL, 0, NULL)
CheckMemberSize(struct png_time_struct,month,1,11,40990)
CheckOffset(struct png_time_struct,month,2,11,40990)
CheckMemberSize(struct png_time_struct,day,1,11,40991)
CheckOffset(struct png_time_struct,day,3,11,40991)
CheckMemberSize(struct png_time_struct,hour,1,11,40992)
CheckOffset(struct png_time_struct,hour,4,11,40992)
CheckMemberSize(struct png_time_struct,minute,1,11,40993)
CheckOffset(struct png_time_struct,minute,5,11,40993)
CheckMemberSize(struct png_time_struct,second,1,11,40994)
CheckOffset(struct png_time_struct,second,6,11,40994)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct png_time_struct,8, 11225, 10, 3.1, NULL, 0, NULL)
CheckMemberSize(struct png_time_struct,month,1,10,40990)
CheckOffset(struct png_time_struct,month,2,10,40990)
CheckMemberSize(struct png_time_struct,day,1,10,40991)
CheckOffset(struct png_time_struct,day,3,10,40991)
CheckMemberSize(struct png_time_struct,hour,1,10,40992)
CheckOffset(struct png_time_struct,hour,4,10,40992)
CheckMemberSize(struct png_time_struct,minute,1,10,40993)
CheckOffset(struct png_time_struct,minute,5,10,40993)
CheckMemberSize(struct png_time_struct,second,1,10,40994)
CheckOffset(struct png_time_struct,second,6,10,40994)
#elif defined __powerpc64__
CheckTypeSize(struct png_time_struct,8, 11225, 9, 3.1, NULL, 0, NULL)
CheckMemberSize(struct png_time_struct,month,1,9,40990)
CheckOffset(struct png_time_struct,month,2,9,40990)
CheckMemberSize(struct png_time_struct,day,1,9,40991)
CheckOffset(struct png_time_struct,day,3,9,40991)
CheckMemberSize(struct png_time_struct,hour,1,9,40992)
CheckOffset(struct png_time_struct,hour,4,9,40992)
CheckMemberSize(struct png_time_struct,minute,1,9,40993)
CheckOffset(struct png_time_struct,minute,5,9,40993)
CheckMemberSize(struct png_time_struct,second,1,9,40994)
CheckOffset(struct png_time_struct,second,6,9,40994)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct png_time_struct,8, 11225, 6, 3.1, NULL, 0, NULL)
CheckMemberSize(struct png_time_struct,month,1,6,40990)
CheckOffset(struct png_time_struct,month,2,6,40990)
CheckMemberSize(struct png_time_struct,day,1,6,40991)
CheckOffset(struct png_time_struct,day,3,6,40991)
CheckMemberSize(struct png_time_struct,hour,1,6,40992)
CheckOffset(struct png_time_struct,hour,4,6,40992)
CheckMemberSize(struct png_time_struct,minute,1,6,40993)
CheckOffset(struct png_time_struct,minute,5,6,40993)
CheckMemberSize(struct png_time_struct,second,1,6,40994)
CheckOffset(struct png_time_struct,second,6,6,40994)
#elif defined __ia64__
CheckTypeSize(struct png_time_struct,8, 11225, 3, 3.1, NULL, 0, NULL)
CheckMemberSize(struct png_time_struct,month,1,3,40990)
CheckOffset(struct png_time_struct,month,2,3,40990)
CheckMemberSize(struct png_time_struct,day,1,3,40991)
CheckOffset(struct png_time_struct,day,3,3,40991)
CheckMemberSize(struct png_time_struct,hour,1,3,40992)
CheckOffset(struct png_time_struct,hour,4,3,40992)
CheckMemberSize(struct png_time_struct,minute,1,3,40993)
CheckOffset(struct png_time_struct,minute,5,3,40993)
CheckMemberSize(struct png_time_struct,second,1,3,40994)
CheckOffset(struct png_time_struct,second,6,3,40994)
#elif defined __i386__
CheckTypeSize(struct png_time_struct,8, 11225, 2, 3.1, NULL, 0, NULL)
CheckMemberSize(struct png_time_struct,month,1,2,40990)
CheckOffset(struct png_time_struct,month,2,2,40990)
CheckMemberSize(struct png_time_struct,day,1,2,40991)
CheckOffset(struct png_time_struct,day,3,2,40991)
CheckMemberSize(struct png_time_struct,hour,1,2,40992)
CheckOffset(struct png_time_struct,hour,4,2,40992)
CheckMemberSize(struct png_time_struct,minute,1,2,40993)
CheckOffset(struct png_time_struct,minute,5,2,40993)
CheckMemberSize(struct png_time_struct,second,1,2,40994)
CheckOffset(struct png_time_struct,second,6,2,40994)
#else
Msg("Find size of png_time_struct (11225)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,0,NULL);\n",architecture,11225,0);
#endif

#if defined __s390x__
CheckTypeSize(png_time,8, 11226, 12, 3.1, NULL, 11225, NULL)
#elif defined __x86_64__
CheckTypeSize(png_time,8, 11226, 11, 3.1, NULL, 11225, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_time,8, 11226, 10, 3.1, NULL, 11225, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_time,8, 11226, 9, 3.1, NULL, 11225, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_time,8, 11226, 6, 3.1, NULL, 11225, NULL)
#elif defined __ia64__
CheckTypeSize(png_time,8, 11226, 3, 3.1, NULL, 11225, NULL)
#elif defined __i386__
CheckTypeSize(png_time,8, 11226, 2, 3.1, NULL, 11225, NULL)
#else
Msg("Find size of png_time (11226)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11225,NULL);\n",architecture,11226,0);
#endif

#if defined __s390x__
CheckTypeSize(png_timep,8, 11228, 12, 3.1, NULL, 11227, NULL)
#elif defined __x86_64__
CheckTypeSize(png_timep,8, 11228, 11, 3.1, NULL, 11227, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_timep,4, 11228, 10, 3.1, NULL, 11227, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_timep,8, 11228, 9, 3.1, NULL, 11227, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_timep,4, 11228, 6, 3.1, NULL, 11227, NULL)
#elif defined __ia64__
CheckTypeSize(png_timep,8, 11228, 3, 3.1, NULL, 11227, NULL)
#elif defined __i386__
CheckTypeSize(png_timep,4, 11228, 2, 3.1, NULL, 11227, NULL)
#else
Msg("Find size of png_timep (11228)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11227,NULL);\n",architecture,11228,0);
#endif

#if defined __s390x__
CheckTypeSize(png_uint_16p,8, 11231, 12, 3.1, NULL, 11230, NULL)
#elif defined __x86_64__
CheckTypeSize(png_uint_16p,8, 11231, 11, 3.1, NULL, 11230, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_uint_16p,4, 11231, 10, 3.1, NULL, 11230, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_uint_16p,8, 11231, 9, 3.1, NULL, 11230, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_uint_16p,4, 11231, 6, 3.1, NULL, 11230, NULL)
#elif defined __ia64__
CheckTypeSize(png_uint_16p,8, 11231, 3, 3.1, NULL, 11230, NULL)
#elif defined __i386__
CheckTypeSize(png_uint_16p,4, 11231, 2, 3.1, NULL, 11230, NULL)
#else
Msg("Find size of png_uint_16p (11231)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11230,NULL);\n",architecture,11231,0);
#endif

#if defined __s390x__
CheckTypeSize(png_flush_ptr,8, 11234, 12, 3.1, NULL, 11233, NULL)
#elif defined __x86_64__
CheckTypeSize(png_flush_ptr,8, 11234, 11, 3.1, NULL, 11233, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_flush_ptr,4, 11234, 10, 3.1, NULL, 11233, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_flush_ptr,8, 11234, 9, 3.1, NULL, 11233, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_flush_ptr,4, 11234, 6, 3.1, NULL, 11233, NULL)
#elif defined __ia64__
CheckTypeSize(png_flush_ptr,8, 11234, 3, 3.1, NULL, 11233, NULL)
#elif defined __i386__
CheckTypeSize(png_flush_ptr,4, 11234, 2, 3.1, NULL, 11233, NULL)
#else
Msg("Find size of png_flush_ptr (11234)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11233,NULL);\n",architecture,11234,0);
#endif

#if defined __s390x__
CheckTypeSize(png_charpp,8, 11236, 12, 3.1, NULL, 26971, NULL)
#elif defined __x86_64__
CheckTypeSize(png_charpp,8, 11236, 11, 3.1, NULL, 26971, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_charpp,4, 11236, 10, 3.1, NULL, 26971, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_charpp,8, 11236, 9, 3.1, NULL, 26971, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_charpp,4, 11236, 6, 3.1, NULL, 26971, NULL)
#elif defined __ia64__
CheckTypeSize(png_charpp,8, 11236, 3, 3.1, NULL, 26971, NULL)
#elif defined __i386__
CheckTypeSize(png_charpp,4, 11236, 2, 3.1, NULL, 26971, NULL)
#else
Msg("Find size of png_charpp (11236)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,26971,NULL);\n",architecture,11236,0);
#endif

#if defined __s390x__
CheckTypeSize(png_structpp,8, 11239, 12, 3.1, NULL, 11238, NULL)
#elif defined __x86_64__
CheckTypeSize(png_structpp,8, 11239, 11, 3.1, NULL, 11238, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_structpp,4, 11239, 10, 3.1, NULL, 11238, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_structpp,8, 11239, 9, 3.1, NULL, 11238, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_structpp,4, 11239, 6, 3.1, NULL, 11238, NULL)
#elif defined __ia64__
CheckTypeSize(png_structpp,8, 11239, 3, 3.1, NULL, 11238, NULL)
#elif defined __i386__
CheckTypeSize(png_structpp,4, 11239, 2, 3.1, NULL, 11238, NULL)
#else
Msg("Find size of png_structpp (11239)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11238,NULL);\n",architecture,11239,0);
#endif

#if defined __s390x__
CheckTypeSize(png_infopp,8, 11241, 12, 3.1, NULL, 11240, NULL)
#elif defined __x86_64__
CheckTypeSize(png_infopp,8, 11241, 11, 3.1, NULL, 11240, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_infopp,4, 11241, 10, 3.1, NULL, 11240, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_infopp,8, 11241, 9, 3.1, NULL, 11240, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_infopp,4, 11241, 6, 3.1, NULL, 11240, NULL)
#elif defined __ia64__
CheckTypeSize(png_infopp,8, 11241, 3, 3.1, NULL, 11240, NULL)
#elif defined __i386__
CheckTypeSize(png_infopp,4, 11241, 2, 3.1, NULL, 11240, NULL)
#else
Msg("Find size of png_infopp (11241)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11240,NULL);\n",architecture,11241,0);
#endif

#if defined __s390x__
CheckTypeSize(png_FILE_p,8, 11243, 12, 3.1, NULL, 10124, NULL)
#elif defined __x86_64__
CheckTypeSize(png_FILE_p,8, 11243, 11, 3.1, NULL, 10124, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_FILE_p,4, 11243, 10, 3.1, NULL, 10124, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_FILE_p,8, 11243, 9, 3.1, NULL, 10124, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_FILE_p,4, 11243, 6, 3.1, NULL, 10124, NULL)
#elif defined __ia64__
CheckTypeSize(png_FILE_p,8, 11243, 3, 3.1, NULL, 10124, NULL)
#elif defined __i386__
CheckTypeSize(png_FILE_p,4, 11243, 2, 3.1, NULL, 10124, NULL)
#else
Msg("Find size of png_FILE_p (11243)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,10124,NULL);\n",architecture,11243,0);
#endif

#if defined __s390x__
CheckTypeSize(struct png_row_info_struct,24, 11244, 12, 3.1, NULL, 0, NULL)
CheckMemberSize(struct png_row_info_struct,rowbytes,8,12,40997)
CheckOffset(struct png_row_info_struct,rowbytes,8,12,40997)
CheckMemberSize(struct png_row_info_struct,color_type,1,12,40998)
CheckOffset(struct png_row_info_struct,color_type,16,12,40998)
CheckMemberSize(struct png_row_info_struct,bit_depth,1,12,40999)
CheckOffset(struct png_row_info_struct,bit_depth,17,12,40999)
CheckMemberSize(struct png_row_info_struct,channels,1,12,41000)
CheckOffset(struct png_row_info_struct,channels,18,12,41000)
CheckMemberSize(struct png_row_info_struct,pixel_depth,1,12,41001)
CheckOffset(struct png_row_info_struct,pixel_depth,19,12,41001)
#elif defined __x86_64__
CheckTypeSize(struct png_row_info_struct,24, 11244, 11, 3.1, NULL, 0, NULL)
CheckMemberSize(struct png_row_info_struct,rowbytes,8,11,40997)
CheckOffset(struct png_row_info_struct,rowbytes,8,11,40997)
CheckMemberSize(struct png_row_info_struct,color_type,1,11,40998)
CheckOffset(struct png_row_info_struct,color_type,16,11,40998)
CheckMemberSize(struct png_row_info_struct,bit_depth,1,11,40999)
CheckOffset(struct png_row_info_struct,bit_depth,17,11,40999)
CheckMemberSize(struct png_row_info_struct,channels,1,11,41000)
CheckOffset(struct png_row_info_struct,channels,18,11,41000)
CheckMemberSize(struct png_row_info_struct,pixel_depth,1,11,41001)
CheckOffset(struct png_row_info_struct,pixel_depth,19,11,41001)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct png_row_info_struct,12, 11244, 10, 3.1, NULL, 0, NULL)
CheckMemberSize(struct png_row_info_struct,rowbytes,4,10,40997)
CheckOffset(struct png_row_info_struct,rowbytes,4,10,40997)
CheckMemberSize(struct png_row_info_struct,color_type,1,10,40998)
CheckOffset(struct png_row_info_struct,color_type,8,10,40998)
CheckMemberSize(struct png_row_info_struct,bit_depth,1,10,40999)
CheckOffset(struct png_row_info_struct,bit_depth,9,10,40999)
CheckMemberSize(struct png_row_info_struct,channels,1,10,41000)
CheckOffset(struct png_row_info_struct,channels,10,10,41000)
CheckMemberSize(struct png_row_info_struct,pixel_depth,1,10,41001)
CheckOffset(struct png_row_info_struct,pixel_depth,11,10,41001)
#elif defined __powerpc64__
CheckTypeSize(struct png_row_info_struct,24, 11244, 9, 3.1, NULL, 0, NULL)
CheckMemberSize(struct png_row_info_struct,rowbytes,8,9,40997)
CheckOffset(struct png_row_info_struct,rowbytes,8,9,40997)
CheckMemberSize(struct png_row_info_struct,color_type,1,9,40998)
CheckOffset(struct png_row_info_struct,color_type,16,9,40998)
CheckMemberSize(struct png_row_info_struct,bit_depth,1,9,40999)
CheckOffset(struct png_row_info_struct,bit_depth,17,9,40999)
CheckMemberSize(struct png_row_info_struct,channels,1,9,41000)
CheckOffset(struct png_row_info_struct,channels,18,9,41000)
CheckMemberSize(struct png_row_info_struct,pixel_depth,1,9,41001)
CheckOffset(struct png_row_info_struct,pixel_depth,19,9,41001)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct png_row_info_struct,12, 11244, 6, 3.1, NULL, 0, NULL)
CheckMemberSize(struct png_row_info_struct,rowbytes,4,6,40997)
CheckOffset(struct png_row_info_struct,rowbytes,4,6,40997)
CheckMemberSize(struct png_row_info_struct,color_type,1,6,40998)
CheckOffset(struct png_row_info_struct,color_type,8,6,40998)
CheckMemberSize(struct png_row_info_struct,bit_depth,1,6,40999)
CheckOffset(struct png_row_info_struct,bit_depth,9,6,40999)
CheckMemberSize(struct png_row_info_struct,channels,1,6,41000)
CheckOffset(struct png_row_info_struct,channels,10,6,41000)
CheckMemberSize(struct png_row_info_struct,pixel_depth,1,6,41001)
CheckOffset(struct png_row_info_struct,pixel_depth,11,6,41001)
#elif defined __ia64__
CheckTypeSize(struct png_row_info_struct,24, 11244, 3, 3.1, NULL, 0, NULL)
CheckMemberSize(struct png_row_info_struct,rowbytes,8,3,40997)
CheckOffset(struct png_row_info_struct,rowbytes,8,3,40997)
CheckMemberSize(struct png_row_info_struct,color_type,1,3,40998)
CheckOffset(struct png_row_info_struct,color_type,16,3,40998)
CheckMemberSize(struct png_row_info_struct,bit_depth,1,3,40999)
CheckOffset(struct png_row_info_struct,bit_depth,17,3,40999)
CheckMemberSize(struct png_row_info_struct,channels,1,3,41000)
CheckOffset(struct png_row_info_struct,channels,18,3,41000)
CheckMemberSize(struct png_row_info_struct,pixel_depth,1,3,41001)
CheckOffset(struct png_row_info_struct,pixel_depth,19,3,41001)
#elif defined __i386__
CheckTypeSize(struct png_row_info_struct,12, 11244, 2, 3.1, NULL, 0, NULL)
CheckMemberSize(struct png_row_info_struct,rowbytes,4,2,40997)
CheckOffset(struct png_row_info_struct,rowbytes,4,2,40997)
CheckMemberSize(struct png_row_info_struct,color_type,1,2,40998)
CheckOffset(struct png_row_info_struct,color_type,8,2,40998)
CheckMemberSize(struct png_row_info_struct,bit_depth,1,2,40999)
CheckOffset(struct png_row_info_struct,bit_depth,9,2,40999)
CheckMemberSize(struct png_row_info_struct,channels,1,2,41000)
CheckOffset(struct png_row_info_struct,channels,10,2,41000)
CheckMemberSize(struct png_row_info_struct,pixel_depth,1,2,41001)
CheckOffset(struct png_row_info_struct,pixel_depth,11,2,41001)
#else
Msg("Find size of png_row_info_struct (11244)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,0,NULL);\n",architecture,11244,0);
#endif

#if defined __s390x__
CheckTypeSize(png_row_info,24, 11245, 12, 3.1, NULL, 11244, NULL)
#elif defined __x86_64__
CheckTypeSize(png_row_info,24, 11245, 11, 3.1, NULL, 11244, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_row_info,12, 11245, 10, 3.1, NULL, 11244, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_row_info,24, 11245, 9, 3.1, NULL, 11244, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_row_info,12, 11245, 6, 3.1, NULL, 11244, NULL)
#elif defined __ia64__
CheckTypeSize(png_row_info,24, 11245, 3, 3.1, NULL, 11244, NULL)
#elif defined __i386__
CheckTypeSize(png_row_info,12, 11245, 2, 3.1, NULL, 11244, NULL)
#else
Msg("Find size of png_row_info (11245)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11244,NULL);\n",architecture,11245,0);
#endif

#if defined __s390x__
CheckTypeSize(png_row_infop,8, 11247, 12, 3.1, NULL, 11246, NULL)
#elif defined __x86_64__
CheckTypeSize(png_row_infop,8, 11247, 11, 3.1, NULL, 11246, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_row_infop,4, 11247, 10, 3.1, NULL, 11246, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_row_infop,8, 11247, 9, 3.1, NULL, 11246, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_row_infop,4, 11247, 6, 3.1, NULL, 11246, NULL)
#elif defined __ia64__
CheckTypeSize(png_row_infop,8, 11247, 3, 3.1, NULL, 11246, NULL)
#elif defined __i386__
CheckTypeSize(png_row_infop,4, 11247, 2, 3.1, NULL, 11246, NULL)
#else
Msg("Find size of png_row_infop (11247)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11246,NULL);\n",architecture,11247,0);
#endif

#if defined __s390x__
CheckTypeSize(version_1_2_8,8, 11248, 12, 3.1, NULL, 11175, NULL)
#elif defined __x86_64__
CheckTypeSize(version_1_2_8,8, 11248, 11, 3.1, NULL, 11175, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(version_1_2_8,4, 11248, 10, 3.1, NULL, 11175, NULL)
#elif defined __powerpc64__
CheckTypeSize(version_1_2_8,8, 11248, 9, 3.1, NULL, 11175, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(version_1_2_8,4, 11248, 6, 3.1, NULL, 11175, NULL)
#elif defined __ia64__
CheckTypeSize(version_1_2_8,8, 11248, 3, 3.1, NULL, 11175, NULL)
#elif defined __i386__
CheckTypeSize(version_1_2_8,4, 11248, 2, 3.1, NULL, 11175, NULL)
#else
Msg("Find size of version_1_2_8 (11248)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11175,NULL);\n",architecture,11248,0);
#endif

#if defined __s390x__
CheckTypeSize(png_uint_32p,8, 16182, 12, 3.1, NULL, 11214, NULL)
#elif defined __x86_64__
CheckTypeSize(png_uint_32p,8, 16182, 11, 3.1, NULL, 11214, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_uint_32p,4, 16182, 10, 3.1, NULL, 11214, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_uint_32p,8, 16182, 9, 3.1, NULL, 11214, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_uint_32p,4, 16182, 6, 3.1, NULL, 11214, NULL)
#elif defined __ia64__
CheckTypeSize(png_uint_32p,8, 16182, 3, 3.1, NULL, 11214, NULL)
#elif defined __i386__
CheckTypeSize(png_uint_32p,4, 16182, 2, 3.1, NULL, 11214, NULL)
#else
Msg("Find size of png_uint_32p (16182)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11214,NULL);\n",architecture,16182,0);
#endif

#if defined __s390x__
CheckTypeSize(png_uint_16pp,8, 16184, 12, 3.1, NULL, 16183, NULL)
#elif defined __x86_64__
CheckTypeSize(png_uint_16pp,8, 16184, 11, 3.1, NULL, 16183, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_uint_16pp,4, 16184, 10, 3.1, NULL, 16183, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_uint_16pp,8, 16184, 9, 3.1, NULL, 16183, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_uint_16pp,4, 16184, 6, 3.1, NULL, 16183, NULL)
#elif defined __ia64__
CheckTypeSize(png_uint_16pp,8, 16184, 3, 3.1, NULL, 16183, NULL)
#elif defined __i386__
CheckTypeSize(png_uint_16pp,4, 16184, 2, 3.1, NULL, 16183, NULL)
#else
Msg("Find size of png_uint_16pp (16184)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,16183,NULL);\n",architecture,16184,0);
#endif

#if defined __s390x__
CheckTypeSize(png_fixed_point,8, 16185, 12, 3.1, NULL, 11195, NULL)
#elif defined __x86_64__
CheckTypeSize(png_fixed_point,8, 16185, 11, 3.1, NULL, 11195, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_fixed_point,4, 16185, 10, 3.1, NULL, 11195, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_fixed_point,8, 16185, 9, 3.1, NULL, 11195, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_fixed_point,4, 16185, 6, 3.1, NULL, 11195, NULL)
#elif defined __ia64__
CheckTypeSize(png_fixed_point,8, 16185, 3, 3.1, NULL, 11195, NULL)
#elif defined __i386__
CheckTypeSize(png_fixed_point,4, 16185, 2, 3.1, NULL, 11195, NULL)
#else
Msg("Find size of png_fixed_point (16185)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11195,NULL);\n",architecture,16185,0);
#endif

#if defined __s390x__
CheckTypeSize(png_doublep,8, 16186, 12, 3.1, NULL, 6280, NULL)
#elif defined __x86_64__
CheckTypeSize(png_doublep,8, 16186, 11, 3.1, NULL, 6280, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_doublep,4, 16186, 10, 3.1, NULL, 6280, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_doublep,8, 16186, 9, 3.1, NULL, 6280, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_doublep,4, 16186, 6, 3.1, NULL, 6280, NULL)
#elif defined __ia64__
CheckTypeSize(png_doublep,8, 16186, 3, 3.1, NULL, 6280, NULL)
#elif defined __i386__
CheckTypeSize(png_doublep,4, 16186, 2, 3.1, NULL, 6280, NULL)
#else
Msg("Find size of png_doublep (16186)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,6280,NULL);\n",architecture,16186,0);
#endif

#if defined __s390x__
CheckTypeSize(png_zcharp,8, 16188, 12, 3.1, NULL, 16187, NULL)
#elif defined __x86_64__
CheckTypeSize(png_zcharp,8, 16188, 11, 3.1, NULL, 16187, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_zcharp,4, 16188, 10, 3.1, NULL, 16187, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_zcharp,8, 16188, 9, 3.1, NULL, 16187, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_zcharp,4, 16188, 6, 3.1, NULL, 16187, NULL)
#elif defined __ia64__
CheckTypeSize(png_zcharp,8, 16188, 3, 3.1, NULL, 16187, NULL)
#elif defined __i386__
CheckTypeSize(png_zcharp,4, 16188, 2, 3.1, NULL, 16187, NULL)
#else
Msg("Find size of png_zcharp (16188)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,16187,NULL);\n",architecture,16188,0);
#endif

#if defined __s390x__
CheckTypeSize(png_fixed_point_p,8, 16190, 12, 3.1, NULL, 16189, NULL)
#elif defined __x86_64__
CheckTypeSize(png_fixed_point_p,8, 16190, 11, 3.1, NULL, 16189, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_fixed_point_p,4, 16190, 10, 3.1, NULL, 16189, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_fixed_point_p,8, 16190, 9, 3.1, NULL, 16189, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_fixed_point_p,4, 16190, 6, 3.1, NULL, 16189, NULL)
#elif defined __ia64__
CheckTypeSize(png_fixed_point_p,8, 16190, 3, 3.1, NULL, 16189, NULL)
#elif defined __i386__
CheckTypeSize(png_fixed_point_p,4, 16190, 2, 3.1, NULL, 16189, NULL)
#else
Msg("Find size of png_fixed_point_p (16190)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,16189,NULL);\n",architecture,16190,0);
#endif

#if defined __s390x__
CheckTypeSize(png_int_32p,8, 16191, 12, 3.1, NULL, 11242, NULL)
#elif defined __x86_64__
CheckTypeSize(png_int_32p,8, 16191, 11, 3.1, NULL, 11242, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_int_32p,4, 16191, 10, 3.1, NULL, 11242, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_int_32p,8, 16191, 9, 3.1, NULL, 11242, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_int_32p,4, 16191, 6, 3.1, NULL, 11242, NULL)
#elif defined __ia64__
CheckTypeSize(png_int_32p,8, 16191, 3, 3.1, NULL, 11242, NULL)
#elif defined __i386__
CheckTypeSize(png_int_32p,4, 16191, 2, 3.1, NULL, 11242, NULL)
#else
Msg("Find size of png_int_32p (16191)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11242,NULL);\n",architecture,16191,0);
#endif

#if defined __s390x__
CheckTypeSize(png_zstreamp,8, 16192, 12, 3.1, NULL, 9881, NULL)
#elif defined __x86_64__
CheckTypeSize(png_zstreamp,8, 16192, 11, 3.1, NULL, 9881, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_zstreamp,4, 16192, 10, 3.1, NULL, 9881, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_zstreamp,8, 16192, 9, 3.1, NULL, 9881, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_zstreamp,4, 16192, 6, 3.1, NULL, 9881, NULL)
#elif defined __ia64__
CheckTypeSize(png_zstreamp,8, 16192, 3, 3.1, NULL, 9881, NULL)
#elif defined __i386__
CheckTypeSize(png_zstreamp,4, 16192, 2, 3.1, NULL, 9881, NULL)
#else
Msg("Find size of png_zstreamp (16192)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,9881,NULL);\n",architecture,16192,0);
#endif

#if defined __s390x__
CheckTypeSize(png_int_16,2, 16193, 12, 3.1, NULL, 4, NULL)
#elif defined __x86_64__
CheckTypeSize(png_int_16,2, 16193, 11, 3.1, NULL, 4, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_int_16,2, 16193, 10, 3.1, NULL, 4, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_int_16,2, 16193, 9, 3.1, NULL, 4, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_int_16,2, 16193, 6, 3.1, NULL, 4, NULL)
#elif defined __ia64__
CheckTypeSize(png_int_16,2, 16193, 3, 3.1, NULL, 4, NULL)
#elif defined __i386__
CheckTypeSize(png_int_16,2, 16193, 2, 3.1, NULL, 4, NULL)
#else
Msg("Find size of png_int_16 (16193)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,4,NULL);\n",architecture,16193,0);
#endif

#if defined __s390x__
CheckTypeSize(png_int_16p,8, 16195, 12, 3.1, NULL, 16194, NULL)
#elif defined __x86_64__
CheckTypeSize(png_int_16p,8, 16195, 11, 3.1, NULL, 16194, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_int_16p,4, 16195, 10, 3.1, NULL, 16194, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_int_16p,8, 16195, 9, 3.1, NULL, 16194, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_int_16p,4, 16195, 6, 3.1, NULL, 16194, NULL)
#elif defined __ia64__
CheckTypeSize(png_int_16p,8, 16195, 3, 3.1, NULL, 16194, NULL)
#elif defined __i386__
CheckTypeSize(png_int_16p,4, 16195, 2, 3.1, NULL, 16194, NULL)
#else
Msg("Find size of png_int_16p (16195)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,16194,NULL);\n",architecture,16195,0);
#endif

#if defined __s390x__
CheckTypeSize(png_int_16pp,8, 16197, 12, 3.1, NULL, 16196, NULL)
#elif defined __x86_64__
CheckTypeSize(png_int_16pp,8, 16197, 11, 3.1, NULL, 16196, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_int_16pp,4, 16197, 10, 3.1, NULL, 16196, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_int_16pp,8, 16197, 9, 3.1, NULL, 16196, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_int_16pp,4, 16197, 6, 3.1, NULL, 16196, NULL)
#elif defined __ia64__
CheckTypeSize(png_int_16pp,8, 16197, 3, 3.1, NULL, 16196, NULL)
#elif defined __i386__
CheckTypeSize(png_int_16pp,4, 16197, 2, 3.1, NULL, 16196, NULL)
#else
Msg("Find size of png_int_16pp (16197)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,16196,NULL);\n",architecture,16197,0);
#endif

#if defined __s390x__
CheckTypeSize(png_int_32pp,8, 16199, 12, 3.1, NULL, 16198, NULL)
#elif defined __x86_64__
CheckTypeSize(png_int_32pp,8, 16199, 11, 3.1, NULL, 16198, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_int_32pp,4, 16199, 10, 3.1, NULL, 16198, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_int_32pp,8, 16199, 9, 3.1, NULL, 16198, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_int_32pp,4, 16199, 6, 3.1, NULL, 16198, NULL)
#elif defined __ia64__
CheckTypeSize(png_int_32pp,8, 16199, 3, 3.1, NULL, 16198, NULL)
#elif defined __i386__
CheckTypeSize(png_int_32pp,4, 16199, 2, 3.1, NULL, 16198, NULL)
#else
Msg("Find size of png_int_32pp (16199)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,16198,NULL);\n",architecture,16199,0);
#endif

#if defined __s390x__
CheckTypeSize(png_uint_32pp,8, 16201, 12, 3.1, NULL, 16200, NULL)
#elif defined __x86_64__
CheckTypeSize(png_uint_32pp,8, 16201, 11, 3.1, NULL, 16200, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_uint_32pp,4, 16201, 10, 3.1, NULL, 16200, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_uint_32pp,8, 16201, 9, 3.1, NULL, 16200, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_uint_32pp,4, 16201, 6, 3.1, NULL, 16200, NULL)
#elif defined __ia64__
CheckTypeSize(png_uint_32pp,8, 16201, 3, 3.1, NULL, 16200, NULL)
#elif defined __i386__
CheckTypeSize(png_uint_32pp,4, 16201, 2, 3.1, NULL, 16200, NULL)
#else
Msg("Find size of png_uint_32pp (16201)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,16200,NULL);\n",architecture,16201,0);
#endif

#if defined __s390x__
CheckTypeSize(png_zcharpp,8, 16203, 12, 3.1, NULL, 16202, NULL)
#elif defined __x86_64__
CheckTypeSize(png_zcharpp,8, 16203, 11, 3.1, NULL, 16202, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_zcharpp,4, 16203, 10, 3.1, NULL, 16202, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_zcharpp,8, 16203, 9, 3.1, NULL, 16202, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_zcharpp,4, 16203, 6, 3.1, NULL, 16202, NULL)
#elif defined __ia64__
CheckTypeSize(png_zcharpp,8, 16203, 3, 3.1, NULL, 16202, NULL)
#elif defined __i386__
CheckTypeSize(png_zcharpp,4, 16203, 2, 3.1, NULL, 16202, NULL)
#else
Msg("Find size of png_zcharpp (16203)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,16202,NULL);\n",architecture,16203,0);
#endif

#if defined __s390x__
CheckTypeSize(png_charppp,8, 16205, 12, 3.1, NULL, 33052, NULL)
#elif defined __x86_64__
CheckTypeSize(png_charppp,8, 16205, 11, 3.1, NULL, 33052, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_charppp,4, 16205, 10, 3.1, NULL, 33052, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_charppp,8, 16205, 9, 3.1, NULL, 33052, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_charppp,4, 16205, 6, 3.1, NULL, 33052, NULL)
#elif defined __ia64__
CheckTypeSize(png_charppp,8, 16205, 3, 3.1, NULL, 33052, NULL)
#elif defined __i386__
CheckTypeSize(png_charppp,4, 16205, 2, 3.1, NULL, 33052, NULL)
#else
Msg("Find size of png_charppp (16205)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,33052,NULL);\n",architecture,16205,0);
#endif

#if defined __s390x__
CheckTypeSize(png_const_charpp,8, 16207, 12, 3.1, NULL, 10448, NULL)
#elif defined __x86_64__
CheckTypeSize(png_const_charpp,8, 16207, 11, 3.1, NULL, 10448, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_const_charpp,4, 16207, 10, 3.1, NULL, 10448, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_const_charpp,8, 16207, 9, 3.1, NULL, 10448, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_const_charpp,4, 16207, 6, 3.1, NULL, 10448, NULL)
#elif defined __ia64__
CheckTypeSize(png_const_charpp,8, 16207, 3, 3.1, NULL, 10448, NULL)
#elif defined __i386__
CheckTypeSize(png_const_charpp,4, 16207, 2, 3.1, NULL, 10448, NULL)
#else
Msg("Find size of png_const_charpp (16207)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,10448,NULL);\n",architecture,16207,0);
#endif

#if defined __s390x__
CheckTypeSize(png_doublepp,8, 16209, 12, 3.1, NULL, 16208, NULL)
#elif defined __x86_64__
CheckTypeSize(png_doublepp,8, 16209, 11, 3.1, NULL, 16208, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_doublepp,4, 16209, 10, 3.1, NULL, 16208, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_doublepp,8, 16209, 9, 3.1, NULL, 16208, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_doublepp,4, 16209, 6, 3.1, NULL, 16208, NULL)
#elif defined __ia64__
CheckTypeSize(png_doublepp,8, 16209, 3, 3.1, NULL, 16208, NULL)
#elif defined __i386__
CheckTypeSize(png_doublepp,4, 16209, 2, 3.1, NULL, 16208, NULL)
#else
Msg("Find size of png_doublepp (16209)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,16208,NULL);\n",architecture,16209,0);
#endif

#if defined __s390x__
CheckTypeSize(png_colorpp,8, 16210, 12, 3.1, NULL, 11219, NULL)
#elif defined __x86_64__
CheckTypeSize(png_colorpp,8, 16210, 11, 3.1, NULL, 11219, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_colorpp,4, 16210, 10, 3.1, NULL, 11219, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_colorpp,8, 16210, 9, 3.1, NULL, 11219, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_colorpp,4, 16210, 6, 3.1, NULL, 11219, NULL)
#elif defined __ia64__
CheckTypeSize(png_colorpp,8, 16210, 3, 3.1, NULL, 11219, NULL)
#elif defined __i386__
CheckTypeSize(png_colorpp,4, 16210, 2, 3.1, NULL, 11219, NULL)
#else
Msg("Find size of png_colorpp (16210)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11219,NULL);\n",architecture,16210,0);
#endif

#if defined __s390x__
CheckTypeSize(png_color_16pp,8, 16211, 12, 3.1, NULL, 11232, NULL)
#elif defined __x86_64__
CheckTypeSize(png_color_16pp,8, 16211, 11, 3.1, NULL, 11232, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_color_16pp,4, 16211, 10, 3.1, NULL, 11232, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_color_16pp,8, 16211, 9, 3.1, NULL, 11232, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_color_16pp,4, 16211, 6, 3.1, NULL, 11232, NULL)
#elif defined __ia64__
CheckTypeSize(png_color_16pp,8, 16211, 3, 3.1, NULL, 11232, NULL)
#elif defined __i386__
CheckTypeSize(png_color_16pp,4, 16211, 2, 3.1, NULL, 11232, NULL)
#else
Msg("Find size of png_color_16pp (16211)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11232,NULL);\n",architecture,16211,0);
#endif

#if defined __s390x__
CheckTypeSize(png_color_8pp,8, 16212, 12, 3.1, NULL, 11197, NULL)
#elif defined __x86_64__
CheckTypeSize(png_color_8pp,8, 16212, 11, 3.1, NULL, 11197, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_color_8pp,4, 16212, 10, 3.1, NULL, 11197, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_color_8pp,8, 16212, 9, 3.1, NULL, 11197, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_color_8pp,4, 16212, 6, 3.1, NULL, 11197, NULL)
#elif defined __ia64__
CheckTypeSize(png_color_8pp,8, 16212, 3, 3.1, NULL, 11197, NULL)
#elif defined __i386__
CheckTypeSize(png_color_8pp,4, 16212, 2, 3.1, NULL, 11197, NULL)
#else
Msg("Find size of png_color_8pp (16212)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11197,NULL);\n",architecture,16212,0);
#endif

#if defined __s390x__
CheckTypeSize(png_fixed_point_pp,8, 16214, 12, 3.1, NULL, 16213, NULL)
#elif defined __x86_64__
CheckTypeSize(png_fixed_point_pp,8, 16214, 11, 3.1, NULL, 16213, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_fixed_point_pp,4, 16214, 10, 3.1, NULL, 16213, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_fixed_point_pp,8, 16214, 9, 3.1, NULL, 16213, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_fixed_point_pp,4, 16214, 6, 3.1, NULL, 16213, NULL)
#elif defined __ia64__
CheckTypeSize(png_fixed_point_pp,8, 16214, 3, 3.1, NULL, 16213, NULL)
#elif defined __i386__
CheckTypeSize(png_fixed_point_pp,4, 16214, 2, 3.1, NULL, 16213, NULL)
#else
Msg("Find size of png_fixed_point_pp (16214)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,16213,NULL);\n",architecture,16214,0);
#endif

#if defined __s390x__
CheckTypeSize(png_row_infopp,8, 16216, 12, 3.1, NULL, 16215, NULL)
#elif defined __x86_64__
CheckTypeSize(png_row_infopp,8, 16216, 11, 3.1, NULL, 16215, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_row_infopp,4, 16216, 10, 3.1, NULL, 16215, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_row_infopp,8, 16216, 9, 3.1, NULL, 16215, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_row_infopp,4, 16216, 6, 3.1, NULL, 16215, NULL)
#elif defined __ia64__
CheckTypeSize(png_row_infopp,8, 16216, 3, 3.1, NULL, 16215, NULL)
#elif defined __i386__
CheckTypeSize(png_row_infopp,4, 16216, 2, 3.1, NULL, 16215, NULL)
#else
Msg("Find size of png_row_infopp (16216)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,16215,NULL);\n",architecture,16216,0);
#endif

#if defined __s390x__
CheckTypeSize(png_textpp,8, 16217, 12, 3.1, NULL, 11203, NULL)
#elif defined __x86_64__
CheckTypeSize(png_textpp,8, 16217, 11, 3.1, NULL, 11203, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_textpp,4, 16217, 10, 3.1, NULL, 11203, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_textpp,8, 16217, 9, 3.1, NULL, 11203, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_textpp,4, 16217, 6, 3.1, NULL, 11203, NULL)
#elif defined __ia64__
CheckTypeSize(png_textpp,8, 16217, 3, 3.1, NULL, 11203, NULL)
#elif defined __i386__
CheckTypeSize(png_textpp,4, 16217, 2, 3.1, NULL, 11203, NULL)
#else
Msg("Find size of png_textpp (16217)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11203,NULL);\n",architecture,16217,0);
#endif

#if defined __s390x__
CheckTypeSize(png_timepp,8, 16218, 12, 3.1, NULL, 11229, NULL)
#elif defined __x86_64__
CheckTypeSize(png_timepp,8, 16218, 11, 3.1, NULL, 11229, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_timepp,4, 16218, 10, 3.1, NULL, 11229, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_timepp,8, 16218, 9, 3.1, NULL, 11229, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_timepp,4, 16218, 6, 3.1, NULL, 11229, NULL)
#elif defined __ia64__
CheckTypeSize(png_timepp,8, 16218, 3, 3.1, NULL, 11229, NULL)
#elif defined __i386__
CheckTypeSize(png_timepp,4, 16218, 2, 3.1, NULL, 11229, NULL)
#else
Msg("Find size of png_timepp (16218)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11229,NULL);\n",architecture,16218,0);
#endif

#if defined __s390x__
CheckTypeSize(png_user_transform_ptr,8, 32208, 12, 3.1, NULL, 1108, NULL)
#elif defined __x86_64__
CheckTypeSize(png_user_transform_ptr,8, 32208, 11, 3.1, NULL, 1108, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_user_transform_ptr,4, 32208, 10, 3.1, NULL, 1108, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_user_transform_ptr,8, 32208, 9, 3.1, NULL, 1108, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_user_transform_ptr,4, 32208, 6, 3.1, NULL, 1108, NULL)
#elif defined __ia64__
CheckTypeSize(png_user_transform_ptr,8, 32208, 3, 3.1, NULL, 1108, NULL)
#elif defined __i386__
CheckTypeSize(png_user_transform_ptr,4, 32208, 2, 3.1, NULL, 1108, NULL)
#else
Msg("Find size of png_user_transform_ptr (32208)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,1108,NULL);\n",architecture,32208,0);
#endif

#if defined __s390x__
CheckTypeSize(png_read_status_ptr,8, 32209, 12, 3.1, NULL, 1110, NULL)
#elif defined __x86_64__
CheckTypeSize(png_read_status_ptr,8, 32209, 11, 3.1, NULL, 1110, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_read_status_ptr,4, 32209, 10, 3.1, NULL, 1110, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_read_status_ptr,8, 32209, 9, 3.1, NULL, 1110, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_read_status_ptr,4, 32209, 6, 3.1, NULL, 1110, NULL)
#elif defined __ia64__
CheckTypeSize(png_read_status_ptr,8, 32209, 3, 3.1, NULL, 1110, NULL)
#elif defined __i386__
CheckTypeSize(png_read_status_ptr,4, 32209, 2, 3.1, NULL, 1110, NULL)
#else
Msg("Find size of png_read_status_ptr (32209)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,1110,NULL);\n",architecture,32209,0);
#endif

#if defined __s390x__
CheckTypeSize(png_write_status_ptr,8, 32210, 12, 3.1, NULL, 1110, NULL)
#elif defined __x86_64__
CheckTypeSize(png_write_status_ptr,8, 32210, 11, 3.1, NULL, 1110, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_write_status_ptr,4, 32210, 10, 3.1, NULL, 1110, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_write_status_ptr,8, 32210, 9, 3.1, NULL, 1110, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_write_status_ptr,4, 32210, 6, 3.1, NULL, 1110, NULL)
#elif defined __ia64__
CheckTypeSize(png_write_status_ptr,8, 32210, 3, 3.1, NULL, 1110, NULL)
#elif defined __i386__
CheckTypeSize(png_write_status_ptr,4, 32210, 2, 3.1, NULL, 1110, NULL)
#else
Msg("Find size of png_write_status_ptr (32210)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,1110,NULL);\n",architecture,32210,0);
#endif

#if defined __s390x__
CheckTypeSize(png_user_chunk_ptr,8, 32211, 12, 3.1, NULL, 1114, NULL)
#elif defined __x86_64__
CheckTypeSize(png_user_chunk_ptr,8, 32211, 11, 3.1, NULL, 1114, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_user_chunk_ptr,4, 32211, 10, 3.1, NULL, 1114, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_user_chunk_ptr,8, 32211, 9, 3.1, NULL, 1114, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_user_chunk_ptr,4, 32211, 6, 3.1, NULL, 1114, NULL)
#elif defined __ia64__
CheckTypeSize(png_user_chunk_ptr,8, 32211, 3, 3.1, NULL, 1114, NULL)
#elif defined __i386__
CheckTypeSize(png_user_chunk_ptr,4, 32211, 2, 3.1, NULL, 1114, NULL)
#else
Msg("Find size of png_user_chunk_ptr (32211)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,1114,NULL);\n",architecture,32211,0);
#endif

#if defined __s390x__
CheckTypeSize(png_malloc_ptr,8, 32212, 12, 3.1, NULL, 1116, NULL)
#elif defined __x86_64__
CheckTypeSize(png_malloc_ptr,8, 32212, 11, 3.1, NULL, 1116, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_malloc_ptr,4, 32212, 10, 3.1, NULL, 1116, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_malloc_ptr,8, 32212, 9, 3.1, NULL, 1116, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_malloc_ptr,4, 32212, 6, 3.1, NULL, 1116, NULL)
#elif defined __ia64__
CheckTypeSize(png_malloc_ptr,8, 32212, 3, 3.1, NULL, 1116, NULL)
#elif defined __i386__
CheckTypeSize(png_malloc_ptr,4, 32212, 2, 3.1, NULL, 1116, NULL)
#else
Msg("Find size of png_malloc_ptr (32212)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,1116,NULL);\n",architecture,32212,0);
#endif

#if defined __s390x__
CheckTypeSize(png_free_ptr,8, 32213, 12, 3.1, NULL, 1118, NULL)
#elif defined __x86_64__
CheckTypeSize(png_free_ptr,8, 32213, 11, 3.1, NULL, 1118, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(png_free_ptr,4, 32213, 10, 3.1, NULL, 1118, NULL)
#elif defined __powerpc64__
CheckTypeSize(png_free_ptr,8, 32213, 9, 3.1, NULL, 1118, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(png_free_ptr,4, 32213, 6, 3.1, NULL, 1118, NULL)
#elif defined __ia64__
CheckTypeSize(png_free_ptr,8, 32213, 3, 3.1, NULL, 1118, NULL)
#elif defined __i386__
CheckTypeSize(png_free_ptr,4, 32213, 2, 3.1, NULL, 1118, NULL)
#else
Msg("Find size of png_free_ptr (32213)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,1118, NULL);\n",architecture,32213,0);
#endif

#if defined __s390x__
/* S390X */
typedef void (*png_progressive_info_ptr_db)(png_structp, png_infop);
CheckFunctionTypedef(png_progressive_info_ptr,png_progressive_info_ptr_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*png_progressive_info_ptr_db)(png_structp, png_infop);
CheckFunctionTypedef(png_progressive_info_ptr,png_progressive_info_ptr_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*png_progressive_info_ptr_db)(png_structp, png_infop);
CheckFunctionTypedef(png_progressive_info_ptr,png_progressive_info_ptr_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*png_progressive_info_ptr_db)(png_structp, png_infop);
CheckFunctionTypedef(png_progressive_info_ptr,png_progressive_info_ptr_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*png_progressive_info_ptr_db)(png_structp, png_infop);
CheckFunctionTypedef(png_progressive_info_ptr,png_progressive_info_ptr_db);
#elif defined __ia64__
/* IA64 */
typedef void (*png_progressive_info_ptr_db)(png_structp, png_infop);
CheckFunctionTypedef(png_progressive_info_ptr,png_progressive_info_ptr_db);
#elif defined __i386__
/* IA32 */
typedef void (*png_progressive_info_ptr_db)(png_structp, png_infop);
CheckFunctionTypedef(png_progressive_info_ptr,png_progressive_info_ptr_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*png_progressive_row_ptr_db)(png_structp, png_bytep, png_uint_32, int);
CheckFunctionTypedef(png_progressive_row_ptr,png_progressive_row_ptr_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*png_progressive_row_ptr_db)(png_structp, png_bytep, png_uint_32, int);
CheckFunctionTypedef(png_progressive_row_ptr,png_progressive_row_ptr_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*png_progressive_row_ptr_db)(png_structp, png_bytep, png_uint_32, int);
CheckFunctionTypedef(png_progressive_row_ptr,png_progressive_row_ptr_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*png_progressive_row_ptr_db)(png_structp, png_bytep, png_uint_32, int);
CheckFunctionTypedef(png_progressive_row_ptr,png_progressive_row_ptr_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*png_progressive_row_ptr_db)(png_structp, png_bytep, png_uint_32, int);
CheckFunctionTypedef(png_progressive_row_ptr,png_progressive_row_ptr_db);
#elif defined __ia64__
/* IA64 */
typedef void (*png_progressive_row_ptr_db)(png_structp, png_bytep, png_uint_32, int);
CheckFunctionTypedef(png_progressive_row_ptr,png_progressive_row_ptr_db);
#elif defined __i386__
/* IA32 */
typedef void (*png_progressive_row_ptr_db)(png_structp, png_bytep, png_uint_32, int);
CheckFunctionTypedef(png_progressive_row_ptr,png_progressive_row_ptr_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*png_progressive_end_ptr_db)(png_structp, png_infop);
CheckFunctionTypedef(png_progressive_end_ptr,png_progressive_end_ptr_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*png_progressive_end_ptr_db)(png_structp, png_infop);
CheckFunctionTypedef(png_progressive_end_ptr,png_progressive_end_ptr_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*png_progressive_end_ptr_db)(png_structp, png_infop);
CheckFunctionTypedef(png_progressive_end_ptr,png_progressive_end_ptr_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*png_progressive_end_ptr_db)(png_structp, png_infop);
CheckFunctionTypedef(png_progressive_end_ptr,png_progressive_end_ptr_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*png_progressive_end_ptr_db)(png_structp, png_infop);
CheckFunctionTypedef(png_progressive_end_ptr,png_progressive_end_ptr_db);
#elif defined __ia64__
/* IA64 */
typedef void (*png_progressive_end_ptr_db)(png_structp, png_infop);
CheckFunctionTypedef(png_progressive_end_ptr,png_progressive_end_ptr_db);
#elif defined __i386__
/* IA32 */
typedef void (*png_progressive_end_ptr_db)(png_structp, png_infop);
CheckFunctionTypedef(png_progressive_end_ptr,png_progressive_end_ptr_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*png_error_ptr_db)(png_structp, png_const_charp);
CheckFunctionTypedef(png_error_ptr,png_error_ptr_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*png_error_ptr_db)(png_structp, png_const_charp);
CheckFunctionTypedef(png_error_ptr,png_error_ptr_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*png_error_ptr_db)(png_structp, png_const_charp);
CheckFunctionTypedef(png_error_ptr,png_error_ptr_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*png_error_ptr_db)(png_structp, png_const_charp);
CheckFunctionTypedef(png_error_ptr,png_error_ptr_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*png_error_ptr_db)(png_structp, png_const_charp);
CheckFunctionTypedef(png_error_ptr,png_error_ptr_db);
#elif defined __ia64__
/* IA64 */
typedef void (*png_error_ptr_db)(png_structp, png_const_charp);
CheckFunctionTypedef(png_error_ptr,png_error_ptr_db);
#elif defined __i386__
/* IA32 */
typedef void (*png_error_ptr_db)(png_structp, png_const_charp);
CheckFunctionTypedef(png_error_ptr,png_error_ptr_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*png_rw_ptr_db)(png_structp, png_bytep, png_size_t);
CheckFunctionTypedef(png_rw_ptr,png_rw_ptr_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*png_rw_ptr_db)(png_structp, png_bytep, png_size_t);
CheckFunctionTypedef(png_rw_ptr,png_rw_ptr_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*png_rw_ptr_db)(png_structp, png_bytep, png_size_t);
CheckFunctionTypedef(png_rw_ptr,png_rw_ptr_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*png_rw_ptr_db)(png_structp, png_bytep, png_size_t);
CheckFunctionTypedef(png_rw_ptr,png_rw_ptr_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*png_rw_ptr_db)(png_structp, png_bytep, png_size_t);
CheckFunctionTypedef(png_rw_ptr,png_rw_ptr_db);
#elif defined __ia64__
/* IA64 */
typedef void (*png_rw_ptr_db)(png_structp, png_bytep, png_size_t);
CheckFunctionTypedef(png_rw_ptr,png_rw_ptr_db);
#elif defined __i386__
/* IA32 */
typedef void (*png_rw_ptr_db)(png_structp, png_bytep, png_size_t);
CheckFunctionTypedef(png_rw_ptr,png_rw_ptr_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*png_flush_ptr_db)(png_structp);
CheckFunctionTypedef(png_flush_ptr,png_flush_ptr_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*png_flush_ptr_db)(png_structp);
CheckFunctionTypedef(png_flush_ptr,png_flush_ptr_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*png_flush_ptr_db)(png_structp);
CheckFunctionTypedef(png_flush_ptr,png_flush_ptr_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*png_flush_ptr_db)(png_structp);
CheckFunctionTypedef(png_flush_ptr,png_flush_ptr_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*png_flush_ptr_db)(png_structp);
CheckFunctionTypedef(png_flush_ptr,png_flush_ptr_db);
#elif defined __ia64__
/* IA64 */
typedef void (*png_flush_ptr_db)(png_structp);
CheckFunctionTypedef(png_flush_ptr,png_flush_ptr_db);
#elif defined __i386__
/* IA32 */
typedef void (*png_flush_ptr_db)(png_structp);
CheckFunctionTypedef(png_flush_ptr,png_flush_ptr_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*png_user_transform_ptr_db)(png_structp, png_row_infop, png_bytep);
CheckFunctionTypedef(png_user_transform_ptr,png_user_transform_ptr_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*png_user_transform_ptr_db)(png_structp, png_row_infop, png_bytep);
CheckFunctionTypedef(png_user_transform_ptr,png_user_transform_ptr_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*png_user_transform_ptr_db)(png_structp, png_row_infop, png_bytep);
CheckFunctionTypedef(png_user_transform_ptr,png_user_transform_ptr_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*png_user_transform_ptr_db)(png_structp, png_row_infop, png_bytep);
CheckFunctionTypedef(png_user_transform_ptr,png_user_transform_ptr_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*png_user_transform_ptr_db)(png_structp, png_row_infop, png_bytep);
CheckFunctionTypedef(png_user_transform_ptr,png_user_transform_ptr_db);
#elif defined __ia64__
/* IA64 */
typedef void (*png_user_transform_ptr_db)(png_structp, png_row_infop, png_bytep);
CheckFunctionTypedef(png_user_transform_ptr,png_user_transform_ptr_db);
#elif defined __i386__
/* IA32 */
typedef void (*png_user_transform_ptr_db)(png_structp, png_row_infop, png_bytep);
CheckFunctionTypedef(png_user_transform_ptr,png_user_transform_ptr_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*png_read_status_ptr_db)(png_structp, png_uint_32, int);
CheckFunctionTypedef(png_read_status_ptr,png_read_status_ptr_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*png_read_status_ptr_db)(png_structp, png_uint_32, int);
CheckFunctionTypedef(png_read_status_ptr,png_read_status_ptr_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*png_read_status_ptr_db)(png_structp, png_uint_32, int);
CheckFunctionTypedef(png_read_status_ptr,png_read_status_ptr_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*png_read_status_ptr_db)(png_structp, png_uint_32, int);
CheckFunctionTypedef(png_read_status_ptr,png_read_status_ptr_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*png_read_status_ptr_db)(png_structp, png_uint_32, int);
CheckFunctionTypedef(png_read_status_ptr,png_read_status_ptr_db);
#elif defined __ia64__
/* IA64 */
typedef void (*png_read_status_ptr_db)(png_structp, png_uint_32, int);
CheckFunctionTypedef(png_read_status_ptr,png_read_status_ptr_db);
#elif defined __i386__
/* IA32 */
typedef void (*png_read_status_ptr_db)(png_structp, png_uint_32, int);
CheckFunctionTypedef(png_read_status_ptr,png_read_status_ptr_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*png_write_status_ptr_db)(png_structp, png_uint_32, int);
CheckFunctionTypedef(png_write_status_ptr,png_write_status_ptr_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*png_write_status_ptr_db)(png_structp, png_uint_32, int);
CheckFunctionTypedef(png_write_status_ptr,png_write_status_ptr_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*png_write_status_ptr_db)(png_structp, png_uint_32, int);
CheckFunctionTypedef(png_write_status_ptr,png_write_status_ptr_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*png_write_status_ptr_db)(png_structp, png_uint_32, int);
CheckFunctionTypedef(png_write_status_ptr,png_write_status_ptr_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*png_write_status_ptr_db)(png_structp, png_uint_32, int);
CheckFunctionTypedef(png_write_status_ptr,png_write_status_ptr_db);
#elif defined __ia64__
/* IA64 */
typedef void (*png_write_status_ptr_db)(png_structp, png_uint_32, int);
CheckFunctionTypedef(png_write_status_ptr,png_write_status_ptr_db);
#elif defined __i386__
/* IA32 */
typedef void (*png_write_status_ptr_db)(png_structp, png_uint_32, int);
CheckFunctionTypedef(png_write_status_ptr,png_write_status_ptr_db);
#endif

#if defined __s390x__
/* S390X */
typedef int (*png_user_chunk_ptr_db)(png_structp, png_unknown_chunkp);
CheckFunctionTypedef(png_user_chunk_ptr,png_user_chunk_ptr_db);
#elif defined __x86_64__
/* x86-64 */
typedef int (*png_user_chunk_ptr_db)(png_structp, png_unknown_chunkp);
CheckFunctionTypedef(png_user_chunk_ptr,png_user_chunk_ptr_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef int (*png_user_chunk_ptr_db)(png_structp, png_unknown_chunkp);
CheckFunctionTypedef(png_user_chunk_ptr,png_user_chunk_ptr_db);
#elif defined __powerpc64__
/* PPC64 */
typedef int (*png_user_chunk_ptr_db)(png_structp, png_unknown_chunkp);
CheckFunctionTypedef(png_user_chunk_ptr,png_user_chunk_ptr_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef int (*png_user_chunk_ptr_db)(png_structp, png_unknown_chunkp);
CheckFunctionTypedef(png_user_chunk_ptr,png_user_chunk_ptr_db);
#elif defined __ia64__
/* IA64 */
typedef int (*png_user_chunk_ptr_db)(png_structp, png_unknown_chunkp);
CheckFunctionTypedef(png_user_chunk_ptr,png_user_chunk_ptr_db);
#elif defined __i386__
/* IA32 */
typedef int (*png_user_chunk_ptr_db)(png_structp, png_unknown_chunkp);
CheckFunctionTypedef(png_user_chunk_ptr,png_user_chunk_ptr_db);
#endif

#if defined __s390x__
/* S390X */
typedef png_voidp (*png_malloc_ptr_db)(png_structp, png_size_t);
CheckFunctionTypedef(png_malloc_ptr,png_malloc_ptr_db);
#elif defined __x86_64__
/* x86-64 */
typedef png_voidp (*png_malloc_ptr_db)(png_structp, png_size_t);
CheckFunctionTypedef(png_malloc_ptr,png_malloc_ptr_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef png_voidp (*png_malloc_ptr_db)(png_structp, png_size_t);
CheckFunctionTypedef(png_malloc_ptr,png_malloc_ptr_db);
#elif defined __powerpc64__
/* PPC64 */
typedef png_voidp (*png_malloc_ptr_db)(png_structp, png_size_t);
CheckFunctionTypedef(png_malloc_ptr,png_malloc_ptr_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef png_voidp (*png_malloc_ptr_db)(png_structp, png_size_t);
CheckFunctionTypedef(png_malloc_ptr,png_malloc_ptr_db);
#elif defined __ia64__
/* IA64 */
typedef png_voidp (*png_malloc_ptr_db)(png_structp, png_size_t);
CheckFunctionTypedef(png_malloc_ptr,png_malloc_ptr_db);
#elif defined __i386__
/* IA32 */
typedef png_voidp (*png_malloc_ptr_db)(png_structp, png_size_t);
CheckFunctionTypedef(png_malloc_ptr,png_malloc_ptr_db);
#elif defined __s390x__
/* S390X */
typedef void (*png_free_ptr_db)(png_structp, png_voidp);
CheckFunctionTypedef(png_free_ptr,png_free_ptr_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*png_free_ptr_db)(png_structp, png_voidp);
CheckFunctionTypedef(png_free_ptr,png_free_ptr_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*png_free_ptr_db)(png_structp, png_voidp);
CheckFunctionTypedef(png_free_ptr,png_free_ptr_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*png_free_ptr_db)(png_structp, png_voidp);
CheckFunctionTypedef(png_free_ptr,png_free_ptr_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*png_free_ptr_db)(png_structp, png_voidp);
CheckFunctionTypedef(png_free_ptr,png_free_ptr_db);
#elif defined __ia64__
/* IA64 */
typedef void (*png_free_ptr_db)(png_structp, png_voidp);
CheckFunctionTypedef(png_free_ptr,png_free_ptr_db);
#elif defined __i386__
/* IA32 */
typedef void (*png_free_ptr_db)(png_structp, png_voidp);
CheckFunctionTypedef(png_free_ptr,png_free_ptr_db);
#endif

extern void png_set_gAMA_db(png_structp, png_infop, double);
CheckInterfacedef(png_set_gAMA,png_set_gAMA_db);
extern void png_set_progressive_read_fn_db(png_structp, png_voidp, png_progressive_info_ptr, png_progressive_row_ptr, png_progressive_end_ptr);
CheckInterfacedef(png_set_progressive_read_fn,png_set_progressive_read_fn_db);
extern void png_set_shift_db(png_structp, png_color_8p);
CheckInterfacedef(png_set_shift,png_set_shift_db);
extern png_byte png_get_interlace_type_db(png_structp, png_infop);
CheckInterfacedef(png_get_interlace_type,png_get_interlace_type_db);
extern void png_read_info_db(png_structp, png_infop);
CheckInterfacedef(png_read_info,png_read_info_db);
extern png_uint_32 png_get_image_height_db(png_structp, png_infop);
CheckInterfacedef(png_get_image_height,png_get_image_height_db);
extern png_int_32 png_get_y_offset_pixels_db(png_structp, png_infop);
CheckInterfacedef(png_get_y_offset_pixels,png_get_y_offset_pixels_db);
extern png_charp png_get_libpng_ver_db(png_structp);
CheckInterfacedef(png_get_libpng_ver,png_get_libpng_ver_db);
extern void png_set_packswap_db(png_structp);
CheckInterfacedef(png_set_packswap,png_set_packswap_db);
extern png_uint_32 png_get_sBIT_db(png_structp, png_infop, png_color_8p *);
CheckInterfacedef(png_get_sBIT,png_get_sBIT_db);
extern void png_process_data_db(png_structp, png_infop, png_bytep, png_size_t);
CheckInterfacedef(png_process_data,png_process_data_db);
extern png_uint_32 png_get_text_db(png_structp, png_infop, png_textp *, int *);
CheckInterfacedef(png_get_text,png_get_text_db);
extern void png_write_rows_db(png_structp, png_bytepp, png_uint_32);
CheckInterfacedef(png_write_rows,png_write_rows_db);
extern png_uint_32 png_access_version_number_db(void);
CheckInterfacedef(png_access_version_number,png_access_version_number_db);
extern png_voidp png_get_progressive_ptr_db(png_structp);
CheckInterfacedef(png_get_progressive_ptr,png_get_progressive_ptr_db);
extern png_uint_32 png_get_rowbytes_db(png_structp, png_infop);
CheckInterfacedef(png_get_rowbytes,png_get_rowbytes_db);
extern void png_write_flush_db(png_structp);
CheckInterfacedef(png_write_flush,png_write_flush_db);
extern void png_set_tRNS_db(png_structp, png_infop, png_bytep, int, png_color_16p);
CheckInterfacedef(png_set_tRNS,png_set_tRNS_db);
extern png_uint_32 png_get_x_pixels_per_meter_db(png_structp, png_infop);
CheckInterfacedef(png_get_x_pixels_per_meter,png_get_x_pixels_per_meter_db);
extern png_int_32 png_get_x_offset_pixels_db(png_structp, png_infop);
CheckInterfacedef(png_get_x_offset_pixels,png_get_x_offset_pixels_db);
extern png_uint_32 png_get_sRGB_db(png_structp, png_infop, int *);
CheckInterfacedef(png_get_sRGB,png_get_sRGB_db);
extern png_byte png_get_color_type_db(png_structp, png_infop);
CheckInterfacedef(png_get_color_type,png_get_color_type_db);
extern png_uint_32 png_get_IHDR_db(png_structp, png_infop, png_uint_32 *, png_uint_32 *, int *, int *, int *, int *, int *);
CheckInterfacedef(png_get_IHDR,png_get_IHDR_db);
extern png_uint_32 png_get_PLTE_db(png_structp, png_infop, png_colorp *, int *);
CheckInterfacedef(png_get_PLTE,png_get_PLTE_db);
extern void png_set_filter_db(png_structp, int, int);
CheckInterfacedef(png_set_filter,png_set_filter_db);
extern png_uint_32 png_get_pHYs_db(png_structp, png_infop, png_uint_32 *, png_uint_32 *, int *);
CheckInterfacedef(png_get_pHYs,png_get_pHYs_db);
extern png_uint_32 png_get_image_width_db(png_structp, png_infop);
CheckInterfacedef(png_get_image_width,png_get_image_width_db);
extern void png_set_strip_16_db(png_structp);
CheckInterfacedef(png_set_strip_16,png_set_strip_16_db);
extern void png_set_bKGD_db(png_structp, png_infop, png_color_16p);
CheckInterfacedef(png_set_bKGD,png_set_bKGD_db);
extern png_uint_32 png_get_y_pixels_per_meter_db(png_structp, png_infop);
CheckInterfacedef(png_get_y_pixels_per_meter,png_get_y_pixels_per_meter_db);
extern void png_write_png_db(png_structp, png_infop, int, voidp);
CheckInterfacedef(png_write_png,png_write_png_db);
extern void png_set_error_fn_db(png_structp, png_voidp, png_error_ptr, png_error_ptr);
CheckInterfacedef(png_set_error_fn,png_set_error_fn_db);
extern void png_set_sBIT_db(png_structp, png_infop, png_color_8p);
CheckInterfacedef(png_set_sBIT,png_set_sBIT_db);
extern void png_error_db(png_structp, png_const_charp);
CheckInterfacedef(png_error,png_error_db);
extern void png_set_read_fn_db(png_structp, png_voidp, png_rw_ptr);
CheckInterfacedef(png_set_read_fn,png_set_read_fn_db);
extern int png_sig_cmp_db(png_bytep, png_size_t, png_size_t);
CheckInterfacedef(png_sig_cmp,png_sig_cmp_db);
extern png_uint_32 png_get_tIME_db(png_structp, png_infop, png_timep *);
CheckInterfacedef(png_get_tIME,png_get_tIME_db);
extern void png_set_pHYs_db(png_structp, png_infop, png_uint_32, png_uint_32, int);
CheckInterfacedef(png_set_pHYs,png_set_pHYs_db);
extern png_byte png_get_bit_depth_db(png_structp, png_infop);
CheckInterfacedef(png_get_bit_depth,png_get_bit_depth_db);
extern void png_free_db(png_structp, png_voidp);
CheckInterfacedef(png_free,png_free_db);
extern void png_set_rgb_to_gray_db(png_structp, int, double, double);
CheckInterfacedef(png_set_rgb_to_gray,png_set_rgb_to_gray_db);
extern void png_set_hIST_db(png_structp, png_infop, png_uint_16p);
CheckInterfacedef(png_set_hIST,png_set_hIST_db);
extern png_uint_32 png_get_cHRM_db(png_structp, png_infop, double *, double *, double *, double *, double *, double *, double *, double *);
CheckInterfacedef(png_get_cHRM,png_get_cHRM_db);
extern void png_set_filler_db(png_structp, png_uint_32, int);
CheckInterfacedef(png_set_filler,png_set_filler_db);
extern void png_set_text_db(png_structp, png_infop, png_textp, int);
CheckInterfacedef(png_set_text,png_set_text_db);
extern void png_set_cHRM_db(png_structp, png_infop, double, double, double, double, double, double, double, double);
CheckInterfacedef(png_set_cHRM,png_set_cHRM_db);
extern void png_set_gray_to_rgb_db(png_structp);
CheckInterfacedef(png_set_gray_to_rgb,png_set_gray_to_rgb_db);
extern png_uint_32 png_get_bKGD_db(png_structp, png_infop, png_color_16p *);
CheckInterfacedef(png_get_bKGD,png_get_bKGD_db);
extern void png_read_end_db(png_structp, png_infop);
CheckInterfacedef(png_read_end,png_read_end_db);
extern png_byte png_get_channels_db(png_structp, png_infop);
CheckInterfacedef(png_get_channels,png_get_channels_db);
extern void png_warning_db(png_structp, png_const_charp);
CheckInterfacedef(png_warning,png_warning_db);
extern void png_set_write_fn_db(png_structp, png_voidp, png_rw_ptr, png_flush_ptr);
CheckInterfacedef(png_set_write_fn,png_set_write_fn_db);
extern void png_set_tIME_db(png_structp, png_infop, png_timep);
CheckInterfacedef(png_set_tIME,png_set_tIME_db);
extern png_structp png_create_read_struct_db(png_const_charp, png_voidp, png_error_ptr, png_error_ptr);
CheckInterfacedef(png_create_read_struct,png_create_read_struct_db);
extern void png_read_update_info_db(png_structp, png_infop);
CheckInterfacedef(png_read_update_info,png_read_update_info_db);
extern png_infop png_create_info_struct_db(png_structp);
CheckInterfacedef(png_create_info_struct,png_create_info_struct_db);
extern png_uint_32 png_get_hIST_db(png_structp, png_infop, png_uint_16p *);
CheckInterfacedef(png_get_hIST,png_get_hIST_db);
extern void png_set_sRGB_db(png_structp, png_infop, int);
CheckInterfacedef(png_set_sRGB,png_set_sRGB_db);
extern png_uint_32 png_get_iCCP_db(png_structp, png_infop, png_charpp, int *, png_charpp, png_uint_32 *);
CheckInterfacedef(png_get_iCCP,png_get_iCCP_db);
extern png_uint_32 png_get_gAMA_db(png_structp, png_infop, double *);
CheckInterfacedef(png_get_gAMA,png_get_gAMA_db);
extern png_uint_32 png_get_valid_db(png_structp, png_infop, png_uint_32);
CheckInterfacedef(png_get_valid,png_get_valid_db);
extern void png_set_compression_level_db(png_structp, int);
CheckInterfacedef(png_set_compression_level,png_set_compression_level_db);
extern void png_set_packing_db(png_structp);
CheckInterfacedef(png_set_packing,png_set_packing_db);
extern void png_write_image_db(png_structp, png_bytepp);
CheckInterfacedef(png_write_image,png_write_image_db);
extern void png_write_end_db(png_structp, png_infop);
CheckInterfacedef(png_write_end,png_write_end_db);
extern int png_set_interlace_handling_db(png_structp);
CheckInterfacedef(png_set_interlace_handling,png_set_interlace_handling_db);
extern png_bytepp png_get_rows_db(png_structp, png_infop);
CheckInterfacedef(png_get_rows,png_get_rows_db);
extern void png_progressive_combine_row_db(png_structp, png_bytep, png_bytep);
CheckInterfacedef(png_progressive_combine_row,png_progressive_combine_row_db);
extern void png_set_bgr_db(png_structp);
CheckInterfacedef(png_set_bgr,png_set_bgr_db);
extern void png_set_dither_db(png_structp, png_colorp, int, int, png_uint_16p, int);
CheckInterfacedef(png_set_dither,png_set_dither_db);
extern void png_set_rows_db(png_structp, png_infop, png_bytepp);
CheckInterfacedef(png_set_rows,png_set_rows_db);
extern png_voidp png_malloc_db(png_structp, png_uint_32);
CheckInterfacedef(png_malloc,png_malloc_db);
extern void png_write_row_db(png_structp, png_bytep);
CheckInterfacedef(png_write_row,png_write_row_db);
extern void png_set_sig_bytes_db(png_structp, int);
CheckInterfacedef(png_set_sig_bytes,png_set_sig_bytes_db);
extern png_uint_32 png_get_tRNS_db(png_structp, png_infop, png_bytep *, int *, png_color_16p *);
CheckInterfacedef(png_get_tRNS,png_get_tRNS_db);
extern void png_write_chunk_db(png_structp, png_bytep, png_bytep, png_size_t);
CheckInterfacedef(png_write_chunk,png_write_chunk_db);
extern void png_write_info_db(png_structp, png_infop);
CheckInterfacedef(png_write_info,png_write_info_db);
extern void png_set_IHDR_db(png_structp, png_infop, png_uint_32, png_uint_32, int, int, int, int, int);
CheckInterfacedef(png_set_IHDR,png_set_IHDR_db);
extern void png_set_invert_mono_db(png_structp);
CheckInterfacedef(png_set_invert_mono,png_set_invert_mono_db);
extern png_structp png_create_write_struct_db(png_const_charp, png_voidp, png_error_ptr, png_error_ptr);
CheckInterfacedef(png_create_write_struct,png_create_write_struct_db);
extern void png_read_png_db(png_structp, png_infop, int, voidp);
CheckInterfacedef(png_read_png,png_read_png_db);
extern void png_read_rows_db(png_structp, png_bytepp, png_bytepp, png_uint_32);
CheckInterfacedef(png_read_rows,png_read_rows_db);
extern void png_read_row_db(png_structp, png_bytep, png_bytep);
CheckInterfacedef(png_read_row,png_read_row_db);
extern void png_destroy_write_struct_db(png_structpp, png_infopp);
CheckInterfacedef(png_destroy_write_struct,png_destroy_write_struct_db);
extern void png_set_swap_alpha_db(png_structp);
CheckInterfacedef(png_set_swap_alpha,png_set_swap_alpha_db);
extern void png_destroy_read_struct_db(png_structpp, png_infopp, png_infopp);
CheckInterfacedef(png_destroy_read_struct,png_destroy_read_struct_db);
extern png_voidp png_get_io_ptr_db(png_structp);
CheckInterfacedef(png_get_io_ptr,png_get_io_ptr_db);
extern png_uint_32 png_get_oFFs_db(png_structp, png_infop, png_int_32 *, png_int_32 *, int *);
CheckInterfacedef(png_get_oFFs,png_get_oFFs_db);
extern void png_set_strip_alpha_db(png_structp);
CheckInterfacedef(png_set_strip_alpha,png_set_strip_alpha_db);
extern void png_set_background_db(png_structp, png_color_16p, int, int, double);
CheckInterfacedef(png_set_background,png_set_background_db);
extern void png_set_iCCP_db(png_structp, png_infop, png_charp, int, png_charp, png_uint_32);
CheckInterfacedef(png_set_iCCP,png_set_iCCP_db);
extern void png_init_io_db(png_structp, png_FILE_p);
CheckInterfacedef(png_init_io,png_init_io_db);
extern void png_set_PLTE_db(png_structp, png_infop, png_colorp, int);
CheckInterfacedef(png_set_PLTE,png_set_PLTE_db);
extern png_voidp png_get_error_ptr_db(png_structp);
CheckInterfacedef(png_get_error_ptr,png_get_error_ptr_db);
extern void png_set_gamma_db(png_structp, double, double);
CheckInterfacedef(png_set_gamma,png_set_gamma_db);
extern void png_set_swap_db(png_structp);
CheckInterfacedef(png_set_swap,png_set_swap_db);
extern void png_read_image_db(png_structp, png_bytepp);
CheckInterfacedef(png_read_image,png_read_image_db);
extern void png_set_expand_db(png_structp);
CheckInterfacedef(png_set_expand,png_set_expand_db);
extern void png_set_oFFs_db(png_structp, png_infop, png_int_32, png_int_32, int);
CheckInterfacedef(png_set_oFFs,png_set_oFFs_db);
extern void png_set_tRNS_to_alpha_db(png_structp);
CheckInterfacedef(png_set_tRNS_to_alpha,png_set_tRNS_to_alpha_db);
extern void png_set_palette_to_rgb_db(png_structp);
CheckInterfacedef(png_set_palette_to_rgb,png_set_palette_to_rgb_db);
extern void png_set_gray_1_2_4_to_8_db(png_structp);
CheckInterfacedef(png_set_gray_1_2_4_to_8,png_set_gray_1_2_4_to_8_db);
extern int png_check_sig_db(png_bytep, int);
CheckInterfacedef(png_check_sig,png_check_sig_db);
extern void png_destroy_info_struct_db(png_structp, png_infopp);
CheckInterfacedef(png_destroy_info_struct,png_destroy_info_struct_db);
extern png_charp png_get_header_ver_db(png_structp);
CheckInterfacedef(png_get_header_ver,png_get_header_ver_db);
extern png_structp png_create_read_struct_2_db(png_const_charp, png_voidp, png_error_ptr, png_error_ptr, png_voidp, png_malloc_ptr, png_free_ptr);
CheckInterfacedef(png_create_read_struct_2,png_create_read_struct_2_db);
extern png_structp png_create_write_struct_2_db(png_const_charp, png_voidp, png_error_ptr, png_error_ptr, png_voidp, png_malloc_ptr, png_free_ptr);
CheckInterfacedef(png_create_write_struct_2,png_create_write_struct_2_db);
extern png_uint_32 png_get_unknown_chunks_db(png_structp, png_infop, png_unknown_chunkpp);
CheckInterfacedef(png_get_unknown_chunks,png_get_unknown_chunks_db);
extern png_uint_32 png_permit_mng_features_db(png_structp, png_uint_32);
CheckInterfacedef(png_permit_mng_features,png_permit_mng_features_db);
extern png_voidp png_get_user_chunk_ptr_db(png_structp);
CheckInterfacedef(png_get_user_chunk_ptr,png_get_user_chunk_ptr_db);
extern void png_convert_from_struct_tm_db(png_timep, struct tm *);
CheckInterfacedef(png_convert_from_struct_tm,png_convert_from_struct_tm_db);
extern void png_convert_from_time_t_db(png_timep, time_t);
CheckInterfacedef(png_convert_from_time_t,png_convert_from_time_t_db);
extern void png_data_freer_db(png_structp, png_infop, int, png_uint_32);
CheckInterfacedef(png_data_freer,png_data_freer_db);
extern void png_free_data_db(png_structp, png_infop, png_uint_32, int);
CheckInterfacedef(png_free_data,png_free_data_db);
extern void png_info_init_3_db(png_infopp, png_size_t);
CheckInterfacedef(png_info_init_3,png_info_init_3_db);
extern void png_set_compression_buffer_size_db(png_structp, png_uint_32);
CheckInterfacedef(png_set_compression_buffer_size,png_set_compression_buffer_size_db);
extern void png_set_compression_mem_level_db(png_structp, int);
CheckInterfacedef(png_set_compression_mem_level,png_set_compression_mem_level_db);
extern void png_set_compression_method_db(png_structp, int);
CheckInterfacedef(png_set_compression_method,png_set_compression_method_db);
extern void png_set_compression_strategy_db(png_structp, int);
CheckInterfacedef(png_set_compression_strategy,png_set_compression_strategy_db);
extern void png_set_compression_window_bits_db(png_structp, int);
CheckInterfacedef(png_set_compression_window_bits,png_set_compression_window_bits_db);
extern void png_set_invert_alpha_db(png_structp);
CheckInterfacedef(png_set_invert_alpha,png_set_invert_alpha_db);
extern void png_set_keep_unknown_chunks_db(png_structp, int, png_bytep, int);
CheckInterfacedef(png_set_keep_unknown_chunks,png_set_keep_unknown_chunks_db);
extern void png_set_mem_fn_db(png_structp, png_voidp, png_malloc_ptr, png_free_ptr);
CheckInterfacedef(png_set_mem_fn,png_set_mem_fn_db);
extern void png_set_read_user_chunk_fn_db(png_structp, png_voidp, png_user_chunk_ptr);
CheckInterfacedef(png_set_read_user_chunk_fn,png_set_read_user_chunk_fn_db);
extern void png_set_read_user_transform_fn_db(png_structp, png_user_transform_ptr);
CheckInterfacedef(png_set_read_user_transform_fn,png_set_read_user_transform_fn_db);
extern void png_set_sRGB_gAMA_and_cHRM_db(png_structp, png_infop, int);
CheckInterfacedef(png_set_sRGB_gAMA_and_cHRM,png_set_sRGB_gAMA_and_cHRM_db);
extern void png_set_unknown_chunk_location_db(png_structp, png_infop, int, int);
CheckInterfacedef(png_set_unknown_chunk_location,png_set_unknown_chunk_location_db);
extern void png_set_unknown_chunks_db(png_structp, png_infop, png_unknown_chunkp, int);
CheckInterfacedef(png_set_unknown_chunks,png_set_unknown_chunks_db);
extern void png_set_write_status_fn_db(png_structp, png_write_status_ptr);
CheckInterfacedef(png_set_write_status_fn,png_set_write_status_fn_db);
extern void png_set_write_user_transform_fn_db(png_structp, png_user_transform_ptr);
CheckInterfacedef(png_set_write_user_transform_fn,png_set_write_user_transform_fn_db);
extern void png_start_read_image_db(png_structp);
CheckInterfacedef(png_start_read_image,png_start_read_image_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in png.h\n\n",pcnt,cnt);
return cnt;
#endif

}
