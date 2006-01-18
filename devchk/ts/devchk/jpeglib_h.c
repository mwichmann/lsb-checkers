/*
 * Test of jpeglib.h
 */
#include "hdrchk.h"
#include "sys/types.h"
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
/* No test for HAVE_STDDEF_H */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for HAVE_STDLIB_H */
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
CheckTypeSize(struct jpeg_decompress_struct,464, 11249, 2)
CheckMemberSize(struct jpeg_decompress_struct,mem,4,2,41081)
CheckOffset(struct jpeg_decompress_struct,mem,4,2,41081)
CheckMemberSize(struct jpeg_decompress_struct,progress,4,2,41082)
CheckOffset(struct jpeg_decompress_struct,progress,8,2,41082)
CheckMemberSize(struct jpeg_decompress_struct,client_data,4,2,41083)
CheckOffset(struct jpeg_decompress_struct,client_data,12,2,41083)
CheckMemberSize(struct jpeg_decompress_struct,is_decompressor,4,2,41084)
CheckOffset(struct jpeg_decompress_struct,is_decompressor,16,2,41084)
CheckMemberSize(struct jpeg_decompress_struct,global_state,4,2,41085)
CheckOffset(struct jpeg_decompress_struct,global_state,20,2,41085)
CheckMemberSize(struct jpeg_decompress_struct,src,4,2,41099)
CheckOffset(struct jpeg_decompress_struct,src,24,2,41099)
CheckMemberSize(struct jpeg_decompress_struct,image_width,4,2,41100)
CheckOffset(struct jpeg_decompress_struct,image_width,28,2,41100)
CheckMemberSize(struct jpeg_decompress_struct,image_height,4,2,41101)
CheckOffset(struct jpeg_decompress_struct,image_height,32,2,41101)
CheckMemberSize(struct jpeg_decompress_struct,num_components,4,2,41102)
CheckOffset(struct jpeg_decompress_struct,num_components,36,2,41102)
CheckMemberSize(struct jpeg_decompress_struct,jpeg_color_space,4,2,41109)
CheckOffset(struct jpeg_decompress_struct,jpeg_color_space,40,2,41109)
CheckMemberSize(struct jpeg_decompress_struct,out_color_space,4,2,41110)
CheckOffset(struct jpeg_decompress_struct,out_color_space,44,2,41110)
CheckMemberSize(struct jpeg_decompress_struct,scale_num,4,2,41111)
CheckOffset(struct jpeg_decompress_struct,scale_num,48,2,41111)
CheckMemberSize(struct jpeg_decompress_struct,scale_denom,4,2,41112)
CheckOffset(struct jpeg_decompress_struct,scale_denom,52,2,41112)
CheckMemberSize(struct jpeg_decompress_struct,output_gamma,8,2,41113)
CheckOffset(struct jpeg_decompress_struct,output_gamma,56,2,41113)
CheckMemberSize(struct jpeg_decompress_struct,buffered_image,4,2,41114)
CheckOffset(struct jpeg_decompress_struct,buffered_image,64,2,41114)
CheckMemberSize(struct jpeg_decompress_struct,raw_data_out,4,2,41115)
CheckOffset(struct jpeg_decompress_struct,raw_data_out,68,2,41115)
CheckMemberSize(struct jpeg_decompress_struct,dct_method,4,2,41119)
CheckOffset(struct jpeg_decompress_struct,dct_method,72,2,41119)
CheckMemberSize(struct jpeg_decompress_struct,do_fancy_upsampling,4,2,41120)
CheckOffset(struct jpeg_decompress_struct,do_fancy_upsampling,76,2,41120)
CheckMemberSize(struct jpeg_decompress_struct,do_block_smoothing,4,2,41121)
CheckOffset(struct jpeg_decompress_struct,do_block_smoothing,80,2,41121)
CheckMemberSize(struct jpeg_decompress_struct,quantize_colors,4,2,41122)
CheckOffset(struct jpeg_decompress_struct,quantize_colors,84,2,41122)
CheckMemberSize(struct jpeg_decompress_struct,dither_mode,4,2,41126)
CheckOffset(struct jpeg_decompress_struct,dither_mode,88,2,41126)
CheckMemberSize(struct jpeg_decompress_struct,two_pass_quantize,4,2,41127)
CheckOffset(struct jpeg_decompress_struct,two_pass_quantize,92,2,41127)
CheckMemberSize(struct jpeg_decompress_struct,desired_number_of_colors,4,2,41128)
CheckOffset(struct jpeg_decompress_struct,desired_number_of_colors,96,2,41128)
CheckMemberSize(struct jpeg_decompress_struct,enable_1pass_quant,4,2,41129)
CheckOffset(struct jpeg_decompress_struct,enable_1pass_quant,100,2,41129)
CheckMemberSize(struct jpeg_decompress_struct,enable_external_quant,4,2,41130)
CheckOffset(struct jpeg_decompress_struct,enable_external_quant,104,2,41130)
CheckMemberSize(struct jpeg_decompress_struct,enable_2pass_quant,4,2,41131)
CheckOffset(struct jpeg_decompress_struct,enable_2pass_quant,108,2,41131)
CheckMemberSize(struct jpeg_decompress_struct,output_width,4,2,41132)
CheckOffset(struct jpeg_decompress_struct,output_width,112,2,41132)
CheckMemberSize(struct jpeg_decompress_struct,output_height,4,2,41133)
CheckOffset(struct jpeg_decompress_struct,output_height,116,2,41133)
CheckMemberSize(struct jpeg_decompress_struct,out_color_components,4,2,41134)
CheckOffset(struct jpeg_decompress_struct,out_color_components,120,2,41134)
CheckMemberSize(struct jpeg_decompress_struct,output_components,4,2,41135)
CheckOffset(struct jpeg_decompress_struct,output_components,124,2,41135)
CheckMemberSize(struct jpeg_decompress_struct,rec_outbuf_height,4,2,41136)
CheckOffset(struct jpeg_decompress_struct,rec_outbuf_height,128,2,41136)
CheckMemberSize(struct jpeg_decompress_struct,actual_number_of_colors,4,2,41137)
CheckOffset(struct jpeg_decompress_struct,actual_number_of_colors,132,2,41137)
CheckMemberSize(struct jpeg_decompress_struct,colormap,4,2,41138)
CheckOffset(struct jpeg_decompress_struct,colormap,136,2,41138)
CheckMemberSize(struct jpeg_decompress_struct,output_scanline,4,2,41139)
CheckOffset(struct jpeg_decompress_struct,output_scanline,140,2,41139)
CheckMemberSize(struct jpeg_decompress_struct,input_scan_number,4,2,41140)
CheckOffset(struct jpeg_decompress_struct,input_scan_number,144,2,41140)
CheckMemberSize(struct jpeg_decompress_struct,input_iMCU_row,4,2,41141)
CheckOffset(struct jpeg_decompress_struct,input_iMCU_row,148,2,41141)
CheckMemberSize(struct jpeg_decompress_struct,output_scan_number,4,2,41142)
CheckOffset(struct jpeg_decompress_struct,output_scan_number,152,2,41142)
CheckMemberSize(struct jpeg_decompress_struct,output_iMCU_row,4,2,41143)
CheckOffset(struct jpeg_decompress_struct,output_iMCU_row,156,2,41143)
CheckMemberSize(struct jpeg_decompress_struct,coef_bits,4,2,41144)
CheckOffset(struct jpeg_decompress_struct,coef_bits,160,2,41144)
CheckMemberSize(struct jpeg_decompress_struct,quant_tbl_ptrs,16,2,41147)
CheckOffset(struct jpeg_decompress_struct,quant_tbl_ptrs,164,2,41147)
CheckMemberSize(struct jpeg_decompress_struct,dc_huff_tbl_ptrs,16,2,41151)
CheckOffset(struct jpeg_decompress_struct,dc_huff_tbl_ptrs,180,2,41151)
CheckMemberSize(struct jpeg_decompress_struct,ac_huff_tbl_ptrs,16,2,41152)
CheckOffset(struct jpeg_decompress_struct,ac_huff_tbl_ptrs,196,2,41152)
CheckMemberSize(struct jpeg_decompress_struct,data_precision,4,2,41153)
CheckOffset(struct jpeg_decompress_struct,data_precision,212,2,41153)
CheckMemberSize(struct jpeg_decompress_struct,comp_info,4,2,41175)
CheckOffset(struct jpeg_decompress_struct,comp_info,216,2,41175)
CheckMemberSize(struct jpeg_decompress_struct,progressive_mode,4,2,41176)
CheckOffset(struct jpeg_decompress_struct,progressive_mode,220,2,41176)
CheckMemberSize(struct jpeg_decompress_struct,arith_code,4,2,41177)
CheckOffset(struct jpeg_decompress_struct,arith_code,224,2,41177)
CheckMemberSize(struct jpeg_decompress_struct,arith_dc_L,16,2,41178)
CheckOffset(struct jpeg_decompress_struct,arith_dc_L,228,2,41178)
CheckMemberSize(struct jpeg_decompress_struct,arith_dc_U,16,2,41179)
CheckOffset(struct jpeg_decompress_struct,arith_dc_U,244,2,41179)
CheckMemberSize(struct jpeg_decompress_struct,arith_ac_K,16,2,41180)
CheckOffset(struct jpeg_decompress_struct,arith_ac_K,260,2,41180)
CheckMemberSize(struct jpeg_decompress_struct,restart_interval,4,2,41181)
CheckOffset(struct jpeg_decompress_struct,restart_interval,276,2,41181)
CheckMemberSize(struct jpeg_decompress_struct,saw_JFIF_marker,4,2,41182)
CheckOffset(struct jpeg_decompress_struct,saw_JFIF_marker,280,2,41182)
CheckMemberSize(struct jpeg_decompress_struct,JFIF_major_version,1,2,41183)
CheckOffset(struct jpeg_decompress_struct,JFIF_major_version,284,2,41183)
CheckMemberSize(struct jpeg_decompress_struct,JFIF_minor_version,1,2,41184)
CheckOffset(struct jpeg_decompress_struct,JFIF_minor_version,285,2,41184)
CheckMemberSize(struct jpeg_decompress_struct,density_unit,1,2,41185)
CheckOffset(struct jpeg_decompress_struct,density_unit,286,2,41185)
CheckMemberSize(struct jpeg_decompress_struct,X_density,2,2,41186)
CheckOffset(struct jpeg_decompress_struct,X_density,288,2,41186)
CheckMemberSize(struct jpeg_decompress_struct,Y_density,2,2,41187)
CheckOffset(struct jpeg_decompress_struct,Y_density,290,2,41187)
CheckMemberSize(struct jpeg_decompress_struct,saw_Adobe_marker,4,2,41188)
CheckOffset(struct jpeg_decompress_struct,saw_Adobe_marker,292,2,41188)
CheckMemberSize(struct jpeg_decompress_struct,Adobe_transform,1,2,41189)
CheckOffset(struct jpeg_decompress_struct,Adobe_transform,296,2,41189)
CheckMemberSize(struct jpeg_decompress_struct,CCIR601_sampling,4,2,41190)
CheckOffset(struct jpeg_decompress_struct,CCIR601_sampling,300,2,41190)
CheckMemberSize(struct jpeg_decompress_struct,marker_list,4,2,41196)
CheckOffset(struct jpeg_decompress_struct,marker_list,304,2,41196)
CheckMemberSize(struct jpeg_decompress_struct,max_h_samp_factor,4,2,41197)
CheckOffset(struct jpeg_decompress_struct,max_h_samp_factor,308,2,41197)
CheckMemberSize(struct jpeg_decompress_struct,max_v_samp_factor,4,2,41198)
CheckOffset(struct jpeg_decompress_struct,max_v_samp_factor,312,2,41198)
CheckMemberSize(struct jpeg_decompress_struct,min_DCT_scaled_size,4,2,41199)
CheckOffset(struct jpeg_decompress_struct,min_DCT_scaled_size,316,2,41199)
CheckMemberSize(struct jpeg_decompress_struct,total_iMCU_rows,4,2,41200)
CheckOffset(struct jpeg_decompress_struct,total_iMCU_rows,320,2,41200)
CheckMemberSize(struct jpeg_decompress_struct,sample_range_limit,4,2,41201)
CheckOffset(struct jpeg_decompress_struct,sample_range_limit,324,2,41201)
CheckMemberSize(struct jpeg_decompress_struct,comps_in_scan,4,2,41202)
CheckOffset(struct jpeg_decompress_struct,comps_in_scan,328,2,41202)
CheckMemberSize(struct jpeg_decompress_struct,cur_comp_info,16,2,41203)
CheckOffset(struct jpeg_decompress_struct,cur_comp_info,332,2,41203)
CheckMemberSize(struct jpeg_decompress_struct,MCUs_per_row,4,2,41204)
CheckOffset(struct jpeg_decompress_struct,MCUs_per_row,348,2,41204)
CheckMemberSize(struct jpeg_decompress_struct,MCU_rows_in_scan,4,2,41205)
CheckOffset(struct jpeg_decompress_struct,MCU_rows_in_scan,352,2,41205)
CheckMemberSize(struct jpeg_decompress_struct,blocks_in_MCU,4,2,41206)
CheckOffset(struct jpeg_decompress_struct,blocks_in_MCU,356,2,41206)
CheckMemberSize(struct jpeg_decompress_struct,MCU_membership,40,2,41207)
CheckOffset(struct jpeg_decompress_struct,MCU_membership,360,2,41207)
CheckMemberSize(struct jpeg_decompress_struct,Ss,4,2,41208)
CheckOffset(struct jpeg_decompress_struct,Ss,400,2,41208)
CheckMemberSize(struct jpeg_decompress_struct,Se,4,2,41209)
CheckOffset(struct jpeg_decompress_struct,Se,404,2,41209)
CheckMemberSize(struct jpeg_decompress_struct,Ah,4,2,41210)
CheckOffset(struct jpeg_decompress_struct,Ah,408,2,41210)
CheckMemberSize(struct jpeg_decompress_struct,Al,4,2,41211)
CheckOffset(struct jpeg_decompress_struct,Al,412,2,41211)
CheckMemberSize(struct jpeg_decompress_struct,unread_marker,4,2,41212)
CheckOffset(struct jpeg_decompress_struct,unread_marker,416,2,41212)
CheckMemberSize(struct jpeg_decompress_struct,master,4,2,41213)
CheckOffset(struct jpeg_decompress_struct,master,420,2,41213)
CheckMemberSize(struct jpeg_decompress_struct,main,4,2,41214)
CheckOffset(struct jpeg_decompress_struct,main,424,2,41214)
CheckMemberSize(struct jpeg_decompress_struct,coef,4,2,41215)
CheckOffset(struct jpeg_decompress_struct,coef,428,2,41215)
CheckMemberSize(struct jpeg_decompress_struct,post,4,2,41216)
CheckOffset(struct jpeg_decompress_struct,post,432,2,41216)
CheckMemberSize(struct jpeg_decompress_struct,inputctl,4,2,41217)
CheckOffset(struct jpeg_decompress_struct,inputctl,436,2,41217)
CheckMemberSize(struct jpeg_decompress_struct,marker,4,2,41218)
CheckOffset(struct jpeg_decompress_struct,marker,440,2,41218)
CheckMemberSize(struct jpeg_decompress_struct,entropy,4,2,41219)
CheckOffset(struct jpeg_decompress_struct,entropy,444,2,41219)
CheckMemberSize(struct jpeg_decompress_struct,idct,4,2,41220)
CheckOffset(struct jpeg_decompress_struct,idct,448,2,41220)
CheckMemberSize(struct jpeg_decompress_struct,upsample,4,2,41221)
CheckOffset(struct jpeg_decompress_struct,upsample,452,2,41221)
CheckMemberSize(struct jpeg_decompress_struct,cconvert,4,2,41222)
CheckOffset(struct jpeg_decompress_struct,cconvert,456,2,41222)
CheckMemberSize(struct jpeg_decompress_struct,cquantize,4,2,41223)
CheckOffset(struct jpeg_decompress_struct,cquantize,460,2,41223)
#elif __x86_64__
CheckTypeSize(struct jpeg_decompress_struct,632, 11249, 11)
CheckMemberSize(struct jpeg_decompress_struct,mem,8,11,41081)
CheckOffset(struct jpeg_decompress_struct,mem,8,11,41081)
CheckMemberSize(struct jpeg_decompress_struct,progress,8,11,41082)
CheckOffset(struct jpeg_decompress_struct,progress,16,11,41082)
CheckMemberSize(struct jpeg_decompress_struct,client_data,8,11,41083)
CheckOffset(struct jpeg_decompress_struct,client_data,24,11,41083)
CheckMemberSize(struct jpeg_decompress_struct,is_decompressor,4,11,41084)
CheckOffset(struct jpeg_decompress_struct,is_decompressor,32,11,41084)
CheckMemberSize(struct jpeg_decompress_struct,global_state,4,11,41085)
CheckOffset(struct jpeg_decompress_struct,global_state,36,11,41085)
CheckMemberSize(struct jpeg_decompress_struct,src,8,11,41099)
CheckOffset(struct jpeg_decompress_struct,src,40,11,41099)
CheckMemberSize(struct jpeg_decompress_struct,image_width,4,11,41100)
CheckOffset(struct jpeg_decompress_struct,image_width,48,11,41100)
CheckMemberSize(struct jpeg_decompress_struct,image_height,4,11,41101)
CheckOffset(struct jpeg_decompress_struct,image_height,52,11,41101)
CheckMemberSize(struct jpeg_decompress_struct,num_components,4,11,41102)
CheckOffset(struct jpeg_decompress_struct,num_components,56,11,41102)
CheckMemberSize(struct jpeg_decompress_struct,jpeg_color_space,4,11,41109)
CheckOffset(struct jpeg_decompress_struct,jpeg_color_space,60,11,41109)
CheckMemberSize(struct jpeg_decompress_struct,out_color_space,4,11,41110)
CheckOffset(struct jpeg_decompress_struct,out_color_space,64,11,41110)
CheckMemberSize(struct jpeg_decompress_struct,scale_num,4,11,41111)
CheckOffset(struct jpeg_decompress_struct,scale_num,68,11,41111)
CheckMemberSize(struct jpeg_decompress_struct,scale_denom,4,11,41112)
CheckOffset(struct jpeg_decompress_struct,scale_denom,72,11,41112)
CheckMemberSize(struct jpeg_decompress_struct,output_gamma,8,11,41113)
CheckOffset(struct jpeg_decompress_struct,output_gamma,80,11,41113)
CheckMemberSize(struct jpeg_decompress_struct,buffered_image,4,11,41114)
CheckOffset(struct jpeg_decompress_struct,buffered_image,88,11,41114)
CheckMemberSize(struct jpeg_decompress_struct,raw_data_out,4,11,41115)
CheckOffset(struct jpeg_decompress_struct,raw_data_out,92,11,41115)
CheckMemberSize(struct jpeg_decompress_struct,dct_method,4,11,41119)
CheckOffset(struct jpeg_decompress_struct,dct_method,96,11,41119)
CheckMemberSize(struct jpeg_decompress_struct,do_fancy_upsampling,4,11,41120)
CheckOffset(struct jpeg_decompress_struct,do_fancy_upsampling,100,11,41120)
CheckMemberSize(struct jpeg_decompress_struct,do_block_smoothing,4,11,41121)
CheckOffset(struct jpeg_decompress_struct,do_block_smoothing,104,11,41121)
CheckMemberSize(struct jpeg_decompress_struct,quantize_colors,4,11,41122)
CheckOffset(struct jpeg_decompress_struct,quantize_colors,108,11,41122)
CheckMemberSize(struct jpeg_decompress_struct,dither_mode,4,11,41126)
CheckOffset(struct jpeg_decompress_struct,dither_mode,112,11,41126)
CheckMemberSize(struct jpeg_decompress_struct,two_pass_quantize,4,11,41127)
CheckOffset(struct jpeg_decompress_struct,two_pass_quantize,116,11,41127)
CheckMemberSize(struct jpeg_decompress_struct,desired_number_of_colors,4,11,41128)
CheckOffset(struct jpeg_decompress_struct,desired_number_of_colors,120,11,41128)
CheckMemberSize(struct jpeg_decompress_struct,enable_1pass_quant,4,11,41129)
CheckOffset(struct jpeg_decompress_struct,enable_1pass_quant,124,11,41129)
CheckMemberSize(struct jpeg_decompress_struct,enable_external_quant,4,11,41130)
CheckOffset(struct jpeg_decompress_struct,enable_external_quant,128,11,41130)
CheckMemberSize(struct jpeg_decompress_struct,enable_2pass_quant,4,11,41131)
CheckOffset(struct jpeg_decompress_struct,enable_2pass_quant,132,11,41131)
CheckMemberSize(struct jpeg_decompress_struct,output_width,4,11,41132)
CheckOffset(struct jpeg_decompress_struct,output_width,136,11,41132)
CheckMemberSize(struct jpeg_decompress_struct,output_height,4,11,41133)
CheckOffset(struct jpeg_decompress_struct,output_height,140,11,41133)
CheckMemberSize(struct jpeg_decompress_struct,out_color_components,4,11,41134)
CheckOffset(struct jpeg_decompress_struct,out_color_components,144,11,41134)
CheckMemberSize(struct jpeg_decompress_struct,output_components,4,11,41135)
CheckOffset(struct jpeg_decompress_struct,output_components,148,11,41135)
CheckMemberSize(struct jpeg_decompress_struct,rec_outbuf_height,4,11,41136)
CheckOffset(struct jpeg_decompress_struct,rec_outbuf_height,152,11,41136)
CheckMemberSize(struct jpeg_decompress_struct,actual_number_of_colors,4,11,41137)
CheckOffset(struct jpeg_decompress_struct,actual_number_of_colors,156,11,41137)
CheckMemberSize(struct jpeg_decompress_struct,colormap,8,11,41138)
CheckOffset(struct jpeg_decompress_struct,colormap,160,11,41138)
CheckMemberSize(struct jpeg_decompress_struct,output_scanline,4,11,41139)
CheckOffset(struct jpeg_decompress_struct,output_scanline,168,11,41139)
CheckMemberSize(struct jpeg_decompress_struct,input_scan_number,4,11,41140)
CheckOffset(struct jpeg_decompress_struct,input_scan_number,172,11,41140)
CheckMemberSize(struct jpeg_decompress_struct,input_iMCU_row,4,11,41141)
CheckOffset(struct jpeg_decompress_struct,input_iMCU_row,176,11,41141)
CheckMemberSize(struct jpeg_decompress_struct,output_scan_number,4,11,41142)
CheckOffset(struct jpeg_decompress_struct,output_scan_number,180,11,41142)
CheckMemberSize(struct jpeg_decompress_struct,output_iMCU_row,4,11,41143)
CheckOffset(struct jpeg_decompress_struct,output_iMCU_row,184,11,41143)
CheckMemberSize(struct jpeg_decompress_struct,coef_bits,8,11,41144)
CheckOffset(struct jpeg_decompress_struct,coef_bits,192,11,41144)
CheckMemberSize(struct jpeg_decompress_struct,quant_tbl_ptrs,32,11,41147)
CheckOffset(struct jpeg_decompress_struct,quant_tbl_ptrs,200,11,41147)
CheckMemberSize(struct jpeg_decompress_struct,dc_huff_tbl_ptrs,32,11,41151)
CheckOffset(struct jpeg_decompress_struct,dc_huff_tbl_ptrs,232,11,41151)
CheckMemberSize(struct jpeg_decompress_struct,ac_huff_tbl_ptrs,32,11,41152)
CheckOffset(struct jpeg_decompress_struct,ac_huff_tbl_ptrs,264,11,41152)
CheckMemberSize(struct jpeg_decompress_struct,data_precision,4,11,41153)
CheckOffset(struct jpeg_decompress_struct,data_precision,296,11,41153)
CheckMemberSize(struct jpeg_decompress_struct,comp_info,8,11,41175)
CheckOffset(struct jpeg_decompress_struct,comp_info,304,11,41175)
CheckMemberSize(struct jpeg_decompress_struct,progressive_mode,4,11,41176)
CheckOffset(struct jpeg_decompress_struct,progressive_mode,312,11,41176)
CheckMemberSize(struct jpeg_decompress_struct,arith_code,4,11,41177)
CheckOffset(struct jpeg_decompress_struct,arith_code,316,11,41177)
CheckMemberSize(struct jpeg_decompress_struct,arith_dc_L,16,11,41178)
CheckOffset(struct jpeg_decompress_struct,arith_dc_L,320,11,41178)
CheckMemberSize(struct jpeg_decompress_struct,arith_dc_U,16,11,41179)
CheckOffset(struct jpeg_decompress_struct,arith_dc_U,336,11,41179)
CheckMemberSize(struct jpeg_decompress_struct,arith_ac_K,16,11,41180)
CheckOffset(struct jpeg_decompress_struct,arith_ac_K,352,11,41180)
CheckMemberSize(struct jpeg_decompress_struct,restart_interval,4,11,41181)
CheckOffset(struct jpeg_decompress_struct,restart_interval,368,11,41181)
CheckMemberSize(struct jpeg_decompress_struct,saw_JFIF_marker,4,11,41182)
CheckOffset(struct jpeg_decompress_struct,saw_JFIF_marker,372,11,41182)
CheckMemberSize(struct jpeg_decompress_struct,JFIF_major_version,1,11,41183)
CheckOffset(struct jpeg_decompress_struct,JFIF_major_version,376,11,41183)
CheckMemberSize(struct jpeg_decompress_struct,JFIF_minor_version,1,11,41184)
CheckOffset(struct jpeg_decompress_struct,JFIF_minor_version,377,11,41184)
CheckMemberSize(struct jpeg_decompress_struct,density_unit,1,11,41185)
CheckOffset(struct jpeg_decompress_struct,density_unit,378,11,41185)
CheckMemberSize(struct jpeg_decompress_struct,X_density,2,11,41186)
CheckOffset(struct jpeg_decompress_struct,X_density,380,11,41186)
CheckMemberSize(struct jpeg_decompress_struct,Y_density,2,11,41187)
CheckOffset(struct jpeg_decompress_struct,Y_density,382,11,41187)
CheckMemberSize(struct jpeg_decompress_struct,saw_Adobe_marker,4,11,41188)
CheckOffset(struct jpeg_decompress_struct,saw_Adobe_marker,384,11,41188)
CheckMemberSize(struct jpeg_decompress_struct,Adobe_transform,1,11,41189)
CheckOffset(struct jpeg_decompress_struct,Adobe_transform,388,11,41189)
CheckMemberSize(struct jpeg_decompress_struct,CCIR601_sampling,4,11,41190)
CheckOffset(struct jpeg_decompress_struct,CCIR601_sampling,392,11,41190)
CheckMemberSize(struct jpeg_decompress_struct,marker_list,8,11,41196)
CheckOffset(struct jpeg_decompress_struct,marker_list,400,11,41196)
CheckMemberSize(struct jpeg_decompress_struct,max_h_samp_factor,4,11,41197)
CheckOffset(struct jpeg_decompress_struct,max_h_samp_factor,408,11,41197)
CheckMemberSize(struct jpeg_decompress_struct,max_v_samp_factor,4,11,41198)
CheckOffset(struct jpeg_decompress_struct,max_v_samp_factor,412,11,41198)
CheckMemberSize(struct jpeg_decompress_struct,min_DCT_scaled_size,4,11,41199)
CheckOffset(struct jpeg_decompress_struct,min_DCT_scaled_size,416,11,41199)
CheckMemberSize(struct jpeg_decompress_struct,total_iMCU_rows,4,11,41200)
CheckOffset(struct jpeg_decompress_struct,total_iMCU_rows,420,11,41200)
CheckMemberSize(struct jpeg_decompress_struct,sample_range_limit,8,11,41201)
CheckOffset(struct jpeg_decompress_struct,sample_range_limit,424,11,41201)
CheckMemberSize(struct jpeg_decompress_struct,comps_in_scan,4,11,41202)
CheckOffset(struct jpeg_decompress_struct,comps_in_scan,432,11,41202)
CheckMemberSize(struct jpeg_decompress_struct,cur_comp_info,32,11,41203)
CheckOffset(struct jpeg_decompress_struct,cur_comp_info,440,11,41203)
CheckMemberSize(struct jpeg_decompress_struct,MCUs_per_row,4,11,41204)
CheckOffset(struct jpeg_decompress_struct,MCUs_per_row,472,11,41204)
CheckMemberSize(struct jpeg_decompress_struct,MCU_rows_in_scan,4,11,41205)
CheckOffset(struct jpeg_decompress_struct,MCU_rows_in_scan,476,11,41205)
CheckMemberSize(struct jpeg_decompress_struct,blocks_in_MCU,4,11,41206)
CheckOffset(struct jpeg_decompress_struct,blocks_in_MCU,480,11,41206)
CheckMemberSize(struct jpeg_decompress_struct,MCU_membership,40,11,41207)
CheckOffset(struct jpeg_decompress_struct,MCU_membership,484,11,41207)
CheckMemberSize(struct jpeg_decompress_struct,Ss,4,11,41208)
CheckOffset(struct jpeg_decompress_struct,Ss,524,11,41208)
CheckMemberSize(struct jpeg_decompress_struct,Se,4,11,41209)
CheckOffset(struct jpeg_decompress_struct,Se,528,11,41209)
CheckMemberSize(struct jpeg_decompress_struct,Ah,4,11,41210)
CheckOffset(struct jpeg_decompress_struct,Ah,532,11,41210)
CheckMemberSize(struct jpeg_decompress_struct,Al,4,11,41211)
CheckOffset(struct jpeg_decompress_struct,Al,536,11,41211)
CheckMemberSize(struct jpeg_decompress_struct,unread_marker,4,11,41212)
CheckOffset(struct jpeg_decompress_struct,unread_marker,540,11,41212)
CheckMemberSize(struct jpeg_decompress_struct,master,8,11,41213)
CheckOffset(struct jpeg_decompress_struct,master,544,11,41213)
CheckMemberSize(struct jpeg_decompress_struct,main,8,11,41214)
CheckOffset(struct jpeg_decompress_struct,main,552,11,41214)
CheckMemberSize(struct jpeg_decompress_struct,coef,8,11,41215)
CheckOffset(struct jpeg_decompress_struct,coef,560,11,41215)
CheckMemberSize(struct jpeg_decompress_struct,post,8,11,41216)
CheckOffset(struct jpeg_decompress_struct,post,568,11,41216)
CheckMemberSize(struct jpeg_decompress_struct,inputctl,8,11,41217)
CheckOffset(struct jpeg_decompress_struct,inputctl,576,11,41217)
CheckMemberSize(struct jpeg_decompress_struct,marker,8,11,41218)
CheckOffset(struct jpeg_decompress_struct,marker,584,11,41218)
CheckMemberSize(struct jpeg_decompress_struct,entropy,8,11,41219)
CheckOffset(struct jpeg_decompress_struct,entropy,592,11,41219)
CheckMemberSize(struct jpeg_decompress_struct,idct,8,11,41220)
CheckOffset(struct jpeg_decompress_struct,idct,600,11,41220)
CheckMemberSize(struct jpeg_decompress_struct,upsample,8,11,41221)
CheckOffset(struct jpeg_decompress_struct,upsample,608,11,41221)
CheckMemberSize(struct jpeg_decompress_struct,cconvert,8,11,41222)
CheckOffset(struct jpeg_decompress_struct,cconvert,616,11,41222)
CheckMemberSize(struct jpeg_decompress_struct,cquantize,8,11,41223)
CheckOffset(struct jpeg_decompress_struct,cquantize,624,11,41223)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11249,0);
Msg("Find size of jpeg_decompress_struct (11249)\n");
#endif

