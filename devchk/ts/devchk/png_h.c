/*
 * Test of png.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#ifdef LSBCC_MODE	/*XXX hand-edit */
struct png_struct_def{};
struct png_info_struct{};
#endif
#include "png.h"	/*XXX hand-edit */



#ifdef TET_TEST
void png_h()
{
#else
int png_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in png.h\n");
#endif

printf("Checking data structures in png.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef PNG_LIBPNG_VER_STRING
	CompareStringConstant(PNG_LIBPNG_VER_STRING,"1.2.8")
#else
Msg( "Error: Constant not found: PNG_LIBPNG_VER_STRING\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_HEADER_VERSION_STRING
	CompareStringConstant(PNG_HEADER_VERSION_STRING," libpng version 1.2.8 - December 3, 2004 (header)\n")
#else
Msg( "Error: Constant not found: PNG_HEADER_VERSION_STRING\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_LIBPNG_VER_SONUM
	CompareConstant(PNG_LIBPNG_VER_SONUM,0,5417,architecture)
#else
Msg( "Error: Constant not found: PNG_LIBPNG_VER_SONUM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_LIBPNG_VER_DLLNUM
	CompareConstant(PNG_LIBPNG_VER_DLLNUM,13,5418,architecture)
#else
Msg( "Error: Constant not found: PNG_LIBPNG_VER_DLLNUM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_LIBPNG_VER_MAJOR
	CompareConstant(PNG_LIBPNG_VER_MAJOR,1,5419,architecture)
#else
Msg( "Error: Constant not found: PNG_LIBPNG_VER_MAJOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_LIBPNG_VER_MINOR
	CompareConstant(PNG_LIBPNG_VER_MINOR,2,5420,architecture)
#else
Msg( "Error: Constant not found: PNG_LIBPNG_VER_MINOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_LIBPNG_VER_RELEASE
	CompareConstant(PNG_LIBPNG_VER_RELEASE,8,5421,architecture)
#else
Msg( "Error: Constant not found: PNG_LIBPNG_VER_RELEASE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_LIBPNG_VER_BUILD
	CompareConstant(PNG_LIBPNG_VER_BUILD,0,5422,architecture)
#else
Msg( "Error: Constant not found: PNG_LIBPNG_VER_BUILD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_LIBPNG_BUILD_ALPHA
	CompareConstant(PNG_LIBPNG_BUILD_ALPHA,1,5423,architecture)
#else
Msg( "Error: Constant not found: PNG_LIBPNG_BUILD_ALPHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_LIBPNG_BUILD_BETA
	CompareConstant(PNG_LIBPNG_BUILD_BETA,2,5424,architecture)
#else
Msg( "Error: Constant not found: PNG_LIBPNG_BUILD_BETA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_LIBPNG_BUILD_RC
	CompareConstant(PNG_LIBPNG_BUILD_RC,3,5425,architecture)
#else
Msg( "Error: Constant not found: PNG_LIBPNG_BUILD_RC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_LIBPNG_BUILD_STABLE
	CompareConstant(PNG_LIBPNG_BUILD_STABLE,4,5426,architecture)
#else
Msg( "Error: Constant not found: PNG_LIBPNG_BUILD_STABLE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_LIBPNG_BUILD_RELEASE_STATUS_MASK
	CompareConstant(PNG_LIBPNG_BUILD_RELEASE_STATUS_MASK,7,5427,architecture)
#else
Msg( "Error: Constant not found: PNG_LIBPNG_BUILD_RELEASE_STATUS_MASK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_LIBPNG_BUILD_PATCH
	CompareConstant(PNG_LIBPNG_BUILD_PATCH,8,5428,architecture)
#else
Msg( "Error: Constant not found: PNG_LIBPNG_BUILD_PATCH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_LIBPNG_BUILD_PRIVATE
	CompareConstant(PNG_LIBPNG_BUILD_PRIVATE,16,5429,architecture)
#else
Msg( "Error: Constant not found: PNG_LIBPNG_BUILD_PRIVATE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_LIBPNG_BUILD_SPECIAL
	CompareConstant(PNG_LIBPNG_BUILD_SPECIAL,32,5430,architecture)
#else
Msg( "Error: Constant not found: PNG_LIBPNG_BUILD_SPECIAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_LIBPNG_BUILD_BASE_TYPE */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_LIBPNG_VER
	CompareConstant(PNG_LIBPNG_VER,10208,5432,architecture)
#else
Msg( "Error: Constant not found: PNG_LIBPNG_VER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_1_2_X */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_ZBUF_SIZE
	CompareConstant(PNG_ZBUF_SIZE,8192,5434,architecture)
#else
Msg( "Error: Constant not found: PNG_ZBUF_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_READ_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_WRITE_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_MNG_FEATURES_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_FLOATING_POINT_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_CONST */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_NO_READ_iTXt */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_NO_WRITE_iTXt */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_FIXED_POINT_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_FREE_ME_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_READ_TRANSFORMS_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_READ_EXPAND_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_READ_SHIFT_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_READ_PACK_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_READ_BGR_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_READ_SWAP_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_READ_PACKSWAP_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_READ_INVERT_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_READ_DITHER_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_READ_BACKGROUND_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_READ_16_TO_8_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_READ_FILLER_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_READ_GAMMA_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_READ_GRAY_TO_RGB_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_READ_SWAP_ALPHA_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_READ_INVERT_ALPHA_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_READ_STRIP_ALPHA_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_READ_USER_TRANSFORM_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_READ_RGB_TO_GRAY_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_PROGRESSIVE_READ_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_READ_INTERLACING_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_READ_COMPOSITE_NODIV_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_READ_EMPTY_PLTE_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_WRITE_TRANSFORMS_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_WRITE_SHIFT_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_WRITE_PACK_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_WRITE_BGR_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_WRITE_SWAP_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_WRITE_PACKSWAP_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_WRITE_INVERT_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_WRITE_FILLER_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_WRITE_SWAP_ALPHA_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_WRITE_INVERT_ALPHA_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_WRITE_USER_TRANSFORM_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_WRITE_INTERLACING_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_WRITE_WEIGHTED_FILTER_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_WRITE_FLUSH_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_WRITE_EMPTY_PLTE_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_ERROR_NUMBERS_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_USER_TRANSFORM_PTR_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_TIME_RFC1123_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_EASY_ACCESS_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_ASSEMBLER_CODE_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_MMX_CODE_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_USER_MEM_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_SET_USER_LIMITS_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_USER_WIDTH_MAX
	CompareConstant(PNG_USER_WIDTH_MAX,1000000L,5490,architecture)
#else
Msg( "Error: Constant not found: PNG_USER_WIDTH_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_USER_HEIGHT_MAX
	CompareConstant(PNG_USER_HEIGHT_MAX,1000000L,5491,architecture)
#else
Msg( "Error: Constant not found: PNG_USER_HEIGHT_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_READ_ANCILLARY_CHUNKS_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_WRITE_ANCILLARY_CHUNKS_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_READ_bKGD_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_bKGD_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_READ_cHRM_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_cHRM_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_READ_gAMA_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_gAMA_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_READ_hIST_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_hIST_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_READ_iCCP_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_iCCP_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_READ_oFFs_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_oFFs_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_READ_pCAL_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_pCAL_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_READ_sCAL_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_sCAL_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_READ_pHYs_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_pHYs_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_READ_sBIT_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_sBIT_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_READ_sPLT_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_sPLT_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_READ_sRGB_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_sRGB_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_READ_tEXt_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_tEXt_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_READ_tIME_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_tIME_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_READ_tRNS_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_tRNS_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_READ_zTXt_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_zTXt_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_READ_UNKNOWN_CHUNKS_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_UNKNOWN_CHUNKS_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_HANDLE_AS_UNKNOWN_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_READ_USER_CHUNKS_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_USER_CHUNKS_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_READ_OPT_PLTE_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_READ_TEXT_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_TEXT_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_WRITE_bKGD_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_WRITE_cHRM_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_WRITE_gAMA_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_WRITE_hIST_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_WRITE_iCCP_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_WRITE_oFFs_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_WRITE_pCAL_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_WRITE_sCAL_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_WRITE_pHYs_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_WRITE_sBIT_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_WRITE_sPLT_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_WRITE_sRGB_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_WRITE_tEXt_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_WRITE_tIME_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_WRITE_tRNS_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_WRITE_zTXt_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_WRITE_UNKNOWN_CHUNKS_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_WRITE_TEXT_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_INFO_IMAGE_SUPPORTED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for png_sizeof(x) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FARDATA */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_USE_GLOBAL_ARRAYS */
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
	CompareConstant(PNG_TEXT_COMPRESSION_NONE_WR,-3,5586,architecture)
#else
Msg( "Error: Constant not found: PNG_TEXT_COMPRESSION_NONE_WR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_TEXT_COMPRESSION_zTXt_WR
	CompareConstant(PNG_TEXT_COMPRESSION_zTXt_WR,-2,5587,architecture)
#else
Msg( "Error: Constant not found: PNG_TEXT_COMPRESSION_zTXt_WR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_TEXT_COMPRESSION_NONE
	CompareConstant(PNG_TEXT_COMPRESSION_NONE,-1,5588,architecture)
#else
Msg( "Error: Constant not found: PNG_TEXT_COMPRESSION_NONE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_TEXT_COMPRESSION_zTXt
	CompareConstant(PNG_TEXT_COMPRESSION_zTXt,0,5589,architecture)
#else
Msg( "Error: Constant not found: PNG_TEXT_COMPRESSION_zTXt\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_ITXT_COMPRESSION_NONE
	CompareConstant(PNG_ITXT_COMPRESSION_NONE,1,5590,architecture)
#else
Msg( "Error: Constant not found: PNG_ITXT_COMPRESSION_NONE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_ITXT_COMPRESSION_zTXt
	CompareConstant(PNG_ITXT_COMPRESSION_zTXt,2,5591,architecture)
#else
Msg( "Error: Constant not found: PNG_ITXT_COMPRESSION_zTXt\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_TEXT_COMPRESSION_LAST
	CompareConstant(PNG_TEXT_COMPRESSION_LAST,3,5592,architecture)
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
	CompareConstant(PNG_COLOR_MASK_PALETTE,1,5597,architecture)
#else
Msg( "Error: Constant not found: PNG_COLOR_MASK_PALETTE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_COLOR_MASK_COLOR
	CompareConstant(PNG_COLOR_MASK_COLOR,2,5598,architecture)
#else
Msg( "Error: Constant not found: PNG_COLOR_MASK_COLOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_COLOR_MASK_ALPHA
	CompareConstant(PNG_COLOR_MASK_ALPHA,4,5599,architecture)
#else
Msg( "Error: Constant not found: PNG_COLOR_MASK_ALPHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_COLOR_TYPE_GRAY
	CompareConstant(PNG_COLOR_TYPE_GRAY,0,5600,architecture)
#else
Msg( "Error: Constant not found: PNG_COLOR_TYPE_GRAY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_COLOR_TYPE_PALETTE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_COLOR_TYPE_RGB */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_COLOR_TYPE_RGB_ALPHA */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_COLOR_TYPE_GRAY_ALPHA */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_COLOR_TYPE_RGBA */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_COLOR_TYPE_GA */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_COMPRESSION_TYPE_BASE
	CompareConstant(PNG_COMPRESSION_TYPE_BASE,0,5607,architecture)
#else
Msg( "Error: Constant not found: PNG_COMPRESSION_TYPE_BASE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_COMPRESSION_TYPE_DEFAULT */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FILTER_TYPE_BASE
	CompareConstant(PNG_FILTER_TYPE_BASE,0,5609,architecture)
#else
Msg( "Error: Constant not found: PNG_FILTER_TYPE_BASE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_INTRAPIXEL_DIFFERENCING
	CompareConstant(PNG_INTRAPIXEL_DIFFERENCING,64,5610,architecture)
#else
Msg( "Error: Constant not found: PNG_INTRAPIXEL_DIFFERENCING\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_FILTER_TYPE_DEFAULT */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_INTERLACE_NONE
	CompareConstant(PNG_INTERLACE_NONE,0,5612,architecture)
#else
Msg( "Error: Constant not found: PNG_INTERLACE_NONE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_INTERLACE_ADAM7
	CompareConstant(PNG_INTERLACE_ADAM7,1,5613,architecture)
#else
Msg( "Error: Constant not found: PNG_INTERLACE_ADAM7\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_INTERLACE_LAST
	CompareConstant(PNG_INTERLACE_LAST,2,5614,architecture)
#else
Msg( "Error: Constant not found: PNG_INTERLACE_LAST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_OFFSET_PIXEL
	CompareConstant(PNG_OFFSET_PIXEL,0,5615,architecture)
#else
Msg( "Error: Constant not found: PNG_OFFSET_PIXEL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_OFFSET_MICROMETER
	CompareConstant(PNG_OFFSET_MICROMETER,1,5616,architecture)
#else
Msg( "Error: Constant not found: PNG_OFFSET_MICROMETER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_OFFSET_LAST
	CompareConstant(PNG_OFFSET_LAST,2,5617,architecture)
#else
Msg( "Error: Constant not found: PNG_OFFSET_LAST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_EQUATION_LINEAR
	CompareConstant(PNG_EQUATION_LINEAR,0,5618,architecture)
#else
Msg( "Error: Constant not found: PNG_EQUATION_LINEAR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_EQUATION_BASE_E
	CompareConstant(PNG_EQUATION_BASE_E,1,5619,architecture)
#else
Msg( "Error: Constant not found: PNG_EQUATION_BASE_E\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_EQUATION_ARBITRARY
	CompareConstant(PNG_EQUATION_ARBITRARY,2,5620,architecture)
#else
Msg( "Error: Constant not found: PNG_EQUATION_ARBITRARY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_EQUATION_HYPERBOLIC
	CompareConstant(PNG_EQUATION_HYPERBOLIC,3,5621,architecture)
#else
Msg( "Error: Constant not found: PNG_EQUATION_HYPERBOLIC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_EQUATION_LAST
	CompareConstant(PNG_EQUATION_LAST,4,5622,architecture)
#else
Msg( "Error: Constant not found: PNG_EQUATION_LAST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_SCALE_UNKNOWN
	CompareConstant(PNG_SCALE_UNKNOWN,0,5623,architecture)
#else
Msg( "Error: Constant not found: PNG_SCALE_UNKNOWN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_SCALE_METER
	CompareConstant(PNG_SCALE_METER,1,5624,architecture)
#else
Msg( "Error: Constant not found: PNG_SCALE_METER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_SCALE_RADIAN
	CompareConstant(PNG_SCALE_RADIAN,2,5625,architecture)
#else
Msg( "Error: Constant not found: PNG_SCALE_RADIAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_SCALE_LAST
	CompareConstant(PNG_SCALE_LAST,3,5626,architecture)
#else
Msg( "Error: Constant not found: PNG_SCALE_LAST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_RESOLUTION_UNKNOWN
	CompareConstant(PNG_RESOLUTION_UNKNOWN,0,5627,architecture)
#else
Msg( "Error: Constant not found: PNG_RESOLUTION_UNKNOWN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_RESOLUTION_METER
	CompareConstant(PNG_RESOLUTION_METER,1,5628,architecture)
#else
Msg( "Error: Constant not found: PNG_RESOLUTION_METER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_RESOLUTION_LAST
	CompareConstant(PNG_RESOLUTION_LAST,2,5629,architecture)
#else
Msg( "Error: Constant not found: PNG_RESOLUTION_LAST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_sRGB_INTENT_PERCEPTUAL
	CompareConstant(PNG_sRGB_INTENT_PERCEPTUAL,0,5630,architecture)
#else
Msg( "Error: Constant not found: PNG_sRGB_INTENT_PERCEPTUAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_sRGB_INTENT_RELATIVE
	CompareConstant(PNG_sRGB_INTENT_RELATIVE,1,5631,architecture)
#else
Msg( "Error: Constant not found: PNG_sRGB_INTENT_RELATIVE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_sRGB_INTENT_SATURATION
	CompareConstant(PNG_sRGB_INTENT_SATURATION,2,5632,architecture)
#else
Msg( "Error: Constant not found: PNG_sRGB_INTENT_SATURATION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_sRGB_INTENT_ABSOLUTE
	CompareConstant(PNG_sRGB_INTENT_ABSOLUTE,3,5633,architecture)
#else
Msg( "Error: Constant not found: PNG_sRGB_INTENT_ABSOLUTE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_sRGB_INTENT_LAST
	CompareConstant(PNG_sRGB_INTENT_LAST,4,5634,architecture)
#else
Msg( "Error: Constant not found: PNG_sRGB_INTENT_LAST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_KEYWORD_MAX_LENGTH
	CompareConstant(PNG_KEYWORD_MAX_LENGTH,79,5635,architecture)
#else
Msg( "Error: Constant not found: PNG_KEYWORD_MAX_LENGTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_MAX_PALETTE_LENGTH
	CompareConstant(PNG_MAX_PALETTE_LENGTH,256,5636,architecture)
#else
Msg( "Error: Constant not found: PNG_MAX_PALETTE_LENGTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_INFO_gAMA
	CompareConstant(PNG_INFO_gAMA,0x0001,5637,architecture)
#else
Msg( "Error: Constant not found: PNG_INFO_gAMA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_INFO_sBIT
	CompareConstant(PNG_INFO_sBIT,0x0002,5638,architecture)
#else
Msg( "Error: Constant not found: PNG_INFO_sBIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_INFO_cHRM
	CompareConstant(PNG_INFO_cHRM,0x0004,5639,architecture)
#else
Msg( "Error: Constant not found: PNG_INFO_cHRM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_INFO_PLTE
	CompareConstant(PNG_INFO_PLTE,0x0008,5640,architecture)
#else
Msg( "Error: Constant not found: PNG_INFO_PLTE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_INFO_tRNS
	CompareConstant(PNG_INFO_tRNS,0x0010,5641,architecture)
#else
Msg( "Error: Constant not found: PNG_INFO_tRNS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_INFO_bKGD
	CompareConstant(PNG_INFO_bKGD,0x0020,5642,architecture)
#else
Msg( "Error: Constant not found: PNG_INFO_bKGD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_INFO_hIST
	CompareConstant(PNG_INFO_hIST,0x0040,5643,architecture)
#else
Msg( "Error: Constant not found: PNG_INFO_hIST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_INFO_pHYs
	CompareConstant(PNG_INFO_pHYs,0x0080,5644,architecture)
#else
Msg( "Error: Constant not found: PNG_INFO_pHYs\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_INFO_oFFs
	CompareConstant(PNG_INFO_oFFs,0x0100,5645,architecture)
#else
Msg( "Error: Constant not found: PNG_INFO_oFFs\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_INFO_tIME
	CompareConstant(PNG_INFO_tIME,0x0200,5646,architecture)
#else
Msg( "Error: Constant not found: PNG_INFO_tIME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_INFO_pCAL
	CompareConstant(PNG_INFO_pCAL,0x0400,5647,architecture)
#else
Msg( "Error: Constant not found: PNG_INFO_pCAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_INFO_sRGB
	CompareConstant(PNG_INFO_sRGB,0x0800,5648,architecture)
#else
Msg( "Error: Constant not found: PNG_INFO_sRGB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_INFO_iCCP
	CompareConstant(PNG_INFO_iCCP,0x1000,5649,architecture)
#else
Msg( "Error: Constant not found: PNG_INFO_iCCP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_INFO_sPLT
	CompareConstant(PNG_INFO_sPLT,0x2000,5650,architecture)
#else
Msg( "Error: Constant not found: PNG_INFO_sPLT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_INFO_sCAL
	CompareConstant(PNG_INFO_sCAL,0x4000,5651,architecture)
#else
Msg( "Error: Constant not found: PNG_INFO_sCAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_INFO_IDAT
	CompareConstant(PNG_INFO_IDAT,0x8000L,5652,architecture)
#else
Msg( "Error: Constant not found: PNG_INFO_IDAT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_TRANSFORM_IDENTITY
	CompareConstant(PNG_TRANSFORM_IDENTITY,0x0000,5653,architecture)
#else
Msg( "Error: Constant not found: PNG_TRANSFORM_IDENTITY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_TRANSFORM_STRIP_16
	CompareConstant(PNG_TRANSFORM_STRIP_16,0x0001,5654,architecture)
#else
Msg( "Error: Constant not found: PNG_TRANSFORM_STRIP_16\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_TRANSFORM_STRIP_ALPHA
	CompareConstant(PNG_TRANSFORM_STRIP_ALPHA,0x0002,5655,architecture)
#else
Msg( "Error: Constant not found: PNG_TRANSFORM_STRIP_ALPHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_TRANSFORM_PACKING
	CompareConstant(PNG_TRANSFORM_PACKING,0x0004,5656,architecture)
#else
Msg( "Error: Constant not found: PNG_TRANSFORM_PACKING\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_TRANSFORM_PACKSWAP
	CompareConstant(PNG_TRANSFORM_PACKSWAP,0x0008,5657,architecture)
#else
Msg( "Error: Constant not found: PNG_TRANSFORM_PACKSWAP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_TRANSFORM_EXPAND
	CompareConstant(PNG_TRANSFORM_EXPAND,0x0010,5658,architecture)
#else
Msg( "Error: Constant not found: PNG_TRANSFORM_EXPAND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_TRANSFORM_INVERT_MONO
	CompareConstant(PNG_TRANSFORM_INVERT_MONO,0x0020,5659,architecture)
#else
Msg( "Error: Constant not found: PNG_TRANSFORM_INVERT_MONO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_TRANSFORM_SHIFT
	CompareConstant(PNG_TRANSFORM_SHIFT,0x0040,5660,architecture)
#else
Msg( "Error: Constant not found: PNG_TRANSFORM_SHIFT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_TRANSFORM_BGR
	CompareConstant(PNG_TRANSFORM_BGR,0x0080,5661,architecture)
#else
Msg( "Error: Constant not found: PNG_TRANSFORM_BGR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_TRANSFORM_SWAP_ALPHA
	CompareConstant(PNG_TRANSFORM_SWAP_ALPHA,0x0100,5662,architecture)
#else
Msg( "Error: Constant not found: PNG_TRANSFORM_SWAP_ALPHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_TRANSFORM_SWAP_ENDIAN
	CompareConstant(PNG_TRANSFORM_SWAP_ENDIAN,0x0200,5663,architecture)
#else
Msg( "Error: Constant not found: PNG_TRANSFORM_SWAP_ENDIAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_TRANSFORM_INVERT_ALPHA
	CompareConstant(PNG_TRANSFORM_INVERT_ALPHA,0x0400,5664,architecture)
#else
Msg( "Error: Constant not found: PNG_TRANSFORM_INVERT_ALPHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_TRANSFORM_STRIP_FILLER
	CompareConstant(PNG_TRANSFORM_STRIP_FILLER,0x0800,5665,architecture)
#else
Msg( "Error: Constant not found: PNG_TRANSFORM_STRIP_FILLER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FLAG_MNG_EMPTY_PLTE
	CompareConstant(PNG_FLAG_MNG_EMPTY_PLTE,0x01,5666,architecture)
#else
Msg( "Error: Constant not found: PNG_FLAG_MNG_EMPTY_PLTE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FLAG_MNG_FILTER_64
	CompareConstant(PNG_FLAG_MNG_FILTER_64,0x04,5667,architecture)
#else
Msg( "Error: Constant not found: PNG_FLAG_MNG_FILTER_64\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_ALL_MNG_FEATURES
	CompareConstant(PNG_ALL_MNG_FEATURES,0x05,5668,architecture)
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
	CompareConstant(PNG_FILLER_BEFORE,0,5670,architecture)
#else
Msg( "Error: Constant not found: PNG_FILLER_BEFORE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FILLER_AFTER
	CompareConstant(PNG_FILLER_AFTER,1,5671,architecture)
#else
Msg( "Error: Constant not found: PNG_FILLER_AFTER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_BACKGROUND_GAMMA_UNKNOWN
	CompareConstant(PNG_BACKGROUND_GAMMA_UNKNOWN,0,5672,architecture)
#else
Msg( "Error: Constant not found: PNG_BACKGROUND_GAMMA_UNKNOWN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_BACKGROUND_GAMMA_SCREEN
	CompareConstant(PNG_BACKGROUND_GAMMA_SCREEN,1,5673,architecture)
#else
Msg( "Error: Constant not found: PNG_BACKGROUND_GAMMA_SCREEN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_BACKGROUND_GAMMA_FILE
	CompareConstant(PNG_BACKGROUND_GAMMA_FILE,2,5674,architecture)
#else
Msg( "Error: Constant not found: PNG_BACKGROUND_GAMMA_FILE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_BACKGROUND_GAMMA_UNIQUE
	CompareConstant(PNG_BACKGROUND_GAMMA_UNIQUE,3,5675,architecture)
#else
Msg( "Error: Constant not found: PNG_BACKGROUND_GAMMA_UNIQUE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_CRC_DEFAULT
	CompareConstant(PNG_CRC_DEFAULT,0,5676,architecture)
#else
Msg( "Error: Constant not found: PNG_CRC_DEFAULT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_CRC_ERROR_QUIT
	CompareConstant(PNG_CRC_ERROR_QUIT,1,5677,architecture)
#else
Msg( "Error: Constant not found: PNG_CRC_ERROR_QUIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_CRC_WARN_DISCARD
	CompareConstant(PNG_CRC_WARN_DISCARD,2,5678,architecture)
#else
Msg( "Error: Constant not found: PNG_CRC_WARN_DISCARD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_CRC_WARN_USE
	CompareConstant(PNG_CRC_WARN_USE,3,5679,architecture)
#else
Msg( "Error: Constant not found: PNG_CRC_WARN_USE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_CRC_QUIET_USE
	CompareConstant(PNG_CRC_QUIET_USE,4,5680,architecture)
#else
Msg( "Error: Constant not found: PNG_CRC_QUIET_USE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_CRC_NO_CHANGE
	CompareConstant(PNG_CRC_NO_CHANGE,5,5681,architecture)
#else
Msg( "Error: Constant not found: PNG_CRC_NO_CHANGE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_NO_FILTERS
	CompareConstant(PNG_NO_FILTERS,0x00,5682,architecture)
#else
Msg( "Error: Constant not found: PNG_NO_FILTERS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FILTER_NONE
	CompareConstant(PNG_FILTER_NONE,0x08,5683,architecture)
#else
Msg( "Error: Constant not found: PNG_FILTER_NONE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FILTER_SUB
	CompareConstant(PNG_FILTER_SUB,0x10,5684,architecture)
#else
Msg( "Error: Constant not found: PNG_FILTER_SUB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FILTER_UP
	CompareConstant(PNG_FILTER_UP,0x20,5685,architecture)
#else
Msg( "Error: Constant not found: PNG_FILTER_UP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FILTER_AVG
	CompareConstant(PNG_FILTER_AVG,0x40,5686,architecture)
#else
Msg( "Error: Constant not found: PNG_FILTER_AVG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FILTER_PAETH
	CompareConstant(PNG_FILTER_PAETH,0x80,5687,architecture)
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
	CompareConstant(PNG_FILTER_VALUE_NONE,0,5689,architecture)
#else
Msg( "Error: Constant not found: PNG_FILTER_VALUE_NONE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FILTER_VALUE_SUB
	CompareConstant(PNG_FILTER_VALUE_SUB,1,5690,architecture)
#else
Msg( "Error: Constant not found: PNG_FILTER_VALUE_SUB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FILTER_VALUE_UP
	CompareConstant(PNG_FILTER_VALUE_UP,2,5691,architecture)
#else
Msg( "Error: Constant not found: PNG_FILTER_VALUE_UP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FILTER_VALUE_AVG
	CompareConstant(PNG_FILTER_VALUE_AVG,3,5692,architecture)
#else
Msg( "Error: Constant not found: PNG_FILTER_VALUE_AVG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FILTER_VALUE_PAETH
	CompareConstant(PNG_FILTER_VALUE_PAETH,4,5693,architecture)
#else
Msg( "Error: Constant not found: PNG_FILTER_VALUE_PAETH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FILTER_VALUE_LAST
	CompareConstant(PNG_FILTER_VALUE_LAST,5,5694,architecture)
#else
Msg( "Error: Constant not found: PNG_FILTER_VALUE_LAST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FILTER_HEURISTIC_DEFAULT
	CompareConstant(PNG_FILTER_HEURISTIC_DEFAULT,0,5695,architecture)
#else
Msg( "Error: Constant not found: PNG_FILTER_HEURISTIC_DEFAULT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FILTER_HEURISTIC_UNWEIGHTED
	CompareConstant(PNG_FILTER_HEURISTIC_UNWEIGHTED,1,5696,architecture)
#else
Msg( "Error: Constant not found: PNG_FILTER_HEURISTIC_UNWEIGHTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FILTER_HEURISTIC_WEIGHTED
	CompareConstant(PNG_FILTER_HEURISTIC_WEIGHTED,2,5697,architecture)
#else
Msg( "Error: Constant not found: PNG_FILTER_HEURISTIC_WEIGHTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FILTER_HEURISTIC_LAST
	CompareConstant(PNG_FILTER_HEURISTIC_LAST,3,5698,architecture)
#else
Msg( "Error: Constant not found: PNG_FILTER_HEURISTIC_LAST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_DESTROY_WILL_FREE_DATA
	CompareConstant(PNG_DESTROY_WILL_FREE_DATA,1,5699,architecture)
#else
Msg( "Error: Constant not found: PNG_DESTROY_WILL_FREE_DATA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_SET_WILL_FREE_DATA
	CompareConstant(PNG_SET_WILL_FREE_DATA,1,5700,architecture)
#else
Msg( "Error: Constant not found: PNG_SET_WILL_FREE_DATA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_USER_WILL_FREE_DATA
	CompareConstant(PNG_USER_WILL_FREE_DATA,2,5701,architecture)
#else
Msg( "Error: Constant not found: PNG_USER_WILL_FREE_DATA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FREE_HIST
	CompareConstant(PNG_FREE_HIST,0x0008,5702,architecture)
#else
Msg( "Error: Constant not found: PNG_FREE_HIST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FREE_ICCP
	CompareConstant(PNG_FREE_ICCP,0x0010,5703,architecture)
#else
Msg( "Error: Constant not found: PNG_FREE_ICCP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FREE_SPLT
	CompareConstant(PNG_FREE_SPLT,0x0020,5704,architecture)
#else
Msg( "Error: Constant not found: PNG_FREE_SPLT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FREE_ROWS
	CompareConstant(PNG_FREE_ROWS,0x0040,5705,architecture)
#else
Msg( "Error: Constant not found: PNG_FREE_ROWS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FREE_PCAL
	CompareConstant(PNG_FREE_PCAL,0x0080,5706,architecture)
#else
Msg( "Error: Constant not found: PNG_FREE_PCAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FREE_SCAL
	CompareConstant(PNG_FREE_SCAL,0x0100,5707,architecture)
#else
Msg( "Error: Constant not found: PNG_FREE_SCAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FREE_UNKN
	CompareConstant(PNG_FREE_UNKN,0x0200,5708,architecture)
#else
Msg( "Error: Constant not found: PNG_FREE_UNKN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FREE_LIST
	CompareConstant(PNG_FREE_LIST,0x0400,5709,architecture)
#else
Msg( "Error: Constant not found: PNG_FREE_LIST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FREE_PLTE
	CompareConstant(PNG_FREE_PLTE,0x1000,5710,architecture)
#else
Msg( "Error: Constant not found: PNG_FREE_PLTE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FREE_TRNS
	CompareConstant(PNG_FREE_TRNS,0x2000,5711,architecture)
#else
Msg( "Error: Constant not found: PNG_FREE_TRNS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FREE_TEXT
	CompareConstant(PNG_FREE_TEXT,0x4000,5712,architecture)
#else
Msg( "Error: Constant not found: PNG_FREE_TEXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FREE_ALL
	CompareConstant(PNG_FREE_ALL,0x7fff,5713,architecture)
#else
Msg( "Error: Constant not found: PNG_FREE_ALL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_FREE_MUL
	CompareConstant(PNG_FREE_MUL,0x4220,5714,architecture)
#else
Msg( "Error: Constant not found: PNG_FREE_MUL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_HANDLE_CHUNK_AS_DEFAULT
	CompareConstant(PNG_HANDLE_CHUNK_AS_DEFAULT,0,5715,architecture)
#else
Msg( "Error: Constant not found: PNG_HANDLE_CHUNK_AS_DEFAULT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_HANDLE_CHUNK_NEVER
	CompareConstant(PNG_HANDLE_CHUNK_NEVER,1,5716,architecture)
#else
Msg( "Error: Constant not found: PNG_HANDLE_CHUNK_NEVER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_HANDLE_CHUNK_IF_SAFE
	CompareConstant(PNG_HANDLE_CHUNK_IF_SAFE,2,5717,architecture)
#else
Msg( "Error: Constant not found: PNG_HANDLE_CHUNK_IF_SAFE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_HANDLE_CHUNK_ALWAYS
	CompareConstant(PNG_HANDLE_CHUNK_ALWAYS,3,5718,architecture)
#else
Msg( "Error: Constant not found: PNG_HANDLE_CHUNK_ALWAYS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_ASM_FLAG_MMX_SUPPORT_COMPILED
	CompareConstant(PNG_ASM_FLAG_MMX_SUPPORT_COMPILED,0x01,5719,architecture)
#else
Msg( "Error: Constant not found: PNG_ASM_FLAG_MMX_SUPPORT_COMPILED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_ASM_FLAG_MMX_SUPPORT_IN_CPU
	CompareConstant(PNG_ASM_FLAG_MMX_SUPPORT_IN_CPU,0x02,5720,architecture)
#else
Msg( "Error: Constant not found: PNG_ASM_FLAG_MMX_SUPPORT_IN_CPU\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_ASM_FLAG_MMX_READ_COMBINE_ROW
	CompareConstant(PNG_ASM_FLAG_MMX_READ_COMBINE_ROW,0x04,5721,architecture)
#else
Msg( "Error: Constant not found: PNG_ASM_FLAG_MMX_READ_COMBINE_ROW\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_ASM_FLAG_MMX_READ_INTERLACE
	CompareConstant(PNG_ASM_FLAG_MMX_READ_INTERLACE,0x08,5722,architecture)
#else
Msg( "Error: Constant not found: PNG_ASM_FLAG_MMX_READ_INTERLACE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_ASM_FLAG_MMX_READ_FILTER_SUB
	CompareConstant(PNG_ASM_FLAG_MMX_READ_FILTER_SUB,0x10,5723,architecture)
#else
Msg( "Error: Constant not found: PNG_ASM_FLAG_MMX_READ_FILTER_SUB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_ASM_FLAG_MMX_READ_FILTER_UP
	CompareConstant(PNG_ASM_FLAG_MMX_READ_FILTER_UP,0x20,5724,architecture)
#else
Msg( "Error: Constant not found: PNG_ASM_FLAG_MMX_READ_FILTER_UP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_ASM_FLAG_MMX_READ_FILTER_AVG
	CompareConstant(PNG_ASM_FLAG_MMX_READ_FILTER_AVG,0x40,5725,architecture)
#else
Msg( "Error: Constant not found: PNG_ASM_FLAG_MMX_READ_FILTER_AVG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_ASM_FLAG_MMX_READ_FILTER_PAETH
	CompareConstant(PNG_ASM_FLAG_MMX_READ_FILTER_PAETH,0x80,5726,architecture)
#else
Msg( "Error: Constant not found: PNG_ASM_FLAG_MMX_READ_FILTER_PAETH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_ASM_FLAGS_INITIALIZED
	CompareConstant(PNG_ASM_FLAGS_INITIALIZED,0x80000000,5727,architecture)
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
	CompareConstant(PNG_SELECT_READ,1,5731,architecture)
#else
Msg( "Error: Constant not found: PNG_SELECT_READ\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PNG_SELECT_WRITE
	CompareConstant(PNG_SELECT_WRITE,2,5732,architecture)
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
/* No test for PNGARG(arglist) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PNG_SETJMP_SUPPORTED */
#endif

#if __i386__
CheckTypeSize(png_struct,712, 11173, 2)
#elif __x86_64__
CheckTypeSize(png_struct,1208, 11173, 11)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_struct,1152, 11173, 6)
#elif __powerpc64__
CheckTypeSize(png_struct,1664, 11173, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_struct,744, 11173, 10)
#elif __s390x__
CheckTypeSize(png_struct,1288, 11173, 12)
#elif __ia64__
CheckTypeSize(png_struct,1712, 11173, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11173,0);
Msg("Find size of png_struct (11173)\n");
#endif

#if __i386__
CheckTypeSize(png_struct *,4, 11174, 2)
#elif __x86_64__
CheckTypeSize(png_struct *,8, 11174, 11)
#elif __ia64__
CheckTypeSize(png_struct *,8, 11174, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_struct *,4, 11174, 6)
#elif __powerpc64__
CheckTypeSize(png_struct *,8, 11174, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_struct *,4, 11174, 10)
#elif __s390x__
CheckTypeSize(png_struct *,8, 11174, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11174,0);
Msg("Find size of png_struct * (11174)\n");
#endif

#if __i386__
CheckTypeSize(png_structp,4, 11175, 2)
#elif __x86_64__
CheckTypeSize(png_structp,8, 11175, 11)
#elif __ia64__
CheckTypeSize(png_structp,8, 11175, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_structp,4, 11175, 6)
#elif __powerpc64__
CheckTypeSize(png_structp,8, 11175, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_structp,4, 11175, 10)
#elif __s390x__
CheckTypeSize(png_structp,8, 11175, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11175,0);
Msg("Find size of png_structp (11175)\n");
#endif

#if __i386__
CheckTypeSize(png_info,288, 11177, 2)
#elif __x86_64__
CheckTypeSize(png_info,464, 11177, 11)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_info,288, 11177, 6)
#elif __powerpc64__
CheckTypeSize(png_info,464, 11177, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_info,288, 11177, 10)
#elif __s390x__
CheckTypeSize(png_info,464, 11177, 12)
#elif __ia64__
CheckTypeSize(png_info,464, 11177, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11177,0);
Msg("Find size of png_info (11177)\n");
#endif

#if __i386__
CheckTypeSize(png_info *,4, 11178, 2)
#elif __x86_64__
CheckTypeSize(png_info *,8, 11178, 11)
#elif __ia64__
CheckTypeSize(png_info *,8, 11178, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_info *,4, 11178, 6)
#elif __powerpc64__
CheckTypeSize(png_info *,8, 11178, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_info *,4, 11178, 10)
#elif __s390x__
CheckTypeSize(png_info *,8, 11178, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11178,0);
Msg("Find size of png_info * (11178)\n");
#endif

#if __i386__
CheckTypeSize(png_infop,4, 11179, 2)
#elif __x86_64__
CheckTypeSize(png_infop,8, 11179, 11)
#elif __ia64__
CheckTypeSize(png_infop,8, 11179, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_infop,4, 11179, 6)
#elif __powerpc64__
CheckTypeSize(png_infop,8, 11179, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_infop,4, 11179, 10)
#elif __s390x__
CheckTypeSize(png_infop,8, 11179, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11179,0);
Msg("Find size of png_infop (11179)\n");
#endif

#if __i386__
CheckTypeSize(png_voidp,4, 11180, 2)
#elif __x86_64__
CheckTypeSize(png_voidp,8, 11180, 11)
#elif __ia64__
CheckTypeSize(png_voidp,8, 11180, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_voidp,4, 11180, 6)
#elif __powerpc64__
CheckTypeSize(png_voidp,8, 11180, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_voidp,4, 11180, 10)
#elif __s390x__
CheckTypeSize(png_voidp,8, 11180, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11180,0);
Msg("Find size of png_voidp (11180)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11181,0);
Msg("Find size of fptr_png_24 (11181)\n");
#endif

#if __i386__
CheckTypeSize(png_progressive_info_ptr,4, 11182, 2)
#elif __x86_64__
CheckTypeSize(png_progressive_info_ptr,8, 11182, 11)
#elif __ia64__
CheckTypeSize(png_progressive_info_ptr,8, 11182, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_progressive_info_ptr,4, 11182, 6)
#elif __powerpc64__
CheckTypeSize(png_progressive_info_ptr,8, 11182, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_progressive_info_ptr,4, 11182, 10)
#elif __s390x__
CheckTypeSize(png_progressive_info_ptr,8, 11182, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11182,0);
Msg("Find size of png_progressive_info_ptr (11182)\n");
#endif

#if __i386__
CheckTypeSize(png_byte,1, 11183, 2)
#elif __x86_64__
CheckTypeSize(png_byte,1, 11183, 11)
#elif __ia64__
CheckTypeSize(png_byte,1, 11183, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_byte,1, 11183, 6)
#elif __powerpc64__
CheckTypeSize(png_byte,1, 11183, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_byte,1, 11183, 10)
#elif __s390x__
CheckTypeSize(png_byte,1, 11183, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11183,0);
Msg("Find size of png_byte (11183)\n");
#endif

#if __i386__
CheckTypeSize(png_byte *,4, 11184, 2)
#elif __x86_64__
CheckTypeSize(png_byte *,8, 11184, 11)
#elif __ia64__
CheckTypeSize(png_byte *,8, 11184, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_byte *,4, 11184, 6)
#elif __powerpc64__
CheckTypeSize(png_byte *,8, 11184, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_byte *,4, 11184, 10)
#elif __s390x__
CheckTypeSize(png_byte *,8, 11184, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11184,0);
Msg("Find size of png_byte * (11184)\n");
#endif

#if __i386__
CheckTypeSize(png_bytep,4, 11185, 2)
#elif __x86_64__
CheckTypeSize(png_bytep,8, 11185, 11)
#elif __ia64__
CheckTypeSize(png_bytep,8, 11185, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_bytep,4, 11185, 6)
#elif __powerpc64__
CheckTypeSize(png_bytep,8, 11185, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_bytep,4, 11185, 10)
#elif __s390x__
CheckTypeSize(png_bytep,8, 11185, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11185,0);
Msg("Find size of png_bytep (11185)\n");
#endif

#if __i386__
CheckTypeSize(png_uint_32,4, 11187, 2)
#elif __x86_64__
CheckTypeSize(png_uint_32,8, 11187, 11)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_uint_32,4, 11187, 6)
#elif __powerpc64__
CheckTypeSize(png_uint_32,8, 11187, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_uint_32,4, 11187, 10)
#elif __s390x__
CheckTypeSize(png_uint_32,8, 11187, 12)
#elif __ia64__
CheckTypeSize(png_uint_32,8, 11187, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11187,0);
Msg("Find size of png_uint_32 (11187)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11188,0);
Msg("Find size of fptr_png_176 (11188)\n");
#endif

#if __i386__
CheckTypeSize(png_progressive_row_ptr,4, 11189, 2)
#elif __x86_64__
CheckTypeSize(png_progressive_row_ptr,8, 11189, 11)
#elif __ia64__
CheckTypeSize(png_progressive_row_ptr,8, 11189, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_progressive_row_ptr,4, 11189, 6)
#elif __powerpc64__
CheckTypeSize(png_progressive_row_ptr,8, 11189, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_progressive_row_ptr,4, 11189, 10)
#elif __s390x__
CheckTypeSize(png_progressive_row_ptr,8, 11189, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11189,0);
Msg("Find size of png_progressive_row_ptr (11189)\n");
#endif

#if __i386__
CheckTypeSize(png_progressive_end_ptr,4, 11190, 2)
#elif __x86_64__
CheckTypeSize(png_progressive_end_ptr,8, 11190, 11)
#elif __ia64__
CheckTypeSize(png_progressive_end_ptr,8, 11190, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_progressive_end_ptr,4, 11190, 6)
#elif __powerpc64__
CheckTypeSize(png_progressive_end_ptr,8, 11190, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_progressive_end_ptr,4, 11190, 10)
#elif __s390x__
CheckTypeSize(png_progressive_end_ptr,8, 11190, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11190,0);
Msg("Find size of png_progressive_end_ptr (11190)\n");
#endif

#if __i386__
CheckTypeSize(struct png_color_8_struct,5, 11191, 2)
CheckMemberSize(struct png_color_8_struct,green,1,2,40968)
CheckOffset(struct png_color_8_struct,green,1,2,40968)
CheckMemberSize(struct png_color_8_struct,blue,1,2,40969)
CheckOffset(struct png_color_8_struct,blue,2,2,40969)
CheckMemberSize(struct png_color_8_struct,gray,1,2,40970)
CheckOffset(struct png_color_8_struct,gray,3,2,40970)
CheckMemberSize(struct png_color_8_struct,alpha,1,2,40971)
CheckOffset(struct png_color_8_struct,alpha,4,2,40971)
#elif __x86_64__
CheckTypeSize(struct png_color_8_struct,5, 11191, 11)
CheckMemberSize(struct png_color_8_struct,green,1,11,40968)
CheckOffset(struct png_color_8_struct,green,1,11,40968)
CheckMemberSize(struct png_color_8_struct,blue,1,11,40969)
CheckOffset(struct png_color_8_struct,blue,2,11,40969)
CheckMemberSize(struct png_color_8_struct,gray,1,11,40970)
CheckOffset(struct png_color_8_struct,gray,3,11,40970)
CheckMemberSize(struct png_color_8_struct,alpha,1,11,40971)
CheckOffset(struct png_color_8_struct,alpha,4,11,40971)
#elif __ia64__
CheckTypeSize(struct png_color_8_struct,5, 11191, 3)
CheckMemberSize(struct png_color_8_struct,green,1,3,40968)
CheckOffset(struct png_color_8_struct,green,1,3,40968)
CheckMemberSize(struct png_color_8_struct,blue,1,3,40969)
CheckOffset(struct png_color_8_struct,blue,2,3,40969)
CheckMemberSize(struct png_color_8_struct,gray,1,3,40970)
CheckOffset(struct png_color_8_struct,gray,3,3,40970)
CheckMemberSize(struct png_color_8_struct,alpha,1,3,40971)
CheckOffset(struct png_color_8_struct,alpha,4,3,40971)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct png_color_8_struct,5, 11191, 6)
CheckMemberSize(struct png_color_8_struct,green,1,6,40968)
CheckOffset(struct png_color_8_struct,green,1,6,40968)
CheckMemberSize(struct png_color_8_struct,blue,1,6,40969)
CheckOffset(struct png_color_8_struct,blue,2,6,40969)
CheckMemberSize(struct png_color_8_struct,gray,1,6,40970)
CheckOffset(struct png_color_8_struct,gray,3,6,40970)
CheckMemberSize(struct png_color_8_struct,alpha,1,6,40971)
CheckOffset(struct png_color_8_struct,alpha,4,6,40971)
#elif __powerpc64__
CheckTypeSize(struct png_color_8_struct,5, 11191, 9)
CheckMemberSize(struct png_color_8_struct,green,1,9,40968)
CheckOffset(struct png_color_8_struct,green,1,9,40968)
CheckMemberSize(struct png_color_8_struct,blue,1,9,40969)
CheckOffset(struct png_color_8_struct,blue,2,9,40969)
CheckMemberSize(struct png_color_8_struct,gray,1,9,40970)
CheckOffset(struct png_color_8_struct,gray,3,9,40970)
CheckMemberSize(struct png_color_8_struct,alpha,1,9,40971)
CheckOffset(struct png_color_8_struct,alpha,4,9,40971)
#elif __s390__ && !__s390x__
CheckTypeSize(struct png_color_8_struct,5, 11191, 10)
CheckMemberSize(struct png_color_8_struct,green,1,10,40968)
CheckOffset(struct png_color_8_struct,green,1,10,40968)
CheckMemberSize(struct png_color_8_struct,blue,1,10,40969)
CheckOffset(struct png_color_8_struct,blue,2,10,40969)
CheckMemberSize(struct png_color_8_struct,gray,1,10,40970)
CheckOffset(struct png_color_8_struct,gray,3,10,40970)
CheckMemberSize(struct png_color_8_struct,alpha,1,10,40971)
CheckOffset(struct png_color_8_struct,alpha,4,10,40971)
#elif __s390x__
CheckTypeSize(struct png_color_8_struct,5, 11191, 12)
CheckMemberSize(struct png_color_8_struct,green,1,12,40968)
CheckOffset(struct png_color_8_struct,green,1,12,40968)
CheckMemberSize(struct png_color_8_struct,blue,1,12,40969)
CheckOffset(struct png_color_8_struct,blue,2,12,40969)
CheckMemberSize(struct png_color_8_struct,gray,1,12,40970)
CheckOffset(struct png_color_8_struct,gray,3,12,40970)
CheckMemberSize(struct png_color_8_struct,alpha,1,12,40971)
CheckOffset(struct png_color_8_struct,alpha,4,12,40971)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11191,0);
Msg("Find size of png_color_8_struct (11191)\n");
#endif

#if __i386__
CheckTypeSize(png_color_8,5, 11192, 2)
#elif __x86_64__
CheckTypeSize(png_color_8,5, 11192, 11)
#elif __ia64__
CheckTypeSize(png_color_8,5, 11192, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_color_8,5, 11192, 6)
#elif __powerpc64__
CheckTypeSize(png_color_8,5, 11192, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_color_8,5, 11192, 10)
#elif __s390x__
CheckTypeSize(png_color_8,5, 11192, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11192,0);
Msg("Find size of png_color_8 (11192)\n");
#endif

#if __i386__
CheckTypeSize(png_color_8 *,4, 11193, 2)
#elif __x86_64__
CheckTypeSize(png_color_8 *,8, 11193, 11)
#elif __ia64__
CheckTypeSize(png_color_8 *,8, 11193, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_color_8 *,4, 11193, 6)
#elif __powerpc64__
CheckTypeSize(png_color_8 *,8, 11193, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_color_8 *,4, 11193, 10)
#elif __s390x__
CheckTypeSize(png_color_8 *,8, 11193, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11193,0);
Msg("Find size of png_color_8 * (11193)\n");
#endif

#if __i386__
CheckTypeSize(png_color_8p,4, 11194, 2)
#elif __x86_64__
CheckTypeSize(png_color_8p,8, 11194, 11)
#elif __ia64__
CheckTypeSize(png_color_8p,8, 11194, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_color_8p,4, 11194, 6)
#elif __powerpc64__
CheckTypeSize(png_color_8p,8, 11194, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_color_8p,4, 11194, 10)
#elif __s390x__
CheckTypeSize(png_color_8p,8, 11194, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11194,0);
Msg("Find size of png_color_8p (11194)\n");
#endif

#if __i386__
CheckTypeSize(png_int_32,4, 11195, 2)
#elif __x86_64__
CheckTypeSize(png_int_32,8, 11195, 11)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_int_32,4, 11195, 6)
#elif __powerpc64__
CheckTypeSize(png_int_32,8, 11195, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_int_32,4, 11195, 10)
#elif __s390x__
CheckTypeSize(png_int_32,8, 11195, 12)
#elif __ia64__
CheckTypeSize(png_int_32,8, 11195, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11195,0);
Msg("Find size of png_int_32 (11195)\n");
#endif

#if __i386__
CheckTypeSize(png_charp,4, 11196, 2)
#elif __x86_64__
CheckTypeSize(png_charp,8, 11196, 11)
#elif __ia64__
CheckTypeSize(png_charp,8, 11196, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_charp,4, 11196, 6)
#elif __powerpc64__
CheckTypeSize(png_charp,8, 11196, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_charp,4, 11196, 10)
#elif __s390x__
CheckTypeSize(png_charp,8, 11196, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11196,0);
Msg("Find size of png_charp (11196)\n");
#endif

#if __i386__
CheckTypeSize(png_color_8p *,4, 11197, 2)
#elif __x86_64__
CheckTypeSize(png_color_8p *,8, 11197, 11)
#elif __ia64__
CheckTypeSize(png_color_8p *,8, 11197, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_color_8p *,4, 11197, 6)
#elif __powerpc64__
CheckTypeSize(png_color_8p *,8, 11197, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_color_8p *,4, 11197, 10)
#elif __s390x__
CheckTypeSize(png_color_8p *,8, 11197, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11197,0);
Msg("Find size of png_color_8p * (11197)\n");
#endif

#if __i386__
CheckTypeSize(png_size_t,4, 11198, 2)
#elif __x86_64__
CheckTypeSize(png_size_t,8, 11198, 11)
#elif __ia64__
CheckTypeSize(png_size_t,8, 11198, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_size_t,4, 11198, 6)
#elif __powerpc64__
CheckTypeSize(png_size_t,8, 11198, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_size_t,4, 11198, 10)
#elif __s390x__
CheckTypeSize(png_size_t,8, 11198, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11198,0);
Msg("Find size of png_size_t (11198)\n");
#endif

#if __i386__
CheckTypeSize(struct png_text_struct,16, 11199, 2)
CheckMemberSize(struct png_text_struct,key,4,2,40973)
CheckOffset(struct png_text_struct,key,4,2,40973)
CheckMemberSize(struct png_text_struct,text,4,2,40974)
CheckOffset(struct png_text_struct,text,8,2,40974)
CheckMemberSize(struct png_text_struct,text_length,4,2,40975)
CheckOffset(struct png_text_struct,text_length,12,2,40975)
#elif __x86_64__
CheckTypeSize(struct png_text_struct,32, 11199, 11)
CheckMemberSize(struct png_text_struct,key,8,11,40973)
CheckOffset(struct png_text_struct,key,8,11,40973)
CheckMemberSize(struct png_text_struct,text,8,11,40974)
CheckOffset(struct png_text_struct,text,16,11,40974)
CheckMemberSize(struct png_text_struct,text_length,8,11,40975)
CheckOffset(struct png_text_struct,text_length,24,11,40975)
#elif __ia64__
CheckTypeSize(struct png_text_struct,32, 11199, 3)
CheckMemberSize(struct png_text_struct,key,8,3,40973)
CheckOffset(struct png_text_struct,key,8,3,40973)
CheckMemberSize(struct png_text_struct,text,8,3,40974)
CheckOffset(struct png_text_struct,text,16,3,40974)
CheckMemberSize(struct png_text_struct,text_length,8,3,40975)
CheckOffset(struct png_text_struct,text_length,24,3,40975)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct png_text_struct,16, 11199, 6)
CheckMemberSize(struct png_text_struct,key,4,6,40973)
CheckOffset(struct png_text_struct,key,4,6,40973)
CheckMemberSize(struct png_text_struct,text,4,6,40974)
CheckOffset(struct png_text_struct,text,8,6,40974)
CheckMemberSize(struct png_text_struct,text_length,4,6,40975)
CheckOffset(struct png_text_struct,text_length,12,6,40975)
#elif __powerpc64__
CheckTypeSize(struct png_text_struct,32, 11199, 9)
CheckMemberSize(struct png_text_struct,key,8,9,40973)
CheckOffset(struct png_text_struct,key,8,9,40973)
CheckMemberSize(struct png_text_struct,text,8,9,40974)
CheckOffset(struct png_text_struct,text,16,9,40974)
CheckMemberSize(struct png_text_struct,text_length,8,9,40975)
CheckOffset(struct png_text_struct,text_length,24,9,40975)
#elif __s390__ && !__s390x__
CheckTypeSize(struct png_text_struct,16, 11199, 10)
CheckMemberSize(struct png_text_struct,key,4,10,40973)
CheckOffset(struct png_text_struct,key,4,10,40973)
CheckMemberSize(struct png_text_struct,text,4,10,40974)
CheckOffset(struct png_text_struct,text,8,10,40974)
CheckMemberSize(struct png_text_struct,text_length,4,10,40975)
CheckOffset(struct png_text_struct,text_length,12,10,40975)
#elif __s390x__
CheckTypeSize(struct png_text_struct,32, 11199, 12)
CheckMemberSize(struct png_text_struct,key,8,12,40973)
CheckOffset(struct png_text_struct,key,8,12,40973)
CheckMemberSize(struct png_text_struct,text,8,12,40974)
CheckOffset(struct png_text_struct,text,16,12,40974)
CheckMemberSize(struct png_text_struct,text_length,8,12,40975)
CheckOffset(struct png_text_struct,text_length,24,12,40975)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11199,0);
Msg("Find size of png_text_struct (11199)\n");
#endif

#if __i386__
CheckTypeSize(png_text,16, 11200, 2)
#elif __x86_64__
CheckTypeSize(png_text,32, 11200, 11)
#elif __ia64__
CheckTypeSize(png_text,32, 11200, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_text,16, 11200, 6)
#elif __powerpc64__
CheckTypeSize(png_text,32, 11200, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_text,16, 11200, 10)
#elif __s390x__
CheckTypeSize(png_text,32, 11200, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11200,0);
Msg("Find size of png_text (11200)\n");
#endif

#if __i386__
CheckTypeSize(png_text *,4, 11201, 2)
#elif __x86_64__
CheckTypeSize(png_text *,8, 11201, 11)
#elif __ia64__
CheckTypeSize(png_text *,8, 11201, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_text *,4, 11201, 6)
#elif __powerpc64__
CheckTypeSize(png_text *,8, 11201, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_text *,4, 11201, 10)
#elif __s390x__
CheckTypeSize(png_text *,8, 11201, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11201,0);
Msg("Find size of png_text * (11201)\n");
#endif

#if __i386__
CheckTypeSize(png_textp,4, 11202, 2)
#elif __x86_64__
CheckTypeSize(png_textp,8, 11202, 11)
#elif __ia64__
CheckTypeSize(png_textp,8, 11202, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_textp,4, 11202, 6)
#elif __powerpc64__
CheckTypeSize(png_textp,8, 11202, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_textp,4, 11202, 10)
#elif __s390x__
CheckTypeSize(png_textp,8, 11202, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11202,0);
Msg("Find size of png_textp (11202)\n");
#endif

#if __i386__
CheckTypeSize(png_textp *,4, 11203, 2)
#elif __x86_64__
CheckTypeSize(png_textp *,8, 11203, 11)
#elif __ia64__
CheckTypeSize(png_textp *,8, 11203, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_textp *,4, 11203, 6)
#elif __powerpc64__
CheckTypeSize(png_textp *,8, 11203, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_textp *,4, 11203, 10)
#elif __s390x__
CheckTypeSize(png_textp *,8, 11203, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11203,0);
Msg("Find size of png_textp * (11203)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11204,0);
Msg("Find size of png_byte * * (11204)\n");
#endif

#if __i386__
CheckTypeSize(png_bytepp,4, 11205, 2)
#elif __x86_64__
CheckTypeSize(png_bytepp,8, 11205, 11)
#elif __ia64__
CheckTypeSize(png_bytepp,8, 11205, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_bytepp,4, 11205, 6)
#elif __powerpc64__
CheckTypeSize(png_bytepp,8, 11205, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_bytepp,4, 11205, 10)
#elif __s390x__
CheckTypeSize(png_bytepp,8, 11205, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11205,0);
Msg("Find size of png_bytepp (11205)\n");
#endif

#if __i386__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __x86_64__
#elif __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11206,0);
Msg("Find size of const char[18] (11206)\n");
#endif

#if __i386__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __x86_64__
#elif __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11207,0);
Msg("Find size of const const char[18] (11207)\n");
#endif

#if __i386__
CheckTypeSize(struct png_color_16_struct,10, 11208, 2)
CheckMemberSize(struct png_color_16_struct,red,2,2,40977)
CheckOffset(struct png_color_16_struct,red,2,2,40977)
CheckMemberSize(struct png_color_16_struct,green,2,2,40978)
CheckOffset(struct png_color_16_struct,green,4,2,40978)
CheckMemberSize(struct png_color_16_struct,blue,2,2,40979)
CheckOffset(struct png_color_16_struct,blue,6,2,40979)
CheckMemberSize(struct png_color_16_struct,gray,2,2,40980)
CheckOffset(struct png_color_16_struct,gray,8,2,40980)
#elif __x86_64__
CheckTypeSize(struct png_color_16_struct,10, 11208, 11)
CheckMemberSize(struct png_color_16_struct,red,2,11,40977)
CheckOffset(struct png_color_16_struct,red,2,11,40977)
CheckMemberSize(struct png_color_16_struct,green,2,11,40978)
CheckOffset(struct png_color_16_struct,green,4,11,40978)
CheckMemberSize(struct png_color_16_struct,blue,2,11,40979)
CheckOffset(struct png_color_16_struct,blue,6,11,40979)
CheckMemberSize(struct png_color_16_struct,gray,2,11,40980)
CheckOffset(struct png_color_16_struct,gray,8,11,40980)
#elif __ia64__
CheckTypeSize(struct png_color_16_struct,10, 11208, 3)
CheckMemberSize(struct png_color_16_struct,red,2,3,40977)
CheckOffset(struct png_color_16_struct,red,2,3,40977)
CheckMemberSize(struct png_color_16_struct,green,2,3,40978)
CheckOffset(struct png_color_16_struct,green,4,3,40978)
CheckMemberSize(struct png_color_16_struct,blue,2,3,40979)
CheckOffset(struct png_color_16_struct,blue,6,3,40979)
CheckMemberSize(struct png_color_16_struct,gray,2,3,40980)
CheckOffset(struct png_color_16_struct,gray,8,3,40980)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct png_color_16_struct,10, 11208, 6)
CheckMemberSize(struct png_color_16_struct,red,2,6,40977)
CheckOffset(struct png_color_16_struct,red,2,6,40977)
CheckMemberSize(struct png_color_16_struct,green,2,6,40978)
CheckOffset(struct png_color_16_struct,green,4,6,40978)
CheckMemberSize(struct png_color_16_struct,blue,2,6,40979)
CheckOffset(struct png_color_16_struct,blue,6,6,40979)
CheckMemberSize(struct png_color_16_struct,gray,2,6,40980)
CheckOffset(struct png_color_16_struct,gray,8,6,40980)
#elif __powerpc64__
CheckTypeSize(struct png_color_16_struct,10, 11208, 9)
CheckMemberSize(struct png_color_16_struct,red,2,9,40977)
CheckOffset(struct png_color_16_struct,red,2,9,40977)
CheckMemberSize(struct png_color_16_struct,green,2,9,40978)
CheckOffset(struct png_color_16_struct,green,4,9,40978)
CheckMemberSize(struct png_color_16_struct,blue,2,9,40979)
CheckOffset(struct png_color_16_struct,blue,6,9,40979)
CheckMemberSize(struct png_color_16_struct,gray,2,9,40980)
CheckOffset(struct png_color_16_struct,gray,8,9,40980)
#elif __s390__ && !__s390x__
CheckTypeSize(struct png_color_16_struct,10, 11208, 10)
CheckMemberSize(struct png_color_16_struct,red,2,10,40977)
CheckOffset(struct png_color_16_struct,red,2,10,40977)
CheckMemberSize(struct png_color_16_struct,green,2,10,40978)
CheckOffset(struct png_color_16_struct,green,4,10,40978)
CheckMemberSize(struct png_color_16_struct,blue,2,10,40979)
CheckOffset(struct png_color_16_struct,blue,6,10,40979)
CheckMemberSize(struct png_color_16_struct,gray,2,10,40980)
CheckOffset(struct png_color_16_struct,gray,8,10,40980)
#elif __s390x__
CheckTypeSize(struct png_color_16_struct,10, 11208, 12)
CheckMemberSize(struct png_color_16_struct,red,2,12,40977)
CheckOffset(struct png_color_16_struct,red,2,12,40977)
CheckMemberSize(struct png_color_16_struct,green,2,12,40978)
CheckOffset(struct png_color_16_struct,green,4,12,40978)
CheckMemberSize(struct png_color_16_struct,blue,2,12,40979)
CheckOffset(struct png_color_16_struct,blue,6,12,40979)
CheckMemberSize(struct png_color_16_struct,gray,2,12,40980)
CheckOffset(struct png_color_16_struct,gray,8,12,40980)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11208,0);
Msg("Find size of png_color_16_struct (11208)\n");
#endif

#if __i386__
CheckTypeSize(png_uint_16,2, 11210, 2)
#elif __x86_64__
CheckTypeSize(png_uint_16,2, 11210, 11)
#elif __ia64__
CheckTypeSize(png_uint_16,2, 11210, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_uint_16,2, 11210, 6)
#elif __powerpc64__
CheckTypeSize(png_uint_16,2, 11210, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_uint_16,2, 11210, 10)
#elif __s390x__
CheckTypeSize(png_uint_16,2, 11210, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11210,0);
Msg("Find size of png_uint_16 (11210)\n");
#endif

#if __i386__
CheckTypeSize(png_color_16,10, 11211, 2)
#elif __x86_64__
CheckTypeSize(png_color_16,10, 11211, 11)
#elif __ia64__
CheckTypeSize(png_color_16,10, 11211, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_color_16,10, 11211, 6)
#elif __powerpc64__
CheckTypeSize(png_color_16,10, 11211, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_color_16,10, 11211, 10)
#elif __s390x__
CheckTypeSize(png_color_16,10, 11211, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11211,0);
Msg("Find size of png_color_16 (11211)\n");
#endif

#if __i386__
CheckTypeSize(png_color_16 *,4, 11212, 2)
#elif __x86_64__
CheckTypeSize(png_color_16 *,8, 11212, 11)
#elif __ia64__
CheckTypeSize(png_color_16 *,8, 11212, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_color_16 *,4, 11212, 6)
#elif __powerpc64__
CheckTypeSize(png_color_16 *,8, 11212, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_color_16 *,4, 11212, 10)
#elif __s390x__
CheckTypeSize(png_color_16 *,8, 11212, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11212,0);
Msg("Find size of png_color_16 * (11212)\n");
#endif

#if __i386__
CheckTypeSize(png_color_16p,4, 11213, 2)
#elif __x86_64__
CheckTypeSize(png_color_16p,8, 11213, 11)
#elif __ia64__
CheckTypeSize(png_color_16p,8, 11213, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_color_16p,4, 11213, 6)
#elif __powerpc64__
CheckTypeSize(png_color_16p,8, 11213, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_color_16p,4, 11213, 10)
#elif __s390x__
CheckTypeSize(png_color_16p,8, 11213, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11213,0);
Msg("Find size of png_color_16p (11213)\n");
#endif

#if __i386__
CheckTypeSize(png_uint_32 *,4, 11214, 2)
#elif __x86_64__
CheckTypeSize(png_uint_32 *,8, 11214, 11)
#elif __ia64__
CheckTypeSize(png_uint_32 *,8, 11214, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_uint_32 *,4, 11214, 6)
#elif __powerpc64__
CheckTypeSize(png_uint_32 *,8, 11214, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_uint_32 *,4, 11214, 10)
#elif __s390x__
CheckTypeSize(png_uint_32 *,8, 11214, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11214,0);
Msg("Find size of png_uint_32 * (11214)\n");
#endif

#if __i386__
CheckTypeSize(struct png_color_struct,3, 11215, 2)
CheckMemberSize(struct png_color_struct,green,1,2,40982)
CheckOffset(struct png_color_struct,green,1,2,40982)
CheckMemberSize(struct png_color_struct,blue,1,2,40983)
CheckOffset(struct png_color_struct,blue,2,2,40983)
#elif __x86_64__
CheckTypeSize(struct png_color_struct,3, 11215, 11)
CheckMemberSize(struct png_color_struct,green,1,11,40982)
CheckOffset(struct png_color_struct,green,1,11,40982)
CheckMemberSize(struct png_color_struct,blue,1,11,40983)
CheckOffset(struct png_color_struct,blue,2,11,40983)
#elif __ia64__
CheckTypeSize(struct png_color_struct,3, 11215, 3)
CheckMemberSize(struct png_color_struct,green,1,3,40982)
CheckOffset(struct png_color_struct,green,1,3,40982)
CheckMemberSize(struct png_color_struct,blue,1,3,40983)
CheckOffset(struct png_color_struct,blue,2,3,40983)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct png_color_struct,3, 11215, 6)
CheckMemberSize(struct png_color_struct,green,1,6,40982)
CheckOffset(struct png_color_struct,green,1,6,40982)
CheckMemberSize(struct png_color_struct,blue,1,6,40983)
CheckOffset(struct png_color_struct,blue,2,6,40983)
#elif __powerpc64__
CheckTypeSize(struct png_color_struct,3, 11215, 9)
CheckMemberSize(struct png_color_struct,green,1,9,40982)
CheckOffset(struct png_color_struct,green,1,9,40982)
CheckMemberSize(struct png_color_struct,blue,1,9,40983)
CheckOffset(struct png_color_struct,blue,2,9,40983)
#elif __s390__ && !__s390x__
CheckTypeSize(struct png_color_struct,3, 11215, 10)
CheckMemberSize(struct png_color_struct,green,1,10,40982)
CheckOffset(struct png_color_struct,green,1,10,40982)
CheckMemberSize(struct png_color_struct,blue,1,10,40983)
CheckOffset(struct png_color_struct,blue,2,10,40983)
#elif __s390x__
CheckTypeSize(struct png_color_struct,3, 11215, 12)
CheckMemberSize(struct png_color_struct,green,1,12,40982)
CheckOffset(struct png_color_struct,green,1,12,40982)
CheckMemberSize(struct png_color_struct,blue,1,12,40983)
CheckOffset(struct png_color_struct,blue,2,12,40983)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11215,0);
Msg("Find size of png_color_struct (11215)\n");
#endif

#if __i386__
CheckTypeSize(png_color,3, 11216, 2)
#elif __x86_64__
CheckTypeSize(png_color,3, 11216, 11)
#elif __ia64__
CheckTypeSize(png_color,3, 11216, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_color,3, 11216, 6)
#elif __powerpc64__
CheckTypeSize(png_color,3, 11216, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_color,3, 11216, 10)
#elif __s390x__
CheckTypeSize(png_color,3, 11216, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11216,0);
Msg("Find size of png_color (11216)\n");
#endif

#if __i386__
CheckTypeSize(png_color *,4, 11217, 2)
#elif __x86_64__
CheckTypeSize(png_color *,8, 11217, 11)
#elif __ia64__
CheckTypeSize(png_color *,8, 11217, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_color *,4, 11217, 6)
#elif __powerpc64__
CheckTypeSize(png_color *,8, 11217, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_color *,4, 11217, 10)
#elif __s390x__
CheckTypeSize(png_color *,8, 11217, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11217,0);
Msg("Find size of png_color * (11217)\n");
#endif

#if __i386__
CheckTypeSize(png_colorp,4, 11218, 2)
#elif __x86_64__
CheckTypeSize(png_colorp,8, 11218, 11)
#elif __ia64__
CheckTypeSize(png_colorp,8, 11218, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_colorp,4, 11218, 6)
#elif __powerpc64__
CheckTypeSize(png_colorp,8, 11218, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_colorp,4, 11218, 10)
#elif __s390x__
CheckTypeSize(png_colorp,8, 11218, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11218,0);
Msg("Find size of png_colorp (11218)\n");
#endif

#if __i386__
CheckTypeSize(png_colorp *,4, 11219, 2)
#elif __x86_64__
CheckTypeSize(png_colorp *,8, 11219, 11)
#elif __ia64__
CheckTypeSize(png_colorp *,8, 11219, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_colorp *,4, 11219, 6)
#elif __powerpc64__
CheckTypeSize(png_colorp *,8, 11219, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_colorp *,4, 11219, 10)
#elif __s390x__
CheckTypeSize(png_colorp *,8, 11219, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11219,0);
Msg("Find size of png_colorp * (11219)\n");
#endif

#if __i386__
CheckTypeSize(png_const_charp,4, 11220, 2)
#elif __x86_64__
CheckTypeSize(png_const_charp,8, 11220, 11)
#elif __ia64__
CheckTypeSize(png_const_charp,8, 11220, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_const_charp,4, 11220, 6)
#elif __powerpc64__
CheckTypeSize(png_const_charp,8, 11220, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_const_charp,4, 11220, 10)
#elif __s390x__
CheckTypeSize(png_const_charp,8, 11220, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11220,0);
Msg("Find size of png_const_charp (11220)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11221,0);
Msg("Find size of fptr_png_122 (11221)\n");
#endif

#if __i386__
CheckTypeSize(png_error_ptr,4, 11222, 2)
#elif __x86_64__
CheckTypeSize(png_error_ptr,8, 11222, 11)
#elif __ia64__
CheckTypeSize(png_error_ptr,8, 11222, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_error_ptr,4, 11222, 6)
#elif __powerpc64__
CheckTypeSize(png_error_ptr,8, 11222, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_error_ptr,4, 11222, 10)
#elif __s390x__
CheckTypeSize(png_error_ptr,8, 11222, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11222,0);
Msg("Find size of png_error_ptr (11222)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11223,0);
Msg("Find size of fptr_png_2 (11223)\n");
#endif

#if __i386__
CheckTypeSize(png_rw_ptr,4, 11224, 2)
#elif __x86_64__
CheckTypeSize(png_rw_ptr,8, 11224, 11)
#elif __ia64__
CheckTypeSize(png_rw_ptr,8, 11224, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_rw_ptr,4, 11224, 6)
#elif __powerpc64__
CheckTypeSize(png_rw_ptr,8, 11224, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_rw_ptr,4, 11224, 10)
#elif __s390x__
CheckTypeSize(png_rw_ptr,8, 11224, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11224,0);
Msg("Find size of png_rw_ptr (11224)\n");
#endif

#if __i386__
CheckTypeSize(struct png_time_struct,8, 11225, 2)
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
#elif __x86_64__
CheckTypeSize(struct png_time_struct,8, 11225, 11)
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
#elif __ia64__
CheckTypeSize(struct png_time_struct,8, 11225, 3)
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
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct png_time_struct,8, 11225, 6)
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
#elif __powerpc64__
CheckTypeSize(struct png_time_struct,8, 11225, 9)
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
#elif __s390__ && !__s390x__
CheckTypeSize(struct png_time_struct,8, 11225, 10)
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
#elif __s390x__
CheckTypeSize(struct png_time_struct,8, 11225, 12)
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
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11225,0);
Msg("Find size of png_time_struct (11225)\n");
#endif

#if __i386__
CheckTypeSize(png_time,8, 11226, 2)
#elif __x86_64__
CheckTypeSize(png_time,8, 11226, 11)
#elif __ia64__
CheckTypeSize(png_time,8, 11226, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_time,8, 11226, 6)
#elif __powerpc64__
CheckTypeSize(png_time,8, 11226, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_time,8, 11226, 10)
#elif __s390x__
CheckTypeSize(png_time,8, 11226, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11226,0);
Msg("Find size of png_time (11226)\n");
#endif

#if __i386__
CheckTypeSize(png_time *,4, 11227, 2)
#elif __x86_64__
CheckTypeSize(png_time *,8, 11227, 11)
#elif __ia64__
CheckTypeSize(png_time *,8, 11227, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_time *,4, 11227, 6)
#elif __powerpc64__
CheckTypeSize(png_time *,8, 11227, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_time *,4, 11227, 10)
#elif __s390x__
CheckTypeSize(png_time *,8, 11227, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11227,0);
Msg("Find size of png_time * (11227)\n");
#endif

#if __i386__
CheckTypeSize(png_timep,4, 11228, 2)
#elif __x86_64__
CheckTypeSize(png_timep,8, 11228, 11)
#elif __ia64__
CheckTypeSize(png_timep,8, 11228, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_timep,4, 11228, 6)
#elif __powerpc64__
CheckTypeSize(png_timep,8, 11228, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_timep,4, 11228, 10)
#elif __s390x__
CheckTypeSize(png_timep,8, 11228, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11228,0);
Msg("Find size of png_timep (11228)\n");
#endif

#if __i386__
CheckTypeSize(png_timep *,4, 11229, 2)
#elif __x86_64__
CheckTypeSize(png_timep *,8, 11229, 11)
#elif __ia64__
CheckTypeSize(png_timep *,8, 11229, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_timep *,4, 11229, 6)
#elif __powerpc64__
CheckTypeSize(png_timep *,8, 11229, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_timep *,4, 11229, 10)
#elif __s390x__
CheckTypeSize(png_timep *,8, 11229, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11229,0);
Msg("Find size of png_timep * (11229)\n");
#endif

#if __i386__
CheckTypeSize(png_uint_16 *,4, 11230, 2)
#elif __x86_64__
CheckTypeSize(png_uint_16 *,8, 11230, 11)
#elif __ia64__
CheckTypeSize(png_uint_16 *,8, 11230, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_uint_16 *,4, 11230, 6)
#elif __powerpc64__
CheckTypeSize(png_uint_16 *,8, 11230, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_uint_16 *,4, 11230, 10)
#elif __s390x__
CheckTypeSize(png_uint_16 *,8, 11230, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11230,0);
Msg("Find size of png_uint_16 * (11230)\n");
#endif

#if __i386__
CheckTypeSize(png_uint_16p,4, 11231, 2)
#elif __x86_64__
CheckTypeSize(png_uint_16p,8, 11231, 11)
#elif __ia64__
CheckTypeSize(png_uint_16p,8, 11231, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_uint_16p,4, 11231, 6)
#elif __powerpc64__
CheckTypeSize(png_uint_16p,8, 11231, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_uint_16p,4, 11231, 10)
#elif __s390x__
CheckTypeSize(png_uint_16p,8, 11231, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11231,0);
Msg("Find size of png_uint_16p (11231)\n");
#endif

#if __i386__
CheckTypeSize(png_color_16p *,4, 11232, 2)
#elif __x86_64__
CheckTypeSize(png_color_16p *,8, 11232, 11)
#elif __ia64__
CheckTypeSize(png_color_16p *,8, 11232, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_color_16p *,4, 11232, 6)
#elif __powerpc64__
CheckTypeSize(png_color_16p *,8, 11232, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_color_16p *,4, 11232, 10)
#elif __s390x__
CheckTypeSize(png_color_16p *,8, 11232, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11232,0);
Msg("Find size of png_color_16p * (11232)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11233,0);
Msg("Find size of fptr_png_124 (11233)\n");
#endif

#if __i386__
CheckTypeSize(png_flush_ptr,4, 11234, 2)
#elif __x86_64__
CheckTypeSize(png_flush_ptr,8, 11234, 11)
#elif __ia64__
CheckTypeSize(png_flush_ptr,8, 11234, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_flush_ptr,4, 11234, 6)
#elif __powerpc64__
CheckTypeSize(png_flush_ptr,8, 11234, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_flush_ptr,4, 11234, 10)
#elif __s390x__
CheckTypeSize(png_flush_ptr,8, 11234, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11234,0);
Msg("Find size of png_flush_ptr (11234)\n");
#endif

#if __i386__
CheckTypeSize(png_uint_16p *,4, 11235, 2)
#elif __x86_64__
CheckTypeSize(png_uint_16p *,8, 11235, 11)
#elif __ia64__
CheckTypeSize(png_uint_16p *,8, 11235, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_uint_16p *,4, 11235, 6)
#elif __powerpc64__
CheckTypeSize(png_uint_16p *,8, 11235, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_uint_16p *,4, 11235, 10)
#elif __s390x__
CheckTypeSize(png_uint_16p *,8, 11235, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11235,0);
Msg("Find size of png_uint_16p * (11235)\n");
#endif

#if __i386__
CheckTypeSize(png_charpp,4, 11236, 2)
#elif __x86_64__
CheckTypeSize(png_charpp,8, 11236, 11)
#elif __ia64__
CheckTypeSize(png_charpp,8, 11236, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_charpp,4, 11236, 6)
#elif __powerpc64__
CheckTypeSize(png_charpp,8, 11236, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_charpp,4, 11236, 10)
#elif __s390x__
CheckTypeSize(png_charpp,8, 11236, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11236,0);
Msg("Find size of png_charpp (11236)\n");
#endif

#if __i386__
CheckTypeSize(png_bytep *,4, 11237, 2)
#elif __x86_64__
CheckTypeSize(png_bytep *,8, 11237, 11)
#elif __ia64__
CheckTypeSize(png_bytep *,8, 11237, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_bytep *,4, 11237, 6)
#elif __powerpc64__
CheckTypeSize(png_bytep *,8, 11237, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_bytep *,4, 11237, 10)
#elif __s390x__
CheckTypeSize(png_bytep *,8, 11237, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11237,0);
Msg("Find size of png_bytep * (11237)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11238,0);
Msg("Find size of png_struct * * (11238)\n");
#endif

#if __i386__
CheckTypeSize(png_structpp,4, 11239, 2)
#elif __x86_64__
CheckTypeSize(png_structpp,8, 11239, 11)
#elif __ia64__
CheckTypeSize(png_structpp,8, 11239, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_structpp,4, 11239, 6)
#elif __powerpc64__
CheckTypeSize(png_structpp,8, 11239, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_structpp,4, 11239, 10)
#elif __s390x__
CheckTypeSize(png_structpp,8, 11239, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11239,0);
Msg("Find size of png_structpp (11239)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11240,0);
Msg("Find size of png_info * * (11240)\n");
#endif

#if __i386__
CheckTypeSize(png_infopp,4, 11241, 2)
#elif __x86_64__
CheckTypeSize(png_infopp,8, 11241, 11)
#elif __ia64__
CheckTypeSize(png_infopp,8, 11241, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_infopp,4, 11241, 6)
#elif __powerpc64__
CheckTypeSize(png_infopp,8, 11241, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_infopp,4, 11241, 10)
#elif __s390x__
CheckTypeSize(png_infopp,8, 11241, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11241,0);
Msg("Find size of png_infopp (11241)\n");
#endif

#if __i386__
CheckTypeSize(png_int_32 *,4, 11242, 2)
#elif __x86_64__
CheckTypeSize(png_int_32 *,8, 11242, 11)
#elif __ia64__
CheckTypeSize(png_int_32 *,8, 11242, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_int_32 *,4, 11242, 6)
#elif __powerpc64__
CheckTypeSize(png_int_32 *,8, 11242, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_int_32 *,4, 11242, 10)
#elif __s390x__
CheckTypeSize(png_int_32 *,8, 11242, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11242,0);
Msg("Find size of png_int_32 * (11242)\n");
#endif

#if __i386__
CheckTypeSize(png_FILE_p,4, 11243, 2)
#elif __x86_64__
CheckTypeSize(png_FILE_p,8, 11243, 11)
#elif __ia64__
CheckTypeSize(png_FILE_p,8, 11243, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_FILE_p,4, 11243, 6)
#elif __powerpc64__
CheckTypeSize(png_FILE_p,8, 11243, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_FILE_p,4, 11243, 10)
#elif __s390x__
CheckTypeSize(png_FILE_p,8, 11243, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11243,0);
Msg("Find size of png_FILE_p (11243)\n");
#endif

#if __i386__
CheckTypeSize(struct png_row_info_struct,12, 11244, 2)
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
#elif __x86_64__
CheckTypeSize(struct png_row_info_struct,24, 11244, 11)
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
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct png_row_info_struct,12, 11244, 6)
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
#elif __powerpc64__
CheckTypeSize(struct png_row_info_struct,24, 11244, 9)
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
#elif __s390__ && !__s390x__
CheckTypeSize(struct png_row_info_struct,12, 11244, 10)
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
#elif __s390x__
CheckTypeSize(struct png_row_info_struct,24, 11244, 12)
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
#elif __ia64__
CheckTypeSize(struct png_row_info_struct,24, 11244, 3)
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
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11244,0);
Msg("Find size of png_row_info_struct (11244)\n");
#endif

#if __i386__
CheckTypeSize(png_row_info,12, 11245, 2)
#elif __x86_64__
CheckTypeSize(png_row_info,24, 11245, 11)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_row_info,12, 11245, 6)
#elif __powerpc64__
CheckTypeSize(png_row_info,24, 11245, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_row_info,12, 11245, 10)
#elif __s390x__
CheckTypeSize(png_row_info,24, 11245, 12)
#elif __ia64__
CheckTypeSize(png_row_info,24, 11245, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11245,0);
Msg("Find size of png_row_info (11245)\n");
#endif

#if __i386__
CheckTypeSize(png_row_info *,4, 11246, 2)
#elif __x86_64__
CheckTypeSize(png_row_info *,8, 11246, 11)
#elif __ia64__
CheckTypeSize(png_row_info *,8, 11246, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_row_info *,4, 11246, 6)
#elif __powerpc64__
CheckTypeSize(png_row_info *,8, 11246, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_row_info *,4, 11246, 10)
#elif __s390x__
CheckTypeSize(png_row_info *,8, 11246, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11246,0);
Msg("Find size of png_row_info * (11246)\n");
#endif

#if __i386__
CheckTypeSize(png_row_infop,4, 11247, 2)
#elif __x86_64__
CheckTypeSize(png_row_infop,8, 11247, 11)
#elif __ia64__
CheckTypeSize(png_row_infop,8, 11247, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_row_infop,4, 11247, 6)
#elif __powerpc64__
CheckTypeSize(png_row_infop,8, 11247, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_row_infop,4, 11247, 10)
#elif __s390x__
CheckTypeSize(png_row_infop,8, 11247, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11247,0);
Msg("Find size of png_row_infop (11247)\n");
#endif

#if __i386__
CheckTypeSize(version_1_2_8,4, 11248, 2)
#elif __ia64__
CheckTypeSize(version_1_2_8,8, 11248, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(version_1_2_8,4, 11248, 6)
#elif __powerpc64__
CheckTypeSize(version_1_2_8,8, 11248, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(version_1_2_8,4, 11248, 10)
#elif __s390x__
CheckTypeSize(version_1_2_8,8, 11248, 12)
#elif __x86_64__
CheckTypeSize(version_1_2_8,8, 11248, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11248,0);
Msg("Find size of version_1_2_8 (11248)\n");
#endif

#if __i386__
CheckTypeSize(png_uint_32p,4, 16182, 2)
#elif __x86_64__
CheckTypeSize(png_uint_32p,8, 16182, 11)
#elif __ia64__
CheckTypeSize(png_uint_32p,8, 16182, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_uint_32p,4, 16182, 6)
#elif __powerpc64__
CheckTypeSize(png_uint_32p,8, 16182, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_uint_32p,4, 16182, 10)
#elif __s390x__
CheckTypeSize(png_uint_32p,8, 16182, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16182,0);
Msg("Find size of png_uint_32p (16182)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16183,0);
Msg("Find size of png_uint_16 * * (16183)\n");
#endif

#if __i386__
CheckTypeSize(png_uint_16pp,4, 16184, 2)
#elif __x86_64__
CheckTypeSize(png_uint_16pp,8, 16184, 11)
#elif __ia64__
CheckTypeSize(png_uint_16pp,8, 16184, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_uint_16pp,4, 16184, 6)
#elif __powerpc64__
CheckTypeSize(png_uint_16pp,8, 16184, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_uint_16pp,4, 16184, 10)
#elif __s390x__
CheckTypeSize(png_uint_16pp,8, 16184, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16184,0);
Msg("Find size of png_uint_16pp (16184)\n");
#endif

#if __i386__
CheckTypeSize(png_fixed_point,4, 16185, 2)
#elif __x86_64__
CheckTypeSize(png_fixed_point,8, 16185, 11)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_fixed_point,4, 16185, 6)
#elif __powerpc64__
CheckTypeSize(png_fixed_point,8, 16185, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_fixed_point,4, 16185, 10)
#elif __s390x__
CheckTypeSize(png_fixed_point,8, 16185, 12)
#elif __ia64__
CheckTypeSize(png_fixed_point,8, 16185, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16185,0);
Msg("Find size of png_fixed_point (16185)\n");
#endif

#if __i386__
CheckTypeSize(png_doublep,4, 16186, 2)
#elif __x86_64__
CheckTypeSize(png_doublep,8, 16186, 11)
#elif __ia64__
CheckTypeSize(png_doublep,8, 16186, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_doublep,4, 16186, 6)
#elif __powerpc64__
CheckTypeSize(png_doublep,8, 16186, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_doublep,4, 16186, 10)
#elif __s390x__
CheckTypeSize(png_doublep,8, 16186, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16186,0);
Msg("Find size of png_doublep (16186)\n");
#endif

#if __i386__
CheckTypeSize(charf *,4, 16187, 2)
#elif __x86_64__
CheckTypeSize(charf *,8, 16187, 11)
#elif __ia64__
CheckTypeSize(charf *,8, 16187, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(charf *,4, 16187, 6)
#elif __powerpc64__
CheckTypeSize(charf *,8, 16187, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(charf *,4, 16187, 10)
#elif __s390x__
CheckTypeSize(charf *,8, 16187, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16187,0);
Msg("Find size of charf * (16187)\n");
#endif

#if __i386__
CheckTypeSize(png_zcharp,4, 16188, 2)
#elif __x86_64__
CheckTypeSize(png_zcharp,8, 16188, 11)
#elif __ia64__
CheckTypeSize(png_zcharp,8, 16188, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_zcharp,4, 16188, 6)
#elif __powerpc64__
CheckTypeSize(png_zcharp,8, 16188, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_zcharp,4, 16188, 10)
#elif __s390x__
CheckTypeSize(png_zcharp,8, 16188, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16188,0);
Msg("Find size of png_zcharp (16188)\n");
#endif

#if __i386__
CheckTypeSize(png_fixed_point *,4, 16189, 2)
#elif __x86_64__
CheckTypeSize(png_fixed_point *,8, 16189, 11)
#elif __ia64__
CheckTypeSize(png_fixed_point *,8, 16189, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_fixed_point *,4, 16189, 6)
#elif __powerpc64__
CheckTypeSize(png_fixed_point *,8, 16189, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_fixed_point *,4, 16189, 10)
#elif __s390x__
CheckTypeSize(png_fixed_point *,8, 16189, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16189,0);
Msg("Find size of png_fixed_point * (16189)\n");
#endif

#if __i386__
CheckTypeSize(png_fixed_point_p,4, 16190, 2)
#elif __x86_64__
CheckTypeSize(png_fixed_point_p,8, 16190, 11)
#elif __ia64__
CheckTypeSize(png_fixed_point_p,8, 16190, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_fixed_point_p,4, 16190, 6)
#elif __powerpc64__
CheckTypeSize(png_fixed_point_p,8, 16190, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_fixed_point_p,4, 16190, 10)
#elif __s390x__
CheckTypeSize(png_fixed_point_p,8, 16190, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16190,0);
Msg("Find size of png_fixed_point_p (16190)\n");
#endif

#if __i386__
CheckTypeSize(png_int_32p,4, 16191, 2)
#elif __x86_64__
CheckTypeSize(png_int_32p,8, 16191, 11)
#elif __ia64__
CheckTypeSize(png_int_32p,8, 16191, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_int_32p,4, 16191, 6)
#elif __powerpc64__
CheckTypeSize(png_int_32p,8, 16191, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_int_32p,4, 16191, 10)
#elif __s390x__
CheckTypeSize(png_int_32p,8, 16191, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16191,0);
Msg("Find size of png_int_32p (16191)\n");
#endif

#if __i386__
CheckTypeSize(png_zstreamp,4, 16192, 2)
#elif __x86_64__
CheckTypeSize(png_zstreamp,8, 16192, 11)
#elif __ia64__
CheckTypeSize(png_zstreamp,8, 16192, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_zstreamp,4, 16192, 6)
#elif __powerpc64__
CheckTypeSize(png_zstreamp,8, 16192, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_zstreamp,4, 16192, 10)
#elif __s390x__
CheckTypeSize(png_zstreamp,8, 16192, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16192,0);
Msg("Find size of png_zstreamp (16192)\n");
#endif

#if __i386__
CheckTypeSize(png_int_16,2, 16193, 2)
#elif __x86_64__
CheckTypeSize(png_int_16,2, 16193, 11)
#elif __ia64__
CheckTypeSize(png_int_16,2, 16193, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_int_16,2, 16193, 6)
#elif __powerpc64__
CheckTypeSize(png_int_16,2, 16193, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_int_16,2, 16193, 10)
#elif __s390x__
CheckTypeSize(png_int_16,2, 16193, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16193,0);
Msg("Find size of png_int_16 (16193)\n");
#endif

#if __i386__
CheckTypeSize(png_int_16 *,4, 16194, 2)
#elif __x86_64__
CheckTypeSize(png_int_16 *,8, 16194, 11)
#elif __ia64__
CheckTypeSize(png_int_16 *,8, 16194, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_int_16 *,4, 16194, 6)
#elif __powerpc64__
CheckTypeSize(png_int_16 *,8, 16194, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_int_16 *,4, 16194, 10)
#elif __s390x__
CheckTypeSize(png_int_16 *,8, 16194, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16194,0);
Msg("Find size of png_int_16 * (16194)\n");
#endif

#if __i386__
CheckTypeSize(png_int_16p,4, 16195, 2)
#elif __x86_64__
CheckTypeSize(png_int_16p,8, 16195, 11)
#elif __ia64__
CheckTypeSize(png_int_16p,8, 16195, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_int_16p,4, 16195, 6)
#elif __powerpc64__
CheckTypeSize(png_int_16p,8, 16195, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_int_16p,4, 16195, 10)
#elif __s390x__
CheckTypeSize(png_int_16p,8, 16195, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16195,0);
Msg("Find size of png_int_16p (16195)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16196,0);
Msg("Find size of png_int_16 * * (16196)\n");
#endif

#if __i386__
CheckTypeSize(png_int_16pp,4, 16197, 2)
#elif __x86_64__
CheckTypeSize(png_int_16pp,8, 16197, 11)
#elif __ia64__
CheckTypeSize(png_int_16pp,8, 16197, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_int_16pp,4, 16197, 6)
#elif __powerpc64__
CheckTypeSize(png_int_16pp,8, 16197, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_int_16pp,4, 16197, 10)
#elif __s390x__
CheckTypeSize(png_int_16pp,8, 16197, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16197,0);
Msg("Find size of png_int_16pp (16197)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16198,0);
Msg("Find size of png_int_32 * * (16198)\n");
#endif

#if __i386__
CheckTypeSize(png_int_32pp,4, 16199, 2)
#elif __x86_64__
CheckTypeSize(png_int_32pp,8, 16199, 11)
#elif __ia64__
CheckTypeSize(png_int_32pp,8, 16199, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_int_32pp,4, 16199, 6)
#elif __powerpc64__
CheckTypeSize(png_int_32pp,8, 16199, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_int_32pp,4, 16199, 10)
#elif __s390x__
CheckTypeSize(png_int_32pp,8, 16199, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16199,0);
Msg("Find size of png_int_32pp (16199)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16200,0);
Msg("Find size of png_uint_32 * * (16200)\n");
#endif

#if __i386__
CheckTypeSize(png_uint_32pp,4, 16201, 2)
#elif __x86_64__
CheckTypeSize(png_uint_32pp,8, 16201, 11)
#elif __ia64__
CheckTypeSize(png_uint_32pp,8, 16201, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_uint_32pp,4, 16201, 6)
#elif __powerpc64__
CheckTypeSize(png_uint_32pp,8, 16201, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_uint_32pp,4, 16201, 10)
#elif __s390x__
CheckTypeSize(png_uint_32pp,8, 16201, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16201,0);
Msg("Find size of png_uint_32pp (16201)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16202,0);
Msg("Find size of charf * * (16202)\n");
#endif

#if __i386__
CheckTypeSize(png_zcharpp,4, 16203, 2)
#elif __x86_64__
CheckTypeSize(png_zcharpp,8, 16203, 11)
#elif __ia64__
CheckTypeSize(png_zcharpp,8, 16203, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_zcharpp,4, 16203, 6)
#elif __powerpc64__
CheckTypeSize(png_zcharpp,8, 16203, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_zcharpp,4, 16203, 10)
#elif __s390x__
CheckTypeSize(png_zcharpp,8, 16203, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16203,0);
Msg("Find size of png_zcharpp (16203)\n");
#endif

#if __i386__
CheckTypeSize(png_charppp,4, 16205, 2)
#elif __x86_64__
CheckTypeSize(png_charppp,8, 16205, 11)
#elif __ia64__
CheckTypeSize(png_charppp,8, 16205, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_charppp,4, 16205, 6)
#elif __powerpc64__
CheckTypeSize(png_charppp,8, 16205, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_charppp,4, 16205, 10)
#elif __s390x__
CheckTypeSize(png_charppp,8, 16205, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16205,0);
Msg("Find size of png_charppp (16205)\n");
#endif

#if __i386__
CheckTypeSize(png_const_charpp,4, 16207, 2)
#elif __x86_64__
CheckTypeSize(png_const_charpp,8, 16207, 11)
#elif __ia64__
CheckTypeSize(png_const_charpp,8, 16207, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_const_charpp,4, 16207, 6)
#elif __powerpc64__
CheckTypeSize(png_const_charpp,8, 16207, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_const_charpp,4, 16207, 10)
#elif __s390x__
CheckTypeSize(png_const_charpp,8, 16207, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16207,0);
Msg("Find size of png_const_charpp (16207)\n");
#endif

#if __i386__
CheckTypeSize(png_doublepp,4, 16209, 2)
#elif __x86_64__
CheckTypeSize(png_doublepp,8, 16209, 11)
#elif __ia64__
CheckTypeSize(png_doublepp,8, 16209, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_doublepp,4, 16209, 6)
#elif __powerpc64__
CheckTypeSize(png_doublepp,8, 16209, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_doublepp,4, 16209, 10)
#elif __s390x__
CheckTypeSize(png_doublepp,8, 16209, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16209,0);
Msg("Find size of png_doublepp (16209)\n");
#endif

#if __i386__
CheckTypeSize(png_colorpp,4, 16210, 2)
#elif __x86_64__
CheckTypeSize(png_colorpp,8, 16210, 11)
#elif __ia64__
CheckTypeSize(png_colorpp,8, 16210, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_colorpp,4, 16210, 6)
#elif __powerpc64__
CheckTypeSize(png_colorpp,8, 16210, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_colorpp,4, 16210, 10)
#elif __s390x__
CheckTypeSize(png_colorpp,8, 16210, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16210,0);
Msg("Find size of png_colorpp (16210)\n");
#endif

#if __i386__
CheckTypeSize(png_color_16pp,4, 16211, 2)
#elif __x86_64__
CheckTypeSize(png_color_16pp,8, 16211, 11)
#elif __ia64__
CheckTypeSize(png_color_16pp,8, 16211, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_color_16pp,4, 16211, 6)
#elif __powerpc64__
CheckTypeSize(png_color_16pp,8, 16211, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_color_16pp,4, 16211, 10)
#elif __s390x__
CheckTypeSize(png_color_16pp,8, 16211, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16211,0);
Msg("Find size of png_color_16pp (16211)\n");
#endif

#if __i386__
CheckTypeSize(png_color_8pp,4, 16212, 2)
#elif __x86_64__
CheckTypeSize(png_color_8pp,8, 16212, 11)
#elif __ia64__
CheckTypeSize(png_color_8pp,8, 16212, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_color_8pp,4, 16212, 6)
#elif __powerpc64__
CheckTypeSize(png_color_8pp,8, 16212, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_color_8pp,4, 16212, 10)
#elif __s390x__
CheckTypeSize(png_color_8pp,8, 16212, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16212,0);
Msg("Find size of png_color_8pp (16212)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16213,0);
Msg("Find size of png_fixed_point * * (16213)\n");
#endif

#if __i386__
CheckTypeSize(png_fixed_point_pp,4, 16214, 2)
#elif __x86_64__
CheckTypeSize(png_fixed_point_pp,8, 16214, 11)
#elif __ia64__
CheckTypeSize(png_fixed_point_pp,8, 16214, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_fixed_point_pp,4, 16214, 6)
#elif __powerpc64__
CheckTypeSize(png_fixed_point_pp,8, 16214, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_fixed_point_pp,4, 16214, 10)
#elif __s390x__
CheckTypeSize(png_fixed_point_pp,8, 16214, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16214,0);
Msg("Find size of png_fixed_point_pp (16214)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16215,0);
Msg("Find size of png_row_info * * (16215)\n");
#endif

#if __i386__
CheckTypeSize(png_row_infopp,4, 16216, 2)
#elif __x86_64__
CheckTypeSize(png_row_infopp,8, 16216, 11)
#elif __ia64__
CheckTypeSize(png_row_infopp,8, 16216, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_row_infopp,4, 16216, 6)
#elif __powerpc64__
CheckTypeSize(png_row_infopp,8, 16216, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_row_infopp,4, 16216, 10)
#elif __s390x__
CheckTypeSize(png_row_infopp,8, 16216, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16216,0);
Msg("Find size of png_row_infopp (16216)\n");
#endif

#if __i386__
CheckTypeSize(png_textpp,4, 16217, 2)
#elif __x86_64__
CheckTypeSize(png_textpp,8, 16217, 11)
#elif __ia64__
CheckTypeSize(png_textpp,8, 16217, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_textpp,4, 16217, 6)
#elif __powerpc64__
CheckTypeSize(png_textpp,8, 16217, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_textpp,4, 16217, 10)
#elif __s390x__
CheckTypeSize(png_textpp,8, 16217, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16217,0);
Msg("Find size of png_textpp (16217)\n");
#endif

#if __i386__
CheckTypeSize(png_timepp,4, 16218, 2)
#elif __x86_64__
CheckTypeSize(png_timepp,8, 16218, 11)
#elif __ia64__
CheckTypeSize(png_timepp,8, 16218, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(png_timepp,4, 16218, 6)
#elif __powerpc64__
CheckTypeSize(png_timepp,8, 16218, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(png_timepp,4, 16218, 10)
#elif __s390x__
CheckTypeSize(png_timepp,8, 16218, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16218,0);
Msg("Find size of png_timepp (16218)\n");
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