#if __i386__
CheckTypeSize(struct jpeg_error_mgr,132, 11250, 2)
CheckMemberSize(struct jpeg_error_mgr,emit_message,4,2,41063)
CheckOffset(struct jpeg_error_mgr,emit_message,4,2,41063)
CheckMemberSize(struct jpeg_error_mgr,output_message,4,2,41064)
CheckOffset(struct jpeg_error_mgr,output_message,8,2,41064)
CheckMemberSize(struct jpeg_error_mgr,format_message,4,2,41067)
CheckOffset(struct jpeg_error_mgr,format_message,12,2,41067)
CheckMemberSize(struct jpeg_error_mgr,reset_error_mgr,4,2,41068)
CheckOffset(struct jpeg_error_mgr,reset_error_mgr,16,2,41068)
CheckMemberSize(struct jpeg_error_mgr,msg_code,4,2,41069)
CheckOffset(struct jpeg_error_mgr,msg_code,20,2,41069)
CheckMemberSize(struct jpeg_error_mgr,msg_parm,80,2,41072)
CheckOffset(struct jpeg_error_mgr,msg_parm,24,2,41072)
CheckMemberSize(struct jpeg_error_mgr,trace_level,4,2,41073)
CheckOffset(struct jpeg_error_mgr,trace_level,104,2,41073)
CheckMemberSize(struct jpeg_error_mgr,num_warnings,4,2,41074)
CheckOffset(struct jpeg_error_mgr,num_warnings,108,2,41074)
CheckMemberSize(struct jpeg_error_mgr,jpeg_message_table,4,2,41075)
CheckOffset(struct jpeg_error_mgr,jpeg_message_table,112,2,41075)
CheckMemberSize(struct jpeg_error_mgr,last_jpeg_message,4,2,41076)
CheckOffset(struct jpeg_error_mgr,last_jpeg_message,116,2,41076)
CheckMemberSize(struct jpeg_error_mgr,addon_message_table,4,2,41077)
CheckOffset(struct jpeg_error_mgr,addon_message_table,120,2,41077)
CheckMemberSize(struct jpeg_error_mgr,first_addon_message,4,2,41078)
CheckOffset(struct jpeg_error_mgr,first_addon_message,124,2,41078)
CheckMemberSize(struct jpeg_error_mgr,last_addon_message,4,2,41079)
CheckOffset(struct jpeg_error_mgr,last_addon_message,128,2,41079)
#elif __x86_64__
CheckTypeSize(struct jpeg_error_mgr,168, 11250, 11)
CheckMemberSize(struct jpeg_error_mgr,emit_message,8,11,41063)
CheckOffset(struct jpeg_error_mgr,emit_message,8,11,41063)
CheckMemberSize(struct jpeg_error_mgr,output_message,8,11,41064)
CheckOffset(struct jpeg_error_mgr,output_message,16,11,41064)
CheckMemberSize(struct jpeg_error_mgr,format_message,8,11,41067)
CheckOffset(struct jpeg_error_mgr,format_message,24,11,41067)
CheckMemberSize(struct jpeg_error_mgr,reset_error_mgr,8,11,41068)
CheckOffset(struct jpeg_error_mgr,reset_error_mgr,32,11,41068)
CheckMemberSize(struct jpeg_error_mgr,msg_code,4,11,41069)
CheckOffset(struct jpeg_error_mgr,msg_code,40,11,41069)
CheckMemberSize(struct jpeg_error_mgr,msg_parm,80,11,41072)
CheckOffset(struct jpeg_error_mgr,msg_parm,44,11,41072)
CheckMemberSize(struct jpeg_error_mgr,trace_level,4,11,41073)
CheckOffset(struct jpeg_error_mgr,trace_level,124,11,41073)
CheckMemberSize(struct jpeg_error_mgr,num_warnings,8,11,41074)
CheckOffset(struct jpeg_error_mgr,num_warnings,128,11,41074)
CheckMemberSize(struct jpeg_error_mgr,jpeg_message_table,8,11,41075)
CheckOffset(struct jpeg_error_mgr,jpeg_message_table,136,11,41075)
CheckMemberSize(struct jpeg_error_mgr,last_jpeg_message,4,11,41076)
CheckOffset(struct jpeg_error_mgr,last_jpeg_message,144,11,41076)
CheckMemberSize(struct jpeg_error_mgr,addon_message_table,8,11,41077)
CheckOffset(struct jpeg_error_mgr,addon_message_table,152,11,41077)
CheckMemberSize(struct jpeg_error_mgr,first_addon_message,4,11,41078)
CheckOffset(struct jpeg_error_mgr,first_addon_message,160,11,41078)
CheckMemberSize(struct jpeg_error_mgr,last_addon_message,4,11,41079)
CheckOffset(struct jpeg_error_mgr,last_addon_message,164,11,41079)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11250,0);
Msg("Find size of jpeg_error_mgr (11250)\n");
#endif

#if __i386__
CheckTypeSize(struct jpeg_common_struct,24, 11251, 2)
CheckMemberSize(struct jpeg_common_struct,mem,4,2,41052)
CheckOffset(struct jpeg_common_struct,mem,4,2,41052)
CheckMemberSize(struct jpeg_common_struct,progress,4,2,41058)
CheckOffset(struct jpeg_common_struct,progress,8,2,41058)
CheckMemberSize(struct jpeg_common_struct,client_data,4,2,41059)
CheckOffset(struct jpeg_common_struct,client_data,12,2,41059)
CheckMemberSize(struct jpeg_common_struct,is_decompressor,4,2,41060)
CheckOffset(struct jpeg_common_struct,is_decompressor,16,2,41060)
CheckMemberSize(struct jpeg_common_struct,global_state,4,2,41061)
CheckOffset(struct jpeg_common_struct,global_state,20,2,41061)
#elif __x86_64__
CheckTypeSize(struct jpeg_common_struct,40, 11251, 11)
CheckMemberSize(struct jpeg_common_struct,mem,8,11,41052)
CheckOffset(struct jpeg_common_struct,mem,8,11,41052)
CheckMemberSize(struct jpeg_common_struct,progress,8,11,41058)
CheckOffset(struct jpeg_common_struct,progress,16,11,41058)
CheckMemberSize(struct jpeg_common_struct,client_data,8,11,41059)
CheckOffset(struct jpeg_common_struct,client_data,24,11,41059)
CheckMemberSize(struct jpeg_common_struct,is_decompressor,4,11,41060)
CheckOffset(struct jpeg_common_struct,is_decompressor,32,11,41060)
CheckMemberSize(struct jpeg_common_struct,global_state,4,11,41061)
CheckOffset(struct jpeg_common_struct,global_state,36,11,41061)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11251,0);
Msg("Find size of jpeg_common_struct (11251)\n");
#endif

#if __i386__
CheckTypeSize(struct jpeg_error_mgr *,4, 11252, 2)
#elif __x86_64__
CheckTypeSize(struct jpeg_error_mgr *,8, 11252, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11252,0);
Msg("Find size of jpeg_error_mgr * (11252)\n");
#endif

#if __i386__
CheckTypeSize(struct jpeg_memory_mgr,52, 11253, 2)
CheckMemberSize(struct jpeg_memory_mgr,alloc_large,4,2,41007)
CheckOffset(struct jpeg_memory_mgr,alloc_large,4,2,41007)
CheckMemberSize(struct jpeg_memory_mgr,alloc_sarray,4,2,41012)
CheckOffset(struct jpeg_memory_mgr,alloc_sarray,8,2,41012)
CheckMemberSize(struct jpeg_memory_mgr,alloc_barray,4,2,41017)
CheckOffset(struct jpeg_memory_mgr,alloc_barray,12,2,41017)
CheckMemberSize(struct jpeg_memory_mgr,request_virt_sarray,4,2,41024)
CheckOffset(struct jpeg_memory_mgr,request_virt_sarray,16,2,41024)
CheckMemberSize(struct jpeg_memory_mgr,request_virt_barray,4,2,41031)
CheckOffset(struct jpeg_memory_mgr,request_virt_barray,20,2,41031)
CheckMemberSize(struct jpeg_memory_mgr,realize_virt_arrays,4,2,41033)
CheckOffset(struct jpeg_memory_mgr,realize_virt_arrays,24,2,41033)
CheckMemberSize(struct jpeg_memory_mgr,access_virt_sarray,4,2,41039)
CheckOffset(struct jpeg_memory_mgr,access_virt_sarray,28,2,41039)
CheckMemberSize(struct jpeg_memory_mgr,access_virt_barray,4,2,41045)
CheckOffset(struct jpeg_memory_mgr,access_virt_barray,32,2,41045)
CheckMemberSize(struct jpeg_memory_mgr,free_pool,4,2,41048)
CheckOffset(struct jpeg_memory_mgr,free_pool,36,2,41048)
CheckMemberSize(struct jpeg_memory_mgr,self_destruct,4,2,41049)
CheckOffset(struct jpeg_memory_mgr,self_destruct,40,2,41049)
CheckMemberSize(struct jpeg_memory_mgr,max_memory_to_use,4,2,41050)
CheckOffset(struct jpeg_memory_mgr,max_memory_to_use,44,2,41050)
CheckMemberSize(struct jpeg_memory_mgr,max_alloc_chunk,4,2,41051)
CheckOffset(struct jpeg_memory_mgr,max_alloc_chunk,48,2,41051)
#elif __x86_64__
CheckTypeSize(struct jpeg_memory_mgr,104, 11253, 11)
CheckMemberSize(struct jpeg_memory_mgr,alloc_large,8,11,41007)
CheckOffset(struct jpeg_memory_mgr,alloc_large,8,11,41007)
CheckMemberSize(struct jpeg_memory_mgr,alloc_sarray,8,11,41012)
CheckOffset(struct jpeg_memory_mgr,alloc_sarray,16,11,41012)
CheckMemberSize(struct jpeg_memory_mgr,alloc_barray,8,11,41017)
CheckOffset(struct jpeg_memory_mgr,alloc_barray,24,11,41017)
CheckMemberSize(struct jpeg_memory_mgr,request_virt_sarray,8,11,41024)
CheckOffset(struct jpeg_memory_mgr,request_virt_sarray,32,11,41024)
CheckMemberSize(struct jpeg_memory_mgr,request_virt_barray,8,11,41031)
CheckOffset(struct jpeg_memory_mgr,request_virt_barray,40,11,41031)
CheckMemberSize(struct jpeg_memory_mgr,realize_virt_arrays,8,11,41033)
CheckOffset(struct jpeg_memory_mgr,realize_virt_arrays,48,11,41033)
CheckMemberSize(struct jpeg_memory_mgr,access_virt_sarray,8,11,41039)
CheckOffset(struct jpeg_memory_mgr,access_virt_sarray,56,11,41039)
CheckMemberSize(struct jpeg_memory_mgr,access_virt_barray,8,11,41045)
CheckOffset(struct jpeg_memory_mgr,access_virt_barray,64,11,41045)
CheckMemberSize(struct jpeg_memory_mgr,free_pool,8,11,41048)
CheckOffset(struct jpeg_memory_mgr,free_pool,72,11,41048)
CheckMemberSize(struct jpeg_memory_mgr,self_destruct,8,11,41049)
CheckOffset(struct jpeg_memory_mgr,self_destruct,80,11,41049)
CheckMemberSize(struct jpeg_memory_mgr,max_memory_to_use,8,11,41050)
CheckOffset(struct jpeg_memory_mgr,max_memory_to_use,88,11,41050)
CheckMemberSize(struct jpeg_memory_mgr,max_alloc_chunk,8,11,41051)
CheckOffset(struct jpeg_memory_mgr,max_alloc_chunk,96,11,41051)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11253,0);
Msg("Find size of jpeg_memory_mgr (11253)\n");
#endif

#if __i386__
CheckTypeSize(struct jpeg_common_struct *,4, 11254, 2)
#elif __x86_64__
CheckTypeSize(struct jpeg_common_struct *,8, 11254, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11254,0);
Msg("Find size of jpeg_common_struct * (11254)\n");
#endif

#if __i386__
CheckTypeSize(j_common_ptr,4, 11255, 2)
#elif __x86_64__
CheckTypeSize(j_common_ptr,8, 11255, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11255,0);
Msg("Find size of j_common_ptr (11255)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11256,0);
Msg("Find size of fptr_jpeglib_528 (11256)\n");
#endif

#if __i386__
CheckTypeSize(JSAMPLE,1, 11257, 2)
#elif __x86_64__
CheckTypeSize(JSAMPLE,1, 11257, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11257,0);
Msg("Find size of JSAMPLE (11257)\n");
#endif

#if __i386__
CheckTypeSize(JSAMPLE *,4, 11258, 2)
#elif __x86_64__
CheckTypeSize(JSAMPLE *,8, 11258, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11258,0);
Msg("Find size of JSAMPLE * (11258)\n");
#endif

#if __i386__
CheckTypeSize(JSAMPROW,4, 11259, 2)
#elif __x86_64__
CheckTypeSize(JSAMPROW,8, 11259, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11259,0);
Msg("Find size of JSAMPROW (11259)\n");
#endif

#if __i386__
CheckTypeSize(JSAMPROW *,4, 11260, 2)
#elif __x86_64__
CheckTypeSize(JSAMPROW *,8, 11260, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11260,0);
Msg("Find size of JSAMPROW * (11260)\n");
#endif

#if __i386__
CheckTypeSize(JSAMPARRAY,4, 11261, 2)
#elif __x86_64__
CheckTypeSize(JSAMPARRAY,8, 11261, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11261,0);
Msg("Find size of JSAMPARRAY (11261)\n");
#endif

#if __i386__
CheckTypeSize(JDIMENSION,4, 11262, 2)
#elif __x86_64__
CheckTypeSize(JDIMENSION,4, 11262, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11262,0);
Msg("Find size of JDIMENSION (11262)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11263,0);
Msg("Find size of fptr_jpeglib_409 (11263)\n");
#endif

#if __i386__
CheckTypeSize(JCOEF,2, 11265, 2)
#elif __x86_64__
CheckTypeSize(JCOEF,2, 11265, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11265,0);
Msg("Find size of JCOEF (11265)\n");
#endif

#if 1
#endif

#if __i386__
CheckTypeSize(JBLOCK,128, 11267, 2)
#elif __x86_64__
CheckTypeSize(JBLOCK,128, 11267, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11267,0);
Msg("Find size of JBLOCK (11267)\n");
#endif

#if __i386__
CheckTypeSize(JBLOCK *,4, 11268, 2)
#elif __x86_64__
CheckTypeSize(JBLOCK *,8, 11268, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11268,0);
Msg("Find size of JBLOCK * (11268)\n");
#endif

#if __i386__
CheckTypeSize(JBLOCKROW,4, 11269, 2)
#elif __x86_64__
CheckTypeSize(JBLOCKROW,8, 11269, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11269,0);
Msg("Find size of JBLOCKROW (11269)\n");
#endif

#if __i386__
CheckTypeSize(JBLOCKROW *,4, 11270, 2)
#elif __x86_64__
CheckTypeSize(JBLOCKROW *,8, 11270, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11270,0);
Msg("Find size of JBLOCKROW * (11270)\n");
#endif

#if __i386__
CheckTypeSize(JBLOCKARRAY,4, 11271, 2)
#elif __x86_64__
CheckTypeSize(JBLOCKARRAY,8, 11271, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11271,0);
Msg("Find size of JBLOCKARRAY (11271)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11272,0);
Msg("Find size of fptr_jpeglib_500 (11272)\n");
#endif

#if __i386__
CheckTypeSize(struct jvirt_sarray_control *,4, 11274, 2)
#elif __x86_64__
CheckTypeSize(struct jvirt_sarray_control *,8, 11274, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11274,0);
Msg("Find size of jvirt_sarray_control * (11274)\n");
#endif

#if __i386__
CheckTypeSize(jvirt_sarray_ptr,4, 11275, 2)
#elif __x86_64__
CheckTypeSize(jvirt_sarray_ptr,8, 11275, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11275,0);
Msg("Find size of jvirt_sarray_ptr (11275)\n");
#endif

#if __i386__
CheckTypeSize(boolean,4, 11276, 2)
#elif __x86_64__
CheckTypeSize(boolean,4, 11276, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11276,0);
Msg("Find size of boolean (11276)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11277,0);
Msg("Find size of fptr_jpeglib_750 (11277)\n");
#endif

#if __i386__
CheckTypeSize(struct jvirt_barray_control *,4, 11279, 2)
#elif __x86_64__
CheckTypeSize(struct jvirt_barray_control *,8, 11279, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11279,0);
Msg("Find size of jvirt_barray_control * (11279)\n");
#endif

#if __i386__
CheckTypeSize(jvirt_barray_ptr,4, 11280, 2)
#elif __x86_64__
CheckTypeSize(jvirt_barray_ptr,8, 11280, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11280,0);
Msg("Find size of jvirt_barray_ptr (11280)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11281,0);
Msg("Find size of fptr_jpeglib_810 (11281)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11282,0);
Msg("Find size of fptr_jpeglib_84 (11282)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11283,0);
Msg("Find size of fptr_jpeglib_533 (11283)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11284,0);
Msg("Find size of fptr_jpeglib_833 (11284)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11285,0);
Msg("Find size of fptr_jpeglib_926 (11285)\n");
#endif

#if __i386__
CheckTypeSize(struct jpeg_memory_mgr *,4, 11286, 2)
#elif __x86_64__
CheckTypeSize(struct jpeg_memory_mgr *,8, 11286, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11286,0);
Msg("Find size of jpeg_memory_mgr * (11286)\n");
#endif

#if __i386__
CheckTypeSize(struct jpeg_progress_mgr,20, 11287, 2)
CheckMemberSize(struct jpeg_progress_mgr,pass_counter,4,2,41054)
CheckOffset(struct jpeg_progress_mgr,pass_counter,4,2,41054)
CheckMemberSize(struct jpeg_progress_mgr,pass_limit,4,2,41055)
CheckOffset(struct jpeg_progress_mgr,pass_limit,8,2,41055)
CheckMemberSize(struct jpeg_progress_mgr,completed_passes,4,2,41056)
CheckOffset(struct jpeg_progress_mgr,completed_passes,12,2,41056)
CheckMemberSize(struct jpeg_progress_mgr,total_passes,4,2,41057)
CheckOffset(struct jpeg_progress_mgr,total_passes,16,2,41057)
#elif __x86_64__
CheckTypeSize(struct jpeg_progress_mgr,32, 11287, 11)
CheckMemberSize(struct jpeg_progress_mgr,pass_counter,8,11,41054)
CheckOffset(struct jpeg_progress_mgr,pass_counter,8,11,41054)
CheckMemberSize(struct jpeg_progress_mgr,pass_limit,8,11,41055)
CheckOffset(struct jpeg_progress_mgr,pass_limit,16,11,41055)
CheckMemberSize(struct jpeg_progress_mgr,completed_passes,4,11,41056)
CheckOffset(struct jpeg_progress_mgr,completed_passes,24,11,41056)
CheckMemberSize(struct jpeg_progress_mgr,total_passes,4,11,41057)
CheckOffset(struct jpeg_progress_mgr,total_passes,28,11,41057)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11287,0);
Msg("Find size of jpeg_progress_mgr (11287)\n");
#endif

#if __i386__
CheckTypeSize(struct jpeg_progress_mgr *,4, 11288, 2)
#elif __x86_64__
CheckTypeSize(struct jpeg_progress_mgr *,8, 11288, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11288,0);
Msg("Find size of jpeg_progress_mgr * (11288)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11289,0);
Msg("Find size of fptr_jpeglib_343 (11289)\n");
#endif

#if 1
#endif

#if 1
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11292,0);
Msg("Find size of anon-jpeglib.h-202 (11292)\n");
#endif

#if __i386__
CheckTypeSize(const const char *,4, 11293, 2)
#elif __x86_64__
CheckTypeSize(const const char *,8, 11293, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11293,0);
Msg("Find size of const const char * (11293)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11294,0);
Msg("Find size of const const char * * (11294)\n");
#endif

#if __i386__
CheckTypeSize(struct jpeg_source_mgr,28, 11295, 2)
CheckMemberSize(struct jpeg_source_mgr,bytes_in_buffer,4,2,41087)
CheckOffset(struct jpeg_source_mgr,bytes_in_buffer,4,2,41087)
CheckMemberSize(struct jpeg_source_mgr,init_source,4,2,41089)
CheckOffset(struct jpeg_source_mgr,init_source,8,2,41089)
CheckMemberSize(struct jpeg_source_mgr,fill_input_buffer,4,2,41091)
CheckOffset(struct jpeg_source_mgr,fill_input_buffer,12,2,41091)
CheckMemberSize(struct jpeg_source_mgr,skip_input_data,4,2,41094)
CheckOffset(struct jpeg_source_mgr,skip_input_data,16,2,41094)
CheckMemberSize(struct jpeg_source_mgr,resync_to_restart,4,2,41097)
CheckOffset(struct jpeg_source_mgr,resync_to_restart,20,2,41097)
CheckMemberSize(struct jpeg_source_mgr,term_source,4,2,41098)
CheckOffset(struct jpeg_source_mgr,term_source,24,2,41098)
#elif __x86_64__
CheckTypeSize(struct jpeg_source_mgr,56, 11295, 11)
CheckMemberSize(struct jpeg_source_mgr,bytes_in_buffer,8,11,41087)
CheckOffset(struct jpeg_source_mgr,bytes_in_buffer,8,11,41087)
CheckMemberSize(struct jpeg_source_mgr,init_source,8,11,41089)
CheckOffset(struct jpeg_source_mgr,init_source,16,11,41089)
CheckMemberSize(struct jpeg_source_mgr,fill_input_buffer,8,11,41091)
CheckOffset(struct jpeg_source_mgr,fill_input_buffer,24,11,41091)
CheckMemberSize(struct jpeg_source_mgr,skip_input_data,8,11,41094)
CheckOffset(struct jpeg_source_mgr,skip_input_data,32,11,41094)
CheckMemberSize(struct jpeg_source_mgr,resync_to_restart,8,11,41097)
CheckOffset(struct jpeg_source_mgr,resync_to_restart,40,11,41097)
CheckMemberSize(struct jpeg_source_mgr,term_source,8,11,41098)
CheckOffset(struct jpeg_source_mgr,term_source,48,11,41098)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11295,0);
Msg("Find size of jpeg_source_mgr (11295)\n");
#endif

#if __i386__
CheckTypeSize(JOCTET,1, 11296, 2)
#elif __x86_64__
CheckTypeSize(JOCTET,1, 11296, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11296,0);
Msg("Find size of JOCTET (11296)\n");
#endif

#if __i386__
CheckTypeSize(const JOCTET,1, 11297, 2)
#elif __x86_64__
CheckTypeSize(const JOCTET,1, 11297, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11297,0);
Msg("Find size of const JOCTET (11297)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11298,0);
Msg("Find size of const JOCTET * (11298)\n");
#endif

#if __i386__
CheckTypeSize(struct jpeg_decompress_struct *,4, 11299, 2)
#elif __x86_64__
CheckTypeSize(struct jpeg_decompress_struct *,8, 11299, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11299,0);
Msg("Find size of jpeg_decompress_struct * (11299)\n");
#endif

#if __i386__
CheckTypeSize(j_decompress_ptr,4, 11300, 2)
#elif __x86_64__
CheckTypeSize(j_decompress_ptr,8, 11300, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11300,0);
Msg("Find size of j_decompress_ptr (11300)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11301,0);
Msg("Find size of fptr_jpeglib_94 (11301)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11302,0);
Msg("Find size of fptr_jpeglib_477 (11302)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11303,0);
Msg("Find size of fptr_jpeglib_445 (11303)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11304,0);
Msg("Find size of fptr_jpeglib_390 (11304)\n");
#endif

#if __i386__
CheckTypeSize(struct jpeg_source_mgr *,4, 11305, 2)
#elif __x86_64__
CheckTypeSize(struct jpeg_source_mgr *,8, 11305, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11305,0);
Msg("Find size of jpeg_source_mgr * (11305)\n");
#endif

#if __i386__
CheckEnum("JCS_UNKNOWN",JCS_UNKNOWN,0);
CheckEnum("JCS_GRAYSCALE",JCS_GRAYSCALE,1);
CheckEnum("JCS_RGB",JCS_RGB,2);
CheckEnum("JCS_YCbCr",JCS_YCbCr,3);
CheckEnum("JCS_CMYK",JCS_CMYK,4);
CheckEnum("JCS_YCCK",JCS_YCCK,5);
#elif __x86_64__
CheckEnum("JCS_UNKNOWN",JCS_UNKNOWN,0);
CheckEnum("JCS_GRAYSCALE",JCS_GRAYSCALE,1);
CheckEnum("JCS_RGB",JCS_RGB,2);
CheckEnum("JCS_YCbCr",JCS_YCbCr,3);
CheckEnum("JCS_CMYK",JCS_CMYK,4);
CheckEnum("JCS_YCCK",JCS_YCCK,5);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11306,0);
Msg("Find size of anon-jpeglib.h-199 (11306)\n");
#endif

#if __i386__
CheckTypeSize(J_COLOR_SPACE,4, 11307, 2)
#elif __x86_64__
CheckTypeSize(J_COLOR_SPACE,4, 11307, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11307,0);
Msg("Find size of J_COLOR_SPACE (11307)\n");
#endif

#if __i386__
CheckEnum("JDCT_ISLOW",JDCT_ISLOW,0);
CheckEnum("JDCT_IFAST",JDCT_IFAST,1);
CheckEnum("JDCT_FLOAT",JDCT_FLOAT,2);
#elif __x86_64__
CheckEnum("JDCT_ISLOW",JDCT_ISLOW,0);
CheckEnum("JDCT_IFAST",JDCT_IFAST,1);
CheckEnum("JDCT_FLOAT",JDCT_FLOAT,2);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11308,0);
Msg("Find size of anon-jpeglib.h-200 (11308)\n");
#endif

#if __i386__
CheckTypeSize(J_DCT_METHOD,4, 11309, 2)
#elif __x86_64__
CheckTypeSize(J_DCT_METHOD,4, 11309, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11309,0);
Msg("Find size of J_DCT_METHOD (11309)\n");
#endif

#if __i386__
CheckEnum("JDITHER_NONE",JDITHER_NONE,0);
CheckEnum("JDITHER_ORDERED",JDITHER_ORDERED,1);
CheckEnum("JDITHER_FS",JDITHER_FS,2);
#elif __x86_64__
CheckEnum("JDITHER_NONE",JDITHER_NONE,0);
CheckEnum("JDITHER_ORDERED",JDITHER_ORDERED,1);
CheckEnum("JDITHER_FS",JDITHER_FS,2);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11310,0);
Msg("Find size of anon-jpeglib.h-201 (11310)\n");
#endif

#if __i386__
CheckTypeSize(J_DITHER_MODE,4, 11311, 2)
#elif __x86_64__
CheckTypeSize(J_DITHER_MODE,4, 11311, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11311,0);
Msg("Find size of J_DITHER_MODE (11311)\n");
#endif

#if 1
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11313,0);
Msg("Find size of int[64] * (11313)\n");
#endif

#if __i386__
CheckTypeSize(UINT16,2, 11314, 2)
#elif __x86_64__
CheckTypeSize(UINT16,2, 11314, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11314,0);
Msg("Find size of UINT16 (11314)\n");
#endif

#if 1
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11316,0);
Msg("Find size of anon-jpeglib.h-196 (11316)\n");
#endif

#if __i386__
CheckTypeSize(JQUANT_TBL,132, 11317, 2)
#elif __x86_64__
CheckTypeSize(JQUANT_TBL,132, 11317, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11317,0);
Msg("Find size of JQUANT_TBL (11317)\n");
#endif

#if __i386__
CheckTypeSize(JQUANT_TBL *,4, 11318, 2)
#elif __x86_64__
CheckTypeSize(JQUANT_TBL *,8, 11318, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11318,0);
Msg("Find size of JQUANT_TBL * (11318)\n");
#endif

#if 1
#endif

#if __i386__
CheckTypeSize(UINT8,1, 11320, 2)
#elif __x86_64__
CheckTypeSize(UINT8,1, 11320, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11320,0);
Msg("Find size of UINT8 (11320)\n");
#endif

#if 1
#endif

#if 1
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11323,0);
Msg("Find size of anon-jpeglib.h-197 (11323)\n");
#endif

#if __i386__
CheckTypeSize(JHUFF_TBL,280, 11324, 2)
#elif __x86_64__
CheckTypeSize(JHUFF_TBL,280, 11324, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11324,0);
Msg("Find size of JHUFF_TBL (11324)\n");
#endif

#if __i386__
CheckTypeSize(JHUFF_TBL *,4, 11325, 2)
#elif __x86_64__
CheckTypeSize(JHUFF_TBL *,8, 11325, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11325,0);
Msg("Find size of JHUFF_TBL * (11325)\n");
#endif

#if 1
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11327,0);
Msg("Find size of anon-jpeglib.h-198 (11327)\n");
#endif

#if __i386__
CheckTypeSize(jpeg_component_info,84, 11328, 2)
#elif __x86_64__
CheckTypeSize(jpeg_component_info,96, 11328, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11328,0);
Msg("Find size of jpeg_component_info (11328)\n");
#endif

#if __i386__
CheckTypeSize(jpeg_component_info *,4, 11329, 2)
#elif __x86_64__
CheckTypeSize(jpeg_component_info *,8, 11329, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11329,0);
Msg("Find size of jpeg_component_info * (11329)\n");
#endif

#if 1
#endif

#if __i386__
CheckTypeSize(struct jpeg_marker_struct,20, 11331, 2)
CheckMemberSize(struct jpeg_marker_struct,marker,1,2,41192)
CheckOffset(struct jpeg_marker_struct,marker,4,2,41192)
CheckMemberSize(struct jpeg_marker_struct,original_length,4,2,41193)
CheckOffset(struct jpeg_marker_struct,original_length,8,2,41193)
CheckMemberSize(struct jpeg_marker_struct,data_length,4,2,41194)
CheckOffset(struct jpeg_marker_struct,data_length,12,2,41194)
CheckMemberSize(struct jpeg_marker_struct,data,4,2,41195)
CheckOffset(struct jpeg_marker_struct,data,16,2,41195)
#elif __x86_64__
CheckTypeSize(struct jpeg_marker_struct,32, 11331, 11)
CheckMemberSize(struct jpeg_marker_struct,marker,1,11,41192)
CheckOffset(struct jpeg_marker_struct,marker,8,11,41192)
CheckMemberSize(struct jpeg_marker_struct,original_length,4,11,41193)
CheckOffset(struct jpeg_marker_struct,original_length,12,11,41193)
CheckMemberSize(struct jpeg_marker_struct,data_length,4,11,41194)
CheckOffset(struct jpeg_marker_struct,data_length,16,11,41194)
CheckMemberSize(struct jpeg_marker_struct,data,8,11,41195)
CheckOffset(struct jpeg_marker_struct,data,24,11,41195)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11331,0);
Msg("Find size of jpeg_marker_struct (11331)\n");
#endif

#if __i386__
CheckTypeSize(struct jpeg_marker_struct *,4, 11332, 2)
#elif __x86_64__
CheckTypeSize(struct jpeg_marker_struct *,8, 11332, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11332,0);
Msg("Find size of jpeg_marker_struct * (11332)\n");
#endif

#if __i386__
CheckTypeSize(jpeg_saved_marker_ptr,4, 11333, 2)
#elif __x86_64__
CheckTypeSize(jpeg_saved_marker_ptr,8, 11333, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11333,0);
Msg("Find size of jpeg_saved_marker_ptr (11333)\n");
#endif

#if __i386__
CheckTypeSize(JOCTET *,4, 11334, 2)
#elif __x86_64__
CheckTypeSize(JOCTET *,8, 11334, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11334,0);
Msg("Find size of JOCTET * (11334)\n");
#endif

#if 1
#endif

#if 1
#endif

#if __i386__
CheckTypeSize(struct jpeg_decomp_master *,4, 11338, 2)
#elif __x86_64__
CheckTypeSize(struct jpeg_decomp_master *,8, 11338, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11338,0);
Msg("Find size of jpeg_decomp_master * (11338)\n");
#endif

#if __i386__
CheckTypeSize(struct jpeg_d_main_controller *,4, 11340, 2)
#elif __x86_64__
CheckTypeSize(struct jpeg_d_main_controller *,8, 11340, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11340,0);
Msg("Find size of jpeg_d_main_controller * (11340)\n");
#endif

#if __i386__
CheckTypeSize(struct jpeg_d_coef_controller *,4, 11342, 2)
#elif __x86_64__
CheckTypeSize(struct jpeg_d_coef_controller *,8, 11342, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11342,0);
Msg("Find size of jpeg_d_coef_controller * (11342)\n");
#endif

#if __i386__
CheckTypeSize(struct jpeg_d_post_controller *,4, 11344, 2)
#elif __x86_64__
CheckTypeSize(struct jpeg_d_post_controller *,8, 11344, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11344,0);
Msg("Find size of jpeg_d_post_controller * (11344)\n");
#endif

#if __i386__
CheckTypeSize(struct jpeg_input_controller *,4, 11346, 2)
#elif __x86_64__
CheckTypeSize(struct jpeg_input_controller *,8, 11346, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11346,0);
Msg("Find size of jpeg_input_controller * (11346)\n");
#endif

#if __i386__
CheckTypeSize(struct jpeg_marker_reader *,4, 11348, 2)
#elif __x86_64__
CheckTypeSize(struct jpeg_marker_reader *,8, 11348, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11348,0);
Msg("Find size of jpeg_marker_reader * (11348)\n");
#endif

#if __i386__
CheckTypeSize(struct jpeg_entropy_decoder *,4, 11350, 2)
#elif __x86_64__
CheckTypeSize(struct jpeg_entropy_decoder *,8, 11350, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11350,0);
Msg("Find size of jpeg_entropy_decoder * (11350)\n");
#endif

#if __i386__
CheckTypeSize(struct jpeg_inverse_dct *,4, 11352, 2)
#elif __x86_64__
CheckTypeSize(struct jpeg_inverse_dct *,8, 11352, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11352,0);
Msg("Find size of jpeg_inverse_dct * (11352)\n");
#endif

#if __i386__
CheckTypeSize(struct jpeg_upsampler *,4, 11354, 2)
#elif __x86_64__
CheckTypeSize(struct jpeg_upsampler *,8, 11354, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11354,0);
Msg("Find size of jpeg_upsampler * (11354)\n");
#endif

#if __i386__
CheckTypeSize(struct jpeg_color_deconverter *,4, 11356, 2)
#elif __x86_64__
CheckTypeSize(struct jpeg_color_deconverter *,8, 11356, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11356,0);
Msg("Find size of jpeg_color_deconverter * (11356)\n");
#endif

#if __i386__
CheckTypeSize(struct jpeg_color_quantizer *,4, 11358, 2)
#elif __x86_64__
CheckTypeSize(struct jpeg_color_quantizer *,8, 11358, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11358,0);
Msg("Find size of jpeg_color_quantizer * (11358)\n");
#endif

#if __i386__
CheckTypeSize(struct jpeg_compress_struct,372, 11359, 2)
CheckMemberSize(struct jpeg_compress_struct,mem,4,2,41225)
CheckOffset(struct jpeg_compress_struct,mem,4,2,41225)
CheckMemberSize(struct jpeg_compress_struct,progress,4,2,41226)
CheckOffset(struct jpeg_compress_struct,progress,8,2,41226)
CheckMemberSize(struct jpeg_compress_struct,client_data,4,2,41227)
CheckOffset(struct jpeg_compress_struct,client_data,12,2,41227)
CheckMemberSize(struct jpeg_compress_struct,is_decompressor,4,2,41228)
CheckOffset(struct jpeg_compress_struct,is_decompressor,16,2,41228)
CheckMemberSize(struct jpeg_compress_struct,global_state,4,2,41229)
CheckOffset(struct jpeg_compress_struct,global_state,20,2,41229)
CheckMemberSize(struct jpeg_compress_struct,dest,4,2,41237)
CheckOffset(struct jpeg_compress_struct,dest,24,2,41237)
CheckMemberSize(struct jpeg_compress_struct,image_width,4,2,41238)
CheckOffset(struct jpeg_compress_struct,image_width,28,2,41238)
CheckMemberSize(struct jpeg_compress_struct,image_height,4,2,41239)
CheckOffset(struct jpeg_compress_struct,image_height,32,2,41239)
CheckMemberSize(struct jpeg_compress_struct,input_components,4,2,41240)
CheckOffset(struct jpeg_compress_struct,input_components,36,2,41240)
CheckMemberSize(struct jpeg_compress_struct,in_color_space,4,2,41241)
CheckOffset(struct jpeg_compress_struct,in_color_space,40,2,41241)
CheckMemberSize(struct jpeg_compress_struct,input_gamma,8,2,41242)
CheckOffset(struct jpeg_compress_struct,input_gamma,44,2,41242)
CheckMemberSize(struct jpeg_compress_struct,data_precision,4,2,41243)
CheckOffset(struct jpeg_compress_struct,data_precision,52,2,41243)
CheckMemberSize(struct jpeg_compress_struct,num_components,4,2,41244)
CheckOffset(struct jpeg_compress_struct,num_components,56,2,41244)
CheckMemberSize(struct jpeg_compress_struct,jpeg_color_space,4,2,41245)
CheckOffset(struct jpeg_compress_struct,jpeg_color_space,60,2,41245)
CheckMemberSize(struct jpeg_compress_struct,comp_info,4,2,41246)
CheckOffset(struct jpeg_compress_struct,comp_info,64,2,41246)
CheckMemberSize(struct jpeg_compress_struct,quant_tbl_ptrs,16,2,41247)
CheckOffset(struct jpeg_compress_struct,quant_tbl_ptrs,68,2,41247)
CheckMemberSize(struct jpeg_compress_struct,dc_huff_tbl_ptrs,16,2,41248)
CheckOffset(struct jpeg_compress_struct,dc_huff_tbl_ptrs,84,2,41248)
CheckMemberSize(struct jpeg_compress_struct,ac_huff_tbl_ptrs,16,2,41249)
CheckOffset(struct jpeg_compress_struct,ac_huff_tbl_ptrs,100,2,41249)
CheckMemberSize(struct jpeg_compress_struct,arith_dc_L,16,2,41250)
CheckOffset(struct jpeg_compress_struct,arith_dc_L,116,2,41250)
CheckMemberSize(struct jpeg_compress_struct,arith_dc_U,16,2,41251)
CheckOffset(struct jpeg_compress_struct,arith_dc_U,132,2,41251)
CheckMemberSize(struct jpeg_compress_struct,arith_ac_K,16,2,41252)
CheckOffset(struct jpeg_compress_struct,arith_ac_K,148,2,41252)
CheckMemberSize(struct jpeg_compress_struct,num_scans,4,2,41253)
CheckOffset(struct jpeg_compress_struct,num_scans,164,2,41253)
CheckMemberSize(struct jpeg_compress_struct,scan_info,4,2,41260)
CheckOffset(struct jpeg_compress_struct,scan_info,168,2,41260)
CheckMemberSize(struct jpeg_compress_struct,raw_data_in,4,2,41261)
CheckOffset(struct jpeg_compress_struct,raw_data_in,172,2,41261)
CheckMemberSize(struct jpeg_compress_struct,arith_code,4,2,41262)
CheckOffset(struct jpeg_compress_struct,arith_code,176,2,41262)
CheckMemberSize(struct jpeg_compress_struct,optimize_coding,4,2,41263)
CheckOffset(struct jpeg_compress_struct,optimize_coding,180,2,41263)
CheckMemberSize(struct jpeg_compress_struct,CCIR601_sampling,4,2,41264)
CheckOffset(struct jpeg_compress_struct,CCIR601_sampling,184,2,41264)
CheckMemberSize(struct jpeg_compress_struct,smoothing_factor,4,2,41265)
CheckOffset(struct jpeg_compress_struct,smoothing_factor,188,2,41265)
CheckMemberSize(struct jpeg_compress_struct,dct_method,4,2,41266)
CheckOffset(struct jpeg_compress_struct,dct_method,192,2,41266)
CheckMemberSize(struct jpeg_compress_struct,restart_interval,4,2,41267)
CheckOffset(struct jpeg_compress_struct,restart_interval,196,2,41267)
CheckMemberSize(struct jpeg_compress_struct,restart_in_rows,4,2,41268)
CheckOffset(struct jpeg_compress_struct,restart_in_rows,200,2,41268)
CheckMemberSize(struct jpeg_compress_struct,write_JFIF_header,4,2,41269)
CheckOffset(struct jpeg_compress_struct,write_JFIF_header,204,2,41269)
CheckMemberSize(struct jpeg_compress_struct,JFIF_major_version,1,2,41270)
CheckOffset(struct jpeg_compress_struct,JFIF_major_version,208,2,41270)
CheckMemberSize(struct jpeg_compress_struct,JFIF_minor_version,1,2,41271)
CheckOffset(struct jpeg_compress_struct,JFIF_minor_version,209,2,41271)
CheckMemberSize(struct jpeg_compress_struct,density_unit,1,2,41272)
CheckOffset(struct jpeg_compress_struct,density_unit,210,2,41272)
CheckMemberSize(struct jpeg_compress_struct,X_density,2,2,41273)
CheckOffset(struct jpeg_compress_struct,X_density,212,2,41273)
CheckMemberSize(struct jpeg_compress_struct,Y_density,2,2,41274)
CheckOffset(struct jpeg_compress_struct,Y_density,214,2,41274)
CheckMemberSize(struct jpeg_compress_struct,write_Adobe_marker,4,2,41275)
CheckOffset(struct jpeg_compress_struct,write_Adobe_marker,216,2,41275)
CheckMemberSize(struct jpeg_compress_struct,next_scanline,4,2,41276)
CheckOffset(struct jpeg_compress_struct,next_scanline,220,2,41276)
CheckMemberSize(struct jpeg_compress_struct,progressive_mode,4,2,41277)
CheckOffset(struct jpeg_compress_struct,progressive_mode,224,2,41277)
CheckMemberSize(struct jpeg_compress_struct,max_h_samp_factor,4,2,41278)
CheckOffset(struct jpeg_compress_struct,max_h_samp_factor,228,2,41278)
CheckMemberSize(struct jpeg_compress_struct,max_v_samp_factor,4,2,41279)
CheckOffset(struct jpeg_compress_struct,max_v_samp_factor,232,2,41279)
CheckMemberSize(struct jpeg_compress_struct,total_iMCU_rows,4,2,41280)
CheckOffset(struct jpeg_compress_struct,total_iMCU_rows,236,2,41280)
CheckMemberSize(struct jpeg_compress_struct,comps_in_scan,4,2,41281)
CheckOffset(struct jpeg_compress_struct,comps_in_scan,240,2,41281)
CheckMemberSize(struct jpeg_compress_struct,cur_comp_info,16,2,41282)
CheckOffset(struct jpeg_compress_struct,cur_comp_info,244,2,41282)
CheckMemberSize(struct jpeg_compress_struct,MCUs_per_row,4,2,41283)
CheckOffset(struct jpeg_compress_struct,MCUs_per_row,260,2,41283)
CheckMemberSize(struct jpeg_compress_struct,MCU_rows_in_scan,4,2,41284)
CheckOffset(struct jpeg_compress_struct,MCU_rows_in_scan,264,2,41284)
CheckMemberSize(struct jpeg_compress_struct,blocks_in_MCU,4,2,41285)
CheckOffset(struct jpeg_compress_struct,blocks_in_MCU,268,2,41285)
CheckMemberSize(struct jpeg_compress_struct,MCU_membership,40,2,41286)
CheckOffset(struct jpeg_compress_struct,MCU_membership,272,2,41286)
CheckMemberSize(struct jpeg_compress_struct,Ss,4,2,41287)
CheckOffset(struct jpeg_compress_struct,Ss,312,2,41287)
CheckMemberSize(struct jpeg_compress_struct,Se,4,2,41288)
CheckOffset(struct jpeg_compress_struct,Se,316,2,41288)
CheckMemberSize(struct jpeg_compress_struct,Ah,4,2,41289)
CheckOffset(struct jpeg_compress_struct,Ah,320,2,41289)
CheckMemberSize(struct jpeg_compress_struct,Al,4,2,41290)
CheckOffset(struct jpeg_compress_struct,Al,324,2,41290)
CheckMemberSize(struct jpeg_compress_struct,master,4,2,41291)
CheckOffset(struct jpeg_compress_struct,master,328,2,41291)
CheckMemberSize(struct jpeg_compress_struct,main,4,2,41292)
CheckOffset(struct jpeg_compress_struct,main,332,2,41292)
CheckMemberSize(struct jpeg_compress_struct,prep,4,2,41293)
CheckOffset(struct jpeg_compress_struct,prep,336,2,41293)
CheckMemberSize(struct jpeg_compress_struct,coef,4,2,41294)
CheckOffset(struct jpeg_compress_struct,coef,340,2,41294)
CheckMemberSize(struct jpeg_compress_struct,marker,4,2,41295)
CheckOffset(struct jpeg_compress_struct,marker,344,2,41295)
CheckMemberSize(struct jpeg_compress_struct,cconvert,4,2,41296)
CheckOffset(struct jpeg_compress_struct,cconvert,348,2,41296)
CheckMemberSize(struct jpeg_compress_struct,downsample,4,2,41297)
CheckOffset(struct jpeg_compress_struct,downsample,352,2,41297)
CheckMemberSize(struct jpeg_compress_struct,fdct,4,2,41298)
CheckOffset(struct jpeg_compress_struct,fdct,356,2,41298)
CheckMemberSize(struct jpeg_compress_struct,entropy,4,2,41299)
CheckOffset(struct jpeg_compress_struct,entropy,360,2,41299)
CheckMemberSize(struct jpeg_compress_struct,script_space,4,2,41300)
CheckOffset(struct jpeg_compress_struct,script_space,364,2,41300)
CheckMemberSize(struct jpeg_compress_struct,script_space_size,4,2,41301)
CheckOffset(struct jpeg_compress_struct,script_space_size,368,2,41301)
#elif __x86_64__
CheckTypeSize(struct jpeg_compress_struct,520, 11359, 11)
CheckMemberSize(struct jpeg_compress_struct,mem,8,11,41225)
CheckOffset(struct jpeg_compress_struct,mem,8,11,41225)
CheckMemberSize(struct jpeg_compress_struct,progress,8,11,41226)
CheckOffset(struct jpeg_compress_struct,progress,16,11,41226)
CheckMemberSize(struct jpeg_compress_struct,client_data,8,11,41227)
CheckOffset(struct jpeg_compress_struct,client_data,24,11,41227)
CheckMemberSize(struct jpeg_compress_struct,is_decompressor,4,11,41228)
CheckOffset(struct jpeg_compress_struct,is_decompressor,32,11,41228)
CheckMemberSize(struct jpeg_compress_struct,global_state,4,11,41229)
CheckOffset(struct jpeg_compress_struct,global_state,36,11,41229)
CheckMemberSize(struct jpeg_compress_struct,dest,8,11,41237)
CheckOffset(struct jpeg_compress_struct,dest,40,11,41237)
CheckMemberSize(struct jpeg_compress_struct,image_width,4,11,41238)
CheckOffset(struct jpeg_compress_struct,image_width,48,11,41238)
CheckMemberSize(struct jpeg_compress_struct,image_height,4,11,41239)
CheckOffset(struct jpeg_compress_struct,image_height,52,11,41239)
CheckMemberSize(struct jpeg_compress_struct,input_components,4,11,41240)
CheckOffset(struct jpeg_compress_struct,input_components,56,11,41240)
CheckMemberSize(struct jpeg_compress_struct,in_color_space,4,11,41241)
CheckOffset(struct jpeg_compress_struct,in_color_space,60,11,41241)
CheckMemberSize(struct jpeg_compress_struct,input_gamma,8,11,41242)
CheckOffset(struct jpeg_compress_struct,input_gamma,64,11,41242)
CheckMemberSize(struct jpeg_compress_struct,data_precision,4,11,41243)
CheckOffset(struct jpeg_compress_struct,data_precision,72,11,41243)
CheckMemberSize(struct jpeg_compress_struct,num_components,4,11,41244)
CheckOffset(struct jpeg_compress_struct,num_components,76,11,41244)
CheckMemberSize(struct jpeg_compress_struct,jpeg_color_space,4,11,41245)
CheckOffset(struct jpeg_compress_struct,jpeg_color_space,80,11,41245)
CheckMemberSize(struct jpeg_compress_struct,comp_info,8,11,41246)
CheckOffset(struct jpeg_compress_struct,comp_info,88,11,41246)
CheckMemberSize(struct jpeg_compress_struct,quant_tbl_ptrs,32,11,41247)
CheckOffset(struct jpeg_compress_struct,quant_tbl_ptrs,96,11,41247)
CheckMemberSize(struct jpeg_compress_struct,dc_huff_tbl_ptrs,32,11,41248)
CheckOffset(struct jpeg_compress_struct,dc_huff_tbl_ptrs,128,11,41248)
CheckMemberSize(struct jpeg_compress_struct,ac_huff_tbl_ptrs,32,11,41249)
CheckOffset(struct jpeg_compress_struct,ac_huff_tbl_ptrs,160,11,41249)
CheckMemberSize(struct jpeg_compress_struct,arith_dc_L,16,11,41250)
CheckOffset(struct jpeg_compress_struct,arith_dc_L,192,11,41250)
CheckMemberSize(struct jpeg_compress_struct,arith_dc_U,16,11,41251)
CheckOffset(struct jpeg_compress_struct,arith_dc_U,208,11,41251)
CheckMemberSize(struct jpeg_compress_struct,arith_ac_K,16,11,41252)
CheckOffset(struct jpeg_compress_struct,arith_ac_K,224,11,41252)
CheckMemberSize(struct jpeg_compress_struct,num_scans,4,11,41253)
CheckOffset(struct jpeg_compress_struct,num_scans,240,11,41253)
CheckMemberSize(struct jpeg_compress_struct,scan_info,8,11,41260)
CheckOffset(struct jpeg_compress_struct,scan_info,248,11,41260)
CheckMemberSize(struct jpeg_compress_struct,raw_data_in,4,11,41261)
CheckOffset(struct jpeg_compress_struct,raw_data_in,256,11,41261)
CheckMemberSize(struct jpeg_compress_struct,arith_code,4,11,41262)
CheckOffset(struct jpeg_compress_struct,arith_code,260,11,41262)
CheckMemberSize(struct jpeg_compress_struct,optimize_coding,4,11,41263)
CheckOffset(struct jpeg_compress_struct,optimize_coding,264,11,41263)
CheckMemberSize(struct jpeg_compress_struct,CCIR601_sampling,4,11,41264)
CheckOffset(struct jpeg_compress_struct,CCIR601_sampling,268,11,41264)
CheckMemberSize(struct jpeg_compress_struct,smoothing_factor,4,11,41265)
CheckOffset(struct jpeg_compress_struct,smoothing_factor,272,11,41265)
CheckMemberSize(struct jpeg_compress_struct,dct_method,4,11,41266)
CheckOffset(struct jpeg_compress_struct,dct_method,276,11,41266)
CheckMemberSize(struct jpeg_compress_struct,restart_interval,4,11,41267)
CheckOffset(struct jpeg_compress_struct,restart_interval,280,11,41267)
CheckMemberSize(struct jpeg_compress_struct,restart_in_rows,4,11,41268)
CheckOffset(struct jpeg_compress_struct,restart_in_rows,284,11,41268)
CheckMemberSize(struct jpeg_compress_struct,write_JFIF_header,4,11,41269)
CheckOffset(struct jpeg_compress_struct,write_JFIF_header,288,11,41269)
CheckMemberSize(struct jpeg_compress_struct,JFIF_major_version,1,11,41270)
CheckOffset(struct jpeg_compress_struct,JFIF_major_version,292,11,41270)
CheckMemberSize(struct jpeg_compress_struct,JFIF_minor_version,1,11,41271)
CheckOffset(struct jpeg_compress_struct,JFIF_minor_version,293,11,41271)
CheckMemberSize(struct jpeg_compress_struct,density_unit,1,11,41272)
CheckOffset(struct jpeg_compress_struct,density_unit,294,11,41272)
CheckMemberSize(struct jpeg_compress_struct,X_density,2,11,41273)
CheckOffset(struct jpeg_compress_struct,X_density,296,11,41273)
CheckMemberSize(struct jpeg_compress_struct,Y_density,2,11,41274)
CheckOffset(struct jpeg_compress_struct,Y_density,298,11,41274)
CheckMemberSize(struct jpeg_compress_struct,write_Adobe_marker,4,11,41275)
CheckOffset(struct jpeg_compress_struct,write_Adobe_marker,300,11,41275)
CheckMemberSize(struct jpeg_compress_struct,next_scanline,4,11,41276)
CheckOffset(struct jpeg_compress_struct,next_scanline,304,11,41276)
CheckMemberSize(struct jpeg_compress_struct,progressive_mode,4,11,41277)
CheckOffset(struct jpeg_compress_struct,progressive_mode,308,11,41277)
CheckMemberSize(struct jpeg_compress_struct,max_h_samp_factor,4,11,41278)
CheckOffset(struct jpeg_compress_struct,max_h_samp_factor,312,11,41278)
CheckMemberSize(struct jpeg_compress_struct,max_v_samp_factor,4,11,41279)
CheckOffset(struct jpeg_compress_struct,max_v_samp_factor,316,11,41279)
CheckMemberSize(struct jpeg_compress_struct,total_iMCU_rows,4,11,41280)
CheckOffset(struct jpeg_compress_struct,total_iMCU_rows,320,11,41280)
CheckMemberSize(struct jpeg_compress_struct,comps_in_scan,4,11,41281)
CheckOffset(struct jpeg_compress_struct,comps_in_scan,324,11,41281)
CheckMemberSize(struct jpeg_compress_struct,cur_comp_info,32,11,41282)
CheckOffset(struct jpeg_compress_struct,cur_comp_info,328,11,41282)
CheckMemberSize(struct jpeg_compress_struct,MCUs_per_row,4,11,41283)
CheckOffset(struct jpeg_compress_struct,MCUs_per_row,360,11,41283)
CheckMemberSize(struct jpeg_compress_struct,MCU_rows_in_scan,4,11,41284)
CheckOffset(struct jpeg_compress_struct,MCU_rows_in_scan,364,11,41284)
CheckMemberSize(struct jpeg_compress_struct,blocks_in_MCU,4,11,41285)
CheckOffset(struct jpeg_compress_struct,blocks_in_MCU,368,11,41285)
CheckMemberSize(struct jpeg_compress_struct,MCU_membership,40,11,41286)
CheckOffset(struct jpeg_compress_struct,MCU_membership,372,11,41286)
CheckMemberSize(struct jpeg_compress_struct,Ss,4,11,41287)
CheckOffset(struct jpeg_compress_struct,Ss,412,11,41287)
CheckMemberSize(struct jpeg_compress_struct,Se,4,11,41288)
CheckOffset(struct jpeg_compress_struct,Se,416,11,41288)
CheckMemberSize(struct jpeg_compress_struct,Ah,4,11,41289)
CheckOffset(struct jpeg_compress_struct,Ah,420,11,41289)
CheckMemberSize(struct jpeg_compress_struct,Al,4,11,41290)
CheckOffset(struct jpeg_compress_struct,Al,424,11,41290)
CheckMemberSize(struct jpeg_compress_struct,master,8,11,41291)
CheckOffset(struct jpeg_compress_struct,master,432,11,41291)
CheckMemberSize(struct jpeg_compress_struct,main,8,11,41292)
CheckOffset(struct jpeg_compress_struct,main,440,11,41292)
CheckMemberSize(struct jpeg_compress_struct,prep,8,11,41293)
CheckOffset(struct jpeg_compress_struct,prep,448,11,41293)
CheckMemberSize(struct jpeg_compress_struct,coef,8,11,41294)
CheckOffset(struct jpeg_compress_struct,coef,456,11,41294)
CheckMemberSize(struct jpeg_compress_struct,marker,8,11,41295)
CheckOffset(struct jpeg_compress_struct,marker,464,11,41295)
CheckMemberSize(struct jpeg_compress_struct,cconvert,8,11,41296)
CheckOffset(struct jpeg_compress_struct,cconvert,472,11,41296)
CheckMemberSize(struct jpeg_compress_struct,downsample,8,11,41297)
CheckOffset(struct jpeg_compress_struct,downsample,480,11,41297)
CheckMemberSize(struct jpeg_compress_struct,fdct,8,11,41298)
CheckOffset(struct jpeg_compress_struct,fdct,488,11,41298)
CheckMemberSize(struct jpeg_compress_struct,entropy,8,11,41299)
CheckOffset(struct jpeg_compress_struct,entropy,496,11,41299)
CheckMemberSize(struct jpeg_compress_struct,script_space,8,11,41300)
CheckOffset(struct jpeg_compress_struct,script_space,504,11,41300)
CheckMemberSize(struct jpeg_compress_struct,script_space_size,4,11,41301)
CheckOffset(struct jpeg_compress_struct,script_space_size,512,11,41301)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11359,0);
Msg("Find size of jpeg_compress_struct (11359)\n");
#endif

#if __i386__
CheckTypeSize(struct jpeg_destination_mgr,20, 11360, 2)
CheckMemberSize(struct jpeg_destination_mgr,free_in_buffer,4,2,41231)
CheckOffset(struct jpeg_destination_mgr,free_in_buffer,4,2,41231)
CheckMemberSize(struct jpeg_destination_mgr,init_destination,4,2,41233)
CheckOffset(struct jpeg_destination_mgr,init_destination,8,2,41233)
CheckMemberSize(struct jpeg_destination_mgr,empty_output_buffer,4,2,41235)
CheckOffset(struct jpeg_destination_mgr,empty_output_buffer,12,2,41235)
CheckMemberSize(struct jpeg_destination_mgr,term_destination,4,2,41236)
CheckOffset(struct jpeg_destination_mgr,term_destination,16,2,41236)
#elif __x86_64__
CheckTypeSize(struct jpeg_destination_mgr,40, 11360, 11)
CheckMemberSize(struct jpeg_destination_mgr,free_in_buffer,8,11,41231)
CheckOffset(struct jpeg_destination_mgr,free_in_buffer,8,11,41231)
CheckMemberSize(struct jpeg_destination_mgr,init_destination,8,11,41233)
CheckOffset(struct jpeg_destination_mgr,init_destination,16,11,41233)
CheckMemberSize(struct jpeg_destination_mgr,empty_output_buffer,8,11,41235)
CheckOffset(struct jpeg_destination_mgr,empty_output_buffer,24,11,41235)
CheckMemberSize(struct jpeg_destination_mgr,term_destination,8,11,41236)
CheckOffset(struct jpeg_destination_mgr,term_destination,32,11,41236)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11360,0);
Msg("Find size of jpeg_destination_mgr (11360)\n");
#endif

#if __i386__
CheckTypeSize(struct jpeg_compress_struct *,4, 11361, 2)
#elif __x86_64__
CheckTypeSize(struct jpeg_compress_struct *,8, 11361, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11361,0);
Msg("Find size of jpeg_compress_struct * (11361)\n");
#endif

#if __i386__
CheckTypeSize(j_compress_ptr,4, 11362, 2)
#elif __x86_64__
CheckTypeSize(j_compress_ptr,8, 11362, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11362,0);
Msg("Find size of j_compress_ptr (11362)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11363,0);
Msg("Find size of fptr_jpeglib_804 (11363)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11364,0);
Msg("Find size of fptr_jpeglib_230 (11364)\n");
#endif

#if __i386__
CheckTypeSize(struct jpeg_destination_mgr *,4, 11365, 2)
#elif __x86_64__
CheckTypeSize(struct jpeg_destination_mgr *,8, 11365, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11365,0);
Msg("Find size of jpeg_destination_mgr * (11365)\n");
#endif

#if 1
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11367,0);
Msg("Find size of anon-jpeglib.h-29 (11367)\n");
#endif

#if __i386__
CheckTypeSize(jpeg_scan_info,36, 11368, 2)
#elif __x86_64__
CheckTypeSize(jpeg_scan_info,36, 11368, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11368,0);
Msg("Find size of jpeg_scan_info (11368)\n");
#endif

#if __i386__
CheckTypeSize(const jpeg_scan_info,36, 11369, 2)
#elif __x86_64__
CheckTypeSize(const jpeg_scan_info,36, 11369, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11369,0);
Msg("Find size of const jpeg_scan_info (11369)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11370,0);
Msg("Find size of const jpeg_scan_info * (11370)\n");
#endif

#if __i386__
CheckTypeSize(struct jpeg_comp_master *,4, 11372, 2)
#elif __x86_64__
CheckTypeSize(struct jpeg_comp_master *,8, 11372, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11372,0);
Msg("Find size of jpeg_comp_master * (11372)\n");
#endif

#if __i386__
CheckTypeSize(struct jpeg_c_main_controller *,4, 11374, 2)
#elif __x86_64__
CheckTypeSize(struct jpeg_c_main_controller *,8, 11374, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11374,0);
Msg("Find size of jpeg_c_main_controller * (11374)\n");
#endif

#if __i386__
CheckTypeSize(struct jpeg_c_prep_controller *,4, 11376, 2)
#elif __x86_64__
CheckTypeSize(struct jpeg_c_prep_controller *,8, 11376, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11376,0);
Msg("Find size of jpeg_c_prep_controller * (11376)\n");
#endif

#if __i386__
CheckTypeSize(struct jpeg_c_coef_controller *,4, 11378, 2)
#elif __x86_64__
CheckTypeSize(struct jpeg_c_coef_controller *,8, 11378, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11378,0);
Msg("Find size of jpeg_c_coef_controller * (11378)\n");
#endif

#if __i386__
CheckTypeSize(struct jpeg_marker_writer *,4, 11380, 2)
#elif __x86_64__
CheckTypeSize(struct jpeg_marker_writer *,8, 11380, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11380,0);
Msg("Find size of jpeg_marker_writer * (11380)\n");
#endif

#if __i386__
CheckTypeSize(struct jpeg_color_converter *,4, 11382, 2)
#elif __x86_64__
CheckTypeSize(struct jpeg_color_converter *,8, 11382, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11382,0);
Msg("Find size of jpeg_color_converter * (11382)\n");
#endif

#if __i386__
CheckTypeSize(struct jpeg_downsampler *,4, 11384, 2)
#elif __x86_64__
CheckTypeSize(struct jpeg_downsampler *,8, 11384, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11384,0);
Msg("Find size of jpeg_downsampler * (11384)\n");
#endif

#if __i386__
CheckTypeSize(struct jpeg_forward_dct *,4, 11386, 2)
#elif __x86_64__
CheckTypeSize(struct jpeg_forward_dct *,8, 11386, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11386,0);
Msg("Find size of jpeg_forward_dct * (11386)\n");
#endif

#if __i386__
CheckTypeSize(struct jpeg_entropy_encoder *,4, 11388, 2)
#elif __x86_64__
CheckTypeSize(struct jpeg_entropy_encoder *,8, 11388, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11388,0);
Msg("Find size of jpeg_entropy_encoder * (11388)\n");
#endif

#if __i386__
CheckTypeSize(jpeg_scan_info *,4, 11389, 2)
#elif __x86_64__
CheckTypeSize(jpeg_scan_info *,8, 11389, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11389,0);
Msg("Find size of jpeg_scan_info * (11389)\n");
#endif

#if __i386__
CheckTypeSize(jvirt_barray_ptr *,4, 11390, 2)
#elif __x86_64__
CheckTypeSize(jvirt_barray_ptr *,8, 11390, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11390,0);
Msg("Find size of jvirt_barray_ptr * (11390)\n");
#endif

#if __i386__
CheckTypeSize(JSAMPARRAY *,4, 11391, 2)
#elif __x86_64__
CheckTypeSize(JSAMPARRAY *,8, 11391, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11391,0);
Msg("Find size of JSAMPARRAY * (11391)\n");
#endif

#if __i386__
CheckTypeSize(JSAMPIMAGE,4, 11392, 2)
#elif __x86_64__
CheckTypeSize(JSAMPIMAGE,8, 11392, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11392,0);
Msg("Find size of JSAMPIMAGE (11392)\n");
#endif

#if __i386__
CheckTypeSize(jpeg_marker_parser_method,4, 11393, 2)
#elif __x86_64__
CheckTypeSize(jpeg_marker_parser_method,8, 11393, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11393,0);
Msg("Find size of jpeg_marker_parser_method (11393)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11394,0);
Msg("Find size of const unsigned int (11394)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11395,0);
Msg("Find size of const unsigned int * (11395)\n");
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
