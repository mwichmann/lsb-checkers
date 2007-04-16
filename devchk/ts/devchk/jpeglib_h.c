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
CheckTypeSize(struct jpeg_decompress_struct,464, 11249, 2);
CheckMemberSize(struct jpeg_decompress_struct,mem,4,2,41081);
CheckOffset(struct jpeg_decompress_struct,mem,4,2,41081);
CheckMemberSize(struct jpeg_decompress_struct,progress,4,2,41082);
CheckOffset(struct jpeg_decompress_struct,progress,8,2,41082);
CheckMemberSize(struct jpeg_decompress_struct,client_data,4,2,41083);
CheckOffset(struct jpeg_decompress_struct,client_data,12,2,41083);
CheckMemberSize(struct jpeg_decompress_struct,is_decompressor,4,2,41084);
CheckOffset(struct jpeg_decompress_struct,is_decompressor,16,2,41084);
CheckMemberSize(struct jpeg_decompress_struct,global_state,4,2,41085);
CheckOffset(struct jpeg_decompress_struct,global_state,20,2,41085);
CheckMemberSize(struct jpeg_decompress_struct,src,4,2,41099);
CheckOffset(struct jpeg_decompress_struct,src,24,2,41099);
CheckMemberSize(struct jpeg_decompress_struct,image_width,4,2,41100);
CheckOffset(struct jpeg_decompress_struct,image_width,28,2,41100);
CheckMemberSize(struct jpeg_decompress_struct,image_height,4,2,41101);
CheckOffset(struct jpeg_decompress_struct,image_height,32,2,41101);
CheckMemberSize(struct jpeg_decompress_struct,num_components,4,2,41102);
CheckOffset(struct jpeg_decompress_struct,num_components,36,2,41102);
CheckMemberSize(struct jpeg_decompress_struct,jpeg_color_space,4,2,41109);
CheckOffset(struct jpeg_decompress_struct,jpeg_color_space,40,2,41109);
CheckMemberSize(struct jpeg_decompress_struct,out_color_space,4,2,41110);
CheckOffset(struct jpeg_decompress_struct,out_color_space,44,2,41110);
CheckMemberSize(struct jpeg_decompress_struct,scale_num,4,2,41111);
CheckOffset(struct jpeg_decompress_struct,scale_num,48,2,41111);
CheckMemberSize(struct jpeg_decompress_struct,scale_denom,4,2,41112);
CheckOffset(struct jpeg_decompress_struct,scale_denom,52,2,41112);
CheckMemberSize(struct jpeg_decompress_struct,output_gamma,8,2,41113);
CheckOffset(struct jpeg_decompress_struct,output_gamma,56,2,41113);
CheckMemberSize(struct jpeg_decompress_struct,buffered_image,4,2,41114);
CheckOffset(struct jpeg_decompress_struct,buffered_image,64,2,41114);
CheckMemberSize(struct jpeg_decompress_struct,raw_data_out,4,2,41115);
CheckOffset(struct jpeg_decompress_struct,raw_data_out,68,2,41115);
CheckMemberSize(struct jpeg_decompress_struct,dct_method,4,2,41119);
CheckOffset(struct jpeg_decompress_struct,dct_method,72,2,41119);
CheckMemberSize(struct jpeg_decompress_struct,do_fancy_upsampling,4,2,41120);
CheckOffset(struct jpeg_decompress_struct,do_fancy_upsampling,76,2,41120);
CheckMemberSize(struct jpeg_decompress_struct,do_block_smoothing,4,2,41121);
CheckOffset(struct jpeg_decompress_struct,do_block_smoothing,80,2,41121);
CheckMemberSize(struct jpeg_decompress_struct,quantize_colors,4,2,41122);
CheckOffset(struct jpeg_decompress_struct,quantize_colors,84,2,41122);
CheckMemberSize(struct jpeg_decompress_struct,dither_mode,4,2,41126);
CheckOffset(struct jpeg_decompress_struct,dither_mode,88,2,41126);
CheckMemberSize(struct jpeg_decompress_struct,two_pass_quantize,4,2,41127);
CheckOffset(struct jpeg_decompress_struct,two_pass_quantize,92,2,41127);
CheckMemberSize(struct jpeg_decompress_struct,desired_number_of_colors,4,2,41128);
CheckOffset(struct jpeg_decompress_struct,desired_number_of_colors,96,2,41128);
CheckMemberSize(struct jpeg_decompress_struct,enable_1pass_quant,4,2,41129);
CheckOffset(struct jpeg_decompress_struct,enable_1pass_quant,100,2,41129);
CheckMemberSize(struct jpeg_decompress_struct,enable_external_quant,4,2,41130);
CheckOffset(struct jpeg_decompress_struct,enable_external_quant,104,2,41130);
CheckMemberSize(struct jpeg_decompress_struct,enable_2pass_quant,4,2,41131);
CheckOffset(struct jpeg_decompress_struct,enable_2pass_quant,108,2,41131);
CheckMemberSize(struct jpeg_decompress_struct,output_width,4,2,41132);
CheckOffset(struct jpeg_decompress_struct,output_width,112,2,41132);
CheckMemberSize(struct jpeg_decompress_struct,output_height,4,2,41133);
CheckOffset(struct jpeg_decompress_struct,output_height,116,2,41133);
CheckMemberSize(struct jpeg_decompress_struct,out_color_components,4,2,41134);
CheckOffset(struct jpeg_decompress_struct,out_color_components,120,2,41134);
CheckMemberSize(struct jpeg_decompress_struct,output_components,4,2,41135);
CheckOffset(struct jpeg_decompress_struct,output_components,124,2,41135);
CheckMemberSize(struct jpeg_decompress_struct,rec_outbuf_height,4,2,41136);
CheckOffset(struct jpeg_decompress_struct,rec_outbuf_height,128,2,41136);
CheckMemberSize(struct jpeg_decompress_struct,actual_number_of_colors,4,2,41137);
CheckOffset(struct jpeg_decompress_struct,actual_number_of_colors,132,2,41137);
CheckMemberSize(struct jpeg_decompress_struct,colormap,4,2,41138);
CheckOffset(struct jpeg_decompress_struct,colormap,136,2,41138);
CheckMemberSize(struct jpeg_decompress_struct,output_scanline,4,2,41139);
CheckOffset(struct jpeg_decompress_struct,output_scanline,140,2,41139);
CheckMemberSize(struct jpeg_decompress_struct,input_scan_number,4,2,41140);
CheckOffset(struct jpeg_decompress_struct,input_scan_number,144,2,41140);
CheckMemberSize(struct jpeg_decompress_struct,input_iMCU_row,4,2,41141);
CheckOffset(struct jpeg_decompress_struct,input_iMCU_row,148,2,41141);
CheckMemberSize(struct jpeg_decompress_struct,output_scan_number,4,2,41142);
CheckOffset(struct jpeg_decompress_struct,output_scan_number,152,2,41142);
CheckMemberSize(struct jpeg_decompress_struct,output_iMCU_row,4,2,41143);
CheckOffset(struct jpeg_decompress_struct,output_iMCU_row,156,2,41143);
CheckMemberSize(struct jpeg_decompress_struct,coef_bits,4,2,41144);
CheckOffset(struct jpeg_decompress_struct,coef_bits,160,2,41144);
CheckMemberSize(struct jpeg_decompress_struct,quant_tbl_ptrs,16,2,41147);
CheckOffset(struct jpeg_decompress_struct,quant_tbl_ptrs,164,2,41147);
CheckMemberSize(struct jpeg_decompress_struct,dc_huff_tbl_ptrs,16,2,41151);
CheckOffset(struct jpeg_decompress_struct,dc_huff_tbl_ptrs,180,2,41151);
CheckMemberSize(struct jpeg_decompress_struct,ac_huff_tbl_ptrs,16,2,41152);
CheckOffset(struct jpeg_decompress_struct,ac_huff_tbl_ptrs,196,2,41152);
CheckMemberSize(struct jpeg_decompress_struct,data_precision,4,2,41153);
CheckOffset(struct jpeg_decompress_struct,data_precision,212,2,41153);
CheckMemberSize(struct jpeg_decompress_struct,comp_info,4,2,41175);
CheckOffset(struct jpeg_decompress_struct,comp_info,216,2,41175);
CheckMemberSize(struct jpeg_decompress_struct,progressive_mode,4,2,41176);
CheckOffset(struct jpeg_decompress_struct,progressive_mode,220,2,41176);
CheckMemberSize(struct jpeg_decompress_struct,arith_code,4,2,41177);
CheckOffset(struct jpeg_decompress_struct,arith_code,224,2,41177);
CheckMemberSize(struct jpeg_decompress_struct,arith_dc_L,16,2,41178);
CheckOffset(struct jpeg_decompress_struct,arith_dc_L,228,2,41178);
CheckMemberSize(struct jpeg_decompress_struct,arith_dc_U,16,2,41179);
CheckOffset(struct jpeg_decompress_struct,arith_dc_U,244,2,41179);
CheckMemberSize(struct jpeg_decompress_struct,arith_ac_K,16,2,41180);
CheckOffset(struct jpeg_decompress_struct,arith_ac_K,260,2,41180);
CheckMemberSize(struct jpeg_decompress_struct,restart_interval,4,2,41181);
CheckOffset(struct jpeg_decompress_struct,restart_interval,276,2,41181);
CheckMemberSize(struct jpeg_decompress_struct,saw_JFIF_marker,4,2,41182);
CheckOffset(struct jpeg_decompress_struct,saw_JFIF_marker,280,2,41182);
CheckMemberSize(struct jpeg_decompress_struct,JFIF_major_version,1,2,41183);
CheckOffset(struct jpeg_decompress_struct,JFIF_major_version,284,2,41183);
CheckMemberSize(struct jpeg_decompress_struct,JFIF_minor_version,1,2,41184);
CheckOffset(struct jpeg_decompress_struct,JFIF_minor_version,285,2,41184);
CheckMemberSize(struct jpeg_decompress_struct,density_unit,1,2,41185);
CheckOffset(struct jpeg_decompress_struct,density_unit,286,2,41185);
CheckMemberSize(struct jpeg_decompress_struct,X_density,2,2,41186);
CheckOffset(struct jpeg_decompress_struct,X_density,288,2,41186);
CheckMemberSize(struct jpeg_decompress_struct,Y_density,2,2,41187);
CheckOffset(struct jpeg_decompress_struct,Y_density,290,2,41187);
CheckMemberSize(struct jpeg_decompress_struct,saw_Adobe_marker,4,2,41188);
CheckOffset(struct jpeg_decompress_struct,saw_Adobe_marker,292,2,41188);
CheckMemberSize(struct jpeg_decompress_struct,Adobe_transform,1,2,41189);
CheckOffset(struct jpeg_decompress_struct,Adobe_transform,296,2,41189);
CheckMemberSize(struct jpeg_decompress_struct,CCIR601_sampling,4,2,41190);
CheckOffset(struct jpeg_decompress_struct,CCIR601_sampling,300,2,41190);
CheckMemberSize(struct jpeg_decompress_struct,marker_list,4,2,41196);
CheckOffset(struct jpeg_decompress_struct,marker_list,304,2,41196);
CheckMemberSize(struct jpeg_decompress_struct,max_h_samp_factor,4,2,41197);
CheckOffset(struct jpeg_decompress_struct,max_h_samp_factor,308,2,41197);
CheckMemberSize(struct jpeg_decompress_struct,max_v_samp_factor,4,2,41198);
CheckOffset(struct jpeg_decompress_struct,max_v_samp_factor,312,2,41198);
CheckMemberSize(struct jpeg_decompress_struct,min_DCT_scaled_size,4,2,41199);
CheckOffset(struct jpeg_decompress_struct,min_DCT_scaled_size,316,2,41199);
CheckMemberSize(struct jpeg_decompress_struct,total_iMCU_rows,4,2,41200);
CheckOffset(struct jpeg_decompress_struct,total_iMCU_rows,320,2,41200);
CheckMemberSize(struct jpeg_decompress_struct,sample_range_limit,4,2,41201);
CheckOffset(struct jpeg_decompress_struct,sample_range_limit,324,2,41201);
CheckMemberSize(struct jpeg_decompress_struct,comps_in_scan,4,2,41202);
CheckOffset(struct jpeg_decompress_struct,comps_in_scan,328,2,41202);
CheckMemberSize(struct jpeg_decompress_struct,cur_comp_info,16,2,41203);
CheckOffset(struct jpeg_decompress_struct,cur_comp_info,332,2,41203);
CheckMemberSize(struct jpeg_decompress_struct,MCUs_per_row,4,2,41204);
CheckOffset(struct jpeg_decompress_struct,MCUs_per_row,348,2,41204);
CheckMemberSize(struct jpeg_decompress_struct,MCU_rows_in_scan,4,2,41205);
CheckOffset(struct jpeg_decompress_struct,MCU_rows_in_scan,352,2,41205);
CheckMemberSize(struct jpeg_decompress_struct,blocks_in_MCU,4,2,41206);
CheckOffset(struct jpeg_decompress_struct,blocks_in_MCU,356,2,41206);
CheckMemberSize(struct jpeg_decompress_struct,MCU_membership,40,2,41207);
CheckOffset(struct jpeg_decompress_struct,MCU_membership,360,2,41207);
CheckMemberSize(struct jpeg_decompress_struct,Ss,4,2,41208);
CheckOffset(struct jpeg_decompress_struct,Ss,400,2,41208);
CheckMemberSize(struct jpeg_decompress_struct,Se,4,2,41209);
CheckOffset(struct jpeg_decompress_struct,Se,404,2,41209);
CheckMemberSize(struct jpeg_decompress_struct,Ah,4,2,41210);
CheckOffset(struct jpeg_decompress_struct,Ah,408,2,41210);
CheckMemberSize(struct jpeg_decompress_struct,Al,4,2,41211);
CheckOffset(struct jpeg_decompress_struct,Al,412,2,41211);
CheckMemberSize(struct jpeg_decompress_struct,unread_marker,4,2,41212);
CheckOffset(struct jpeg_decompress_struct,unread_marker,416,2,41212);
CheckMemberSize(struct jpeg_decompress_struct,master,4,2,41213);
CheckOffset(struct jpeg_decompress_struct,master,420,2,41213);
CheckMemberSize(struct jpeg_decompress_struct,main,4,2,41214);
CheckOffset(struct jpeg_decompress_struct,main,424,2,41214);
CheckMemberSize(struct jpeg_decompress_struct,coef,4,2,41215);
CheckOffset(struct jpeg_decompress_struct,coef,428,2,41215);
CheckMemberSize(struct jpeg_decompress_struct,post,4,2,41216);
CheckOffset(struct jpeg_decompress_struct,post,432,2,41216);
CheckMemberSize(struct jpeg_decompress_struct,inputctl,4,2,41217);
CheckOffset(struct jpeg_decompress_struct,inputctl,436,2,41217);
CheckMemberSize(struct jpeg_decompress_struct,marker,4,2,41218);
CheckOffset(struct jpeg_decompress_struct,marker,440,2,41218);
CheckMemberSize(struct jpeg_decompress_struct,entropy,4,2,41219);
CheckOffset(struct jpeg_decompress_struct,entropy,444,2,41219);
CheckMemberSize(struct jpeg_decompress_struct,idct,4,2,41220);
CheckOffset(struct jpeg_decompress_struct,idct,448,2,41220);
CheckMemberSize(struct jpeg_decompress_struct,upsample,4,2,41221);
CheckOffset(struct jpeg_decompress_struct,upsample,452,2,41221);
CheckMemberSize(struct jpeg_decompress_struct,cconvert,4,2,41222);
CheckOffset(struct jpeg_decompress_struct,cconvert,456,2,41222);
CheckMemberSize(struct jpeg_decompress_struct,cquantize,4,2,41223);
CheckOffset(struct jpeg_decompress_struct,cquantize,460,2,41223);
#elif __x86_64__
CheckTypeSize(struct jpeg_decompress_struct,632, 11249, 11);
CheckMemberSize(struct jpeg_decompress_struct,mem,8,11,41081);
CheckOffset(struct jpeg_decompress_struct,mem,8,11,41081);
CheckMemberSize(struct jpeg_decompress_struct,progress,8,11,41082);
CheckOffset(struct jpeg_decompress_struct,progress,16,11,41082);
CheckMemberSize(struct jpeg_decompress_struct,client_data,8,11,41083);
CheckOffset(struct jpeg_decompress_struct,client_data,24,11,41083);
CheckMemberSize(struct jpeg_decompress_struct,is_decompressor,4,11,41084);
CheckOffset(struct jpeg_decompress_struct,is_decompressor,32,11,41084);
CheckMemberSize(struct jpeg_decompress_struct,global_state,4,11,41085);
CheckOffset(struct jpeg_decompress_struct,global_state,36,11,41085);
CheckMemberSize(struct jpeg_decompress_struct,src,8,11,41099);
CheckOffset(struct jpeg_decompress_struct,src,40,11,41099);
CheckMemberSize(struct jpeg_decompress_struct,image_width,4,11,41100);
CheckOffset(struct jpeg_decompress_struct,image_width,48,11,41100);
CheckMemberSize(struct jpeg_decompress_struct,image_height,4,11,41101);
CheckOffset(struct jpeg_decompress_struct,image_height,52,11,41101);
CheckMemberSize(struct jpeg_decompress_struct,num_components,4,11,41102);
CheckOffset(struct jpeg_decompress_struct,num_components,56,11,41102);
CheckMemberSize(struct jpeg_decompress_struct,jpeg_color_space,4,11,41109);
CheckOffset(struct jpeg_decompress_struct,jpeg_color_space,60,11,41109);
CheckMemberSize(struct jpeg_decompress_struct,out_color_space,4,11,41110);
CheckOffset(struct jpeg_decompress_struct,out_color_space,64,11,41110);
CheckMemberSize(struct jpeg_decompress_struct,scale_num,4,11,41111);
CheckOffset(struct jpeg_decompress_struct,scale_num,68,11,41111);
CheckMemberSize(struct jpeg_decompress_struct,scale_denom,4,11,41112);
CheckOffset(struct jpeg_decompress_struct,scale_denom,72,11,41112);
CheckMemberSize(struct jpeg_decompress_struct,output_gamma,8,11,41113);
CheckOffset(struct jpeg_decompress_struct,output_gamma,80,11,41113);
CheckMemberSize(struct jpeg_decompress_struct,buffered_image,4,11,41114);
CheckOffset(struct jpeg_decompress_struct,buffered_image,88,11,41114);
CheckMemberSize(struct jpeg_decompress_struct,raw_data_out,4,11,41115);
CheckOffset(struct jpeg_decompress_struct,raw_data_out,92,11,41115);
CheckMemberSize(struct jpeg_decompress_struct,dct_method,4,11,41119);
CheckOffset(struct jpeg_decompress_struct,dct_method,96,11,41119);
CheckMemberSize(struct jpeg_decompress_struct,do_fancy_upsampling,4,11,41120);
CheckOffset(struct jpeg_decompress_struct,do_fancy_upsampling,100,11,41120);
CheckMemberSize(struct jpeg_decompress_struct,do_block_smoothing,4,11,41121);
CheckOffset(struct jpeg_decompress_struct,do_block_smoothing,104,11,41121);
CheckMemberSize(struct jpeg_decompress_struct,quantize_colors,4,11,41122);
CheckOffset(struct jpeg_decompress_struct,quantize_colors,108,11,41122);
CheckMemberSize(struct jpeg_decompress_struct,dither_mode,4,11,41126);
CheckOffset(struct jpeg_decompress_struct,dither_mode,112,11,41126);
CheckMemberSize(struct jpeg_decompress_struct,two_pass_quantize,4,11,41127);
CheckOffset(struct jpeg_decompress_struct,two_pass_quantize,116,11,41127);
CheckMemberSize(struct jpeg_decompress_struct,desired_number_of_colors,4,11,41128);
CheckOffset(struct jpeg_decompress_struct,desired_number_of_colors,120,11,41128);
CheckMemberSize(struct jpeg_decompress_struct,enable_1pass_quant,4,11,41129);
CheckOffset(struct jpeg_decompress_struct,enable_1pass_quant,124,11,41129);
CheckMemberSize(struct jpeg_decompress_struct,enable_external_quant,4,11,41130);
CheckOffset(struct jpeg_decompress_struct,enable_external_quant,128,11,41130);
CheckMemberSize(struct jpeg_decompress_struct,enable_2pass_quant,4,11,41131);
CheckOffset(struct jpeg_decompress_struct,enable_2pass_quant,132,11,41131);
CheckMemberSize(struct jpeg_decompress_struct,output_width,4,11,41132);
CheckOffset(struct jpeg_decompress_struct,output_width,136,11,41132);
CheckMemberSize(struct jpeg_decompress_struct,output_height,4,11,41133);
CheckOffset(struct jpeg_decompress_struct,output_height,140,11,41133);
CheckMemberSize(struct jpeg_decompress_struct,out_color_components,4,11,41134);
CheckOffset(struct jpeg_decompress_struct,out_color_components,144,11,41134);
CheckMemberSize(struct jpeg_decompress_struct,output_components,4,11,41135);
CheckOffset(struct jpeg_decompress_struct,output_components,148,11,41135);
CheckMemberSize(struct jpeg_decompress_struct,rec_outbuf_height,4,11,41136);
CheckOffset(struct jpeg_decompress_struct,rec_outbuf_height,152,11,41136);
CheckMemberSize(struct jpeg_decompress_struct,actual_number_of_colors,4,11,41137);
CheckOffset(struct jpeg_decompress_struct,actual_number_of_colors,156,11,41137);
CheckMemberSize(struct jpeg_decompress_struct,colormap,8,11,41138);
CheckOffset(struct jpeg_decompress_struct,colormap,160,11,41138);
CheckMemberSize(struct jpeg_decompress_struct,output_scanline,4,11,41139);
CheckOffset(struct jpeg_decompress_struct,output_scanline,168,11,41139);
CheckMemberSize(struct jpeg_decompress_struct,input_scan_number,4,11,41140);
CheckOffset(struct jpeg_decompress_struct,input_scan_number,172,11,41140);
CheckMemberSize(struct jpeg_decompress_struct,input_iMCU_row,4,11,41141);
CheckOffset(struct jpeg_decompress_struct,input_iMCU_row,176,11,41141);
CheckMemberSize(struct jpeg_decompress_struct,output_scan_number,4,11,41142);
CheckOffset(struct jpeg_decompress_struct,output_scan_number,180,11,41142);
CheckMemberSize(struct jpeg_decompress_struct,output_iMCU_row,4,11,41143);
CheckOffset(struct jpeg_decompress_struct,output_iMCU_row,184,11,41143);
CheckMemberSize(struct jpeg_decompress_struct,coef_bits,8,11,41144);
CheckOffset(struct jpeg_decompress_struct,coef_bits,192,11,41144);
CheckMemberSize(struct jpeg_decompress_struct,quant_tbl_ptrs,32,11,41147);
CheckOffset(struct jpeg_decompress_struct,quant_tbl_ptrs,200,11,41147);
CheckMemberSize(struct jpeg_decompress_struct,dc_huff_tbl_ptrs,32,11,41151);
CheckOffset(struct jpeg_decompress_struct,dc_huff_tbl_ptrs,232,11,41151);
CheckMemberSize(struct jpeg_decompress_struct,ac_huff_tbl_ptrs,32,11,41152);
CheckOffset(struct jpeg_decompress_struct,ac_huff_tbl_ptrs,264,11,41152);
CheckMemberSize(struct jpeg_decompress_struct,data_precision,4,11,41153);
CheckOffset(struct jpeg_decompress_struct,data_precision,296,11,41153);
CheckMemberSize(struct jpeg_decompress_struct,comp_info,8,11,41175);
CheckOffset(struct jpeg_decompress_struct,comp_info,304,11,41175);
CheckMemberSize(struct jpeg_decompress_struct,progressive_mode,4,11,41176);
CheckOffset(struct jpeg_decompress_struct,progressive_mode,312,11,41176);
CheckMemberSize(struct jpeg_decompress_struct,arith_code,4,11,41177);
CheckOffset(struct jpeg_decompress_struct,arith_code,316,11,41177);
CheckMemberSize(struct jpeg_decompress_struct,arith_dc_L,16,11,41178);
CheckOffset(struct jpeg_decompress_struct,arith_dc_L,320,11,41178);
CheckMemberSize(struct jpeg_decompress_struct,arith_dc_U,16,11,41179);
CheckOffset(struct jpeg_decompress_struct,arith_dc_U,336,11,41179);
CheckMemberSize(struct jpeg_decompress_struct,arith_ac_K,16,11,41180);
CheckOffset(struct jpeg_decompress_struct,arith_ac_K,352,11,41180);
CheckMemberSize(struct jpeg_decompress_struct,restart_interval,4,11,41181);
CheckOffset(struct jpeg_decompress_struct,restart_interval,368,11,41181);
CheckMemberSize(struct jpeg_decompress_struct,saw_JFIF_marker,4,11,41182);
CheckOffset(struct jpeg_decompress_struct,saw_JFIF_marker,372,11,41182);
CheckMemberSize(struct jpeg_decompress_struct,JFIF_major_version,1,11,41183);
CheckOffset(struct jpeg_decompress_struct,JFIF_major_version,376,11,41183);
CheckMemberSize(struct jpeg_decompress_struct,JFIF_minor_version,1,11,41184);
CheckOffset(struct jpeg_decompress_struct,JFIF_minor_version,377,11,41184);
CheckMemberSize(struct jpeg_decompress_struct,density_unit,1,11,41185);
CheckOffset(struct jpeg_decompress_struct,density_unit,378,11,41185);
CheckMemberSize(struct jpeg_decompress_struct,X_density,2,11,41186);
CheckOffset(struct jpeg_decompress_struct,X_density,380,11,41186);
CheckMemberSize(struct jpeg_decompress_struct,Y_density,2,11,41187);
CheckOffset(struct jpeg_decompress_struct,Y_density,382,11,41187);
CheckMemberSize(struct jpeg_decompress_struct,saw_Adobe_marker,4,11,41188);
CheckOffset(struct jpeg_decompress_struct,saw_Adobe_marker,384,11,41188);
CheckMemberSize(struct jpeg_decompress_struct,Adobe_transform,1,11,41189);
CheckOffset(struct jpeg_decompress_struct,Adobe_transform,388,11,41189);
CheckMemberSize(struct jpeg_decompress_struct,CCIR601_sampling,4,11,41190);
CheckOffset(struct jpeg_decompress_struct,CCIR601_sampling,392,11,41190);
CheckMemberSize(struct jpeg_decompress_struct,marker_list,8,11,41196);
CheckOffset(struct jpeg_decompress_struct,marker_list,400,11,41196);
CheckMemberSize(struct jpeg_decompress_struct,max_h_samp_factor,4,11,41197);
CheckOffset(struct jpeg_decompress_struct,max_h_samp_factor,408,11,41197);
CheckMemberSize(struct jpeg_decompress_struct,max_v_samp_factor,4,11,41198);
CheckOffset(struct jpeg_decompress_struct,max_v_samp_factor,412,11,41198);
CheckMemberSize(struct jpeg_decompress_struct,min_DCT_scaled_size,4,11,41199);
CheckOffset(struct jpeg_decompress_struct,min_DCT_scaled_size,416,11,41199);
CheckMemberSize(struct jpeg_decompress_struct,total_iMCU_rows,4,11,41200);
CheckOffset(struct jpeg_decompress_struct,total_iMCU_rows,420,11,41200);
CheckMemberSize(struct jpeg_decompress_struct,sample_range_limit,8,11,41201);
CheckOffset(struct jpeg_decompress_struct,sample_range_limit,424,11,41201);
CheckMemberSize(struct jpeg_decompress_struct,comps_in_scan,4,11,41202);
CheckOffset(struct jpeg_decompress_struct,comps_in_scan,432,11,41202);
CheckMemberSize(struct jpeg_decompress_struct,cur_comp_info,32,11,41203);
CheckOffset(struct jpeg_decompress_struct,cur_comp_info,440,11,41203);
CheckMemberSize(struct jpeg_decompress_struct,MCUs_per_row,4,11,41204);
CheckOffset(struct jpeg_decompress_struct,MCUs_per_row,472,11,41204);
CheckMemberSize(struct jpeg_decompress_struct,MCU_rows_in_scan,4,11,41205);
CheckOffset(struct jpeg_decompress_struct,MCU_rows_in_scan,476,11,41205);
CheckMemberSize(struct jpeg_decompress_struct,blocks_in_MCU,4,11,41206);
CheckOffset(struct jpeg_decompress_struct,blocks_in_MCU,480,11,41206);
CheckMemberSize(struct jpeg_decompress_struct,MCU_membership,40,11,41207);
CheckOffset(struct jpeg_decompress_struct,MCU_membership,484,11,41207);
CheckMemberSize(struct jpeg_decompress_struct,Ss,4,11,41208);
CheckOffset(struct jpeg_decompress_struct,Ss,524,11,41208);
CheckMemberSize(struct jpeg_decompress_struct,Se,4,11,41209);
CheckOffset(struct jpeg_decompress_struct,Se,528,11,41209);
CheckMemberSize(struct jpeg_decompress_struct,Ah,4,11,41210);
CheckOffset(struct jpeg_decompress_struct,Ah,532,11,41210);
CheckMemberSize(struct jpeg_decompress_struct,Al,4,11,41211);
CheckOffset(struct jpeg_decompress_struct,Al,536,11,41211);
CheckMemberSize(struct jpeg_decompress_struct,unread_marker,4,11,41212);
CheckOffset(struct jpeg_decompress_struct,unread_marker,540,11,41212);
CheckMemberSize(struct jpeg_decompress_struct,master,8,11,41213);
CheckOffset(struct jpeg_decompress_struct,master,544,11,41213);
CheckMemberSize(struct jpeg_decompress_struct,main,8,11,41214);
CheckOffset(struct jpeg_decompress_struct,main,552,11,41214);
CheckMemberSize(struct jpeg_decompress_struct,coef,8,11,41215);
CheckOffset(struct jpeg_decompress_struct,coef,560,11,41215);
CheckMemberSize(struct jpeg_decompress_struct,post,8,11,41216);
CheckOffset(struct jpeg_decompress_struct,post,568,11,41216);
CheckMemberSize(struct jpeg_decompress_struct,inputctl,8,11,41217);
CheckOffset(struct jpeg_decompress_struct,inputctl,576,11,41217);
CheckMemberSize(struct jpeg_decompress_struct,marker,8,11,41218);
CheckOffset(struct jpeg_decompress_struct,marker,584,11,41218);
CheckMemberSize(struct jpeg_decompress_struct,entropy,8,11,41219);
CheckOffset(struct jpeg_decompress_struct,entropy,592,11,41219);
CheckMemberSize(struct jpeg_decompress_struct,idct,8,11,41220);
CheckOffset(struct jpeg_decompress_struct,idct,600,11,41220);
CheckMemberSize(struct jpeg_decompress_struct,upsample,8,11,41221);
CheckOffset(struct jpeg_decompress_struct,upsample,608,11,41221);
CheckMemberSize(struct jpeg_decompress_struct,cconvert,8,11,41222);
CheckOffset(struct jpeg_decompress_struct,cconvert,616,11,41222);
CheckMemberSize(struct jpeg_decompress_struct,cquantize,8,11,41223);
CheckOffset(struct jpeg_decompress_struct,cquantize,624,11,41223);
#elif __ia64__
CheckTypeSize(struct jpeg_decompress_struct,632, 11249, 3);
CheckMemberSize(struct jpeg_decompress_struct,mem,8,3,41081);
CheckOffset(struct jpeg_decompress_struct,mem,8,3,41081);
CheckMemberSize(struct jpeg_decompress_struct,progress,8,3,41082);
CheckOffset(struct jpeg_decompress_struct,progress,16,3,41082);
CheckMemberSize(struct jpeg_decompress_struct,client_data,8,3,41083);
CheckOffset(struct jpeg_decompress_struct,client_data,24,3,41083);
CheckMemberSize(struct jpeg_decompress_struct,is_decompressor,4,3,41084);
CheckOffset(struct jpeg_decompress_struct,is_decompressor,32,3,41084);
CheckMemberSize(struct jpeg_decompress_struct,global_state,4,3,41085);
CheckOffset(struct jpeg_decompress_struct,global_state,36,3,41085);
CheckMemberSize(struct jpeg_decompress_struct,src,8,3,41099);
CheckOffset(struct jpeg_decompress_struct,src,40,3,41099);
CheckMemberSize(struct jpeg_decompress_struct,image_width,4,3,41100);
CheckOffset(struct jpeg_decompress_struct,image_width,48,3,41100);
CheckMemberSize(struct jpeg_decompress_struct,image_height,4,3,41101);
CheckOffset(struct jpeg_decompress_struct,image_height,52,3,41101);
CheckMemberSize(struct jpeg_decompress_struct,num_components,4,3,41102);
CheckOffset(struct jpeg_decompress_struct,num_components,56,3,41102);
CheckMemberSize(struct jpeg_decompress_struct,jpeg_color_space,4,3,41109);
CheckOffset(struct jpeg_decompress_struct,jpeg_color_space,60,3,41109);
CheckMemberSize(struct jpeg_decompress_struct,out_color_space,4,3,41110);
CheckOffset(struct jpeg_decompress_struct,out_color_space,64,3,41110);
CheckMemberSize(struct jpeg_decompress_struct,scale_num,4,3,41111);
CheckOffset(struct jpeg_decompress_struct,scale_num,68,3,41111);
CheckMemberSize(struct jpeg_decompress_struct,scale_denom,4,3,41112);
CheckOffset(struct jpeg_decompress_struct,scale_denom,72,3,41112);
CheckMemberSize(struct jpeg_decompress_struct,output_gamma,8,3,41113);
CheckOffset(struct jpeg_decompress_struct,output_gamma,80,3,41113);
CheckMemberSize(struct jpeg_decompress_struct,buffered_image,4,3,41114);
CheckOffset(struct jpeg_decompress_struct,buffered_image,88,3,41114);
CheckMemberSize(struct jpeg_decompress_struct,raw_data_out,4,3,41115);
CheckOffset(struct jpeg_decompress_struct,raw_data_out,92,3,41115);
CheckMemberSize(struct jpeg_decompress_struct,dct_method,4,3,41119);
CheckOffset(struct jpeg_decompress_struct,dct_method,96,3,41119);
CheckMemberSize(struct jpeg_decompress_struct,do_fancy_upsampling,4,3,41120);
CheckOffset(struct jpeg_decompress_struct,do_fancy_upsampling,100,3,41120);
CheckMemberSize(struct jpeg_decompress_struct,do_block_smoothing,4,3,41121);
CheckOffset(struct jpeg_decompress_struct,do_block_smoothing,104,3,41121);
CheckMemberSize(struct jpeg_decompress_struct,quantize_colors,4,3,41122);
CheckOffset(struct jpeg_decompress_struct,quantize_colors,108,3,41122);
CheckMemberSize(struct jpeg_decompress_struct,dither_mode,4,3,41126);
CheckOffset(struct jpeg_decompress_struct,dither_mode,112,3,41126);
CheckMemberSize(struct jpeg_decompress_struct,two_pass_quantize,4,3,41127);
CheckOffset(struct jpeg_decompress_struct,two_pass_quantize,116,3,41127);
CheckMemberSize(struct jpeg_decompress_struct,desired_number_of_colors,4,3,41128);
CheckOffset(struct jpeg_decompress_struct,desired_number_of_colors,120,3,41128);
CheckMemberSize(struct jpeg_decompress_struct,enable_1pass_quant,4,3,41129);
CheckOffset(struct jpeg_decompress_struct,enable_1pass_quant,124,3,41129);
CheckMemberSize(struct jpeg_decompress_struct,enable_external_quant,4,3,41130);
CheckOffset(struct jpeg_decompress_struct,enable_external_quant,128,3,41130);
CheckMemberSize(struct jpeg_decompress_struct,enable_2pass_quant,4,3,41131);
CheckOffset(struct jpeg_decompress_struct,enable_2pass_quant,132,3,41131);
CheckMemberSize(struct jpeg_decompress_struct,output_width,4,3,41132);
CheckOffset(struct jpeg_decompress_struct,output_width,136,3,41132);
CheckMemberSize(struct jpeg_decompress_struct,output_height,4,3,41133);
CheckOffset(struct jpeg_decompress_struct,output_height,140,3,41133);
CheckMemberSize(struct jpeg_decompress_struct,out_color_components,4,3,41134);
CheckOffset(struct jpeg_decompress_struct,out_color_components,144,3,41134);
CheckMemberSize(struct jpeg_decompress_struct,output_components,4,3,41135);
CheckOffset(struct jpeg_decompress_struct,output_components,148,3,41135);
CheckMemberSize(struct jpeg_decompress_struct,rec_outbuf_height,4,3,41136);
CheckOffset(struct jpeg_decompress_struct,rec_outbuf_height,152,3,41136);
CheckMemberSize(struct jpeg_decompress_struct,actual_number_of_colors,4,3,41137);
CheckOffset(struct jpeg_decompress_struct,actual_number_of_colors,156,3,41137);
CheckMemberSize(struct jpeg_decompress_struct,colormap,8,3,41138);
CheckOffset(struct jpeg_decompress_struct,colormap,160,3,41138);
CheckMemberSize(struct jpeg_decompress_struct,output_scanline,4,3,41139);
CheckOffset(struct jpeg_decompress_struct,output_scanline,168,3,41139);
CheckMemberSize(struct jpeg_decompress_struct,input_scan_number,4,3,41140);
CheckOffset(struct jpeg_decompress_struct,input_scan_number,172,3,41140);
CheckMemberSize(struct jpeg_decompress_struct,input_iMCU_row,4,3,41141);
CheckOffset(struct jpeg_decompress_struct,input_iMCU_row,176,3,41141);
CheckMemberSize(struct jpeg_decompress_struct,output_scan_number,4,3,41142);
CheckOffset(struct jpeg_decompress_struct,output_scan_number,180,3,41142);
CheckMemberSize(struct jpeg_decompress_struct,output_iMCU_row,4,3,41143);
CheckOffset(struct jpeg_decompress_struct,output_iMCU_row,184,3,41143);
CheckMemberSize(struct jpeg_decompress_struct,coef_bits,8,3,41144);
CheckOffset(struct jpeg_decompress_struct,coef_bits,192,3,41144);
CheckMemberSize(struct jpeg_decompress_struct,quant_tbl_ptrs,32,3,41147);
CheckOffset(struct jpeg_decompress_struct,quant_tbl_ptrs,200,3,41147);
CheckMemberSize(struct jpeg_decompress_struct,dc_huff_tbl_ptrs,32,3,41151);
CheckOffset(struct jpeg_decompress_struct,dc_huff_tbl_ptrs,232,3,41151);
CheckMemberSize(struct jpeg_decompress_struct,ac_huff_tbl_ptrs,32,3,41152);
CheckOffset(struct jpeg_decompress_struct,ac_huff_tbl_ptrs,264,3,41152);
CheckMemberSize(struct jpeg_decompress_struct,data_precision,4,3,41153);
CheckOffset(struct jpeg_decompress_struct,data_precision,296,3,41153);
CheckMemberSize(struct jpeg_decompress_struct,comp_info,8,3,41175);
CheckOffset(struct jpeg_decompress_struct,comp_info,304,3,41175);
CheckMemberSize(struct jpeg_decompress_struct,progressive_mode,4,3,41176);
CheckOffset(struct jpeg_decompress_struct,progressive_mode,312,3,41176);
CheckMemberSize(struct jpeg_decompress_struct,arith_code,4,3,41177);
CheckOffset(struct jpeg_decompress_struct,arith_code,316,3,41177);
CheckMemberSize(struct jpeg_decompress_struct,arith_dc_L,16,3,41178);
CheckOffset(struct jpeg_decompress_struct,arith_dc_L,320,3,41178);
CheckMemberSize(struct jpeg_decompress_struct,arith_dc_U,16,3,41179);
CheckOffset(struct jpeg_decompress_struct,arith_dc_U,336,3,41179);
CheckMemberSize(struct jpeg_decompress_struct,arith_ac_K,16,3,41180);
CheckOffset(struct jpeg_decompress_struct,arith_ac_K,352,3,41180);
CheckMemberSize(struct jpeg_decompress_struct,restart_interval,4,3,41181);
CheckOffset(struct jpeg_decompress_struct,restart_interval,368,3,41181);
CheckMemberSize(struct jpeg_decompress_struct,saw_JFIF_marker,4,3,41182);
CheckOffset(struct jpeg_decompress_struct,saw_JFIF_marker,372,3,41182);
CheckMemberSize(struct jpeg_decompress_struct,JFIF_major_version,1,3,41183);
CheckOffset(struct jpeg_decompress_struct,JFIF_major_version,376,3,41183);
CheckMemberSize(struct jpeg_decompress_struct,JFIF_minor_version,1,3,41184);
CheckOffset(struct jpeg_decompress_struct,JFIF_minor_version,377,3,41184);
CheckMemberSize(struct jpeg_decompress_struct,density_unit,1,3,41185);
CheckOffset(struct jpeg_decompress_struct,density_unit,378,3,41185);
CheckMemberSize(struct jpeg_decompress_struct,X_density,2,3,41186);
CheckOffset(struct jpeg_decompress_struct,X_density,380,3,41186);
CheckMemberSize(struct jpeg_decompress_struct,Y_density,2,3,41187);
CheckOffset(struct jpeg_decompress_struct,Y_density,382,3,41187);
CheckMemberSize(struct jpeg_decompress_struct,saw_Adobe_marker,4,3,41188);
CheckOffset(struct jpeg_decompress_struct,saw_Adobe_marker,384,3,41188);
CheckMemberSize(struct jpeg_decompress_struct,Adobe_transform,1,3,41189);
CheckOffset(struct jpeg_decompress_struct,Adobe_transform,388,3,41189);
CheckMemberSize(struct jpeg_decompress_struct,CCIR601_sampling,4,3,41190);
CheckOffset(struct jpeg_decompress_struct,CCIR601_sampling,392,3,41190);
CheckMemberSize(struct jpeg_decompress_struct,marker_list,8,3,41196);
CheckOffset(struct jpeg_decompress_struct,marker_list,400,3,41196);
CheckMemberSize(struct jpeg_decompress_struct,max_h_samp_factor,4,3,41197);
CheckOffset(struct jpeg_decompress_struct,max_h_samp_factor,408,3,41197);
CheckMemberSize(struct jpeg_decompress_struct,max_v_samp_factor,4,3,41198);
CheckOffset(struct jpeg_decompress_struct,max_v_samp_factor,412,3,41198);
CheckMemberSize(struct jpeg_decompress_struct,min_DCT_scaled_size,4,3,41199);
CheckOffset(struct jpeg_decompress_struct,min_DCT_scaled_size,416,3,41199);
CheckMemberSize(struct jpeg_decompress_struct,total_iMCU_rows,4,3,41200);
CheckOffset(struct jpeg_decompress_struct,total_iMCU_rows,420,3,41200);
CheckMemberSize(struct jpeg_decompress_struct,sample_range_limit,8,3,41201);
CheckOffset(struct jpeg_decompress_struct,sample_range_limit,424,3,41201);
CheckMemberSize(struct jpeg_decompress_struct,comps_in_scan,4,3,41202);
CheckOffset(struct jpeg_decompress_struct,comps_in_scan,432,3,41202);
CheckMemberSize(struct jpeg_decompress_struct,cur_comp_info,32,3,41203);
CheckOffset(struct jpeg_decompress_struct,cur_comp_info,440,3,41203);
CheckMemberSize(struct jpeg_decompress_struct,MCUs_per_row,4,3,41204);
CheckOffset(struct jpeg_decompress_struct,MCUs_per_row,472,3,41204);
CheckMemberSize(struct jpeg_decompress_struct,MCU_rows_in_scan,4,3,41205);
CheckOffset(struct jpeg_decompress_struct,MCU_rows_in_scan,476,3,41205);
CheckMemberSize(struct jpeg_decompress_struct,blocks_in_MCU,4,3,41206);
CheckOffset(struct jpeg_decompress_struct,blocks_in_MCU,480,3,41206);
CheckMemberSize(struct jpeg_decompress_struct,MCU_membership,40,3,41207);
CheckOffset(struct jpeg_decompress_struct,MCU_membership,484,3,41207);
CheckMemberSize(struct jpeg_decompress_struct,Ss,4,3,41208);
CheckOffset(struct jpeg_decompress_struct,Ss,524,3,41208);
CheckMemberSize(struct jpeg_decompress_struct,Se,4,3,41209);
CheckOffset(struct jpeg_decompress_struct,Se,528,3,41209);
CheckMemberSize(struct jpeg_decompress_struct,Ah,4,3,41210);
CheckOffset(struct jpeg_decompress_struct,Ah,532,3,41210);
CheckMemberSize(struct jpeg_decompress_struct,Al,4,3,41211);
CheckOffset(struct jpeg_decompress_struct,Al,536,3,41211);
CheckMemberSize(struct jpeg_decompress_struct,unread_marker,4,3,41212);
CheckOffset(struct jpeg_decompress_struct,unread_marker,540,3,41212);
CheckMemberSize(struct jpeg_decompress_struct,master,8,3,41213);
CheckOffset(struct jpeg_decompress_struct,master,544,3,41213);
CheckMemberSize(struct jpeg_decompress_struct,main,8,3,41214);
CheckOffset(struct jpeg_decompress_struct,main,552,3,41214);
CheckMemberSize(struct jpeg_decompress_struct,coef,8,3,41215);
CheckOffset(struct jpeg_decompress_struct,coef,560,3,41215);
CheckMemberSize(struct jpeg_decompress_struct,post,8,3,41216);
CheckOffset(struct jpeg_decompress_struct,post,568,3,41216);
CheckMemberSize(struct jpeg_decompress_struct,inputctl,8,3,41217);
CheckOffset(struct jpeg_decompress_struct,inputctl,576,3,41217);
CheckMemberSize(struct jpeg_decompress_struct,marker,8,3,41218);
CheckOffset(struct jpeg_decompress_struct,marker,584,3,41218);
CheckMemberSize(struct jpeg_decompress_struct,entropy,8,3,41219);
CheckOffset(struct jpeg_decompress_struct,entropy,592,3,41219);
CheckMemberSize(struct jpeg_decompress_struct,idct,8,3,41220);
CheckOffset(struct jpeg_decompress_struct,idct,600,3,41220);
CheckMemberSize(struct jpeg_decompress_struct,upsample,8,3,41221);
CheckOffset(struct jpeg_decompress_struct,upsample,608,3,41221);
CheckMemberSize(struct jpeg_decompress_struct,cconvert,8,3,41222);
CheckOffset(struct jpeg_decompress_struct,cconvert,616,3,41222);
CheckMemberSize(struct jpeg_decompress_struct,cquantize,8,3,41223);
CheckOffset(struct jpeg_decompress_struct,cquantize,624,3,41223);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct jpeg_decompress_struct,464, 11249, 6);
CheckMemberSize(struct jpeg_decompress_struct,mem,4,6,41081);
CheckOffset(struct jpeg_decompress_struct,mem,4,6,41081);
CheckMemberSize(struct jpeg_decompress_struct,progress,4,6,41082);
CheckOffset(struct jpeg_decompress_struct,progress,8,6,41082);
CheckMemberSize(struct jpeg_decompress_struct,client_data,4,6,41083);
CheckOffset(struct jpeg_decompress_struct,client_data,12,6,41083);
CheckMemberSize(struct jpeg_decompress_struct,is_decompressor,4,6,41084);
CheckOffset(struct jpeg_decompress_struct,is_decompressor,16,6,41084);
CheckMemberSize(struct jpeg_decompress_struct,global_state,4,6,41085);
CheckOffset(struct jpeg_decompress_struct,global_state,20,6,41085);
CheckMemberSize(struct jpeg_decompress_struct,src,4,6,41099);
CheckOffset(struct jpeg_decompress_struct,src,24,6,41099);
CheckMemberSize(struct jpeg_decompress_struct,image_width,4,6,41100);
CheckOffset(struct jpeg_decompress_struct,image_width,28,6,41100);
CheckMemberSize(struct jpeg_decompress_struct,image_height,4,6,41101);
CheckOffset(struct jpeg_decompress_struct,image_height,32,6,41101);
CheckMemberSize(struct jpeg_decompress_struct,num_components,4,6,41102);
CheckOffset(struct jpeg_decompress_struct,num_components,36,6,41102);
CheckMemberSize(struct jpeg_decompress_struct,jpeg_color_space,4,6,41109);
CheckOffset(struct jpeg_decompress_struct,jpeg_color_space,40,6,41109);
CheckMemberSize(struct jpeg_decompress_struct,out_color_space,4,6,41110);
CheckOffset(struct jpeg_decompress_struct,out_color_space,44,6,41110);
CheckMemberSize(struct jpeg_decompress_struct,scale_num,4,6,41111);
CheckOffset(struct jpeg_decompress_struct,scale_num,48,6,41111);
CheckMemberSize(struct jpeg_decompress_struct,scale_denom,4,6,41112);
CheckOffset(struct jpeg_decompress_struct,scale_denom,52,6,41112);
CheckMemberSize(struct jpeg_decompress_struct,output_gamma,8,6,41113);
CheckOffset(struct jpeg_decompress_struct,output_gamma,56,6,41113);
CheckMemberSize(struct jpeg_decompress_struct,buffered_image,4,6,41114);
CheckOffset(struct jpeg_decompress_struct,buffered_image,64,6,41114);
CheckMemberSize(struct jpeg_decompress_struct,raw_data_out,4,6,41115);
CheckOffset(struct jpeg_decompress_struct,raw_data_out,68,6,41115);
CheckMemberSize(struct jpeg_decompress_struct,dct_method,4,6,41119);
CheckOffset(struct jpeg_decompress_struct,dct_method,72,6,41119);
CheckMemberSize(struct jpeg_decompress_struct,do_fancy_upsampling,4,6,41120);
CheckOffset(struct jpeg_decompress_struct,do_fancy_upsampling,76,6,41120);
CheckMemberSize(struct jpeg_decompress_struct,do_block_smoothing,4,6,41121);
CheckOffset(struct jpeg_decompress_struct,do_block_smoothing,80,6,41121);
CheckMemberSize(struct jpeg_decompress_struct,quantize_colors,4,6,41122);
CheckOffset(struct jpeg_decompress_struct,quantize_colors,84,6,41122);
CheckMemberSize(struct jpeg_decompress_struct,dither_mode,4,6,41126);
CheckOffset(struct jpeg_decompress_struct,dither_mode,88,6,41126);
CheckMemberSize(struct jpeg_decompress_struct,two_pass_quantize,4,6,41127);
CheckOffset(struct jpeg_decompress_struct,two_pass_quantize,92,6,41127);
CheckMemberSize(struct jpeg_decompress_struct,desired_number_of_colors,4,6,41128);
CheckOffset(struct jpeg_decompress_struct,desired_number_of_colors,96,6,41128);
CheckMemberSize(struct jpeg_decompress_struct,enable_1pass_quant,4,6,41129);
CheckOffset(struct jpeg_decompress_struct,enable_1pass_quant,100,6,41129);
CheckMemberSize(struct jpeg_decompress_struct,enable_external_quant,4,6,41130);
CheckOffset(struct jpeg_decompress_struct,enable_external_quant,104,6,41130);
CheckMemberSize(struct jpeg_decompress_struct,enable_2pass_quant,4,6,41131);
CheckOffset(struct jpeg_decompress_struct,enable_2pass_quant,108,6,41131);
CheckMemberSize(struct jpeg_decompress_struct,output_width,4,6,41132);
CheckOffset(struct jpeg_decompress_struct,output_width,112,6,41132);
CheckMemberSize(struct jpeg_decompress_struct,output_height,4,6,41133);
CheckOffset(struct jpeg_decompress_struct,output_height,116,6,41133);
CheckMemberSize(struct jpeg_decompress_struct,out_color_components,4,6,41134);
CheckOffset(struct jpeg_decompress_struct,out_color_components,120,6,41134);
CheckMemberSize(struct jpeg_decompress_struct,output_components,4,6,41135);
CheckOffset(struct jpeg_decompress_struct,output_components,124,6,41135);
CheckMemberSize(struct jpeg_decompress_struct,rec_outbuf_height,4,6,41136);
CheckOffset(struct jpeg_decompress_struct,rec_outbuf_height,128,6,41136);
CheckMemberSize(struct jpeg_decompress_struct,actual_number_of_colors,4,6,41137);
CheckOffset(struct jpeg_decompress_struct,actual_number_of_colors,132,6,41137);
CheckMemberSize(struct jpeg_decompress_struct,colormap,4,6,41138);
CheckOffset(struct jpeg_decompress_struct,colormap,136,6,41138);
CheckMemberSize(struct jpeg_decompress_struct,output_scanline,4,6,41139);
CheckOffset(struct jpeg_decompress_struct,output_scanline,140,6,41139);
CheckMemberSize(struct jpeg_decompress_struct,input_scan_number,4,6,41140);
CheckOffset(struct jpeg_decompress_struct,input_scan_number,144,6,41140);
CheckMemberSize(struct jpeg_decompress_struct,input_iMCU_row,4,6,41141);
CheckOffset(struct jpeg_decompress_struct,input_iMCU_row,148,6,41141);
CheckMemberSize(struct jpeg_decompress_struct,output_scan_number,4,6,41142);
CheckOffset(struct jpeg_decompress_struct,output_scan_number,152,6,41142);
CheckMemberSize(struct jpeg_decompress_struct,output_iMCU_row,4,6,41143);
CheckOffset(struct jpeg_decompress_struct,output_iMCU_row,156,6,41143);
CheckMemberSize(struct jpeg_decompress_struct,coef_bits,4,6,41144);
CheckOffset(struct jpeg_decompress_struct,coef_bits,160,6,41144);
CheckMemberSize(struct jpeg_decompress_struct,quant_tbl_ptrs,16,6,41147);
CheckOffset(struct jpeg_decompress_struct,quant_tbl_ptrs,164,6,41147);
CheckMemberSize(struct jpeg_decompress_struct,dc_huff_tbl_ptrs,16,6,41151);
CheckOffset(struct jpeg_decompress_struct,dc_huff_tbl_ptrs,180,6,41151);
CheckMemberSize(struct jpeg_decompress_struct,ac_huff_tbl_ptrs,16,6,41152);
CheckOffset(struct jpeg_decompress_struct,ac_huff_tbl_ptrs,196,6,41152);
CheckMemberSize(struct jpeg_decompress_struct,data_precision,4,6,41153);
CheckOffset(struct jpeg_decompress_struct,data_precision,212,6,41153);
CheckMemberSize(struct jpeg_decompress_struct,comp_info,4,6,41175);
CheckOffset(struct jpeg_decompress_struct,comp_info,216,6,41175);
CheckMemberSize(struct jpeg_decompress_struct,progressive_mode,4,6,41176);
CheckOffset(struct jpeg_decompress_struct,progressive_mode,220,6,41176);
CheckMemberSize(struct jpeg_decompress_struct,arith_code,4,6,41177);
CheckOffset(struct jpeg_decompress_struct,arith_code,224,6,41177);
CheckMemberSize(struct jpeg_decompress_struct,arith_dc_L,16,6,41178);
CheckOffset(struct jpeg_decompress_struct,arith_dc_L,228,6,41178);
CheckMemberSize(struct jpeg_decompress_struct,arith_dc_U,16,6,41179);
CheckOffset(struct jpeg_decompress_struct,arith_dc_U,244,6,41179);
CheckMemberSize(struct jpeg_decompress_struct,arith_ac_K,16,6,41180);
CheckOffset(struct jpeg_decompress_struct,arith_ac_K,260,6,41180);
CheckMemberSize(struct jpeg_decompress_struct,restart_interval,4,6,41181);
CheckOffset(struct jpeg_decompress_struct,restart_interval,276,6,41181);
CheckMemberSize(struct jpeg_decompress_struct,saw_JFIF_marker,4,6,41182);
CheckOffset(struct jpeg_decompress_struct,saw_JFIF_marker,280,6,41182);
CheckMemberSize(struct jpeg_decompress_struct,JFIF_major_version,1,6,41183);
CheckOffset(struct jpeg_decompress_struct,JFIF_major_version,284,6,41183);
CheckMemberSize(struct jpeg_decompress_struct,JFIF_minor_version,1,6,41184);
CheckOffset(struct jpeg_decompress_struct,JFIF_minor_version,285,6,41184);
CheckMemberSize(struct jpeg_decompress_struct,density_unit,1,6,41185);
CheckOffset(struct jpeg_decompress_struct,density_unit,286,6,41185);
CheckMemberSize(struct jpeg_decompress_struct,X_density,2,6,41186);
CheckOffset(struct jpeg_decompress_struct,X_density,288,6,41186);
CheckMemberSize(struct jpeg_decompress_struct,Y_density,2,6,41187);
CheckOffset(struct jpeg_decompress_struct,Y_density,290,6,41187);
CheckMemberSize(struct jpeg_decompress_struct,saw_Adobe_marker,4,6,41188);
CheckOffset(struct jpeg_decompress_struct,saw_Adobe_marker,292,6,41188);
CheckMemberSize(struct jpeg_decompress_struct,Adobe_transform,1,6,41189);
CheckOffset(struct jpeg_decompress_struct,Adobe_transform,296,6,41189);
CheckMemberSize(struct jpeg_decompress_struct,CCIR601_sampling,4,6,41190);
CheckOffset(struct jpeg_decompress_struct,CCIR601_sampling,300,6,41190);
CheckMemberSize(struct jpeg_decompress_struct,marker_list,4,6,41196);
CheckOffset(struct jpeg_decompress_struct,marker_list,304,6,41196);
CheckMemberSize(struct jpeg_decompress_struct,max_h_samp_factor,4,6,41197);
CheckOffset(struct jpeg_decompress_struct,max_h_samp_factor,308,6,41197);
CheckMemberSize(struct jpeg_decompress_struct,max_v_samp_factor,4,6,41198);
CheckOffset(struct jpeg_decompress_struct,max_v_samp_factor,312,6,41198);
CheckMemberSize(struct jpeg_decompress_struct,min_DCT_scaled_size,4,6,41199);
CheckOffset(struct jpeg_decompress_struct,min_DCT_scaled_size,316,6,41199);
CheckMemberSize(struct jpeg_decompress_struct,total_iMCU_rows,4,6,41200);
CheckOffset(struct jpeg_decompress_struct,total_iMCU_rows,320,6,41200);
CheckMemberSize(struct jpeg_decompress_struct,sample_range_limit,4,6,41201);
CheckOffset(struct jpeg_decompress_struct,sample_range_limit,324,6,41201);
CheckMemberSize(struct jpeg_decompress_struct,comps_in_scan,4,6,41202);
CheckOffset(struct jpeg_decompress_struct,comps_in_scan,328,6,41202);
CheckMemberSize(struct jpeg_decompress_struct,cur_comp_info,16,6,41203);
CheckOffset(struct jpeg_decompress_struct,cur_comp_info,332,6,41203);
CheckMemberSize(struct jpeg_decompress_struct,MCUs_per_row,4,6,41204);
CheckOffset(struct jpeg_decompress_struct,MCUs_per_row,348,6,41204);
CheckMemberSize(struct jpeg_decompress_struct,MCU_rows_in_scan,4,6,41205);
CheckOffset(struct jpeg_decompress_struct,MCU_rows_in_scan,352,6,41205);
CheckMemberSize(struct jpeg_decompress_struct,blocks_in_MCU,4,6,41206);
CheckOffset(struct jpeg_decompress_struct,blocks_in_MCU,356,6,41206);
CheckMemberSize(struct jpeg_decompress_struct,MCU_membership,40,6,41207);
CheckOffset(struct jpeg_decompress_struct,MCU_membership,360,6,41207);
CheckMemberSize(struct jpeg_decompress_struct,Ss,4,6,41208);
CheckOffset(struct jpeg_decompress_struct,Ss,400,6,41208);
CheckMemberSize(struct jpeg_decompress_struct,Se,4,6,41209);
CheckOffset(struct jpeg_decompress_struct,Se,404,6,41209);
CheckMemberSize(struct jpeg_decompress_struct,Ah,4,6,41210);
CheckOffset(struct jpeg_decompress_struct,Ah,408,6,41210);
CheckMemberSize(struct jpeg_decompress_struct,Al,4,6,41211);
CheckOffset(struct jpeg_decompress_struct,Al,412,6,41211);
CheckMemberSize(struct jpeg_decompress_struct,unread_marker,4,6,41212);
CheckOffset(struct jpeg_decompress_struct,unread_marker,416,6,41212);
CheckMemberSize(struct jpeg_decompress_struct,master,4,6,41213);
CheckOffset(struct jpeg_decompress_struct,master,420,6,41213);
CheckMemberSize(struct jpeg_decompress_struct,main,4,6,41214);
CheckOffset(struct jpeg_decompress_struct,main,424,6,41214);
CheckMemberSize(struct jpeg_decompress_struct,coef,4,6,41215);
CheckOffset(struct jpeg_decompress_struct,coef,428,6,41215);
CheckMemberSize(struct jpeg_decompress_struct,post,4,6,41216);
CheckOffset(struct jpeg_decompress_struct,post,432,6,41216);
CheckMemberSize(struct jpeg_decompress_struct,inputctl,4,6,41217);
CheckOffset(struct jpeg_decompress_struct,inputctl,436,6,41217);
CheckMemberSize(struct jpeg_decompress_struct,marker,4,6,41218);
CheckOffset(struct jpeg_decompress_struct,marker,440,6,41218);
CheckMemberSize(struct jpeg_decompress_struct,entropy,4,6,41219);
CheckOffset(struct jpeg_decompress_struct,entropy,444,6,41219);
CheckMemberSize(struct jpeg_decompress_struct,idct,4,6,41220);
CheckOffset(struct jpeg_decompress_struct,idct,448,6,41220);
CheckMemberSize(struct jpeg_decompress_struct,upsample,4,6,41221);
CheckOffset(struct jpeg_decompress_struct,upsample,452,6,41221);
CheckMemberSize(struct jpeg_decompress_struct,cconvert,4,6,41222);
CheckOffset(struct jpeg_decompress_struct,cconvert,456,6,41222);
CheckMemberSize(struct jpeg_decompress_struct,cquantize,4,6,41223);
CheckOffset(struct jpeg_decompress_struct,cquantize,460,6,41223);
#elif __powerpc64__
CheckTypeSize(struct jpeg_decompress_struct,632, 11249, 9);
CheckMemberSize(struct jpeg_decompress_struct,mem,8,9,41081);
CheckOffset(struct jpeg_decompress_struct,mem,8,9,41081);
CheckMemberSize(struct jpeg_decompress_struct,progress,8,9,41082);
CheckOffset(struct jpeg_decompress_struct,progress,16,9,41082);
CheckMemberSize(struct jpeg_decompress_struct,client_data,8,9,41083);
CheckOffset(struct jpeg_decompress_struct,client_data,24,9,41083);
CheckMemberSize(struct jpeg_decompress_struct,is_decompressor,4,9,41084);
CheckOffset(struct jpeg_decompress_struct,is_decompressor,32,9,41084);
CheckMemberSize(struct jpeg_decompress_struct,global_state,4,9,41085);
CheckOffset(struct jpeg_decompress_struct,global_state,36,9,41085);
CheckMemberSize(struct jpeg_decompress_struct,src,8,9,41099);
CheckOffset(struct jpeg_decompress_struct,src,40,9,41099);
CheckMemberSize(struct jpeg_decompress_struct,image_width,4,9,41100);
CheckOffset(struct jpeg_decompress_struct,image_width,48,9,41100);
CheckMemberSize(struct jpeg_decompress_struct,image_height,4,9,41101);
CheckOffset(struct jpeg_decompress_struct,image_height,52,9,41101);
CheckMemberSize(struct jpeg_decompress_struct,num_components,4,9,41102);
CheckOffset(struct jpeg_decompress_struct,num_components,56,9,41102);
CheckMemberSize(struct jpeg_decompress_struct,jpeg_color_space,4,9,41109);
CheckOffset(struct jpeg_decompress_struct,jpeg_color_space,60,9,41109);
CheckMemberSize(struct jpeg_decompress_struct,out_color_space,4,9,41110);
CheckOffset(struct jpeg_decompress_struct,out_color_space,64,9,41110);
CheckMemberSize(struct jpeg_decompress_struct,scale_num,4,9,41111);
CheckOffset(struct jpeg_decompress_struct,scale_num,68,9,41111);
CheckMemberSize(struct jpeg_decompress_struct,scale_denom,4,9,41112);
CheckOffset(struct jpeg_decompress_struct,scale_denom,72,9,41112);
CheckMemberSize(struct jpeg_decompress_struct,output_gamma,8,9,41113);
CheckOffset(struct jpeg_decompress_struct,output_gamma,80,9,41113);
CheckMemberSize(struct jpeg_decompress_struct,buffered_image,4,9,41114);
CheckOffset(struct jpeg_decompress_struct,buffered_image,88,9,41114);
CheckMemberSize(struct jpeg_decompress_struct,raw_data_out,4,9,41115);
CheckOffset(struct jpeg_decompress_struct,raw_data_out,92,9,41115);
CheckMemberSize(struct jpeg_decompress_struct,dct_method,4,9,41119);
CheckOffset(struct jpeg_decompress_struct,dct_method,96,9,41119);
CheckMemberSize(struct jpeg_decompress_struct,do_fancy_upsampling,4,9,41120);
CheckOffset(struct jpeg_decompress_struct,do_fancy_upsampling,100,9,41120);
CheckMemberSize(struct jpeg_decompress_struct,do_block_smoothing,4,9,41121);
CheckOffset(struct jpeg_decompress_struct,do_block_smoothing,104,9,41121);
CheckMemberSize(struct jpeg_decompress_struct,quantize_colors,4,9,41122);
CheckOffset(struct jpeg_decompress_struct,quantize_colors,108,9,41122);
CheckMemberSize(struct jpeg_decompress_struct,dither_mode,4,9,41126);
CheckOffset(struct jpeg_decompress_struct,dither_mode,112,9,41126);
CheckMemberSize(struct jpeg_decompress_struct,two_pass_quantize,4,9,41127);
CheckOffset(struct jpeg_decompress_struct,two_pass_quantize,116,9,41127);
CheckMemberSize(struct jpeg_decompress_struct,desired_number_of_colors,4,9,41128);
CheckOffset(struct jpeg_decompress_struct,desired_number_of_colors,120,9,41128);
CheckMemberSize(struct jpeg_decompress_struct,enable_1pass_quant,4,9,41129);
CheckOffset(struct jpeg_decompress_struct,enable_1pass_quant,124,9,41129);
CheckMemberSize(struct jpeg_decompress_struct,enable_external_quant,4,9,41130);
CheckOffset(struct jpeg_decompress_struct,enable_external_quant,128,9,41130);
CheckMemberSize(struct jpeg_decompress_struct,enable_2pass_quant,4,9,41131);
CheckOffset(struct jpeg_decompress_struct,enable_2pass_quant,132,9,41131);
CheckMemberSize(struct jpeg_decompress_struct,output_width,4,9,41132);
CheckOffset(struct jpeg_decompress_struct,output_width,136,9,41132);
CheckMemberSize(struct jpeg_decompress_struct,output_height,4,9,41133);
CheckOffset(struct jpeg_decompress_struct,output_height,140,9,41133);
CheckMemberSize(struct jpeg_decompress_struct,out_color_components,4,9,41134);
CheckOffset(struct jpeg_decompress_struct,out_color_components,144,9,41134);
CheckMemberSize(struct jpeg_decompress_struct,output_components,4,9,41135);
CheckOffset(struct jpeg_decompress_struct,output_components,148,9,41135);
CheckMemberSize(struct jpeg_decompress_struct,rec_outbuf_height,4,9,41136);
CheckOffset(struct jpeg_decompress_struct,rec_outbuf_height,152,9,41136);
CheckMemberSize(struct jpeg_decompress_struct,actual_number_of_colors,4,9,41137);
CheckOffset(struct jpeg_decompress_struct,actual_number_of_colors,156,9,41137);
CheckMemberSize(struct jpeg_decompress_struct,colormap,8,9,41138);
CheckOffset(struct jpeg_decompress_struct,colormap,160,9,41138);
CheckMemberSize(struct jpeg_decompress_struct,output_scanline,4,9,41139);
CheckOffset(struct jpeg_decompress_struct,output_scanline,168,9,41139);
CheckMemberSize(struct jpeg_decompress_struct,input_scan_number,4,9,41140);
CheckOffset(struct jpeg_decompress_struct,input_scan_number,172,9,41140);
CheckMemberSize(struct jpeg_decompress_struct,input_iMCU_row,4,9,41141);
CheckOffset(struct jpeg_decompress_struct,input_iMCU_row,176,9,41141);
CheckMemberSize(struct jpeg_decompress_struct,output_scan_number,4,9,41142);
CheckOffset(struct jpeg_decompress_struct,output_scan_number,180,9,41142);
CheckMemberSize(struct jpeg_decompress_struct,output_iMCU_row,4,9,41143);
CheckOffset(struct jpeg_decompress_struct,output_iMCU_row,184,9,41143);
CheckMemberSize(struct jpeg_decompress_struct,coef_bits,8,9,41144);
CheckOffset(struct jpeg_decompress_struct,coef_bits,192,9,41144);
CheckMemberSize(struct jpeg_decompress_struct,quant_tbl_ptrs,32,9,41147);
CheckOffset(struct jpeg_decompress_struct,quant_tbl_ptrs,200,9,41147);
CheckMemberSize(struct jpeg_decompress_struct,dc_huff_tbl_ptrs,32,9,41151);
CheckOffset(struct jpeg_decompress_struct,dc_huff_tbl_ptrs,232,9,41151);
CheckMemberSize(struct jpeg_decompress_struct,ac_huff_tbl_ptrs,32,9,41152);
CheckOffset(struct jpeg_decompress_struct,ac_huff_tbl_ptrs,264,9,41152);
CheckMemberSize(struct jpeg_decompress_struct,data_precision,4,9,41153);
CheckOffset(struct jpeg_decompress_struct,data_precision,296,9,41153);
CheckMemberSize(struct jpeg_decompress_struct,comp_info,8,9,41175);
CheckOffset(struct jpeg_decompress_struct,comp_info,304,9,41175);
CheckMemberSize(struct jpeg_decompress_struct,progressive_mode,4,9,41176);
CheckOffset(struct jpeg_decompress_struct,progressive_mode,312,9,41176);
CheckMemberSize(struct jpeg_decompress_struct,arith_code,4,9,41177);
CheckOffset(struct jpeg_decompress_struct,arith_code,316,9,41177);
CheckMemberSize(struct jpeg_decompress_struct,arith_dc_L,16,9,41178);
CheckOffset(struct jpeg_decompress_struct,arith_dc_L,320,9,41178);
CheckMemberSize(struct jpeg_decompress_struct,arith_dc_U,16,9,41179);
CheckOffset(struct jpeg_decompress_struct,arith_dc_U,336,9,41179);
CheckMemberSize(struct jpeg_decompress_struct,arith_ac_K,16,9,41180);
CheckOffset(struct jpeg_decompress_struct,arith_ac_K,352,9,41180);
CheckMemberSize(struct jpeg_decompress_struct,restart_interval,4,9,41181);
CheckOffset(struct jpeg_decompress_struct,restart_interval,368,9,41181);
CheckMemberSize(struct jpeg_decompress_struct,saw_JFIF_marker,4,9,41182);
CheckOffset(struct jpeg_decompress_struct,saw_JFIF_marker,372,9,41182);
CheckMemberSize(struct jpeg_decompress_struct,JFIF_major_version,1,9,41183);
CheckOffset(struct jpeg_decompress_struct,JFIF_major_version,376,9,41183);
CheckMemberSize(struct jpeg_decompress_struct,JFIF_minor_version,1,9,41184);
CheckOffset(struct jpeg_decompress_struct,JFIF_minor_version,377,9,41184);
CheckMemberSize(struct jpeg_decompress_struct,density_unit,1,9,41185);
CheckOffset(struct jpeg_decompress_struct,density_unit,378,9,41185);
CheckMemberSize(struct jpeg_decompress_struct,X_density,2,9,41186);
CheckOffset(struct jpeg_decompress_struct,X_density,380,9,41186);
CheckMemberSize(struct jpeg_decompress_struct,Y_density,2,9,41187);
CheckOffset(struct jpeg_decompress_struct,Y_density,382,9,41187);
CheckMemberSize(struct jpeg_decompress_struct,saw_Adobe_marker,4,9,41188);
CheckOffset(struct jpeg_decompress_struct,saw_Adobe_marker,384,9,41188);
CheckMemberSize(struct jpeg_decompress_struct,Adobe_transform,1,9,41189);
CheckOffset(struct jpeg_decompress_struct,Adobe_transform,388,9,41189);
CheckMemberSize(struct jpeg_decompress_struct,CCIR601_sampling,4,9,41190);
CheckOffset(struct jpeg_decompress_struct,CCIR601_sampling,392,9,41190);
CheckMemberSize(struct jpeg_decompress_struct,marker_list,8,9,41196);
CheckOffset(struct jpeg_decompress_struct,marker_list,400,9,41196);
CheckMemberSize(struct jpeg_decompress_struct,max_h_samp_factor,4,9,41197);
CheckOffset(struct jpeg_decompress_struct,max_h_samp_factor,408,9,41197);
CheckMemberSize(struct jpeg_decompress_struct,max_v_samp_factor,4,9,41198);
CheckOffset(struct jpeg_decompress_struct,max_v_samp_factor,412,9,41198);
CheckMemberSize(struct jpeg_decompress_struct,min_DCT_scaled_size,4,9,41199);
CheckOffset(struct jpeg_decompress_struct,min_DCT_scaled_size,416,9,41199);
CheckMemberSize(struct jpeg_decompress_struct,total_iMCU_rows,4,9,41200);
CheckOffset(struct jpeg_decompress_struct,total_iMCU_rows,420,9,41200);
CheckMemberSize(struct jpeg_decompress_struct,sample_range_limit,8,9,41201);
CheckOffset(struct jpeg_decompress_struct,sample_range_limit,424,9,41201);
CheckMemberSize(struct jpeg_decompress_struct,comps_in_scan,4,9,41202);
CheckOffset(struct jpeg_decompress_struct,comps_in_scan,432,9,41202);
CheckMemberSize(struct jpeg_decompress_struct,cur_comp_info,32,9,41203);
CheckOffset(struct jpeg_decompress_struct,cur_comp_info,440,9,41203);
CheckMemberSize(struct jpeg_decompress_struct,MCUs_per_row,4,9,41204);
CheckOffset(struct jpeg_decompress_struct,MCUs_per_row,472,9,41204);
CheckMemberSize(struct jpeg_decompress_struct,MCU_rows_in_scan,4,9,41205);
CheckOffset(struct jpeg_decompress_struct,MCU_rows_in_scan,476,9,41205);
CheckMemberSize(struct jpeg_decompress_struct,blocks_in_MCU,4,9,41206);
CheckOffset(struct jpeg_decompress_struct,blocks_in_MCU,480,9,41206);
CheckMemberSize(struct jpeg_decompress_struct,MCU_membership,40,9,41207);
CheckOffset(struct jpeg_decompress_struct,MCU_membership,484,9,41207);
CheckMemberSize(struct jpeg_decompress_struct,Ss,4,9,41208);
CheckOffset(struct jpeg_decompress_struct,Ss,524,9,41208);
CheckMemberSize(struct jpeg_decompress_struct,Se,4,9,41209);
CheckOffset(struct jpeg_decompress_struct,Se,528,9,41209);
CheckMemberSize(struct jpeg_decompress_struct,Ah,4,9,41210);
CheckOffset(struct jpeg_decompress_struct,Ah,532,9,41210);
CheckMemberSize(struct jpeg_decompress_struct,Al,4,9,41211);
CheckOffset(struct jpeg_decompress_struct,Al,536,9,41211);
CheckMemberSize(struct jpeg_decompress_struct,unread_marker,4,9,41212);
CheckOffset(struct jpeg_decompress_struct,unread_marker,540,9,41212);
CheckMemberSize(struct jpeg_decompress_struct,master,8,9,41213);
CheckOffset(struct jpeg_decompress_struct,master,544,9,41213);
CheckMemberSize(struct jpeg_decompress_struct,main,8,9,41214);
CheckOffset(struct jpeg_decompress_struct,main,552,9,41214);
CheckMemberSize(struct jpeg_decompress_struct,coef,8,9,41215);
CheckOffset(struct jpeg_decompress_struct,coef,560,9,41215);
CheckMemberSize(struct jpeg_decompress_struct,post,8,9,41216);
CheckOffset(struct jpeg_decompress_struct,post,568,9,41216);
CheckMemberSize(struct jpeg_decompress_struct,inputctl,8,9,41217);
CheckOffset(struct jpeg_decompress_struct,inputctl,576,9,41217);
CheckMemberSize(struct jpeg_decompress_struct,marker,8,9,41218);
CheckOffset(struct jpeg_decompress_struct,marker,584,9,41218);
CheckMemberSize(struct jpeg_decompress_struct,entropy,8,9,41219);
CheckOffset(struct jpeg_decompress_struct,entropy,592,9,41219);
CheckMemberSize(struct jpeg_decompress_struct,idct,8,9,41220);
CheckOffset(struct jpeg_decompress_struct,idct,600,9,41220);
CheckMemberSize(struct jpeg_decompress_struct,upsample,8,9,41221);
CheckOffset(struct jpeg_decompress_struct,upsample,608,9,41221);
CheckMemberSize(struct jpeg_decompress_struct,cconvert,8,9,41222);
CheckOffset(struct jpeg_decompress_struct,cconvert,616,9,41222);
CheckMemberSize(struct jpeg_decompress_struct,cquantize,8,9,41223);
CheckOffset(struct jpeg_decompress_struct,cquantize,624,9,41223);
#elif __s390__ && !__s390x__
CheckTypeSize(struct jpeg_decompress_struct,464, 11249, 10);
CheckMemberSize(struct jpeg_decompress_struct,mem,4,10,41081);
CheckOffset(struct jpeg_decompress_struct,mem,4,10,41081);
CheckMemberSize(struct jpeg_decompress_struct,progress,4,10,41082);
CheckOffset(struct jpeg_decompress_struct,progress,8,10,41082);
CheckMemberSize(struct jpeg_decompress_struct,client_data,4,10,41083);
CheckOffset(struct jpeg_decompress_struct,client_data,12,10,41083);
CheckMemberSize(struct jpeg_decompress_struct,is_decompressor,4,10,41084);
CheckOffset(struct jpeg_decompress_struct,is_decompressor,16,10,41084);
CheckMemberSize(struct jpeg_decompress_struct,global_state,4,10,41085);
CheckOffset(struct jpeg_decompress_struct,global_state,20,10,41085);
CheckMemberSize(struct jpeg_decompress_struct,src,4,10,41099);
CheckOffset(struct jpeg_decompress_struct,src,24,10,41099);
CheckMemberSize(struct jpeg_decompress_struct,image_width,4,10,41100);
CheckOffset(struct jpeg_decompress_struct,image_width,28,10,41100);
CheckMemberSize(struct jpeg_decompress_struct,image_height,4,10,41101);
CheckOffset(struct jpeg_decompress_struct,image_height,32,10,41101);
CheckMemberSize(struct jpeg_decompress_struct,num_components,4,10,41102);
CheckOffset(struct jpeg_decompress_struct,num_components,36,10,41102);
CheckMemberSize(struct jpeg_decompress_struct,jpeg_color_space,4,10,41109);
CheckOffset(struct jpeg_decompress_struct,jpeg_color_space,40,10,41109);
CheckMemberSize(struct jpeg_decompress_struct,out_color_space,4,10,41110);
CheckOffset(struct jpeg_decompress_struct,out_color_space,44,10,41110);
CheckMemberSize(struct jpeg_decompress_struct,scale_num,4,10,41111);
CheckOffset(struct jpeg_decompress_struct,scale_num,48,10,41111);
CheckMemberSize(struct jpeg_decompress_struct,scale_denom,4,10,41112);
CheckOffset(struct jpeg_decompress_struct,scale_denom,52,10,41112);
CheckMemberSize(struct jpeg_decompress_struct,output_gamma,8,10,41113);
CheckOffset(struct jpeg_decompress_struct,output_gamma,56,10,41113);
CheckMemberSize(struct jpeg_decompress_struct,buffered_image,4,10,41114);
CheckOffset(struct jpeg_decompress_struct,buffered_image,64,10,41114);
CheckMemberSize(struct jpeg_decompress_struct,raw_data_out,4,10,41115);
CheckOffset(struct jpeg_decompress_struct,raw_data_out,68,10,41115);
CheckMemberSize(struct jpeg_decompress_struct,dct_method,4,10,41119);
CheckOffset(struct jpeg_decompress_struct,dct_method,72,10,41119);
CheckMemberSize(struct jpeg_decompress_struct,do_fancy_upsampling,4,10,41120);
CheckOffset(struct jpeg_decompress_struct,do_fancy_upsampling,76,10,41120);
CheckMemberSize(struct jpeg_decompress_struct,do_block_smoothing,4,10,41121);
CheckOffset(struct jpeg_decompress_struct,do_block_smoothing,80,10,41121);
CheckMemberSize(struct jpeg_decompress_struct,quantize_colors,4,10,41122);
CheckOffset(struct jpeg_decompress_struct,quantize_colors,84,10,41122);
CheckMemberSize(struct jpeg_decompress_struct,dither_mode,4,10,41126);
CheckOffset(struct jpeg_decompress_struct,dither_mode,88,10,41126);
CheckMemberSize(struct jpeg_decompress_struct,two_pass_quantize,4,10,41127);
CheckOffset(struct jpeg_decompress_struct,two_pass_quantize,92,10,41127);
CheckMemberSize(struct jpeg_decompress_struct,desired_number_of_colors,4,10,41128);
CheckOffset(struct jpeg_decompress_struct,desired_number_of_colors,96,10,41128);
CheckMemberSize(struct jpeg_decompress_struct,enable_1pass_quant,4,10,41129);
CheckOffset(struct jpeg_decompress_struct,enable_1pass_quant,100,10,41129);
CheckMemberSize(struct jpeg_decompress_struct,enable_external_quant,4,10,41130);
CheckOffset(struct jpeg_decompress_struct,enable_external_quant,104,10,41130);
CheckMemberSize(struct jpeg_decompress_struct,enable_2pass_quant,4,10,41131);
CheckOffset(struct jpeg_decompress_struct,enable_2pass_quant,108,10,41131);
CheckMemberSize(struct jpeg_decompress_struct,output_width,4,10,41132);
CheckOffset(struct jpeg_decompress_struct,output_width,112,10,41132);
CheckMemberSize(struct jpeg_decompress_struct,output_height,4,10,41133);
CheckOffset(struct jpeg_decompress_struct,output_height,116,10,41133);
CheckMemberSize(struct jpeg_decompress_struct,out_color_components,4,10,41134);
CheckOffset(struct jpeg_decompress_struct,out_color_components,120,10,41134);
CheckMemberSize(struct jpeg_decompress_struct,output_components,4,10,41135);
CheckOffset(struct jpeg_decompress_struct,output_components,124,10,41135);
CheckMemberSize(struct jpeg_decompress_struct,rec_outbuf_height,4,10,41136);
CheckOffset(struct jpeg_decompress_struct,rec_outbuf_height,128,10,41136);
CheckMemberSize(struct jpeg_decompress_struct,actual_number_of_colors,4,10,41137);
CheckOffset(struct jpeg_decompress_struct,actual_number_of_colors,132,10,41137);
CheckMemberSize(struct jpeg_decompress_struct,colormap,4,10,41138);
CheckOffset(struct jpeg_decompress_struct,colormap,136,10,41138);
CheckMemberSize(struct jpeg_decompress_struct,output_scanline,4,10,41139);
CheckOffset(struct jpeg_decompress_struct,output_scanline,140,10,41139);
CheckMemberSize(struct jpeg_decompress_struct,input_scan_number,4,10,41140);
CheckOffset(struct jpeg_decompress_struct,input_scan_number,144,10,41140);
CheckMemberSize(struct jpeg_decompress_struct,input_iMCU_row,4,10,41141);
CheckOffset(struct jpeg_decompress_struct,input_iMCU_row,148,10,41141);
CheckMemberSize(struct jpeg_decompress_struct,output_scan_number,4,10,41142);
CheckOffset(struct jpeg_decompress_struct,output_scan_number,152,10,41142);
CheckMemberSize(struct jpeg_decompress_struct,output_iMCU_row,4,10,41143);
CheckOffset(struct jpeg_decompress_struct,output_iMCU_row,156,10,41143);
CheckMemberSize(struct jpeg_decompress_struct,coef_bits,4,10,41144);
CheckOffset(struct jpeg_decompress_struct,coef_bits,160,10,41144);
CheckMemberSize(struct jpeg_decompress_struct,quant_tbl_ptrs,16,10,41147);
CheckOffset(struct jpeg_decompress_struct,quant_tbl_ptrs,164,10,41147);
CheckMemberSize(struct jpeg_decompress_struct,dc_huff_tbl_ptrs,16,10,41151);
CheckOffset(struct jpeg_decompress_struct,dc_huff_tbl_ptrs,180,10,41151);
CheckMemberSize(struct jpeg_decompress_struct,ac_huff_tbl_ptrs,16,10,41152);
CheckOffset(struct jpeg_decompress_struct,ac_huff_tbl_ptrs,196,10,41152);
CheckMemberSize(struct jpeg_decompress_struct,data_precision,4,10,41153);
CheckOffset(struct jpeg_decompress_struct,data_precision,212,10,41153);
CheckMemberSize(struct jpeg_decompress_struct,comp_info,4,10,41175);
CheckOffset(struct jpeg_decompress_struct,comp_info,216,10,41175);
CheckMemberSize(struct jpeg_decompress_struct,progressive_mode,4,10,41176);
CheckOffset(struct jpeg_decompress_struct,progressive_mode,220,10,41176);
CheckMemberSize(struct jpeg_decompress_struct,arith_code,4,10,41177);
CheckOffset(struct jpeg_decompress_struct,arith_code,224,10,41177);
CheckMemberSize(struct jpeg_decompress_struct,arith_dc_L,16,10,41178);
CheckOffset(struct jpeg_decompress_struct,arith_dc_L,228,10,41178);
CheckMemberSize(struct jpeg_decompress_struct,arith_dc_U,16,10,41179);
CheckOffset(struct jpeg_decompress_struct,arith_dc_U,244,10,41179);
CheckMemberSize(struct jpeg_decompress_struct,arith_ac_K,16,10,41180);
CheckOffset(struct jpeg_decompress_struct,arith_ac_K,260,10,41180);
CheckMemberSize(struct jpeg_decompress_struct,restart_interval,4,10,41181);
CheckOffset(struct jpeg_decompress_struct,restart_interval,276,10,41181);
CheckMemberSize(struct jpeg_decompress_struct,saw_JFIF_marker,4,10,41182);
CheckOffset(struct jpeg_decompress_struct,saw_JFIF_marker,280,10,41182);
CheckMemberSize(struct jpeg_decompress_struct,JFIF_major_version,1,10,41183);
CheckOffset(struct jpeg_decompress_struct,JFIF_major_version,284,10,41183);
CheckMemberSize(struct jpeg_decompress_struct,JFIF_minor_version,1,10,41184);
CheckOffset(struct jpeg_decompress_struct,JFIF_minor_version,285,10,41184);
CheckMemberSize(struct jpeg_decompress_struct,density_unit,1,10,41185);
CheckOffset(struct jpeg_decompress_struct,density_unit,286,10,41185);
CheckMemberSize(struct jpeg_decompress_struct,X_density,2,10,41186);
CheckOffset(struct jpeg_decompress_struct,X_density,288,10,41186);
CheckMemberSize(struct jpeg_decompress_struct,Y_density,2,10,41187);
CheckOffset(struct jpeg_decompress_struct,Y_density,290,10,41187);
CheckMemberSize(struct jpeg_decompress_struct,saw_Adobe_marker,4,10,41188);
CheckOffset(struct jpeg_decompress_struct,saw_Adobe_marker,292,10,41188);
CheckMemberSize(struct jpeg_decompress_struct,Adobe_transform,1,10,41189);
CheckOffset(struct jpeg_decompress_struct,Adobe_transform,296,10,41189);
CheckMemberSize(struct jpeg_decompress_struct,CCIR601_sampling,4,10,41190);
CheckOffset(struct jpeg_decompress_struct,CCIR601_sampling,300,10,41190);
CheckMemberSize(struct jpeg_decompress_struct,marker_list,4,10,41196);
CheckOffset(struct jpeg_decompress_struct,marker_list,304,10,41196);
CheckMemberSize(struct jpeg_decompress_struct,max_h_samp_factor,4,10,41197);
CheckOffset(struct jpeg_decompress_struct,max_h_samp_factor,308,10,41197);
CheckMemberSize(struct jpeg_decompress_struct,max_v_samp_factor,4,10,41198);
CheckOffset(struct jpeg_decompress_struct,max_v_samp_factor,312,10,41198);
CheckMemberSize(struct jpeg_decompress_struct,min_DCT_scaled_size,4,10,41199);
CheckOffset(struct jpeg_decompress_struct,min_DCT_scaled_size,316,10,41199);
CheckMemberSize(struct jpeg_decompress_struct,total_iMCU_rows,4,10,41200);
CheckOffset(struct jpeg_decompress_struct,total_iMCU_rows,320,10,41200);
CheckMemberSize(struct jpeg_decompress_struct,sample_range_limit,4,10,41201);
CheckOffset(struct jpeg_decompress_struct,sample_range_limit,324,10,41201);
CheckMemberSize(struct jpeg_decompress_struct,comps_in_scan,4,10,41202);
CheckOffset(struct jpeg_decompress_struct,comps_in_scan,328,10,41202);
CheckMemberSize(struct jpeg_decompress_struct,cur_comp_info,16,10,41203);
CheckOffset(struct jpeg_decompress_struct,cur_comp_info,332,10,41203);
CheckMemberSize(struct jpeg_decompress_struct,MCUs_per_row,4,10,41204);
CheckOffset(struct jpeg_decompress_struct,MCUs_per_row,348,10,41204);
CheckMemberSize(struct jpeg_decompress_struct,MCU_rows_in_scan,4,10,41205);
CheckOffset(struct jpeg_decompress_struct,MCU_rows_in_scan,352,10,41205);
CheckMemberSize(struct jpeg_decompress_struct,blocks_in_MCU,4,10,41206);
CheckOffset(struct jpeg_decompress_struct,blocks_in_MCU,356,10,41206);
CheckMemberSize(struct jpeg_decompress_struct,MCU_membership,40,10,41207);
CheckOffset(struct jpeg_decompress_struct,MCU_membership,360,10,41207);
CheckMemberSize(struct jpeg_decompress_struct,Ss,4,10,41208);
CheckOffset(struct jpeg_decompress_struct,Ss,400,10,41208);
CheckMemberSize(struct jpeg_decompress_struct,Se,4,10,41209);
CheckOffset(struct jpeg_decompress_struct,Se,404,10,41209);
CheckMemberSize(struct jpeg_decompress_struct,Ah,4,10,41210);
CheckOffset(struct jpeg_decompress_struct,Ah,408,10,41210);
CheckMemberSize(struct jpeg_decompress_struct,Al,4,10,41211);
CheckOffset(struct jpeg_decompress_struct,Al,412,10,41211);
CheckMemberSize(struct jpeg_decompress_struct,unread_marker,4,10,41212);
CheckOffset(struct jpeg_decompress_struct,unread_marker,416,10,41212);
CheckMemberSize(struct jpeg_decompress_struct,master,4,10,41213);
CheckOffset(struct jpeg_decompress_struct,master,420,10,41213);
CheckMemberSize(struct jpeg_decompress_struct,main,4,10,41214);
CheckOffset(struct jpeg_decompress_struct,main,424,10,41214);
CheckMemberSize(struct jpeg_decompress_struct,coef,4,10,41215);
CheckOffset(struct jpeg_decompress_struct,coef,428,10,41215);
CheckMemberSize(struct jpeg_decompress_struct,post,4,10,41216);
CheckOffset(struct jpeg_decompress_struct,post,432,10,41216);
CheckMemberSize(struct jpeg_decompress_struct,inputctl,4,10,41217);
CheckOffset(struct jpeg_decompress_struct,inputctl,436,10,41217);
CheckMemberSize(struct jpeg_decompress_struct,marker,4,10,41218);
CheckOffset(struct jpeg_decompress_struct,marker,440,10,41218);
CheckMemberSize(struct jpeg_decompress_struct,entropy,4,10,41219);
CheckOffset(struct jpeg_decompress_struct,entropy,444,10,41219);
CheckMemberSize(struct jpeg_decompress_struct,idct,4,10,41220);
CheckOffset(struct jpeg_decompress_struct,idct,448,10,41220);
CheckMemberSize(struct jpeg_decompress_struct,upsample,4,10,41221);
CheckOffset(struct jpeg_decompress_struct,upsample,452,10,41221);
CheckMemberSize(struct jpeg_decompress_struct,cconvert,4,10,41222);
CheckOffset(struct jpeg_decompress_struct,cconvert,456,10,41222);
CheckMemberSize(struct jpeg_decompress_struct,cquantize,4,10,41223);
CheckOffset(struct jpeg_decompress_struct,cquantize,460,10,41223);
#elif __s390x__
CheckTypeSize(struct jpeg_decompress_struct,632, 11249, 12);
CheckMemberSize(struct jpeg_decompress_struct,mem,8,12,41081);
CheckOffset(struct jpeg_decompress_struct,mem,8,12,41081);
CheckMemberSize(struct jpeg_decompress_struct,progress,8,12,41082);
CheckOffset(struct jpeg_decompress_struct,progress,16,12,41082);
CheckMemberSize(struct jpeg_decompress_struct,client_data,8,12,41083);
CheckOffset(struct jpeg_decompress_struct,client_data,24,12,41083);
CheckMemberSize(struct jpeg_decompress_struct,is_decompressor,4,12,41084);
CheckOffset(struct jpeg_decompress_struct,is_decompressor,32,12,41084);
CheckMemberSize(struct jpeg_decompress_struct,global_state,4,12,41085);
CheckOffset(struct jpeg_decompress_struct,global_state,36,12,41085);
CheckMemberSize(struct jpeg_decompress_struct,src,8,12,41099);
CheckOffset(struct jpeg_decompress_struct,src,40,12,41099);
CheckMemberSize(struct jpeg_decompress_struct,image_width,4,12,41100);
CheckOffset(struct jpeg_decompress_struct,image_width,48,12,41100);
CheckMemberSize(struct jpeg_decompress_struct,image_height,4,12,41101);
CheckOffset(struct jpeg_decompress_struct,image_height,52,12,41101);
CheckMemberSize(struct jpeg_decompress_struct,num_components,4,12,41102);
CheckOffset(struct jpeg_decompress_struct,num_components,56,12,41102);
CheckMemberSize(struct jpeg_decompress_struct,jpeg_color_space,4,12,41109);
CheckOffset(struct jpeg_decompress_struct,jpeg_color_space,60,12,41109);
CheckMemberSize(struct jpeg_decompress_struct,out_color_space,4,12,41110);
CheckOffset(struct jpeg_decompress_struct,out_color_space,64,12,41110);
CheckMemberSize(struct jpeg_decompress_struct,scale_num,4,12,41111);
CheckOffset(struct jpeg_decompress_struct,scale_num,68,12,41111);
CheckMemberSize(struct jpeg_decompress_struct,scale_denom,4,12,41112);
CheckOffset(struct jpeg_decompress_struct,scale_denom,72,12,41112);
CheckMemberSize(struct jpeg_decompress_struct,output_gamma,8,12,41113);
CheckOffset(struct jpeg_decompress_struct,output_gamma,80,12,41113);
CheckMemberSize(struct jpeg_decompress_struct,buffered_image,4,12,41114);
CheckOffset(struct jpeg_decompress_struct,buffered_image,88,12,41114);
CheckMemberSize(struct jpeg_decompress_struct,raw_data_out,4,12,41115);
CheckOffset(struct jpeg_decompress_struct,raw_data_out,92,12,41115);
CheckMemberSize(struct jpeg_decompress_struct,dct_method,4,12,41119);
CheckOffset(struct jpeg_decompress_struct,dct_method,96,12,41119);
CheckMemberSize(struct jpeg_decompress_struct,do_fancy_upsampling,4,12,41120);
CheckOffset(struct jpeg_decompress_struct,do_fancy_upsampling,100,12,41120);
CheckMemberSize(struct jpeg_decompress_struct,do_block_smoothing,4,12,41121);
CheckOffset(struct jpeg_decompress_struct,do_block_smoothing,104,12,41121);
CheckMemberSize(struct jpeg_decompress_struct,quantize_colors,4,12,41122);
CheckOffset(struct jpeg_decompress_struct,quantize_colors,108,12,41122);
CheckMemberSize(struct jpeg_decompress_struct,dither_mode,4,12,41126);
CheckOffset(struct jpeg_decompress_struct,dither_mode,112,12,41126);
CheckMemberSize(struct jpeg_decompress_struct,two_pass_quantize,4,12,41127);
CheckOffset(struct jpeg_decompress_struct,two_pass_quantize,116,12,41127);
CheckMemberSize(struct jpeg_decompress_struct,desired_number_of_colors,4,12,41128);
CheckOffset(struct jpeg_decompress_struct,desired_number_of_colors,120,12,41128);
CheckMemberSize(struct jpeg_decompress_struct,enable_1pass_quant,4,12,41129);
CheckOffset(struct jpeg_decompress_struct,enable_1pass_quant,124,12,41129);
CheckMemberSize(struct jpeg_decompress_struct,enable_external_quant,4,12,41130);
CheckOffset(struct jpeg_decompress_struct,enable_external_quant,128,12,41130);
CheckMemberSize(struct jpeg_decompress_struct,enable_2pass_quant,4,12,41131);
CheckOffset(struct jpeg_decompress_struct,enable_2pass_quant,132,12,41131);
CheckMemberSize(struct jpeg_decompress_struct,output_width,4,12,41132);
CheckOffset(struct jpeg_decompress_struct,output_width,136,12,41132);
CheckMemberSize(struct jpeg_decompress_struct,output_height,4,12,41133);
CheckOffset(struct jpeg_decompress_struct,output_height,140,12,41133);
CheckMemberSize(struct jpeg_decompress_struct,out_color_components,4,12,41134);
CheckOffset(struct jpeg_decompress_struct,out_color_components,144,12,41134);
CheckMemberSize(struct jpeg_decompress_struct,output_components,4,12,41135);
CheckOffset(struct jpeg_decompress_struct,output_components,148,12,41135);
CheckMemberSize(struct jpeg_decompress_struct,rec_outbuf_height,4,12,41136);
CheckOffset(struct jpeg_decompress_struct,rec_outbuf_height,152,12,41136);
CheckMemberSize(struct jpeg_decompress_struct,actual_number_of_colors,4,12,41137);
CheckOffset(struct jpeg_decompress_struct,actual_number_of_colors,156,12,41137);
CheckMemberSize(struct jpeg_decompress_struct,colormap,8,12,41138);
CheckOffset(struct jpeg_decompress_struct,colormap,160,12,41138);
CheckMemberSize(struct jpeg_decompress_struct,output_scanline,4,12,41139);
CheckOffset(struct jpeg_decompress_struct,output_scanline,168,12,41139);
CheckMemberSize(struct jpeg_decompress_struct,input_scan_number,4,12,41140);
CheckOffset(struct jpeg_decompress_struct,input_scan_number,172,12,41140);
CheckMemberSize(struct jpeg_decompress_struct,input_iMCU_row,4,12,41141);
CheckOffset(struct jpeg_decompress_struct,input_iMCU_row,176,12,41141);
CheckMemberSize(struct jpeg_decompress_struct,output_scan_number,4,12,41142);
CheckOffset(struct jpeg_decompress_struct,output_scan_number,180,12,41142);
CheckMemberSize(struct jpeg_decompress_struct,output_iMCU_row,4,12,41143);
CheckOffset(struct jpeg_decompress_struct,output_iMCU_row,184,12,41143);
CheckMemberSize(struct jpeg_decompress_struct,coef_bits,8,12,41144);
CheckOffset(struct jpeg_decompress_struct,coef_bits,192,12,41144);
CheckMemberSize(struct jpeg_decompress_struct,quant_tbl_ptrs,32,12,41147);
CheckOffset(struct jpeg_decompress_struct,quant_tbl_ptrs,200,12,41147);
CheckMemberSize(struct jpeg_decompress_struct,dc_huff_tbl_ptrs,32,12,41151);
CheckOffset(struct jpeg_decompress_struct,dc_huff_tbl_ptrs,232,12,41151);
CheckMemberSize(struct jpeg_decompress_struct,ac_huff_tbl_ptrs,32,12,41152);
CheckOffset(struct jpeg_decompress_struct,ac_huff_tbl_ptrs,264,12,41152);
CheckMemberSize(struct jpeg_decompress_struct,data_precision,4,12,41153);
CheckOffset(struct jpeg_decompress_struct,data_precision,296,12,41153);
CheckMemberSize(struct jpeg_decompress_struct,comp_info,8,12,41175);
CheckOffset(struct jpeg_decompress_struct,comp_info,304,12,41175);
CheckMemberSize(struct jpeg_decompress_struct,progressive_mode,4,12,41176);
CheckOffset(struct jpeg_decompress_struct,progressive_mode,312,12,41176);
CheckMemberSize(struct jpeg_decompress_struct,arith_code,4,12,41177);
CheckOffset(struct jpeg_decompress_struct,arith_code,316,12,41177);
CheckMemberSize(struct jpeg_decompress_struct,arith_dc_L,16,12,41178);
CheckOffset(struct jpeg_decompress_struct,arith_dc_L,320,12,41178);
CheckMemberSize(struct jpeg_decompress_struct,arith_dc_U,16,12,41179);
CheckOffset(struct jpeg_decompress_struct,arith_dc_U,336,12,41179);
CheckMemberSize(struct jpeg_decompress_struct,arith_ac_K,16,12,41180);
CheckOffset(struct jpeg_decompress_struct,arith_ac_K,352,12,41180);
CheckMemberSize(struct jpeg_decompress_struct,restart_interval,4,12,41181);
CheckOffset(struct jpeg_decompress_struct,restart_interval,368,12,41181);
CheckMemberSize(struct jpeg_decompress_struct,saw_JFIF_marker,4,12,41182);
CheckOffset(struct jpeg_decompress_struct,saw_JFIF_marker,372,12,41182);
CheckMemberSize(struct jpeg_decompress_struct,JFIF_major_version,1,12,41183);
CheckOffset(struct jpeg_decompress_struct,JFIF_major_version,376,12,41183);
CheckMemberSize(struct jpeg_decompress_struct,JFIF_minor_version,1,12,41184);
CheckOffset(struct jpeg_decompress_struct,JFIF_minor_version,377,12,41184);
CheckMemberSize(struct jpeg_decompress_struct,density_unit,1,12,41185);
CheckOffset(struct jpeg_decompress_struct,density_unit,378,12,41185);
CheckMemberSize(struct jpeg_decompress_struct,X_density,2,12,41186);
CheckOffset(struct jpeg_decompress_struct,X_density,380,12,41186);
CheckMemberSize(struct jpeg_decompress_struct,Y_density,2,12,41187);
CheckOffset(struct jpeg_decompress_struct,Y_density,382,12,41187);
CheckMemberSize(struct jpeg_decompress_struct,saw_Adobe_marker,4,12,41188);
CheckOffset(struct jpeg_decompress_struct,saw_Adobe_marker,384,12,41188);
CheckMemberSize(struct jpeg_decompress_struct,Adobe_transform,1,12,41189);
CheckOffset(struct jpeg_decompress_struct,Adobe_transform,388,12,41189);
CheckMemberSize(struct jpeg_decompress_struct,CCIR601_sampling,4,12,41190);
CheckOffset(struct jpeg_decompress_struct,CCIR601_sampling,392,12,41190);
CheckMemberSize(struct jpeg_decompress_struct,marker_list,8,12,41196);
CheckOffset(struct jpeg_decompress_struct,marker_list,400,12,41196);
CheckMemberSize(struct jpeg_decompress_struct,max_h_samp_factor,4,12,41197);
CheckOffset(struct jpeg_decompress_struct,max_h_samp_factor,408,12,41197);
CheckMemberSize(struct jpeg_decompress_struct,max_v_samp_factor,4,12,41198);
CheckOffset(struct jpeg_decompress_struct,max_v_samp_factor,412,12,41198);
CheckMemberSize(struct jpeg_decompress_struct,min_DCT_scaled_size,4,12,41199);
CheckOffset(struct jpeg_decompress_struct,min_DCT_scaled_size,416,12,41199);
CheckMemberSize(struct jpeg_decompress_struct,total_iMCU_rows,4,12,41200);
CheckOffset(struct jpeg_decompress_struct,total_iMCU_rows,420,12,41200);
CheckMemberSize(struct jpeg_decompress_struct,sample_range_limit,8,12,41201);
CheckOffset(struct jpeg_decompress_struct,sample_range_limit,424,12,41201);
CheckMemberSize(struct jpeg_decompress_struct,comps_in_scan,4,12,41202);
CheckOffset(struct jpeg_decompress_struct,comps_in_scan,432,12,41202);
CheckMemberSize(struct jpeg_decompress_struct,cur_comp_info,32,12,41203);
CheckOffset(struct jpeg_decompress_struct,cur_comp_info,440,12,41203);
CheckMemberSize(struct jpeg_decompress_struct,MCUs_per_row,4,12,41204);
CheckOffset(struct jpeg_decompress_struct,MCUs_per_row,472,12,41204);
CheckMemberSize(struct jpeg_decompress_struct,MCU_rows_in_scan,4,12,41205);
CheckOffset(struct jpeg_decompress_struct,MCU_rows_in_scan,476,12,41205);
CheckMemberSize(struct jpeg_decompress_struct,blocks_in_MCU,4,12,41206);
CheckOffset(struct jpeg_decompress_struct,blocks_in_MCU,480,12,41206);
CheckMemberSize(struct jpeg_decompress_struct,MCU_membership,40,12,41207);
CheckOffset(struct jpeg_decompress_struct,MCU_membership,484,12,41207);
CheckMemberSize(struct jpeg_decompress_struct,Ss,4,12,41208);
CheckOffset(struct jpeg_decompress_struct,Ss,524,12,41208);
CheckMemberSize(struct jpeg_decompress_struct,Se,4,12,41209);
CheckOffset(struct jpeg_decompress_struct,Se,528,12,41209);
CheckMemberSize(struct jpeg_decompress_struct,Ah,4,12,41210);
CheckOffset(struct jpeg_decompress_struct,Ah,532,12,41210);
CheckMemberSize(struct jpeg_decompress_struct,Al,4,12,41211);
CheckOffset(struct jpeg_decompress_struct,Al,536,12,41211);
CheckMemberSize(struct jpeg_decompress_struct,unread_marker,4,12,41212);
CheckOffset(struct jpeg_decompress_struct,unread_marker,540,12,41212);
CheckMemberSize(struct jpeg_decompress_struct,master,8,12,41213);
CheckOffset(struct jpeg_decompress_struct,master,544,12,41213);
CheckMemberSize(struct jpeg_decompress_struct,main,8,12,41214);
CheckOffset(struct jpeg_decompress_struct,main,552,12,41214);
CheckMemberSize(struct jpeg_decompress_struct,coef,8,12,41215);
CheckOffset(struct jpeg_decompress_struct,coef,560,12,41215);
CheckMemberSize(struct jpeg_decompress_struct,post,8,12,41216);
CheckOffset(struct jpeg_decompress_struct,post,568,12,41216);
CheckMemberSize(struct jpeg_decompress_struct,inputctl,8,12,41217);
CheckOffset(struct jpeg_decompress_struct,inputctl,576,12,41217);
CheckMemberSize(struct jpeg_decompress_struct,marker,8,12,41218);
CheckOffset(struct jpeg_decompress_struct,marker,584,12,41218);
CheckMemberSize(struct jpeg_decompress_struct,entropy,8,12,41219);
CheckOffset(struct jpeg_decompress_struct,entropy,592,12,41219);
CheckMemberSize(struct jpeg_decompress_struct,idct,8,12,41220);
CheckOffset(struct jpeg_decompress_struct,idct,600,12,41220);
CheckMemberSize(struct jpeg_decompress_struct,upsample,8,12,41221);
CheckOffset(struct jpeg_decompress_struct,upsample,608,12,41221);
CheckMemberSize(struct jpeg_decompress_struct,cconvert,8,12,41222);
CheckOffset(struct jpeg_decompress_struct,cconvert,616,12,41222);
CheckMemberSize(struct jpeg_decompress_struct,cquantize,8,12,41223);
CheckOffset(struct jpeg_decompress_struct,cquantize,624,12,41223);
#elif 1
CheckTypeSize(struct jpeg_decompress_struct,0, 11249, 1);
Msg("Missing member data for jpeg_decompress_struct on All\n");
CheckOffset(struct jpeg_decompress_struct,err,0,1,41080);
CheckOffset(struct jpeg_decompress_struct,mem,0,1,41081);
CheckOffset(struct jpeg_decompress_struct,progress,0,1,41082);
CheckOffset(struct jpeg_decompress_struct,client_data,0,1,41083);
CheckOffset(struct jpeg_decompress_struct,is_decompressor,0,1,41084);
CheckOffset(struct jpeg_decompress_struct,global_state,0,1,41085);
CheckOffset(struct jpeg_decompress_struct,src,0,1,41099);
CheckOffset(struct jpeg_decompress_struct,image_width,0,1,41100);
CheckOffset(struct jpeg_decompress_struct,image_height,0,1,41101);
CheckOffset(struct jpeg_decompress_struct,num_components,0,1,41102);
CheckOffset(struct jpeg_decompress_struct,jpeg_color_space,0,1,41109);
CheckOffset(struct jpeg_decompress_struct,out_color_space,0,1,41110);
CheckOffset(struct jpeg_decompress_struct,scale_num,0,1,41111);
CheckOffset(struct jpeg_decompress_struct,scale_denom,0,1,41112);
CheckOffset(struct jpeg_decompress_struct,output_gamma,0,1,41113);
CheckOffset(struct jpeg_decompress_struct,buffered_image,0,1,41114);
CheckOffset(struct jpeg_decompress_struct,raw_data_out,0,1,41115);
CheckOffset(struct jpeg_decompress_struct,dct_method,0,1,41119);
CheckOffset(struct jpeg_decompress_struct,do_fancy_upsampling,0,1,41120);
CheckOffset(struct jpeg_decompress_struct,do_block_smoothing,0,1,41121);
CheckOffset(struct jpeg_decompress_struct,quantize_colors,0,1,41122);
CheckOffset(struct jpeg_decompress_struct,dither_mode,0,1,41126);
CheckOffset(struct jpeg_decompress_struct,two_pass_quantize,0,1,41127);
CheckOffset(struct jpeg_decompress_struct,desired_number_of_colors,0,1,41128);
CheckOffset(struct jpeg_decompress_struct,enable_1pass_quant,0,1,41129);
CheckOffset(struct jpeg_decompress_struct,enable_external_quant,0,1,41130);
CheckOffset(struct jpeg_decompress_struct,enable_2pass_quant,0,1,41131);
CheckOffset(struct jpeg_decompress_struct,output_width,0,1,41132);
CheckOffset(struct jpeg_decompress_struct,output_height,0,1,41133);
CheckOffset(struct jpeg_decompress_struct,out_color_components,0,1,41134);
CheckOffset(struct jpeg_decompress_struct,output_components,0,1,41135);
CheckOffset(struct jpeg_decompress_struct,rec_outbuf_height,0,1,41136);
CheckOffset(struct jpeg_decompress_struct,actual_number_of_colors,0,1,41137);
CheckOffset(struct jpeg_decompress_struct,colormap,0,1,41138);
CheckOffset(struct jpeg_decompress_struct,output_scanline,0,1,41139);
CheckOffset(struct jpeg_decompress_struct,input_scan_number,0,1,41140);
CheckOffset(struct jpeg_decompress_struct,input_iMCU_row,0,1,41141);
CheckOffset(struct jpeg_decompress_struct,output_scan_number,0,1,41142);
CheckOffset(struct jpeg_decompress_struct,output_iMCU_row,0,1,41143);
CheckOffset(struct jpeg_decompress_struct,coef_bits,0,1,41144);
CheckOffset(struct jpeg_decompress_struct,quant_tbl_ptrs,0,1,41147);
CheckOffset(struct jpeg_decompress_struct,dc_huff_tbl_ptrs,0,1,41151);
CheckOffset(struct jpeg_decompress_struct,ac_huff_tbl_ptrs,0,1,41152);
CheckOffset(struct jpeg_decompress_struct,data_precision,0,1,41153);
CheckOffset(struct jpeg_decompress_struct,comp_info,0,1,41175);
CheckOffset(struct jpeg_decompress_struct,progressive_mode,0,1,41176);
CheckOffset(struct jpeg_decompress_struct,arith_code,0,1,41177);
CheckOffset(struct jpeg_decompress_struct,arith_dc_L,0,1,41178);
CheckOffset(struct jpeg_decompress_struct,arith_dc_U,0,1,41179);
CheckOffset(struct jpeg_decompress_struct,arith_ac_K,0,1,41180);
CheckOffset(struct jpeg_decompress_struct,restart_interval,0,1,41181);
CheckOffset(struct jpeg_decompress_struct,saw_JFIF_marker,0,1,41182);
CheckOffset(struct jpeg_decompress_struct,JFIF_major_version,0,1,41183);
CheckOffset(struct jpeg_decompress_struct,JFIF_minor_version,0,1,41184);
CheckOffset(struct jpeg_decompress_struct,density_unit,0,1,41185);
CheckOffset(struct jpeg_decompress_struct,X_density,0,1,41186);
CheckOffset(struct jpeg_decompress_struct,Y_density,0,1,41187);
CheckOffset(struct jpeg_decompress_struct,saw_Adobe_marker,0,1,41188);
CheckOffset(struct jpeg_decompress_struct,Adobe_transform,0,1,41189);
CheckOffset(struct jpeg_decompress_struct,CCIR601_sampling,0,1,41190);
CheckOffset(struct jpeg_decompress_struct,marker_list,0,1,41196);
CheckOffset(struct jpeg_decompress_struct,max_h_samp_factor,0,1,41197);
CheckOffset(struct jpeg_decompress_struct,max_v_samp_factor,0,1,41198);
CheckOffset(struct jpeg_decompress_struct,min_DCT_scaled_size,0,1,41199);
CheckOffset(struct jpeg_decompress_struct,total_iMCU_rows,0,1,41200);
CheckOffset(struct jpeg_decompress_struct,sample_range_limit,0,1,41201);
CheckOffset(struct jpeg_decompress_struct,comps_in_scan,0,1,41202);
CheckOffset(struct jpeg_decompress_struct,cur_comp_info,0,1,41203);
CheckOffset(struct jpeg_decompress_struct,MCUs_per_row,0,1,41204);
CheckOffset(struct jpeg_decompress_struct,MCU_rows_in_scan,0,1,41205);
CheckOffset(struct jpeg_decompress_struct,blocks_in_MCU,0,1,41206);
CheckOffset(struct jpeg_decompress_struct,MCU_membership,0,1,41207);
CheckOffset(struct jpeg_decompress_struct,Ss,0,1,41208);
CheckOffset(struct jpeg_decompress_struct,Se,0,1,41209);
CheckOffset(struct jpeg_decompress_struct,Ah,0,1,41210);
CheckOffset(struct jpeg_decompress_struct,Al,0,1,41211);
CheckOffset(struct jpeg_decompress_struct,unread_marker,0,1,41212);
CheckOffset(struct jpeg_decompress_struct,master,0,1,41213);
CheckOffset(struct jpeg_decompress_struct,main,0,1,41214);
CheckOffset(struct jpeg_decompress_struct,coef,0,1,41215);
CheckOffset(struct jpeg_decompress_struct,post,0,1,41216);
CheckOffset(struct jpeg_decompress_struct,inputctl,0,1,41217);
CheckOffset(struct jpeg_decompress_struct,marker,0,1,41218);
CheckOffset(struct jpeg_decompress_struct,entropy,0,1,41219);
CheckOffset(struct jpeg_decompress_struct,idct,0,1,41220);
CheckOffset(struct jpeg_decompress_struct,upsample,0,1,41221);
CheckOffset(struct jpeg_decompress_struct,cconvert,0,1,41222);
CheckOffset(struct jpeg_decompress_struct,cquantize,0,1,41223);
#endif

#if __i386__
CheckTypeSize(struct jpeg_error_mgr,132, 11250, 2);
CheckMemberSize(struct jpeg_error_mgr,emit_message,4,2,41063);
CheckOffset(struct jpeg_error_mgr,emit_message,4,2,41063);
CheckMemberSize(struct jpeg_error_mgr,output_message,4,2,41064);
CheckOffset(struct jpeg_error_mgr,output_message,8,2,41064);
CheckMemberSize(struct jpeg_error_mgr,format_message,4,2,41067);
CheckOffset(struct jpeg_error_mgr,format_message,12,2,41067);
CheckMemberSize(struct jpeg_error_mgr,reset_error_mgr,4,2,41068);
CheckOffset(struct jpeg_error_mgr,reset_error_mgr,16,2,41068);
CheckMemberSize(struct jpeg_error_mgr,msg_code,4,2,41069);
CheckOffset(struct jpeg_error_mgr,msg_code,20,2,41069);
CheckMemberSize(struct jpeg_error_mgr,msg_parm,80,2,41072);
CheckOffset(struct jpeg_error_mgr,msg_parm,24,2,41072);
CheckMemberSize(struct jpeg_error_mgr,trace_level,4,2,41073);
CheckOffset(struct jpeg_error_mgr,trace_level,104,2,41073);
CheckMemberSize(struct jpeg_error_mgr,num_warnings,4,2,41074);
CheckOffset(struct jpeg_error_mgr,num_warnings,108,2,41074);
CheckMemberSize(struct jpeg_error_mgr,jpeg_message_table,4,2,41075);
CheckOffset(struct jpeg_error_mgr,jpeg_message_table,112,2,41075);
CheckMemberSize(struct jpeg_error_mgr,last_jpeg_message,4,2,41076);
CheckOffset(struct jpeg_error_mgr,last_jpeg_message,116,2,41076);
CheckMemberSize(struct jpeg_error_mgr,addon_message_table,4,2,41077);
CheckOffset(struct jpeg_error_mgr,addon_message_table,120,2,41077);
CheckMemberSize(struct jpeg_error_mgr,first_addon_message,4,2,41078);
CheckOffset(struct jpeg_error_mgr,first_addon_message,124,2,41078);
CheckMemberSize(struct jpeg_error_mgr,last_addon_message,4,2,41079);
CheckOffset(struct jpeg_error_mgr,last_addon_message,128,2,41079);
#elif __x86_64__
CheckTypeSize(struct jpeg_error_mgr,168, 11250, 11);
CheckMemberSize(struct jpeg_error_mgr,emit_message,8,11,41063);
CheckOffset(struct jpeg_error_mgr,emit_message,8,11,41063);
CheckMemberSize(struct jpeg_error_mgr,output_message,8,11,41064);
CheckOffset(struct jpeg_error_mgr,output_message,16,11,41064);
CheckMemberSize(struct jpeg_error_mgr,format_message,8,11,41067);
CheckOffset(struct jpeg_error_mgr,format_message,24,11,41067);
CheckMemberSize(struct jpeg_error_mgr,reset_error_mgr,8,11,41068);
CheckOffset(struct jpeg_error_mgr,reset_error_mgr,32,11,41068);
CheckMemberSize(struct jpeg_error_mgr,msg_code,4,11,41069);
CheckOffset(struct jpeg_error_mgr,msg_code,40,11,41069);
CheckMemberSize(struct jpeg_error_mgr,msg_parm,80,11,41072);
CheckOffset(struct jpeg_error_mgr,msg_parm,44,11,41072);
CheckMemberSize(struct jpeg_error_mgr,trace_level,4,11,41073);
CheckOffset(struct jpeg_error_mgr,trace_level,124,11,41073);
CheckMemberSize(struct jpeg_error_mgr,num_warnings,8,11,41074);
CheckOffset(struct jpeg_error_mgr,num_warnings,128,11,41074);
CheckMemberSize(struct jpeg_error_mgr,jpeg_message_table,8,11,41075);
CheckOffset(struct jpeg_error_mgr,jpeg_message_table,136,11,41075);
CheckMemberSize(struct jpeg_error_mgr,last_jpeg_message,4,11,41076);
CheckOffset(struct jpeg_error_mgr,last_jpeg_message,144,11,41076);
CheckMemberSize(struct jpeg_error_mgr,addon_message_table,8,11,41077);
CheckOffset(struct jpeg_error_mgr,addon_message_table,152,11,41077);
CheckMemberSize(struct jpeg_error_mgr,first_addon_message,4,11,41078);
CheckOffset(struct jpeg_error_mgr,first_addon_message,160,11,41078);
CheckMemberSize(struct jpeg_error_mgr,last_addon_message,4,11,41079);
CheckOffset(struct jpeg_error_mgr,last_addon_message,164,11,41079);
#elif __ia64__
CheckTypeSize(struct jpeg_error_mgr,168, 11250, 3);
CheckMemberSize(struct jpeg_error_mgr,emit_message,8,3,41063);
CheckOffset(struct jpeg_error_mgr,emit_message,8,3,41063);
CheckMemberSize(struct jpeg_error_mgr,output_message,8,3,41064);
CheckOffset(struct jpeg_error_mgr,output_message,16,3,41064);
CheckMemberSize(struct jpeg_error_mgr,format_message,8,3,41067);
CheckOffset(struct jpeg_error_mgr,format_message,24,3,41067);
CheckMemberSize(struct jpeg_error_mgr,reset_error_mgr,8,3,41068);
CheckOffset(struct jpeg_error_mgr,reset_error_mgr,32,3,41068);
CheckMemberSize(struct jpeg_error_mgr,msg_code,4,3,41069);
CheckOffset(struct jpeg_error_mgr,msg_code,40,3,41069);
CheckMemberSize(struct jpeg_error_mgr,msg_parm,80,3,41072);
CheckOffset(struct jpeg_error_mgr,msg_parm,44,3,41072);
CheckMemberSize(struct jpeg_error_mgr,trace_level,4,3,41073);
CheckOffset(struct jpeg_error_mgr,trace_level,124,3,41073);
CheckMemberSize(struct jpeg_error_mgr,num_warnings,8,3,41074);
CheckOffset(struct jpeg_error_mgr,num_warnings,128,3,41074);
CheckMemberSize(struct jpeg_error_mgr,jpeg_message_table,8,3,41075);
CheckOffset(struct jpeg_error_mgr,jpeg_message_table,136,3,41075);
CheckMemberSize(struct jpeg_error_mgr,last_jpeg_message,4,3,41076);
CheckOffset(struct jpeg_error_mgr,last_jpeg_message,144,3,41076);
CheckMemberSize(struct jpeg_error_mgr,addon_message_table,8,3,41077);
CheckOffset(struct jpeg_error_mgr,addon_message_table,152,3,41077);
CheckMemberSize(struct jpeg_error_mgr,first_addon_message,4,3,41078);
CheckOffset(struct jpeg_error_mgr,first_addon_message,160,3,41078);
CheckMemberSize(struct jpeg_error_mgr,last_addon_message,4,3,41079);
CheckOffset(struct jpeg_error_mgr,last_addon_message,164,3,41079);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct jpeg_error_mgr,132, 11250, 6);
CheckMemberSize(struct jpeg_error_mgr,emit_message,4,6,41063);
CheckOffset(struct jpeg_error_mgr,emit_message,4,6,41063);
CheckMemberSize(struct jpeg_error_mgr,output_message,4,6,41064);
CheckOffset(struct jpeg_error_mgr,output_message,8,6,41064);
CheckMemberSize(struct jpeg_error_mgr,format_message,4,6,41067);
CheckOffset(struct jpeg_error_mgr,format_message,12,6,41067);
CheckMemberSize(struct jpeg_error_mgr,reset_error_mgr,4,6,41068);
CheckOffset(struct jpeg_error_mgr,reset_error_mgr,16,6,41068);
CheckMemberSize(struct jpeg_error_mgr,msg_code,4,6,41069);
CheckOffset(struct jpeg_error_mgr,msg_code,20,6,41069);
CheckMemberSize(struct jpeg_error_mgr,msg_parm,80,6,41072);
CheckOffset(struct jpeg_error_mgr,msg_parm,24,6,41072);
CheckMemberSize(struct jpeg_error_mgr,trace_level,4,6,41073);
CheckOffset(struct jpeg_error_mgr,trace_level,104,6,41073);
CheckMemberSize(struct jpeg_error_mgr,num_warnings,4,6,41074);
CheckOffset(struct jpeg_error_mgr,num_warnings,108,6,41074);
CheckMemberSize(struct jpeg_error_mgr,jpeg_message_table,4,6,41075);
CheckOffset(struct jpeg_error_mgr,jpeg_message_table,112,6,41075);
CheckMemberSize(struct jpeg_error_mgr,last_jpeg_message,4,6,41076);
CheckOffset(struct jpeg_error_mgr,last_jpeg_message,116,6,41076);
CheckMemberSize(struct jpeg_error_mgr,addon_message_table,4,6,41077);
CheckOffset(struct jpeg_error_mgr,addon_message_table,120,6,41077);
CheckMemberSize(struct jpeg_error_mgr,first_addon_message,4,6,41078);
CheckOffset(struct jpeg_error_mgr,first_addon_message,124,6,41078);
CheckMemberSize(struct jpeg_error_mgr,last_addon_message,4,6,41079);
CheckOffset(struct jpeg_error_mgr,last_addon_message,128,6,41079);
#elif __powerpc64__
CheckTypeSize(struct jpeg_error_mgr,168, 11250, 9);
CheckMemberSize(struct jpeg_error_mgr,emit_message,8,9,41063);
CheckOffset(struct jpeg_error_mgr,emit_message,8,9,41063);
CheckMemberSize(struct jpeg_error_mgr,output_message,8,9,41064);
CheckOffset(struct jpeg_error_mgr,output_message,16,9,41064);
CheckMemberSize(struct jpeg_error_mgr,format_message,8,9,41067);
CheckOffset(struct jpeg_error_mgr,format_message,24,9,41067);
CheckMemberSize(struct jpeg_error_mgr,reset_error_mgr,8,9,41068);
CheckOffset(struct jpeg_error_mgr,reset_error_mgr,32,9,41068);
CheckMemberSize(struct jpeg_error_mgr,msg_code,4,9,41069);
CheckOffset(struct jpeg_error_mgr,msg_code,40,9,41069);
CheckMemberSize(struct jpeg_error_mgr,msg_parm,80,9,41072);
CheckOffset(struct jpeg_error_mgr,msg_parm,44,9,41072);
CheckMemberSize(struct jpeg_error_mgr,trace_level,4,9,41073);
CheckOffset(struct jpeg_error_mgr,trace_level,124,9,41073);
CheckMemberSize(struct jpeg_error_mgr,num_warnings,8,9,41074);
CheckOffset(struct jpeg_error_mgr,num_warnings,128,9,41074);
CheckMemberSize(struct jpeg_error_mgr,jpeg_message_table,8,9,41075);
CheckOffset(struct jpeg_error_mgr,jpeg_message_table,136,9,41075);
CheckMemberSize(struct jpeg_error_mgr,last_jpeg_message,4,9,41076);
CheckOffset(struct jpeg_error_mgr,last_jpeg_message,144,9,41076);
CheckMemberSize(struct jpeg_error_mgr,addon_message_table,8,9,41077);
CheckOffset(struct jpeg_error_mgr,addon_message_table,152,9,41077);
CheckMemberSize(struct jpeg_error_mgr,first_addon_message,4,9,41078);
CheckOffset(struct jpeg_error_mgr,first_addon_message,160,9,41078);
CheckMemberSize(struct jpeg_error_mgr,last_addon_message,4,9,41079);
CheckOffset(struct jpeg_error_mgr,last_addon_message,164,9,41079);
#elif __s390__ && !__s390x__
CheckTypeSize(struct jpeg_error_mgr,132, 11250, 10);
CheckMemberSize(struct jpeg_error_mgr,emit_message,4,10,41063);
CheckOffset(struct jpeg_error_mgr,emit_message,4,10,41063);
CheckMemberSize(struct jpeg_error_mgr,output_message,4,10,41064);
CheckOffset(struct jpeg_error_mgr,output_message,8,10,41064);
CheckMemberSize(struct jpeg_error_mgr,format_message,4,10,41067);
CheckOffset(struct jpeg_error_mgr,format_message,12,10,41067);
CheckMemberSize(struct jpeg_error_mgr,reset_error_mgr,4,10,41068);
CheckOffset(struct jpeg_error_mgr,reset_error_mgr,16,10,41068);
CheckMemberSize(struct jpeg_error_mgr,msg_code,4,10,41069);
CheckOffset(struct jpeg_error_mgr,msg_code,20,10,41069);
CheckMemberSize(struct jpeg_error_mgr,msg_parm,80,10,41072);
CheckOffset(struct jpeg_error_mgr,msg_parm,24,10,41072);
CheckMemberSize(struct jpeg_error_mgr,trace_level,4,10,41073);
CheckOffset(struct jpeg_error_mgr,trace_level,104,10,41073);
CheckMemberSize(struct jpeg_error_mgr,num_warnings,4,10,41074);
CheckOffset(struct jpeg_error_mgr,num_warnings,108,10,41074);
CheckMemberSize(struct jpeg_error_mgr,jpeg_message_table,4,10,41075);
CheckOffset(struct jpeg_error_mgr,jpeg_message_table,112,10,41075);
CheckMemberSize(struct jpeg_error_mgr,last_jpeg_message,4,10,41076);
CheckOffset(struct jpeg_error_mgr,last_jpeg_message,116,10,41076);
CheckMemberSize(struct jpeg_error_mgr,addon_message_table,4,10,41077);
CheckOffset(struct jpeg_error_mgr,addon_message_table,120,10,41077);
CheckMemberSize(struct jpeg_error_mgr,first_addon_message,4,10,41078);
CheckOffset(struct jpeg_error_mgr,first_addon_message,124,10,41078);
CheckMemberSize(struct jpeg_error_mgr,last_addon_message,4,10,41079);
CheckOffset(struct jpeg_error_mgr,last_addon_message,128,10,41079);
#elif __s390x__
CheckTypeSize(struct jpeg_error_mgr,168, 11250, 12);
CheckMemberSize(struct jpeg_error_mgr,emit_message,8,12,41063);
CheckOffset(struct jpeg_error_mgr,emit_message,8,12,41063);
CheckMemberSize(struct jpeg_error_mgr,output_message,8,12,41064);
CheckOffset(struct jpeg_error_mgr,output_message,16,12,41064);
CheckMemberSize(struct jpeg_error_mgr,format_message,8,12,41067);
CheckOffset(struct jpeg_error_mgr,format_message,24,12,41067);
CheckMemberSize(struct jpeg_error_mgr,reset_error_mgr,8,12,41068);
CheckOffset(struct jpeg_error_mgr,reset_error_mgr,32,12,41068);
CheckMemberSize(struct jpeg_error_mgr,msg_code,4,12,41069);
CheckOffset(struct jpeg_error_mgr,msg_code,40,12,41069);
CheckMemberSize(struct jpeg_error_mgr,msg_parm,80,12,41072);
CheckOffset(struct jpeg_error_mgr,msg_parm,44,12,41072);
CheckMemberSize(struct jpeg_error_mgr,trace_level,4,12,41073);
CheckOffset(struct jpeg_error_mgr,trace_level,124,12,41073);
CheckMemberSize(struct jpeg_error_mgr,num_warnings,8,12,41074);
CheckOffset(struct jpeg_error_mgr,num_warnings,128,12,41074);
CheckMemberSize(struct jpeg_error_mgr,jpeg_message_table,8,12,41075);
CheckOffset(struct jpeg_error_mgr,jpeg_message_table,136,12,41075);
CheckMemberSize(struct jpeg_error_mgr,last_jpeg_message,4,12,41076);
CheckOffset(struct jpeg_error_mgr,last_jpeg_message,144,12,41076);
CheckMemberSize(struct jpeg_error_mgr,addon_message_table,8,12,41077);
CheckOffset(struct jpeg_error_mgr,addon_message_table,152,12,41077);
CheckMemberSize(struct jpeg_error_mgr,first_addon_message,4,12,41078);
CheckOffset(struct jpeg_error_mgr,first_addon_message,160,12,41078);
CheckMemberSize(struct jpeg_error_mgr,last_addon_message,4,12,41079);
CheckOffset(struct jpeg_error_mgr,last_addon_message,164,12,41079);
#elif 1
CheckTypeSize(struct jpeg_error_mgr,0, 11250, 1);
Msg("Missing member data for jpeg_error_mgr on All\n");
CheckOffset(struct jpeg_error_mgr,error_exit,0,1,41062);
CheckOffset(struct jpeg_error_mgr,emit_message,0,1,41063);
CheckOffset(struct jpeg_error_mgr,output_message,0,1,41064);
CheckOffset(struct jpeg_error_mgr,format_message,0,1,41067);
CheckOffset(struct jpeg_error_mgr,reset_error_mgr,0,1,41068);
CheckOffset(struct jpeg_error_mgr,msg_code,0,1,41069);
CheckOffset(struct jpeg_error_mgr,msg_parm,0,1,41072);
CheckOffset(struct jpeg_error_mgr,trace_level,0,1,41073);
CheckOffset(struct jpeg_error_mgr,num_warnings,0,1,41074);
CheckOffset(struct jpeg_error_mgr,jpeg_message_table,0,1,41075);
CheckOffset(struct jpeg_error_mgr,last_jpeg_message,0,1,41076);
CheckOffset(struct jpeg_error_mgr,addon_message_table,0,1,41077);
CheckOffset(struct jpeg_error_mgr,first_addon_message,0,1,41078);
CheckOffset(struct jpeg_error_mgr,last_addon_message,0,1,41079);
#endif

#if __i386__
CheckTypeSize(struct jpeg_common_struct,24, 11251, 2);
CheckMemberSize(struct jpeg_common_struct,mem,4,2,41052);
CheckOffset(struct jpeg_common_struct,mem,4,2,41052);
CheckMemberSize(struct jpeg_common_struct,progress,4,2,41058);
CheckOffset(struct jpeg_common_struct,progress,8,2,41058);
CheckMemberSize(struct jpeg_common_struct,client_data,4,2,41059);
CheckOffset(struct jpeg_common_struct,client_data,12,2,41059);
CheckMemberSize(struct jpeg_common_struct,is_decompressor,4,2,41060);
CheckOffset(struct jpeg_common_struct,is_decompressor,16,2,41060);
CheckMemberSize(struct jpeg_common_struct,global_state,4,2,41061);
CheckOffset(struct jpeg_common_struct,global_state,20,2,41061);
#elif __x86_64__
CheckTypeSize(struct jpeg_common_struct,40, 11251, 11);
CheckMemberSize(struct jpeg_common_struct,mem,8,11,41052);
CheckOffset(struct jpeg_common_struct,mem,8,11,41052);
CheckMemberSize(struct jpeg_common_struct,progress,8,11,41058);
CheckOffset(struct jpeg_common_struct,progress,16,11,41058);
CheckMemberSize(struct jpeg_common_struct,client_data,8,11,41059);
CheckOffset(struct jpeg_common_struct,client_data,24,11,41059);
CheckMemberSize(struct jpeg_common_struct,is_decompressor,4,11,41060);
CheckOffset(struct jpeg_common_struct,is_decompressor,32,11,41060);
CheckMemberSize(struct jpeg_common_struct,global_state,4,11,41061);
CheckOffset(struct jpeg_common_struct,global_state,36,11,41061);
#elif __ia64__
CheckTypeSize(struct jpeg_common_struct,40, 11251, 3);
CheckMemberSize(struct jpeg_common_struct,mem,8,3,41052);
CheckOffset(struct jpeg_common_struct,mem,8,3,41052);
CheckMemberSize(struct jpeg_common_struct,progress,8,3,41058);
CheckOffset(struct jpeg_common_struct,progress,16,3,41058);
CheckMemberSize(struct jpeg_common_struct,client_data,8,3,41059);
CheckOffset(struct jpeg_common_struct,client_data,24,3,41059);
CheckMemberSize(struct jpeg_common_struct,is_decompressor,4,3,41060);
CheckOffset(struct jpeg_common_struct,is_decompressor,32,3,41060);
CheckMemberSize(struct jpeg_common_struct,global_state,4,3,41061);
CheckOffset(struct jpeg_common_struct,global_state,36,3,41061);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct jpeg_common_struct,24, 11251, 6);
CheckMemberSize(struct jpeg_common_struct,mem,4,6,41052);
CheckOffset(struct jpeg_common_struct,mem,4,6,41052);
CheckMemberSize(struct jpeg_common_struct,progress,4,6,41058);
CheckOffset(struct jpeg_common_struct,progress,8,6,41058);
CheckMemberSize(struct jpeg_common_struct,client_data,4,6,41059);
CheckOffset(struct jpeg_common_struct,client_data,12,6,41059);
CheckMemberSize(struct jpeg_common_struct,is_decompressor,4,6,41060);
CheckOffset(struct jpeg_common_struct,is_decompressor,16,6,41060);
CheckMemberSize(struct jpeg_common_struct,global_state,4,6,41061);
CheckOffset(struct jpeg_common_struct,global_state,20,6,41061);
#elif __powerpc64__
CheckTypeSize(struct jpeg_common_struct,40, 11251, 9);
CheckMemberSize(struct jpeg_common_struct,mem,8,9,41052);
CheckOffset(struct jpeg_common_struct,mem,8,9,41052);
CheckMemberSize(struct jpeg_common_struct,progress,8,9,41058);
CheckOffset(struct jpeg_common_struct,progress,16,9,41058);
CheckMemberSize(struct jpeg_common_struct,client_data,8,9,41059);
CheckOffset(struct jpeg_common_struct,client_data,24,9,41059);
CheckMemberSize(struct jpeg_common_struct,is_decompressor,4,9,41060);
CheckOffset(struct jpeg_common_struct,is_decompressor,32,9,41060);
CheckMemberSize(struct jpeg_common_struct,global_state,4,9,41061);
CheckOffset(struct jpeg_common_struct,global_state,36,9,41061);
#elif __s390__ && !__s390x__
CheckTypeSize(struct jpeg_common_struct,24, 11251, 10);
CheckMemberSize(struct jpeg_common_struct,mem,4,10,41052);
CheckOffset(struct jpeg_common_struct,mem,4,10,41052);
CheckMemberSize(struct jpeg_common_struct,progress,4,10,41058);
CheckOffset(struct jpeg_common_struct,progress,8,10,41058);
CheckMemberSize(struct jpeg_common_struct,client_data,4,10,41059);
CheckOffset(struct jpeg_common_struct,client_data,12,10,41059);
CheckMemberSize(struct jpeg_common_struct,is_decompressor,4,10,41060);
CheckOffset(struct jpeg_common_struct,is_decompressor,16,10,41060);
CheckMemberSize(struct jpeg_common_struct,global_state,4,10,41061);
CheckOffset(struct jpeg_common_struct,global_state,20,10,41061);
#elif __s390x__
CheckTypeSize(struct jpeg_common_struct,40, 11251, 12);
CheckMemberSize(struct jpeg_common_struct,mem,8,12,41052);
CheckOffset(struct jpeg_common_struct,mem,8,12,41052);
CheckMemberSize(struct jpeg_common_struct,progress,8,12,41058);
CheckOffset(struct jpeg_common_struct,progress,16,12,41058);
CheckMemberSize(struct jpeg_common_struct,client_data,8,12,41059);
CheckOffset(struct jpeg_common_struct,client_data,24,12,41059);
CheckMemberSize(struct jpeg_common_struct,is_decompressor,4,12,41060);
CheckOffset(struct jpeg_common_struct,is_decompressor,32,12,41060);
CheckMemberSize(struct jpeg_common_struct,global_state,4,12,41061);
CheckOffset(struct jpeg_common_struct,global_state,36,12,41061);
#elif 1
CheckTypeSize(struct jpeg_common_struct,0, 11251, 1);
Msg("Missing member data for jpeg_common_struct on All\n");
CheckOffset(struct jpeg_common_struct,err,0,1,41002);
CheckOffset(struct jpeg_common_struct,mem,0,1,41052);
CheckOffset(struct jpeg_common_struct,progress,0,1,41058);
CheckOffset(struct jpeg_common_struct,client_data,0,1,41059);
CheckOffset(struct jpeg_common_struct,is_decompressor,0,1,41060);
CheckOffset(struct jpeg_common_struct,global_state,0,1,41061);
#endif

#if __i386__
CheckTypeSize(struct jpeg_error_mgr *,4, 11252, 2);
#elif __x86_64__
CheckTypeSize(struct jpeg_error_mgr *,8, 11252, 11);
#elif __ia64__
CheckTypeSize(struct jpeg_error_mgr *,8, 11252, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct jpeg_error_mgr *,4, 11252, 6);
#elif __powerpc64__
CheckTypeSize(struct jpeg_error_mgr *,8, 11252, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(struct jpeg_error_mgr *,4, 11252, 10);
#elif __s390x__
CheckTypeSize(struct jpeg_error_mgr *,8, 11252, 12);
#elif 1
CheckTypeSize(struct jpeg_error_mgr *,0, 11252, 1);
#endif

#if __i386__
CheckTypeSize(struct jpeg_memory_mgr,52, 11253, 2);
CheckMemberSize(struct jpeg_memory_mgr,alloc_large,4,2,41007);
CheckOffset(struct jpeg_memory_mgr,alloc_large,4,2,41007);
CheckMemberSize(struct jpeg_memory_mgr,alloc_sarray,4,2,41012);
CheckOffset(struct jpeg_memory_mgr,alloc_sarray,8,2,41012);
CheckMemberSize(struct jpeg_memory_mgr,alloc_barray,4,2,41017);
CheckOffset(struct jpeg_memory_mgr,alloc_barray,12,2,41017);
CheckMemberSize(struct jpeg_memory_mgr,request_virt_sarray,4,2,41024);
CheckOffset(struct jpeg_memory_mgr,request_virt_sarray,16,2,41024);
CheckMemberSize(struct jpeg_memory_mgr,request_virt_barray,4,2,41031);
CheckOffset(struct jpeg_memory_mgr,request_virt_barray,20,2,41031);
CheckMemberSize(struct jpeg_memory_mgr,realize_virt_arrays,4,2,41033);
CheckOffset(struct jpeg_memory_mgr,realize_virt_arrays,24,2,41033);
CheckMemberSize(struct jpeg_memory_mgr,access_virt_sarray,4,2,41039);
CheckOffset(struct jpeg_memory_mgr,access_virt_sarray,28,2,41039);
CheckMemberSize(struct jpeg_memory_mgr,access_virt_barray,4,2,41045);
CheckOffset(struct jpeg_memory_mgr,access_virt_barray,32,2,41045);
CheckMemberSize(struct jpeg_memory_mgr,free_pool,4,2,41048);
CheckOffset(struct jpeg_memory_mgr,free_pool,36,2,41048);
CheckMemberSize(struct jpeg_memory_mgr,self_destruct,4,2,41049);
CheckOffset(struct jpeg_memory_mgr,self_destruct,40,2,41049);
CheckMemberSize(struct jpeg_memory_mgr,max_memory_to_use,4,2,41050);
CheckOffset(struct jpeg_memory_mgr,max_memory_to_use,44,2,41050);
CheckMemberSize(struct jpeg_memory_mgr,max_alloc_chunk,4,2,41051);
CheckOffset(struct jpeg_memory_mgr,max_alloc_chunk,48,2,41051);
#elif __x86_64__
CheckTypeSize(struct jpeg_memory_mgr,104, 11253, 11);
CheckMemberSize(struct jpeg_memory_mgr,alloc_large,8,11,41007);
CheckOffset(struct jpeg_memory_mgr,alloc_large,8,11,41007);
CheckMemberSize(struct jpeg_memory_mgr,alloc_sarray,8,11,41012);
CheckOffset(struct jpeg_memory_mgr,alloc_sarray,16,11,41012);
CheckMemberSize(struct jpeg_memory_mgr,alloc_barray,8,11,41017);
CheckOffset(struct jpeg_memory_mgr,alloc_barray,24,11,41017);
CheckMemberSize(struct jpeg_memory_mgr,request_virt_sarray,8,11,41024);
CheckOffset(struct jpeg_memory_mgr,request_virt_sarray,32,11,41024);
CheckMemberSize(struct jpeg_memory_mgr,request_virt_barray,8,11,41031);
CheckOffset(struct jpeg_memory_mgr,request_virt_barray,40,11,41031);
CheckMemberSize(struct jpeg_memory_mgr,realize_virt_arrays,8,11,41033);
CheckOffset(struct jpeg_memory_mgr,realize_virt_arrays,48,11,41033);
CheckMemberSize(struct jpeg_memory_mgr,access_virt_sarray,8,11,41039);
CheckOffset(struct jpeg_memory_mgr,access_virt_sarray,56,11,41039);
CheckMemberSize(struct jpeg_memory_mgr,access_virt_barray,8,11,41045);
CheckOffset(struct jpeg_memory_mgr,access_virt_barray,64,11,41045);
CheckMemberSize(struct jpeg_memory_mgr,free_pool,8,11,41048);
CheckOffset(struct jpeg_memory_mgr,free_pool,72,11,41048);
CheckMemberSize(struct jpeg_memory_mgr,self_destruct,8,11,41049);
CheckOffset(struct jpeg_memory_mgr,self_destruct,80,11,41049);
CheckMemberSize(struct jpeg_memory_mgr,max_memory_to_use,8,11,41050);
CheckOffset(struct jpeg_memory_mgr,max_memory_to_use,88,11,41050);
CheckMemberSize(struct jpeg_memory_mgr,max_alloc_chunk,8,11,41051);
CheckOffset(struct jpeg_memory_mgr,max_alloc_chunk,96,11,41051);
#elif __ia64__
CheckTypeSize(struct jpeg_memory_mgr,104, 11253, 3);
CheckMemberSize(struct jpeg_memory_mgr,alloc_large,8,3,41007);
CheckOffset(struct jpeg_memory_mgr,alloc_large,8,3,41007);
CheckMemberSize(struct jpeg_memory_mgr,alloc_sarray,8,3,41012);
CheckOffset(struct jpeg_memory_mgr,alloc_sarray,16,3,41012);
CheckMemberSize(struct jpeg_memory_mgr,alloc_barray,8,3,41017);
CheckOffset(struct jpeg_memory_mgr,alloc_barray,24,3,41017);
CheckMemberSize(struct jpeg_memory_mgr,request_virt_sarray,8,3,41024);
CheckOffset(struct jpeg_memory_mgr,request_virt_sarray,32,3,41024);
CheckMemberSize(struct jpeg_memory_mgr,request_virt_barray,8,3,41031);
CheckOffset(struct jpeg_memory_mgr,request_virt_barray,40,3,41031);
CheckMemberSize(struct jpeg_memory_mgr,realize_virt_arrays,8,3,41033);
CheckOffset(struct jpeg_memory_mgr,realize_virt_arrays,48,3,41033);
CheckMemberSize(struct jpeg_memory_mgr,access_virt_sarray,8,3,41039);
CheckOffset(struct jpeg_memory_mgr,access_virt_sarray,56,3,41039);
CheckMemberSize(struct jpeg_memory_mgr,access_virt_barray,8,3,41045);
CheckOffset(struct jpeg_memory_mgr,access_virt_barray,64,3,41045);
CheckMemberSize(struct jpeg_memory_mgr,free_pool,8,3,41048);
CheckOffset(struct jpeg_memory_mgr,free_pool,72,3,41048);
CheckMemberSize(struct jpeg_memory_mgr,self_destruct,8,3,41049);
CheckOffset(struct jpeg_memory_mgr,self_destruct,80,3,41049);
CheckMemberSize(struct jpeg_memory_mgr,max_memory_to_use,8,3,41050);
CheckOffset(struct jpeg_memory_mgr,max_memory_to_use,88,3,41050);
CheckMemberSize(struct jpeg_memory_mgr,max_alloc_chunk,8,3,41051);
CheckOffset(struct jpeg_memory_mgr,max_alloc_chunk,96,3,41051);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct jpeg_memory_mgr,52, 11253, 6);
CheckMemberSize(struct jpeg_memory_mgr,alloc_large,4,6,41007);
CheckOffset(struct jpeg_memory_mgr,alloc_large,4,6,41007);
CheckMemberSize(struct jpeg_memory_mgr,alloc_sarray,4,6,41012);
CheckOffset(struct jpeg_memory_mgr,alloc_sarray,8,6,41012);
CheckMemberSize(struct jpeg_memory_mgr,alloc_barray,4,6,41017);
CheckOffset(struct jpeg_memory_mgr,alloc_barray,12,6,41017);
CheckMemberSize(struct jpeg_memory_mgr,request_virt_sarray,4,6,41024);
CheckOffset(struct jpeg_memory_mgr,request_virt_sarray,16,6,41024);
CheckMemberSize(struct jpeg_memory_mgr,request_virt_barray,4,6,41031);
CheckOffset(struct jpeg_memory_mgr,request_virt_barray,20,6,41031);
CheckMemberSize(struct jpeg_memory_mgr,realize_virt_arrays,4,6,41033);
CheckOffset(struct jpeg_memory_mgr,realize_virt_arrays,24,6,41033);
CheckMemberSize(struct jpeg_memory_mgr,access_virt_sarray,4,6,41039);
CheckOffset(struct jpeg_memory_mgr,access_virt_sarray,28,6,41039);
CheckMemberSize(struct jpeg_memory_mgr,access_virt_barray,4,6,41045);
CheckOffset(struct jpeg_memory_mgr,access_virt_barray,32,6,41045);
CheckMemberSize(struct jpeg_memory_mgr,free_pool,4,6,41048);
CheckOffset(struct jpeg_memory_mgr,free_pool,36,6,41048);
CheckMemberSize(struct jpeg_memory_mgr,self_destruct,4,6,41049);
CheckOffset(struct jpeg_memory_mgr,self_destruct,40,6,41049);
CheckMemberSize(struct jpeg_memory_mgr,max_memory_to_use,4,6,41050);
CheckOffset(struct jpeg_memory_mgr,max_memory_to_use,44,6,41050);
CheckMemberSize(struct jpeg_memory_mgr,max_alloc_chunk,4,6,41051);
CheckOffset(struct jpeg_memory_mgr,max_alloc_chunk,48,6,41051);
#elif __powerpc64__
CheckTypeSize(struct jpeg_memory_mgr,104, 11253, 9);
CheckMemberSize(struct jpeg_memory_mgr,alloc_large,8,9,41007);
CheckOffset(struct jpeg_memory_mgr,alloc_large,8,9,41007);
CheckMemberSize(struct jpeg_memory_mgr,alloc_sarray,8,9,41012);
CheckOffset(struct jpeg_memory_mgr,alloc_sarray,16,9,41012);
CheckMemberSize(struct jpeg_memory_mgr,alloc_barray,8,9,41017);
CheckOffset(struct jpeg_memory_mgr,alloc_barray,24,9,41017);
CheckMemberSize(struct jpeg_memory_mgr,request_virt_sarray,8,9,41024);
CheckOffset(struct jpeg_memory_mgr,request_virt_sarray,32,9,41024);
CheckMemberSize(struct jpeg_memory_mgr,request_virt_barray,8,9,41031);
CheckOffset(struct jpeg_memory_mgr,request_virt_barray,40,9,41031);
CheckMemberSize(struct jpeg_memory_mgr,realize_virt_arrays,8,9,41033);
CheckOffset(struct jpeg_memory_mgr,realize_virt_arrays,48,9,41033);
CheckMemberSize(struct jpeg_memory_mgr,access_virt_sarray,8,9,41039);
CheckOffset(struct jpeg_memory_mgr,access_virt_sarray,56,9,41039);
CheckMemberSize(struct jpeg_memory_mgr,access_virt_barray,8,9,41045);
CheckOffset(struct jpeg_memory_mgr,access_virt_barray,64,9,41045);
CheckMemberSize(struct jpeg_memory_mgr,free_pool,8,9,41048);
CheckOffset(struct jpeg_memory_mgr,free_pool,72,9,41048);
CheckMemberSize(struct jpeg_memory_mgr,self_destruct,8,9,41049);
CheckOffset(struct jpeg_memory_mgr,self_destruct,80,9,41049);
CheckMemberSize(struct jpeg_memory_mgr,max_memory_to_use,8,9,41050);
CheckOffset(struct jpeg_memory_mgr,max_memory_to_use,88,9,41050);
CheckMemberSize(struct jpeg_memory_mgr,max_alloc_chunk,8,9,41051);
CheckOffset(struct jpeg_memory_mgr,max_alloc_chunk,96,9,41051);
#elif __s390__ && !__s390x__
CheckTypeSize(struct jpeg_memory_mgr,52, 11253, 10);
CheckMemberSize(struct jpeg_memory_mgr,alloc_large,4,10,41007);
CheckOffset(struct jpeg_memory_mgr,alloc_large,4,10,41007);
CheckMemberSize(struct jpeg_memory_mgr,alloc_sarray,4,10,41012);
CheckOffset(struct jpeg_memory_mgr,alloc_sarray,8,10,41012);
CheckMemberSize(struct jpeg_memory_mgr,alloc_barray,4,10,41017);
CheckOffset(struct jpeg_memory_mgr,alloc_barray,12,10,41017);
CheckMemberSize(struct jpeg_memory_mgr,request_virt_sarray,4,10,41024);
CheckOffset(struct jpeg_memory_mgr,request_virt_sarray,16,10,41024);
CheckMemberSize(struct jpeg_memory_mgr,request_virt_barray,4,10,41031);
CheckOffset(struct jpeg_memory_mgr,request_virt_barray,20,10,41031);
CheckMemberSize(struct jpeg_memory_mgr,realize_virt_arrays,4,10,41033);
CheckOffset(struct jpeg_memory_mgr,realize_virt_arrays,24,10,41033);
CheckMemberSize(struct jpeg_memory_mgr,access_virt_sarray,4,10,41039);
CheckOffset(struct jpeg_memory_mgr,access_virt_sarray,28,10,41039);
CheckMemberSize(struct jpeg_memory_mgr,access_virt_barray,4,10,41045);
CheckOffset(struct jpeg_memory_mgr,access_virt_barray,32,10,41045);
CheckMemberSize(struct jpeg_memory_mgr,free_pool,4,10,41048);
CheckOffset(struct jpeg_memory_mgr,free_pool,36,10,41048);
CheckMemberSize(struct jpeg_memory_mgr,self_destruct,4,10,41049);
CheckOffset(struct jpeg_memory_mgr,self_destruct,40,10,41049);
CheckMemberSize(struct jpeg_memory_mgr,max_memory_to_use,4,10,41050);
CheckOffset(struct jpeg_memory_mgr,max_memory_to_use,44,10,41050);
CheckMemberSize(struct jpeg_memory_mgr,max_alloc_chunk,4,10,41051);
CheckOffset(struct jpeg_memory_mgr,max_alloc_chunk,48,10,41051);
#elif __s390x__
CheckTypeSize(struct jpeg_memory_mgr,104, 11253, 12);
CheckMemberSize(struct jpeg_memory_mgr,alloc_large,8,12,41007);
CheckOffset(struct jpeg_memory_mgr,alloc_large,8,12,41007);
CheckMemberSize(struct jpeg_memory_mgr,alloc_sarray,8,12,41012);
CheckOffset(struct jpeg_memory_mgr,alloc_sarray,16,12,41012);
CheckMemberSize(struct jpeg_memory_mgr,alloc_barray,8,12,41017);
CheckOffset(struct jpeg_memory_mgr,alloc_barray,24,12,41017);
CheckMemberSize(struct jpeg_memory_mgr,request_virt_sarray,8,12,41024);
CheckOffset(struct jpeg_memory_mgr,request_virt_sarray,32,12,41024);
CheckMemberSize(struct jpeg_memory_mgr,request_virt_barray,8,12,41031);
CheckOffset(struct jpeg_memory_mgr,request_virt_barray,40,12,41031);
CheckMemberSize(struct jpeg_memory_mgr,realize_virt_arrays,8,12,41033);
CheckOffset(struct jpeg_memory_mgr,realize_virt_arrays,48,12,41033);
CheckMemberSize(struct jpeg_memory_mgr,access_virt_sarray,8,12,41039);
CheckOffset(struct jpeg_memory_mgr,access_virt_sarray,56,12,41039);
CheckMemberSize(struct jpeg_memory_mgr,access_virt_barray,8,12,41045);
CheckOffset(struct jpeg_memory_mgr,access_virt_barray,64,12,41045);
CheckMemberSize(struct jpeg_memory_mgr,free_pool,8,12,41048);
CheckOffset(struct jpeg_memory_mgr,free_pool,72,12,41048);
CheckMemberSize(struct jpeg_memory_mgr,self_destruct,8,12,41049);
CheckOffset(struct jpeg_memory_mgr,self_destruct,80,12,41049);
CheckMemberSize(struct jpeg_memory_mgr,max_memory_to_use,8,12,41050);
CheckOffset(struct jpeg_memory_mgr,max_memory_to_use,88,12,41050);
CheckMemberSize(struct jpeg_memory_mgr,max_alloc_chunk,8,12,41051);
CheckOffset(struct jpeg_memory_mgr,max_alloc_chunk,96,12,41051);
#elif 1
CheckTypeSize(struct jpeg_memory_mgr,0, 11253, 1);
Msg("Missing member data for jpeg_memory_mgr on All\n");
CheckOffset(struct jpeg_memory_mgr,alloc_small,0,1,41006);
CheckOffset(struct jpeg_memory_mgr,alloc_large,0,1,41007);
CheckOffset(struct jpeg_memory_mgr,alloc_sarray,0,1,41012);
CheckOffset(struct jpeg_memory_mgr,alloc_barray,0,1,41017);
CheckOffset(struct jpeg_memory_mgr,request_virt_sarray,0,1,41024);
CheckOffset(struct jpeg_memory_mgr,request_virt_barray,0,1,41031);
CheckOffset(struct jpeg_memory_mgr,realize_virt_arrays,0,1,41033);
CheckOffset(struct jpeg_memory_mgr,access_virt_sarray,0,1,41039);
CheckOffset(struct jpeg_memory_mgr,access_virt_barray,0,1,41045);
CheckOffset(struct jpeg_memory_mgr,free_pool,0,1,41048);
CheckOffset(struct jpeg_memory_mgr,self_destruct,0,1,41049);
CheckOffset(struct jpeg_memory_mgr,max_memory_to_use,0,1,41050);
CheckOffset(struct jpeg_memory_mgr,max_alloc_chunk,0,1,41051);
#endif

#if __i386__
CheckTypeSize(struct jpeg_common_struct *,4, 11254, 2);
#elif __x86_64__
CheckTypeSize(struct jpeg_common_struct *,8, 11254, 11);
#elif __ia64__
CheckTypeSize(struct jpeg_common_struct *,8, 11254, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct jpeg_common_struct *,4, 11254, 6);
#elif __powerpc64__
CheckTypeSize(struct jpeg_common_struct *,8, 11254, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(struct jpeg_common_struct *,4, 11254, 10);
#elif __s390x__
CheckTypeSize(struct jpeg_common_struct *,8, 11254, 12);
#elif 1
CheckTypeSize(struct jpeg_common_struct *,0, 11254, 1);
#endif

#if __i386__
CheckTypeSize(j_common_ptr,4, 11255, 2);
#elif __x86_64__
CheckTypeSize(j_common_ptr,8, 11255, 11);
#elif __ia64__
CheckTypeSize(j_common_ptr,8, 11255, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(j_common_ptr,4, 11255, 6);
#elif __powerpc64__
CheckTypeSize(j_common_ptr,8, 11255, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(j_common_ptr,4, 11255, 10);
#elif __s390x__
CheckTypeSize(j_common_ptr,8, 11255, 12);
#elif 1
CheckTypeSize(j_common_ptr,0, 11255, 1);
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#elif 1
#endif

#if __i386__
CheckTypeSize(JSAMPLE,1, 11257, 2);
#elif __x86_64__
CheckTypeSize(JSAMPLE,1, 11257, 11);
#elif __ia64__
CheckTypeSize(JSAMPLE,1, 11257, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(JSAMPLE,1, 11257, 6);
#elif __powerpc64__
CheckTypeSize(JSAMPLE,1, 11257, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(JSAMPLE,1, 11257, 10);
#elif __s390x__
CheckTypeSize(JSAMPLE,1, 11257, 12);
#elif 1
CheckTypeSize(JSAMPLE,0, 11257, 1);
#endif

#if __i386__
CheckTypeSize(JSAMPLE *,4, 11258, 2);
#elif __x86_64__
CheckTypeSize(JSAMPLE *,8, 11258, 11);
#elif __ia64__
CheckTypeSize(JSAMPLE *,8, 11258, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(JSAMPLE *,4, 11258, 6);
#elif __powerpc64__
CheckTypeSize(JSAMPLE *,8, 11258, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(JSAMPLE *,4, 11258, 10);
#elif __s390x__
CheckTypeSize(JSAMPLE *,8, 11258, 12);
#elif 1
CheckTypeSize(JSAMPLE *,0, 11258, 1);
#endif

#if __i386__
CheckTypeSize(JSAMPROW,4, 11259, 2);
#elif __x86_64__
CheckTypeSize(JSAMPROW,8, 11259, 11);
#elif __ia64__
CheckTypeSize(JSAMPROW,8, 11259, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(JSAMPROW,4, 11259, 6);
#elif __powerpc64__
CheckTypeSize(JSAMPROW,8, 11259, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(JSAMPROW,4, 11259, 10);
#elif __s390x__
CheckTypeSize(JSAMPROW,8, 11259, 12);
#elif 1
CheckTypeSize(JSAMPROW,0, 11259, 1);
#endif

#if __i386__
CheckTypeSize(JSAMPROW *,4, 11260, 2);
#elif __x86_64__
CheckTypeSize(JSAMPROW *,8, 11260, 11);
#elif __ia64__
CheckTypeSize(JSAMPROW *,8, 11260, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(JSAMPROW *,4, 11260, 6);
#elif __powerpc64__
CheckTypeSize(JSAMPROW *,8, 11260, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(JSAMPROW *,4, 11260, 10);
#elif __s390x__
CheckTypeSize(JSAMPROW *,8, 11260, 12);
#elif 1
CheckTypeSize(JSAMPROW *,0, 11260, 1);
#endif

#if __i386__
CheckTypeSize(JSAMPARRAY,4, 11261, 2);
#elif __x86_64__
CheckTypeSize(JSAMPARRAY,8, 11261, 11);
#elif __ia64__
CheckTypeSize(JSAMPARRAY,8, 11261, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(JSAMPARRAY,4, 11261, 6);
#elif __powerpc64__
CheckTypeSize(JSAMPARRAY,8, 11261, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(JSAMPARRAY,4, 11261, 10);
#elif __s390x__
CheckTypeSize(JSAMPARRAY,8, 11261, 12);
#elif 1
CheckTypeSize(JSAMPARRAY,0, 11261, 1);
#endif

#if __i386__
CheckTypeSize(JDIMENSION,4, 11262, 2);
#elif __x86_64__
CheckTypeSize(JDIMENSION,4, 11262, 11);
#elif __ia64__
CheckTypeSize(JDIMENSION,4, 11262, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(JDIMENSION,4, 11262, 6);
#elif __powerpc64__
CheckTypeSize(JDIMENSION,4, 11262, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(JDIMENSION,4, 11262, 10);
#elif __s390x__
CheckTypeSize(JDIMENSION,4, 11262, 12);
#elif 1
CheckTypeSize(JDIMENSION,0, 11262, 1);
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#elif 1
#endif

#if __i386__
CheckTypeSize(JCOEF,2, 11265, 2);
#elif __x86_64__
CheckTypeSize(JCOEF,2, 11265, 11);
#elif __ia64__
CheckTypeSize(JCOEF,2, 11265, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(JCOEF,2, 11265, 6);
#elif __powerpc64__
CheckTypeSize(JCOEF,2, 11265, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(JCOEF,2, 11265, 10);
#elif __s390x__
CheckTypeSize(JCOEF,2, 11265, 12);
#elif 1
CheckTypeSize(JCOEF,0, 11265, 1);
#endif

#if 1
#endif

#if __i386__
CheckTypeSize(JBLOCK,128, 11267, 2);
#elif __x86_64__
CheckTypeSize(JBLOCK,128, 11267, 11);
#elif __ia64__
CheckTypeSize(JBLOCK,128, 11267, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(JBLOCK,128, 11267, 6);
#elif __powerpc64__
CheckTypeSize(JBLOCK,128, 11267, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(JBLOCK,128, 11267, 10);
#elif __s390x__
CheckTypeSize(JBLOCK,128, 11267, 12);
#elif 1
CheckTypeSize(JBLOCK,0, 11267, 1);
#endif

#if __i386__
CheckTypeSize(JBLOCK *,4, 11268, 2);
#elif __x86_64__
CheckTypeSize(JBLOCK *,8, 11268, 11);
#elif __ia64__
CheckTypeSize(JBLOCK *,8, 11268, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(JBLOCK *,4, 11268, 6);
#elif __powerpc64__
CheckTypeSize(JBLOCK *,8, 11268, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(JBLOCK *,4, 11268, 10);
#elif __s390x__
CheckTypeSize(JBLOCK *,8, 11268, 12);
#elif 1
CheckTypeSize(JBLOCK *,0, 11268, 1);
#endif

#if __i386__
CheckTypeSize(JBLOCKROW,4, 11269, 2);
#elif __x86_64__
CheckTypeSize(JBLOCKROW,8, 11269, 11);
#elif __ia64__
CheckTypeSize(JBLOCKROW,8, 11269, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(JBLOCKROW,4, 11269, 6);
#elif __powerpc64__
CheckTypeSize(JBLOCKROW,8, 11269, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(JBLOCKROW,4, 11269, 10);
#elif __s390x__
CheckTypeSize(JBLOCKROW,8, 11269, 12);
#elif 1
CheckTypeSize(JBLOCKROW,0, 11269, 1);
#endif

#if __i386__
CheckTypeSize(JBLOCKROW *,4, 11270, 2);
#elif __x86_64__
CheckTypeSize(JBLOCKROW *,8, 11270, 11);
#elif __ia64__
CheckTypeSize(JBLOCKROW *,8, 11270, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(JBLOCKROW *,4, 11270, 6);
#elif __powerpc64__
CheckTypeSize(JBLOCKROW *,8, 11270, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(JBLOCKROW *,4, 11270, 10);
#elif __s390x__
CheckTypeSize(JBLOCKROW *,8, 11270, 12);
#elif 1
CheckTypeSize(JBLOCKROW *,0, 11270, 1);
#endif

#if __i386__
CheckTypeSize(JBLOCKARRAY,4, 11271, 2);
#elif __x86_64__
CheckTypeSize(JBLOCKARRAY,8, 11271, 11);
#elif __ia64__
CheckTypeSize(JBLOCKARRAY,8, 11271, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(JBLOCKARRAY,4, 11271, 6);
#elif __powerpc64__
CheckTypeSize(JBLOCKARRAY,8, 11271, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(JBLOCKARRAY,4, 11271, 10);
#elif __s390x__
CheckTypeSize(JBLOCKARRAY,8, 11271, 12);
#elif 1
CheckTypeSize(JBLOCKARRAY,0, 11271, 1);
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#elif 1
#endif

#if __i386__
CheckTypeSize(struct jvirt_sarray_control *,4, 11274, 2);
#elif __x86_64__
CheckTypeSize(struct jvirt_sarray_control *,8, 11274, 11);
#elif __ia64__
CheckTypeSize(struct jvirt_sarray_control *,8, 11274, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct jvirt_sarray_control *,4, 11274, 6);
#elif __powerpc64__
CheckTypeSize(struct jvirt_sarray_control *,8, 11274, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(struct jvirt_sarray_control *,4, 11274, 10);
#elif __s390x__
CheckTypeSize(struct jvirt_sarray_control *,8, 11274, 12);
#elif 1
CheckTypeSize(struct jvirt_sarray_control *,0, 11274, 1);
#endif

#if __i386__
CheckTypeSize(jvirt_sarray_ptr,4, 11275, 2);
#elif __x86_64__
CheckTypeSize(jvirt_sarray_ptr,8, 11275, 11);
#elif __ia64__
CheckTypeSize(jvirt_sarray_ptr,8, 11275, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(jvirt_sarray_ptr,4, 11275, 6);
#elif __powerpc64__
CheckTypeSize(jvirt_sarray_ptr,8, 11275, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(jvirt_sarray_ptr,4, 11275, 10);
#elif __s390x__
CheckTypeSize(jvirt_sarray_ptr,8, 11275, 12);
#elif 1
CheckTypeSize(jvirt_sarray_ptr,0, 11275, 1);
#endif

#if __i386__
CheckTypeSize(boolean,4, 11276, 2);
#elif __x86_64__
CheckTypeSize(boolean,4, 11276, 11);
#elif __ia64__
CheckTypeSize(boolean,4, 11276, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(boolean,4, 11276, 6);
#elif __powerpc64__
CheckTypeSize(boolean,4, 11276, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(boolean,4, 11276, 10);
#elif __s390x__
CheckTypeSize(boolean,4, 11276, 12);
#elif 1
CheckTypeSize(boolean,0, 11276, 1);
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#elif 1
#endif

#if __i386__
CheckTypeSize(struct jvirt_barray_control *,4, 11279, 2);
#elif __x86_64__
CheckTypeSize(struct jvirt_barray_control *,8, 11279, 11);
#elif __ia64__
CheckTypeSize(struct jvirt_barray_control *,8, 11279, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct jvirt_barray_control *,4, 11279, 6);
#elif __powerpc64__
CheckTypeSize(struct jvirt_barray_control *,8, 11279, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(struct jvirt_barray_control *,4, 11279, 10);
#elif __s390x__
CheckTypeSize(struct jvirt_barray_control *,8, 11279, 12);
#elif 1
CheckTypeSize(struct jvirt_barray_control *,0, 11279, 1);
#endif

#if __i386__
CheckTypeSize(jvirt_barray_ptr,4, 11280, 2);
#elif __x86_64__
CheckTypeSize(jvirt_barray_ptr,8, 11280, 11);
#elif __ia64__
CheckTypeSize(jvirt_barray_ptr,8, 11280, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(jvirt_barray_ptr,4, 11280, 6);
#elif __powerpc64__
CheckTypeSize(jvirt_barray_ptr,8, 11280, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(jvirt_barray_ptr,4, 11280, 10);
#elif __s390x__
CheckTypeSize(jvirt_barray_ptr,8, 11280, 12);
#elif 1
CheckTypeSize(jvirt_barray_ptr,0, 11280, 1);
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#elif 1
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#elif 1
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#elif 1
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#elif 1
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#elif 1
#endif

#if __i386__
CheckTypeSize(struct jpeg_memory_mgr *,4, 11286, 2);
#elif __x86_64__
CheckTypeSize(struct jpeg_memory_mgr *,8, 11286, 11);
#elif __ia64__
CheckTypeSize(struct jpeg_memory_mgr *,8, 11286, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct jpeg_memory_mgr *,4, 11286, 6);
#elif __powerpc64__
CheckTypeSize(struct jpeg_memory_mgr *,8, 11286, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(struct jpeg_memory_mgr *,4, 11286, 10);
#elif __s390x__
CheckTypeSize(struct jpeg_memory_mgr *,8, 11286, 12);
#elif 1
CheckTypeSize(struct jpeg_memory_mgr *,0, 11286, 1);
#endif

#if __i386__
CheckTypeSize(struct jpeg_progress_mgr,20, 11287, 2);
CheckMemberSize(struct jpeg_progress_mgr,pass_counter,4,2,41054);
CheckOffset(struct jpeg_progress_mgr,pass_counter,4,2,41054);
CheckMemberSize(struct jpeg_progress_mgr,pass_limit,4,2,41055);
CheckOffset(struct jpeg_progress_mgr,pass_limit,8,2,41055);
CheckMemberSize(struct jpeg_progress_mgr,completed_passes,4,2,41056);
CheckOffset(struct jpeg_progress_mgr,completed_passes,12,2,41056);
CheckMemberSize(struct jpeg_progress_mgr,total_passes,4,2,41057);
CheckOffset(struct jpeg_progress_mgr,total_passes,16,2,41057);
#elif __x86_64__
CheckTypeSize(struct jpeg_progress_mgr,32, 11287, 11);
CheckMemberSize(struct jpeg_progress_mgr,pass_counter,8,11,41054);
CheckOffset(struct jpeg_progress_mgr,pass_counter,8,11,41054);
CheckMemberSize(struct jpeg_progress_mgr,pass_limit,8,11,41055);
CheckOffset(struct jpeg_progress_mgr,pass_limit,16,11,41055);
CheckMemberSize(struct jpeg_progress_mgr,completed_passes,4,11,41056);
CheckOffset(struct jpeg_progress_mgr,completed_passes,24,11,41056);
CheckMemberSize(struct jpeg_progress_mgr,total_passes,4,11,41057);
CheckOffset(struct jpeg_progress_mgr,total_passes,28,11,41057);
#elif __ia64__
CheckTypeSize(struct jpeg_progress_mgr,32, 11287, 3);
CheckMemberSize(struct jpeg_progress_mgr,pass_counter,8,3,41054);
CheckOffset(struct jpeg_progress_mgr,pass_counter,8,3,41054);
CheckMemberSize(struct jpeg_progress_mgr,pass_limit,8,3,41055);
CheckOffset(struct jpeg_progress_mgr,pass_limit,16,3,41055);
CheckMemberSize(struct jpeg_progress_mgr,completed_passes,4,3,41056);
CheckOffset(struct jpeg_progress_mgr,completed_passes,24,3,41056);
CheckMemberSize(struct jpeg_progress_mgr,total_passes,4,3,41057);
CheckOffset(struct jpeg_progress_mgr,total_passes,28,3,41057);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct jpeg_progress_mgr,20, 11287, 6);
CheckMemberSize(struct jpeg_progress_mgr,pass_counter,4,6,41054);
CheckOffset(struct jpeg_progress_mgr,pass_counter,4,6,41054);
CheckMemberSize(struct jpeg_progress_mgr,pass_limit,4,6,41055);
CheckOffset(struct jpeg_progress_mgr,pass_limit,8,6,41055);
CheckMemberSize(struct jpeg_progress_mgr,completed_passes,4,6,41056);
CheckOffset(struct jpeg_progress_mgr,completed_passes,12,6,41056);
CheckMemberSize(struct jpeg_progress_mgr,total_passes,4,6,41057);
CheckOffset(struct jpeg_progress_mgr,total_passes,16,6,41057);
#elif __powerpc64__
CheckTypeSize(struct jpeg_progress_mgr,32, 11287, 9);
CheckMemberSize(struct jpeg_progress_mgr,pass_counter,8,9,41054);
CheckOffset(struct jpeg_progress_mgr,pass_counter,8,9,41054);
CheckMemberSize(struct jpeg_progress_mgr,pass_limit,8,9,41055);
CheckOffset(struct jpeg_progress_mgr,pass_limit,16,9,41055);
CheckMemberSize(struct jpeg_progress_mgr,completed_passes,4,9,41056);
CheckOffset(struct jpeg_progress_mgr,completed_passes,24,9,41056);
CheckMemberSize(struct jpeg_progress_mgr,total_passes,4,9,41057);
CheckOffset(struct jpeg_progress_mgr,total_passes,28,9,41057);
#elif __s390__ && !__s390x__
CheckTypeSize(struct jpeg_progress_mgr,20, 11287, 10);
CheckMemberSize(struct jpeg_progress_mgr,pass_counter,4,10,41054);
CheckOffset(struct jpeg_progress_mgr,pass_counter,4,10,41054);
CheckMemberSize(struct jpeg_progress_mgr,pass_limit,4,10,41055);
CheckOffset(struct jpeg_progress_mgr,pass_limit,8,10,41055);
CheckMemberSize(struct jpeg_progress_mgr,completed_passes,4,10,41056);
CheckOffset(struct jpeg_progress_mgr,completed_passes,12,10,41056);
CheckMemberSize(struct jpeg_progress_mgr,total_passes,4,10,41057);
CheckOffset(struct jpeg_progress_mgr,total_passes,16,10,41057);
#elif __s390x__
CheckTypeSize(struct jpeg_progress_mgr,32, 11287, 12);
CheckMemberSize(struct jpeg_progress_mgr,pass_counter,8,12,41054);
CheckOffset(struct jpeg_progress_mgr,pass_counter,8,12,41054);
CheckMemberSize(struct jpeg_progress_mgr,pass_limit,8,12,41055);
CheckOffset(struct jpeg_progress_mgr,pass_limit,16,12,41055);
CheckMemberSize(struct jpeg_progress_mgr,completed_passes,4,12,41056);
CheckOffset(struct jpeg_progress_mgr,completed_passes,24,12,41056);
CheckMemberSize(struct jpeg_progress_mgr,total_passes,4,12,41057);
CheckOffset(struct jpeg_progress_mgr,total_passes,28,12,41057);
#elif 1
CheckTypeSize(struct jpeg_progress_mgr,0, 11287, 1);
Msg("Missing member data for jpeg_progress_mgr on All\n");
CheckOffset(struct jpeg_progress_mgr,progress_monitor,0,1,41053);
CheckOffset(struct jpeg_progress_mgr,pass_counter,0,1,41054);
CheckOffset(struct jpeg_progress_mgr,pass_limit,0,1,41055);
CheckOffset(struct jpeg_progress_mgr,completed_passes,0,1,41056);
CheckOffset(struct jpeg_progress_mgr,total_passes,0,1,41057);
#endif

#if __i386__
CheckTypeSize(struct jpeg_progress_mgr *,4, 11288, 2);
#elif __x86_64__
CheckTypeSize(struct jpeg_progress_mgr *,8, 11288, 11);
#elif __ia64__
CheckTypeSize(struct jpeg_progress_mgr *,8, 11288, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct jpeg_progress_mgr *,4, 11288, 6);
#elif __powerpc64__
CheckTypeSize(struct jpeg_progress_mgr *,8, 11288, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(struct jpeg_progress_mgr *,4, 11288, 10);
#elif __s390x__
CheckTypeSize(struct jpeg_progress_mgr *,8, 11288, 12);
#elif 1
CheckTypeSize(struct jpeg_progress_mgr *,0, 11288, 1);
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#elif 1
#endif

#if 1
#endif

#if 1
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#elif 1
#endif

#if __i386__
CheckTypeSize(const const char *,4, 11293, 2);
#elif __x86_64__
CheckTypeSize(const const char *,8, 11293, 11);
#elif __ia64__
CheckTypeSize(const const char *,8, 11293, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(const const char *,4, 11293, 6);
#elif __powerpc64__
CheckTypeSize(const const char *,8, 11293, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(const const char *,4, 11293, 10);
#elif __s390x__
CheckTypeSize(const const char *,8, 11293, 12);
#elif 1
CheckTypeSize(const const char *,0, 11293, 1);
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#elif 1
#endif

#if __i386__
CheckTypeSize(struct jpeg_source_mgr,28, 11295, 2);
CheckMemberSize(struct jpeg_source_mgr,bytes_in_buffer,4,2,41087);
CheckOffset(struct jpeg_source_mgr,bytes_in_buffer,4,2,41087);
CheckMemberSize(struct jpeg_source_mgr,init_source,4,2,41089);
CheckOffset(struct jpeg_source_mgr,init_source,8,2,41089);
CheckMemberSize(struct jpeg_source_mgr,fill_input_buffer,4,2,41091);
CheckOffset(struct jpeg_source_mgr,fill_input_buffer,12,2,41091);
CheckMemberSize(struct jpeg_source_mgr,skip_input_data,4,2,41094);
CheckOffset(struct jpeg_source_mgr,skip_input_data,16,2,41094);
CheckMemberSize(struct jpeg_source_mgr,resync_to_restart,4,2,41097);
CheckOffset(struct jpeg_source_mgr,resync_to_restart,20,2,41097);
CheckMemberSize(struct jpeg_source_mgr,term_source,4,2,41098);
CheckOffset(struct jpeg_source_mgr,term_source,24,2,41098);
#elif __x86_64__
CheckTypeSize(struct jpeg_source_mgr,56, 11295, 11);
CheckMemberSize(struct jpeg_source_mgr,bytes_in_buffer,8,11,41087);
CheckOffset(struct jpeg_source_mgr,bytes_in_buffer,8,11,41087);
CheckMemberSize(struct jpeg_source_mgr,init_source,8,11,41089);
CheckOffset(struct jpeg_source_mgr,init_source,16,11,41089);
CheckMemberSize(struct jpeg_source_mgr,fill_input_buffer,8,11,41091);
CheckOffset(struct jpeg_source_mgr,fill_input_buffer,24,11,41091);
CheckMemberSize(struct jpeg_source_mgr,skip_input_data,8,11,41094);
CheckOffset(struct jpeg_source_mgr,skip_input_data,32,11,41094);
CheckMemberSize(struct jpeg_source_mgr,resync_to_restart,8,11,41097);
CheckOffset(struct jpeg_source_mgr,resync_to_restart,40,11,41097);
CheckMemberSize(struct jpeg_source_mgr,term_source,8,11,41098);
CheckOffset(struct jpeg_source_mgr,term_source,48,11,41098);
#elif __ia64__
CheckTypeSize(struct jpeg_source_mgr,56, 11295, 3);
CheckMemberSize(struct jpeg_source_mgr,bytes_in_buffer,8,3,41087);
CheckOffset(struct jpeg_source_mgr,bytes_in_buffer,8,3,41087);
CheckMemberSize(struct jpeg_source_mgr,init_source,8,3,41089);
CheckOffset(struct jpeg_source_mgr,init_source,16,3,41089);
CheckMemberSize(struct jpeg_source_mgr,fill_input_buffer,8,3,41091);
CheckOffset(struct jpeg_source_mgr,fill_input_buffer,24,3,41091);
CheckMemberSize(struct jpeg_source_mgr,skip_input_data,8,3,41094);
CheckOffset(struct jpeg_source_mgr,skip_input_data,32,3,41094);
CheckMemberSize(struct jpeg_source_mgr,resync_to_restart,8,3,41097);
CheckOffset(struct jpeg_source_mgr,resync_to_restart,40,3,41097);
CheckMemberSize(struct jpeg_source_mgr,term_source,8,3,41098);
CheckOffset(struct jpeg_source_mgr,term_source,48,3,41098);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct jpeg_source_mgr,28, 11295, 6);
CheckMemberSize(struct jpeg_source_mgr,bytes_in_buffer,4,6,41087);
CheckOffset(struct jpeg_source_mgr,bytes_in_buffer,4,6,41087);
CheckMemberSize(struct jpeg_source_mgr,init_source,4,6,41089);
CheckOffset(struct jpeg_source_mgr,init_source,8,6,41089);
CheckMemberSize(struct jpeg_source_mgr,fill_input_buffer,4,6,41091);
CheckOffset(struct jpeg_source_mgr,fill_input_buffer,12,6,41091);
CheckMemberSize(struct jpeg_source_mgr,skip_input_data,4,6,41094);
CheckOffset(struct jpeg_source_mgr,skip_input_data,16,6,41094);
CheckMemberSize(struct jpeg_source_mgr,resync_to_restart,4,6,41097);
CheckOffset(struct jpeg_source_mgr,resync_to_restart,20,6,41097);
CheckMemberSize(struct jpeg_source_mgr,term_source,4,6,41098);
CheckOffset(struct jpeg_source_mgr,term_source,24,6,41098);
#elif __powerpc64__
CheckTypeSize(struct jpeg_source_mgr,56, 11295, 9);
CheckMemberSize(struct jpeg_source_mgr,bytes_in_buffer,8,9,41087);
CheckOffset(struct jpeg_source_mgr,bytes_in_buffer,8,9,41087);
CheckMemberSize(struct jpeg_source_mgr,init_source,8,9,41089);
CheckOffset(struct jpeg_source_mgr,init_source,16,9,41089);
CheckMemberSize(struct jpeg_source_mgr,fill_input_buffer,8,9,41091);
CheckOffset(struct jpeg_source_mgr,fill_input_buffer,24,9,41091);
CheckMemberSize(struct jpeg_source_mgr,skip_input_data,8,9,41094);
CheckOffset(struct jpeg_source_mgr,skip_input_data,32,9,41094);
CheckMemberSize(struct jpeg_source_mgr,resync_to_restart,8,9,41097);
CheckOffset(struct jpeg_source_mgr,resync_to_restart,40,9,41097);
CheckMemberSize(struct jpeg_source_mgr,term_source,8,9,41098);
CheckOffset(struct jpeg_source_mgr,term_source,48,9,41098);
#elif __s390__ && !__s390x__
CheckTypeSize(struct jpeg_source_mgr,28, 11295, 10);
CheckMemberSize(struct jpeg_source_mgr,bytes_in_buffer,4,10,41087);
CheckOffset(struct jpeg_source_mgr,bytes_in_buffer,4,10,41087);
CheckMemberSize(struct jpeg_source_mgr,init_source,4,10,41089);
CheckOffset(struct jpeg_source_mgr,init_source,8,10,41089);
CheckMemberSize(struct jpeg_source_mgr,fill_input_buffer,4,10,41091);
CheckOffset(struct jpeg_source_mgr,fill_input_buffer,12,10,41091);
CheckMemberSize(struct jpeg_source_mgr,skip_input_data,4,10,41094);
CheckOffset(struct jpeg_source_mgr,skip_input_data,16,10,41094);
CheckMemberSize(struct jpeg_source_mgr,resync_to_restart,4,10,41097);
CheckOffset(struct jpeg_source_mgr,resync_to_restart,20,10,41097);
CheckMemberSize(struct jpeg_source_mgr,term_source,4,10,41098);
CheckOffset(struct jpeg_source_mgr,term_source,24,10,41098);
#elif __s390x__
CheckTypeSize(struct jpeg_source_mgr,56, 11295, 12);
CheckMemberSize(struct jpeg_source_mgr,bytes_in_buffer,8,12,41087);
CheckOffset(struct jpeg_source_mgr,bytes_in_buffer,8,12,41087);
CheckMemberSize(struct jpeg_source_mgr,init_source,8,12,41089);
CheckOffset(struct jpeg_source_mgr,init_source,16,12,41089);
CheckMemberSize(struct jpeg_source_mgr,fill_input_buffer,8,12,41091);
CheckOffset(struct jpeg_source_mgr,fill_input_buffer,24,12,41091);
CheckMemberSize(struct jpeg_source_mgr,skip_input_data,8,12,41094);
CheckOffset(struct jpeg_source_mgr,skip_input_data,32,12,41094);
CheckMemberSize(struct jpeg_source_mgr,resync_to_restart,8,12,41097);
CheckOffset(struct jpeg_source_mgr,resync_to_restart,40,12,41097);
CheckMemberSize(struct jpeg_source_mgr,term_source,8,12,41098);
CheckOffset(struct jpeg_source_mgr,term_source,48,12,41098);
#elif 1
CheckTypeSize(struct jpeg_source_mgr,0, 11295, 1);
Msg("Missing member data for jpeg_source_mgr on All\n");
CheckOffset(struct jpeg_source_mgr,next_input_byte,0,1,41086);
CheckOffset(struct jpeg_source_mgr,bytes_in_buffer,0,1,41087);
CheckOffset(struct jpeg_source_mgr,init_source,0,1,41089);
CheckOffset(struct jpeg_source_mgr,fill_input_buffer,0,1,41091);
CheckOffset(struct jpeg_source_mgr,skip_input_data,0,1,41094);
CheckOffset(struct jpeg_source_mgr,resync_to_restart,0,1,41097);
CheckOffset(struct jpeg_source_mgr,term_source,0,1,41098);
#endif

#if __i386__
CheckTypeSize(JOCTET,1, 11296, 2);
#elif __x86_64__
CheckTypeSize(JOCTET,1, 11296, 11);
#elif __ia64__
CheckTypeSize(JOCTET,1, 11296, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(JOCTET,1, 11296, 6);
#elif __powerpc64__
CheckTypeSize(JOCTET,1, 11296, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(JOCTET,1, 11296, 10);
#elif __s390x__
CheckTypeSize(JOCTET,1, 11296, 12);
#elif 1
CheckTypeSize(JOCTET,0, 11296, 1);
#endif

#if __i386__
CheckTypeSize(const JOCTET,1, 11297, 2);
#elif __x86_64__
CheckTypeSize(const JOCTET,1, 11297, 11);
#elif __ia64__
CheckTypeSize(const JOCTET,1, 11297, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(const JOCTET,1, 11297, 6);
#elif __powerpc64__
CheckTypeSize(const JOCTET,1, 11297, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(const JOCTET,1, 11297, 10);
#elif __s390x__
CheckTypeSize(const JOCTET,1, 11297, 12);
#elif 1
CheckTypeSize(const JOCTET,0, 11297, 1);
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#elif 1
#endif

#if __i386__
CheckTypeSize(struct jpeg_decompress_struct *,4, 11299, 2);
#elif __x86_64__
CheckTypeSize(struct jpeg_decompress_struct *,8, 11299, 11);
#elif __ia64__
CheckTypeSize(struct jpeg_decompress_struct *,8, 11299, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct jpeg_decompress_struct *,4, 11299, 6);
#elif __powerpc64__
CheckTypeSize(struct jpeg_decompress_struct *,8, 11299, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(struct jpeg_decompress_struct *,4, 11299, 10);
#elif __s390x__
CheckTypeSize(struct jpeg_decompress_struct *,8, 11299, 12);
#elif 1
CheckTypeSize(struct jpeg_decompress_struct *,0, 11299, 1);
#endif

#if __i386__
CheckTypeSize(j_decompress_ptr,4, 11300, 2);
#elif __x86_64__
CheckTypeSize(j_decompress_ptr,8, 11300, 11);
#elif __ia64__
CheckTypeSize(j_decompress_ptr,8, 11300, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(j_decompress_ptr,4, 11300, 6);
#elif __powerpc64__
CheckTypeSize(j_decompress_ptr,8, 11300, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(j_decompress_ptr,4, 11300, 10);
#elif __s390x__
CheckTypeSize(j_decompress_ptr,8, 11300, 12);
#elif 1
CheckTypeSize(j_decompress_ptr,0, 11300, 1);
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#elif 1
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#elif 1
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#elif 1
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#elif 1
#endif

#if __i386__
CheckTypeSize(struct jpeg_source_mgr *,4, 11305, 2);
#elif __x86_64__
CheckTypeSize(struct jpeg_source_mgr *,8, 11305, 11);
#elif __ia64__
CheckTypeSize(struct jpeg_source_mgr *,8, 11305, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct jpeg_source_mgr *,4, 11305, 6);
#elif __powerpc64__
CheckTypeSize(struct jpeg_source_mgr *,8, 11305, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(struct jpeg_source_mgr *,4, 11305, 10);
#elif __s390x__
CheckTypeSize(struct jpeg_source_mgr *,8, 11305, 12);
#elif 1
CheckTypeSize(struct jpeg_source_mgr *,0, 11305, 1);
#endif

#if __i386__
CheckEnum("JCS_UNKNOWN",JCS_UNKNOWN,0,41103);
CheckEnum("JCS_GRAYSCALE",JCS_GRAYSCALE,1,41104);
CheckEnum("JCS_RGB",JCS_RGB,2,41105);
CheckEnum("JCS_YCbCr",JCS_YCbCr,3,41106);
CheckEnum("JCS_CMYK",JCS_CMYK,4,41107);
CheckEnum("JCS_YCCK",JCS_YCCK,5,41108);
#elif __x86_64__
CheckEnum("JCS_UNKNOWN",JCS_UNKNOWN,0,41103);
CheckEnum("JCS_GRAYSCALE",JCS_GRAYSCALE,1,41104);
CheckEnum("JCS_RGB",JCS_RGB,2,41105);
CheckEnum("JCS_YCbCr",JCS_YCbCr,3,41106);
CheckEnum("JCS_CMYK",JCS_CMYK,4,41107);
CheckEnum("JCS_YCCK",JCS_YCCK,5,41108);
#elif __ia64__
CheckEnum("JCS_UNKNOWN",JCS_UNKNOWN,0,41103);
CheckEnum("JCS_GRAYSCALE",JCS_GRAYSCALE,1,41104);
CheckEnum("JCS_RGB",JCS_RGB,2,41105);
CheckEnum("JCS_YCbCr",JCS_YCbCr,3,41106);
CheckEnum("JCS_CMYK",JCS_CMYK,4,41107);
CheckEnum("JCS_YCCK",JCS_YCCK,5,41108);
#elif __powerpc__ && !__powerpc64__
CheckEnum("JCS_UNKNOWN",JCS_UNKNOWN,0,41103);
CheckEnum("JCS_GRAYSCALE",JCS_GRAYSCALE,1,41104);
CheckEnum("JCS_RGB",JCS_RGB,2,41105);
CheckEnum("JCS_YCbCr",JCS_YCbCr,3,41106);
CheckEnum("JCS_CMYK",JCS_CMYK,4,41107);
CheckEnum("JCS_YCCK",JCS_YCCK,5,41108);
#elif __powerpc64__
CheckEnum("JCS_UNKNOWN",JCS_UNKNOWN,0,41103);
CheckEnum("JCS_GRAYSCALE",JCS_GRAYSCALE,1,41104);
CheckEnum("JCS_RGB",JCS_RGB,2,41105);
CheckEnum("JCS_YCbCr",JCS_YCbCr,3,41106);
CheckEnum("JCS_CMYK",JCS_CMYK,4,41107);
CheckEnum("JCS_YCCK",JCS_YCCK,5,41108);
#elif __s390__ && !__s390x__
CheckEnum("JCS_UNKNOWN",JCS_UNKNOWN,0,41103);
CheckEnum("JCS_GRAYSCALE",JCS_GRAYSCALE,1,41104);
CheckEnum("JCS_RGB",JCS_RGB,2,41105);
CheckEnum("JCS_YCbCr",JCS_YCbCr,3,41106);
CheckEnum("JCS_CMYK",JCS_CMYK,4,41107);
CheckEnum("JCS_YCCK",JCS_YCCK,5,41108);
#elif __s390x__
CheckEnum("JCS_UNKNOWN",JCS_UNKNOWN,0,41103);
CheckEnum("JCS_GRAYSCALE",JCS_GRAYSCALE,1,41104);
CheckEnum("JCS_RGB",JCS_RGB,2,41105);
CheckEnum("JCS_YCbCr",JCS_YCbCr,3,41106);
CheckEnum("JCS_CMYK",JCS_CMYK,4,41107);
CheckEnum("JCS_YCCK",JCS_YCCK,5,41108);
#elif 1
CheckEnum("JCS_UNKNOWN",JCS_UNKNOWN,0,41103);
CheckEnum("JCS_GRAYSCALE",JCS_GRAYSCALE,1,41104);
CheckEnum("JCS_RGB",JCS_RGB,2,41105);
CheckEnum("JCS_YCbCr",JCS_YCbCr,3,41106);
CheckEnum("JCS_CMYK",JCS_CMYK,4,41107);
CheckEnum("JCS_YCCK",JCS_YCCK,5,41108);
#endif

#if __i386__
CheckTypeSize(J_COLOR_SPACE,4, 11307, 2);
#elif __x86_64__
CheckTypeSize(J_COLOR_SPACE,4, 11307, 11);
#elif __ia64__
CheckTypeSize(J_COLOR_SPACE,4, 11307, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(J_COLOR_SPACE,4, 11307, 6);
#elif __powerpc64__
CheckTypeSize(J_COLOR_SPACE,4, 11307, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(J_COLOR_SPACE,4, 11307, 10);
#elif __s390x__
CheckTypeSize(J_COLOR_SPACE,4, 11307, 12);
#elif 1
CheckTypeSize(J_COLOR_SPACE,0, 11307, 1);
#endif

#if __i386__
CheckEnum("JDCT_ISLOW",JDCT_ISLOW,0,41116);
CheckEnum("JDCT_IFAST",JDCT_IFAST,1,41117);
CheckEnum("JDCT_FLOAT",JDCT_FLOAT,2,41118);
#elif __x86_64__
CheckEnum("JDCT_ISLOW",JDCT_ISLOW,0,41116);
CheckEnum("JDCT_IFAST",JDCT_IFAST,1,41117);
CheckEnum("JDCT_FLOAT",JDCT_FLOAT,2,41118);
#elif __ia64__
CheckEnum("JDCT_ISLOW",JDCT_ISLOW,0,41116);
CheckEnum("JDCT_IFAST",JDCT_IFAST,1,41117);
CheckEnum("JDCT_FLOAT",JDCT_FLOAT,2,41118);
#elif __powerpc__ && !__powerpc64__
CheckEnum("JDCT_ISLOW",JDCT_ISLOW,0,41116);
CheckEnum("JDCT_IFAST",JDCT_IFAST,1,41117);
CheckEnum("JDCT_FLOAT",JDCT_FLOAT,2,41118);
#elif __powerpc64__
CheckEnum("JDCT_ISLOW",JDCT_ISLOW,0,41116);
CheckEnum("JDCT_IFAST",JDCT_IFAST,1,41117);
CheckEnum("JDCT_FLOAT",JDCT_FLOAT,2,41118);
#elif __s390__ && !__s390x__
CheckEnum("JDCT_ISLOW",JDCT_ISLOW,0,41116);
CheckEnum("JDCT_IFAST",JDCT_IFAST,1,41117);
CheckEnum("JDCT_FLOAT",JDCT_FLOAT,2,41118);
#elif __s390x__
CheckEnum("JDCT_ISLOW",JDCT_ISLOW,0,41116);
CheckEnum("JDCT_IFAST",JDCT_IFAST,1,41117);
CheckEnum("JDCT_FLOAT",JDCT_FLOAT,2,41118);
#elif 1
CheckEnum("JDCT_ISLOW",JDCT_ISLOW,0,41116);
CheckEnum("JDCT_IFAST",JDCT_IFAST,1,41117);
CheckEnum("JDCT_FLOAT",JDCT_FLOAT,2,41118);
#endif

#if __i386__
CheckTypeSize(J_DCT_METHOD,4, 11309, 2);
#elif __x86_64__
CheckTypeSize(J_DCT_METHOD,4, 11309, 11);
#elif __ia64__
CheckTypeSize(J_DCT_METHOD,4, 11309, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(J_DCT_METHOD,4, 11309, 6);
#elif __powerpc64__
CheckTypeSize(J_DCT_METHOD,4, 11309, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(J_DCT_METHOD,4, 11309, 10);
#elif __s390x__
CheckTypeSize(J_DCT_METHOD,4, 11309, 12);
#elif 1
CheckTypeSize(J_DCT_METHOD,0, 11309, 1);
#endif

#if __i386__
CheckEnum("JDITHER_NONE",JDITHER_NONE,0,41123);
CheckEnum("JDITHER_ORDERED",JDITHER_ORDERED,1,41124);
CheckEnum("JDITHER_FS",JDITHER_FS,2,41125);
#elif __x86_64__
CheckEnum("JDITHER_NONE",JDITHER_NONE,0,41123);
CheckEnum("JDITHER_ORDERED",JDITHER_ORDERED,1,41124);
CheckEnum("JDITHER_FS",JDITHER_FS,2,41125);
#elif __ia64__
CheckEnum("JDITHER_NONE",JDITHER_NONE,0,41123);
CheckEnum("JDITHER_ORDERED",JDITHER_ORDERED,1,41124);
CheckEnum("JDITHER_FS",JDITHER_FS,2,41125);
#elif __powerpc__ && !__powerpc64__
CheckEnum("JDITHER_NONE",JDITHER_NONE,0,41123);
CheckEnum("JDITHER_ORDERED",JDITHER_ORDERED,1,41124);
CheckEnum("JDITHER_FS",JDITHER_FS,2,41125);
#elif __powerpc64__
CheckEnum("JDITHER_NONE",JDITHER_NONE,0,41123);
CheckEnum("JDITHER_ORDERED",JDITHER_ORDERED,1,41124);
CheckEnum("JDITHER_FS",JDITHER_FS,2,41125);
#elif __s390__ && !__s390x__
CheckEnum("JDITHER_NONE",JDITHER_NONE,0,41123);
CheckEnum("JDITHER_ORDERED",JDITHER_ORDERED,1,41124);
CheckEnum("JDITHER_FS",JDITHER_FS,2,41125);
#elif __s390x__
CheckEnum("JDITHER_NONE",JDITHER_NONE,0,41123);
CheckEnum("JDITHER_ORDERED",JDITHER_ORDERED,1,41124);
CheckEnum("JDITHER_FS",JDITHER_FS,2,41125);
#elif 1
CheckEnum("JDITHER_NONE",JDITHER_NONE,0,41123);
CheckEnum("JDITHER_ORDERED",JDITHER_ORDERED,1,41124);
CheckEnum("JDITHER_FS",JDITHER_FS,2,41125);
#endif

#if __i386__
CheckTypeSize(J_DITHER_MODE,4, 11311, 2);
#elif __x86_64__
CheckTypeSize(J_DITHER_MODE,4, 11311, 11);
#elif __ia64__
CheckTypeSize(J_DITHER_MODE,4, 11311, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(J_DITHER_MODE,4, 11311, 6);
#elif __powerpc64__
CheckTypeSize(J_DITHER_MODE,4, 11311, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(J_DITHER_MODE,4, 11311, 10);
#elif __s390x__
CheckTypeSize(J_DITHER_MODE,4, 11311, 12);
#elif 1
CheckTypeSize(J_DITHER_MODE,0, 11311, 1);
#endif

#if 1
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#elif 1
#endif

#if __i386__
CheckTypeSize(UINT16,2, 11314, 2);
#elif __x86_64__
CheckTypeSize(UINT16,2, 11314, 11);
#elif __ia64__
CheckTypeSize(UINT16,2, 11314, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(UINT16,2, 11314, 6);
#elif __powerpc64__
CheckTypeSize(UINT16,2, 11314, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(UINT16,2, 11314, 10);
#elif __s390x__
CheckTypeSize(UINT16,2, 11314, 12);
#elif 1
CheckTypeSize(UINT16,0, 11314, 1);
#endif

#if 1
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#elif 1
#endif

#if __i386__
CheckTypeSize(JQUANT_TBL,132, 11317, 2);
#elif __x86_64__
CheckTypeSize(JQUANT_TBL,132, 11317, 11);
#elif __ia64__
CheckTypeSize(JQUANT_TBL,132, 11317, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(JQUANT_TBL,132, 11317, 6);
#elif __powerpc64__
CheckTypeSize(JQUANT_TBL,132, 11317, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(JQUANT_TBL,132, 11317, 10);
#elif __s390x__
CheckTypeSize(JQUANT_TBL,132, 11317, 12);
#elif 1
CheckTypeSize(JQUANT_TBL,0, 11317, 1);
#endif

#if __i386__
CheckTypeSize(JQUANT_TBL *,4, 11318, 2);
#elif __x86_64__
CheckTypeSize(JQUANT_TBL *,8, 11318, 11);
#elif __ia64__
CheckTypeSize(JQUANT_TBL *,8, 11318, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(JQUANT_TBL *,4, 11318, 6);
#elif __powerpc64__
CheckTypeSize(JQUANT_TBL *,8, 11318, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(JQUANT_TBL *,4, 11318, 10);
#elif __s390x__
CheckTypeSize(JQUANT_TBL *,8, 11318, 12);
#elif 1
CheckTypeSize(JQUANT_TBL *,0, 11318, 1);
#endif

#if 1
#endif

#if __i386__
CheckTypeSize(UINT8,1, 11320, 2);
#elif __x86_64__
CheckTypeSize(UINT8,1, 11320, 11);
#elif __ia64__
CheckTypeSize(UINT8,1, 11320, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(UINT8,1, 11320, 6);
#elif __powerpc64__
CheckTypeSize(UINT8,1, 11320, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(UINT8,1, 11320, 10);
#elif __s390x__
CheckTypeSize(UINT8,1, 11320, 12);
#elif 1
CheckTypeSize(UINT8,0, 11320, 1);
#endif

#if 1
#endif

#if 1
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#elif 1
#endif

#if __i386__
CheckTypeSize(JHUFF_TBL,280, 11324, 2);
#elif __x86_64__
CheckTypeSize(JHUFF_TBL,280, 11324, 11);
#elif __ia64__
CheckTypeSize(JHUFF_TBL,280, 11324, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(JHUFF_TBL,280, 11324, 6);
#elif __powerpc64__
CheckTypeSize(JHUFF_TBL,280, 11324, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(JHUFF_TBL,280, 11324, 10);
#elif __s390x__
CheckTypeSize(JHUFF_TBL,280, 11324, 12);
#elif 1
CheckTypeSize(JHUFF_TBL,0, 11324, 1);
#endif

#if __i386__
CheckTypeSize(JHUFF_TBL *,4, 11325, 2);
#elif __x86_64__
CheckTypeSize(JHUFF_TBL *,8, 11325, 11);
#elif __ia64__
CheckTypeSize(JHUFF_TBL *,8, 11325, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(JHUFF_TBL *,4, 11325, 6);
#elif __powerpc64__
CheckTypeSize(JHUFF_TBL *,8, 11325, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(JHUFF_TBL *,4, 11325, 10);
#elif __s390x__
CheckTypeSize(JHUFF_TBL *,8, 11325, 12);
#elif 1
CheckTypeSize(JHUFF_TBL *,0, 11325, 1);
#endif

#if 1
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#elif 1
#endif

#if __i386__
CheckTypeSize(jpeg_component_info,84, 11328, 2);
#elif __x86_64__
CheckTypeSize(jpeg_component_info,96, 11328, 11);
#elif __ia64__
CheckTypeSize(jpeg_component_info,96, 11328, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(jpeg_component_info,84, 11328, 6);
#elif __powerpc64__
CheckTypeSize(jpeg_component_info,96, 11328, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(jpeg_component_info,84, 11328, 10);
#elif __s390x__
CheckTypeSize(jpeg_component_info,96, 11328, 12);
#elif 1
CheckTypeSize(jpeg_component_info,0, 11328, 1);
#endif

#if __i386__
CheckTypeSize(jpeg_component_info *,4, 11329, 2);
#elif __x86_64__
CheckTypeSize(jpeg_component_info *,8, 11329, 11);
#elif __ia64__
CheckTypeSize(jpeg_component_info *,8, 11329, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(jpeg_component_info *,4, 11329, 6);
#elif __powerpc64__
CheckTypeSize(jpeg_component_info *,8, 11329, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(jpeg_component_info *,4, 11329, 10);
#elif __s390x__
CheckTypeSize(jpeg_component_info *,8, 11329, 12);
#elif 1
CheckTypeSize(jpeg_component_info *,0, 11329, 1);
#endif

#if 1
#endif

#if __i386__
CheckTypeSize(struct jpeg_marker_struct,20, 11331, 2);
CheckMemberSize(struct jpeg_marker_struct,marker,1,2,41192);
CheckOffset(struct jpeg_marker_struct,marker,4,2,41192);
CheckMemberSize(struct jpeg_marker_struct,original_length,4,2,41193);
CheckOffset(struct jpeg_marker_struct,original_length,8,2,41193);
CheckMemberSize(struct jpeg_marker_struct,data_length,4,2,41194);
CheckOffset(struct jpeg_marker_struct,data_length,12,2,41194);
CheckMemberSize(struct jpeg_marker_struct,data,4,2,41195);
CheckOffset(struct jpeg_marker_struct,data,16,2,41195);
#elif __x86_64__
CheckTypeSize(struct jpeg_marker_struct,32, 11331, 11);
CheckMemberSize(struct jpeg_marker_struct,marker,1,11,41192);
CheckOffset(struct jpeg_marker_struct,marker,8,11,41192);
CheckMemberSize(struct jpeg_marker_struct,original_length,4,11,41193);
CheckOffset(struct jpeg_marker_struct,original_length,12,11,41193);
CheckMemberSize(struct jpeg_marker_struct,data_length,4,11,41194);
CheckOffset(struct jpeg_marker_struct,data_length,16,11,41194);
CheckMemberSize(struct jpeg_marker_struct,data,8,11,41195);
CheckOffset(struct jpeg_marker_struct,data,24,11,41195);
#elif __ia64__
CheckTypeSize(struct jpeg_marker_struct,32, 11331, 3);
CheckMemberSize(struct jpeg_marker_struct,marker,1,3,41192);
CheckOffset(struct jpeg_marker_struct,marker,8,3,41192);
CheckMemberSize(struct jpeg_marker_struct,original_length,4,3,41193);
CheckOffset(struct jpeg_marker_struct,original_length,12,3,41193);
CheckMemberSize(struct jpeg_marker_struct,data_length,4,3,41194);
CheckOffset(struct jpeg_marker_struct,data_length,16,3,41194);
CheckMemberSize(struct jpeg_marker_struct,data,8,3,41195);
CheckOffset(struct jpeg_marker_struct,data,24,3,41195);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct jpeg_marker_struct,20, 11331, 6);
CheckMemberSize(struct jpeg_marker_struct,marker,1,6,41192);
CheckOffset(struct jpeg_marker_struct,marker,4,6,41192);
CheckMemberSize(struct jpeg_marker_struct,original_length,4,6,41193);
CheckOffset(struct jpeg_marker_struct,original_length,8,6,41193);
CheckMemberSize(struct jpeg_marker_struct,data_length,4,6,41194);
CheckOffset(struct jpeg_marker_struct,data_length,12,6,41194);
CheckMemberSize(struct jpeg_marker_struct,data,4,6,41195);
CheckOffset(struct jpeg_marker_struct,data,16,6,41195);
#elif __powerpc64__
CheckTypeSize(struct jpeg_marker_struct,32, 11331, 9);
CheckMemberSize(struct jpeg_marker_struct,marker,1,9,41192);
CheckOffset(struct jpeg_marker_struct,marker,8,9,41192);
CheckMemberSize(struct jpeg_marker_struct,original_length,4,9,41193);
CheckOffset(struct jpeg_marker_struct,original_length,12,9,41193);
CheckMemberSize(struct jpeg_marker_struct,data_length,4,9,41194);
CheckOffset(struct jpeg_marker_struct,data_length,16,9,41194);
CheckMemberSize(struct jpeg_marker_struct,data,8,9,41195);
CheckOffset(struct jpeg_marker_struct,data,24,9,41195);
#elif __s390__ && !__s390x__
CheckTypeSize(struct jpeg_marker_struct,20, 11331, 10);
CheckMemberSize(struct jpeg_marker_struct,marker,1,10,41192);
CheckOffset(struct jpeg_marker_struct,marker,4,10,41192);
CheckMemberSize(struct jpeg_marker_struct,original_length,4,10,41193);
CheckOffset(struct jpeg_marker_struct,original_length,8,10,41193);
CheckMemberSize(struct jpeg_marker_struct,data_length,4,10,41194);
CheckOffset(struct jpeg_marker_struct,data_length,12,10,41194);
CheckMemberSize(struct jpeg_marker_struct,data,4,10,41195);
CheckOffset(struct jpeg_marker_struct,data,16,10,41195);
#elif __s390x__
CheckTypeSize(struct jpeg_marker_struct,32, 11331, 12);
CheckMemberSize(struct jpeg_marker_struct,marker,1,12,41192);
CheckOffset(struct jpeg_marker_struct,marker,8,12,41192);
CheckMemberSize(struct jpeg_marker_struct,original_length,4,12,41193);
CheckOffset(struct jpeg_marker_struct,original_length,12,12,41193);
CheckMemberSize(struct jpeg_marker_struct,data_length,4,12,41194);
CheckOffset(struct jpeg_marker_struct,data_length,16,12,41194);
CheckMemberSize(struct jpeg_marker_struct,data,8,12,41195);
CheckOffset(struct jpeg_marker_struct,data,24,12,41195);
#elif 1
CheckTypeSize(struct jpeg_marker_struct,0, 11331, 1);
Msg("Missing member data for jpeg_marker_struct on All\n");
CheckOffset(struct jpeg_marker_struct,next,0,1,41191);
CheckOffset(struct jpeg_marker_struct,marker,0,1,41192);
CheckOffset(struct jpeg_marker_struct,original_length,0,1,41193);
CheckOffset(struct jpeg_marker_struct,data_length,0,1,41194);
CheckOffset(struct jpeg_marker_struct,data,0,1,41195);
#endif

#if __i386__
CheckTypeSize(struct jpeg_marker_struct *,4, 11332, 2);
#elif __x86_64__
CheckTypeSize(struct jpeg_marker_struct *,8, 11332, 11);
#elif __ia64__
CheckTypeSize(struct jpeg_marker_struct *,8, 11332, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct jpeg_marker_struct *,4, 11332, 6);
#elif __powerpc64__
CheckTypeSize(struct jpeg_marker_struct *,8, 11332, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(struct jpeg_marker_struct *,4, 11332, 10);
#elif __s390x__
CheckTypeSize(struct jpeg_marker_struct *,8, 11332, 12);
#elif 1
CheckTypeSize(struct jpeg_marker_struct *,0, 11332, 1);
#endif

#if __i386__
CheckTypeSize(jpeg_saved_marker_ptr,4, 11333, 2);
#elif __x86_64__
CheckTypeSize(jpeg_saved_marker_ptr,8, 11333, 11);
#elif __ia64__
CheckTypeSize(jpeg_saved_marker_ptr,8, 11333, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(jpeg_saved_marker_ptr,4, 11333, 6);
#elif __powerpc64__
CheckTypeSize(jpeg_saved_marker_ptr,8, 11333, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(jpeg_saved_marker_ptr,4, 11333, 10);
#elif __s390x__
CheckTypeSize(jpeg_saved_marker_ptr,8, 11333, 12);
#elif 1
CheckTypeSize(jpeg_saved_marker_ptr,0, 11333, 1);
#endif

#if __i386__
CheckTypeSize(JOCTET *,4, 11334, 2);
#elif __x86_64__
CheckTypeSize(JOCTET *,8, 11334, 11);
#elif __ia64__
CheckTypeSize(JOCTET *,8, 11334, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(JOCTET *,4, 11334, 6);
#elif __powerpc64__
CheckTypeSize(JOCTET *,8, 11334, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(JOCTET *,4, 11334, 10);
#elif __s390x__
CheckTypeSize(JOCTET *,8, 11334, 12);
#elif 1
CheckTypeSize(JOCTET *,0, 11334, 1);
#endif

#if 1
#endif

#if 1
#endif

#if __i386__
CheckTypeSize(struct jpeg_decomp_master *,4, 11338, 2);
#elif __x86_64__
CheckTypeSize(struct jpeg_decomp_master *,8, 11338, 11);
#elif __ia64__
CheckTypeSize(struct jpeg_decomp_master *,8, 11338, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct jpeg_decomp_master *,4, 11338, 6);
#elif __powerpc64__
CheckTypeSize(struct jpeg_decomp_master *,8, 11338, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(struct jpeg_decomp_master *,4, 11338, 10);
#elif __s390x__
CheckTypeSize(struct jpeg_decomp_master *,8, 11338, 12);
#elif 1
CheckTypeSize(struct jpeg_decomp_master *,0, 11338, 1);
#endif

#if __i386__
CheckTypeSize(struct jpeg_d_main_controller *,4, 11340, 2);
#elif __x86_64__
CheckTypeSize(struct jpeg_d_main_controller *,8, 11340, 11);
#elif __ia64__
CheckTypeSize(struct jpeg_d_main_controller *,8, 11340, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct jpeg_d_main_controller *,4, 11340, 6);
#elif __powerpc64__
CheckTypeSize(struct jpeg_d_main_controller *,8, 11340, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(struct jpeg_d_main_controller *,4, 11340, 10);
#elif __s390x__
CheckTypeSize(struct jpeg_d_main_controller *,8, 11340, 12);
#elif 1
CheckTypeSize(struct jpeg_d_main_controller *,0, 11340, 1);
#endif

#if __i386__
CheckTypeSize(struct jpeg_d_coef_controller *,4, 11342, 2);
#elif __x86_64__
CheckTypeSize(struct jpeg_d_coef_controller *,8, 11342, 11);
#elif __ia64__
CheckTypeSize(struct jpeg_d_coef_controller *,8, 11342, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct jpeg_d_coef_controller *,4, 11342, 6);
#elif __powerpc64__
CheckTypeSize(struct jpeg_d_coef_controller *,8, 11342, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(struct jpeg_d_coef_controller *,4, 11342, 10);
#elif __s390x__
CheckTypeSize(struct jpeg_d_coef_controller *,8, 11342, 12);
#elif 1
CheckTypeSize(struct jpeg_d_coef_controller *,0, 11342, 1);
#endif

#if __i386__
CheckTypeSize(struct jpeg_d_post_controller *,4, 11344, 2);
#elif __x86_64__
CheckTypeSize(struct jpeg_d_post_controller *,8, 11344, 11);
#elif __ia64__
CheckTypeSize(struct jpeg_d_post_controller *,8, 11344, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct jpeg_d_post_controller *,4, 11344, 6);
#elif __powerpc64__
CheckTypeSize(struct jpeg_d_post_controller *,8, 11344, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(struct jpeg_d_post_controller *,4, 11344, 10);
#elif __s390x__
CheckTypeSize(struct jpeg_d_post_controller *,8, 11344, 12);
#elif 1
CheckTypeSize(struct jpeg_d_post_controller *,0, 11344, 1);
#endif

#if __i386__
CheckTypeSize(struct jpeg_input_controller *,4, 11346, 2);
#elif __x86_64__
CheckTypeSize(struct jpeg_input_controller *,8, 11346, 11);
#elif __ia64__
CheckTypeSize(struct jpeg_input_controller *,8, 11346, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct jpeg_input_controller *,4, 11346, 6);
#elif __powerpc64__
CheckTypeSize(struct jpeg_input_controller *,8, 11346, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(struct jpeg_input_controller *,4, 11346, 10);
#elif __s390x__
CheckTypeSize(struct jpeg_input_controller *,8, 11346, 12);
#elif 1
CheckTypeSize(struct jpeg_input_controller *,0, 11346, 1);
#endif

#if __i386__
CheckTypeSize(struct jpeg_marker_reader *,4, 11348, 2);
#elif __x86_64__
CheckTypeSize(struct jpeg_marker_reader *,8, 11348, 11);
#elif __ia64__
CheckTypeSize(struct jpeg_marker_reader *,8, 11348, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct jpeg_marker_reader *,4, 11348, 6);
#elif __powerpc64__
CheckTypeSize(struct jpeg_marker_reader *,8, 11348, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(struct jpeg_marker_reader *,4, 11348, 10);
#elif __s390x__
CheckTypeSize(struct jpeg_marker_reader *,8, 11348, 12);
#elif 1
CheckTypeSize(struct jpeg_marker_reader *,0, 11348, 1);
#endif

#if __i386__
CheckTypeSize(struct jpeg_entropy_decoder *,4, 11350, 2);
#elif __x86_64__
CheckTypeSize(struct jpeg_entropy_decoder *,8, 11350, 11);
#elif __ia64__
CheckTypeSize(struct jpeg_entropy_decoder *,8, 11350, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct jpeg_entropy_decoder *,4, 11350, 6);
#elif __powerpc64__
CheckTypeSize(struct jpeg_entropy_decoder *,8, 11350, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(struct jpeg_entropy_decoder *,4, 11350, 10);
#elif __s390x__
CheckTypeSize(struct jpeg_entropy_decoder *,8, 11350, 12);
#elif 1
CheckTypeSize(struct jpeg_entropy_decoder *,0, 11350, 1);
#endif

#if __i386__
CheckTypeSize(struct jpeg_inverse_dct *,4, 11352, 2);
#elif __x86_64__
CheckTypeSize(struct jpeg_inverse_dct *,8, 11352, 11);
#elif __ia64__
CheckTypeSize(struct jpeg_inverse_dct *,8, 11352, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct jpeg_inverse_dct *,4, 11352, 6);
#elif __powerpc64__
CheckTypeSize(struct jpeg_inverse_dct *,8, 11352, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(struct jpeg_inverse_dct *,4, 11352, 10);
#elif __s390x__
CheckTypeSize(struct jpeg_inverse_dct *,8, 11352, 12);
#elif 1
CheckTypeSize(struct jpeg_inverse_dct *,0, 11352, 1);
#endif

#if __i386__
CheckTypeSize(struct jpeg_upsampler *,4, 11354, 2);
#elif __x86_64__
CheckTypeSize(struct jpeg_upsampler *,8, 11354, 11);
#elif __ia64__
CheckTypeSize(struct jpeg_upsampler *,8, 11354, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct jpeg_upsampler *,4, 11354, 6);
#elif __powerpc64__
CheckTypeSize(struct jpeg_upsampler *,8, 11354, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(struct jpeg_upsampler *,4, 11354, 10);
#elif __s390x__
CheckTypeSize(struct jpeg_upsampler *,8, 11354, 12);
#elif 1
CheckTypeSize(struct jpeg_upsampler *,0, 11354, 1);
#endif

#if __i386__
CheckTypeSize(struct jpeg_color_deconverter *,4, 11356, 2);
#elif __x86_64__
CheckTypeSize(struct jpeg_color_deconverter *,8, 11356, 11);
#elif __ia64__
CheckTypeSize(struct jpeg_color_deconverter *,8, 11356, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct jpeg_color_deconverter *,4, 11356, 6);
#elif __powerpc64__
CheckTypeSize(struct jpeg_color_deconverter *,8, 11356, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(struct jpeg_color_deconverter *,4, 11356, 10);
#elif __s390x__
CheckTypeSize(struct jpeg_color_deconverter *,8, 11356, 12);
#elif 1
CheckTypeSize(struct jpeg_color_deconverter *,0, 11356, 1);
#endif

#if __i386__
CheckTypeSize(struct jpeg_color_quantizer *,4, 11358, 2);
#elif __x86_64__
CheckTypeSize(struct jpeg_color_quantizer *,8, 11358, 11);
#elif __ia64__
CheckTypeSize(struct jpeg_color_quantizer *,8, 11358, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct jpeg_color_quantizer *,4, 11358, 6);
#elif __powerpc64__
CheckTypeSize(struct jpeg_color_quantizer *,8, 11358, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(struct jpeg_color_quantizer *,4, 11358, 10);
#elif __s390x__
CheckTypeSize(struct jpeg_color_quantizer *,8, 11358, 12);
#elif 1
CheckTypeSize(struct jpeg_color_quantizer *,0, 11358, 1);
#endif

#if __i386__
CheckTypeSize(struct jpeg_compress_struct,372, 11359, 2);
CheckMemberSize(struct jpeg_compress_struct,mem,4,2,41225);
CheckOffset(struct jpeg_compress_struct,mem,4,2,41225);
CheckMemberSize(struct jpeg_compress_struct,progress,4,2,41226);
CheckOffset(struct jpeg_compress_struct,progress,8,2,41226);
CheckMemberSize(struct jpeg_compress_struct,client_data,4,2,41227);
CheckOffset(struct jpeg_compress_struct,client_data,12,2,41227);
CheckMemberSize(struct jpeg_compress_struct,is_decompressor,4,2,41228);
CheckOffset(struct jpeg_compress_struct,is_decompressor,16,2,41228);
CheckMemberSize(struct jpeg_compress_struct,global_state,4,2,41229);
CheckOffset(struct jpeg_compress_struct,global_state,20,2,41229);
CheckMemberSize(struct jpeg_compress_struct,dest,4,2,41237);
CheckOffset(struct jpeg_compress_struct,dest,24,2,41237);
CheckMemberSize(struct jpeg_compress_struct,image_width,4,2,41238);
CheckOffset(struct jpeg_compress_struct,image_width,28,2,41238);
CheckMemberSize(struct jpeg_compress_struct,image_height,4,2,41239);
CheckOffset(struct jpeg_compress_struct,image_height,32,2,41239);
CheckMemberSize(struct jpeg_compress_struct,input_components,4,2,41240);
CheckOffset(struct jpeg_compress_struct,input_components,36,2,41240);
CheckMemberSize(struct jpeg_compress_struct,in_color_space,4,2,41241);
CheckOffset(struct jpeg_compress_struct,in_color_space,40,2,41241);
CheckMemberSize(struct jpeg_compress_struct,input_gamma,8,2,41242);
CheckOffset(struct jpeg_compress_struct,input_gamma,44,2,41242);
CheckMemberSize(struct jpeg_compress_struct,data_precision,4,2,41243);
CheckOffset(struct jpeg_compress_struct,data_precision,52,2,41243);
CheckMemberSize(struct jpeg_compress_struct,num_components,4,2,41244);
CheckOffset(struct jpeg_compress_struct,num_components,56,2,41244);
CheckMemberSize(struct jpeg_compress_struct,jpeg_color_space,4,2,41245);
CheckOffset(struct jpeg_compress_struct,jpeg_color_space,60,2,41245);
CheckMemberSize(struct jpeg_compress_struct,comp_info,4,2,41246);
CheckOffset(struct jpeg_compress_struct,comp_info,64,2,41246);
CheckMemberSize(struct jpeg_compress_struct,quant_tbl_ptrs,16,2,41247);
CheckOffset(struct jpeg_compress_struct,quant_tbl_ptrs,68,2,41247);
CheckMemberSize(struct jpeg_compress_struct,dc_huff_tbl_ptrs,16,2,41248);
CheckOffset(struct jpeg_compress_struct,dc_huff_tbl_ptrs,84,2,41248);
CheckMemberSize(struct jpeg_compress_struct,ac_huff_tbl_ptrs,16,2,41249);
CheckOffset(struct jpeg_compress_struct,ac_huff_tbl_ptrs,100,2,41249);
CheckMemberSize(struct jpeg_compress_struct,arith_dc_L,16,2,41250);
CheckOffset(struct jpeg_compress_struct,arith_dc_L,116,2,41250);
CheckMemberSize(struct jpeg_compress_struct,arith_dc_U,16,2,41251);
CheckOffset(struct jpeg_compress_struct,arith_dc_U,132,2,41251);
CheckMemberSize(struct jpeg_compress_struct,arith_ac_K,16,2,41252);
CheckOffset(struct jpeg_compress_struct,arith_ac_K,148,2,41252);
CheckMemberSize(struct jpeg_compress_struct,num_scans,4,2,41253);
CheckOffset(struct jpeg_compress_struct,num_scans,164,2,41253);
CheckMemberSize(struct jpeg_compress_struct,scan_info,4,2,41260);
CheckOffset(struct jpeg_compress_struct,scan_info,168,2,41260);
CheckMemberSize(struct jpeg_compress_struct,raw_data_in,4,2,41261);
CheckOffset(struct jpeg_compress_struct,raw_data_in,172,2,41261);
CheckMemberSize(struct jpeg_compress_struct,arith_code,4,2,41262);
CheckOffset(struct jpeg_compress_struct,arith_code,176,2,41262);
CheckMemberSize(struct jpeg_compress_struct,optimize_coding,4,2,41263);
CheckOffset(struct jpeg_compress_struct,optimize_coding,180,2,41263);
CheckMemberSize(struct jpeg_compress_struct,CCIR601_sampling,4,2,41264);
CheckOffset(struct jpeg_compress_struct,CCIR601_sampling,184,2,41264);
CheckMemberSize(struct jpeg_compress_struct,smoothing_factor,4,2,41265);
CheckOffset(struct jpeg_compress_struct,smoothing_factor,188,2,41265);
CheckMemberSize(struct jpeg_compress_struct,dct_method,4,2,41266);
CheckOffset(struct jpeg_compress_struct,dct_method,192,2,41266);
CheckMemberSize(struct jpeg_compress_struct,restart_interval,4,2,41267);
CheckOffset(struct jpeg_compress_struct,restart_interval,196,2,41267);
CheckMemberSize(struct jpeg_compress_struct,restart_in_rows,4,2,41268);
CheckOffset(struct jpeg_compress_struct,restart_in_rows,200,2,41268);
CheckMemberSize(struct jpeg_compress_struct,write_JFIF_header,4,2,41269);
CheckOffset(struct jpeg_compress_struct,write_JFIF_header,204,2,41269);
CheckMemberSize(struct jpeg_compress_struct,JFIF_major_version,1,2,41270);
CheckOffset(struct jpeg_compress_struct,JFIF_major_version,208,2,41270);
CheckMemberSize(struct jpeg_compress_struct,JFIF_minor_version,1,2,41271);
CheckOffset(struct jpeg_compress_struct,JFIF_minor_version,209,2,41271);
CheckMemberSize(struct jpeg_compress_struct,density_unit,1,2,41272);
CheckOffset(struct jpeg_compress_struct,density_unit,210,2,41272);
CheckMemberSize(struct jpeg_compress_struct,X_density,2,2,41273);
CheckOffset(struct jpeg_compress_struct,X_density,212,2,41273);
CheckMemberSize(struct jpeg_compress_struct,Y_density,2,2,41274);
CheckOffset(struct jpeg_compress_struct,Y_density,214,2,41274);
CheckMemberSize(struct jpeg_compress_struct,write_Adobe_marker,4,2,41275);
CheckOffset(struct jpeg_compress_struct,write_Adobe_marker,216,2,41275);
CheckMemberSize(struct jpeg_compress_struct,next_scanline,4,2,41276);
CheckOffset(struct jpeg_compress_struct,next_scanline,220,2,41276);
CheckMemberSize(struct jpeg_compress_struct,progressive_mode,4,2,41277);
CheckOffset(struct jpeg_compress_struct,progressive_mode,224,2,41277);
CheckMemberSize(struct jpeg_compress_struct,max_h_samp_factor,4,2,41278);
CheckOffset(struct jpeg_compress_struct,max_h_samp_factor,228,2,41278);
CheckMemberSize(struct jpeg_compress_struct,max_v_samp_factor,4,2,41279);
CheckOffset(struct jpeg_compress_struct,max_v_samp_factor,232,2,41279);
CheckMemberSize(struct jpeg_compress_struct,total_iMCU_rows,4,2,41280);
CheckOffset(struct jpeg_compress_struct,total_iMCU_rows,236,2,41280);
CheckMemberSize(struct jpeg_compress_struct,comps_in_scan,4,2,41281);
CheckOffset(struct jpeg_compress_struct,comps_in_scan,240,2,41281);
CheckMemberSize(struct jpeg_compress_struct,cur_comp_info,16,2,41282);
CheckOffset(struct jpeg_compress_struct,cur_comp_info,244,2,41282);
CheckMemberSize(struct jpeg_compress_struct,MCUs_per_row,4,2,41283);
CheckOffset(struct jpeg_compress_struct,MCUs_per_row,260,2,41283);
CheckMemberSize(struct jpeg_compress_struct,MCU_rows_in_scan,4,2,41284);
CheckOffset(struct jpeg_compress_struct,MCU_rows_in_scan,264,2,41284);
CheckMemberSize(struct jpeg_compress_struct,blocks_in_MCU,4,2,41285);
CheckOffset(struct jpeg_compress_struct,blocks_in_MCU,268,2,41285);
CheckMemberSize(struct jpeg_compress_struct,MCU_membership,40,2,41286);
CheckOffset(struct jpeg_compress_struct,MCU_membership,272,2,41286);
CheckMemberSize(struct jpeg_compress_struct,Ss,4,2,41287);
CheckOffset(struct jpeg_compress_struct,Ss,312,2,41287);
CheckMemberSize(struct jpeg_compress_struct,Se,4,2,41288);
CheckOffset(struct jpeg_compress_struct,Se,316,2,41288);
CheckMemberSize(struct jpeg_compress_struct,Ah,4,2,41289);
CheckOffset(struct jpeg_compress_struct,Ah,320,2,41289);
CheckMemberSize(struct jpeg_compress_struct,Al,4,2,41290);
CheckOffset(struct jpeg_compress_struct,Al,324,2,41290);
CheckMemberSize(struct jpeg_compress_struct,master,4,2,41291);
CheckOffset(struct jpeg_compress_struct,master,328,2,41291);
CheckMemberSize(struct jpeg_compress_struct,main,4,2,41292);
CheckOffset(struct jpeg_compress_struct,main,332,2,41292);
CheckMemberSize(struct jpeg_compress_struct,prep,4,2,41293);
CheckOffset(struct jpeg_compress_struct,prep,336,2,41293);
CheckMemberSize(struct jpeg_compress_struct,coef,4,2,41294);
CheckOffset(struct jpeg_compress_struct,coef,340,2,41294);
CheckMemberSize(struct jpeg_compress_struct,marker,4,2,41295);
CheckOffset(struct jpeg_compress_struct,marker,344,2,41295);
CheckMemberSize(struct jpeg_compress_struct,cconvert,4,2,41296);
CheckOffset(struct jpeg_compress_struct,cconvert,348,2,41296);
CheckMemberSize(struct jpeg_compress_struct,downsample,4,2,41297);
CheckOffset(struct jpeg_compress_struct,downsample,352,2,41297);
CheckMemberSize(struct jpeg_compress_struct,fdct,4,2,41298);
CheckOffset(struct jpeg_compress_struct,fdct,356,2,41298);
CheckMemberSize(struct jpeg_compress_struct,entropy,4,2,41299);
CheckOffset(struct jpeg_compress_struct,entropy,360,2,41299);
CheckMemberSize(struct jpeg_compress_struct,script_space,4,2,41300);
CheckOffset(struct jpeg_compress_struct,script_space,364,2,41300);
CheckMemberSize(struct jpeg_compress_struct,script_space_size,4,2,41301);
CheckOffset(struct jpeg_compress_struct,script_space_size,368,2,41301);
#elif __x86_64__
CheckTypeSize(struct jpeg_compress_struct,520, 11359, 11);
CheckMemberSize(struct jpeg_compress_struct,mem,8,11,41225);
CheckOffset(struct jpeg_compress_struct,mem,8,11,41225);
CheckMemberSize(struct jpeg_compress_struct,progress,8,11,41226);
CheckOffset(struct jpeg_compress_struct,progress,16,11,41226);
CheckMemberSize(struct jpeg_compress_struct,client_data,8,11,41227);
CheckOffset(struct jpeg_compress_struct,client_data,24,11,41227);
CheckMemberSize(struct jpeg_compress_struct,is_decompressor,4,11,41228);
CheckOffset(struct jpeg_compress_struct,is_decompressor,32,11,41228);
CheckMemberSize(struct jpeg_compress_struct,global_state,4,11,41229);
CheckOffset(struct jpeg_compress_struct,global_state,36,11,41229);
CheckMemberSize(struct jpeg_compress_struct,dest,8,11,41237);
CheckOffset(struct jpeg_compress_struct,dest,40,11,41237);
CheckMemberSize(struct jpeg_compress_struct,image_width,4,11,41238);
CheckOffset(struct jpeg_compress_struct,image_width,48,11,41238);
CheckMemberSize(struct jpeg_compress_struct,image_height,4,11,41239);
CheckOffset(struct jpeg_compress_struct,image_height,52,11,41239);
CheckMemberSize(struct jpeg_compress_struct,input_components,4,11,41240);
CheckOffset(struct jpeg_compress_struct,input_components,56,11,41240);
CheckMemberSize(struct jpeg_compress_struct,in_color_space,4,11,41241);
CheckOffset(struct jpeg_compress_struct,in_color_space,60,11,41241);
CheckMemberSize(struct jpeg_compress_struct,input_gamma,8,11,41242);
CheckOffset(struct jpeg_compress_struct,input_gamma,64,11,41242);
CheckMemberSize(struct jpeg_compress_struct,data_precision,4,11,41243);
CheckOffset(struct jpeg_compress_struct,data_precision,72,11,41243);
CheckMemberSize(struct jpeg_compress_struct,num_components,4,11,41244);
CheckOffset(struct jpeg_compress_struct,num_components,76,11,41244);
CheckMemberSize(struct jpeg_compress_struct,jpeg_color_space,4,11,41245);
CheckOffset(struct jpeg_compress_struct,jpeg_color_space,80,11,41245);
CheckMemberSize(struct jpeg_compress_struct,comp_info,8,11,41246);
CheckOffset(struct jpeg_compress_struct,comp_info,88,11,41246);
CheckMemberSize(struct jpeg_compress_struct,quant_tbl_ptrs,32,11,41247);
CheckOffset(struct jpeg_compress_struct,quant_tbl_ptrs,96,11,41247);
CheckMemberSize(struct jpeg_compress_struct,dc_huff_tbl_ptrs,32,11,41248);
CheckOffset(struct jpeg_compress_struct,dc_huff_tbl_ptrs,128,11,41248);
CheckMemberSize(struct jpeg_compress_struct,ac_huff_tbl_ptrs,32,11,41249);
CheckOffset(struct jpeg_compress_struct,ac_huff_tbl_ptrs,160,11,41249);
CheckMemberSize(struct jpeg_compress_struct,arith_dc_L,16,11,41250);
CheckOffset(struct jpeg_compress_struct,arith_dc_L,192,11,41250);
CheckMemberSize(struct jpeg_compress_struct,arith_dc_U,16,11,41251);
CheckOffset(struct jpeg_compress_struct,arith_dc_U,208,11,41251);
CheckMemberSize(struct jpeg_compress_struct,arith_ac_K,16,11,41252);
CheckOffset(struct jpeg_compress_struct,arith_ac_K,224,11,41252);
CheckMemberSize(struct jpeg_compress_struct,num_scans,4,11,41253);
CheckOffset(struct jpeg_compress_struct,num_scans,240,11,41253);
CheckMemberSize(struct jpeg_compress_struct,scan_info,8,11,41260);
CheckOffset(struct jpeg_compress_struct,scan_info,248,11,41260);
CheckMemberSize(struct jpeg_compress_struct,raw_data_in,4,11,41261);
CheckOffset(struct jpeg_compress_struct,raw_data_in,256,11,41261);
CheckMemberSize(struct jpeg_compress_struct,arith_code,4,11,41262);
CheckOffset(struct jpeg_compress_struct,arith_code,260,11,41262);
CheckMemberSize(struct jpeg_compress_struct,optimize_coding,4,11,41263);
CheckOffset(struct jpeg_compress_struct,optimize_coding,264,11,41263);
CheckMemberSize(struct jpeg_compress_struct,CCIR601_sampling,4,11,41264);
CheckOffset(struct jpeg_compress_struct,CCIR601_sampling,268,11,41264);
CheckMemberSize(struct jpeg_compress_struct,smoothing_factor,4,11,41265);
CheckOffset(struct jpeg_compress_struct,smoothing_factor,272,11,41265);
CheckMemberSize(struct jpeg_compress_struct,dct_method,4,11,41266);
CheckOffset(struct jpeg_compress_struct,dct_method,276,11,41266);
CheckMemberSize(struct jpeg_compress_struct,restart_interval,4,11,41267);
CheckOffset(struct jpeg_compress_struct,restart_interval,280,11,41267);
CheckMemberSize(struct jpeg_compress_struct,restart_in_rows,4,11,41268);
CheckOffset(struct jpeg_compress_struct,restart_in_rows,284,11,41268);
CheckMemberSize(struct jpeg_compress_struct,write_JFIF_header,4,11,41269);
CheckOffset(struct jpeg_compress_struct,write_JFIF_header,288,11,41269);
CheckMemberSize(struct jpeg_compress_struct,JFIF_major_version,1,11,41270);
CheckOffset(struct jpeg_compress_struct,JFIF_major_version,292,11,41270);
CheckMemberSize(struct jpeg_compress_struct,JFIF_minor_version,1,11,41271);
CheckOffset(struct jpeg_compress_struct,JFIF_minor_version,293,11,41271);
CheckMemberSize(struct jpeg_compress_struct,density_unit,1,11,41272);
CheckOffset(struct jpeg_compress_struct,density_unit,294,11,41272);
CheckMemberSize(struct jpeg_compress_struct,X_density,2,11,41273);
CheckOffset(struct jpeg_compress_struct,X_density,296,11,41273);
CheckMemberSize(struct jpeg_compress_struct,Y_density,2,11,41274);
CheckOffset(struct jpeg_compress_struct,Y_density,298,11,41274);
CheckMemberSize(struct jpeg_compress_struct,write_Adobe_marker,4,11,41275);
CheckOffset(struct jpeg_compress_struct,write_Adobe_marker,300,11,41275);
CheckMemberSize(struct jpeg_compress_struct,next_scanline,4,11,41276);
CheckOffset(struct jpeg_compress_struct,next_scanline,304,11,41276);
CheckMemberSize(struct jpeg_compress_struct,progressive_mode,4,11,41277);
CheckOffset(struct jpeg_compress_struct,progressive_mode,308,11,41277);
CheckMemberSize(struct jpeg_compress_struct,max_h_samp_factor,4,11,41278);
CheckOffset(struct jpeg_compress_struct,max_h_samp_factor,312,11,41278);
CheckMemberSize(struct jpeg_compress_struct,max_v_samp_factor,4,11,41279);
CheckOffset(struct jpeg_compress_struct,max_v_samp_factor,316,11,41279);
CheckMemberSize(struct jpeg_compress_struct,total_iMCU_rows,4,11,41280);
CheckOffset(struct jpeg_compress_struct,total_iMCU_rows,320,11,41280);
CheckMemberSize(struct jpeg_compress_struct,comps_in_scan,4,11,41281);
CheckOffset(struct jpeg_compress_struct,comps_in_scan,324,11,41281);
CheckMemberSize(struct jpeg_compress_struct,cur_comp_info,32,11,41282);
CheckOffset(struct jpeg_compress_struct,cur_comp_info,328,11,41282);
CheckMemberSize(struct jpeg_compress_struct,MCUs_per_row,4,11,41283);
CheckOffset(struct jpeg_compress_struct,MCUs_per_row,360,11,41283);
CheckMemberSize(struct jpeg_compress_struct,MCU_rows_in_scan,4,11,41284);
CheckOffset(struct jpeg_compress_struct,MCU_rows_in_scan,364,11,41284);
CheckMemberSize(struct jpeg_compress_struct,blocks_in_MCU,4,11,41285);
CheckOffset(struct jpeg_compress_struct,blocks_in_MCU,368,11,41285);
CheckMemberSize(struct jpeg_compress_struct,MCU_membership,40,11,41286);
CheckOffset(struct jpeg_compress_struct,MCU_membership,372,11,41286);
CheckMemberSize(struct jpeg_compress_struct,Ss,4,11,41287);
CheckOffset(struct jpeg_compress_struct,Ss,412,11,41287);
CheckMemberSize(struct jpeg_compress_struct,Se,4,11,41288);
CheckOffset(struct jpeg_compress_struct,Se,416,11,41288);
CheckMemberSize(struct jpeg_compress_struct,Ah,4,11,41289);
CheckOffset(struct jpeg_compress_struct,Ah,420,11,41289);
CheckMemberSize(struct jpeg_compress_struct,Al,4,11,41290);
CheckOffset(struct jpeg_compress_struct,Al,424,11,41290);
CheckMemberSize(struct jpeg_compress_struct,master,8,11,41291);
CheckOffset(struct jpeg_compress_struct,master,432,11,41291);
CheckMemberSize(struct jpeg_compress_struct,main,8,11,41292);
CheckOffset(struct jpeg_compress_struct,main,440,11,41292);
CheckMemberSize(struct jpeg_compress_struct,prep,8,11,41293);
CheckOffset(struct jpeg_compress_struct,prep,448,11,41293);
CheckMemberSize(struct jpeg_compress_struct,coef,8,11,41294);
CheckOffset(struct jpeg_compress_struct,coef,456,11,41294);
CheckMemberSize(struct jpeg_compress_struct,marker,8,11,41295);
CheckOffset(struct jpeg_compress_struct,marker,464,11,41295);
CheckMemberSize(struct jpeg_compress_struct,cconvert,8,11,41296);
CheckOffset(struct jpeg_compress_struct,cconvert,472,11,41296);
CheckMemberSize(struct jpeg_compress_struct,downsample,8,11,41297);
CheckOffset(struct jpeg_compress_struct,downsample,480,11,41297);
CheckMemberSize(struct jpeg_compress_struct,fdct,8,11,41298);
CheckOffset(struct jpeg_compress_struct,fdct,488,11,41298);
CheckMemberSize(struct jpeg_compress_struct,entropy,8,11,41299);
CheckOffset(struct jpeg_compress_struct,entropy,496,11,41299);
CheckMemberSize(struct jpeg_compress_struct,script_space,8,11,41300);
CheckOffset(struct jpeg_compress_struct,script_space,504,11,41300);
CheckMemberSize(struct jpeg_compress_struct,script_space_size,4,11,41301);
CheckOffset(struct jpeg_compress_struct,script_space_size,512,11,41301);
#elif __ia64__
CheckTypeSize(struct jpeg_compress_struct,520, 11359, 3);
CheckMemberSize(struct jpeg_compress_struct,mem,8,3,41225);
CheckOffset(struct jpeg_compress_struct,mem,8,3,41225);
CheckMemberSize(struct jpeg_compress_struct,progress,8,3,41226);
CheckOffset(struct jpeg_compress_struct,progress,16,3,41226);
CheckMemberSize(struct jpeg_compress_struct,client_data,8,3,41227);
CheckOffset(struct jpeg_compress_struct,client_data,24,3,41227);
CheckMemberSize(struct jpeg_compress_struct,is_decompressor,4,3,41228);
CheckOffset(struct jpeg_compress_struct,is_decompressor,32,3,41228);
CheckMemberSize(struct jpeg_compress_struct,global_state,4,3,41229);
CheckOffset(struct jpeg_compress_struct,global_state,36,3,41229);
CheckMemberSize(struct jpeg_compress_struct,dest,8,3,41237);
CheckOffset(struct jpeg_compress_struct,dest,40,3,41237);
CheckMemberSize(struct jpeg_compress_struct,image_width,4,3,41238);
CheckOffset(struct jpeg_compress_struct,image_width,48,3,41238);
CheckMemberSize(struct jpeg_compress_struct,image_height,4,3,41239);
CheckOffset(struct jpeg_compress_struct,image_height,52,3,41239);
CheckMemberSize(struct jpeg_compress_struct,input_components,4,3,41240);
CheckOffset(struct jpeg_compress_struct,input_components,56,3,41240);
CheckMemberSize(struct jpeg_compress_struct,in_color_space,4,3,41241);
CheckOffset(struct jpeg_compress_struct,in_color_space,60,3,41241);
CheckMemberSize(struct jpeg_compress_struct,input_gamma,8,3,41242);
CheckOffset(struct jpeg_compress_struct,input_gamma,64,3,41242);
CheckMemberSize(struct jpeg_compress_struct,data_precision,4,3,41243);
CheckOffset(struct jpeg_compress_struct,data_precision,72,3,41243);
CheckMemberSize(struct jpeg_compress_struct,num_components,4,3,41244);
CheckOffset(struct jpeg_compress_struct,num_components,76,3,41244);
CheckMemberSize(struct jpeg_compress_struct,jpeg_color_space,4,3,41245);
CheckOffset(struct jpeg_compress_struct,jpeg_color_space,80,3,41245);
CheckMemberSize(struct jpeg_compress_struct,comp_info,8,3,41246);
CheckOffset(struct jpeg_compress_struct,comp_info,88,3,41246);
CheckMemberSize(struct jpeg_compress_struct,quant_tbl_ptrs,32,3,41247);
CheckOffset(struct jpeg_compress_struct,quant_tbl_ptrs,96,3,41247);
CheckMemberSize(struct jpeg_compress_struct,dc_huff_tbl_ptrs,32,3,41248);
CheckOffset(struct jpeg_compress_struct,dc_huff_tbl_ptrs,128,3,41248);
CheckMemberSize(struct jpeg_compress_struct,ac_huff_tbl_ptrs,32,3,41249);
CheckOffset(struct jpeg_compress_struct,ac_huff_tbl_ptrs,160,3,41249);
CheckMemberSize(struct jpeg_compress_struct,arith_dc_L,16,3,41250);
CheckOffset(struct jpeg_compress_struct,arith_dc_L,192,3,41250);
CheckMemberSize(struct jpeg_compress_struct,arith_dc_U,16,3,41251);
CheckOffset(struct jpeg_compress_struct,arith_dc_U,208,3,41251);
CheckMemberSize(struct jpeg_compress_struct,arith_ac_K,16,3,41252);
CheckOffset(struct jpeg_compress_struct,arith_ac_K,224,3,41252);
CheckMemberSize(struct jpeg_compress_struct,num_scans,4,3,41253);
CheckOffset(struct jpeg_compress_struct,num_scans,240,3,41253);
CheckMemberSize(struct jpeg_compress_struct,scan_info,8,3,41260);
CheckOffset(struct jpeg_compress_struct,scan_info,248,3,41260);
CheckMemberSize(struct jpeg_compress_struct,raw_data_in,4,3,41261);
CheckOffset(struct jpeg_compress_struct,raw_data_in,256,3,41261);
CheckMemberSize(struct jpeg_compress_struct,arith_code,4,3,41262);
CheckOffset(struct jpeg_compress_struct,arith_code,260,3,41262);
CheckMemberSize(struct jpeg_compress_struct,optimize_coding,4,3,41263);
CheckOffset(struct jpeg_compress_struct,optimize_coding,264,3,41263);
CheckMemberSize(struct jpeg_compress_struct,CCIR601_sampling,4,3,41264);
CheckOffset(struct jpeg_compress_struct,CCIR601_sampling,268,3,41264);
CheckMemberSize(struct jpeg_compress_struct,smoothing_factor,4,3,41265);
CheckOffset(struct jpeg_compress_struct,smoothing_factor,272,3,41265);
CheckMemberSize(struct jpeg_compress_struct,dct_method,4,3,41266);
CheckOffset(struct jpeg_compress_struct,dct_method,276,3,41266);
CheckMemberSize(struct jpeg_compress_struct,restart_interval,4,3,41267);
CheckOffset(struct jpeg_compress_struct,restart_interval,280,3,41267);
CheckMemberSize(struct jpeg_compress_struct,restart_in_rows,4,3,41268);
CheckOffset(struct jpeg_compress_struct,restart_in_rows,284,3,41268);
CheckMemberSize(struct jpeg_compress_struct,write_JFIF_header,4,3,41269);
CheckOffset(struct jpeg_compress_struct,write_JFIF_header,288,3,41269);
CheckMemberSize(struct jpeg_compress_struct,JFIF_major_version,1,3,41270);
CheckOffset(struct jpeg_compress_struct,JFIF_major_version,292,3,41270);
CheckMemberSize(struct jpeg_compress_struct,JFIF_minor_version,1,3,41271);
CheckOffset(struct jpeg_compress_struct,JFIF_minor_version,293,3,41271);
CheckMemberSize(struct jpeg_compress_struct,density_unit,1,3,41272);
CheckOffset(struct jpeg_compress_struct,density_unit,294,3,41272);
CheckMemberSize(struct jpeg_compress_struct,X_density,2,3,41273);
CheckOffset(struct jpeg_compress_struct,X_density,296,3,41273);
CheckMemberSize(struct jpeg_compress_struct,Y_density,2,3,41274);
CheckOffset(struct jpeg_compress_struct,Y_density,298,3,41274);
CheckMemberSize(struct jpeg_compress_struct,write_Adobe_marker,4,3,41275);
CheckOffset(struct jpeg_compress_struct,write_Adobe_marker,300,3,41275);
CheckMemberSize(struct jpeg_compress_struct,next_scanline,4,3,41276);
CheckOffset(struct jpeg_compress_struct,next_scanline,304,3,41276);
CheckMemberSize(struct jpeg_compress_struct,progressive_mode,4,3,41277);
CheckOffset(struct jpeg_compress_struct,progressive_mode,308,3,41277);
CheckMemberSize(struct jpeg_compress_struct,max_h_samp_factor,4,3,41278);
CheckOffset(struct jpeg_compress_struct,max_h_samp_factor,312,3,41278);
CheckMemberSize(struct jpeg_compress_struct,max_v_samp_factor,4,3,41279);
CheckOffset(struct jpeg_compress_struct,max_v_samp_factor,316,3,41279);
CheckMemberSize(struct jpeg_compress_struct,total_iMCU_rows,4,3,41280);
CheckOffset(struct jpeg_compress_struct,total_iMCU_rows,320,3,41280);
CheckMemberSize(struct jpeg_compress_struct,comps_in_scan,4,3,41281);
CheckOffset(struct jpeg_compress_struct,comps_in_scan,324,3,41281);
CheckMemberSize(struct jpeg_compress_struct,cur_comp_info,32,3,41282);
CheckOffset(struct jpeg_compress_struct,cur_comp_info,328,3,41282);
CheckMemberSize(struct jpeg_compress_struct,MCUs_per_row,4,3,41283);
CheckOffset(struct jpeg_compress_struct,MCUs_per_row,360,3,41283);
CheckMemberSize(struct jpeg_compress_struct,MCU_rows_in_scan,4,3,41284);
CheckOffset(struct jpeg_compress_struct,MCU_rows_in_scan,364,3,41284);
CheckMemberSize(struct jpeg_compress_struct,blocks_in_MCU,4,3,41285);
CheckOffset(struct jpeg_compress_struct,blocks_in_MCU,368,3,41285);
CheckMemberSize(struct jpeg_compress_struct,MCU_membership,40,3,41286);
CheckOffset(struct jpeg_compress_struct,MCU_membership,372,3,41286);
CheckMemberSize(struct jpeg_compress_struct,Ss,4,3,41287);
CheckOffset(struct jpeg_compress_struct,Ss,412,3,41287);
CheckMemberSize(struct jpeg_compress_struct,Se,4,3,41288);
CheckOffset(struct jpeg_compress_struct,Se,416,3,41288);
CheckMemberSize(struct jpeg_compress_struct,Ah,4,3,41289);
CheckOffset(struct jpeg_compress_struct,Ah,420,3,41289);
CheckMemberSize(struct jpeg_compress_struct,Al,4,3,41290);
CheckOffset(struct jpeg_compress_struct,Al,424,3,41290);
CheckMemberSize(struct jpeg_compress_struct,master,8,3,41291);
CheckOffset(struct jpeg_compress_struct,master,432,3,41291);
CheckMemberSize(struct jpeg_compress_struct,main,8,3,41292);
CheckOffset(struct jpeg_compress_struct,main,440,3,41292);
CheckMemberSize(struct jpeg_compress_struct,prep,8,3,41293);
CheckOffset(struct jpeg_compress_struct,prep,448,3,41293);
CheckMemberSize(struct jpeg_compress_struct,coef,8,3,41294);
CheckOffset(struct jpeg_compress_struct,coef,456,3,41294);
CheckMemberSize(struct jpeg_compress_struct,marker,8,3,41295);
CheckOffset(struct jpeg_compress_struct,marker,464,3,41295);
CheckMemberSize(struct jpeg_compress_struct,cconvert,8,3,41296);
CheckOffset(struct jpeg_compress_struct,cconvert,472,3,41296);
CheckMemberSize(struct jpeg_compress_struct,downsample,8,3,41297);
CheckOffset(struct jpeg_compress_struct,downsample,480,3,41297);
CheckMemberSize(struct jpeg_compress_struct,fdct,8,3,41298);
CheckOffset(struct jpeg_compress_struct,fdct,488,3,41298);
CheckMemberSize(struct jpeg_compress_struct,entropy,8,3,41299);
CheckOffset(struct jpeg_compress_struct,entropy,496,3,41299);
CheckMemberSize(struct jpeg_compress_struct,script_space,8,3,41300);
CheckOffset(struct jpeg_compress_struct,script_space,504,3,41300);
CheckMemberSize(struct jpeg_compress_struct,script_space_size,4,3,41301);
CheckOffset(struct jpeg_compress_struct,script_space_size,512,3,41301);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct jpeg_compress_struct,376, 11359, 6);
CheckMemberSize(struct jpeg_compress_struct,mem,4,6,41225);
CheckOffset(struct jpeg_compress_struct,mem,4,6,41225);
CheckMemberSize(struct jpeg_compress_struct,progress,4,6,41226);
CheckOffset(struct jpeg_compress_struct,progress,8,6,41226);
CheckMemberSize(struct jpeg_compress_struct,client_data,4,6,41227);
CheckOffset(struct jpeg_compress_struct,client_data,12,6,41227);
CheckMemberSize(struct jpeg_compress_struct,is_decompressor,4,6,41228);
CheckOffset(struct jpeg_compress_struct,is_decompressor,16,6,41228);
CheckMemberSize(struct jpeg_compress_struct,global_state,4,6,41229);
CheckOffset(struct jpeg_compress_struct,global_state,20,6,41229);
CheckMemberSize(struct jpeg_compress_struct,dest,4,6,41237);
CheckOffset(struct jpeg_compress_struct,dest,24,6,41237);
CheckMemberSize(struct jpeg_compress_struct,image_width,4,6,41238);
CheckOffset(struct jpeg_compress_struct,image_width,28,6,41238);
CheckMemberSize(struct jpeg_compress_struct,image_height,4,6,41239);
CheckOffset(struct jpeg_compress_struct,image_height,32,6,41239);
CheckMemberSize(struct jpeg_compress_struct,input_components,4,6,41240);
CheckOffset(struct jpeg_compress_struct,input_components,36,6,41240);
CheckMemberSize(struct jpeg_compress_struct,in_color_space,4,6,41241);
CheckOffset(struct jpeg_compress_struct,in_color_space,40,6,41241);
CheckMemberSize(struct jpeg_compress_struct,input_gamma,8,6,41242);
CheckOffset(struct jpeg_compress_struct,input_gamma,48,6,41242);
CheckMemberSize(struct jpeg_compress_struct,data_precision,4,6,41243);
CheckOffset(struct jpeg_compress_struct,data_precision,56,6,41243);
CheckMemberSize(struct jpeg_compress_struct,num_components,4,6,41244);
CheckOffset(struct jpeg_compress_struct,num_components,60,6,41244);
CheckMemberSize(struct jpeg_compress_struct,jpeg_color_space,4,6,41245);
CheckOffset(struct jpeg_compress_struct,jpeg_color_space,64,6,41245);
CheckMemberSize(struct jpeg_compress_struct,comp_info,4,6,41246);
CheckOffset(struct jpeg_compress_struct,comp_info,68,6,41246);
CheckMemberSize(struct jpeg_compress_struct,quant_tbl_ptrs,16,6,41247);
CheckOffset(struct jpeg_compress_struct,quant_tbl_ptrs,72,6,41247);
CheckMemberSize(struct jpeg_compress_struct,dc_huff_tbl_ptrs,16,6,41248);
CheckOffset(struct jpeg_compress_struct,dc_huff_tbl_ptrs,88,6,41248);
CheckMemberSize(struct jpeg_compress_struct,ac_huff_tbl_ptrs,16,6,41249);
CheckOffset(struct jpeg_compress_struct,ac_huff_tbl_ptrs,104,6,41249);
CheckMemberSize(struct jpeg_compress_struct,arith_dc_L,16,6,41250);
CheckOffset(struct jpeg_compress_struct,arith_dc_L,120,6,41250);
CheckMemberSize(struct jpeg_compress_struct,arith_dc_U,16,6,41251);
CheckOffset(struct jpeg_compress_struct,arith_dc_U,136,6,41251);
CheckMemberSize(struct jpeg_compress_struct,arith_ac_K,16,6,41252);
CheckOffset(struct jpeg_compress_struct,arith_ac_K,152,6,41252);
CheckMemberSize(struct jpeg_compress_struct,num_scans,4,6,41253);
CheckOffset(struct jpeg_compress_struct,num_scans,168,6,41253);
CheckMemberSize(struct jpeg_compress_struct,scan_info,4,6,41260);
CheckOffset(struct jpeg_compress_struct,scan_info,172,6,41260);
CheckMemberSize(struct jpeg_compress_struct,raw_data_in,4,6,41261);
CheckOffset(struct jpeg_compress_struct,raw_data_in,176,6,41261);
CheckMemberSize(struct jpeg_compress_struct,arith_code,4,6,41262);
CheckOffset(struct jpeg_compress_struct,arith_code,180,6,41262);
CheckMemberSize(struct jpeg_compress_struct,optimize_coding,4,6,41263);
CheckOffset(struct jpeg_compress_struct,optimize_coding,184,6,41263);
CheckMemberSize(struct jpeg_compress_struct,CCIR601_sampling,4,6,41264);
CheckOffset(struct jpeg_compress_struct,CCIR601_sampling,188,6,41264);
CheckMemberSize(struct jpeg_compress_struct,smoothing_factor,4,6,41265);
CheckOffset(struct jpeg_compress_struct,smoothing_factor,192,6,41265);
CheckMemberSize(struct jpeg_compress_struct,dct_method,4,6,41266);
CheckOffset(struct jpeg_compress_struct,dct_method,196,6,41266);
CheckMemberSize(struct jpeg_compress_struct,restart_interval,4,6,41267);
CheckOffset(struct jpeg_compress_struct,restart_interval,200,6,41267);
CheckMemberSize(struct jpeg_compress_struct,restart_in_rows,4,6,41268);
CheckOffset(struct jpeg_compress_struct,restart_in_rows,204,6,41268);
CheckMemberSize(struct jpeg_compress_struct,write_JFIF_header,4,6,41269);
CheckOffset(struct jpeg_compress_struct,write_JFIF_header,208,6,41269);
CheckMemberSize(struct jpeg_compress_struct,JFIF_major_version,1,6,41270);
CheckOffset(struct jpeg_compress_struct,JFIF_major_version,212,6,41270);
CheckMemberSize(struct jpeg_compress_struct,JFIF_minor_version,1,6,41271);
CheckOffset(struct jpeg_compress_struct,JFIF_minor_version,213,6,41271);
CheckMemberSize(struct jpeg_compress_struct,density_unit,1,6,41272);
CheckOffset(struct jpeg_compress_struct,density_unit,214,6,41272);
CheckMemberSize(struct jpeg_compress_struct,X_density,2,6,41273);
CheckOffset(struct jpeg_compress_struct,X_density,216,6,41273);
CheckMemberSize(struct jpeg_compress_struct,Y_density,2,6,41274);
CheckOffset(struct jpeg_compress_struct,Y_density,218,6,41274);
CheckMemberSize(struct jpeg_compress_struct,write_Adobe_marker,4,6,41275);
CheckOffset(struct jpeg_compress_struct,write_Adobe_marker,220,6,41275);
CheckMemberSize(struct jpeg_compress_struct,next_scanline,4,6,41276);
CheckOffset(struct jpeg_compress_struct,next_scanline,224,6,41276);
CheckMemberSize(struct jpeg_compress_struct,progressive_mode,4,6,41277);
CheckOffset(struct jpeg_compress_struct,progressive_mode,228,6,41277);
CheckMemberSize(struct jpeg_compress_struct,max_h_samp_factor,4,6,41278);
CheckOffset(struct jpeg_compress_struct,max_h_samp_factor,232,6,41278);
CheckMemberSize(struct jpeg_compress_struct,max_v_samp_factor,4,6,41279);
CheckOffset(struct jpeg_compress_struct,max_v_samp_factor,236,6,41279);
CheckMemberSize(struct jpeg_compress_struct,total_iMCU_rows,4,6,41280);
CheckOffset(struct jpeg_compress_struct,total_iMCU_rows,240,6,41280);
CheckMemberSize(struct jpeg_compress_struct,comps_in_scan,4,6,41281);
CheckOffset(struct jpeg_compress_struct,comps_in_scan,244,6,41281);
CheckMemberSize(struct jpeg_compress_struct,cur_comp_info,16,6,41282);
CheckOffset(struct jpeg_compress_struct,cur_comp_info,248,6,41282);
CheckMemberSize(struct jpeg_compress_struct,MCUs_per_row,4,6,41283);
CheckOffset(struct jpeg_compress_struct,MCUs_per_row,264,6,41283);
CheckMemberSize(struct jpeg_compress_struct,MCU_rows_in_scan,4,6,41284);
CheckOffset(struct jpeg_compress_struct,MCU_rows_in_scan,268,6,41284);
CheckMemberSize(struct jpeg_compress_struct,blocks_in_MCU,4,6,41285);
CheckOffset(struct jpeg_compress_struct,blocks_in_MCU,272,6,41285);
CheckMemberSize(struct jpeg_compress_struct,MCU_membership,40,6,41286);
CheckOffset(struct jpeg_compress_struct,MCU_membership,276,6,41286);
CheckMemberSize(struct jpeg_compress_struct,Ss,4,6,41287);
CheckOffset(struct jpeg_compress_struct,Ss,316,6,41287);
CheckMemberSize(struct jpeg_compress_struct,Se,4,6,41288);
CheckOffset(struct jpeg_compress_struct,Se,320,6,41288);
CheckMemberSize(struct jpeg_compress_struct,Ah,4,6,41289);
CheckOffset(struct jpeg_compress_struct,Ah,324,6,41289);
CheckMemberSize(struct jpeg_compress_struct,Al,4,6,41290);
CheckOffset(struct jpeg_compress_struct,Al,328,6,41290);
CheckMemberSize(struct jpeg_compress_struct,master,4,6,41291);
CheckOffset(struct jpeg_compress_struct,master,332,6,41291);
CheckMemberSize(struct jpeg_compress_struct,main,4,6,41292);
CheckOffset(struct jpeg_compress_struct,main,336,6,41292);
CheckMemberSize(struct jpeg_compress_struct,prep,4,6,41293);
CheckOffset(struct jpeg_compress_struct,prep,340,6,41293);
CheckMemberSize(struct jpeg_compress_struct,coef,4,6,41294);
CheckOffset(struct jpeg_compress_struct,coef,344,6,41294);
CheckMemberSize(struct jpeg_compress_struct,marker,4,6,41295);
CheckOffset(struct jpeg_compress_struct,marker,348,6,41295);
CheckMemberSize(struct jpeg_compress_struct,cconvert,4,6,41296);
CheckOffset(struct jpeg_compress_struct,cconvert,352,6,41296);
CheckMemberSize(struct jpeg_compress_struct,downsample,4,6,41297);
CheckOffset(struct jpeg_compress_struct,downsample,356,6,41297);
CheckMemberSize(struct jpeg_compress_struct,fdct,4,6,41298);
CheckOffset(struct jpeg_compress_struct,fdct,360,6,41298);
CheckMemberSize(struct jpeg_compress_struct,entropy,4,6,41299);
CheckOffset(struct jpeg_compress_struct,entropy,364,6,41299);
CheckMemberSize(struct jpeg_compress_struct,script_space,4,6,41300);
CheckOffset(struct jpeg_compress_struct,script_space,368,6,41300);
CheckMemberSize(struct jpeg_compress_struct,script_space_size,4,6,41301);
CheckOffset(struct jpeg_compress_struct,script_space_size,372,6,41301);
#elif __powerpc64__
CheckTypeSize(struct jpeg_compress_struct,520, 11359, 9);
CheckMemberSize(struct jpeg_compress_struct,mem,8,9,41225);
CheckOffset(struct jpeg_compress_struct,mem,8,9,41225);
CheckMemberSize(struct jpeg_compress_struct,progress,8,9,41226);
CheckOffset(struct jpeg_compress_struct,progress,16,9,41226);
CheckMemberSize(struct jpeg_compress_struct,client_data,8,9,41227);
CheckOffset(struct jpeg_compress_struct,client_data,24,9,41227);
CheckMemberSize(struct jpeg_compress_struct,is_decompressor,4,9,41228);
CheckOffset(struct jpeg_compress_struct,is_decompressor,32,9,41228);
CheckMemberSize(struct jpeg_compress_struct,global_state,4,9,41229);
CheckOffset(struct jpeg_compress_struct,global_state,36,9,41229);
CheckMemberSize(struct jpeg_compress_struct,dest,8,9,41237);
CheckOffset(struct jpeg_compress_struct,dest,40,9,41237);
CheckMemberSize(struct jpeg_compress_struct,image_width,4,9,41238);
CheckOffset(struct jpeg_compress_struct,image_width,48,9,41238);
CheckMemberSize(struct jpeg_compress_struct,image_height,4,9,41239);
CheckOffset(struct jpeg_compress_struct,image_height,52,9,41239);
CheckMemberSize(struct jpeg_compress_struct,input_components,4,9,41240);
CheckOffset(struct jpeg_compress_struct,input_components,56,9,41240);
CheckMemberSize(struct jpeg_compress_struct,in_color_space,4,9,41241);
CheckOffset(struct jpeg_compress_struct,in_color_space,60,9,41241);
CheckMemberSize(struct jpeg_compress_struct,input_gamma,8,9,41242);
CheckOffset(struct jpeg_compress_struct,input_gamma,64,9,41242);
CheckMemberSize(struct jpeg_compress_struct,data_precision,4,9,41243);
CheckOffset(struct jpeg_compress_struct,data_precision,72,9,41243);
CheckMemberSize(struct jpeg_compress_struct,num_components,4,9,41244);
CheckOffset(struct jpeg_compress_struct,num_components,76,9,41244);
CheckMemberSize(struct jpeg_compress_struct,jpeg_color_space,4,9,41245);
CheckOffset(struct jpeg_compress_struct,jpeg_color_space,80,9,41245);
CheckMemberSize(struct jpeg_compress_struct,comp_info,8,9,41246);
CheckOffset(struct jpeg_compress_struct,comp_info,88,9,41246);
CheckMemberSize(struct jpeg_compress_struct,quant_tbl_ptrs,32,9,41247);
CheckOffset(struct jpeg_compress_struct,quant_tbl_ptrs,96,9,41247);
CheckMemberSize(struct jpeg_compress_struct,dc_huff_tbl_ptrs,32,9,41248);
CheckOffset(struct jpeg_compress_struct,dc_huff_tbl_ptrs,128,9,41248);
CheckMemberSize(struct jpeg_compress_struct,ac_huff_tbl_ptrs,32,9,41249);
CheckOffset(struct jpeg_compress_struct,ac_huff_tbl_ptrs,160,9,41249);
CheckMemberSize(struct jpeg_compress_struct,arith_dc_L,16,9,41250);
CheckOffset(struct jpeg_compress_struct,arith_dc_L,192,9,41250);
CheckMemberSize(struct jpeg_compress_struct,arith_dc_U,16,9,41251);
CheckOffset(struct jpeg_compress_struct,arith_dc_U,208,9,41251);
CheckMemberSize(struct jpeg_compress_struct,arith_ac_K,16,9,41252);
CheckOffset(struct jpeg_compress_struct,arith_ac_K,224,9,41252);
CheckMemberSize(struct jpeg_compress_struct,num_scans,4,9,41253);
CheckOffset(struct jpeg_compress_struct,num_scans,240,9,41253);
CheckMemberSize(struct jpeg_compress_struct,scan_info,8,9,41260);
CheckOffset(struct jpeg_compress_struct,scan_info,248,9,41260);
CheckMemberSize(struct jpeg_compress_struct,raw_data_in,4,9,41261);
CheckOffset(struct jpeg_compress_struct,raw_data_in,256,9,41261);
CheckMemberSize(struct jpeg_compress_struct,arith_code,4,9,41262);
CheckOffset(struct jpeg_compress_struct,arith_code,260,9,41262);
CheckMemberSize(struct jpeg_compress_struct,optimize_coding,4,9,41263);
CheckOffset(struct jpeg_compress_struct,optimize_coding,264,9,41263);
CheckMemberSize(struct jpeg_compress_struct,CCIR601_sampling,4,9,41264);
CheckOffset(struct jpeg_compress_struct,CCIR601_sampling,268,9,41264);
CheckMemberSize(struct jpeg_compress_struct,smoothing_factor,4,9,41265);
CheckOffset(struct jpeg_compress_struct,smoothing_factor,272,9,41265);
CheckMemberSize(struct jpeg_compress_struct,dct_method,4,9,41266);
CheckOffset(struct jpeg_compress_struct,dct_method,276,9,41266);
CheckMemberSize(struct jpeg_compress_struct,restart_interval,4,9,41267);
CheckOffset(struct jpeg_compress_struct,restart_interval,280,9,41267);
CheckMemberSize(struct jpeg_compress_struct,restart_in_rows,4,9,41268);
CheckOffset(struct jpeg_compress_struct,restart_in_rows,284,9,41268);
CheckMemberSize(struct jpeg_compress_struct,write_JFIF_header,4,9,41269);
CheckOffset(struct jpeg_compress_struct,write_JFIF_header,288,9,41269);
CheckMemberSize(struct jpeg_compress_struct,JFIF_major_version,1,9,41270);
CheckOffset(struct jpeg_compress_struct,JFIF_major_version,292,9,41270);
CheckMemberSize(struct jpeg_compress_struct,JFIF_minor_version,1,9,41271);
CheckOffset(struct jpeg_compress_struct,JFIF_minor_version,293,9,41271);
CheckMemberSize(struct jpeg_compress_struct,density_unit,1,9,41272);
CheckOffset(struct jpeg_compress_struct,density_unit,294,9,41272);
CheckMemberSize(struct jpeg_compress_struct,X_density,2,9,41273);
CheckOffset(struct jpeg_compress_struct,X_density,296,9,41273);
CheckMemberSize(struct jpeg_compress_struct,Y_density,2,9,41274);
CheckOffset(struct jpeg_compress_struct,Y_density,298,9,41274);
CheckMemberSize(struct jpeg_compress_struct,write_Adobe_marker,4,9,41275);
CheckOffset(struct jpeg_compress_struct,write_Adobe_marker,300,9,41275);
CheckMemberSize(struct jpeg_compress_struct,next_scanline,4,9,41276);
CheckOffset(struct jpeg_compress_struct,next_scanline,304,9,41276);
CheckMemberSize(struct jpeg_compress_struct,progressive_mode,4,9,41277);
CheckOffset(struct jpeg_compress_struct,progressive_mode,308,9,41277);
CheckMemberSize(struct jpeg_compress_struct,max_h_samp_factor,4,9,41278);
CheckOffset(struct jpeg_compress_struct,max_h_samp_factor,312,9,41278);
CheckMemberSize(struct jpeg_compress_struct,max_v_samp_factor,4,9,41279);
CheckOffset(struct jpeg_compress_struct,max_v_samp_factor,316,9,41279);
CheckMemberSize(struct jpeg_compress_struct,total_iMCU_rows,4,9,41280);
CheckOffset(struct jpeg_compress_struct,total_iMCU_rows,320,9,41280);
CheckMemberSize(struct jpeg_compress_struct,comps_in_scan,4,9,41281);
CheckOffset(struct jpeg_compress_struct,comps_in_scan,324,9,41281);
CheckMemberSize(struct jpeg_compress_struct,cur_comp_info,32,9,41282);
CheckOffset(struct jpeg_compress_struct,cur_comp_info,328,9,41282);
CheckMemberSize(struct jpeg_compress_struct,MCUs_per_row,4,9,41283);
CheckOffset(struct jpeg_compress_struct,MCUs_per_row,360,9,41283);
CheckMemberSize(struct jpeg_compress_struct,MCU_rows_in_scan,4,9,41284);
CheckOffset(struct jpeg_compress_struct,MCU_rows_in_scan,364,9,41284);
CheckMemberSize(struct jpeg_compress_struct,blocks_in_MCU,4,9,41285);
CheckOffset(struct jpeg_compress_struct,blocks_in_MCU,368,9,41285);
CheckMemberSize(struct jpeg_compress_struct,MCU_membership,40,9,41286);
CheckOffset(struct jpeg_compress_struct,MCU_membership,372,9,41286);
CheckMemberSize(struct jpeg_compress_struct,Ss,4,9,41287);
CheckOffset(struct jpeg_compress_struct,Ss,412,9,41287);
CheckMemberSize(struct jpeg_compress_struct,Se,4,9,41288);
CheckOffset(struct jpeg_compress_struct,Se,416,9,41288);
CheckMemberSize(struct jpeg_compress_struct,Ah,4,9,41289);
CheckOffset(struct jpeg_compress_struct,Ah,420,9,41289);
CheckMemberSize(struct jpeg_compress_struct,Al,4,9,41290);
CheckOffset(struct jpeg_compress_struct,Al,424,9,41290);
CheckMemberSize(struct jpeg_compress_struct,master,8,9,41291);
CheckOffset(struct jpeg_compress_struct,master,432,9,41291);
CheckMemberSize(struct jpeg_compress_struct,main,8,9,41292);
CheckOffset(struct jpeg_compress_struct,main,440,9,41292);
CheckMemberSize(struct jpeg_compress_struct,prep,8,9,41293);
CheckOffset(struct jpeg_compress_struct,prep,448,9,41293);
CheckMemberSize(struct jpeg_compress_struct,coef,8,9,41294);
CheckOffset(struct jpeg_compress_struct,coef,456,9,41294);
CheckMemberSize(struct jpeg_compress_struct,marker,8,9,41295);
CheckOffset(struct jpeg_compress_struct,marker,464,9,41295);
CheckMemberSize(struct jpeg_compress_struct,cconvert,8,9,41296);
CheckOffset(struct jpeg_compress_struct,cconvert,472,9,41296);
CheckMemberSize(struct jpeg_compress_struct,downsample,8,9,41297);
CheckOffset(struct jpeg_compress_struct,downsample,480,9,41297);
CheckMemberSize(struct jpeg_compress_struct,fdct,8,9,41298);
CheckOffset(struct jpeg_compress_struct,fdct,488,9,41298);
CheckMemberSize(struct jpeg_compress_struct,entropy,8,9,41299);
CheckOffset(struct jpeg_compress_struct,entropy,496,9,41299);
CheckMemberSize(struct jpeg_compress_struct,script_space,8,9,41300);
CheckOffset(struct jpeg_compress_struct,script_space,504,9,41300);
CheckMemberSize(struct jpeg_compress_struct,script_space_size,4,9,41301);
CheckOffset(struct jpeg_compress_struct,script_space_size,512,9,41301);
#elif __s390__ && !__s390x__
CheckTypeSize(struct jpeg_compress_struct,376, 11359, 10);
CheckMemberSize(struct jpeg_compress_struct,mem,4,10,41225);
CheckOffset(struct jpeg_compress_struct,mem,4,10,41225);
CheckMemberSize(struct jpeg_compress_struct,progress,4,10,41226);
CheckOffset(struct jpeg_compress_struct,progress,8,10,41226);
CheckMemberSize(struct jpeg_compress_struct,client_data,4,10,41227);
CheckOffset(struct jpeg_compress_struct,client_data,12,10,41227);
CheckMemberSize(struct jpeg_compress_struct,is_decompressor,4,10,41228);
CheckOffset(struct jpeg_compress_struct,is_decompressor,16,10,41228);
CheckMemberSize(struct jpeg_compress_struct,global_state,4,10,41229);
CheckOffset(struct jpeg_compress_struct,global_state,20,10,41229);
CheckMemberSize(struct jpeg_compress_struct,dest,4,10,41237);
CheckOffset(struct jpeg_compress_struct,dest,24,10,41237);
CheckMemberSize(struct jpeg_compress_struct,image_width,4,10,41238);
CheckOffset(struct jpeg_compress_struct,image_width,28,10,41238);
CheckMemberSize(struct jpeg_compress_struct,image_height,4,10,41239);
CheckOffset(struct jpeg_compress_struct,image_height,32,10,41239);
CheckMemberSize(struct jpeg_compress_struct,input_components,4,10,41240);
CheckOffset(struct jpeg_compress_struct,input_components,36,10,41240);
CheckMemberSize(struct jpeg_compress_struct,in_color_space,4,10,41241);
CheckOffset(struct jpeg_compress_struct,in_color_space,40,10,41241);
CheckMemberSize(struct jpeg_compress_struct,input_gamma,8,10,41242);
CheckOffset(struct jpeg_compress_struct,input_gamma,48,10,41242);
CheckMemberSize(struct jpeg_compress_struct,data_precision,4,10,41243);
CheckOffset(struct jpeg_compress_struct,data_precision,56,10,41243);
CheckMemberSize(struct jpeg_compress_struct,num_components,4,10,41244);
CheckOffset(struct jpeg_compress_struct,num_components,60,10,41244);
CheckMemberSize(struct jpeg_compress_struct,jpeg_color_space,4,10,41245);
CheckOffset(struct jpeg_compress_struct,jpeg_color_space,64,10,41245);
CheckMemberSize(struct jpeg_compress_struct,comp_info,4,10,41246);
CheckOffset(struct jpeg_compress_struct,comp_info,68,10,41246);
CheckMemberSize(struct jpeg_compress_struct,quant_tbl_ptrs,16,10,41247);
CheckOffset(struct jpeg_compress_struct,quant_tbl_ptrs,72,10,41247);
CheckMemberSize(struct jpeg_compress_struct,dc_huff_tbl_ptrs,16,10,41248);
CheckOffset(struct jpeg_compress_struct,dc_huff_tbl_ptrs,88,10,41248);
CheckMemberSize(struct jpeg_compress_struct,ac_huff_tbl_ptrs,16,10,41249);
CheckOffset(struct jpeg_compress_struct,ac_huff_tbl_ptrs,104,10,41249);
CheckMemberSize(struct jpeg_compress_struct,arith_dc_L,16,10,41250);
CheckOffset(struct jpeg_compress_struct,arith_dc_L,120,10,41250);
CheckMemberSize(struct jpeg_compress_struct,arith_dc_U,16,10,41251);
CheckOffset(struct jpeg_compress_struct,arith_dc_U,136,10,41251);
CheckMemberSize(struct jpeg_compress_struct,arith_ac_K,16,10,41252);
CheckOffset(struct jpeg_compress_struct,arith_ac_K,152,10,41252);
CheckMemberSize(struct jpeg_compress_struct,num_scans,4,10,41253);
CheckOffset(struct jpeg_compress_struct,num_scans,168,10,41253);
CheckMemberSize(struct jpeg_compress_struct,scan_info,4,10,41260);
CheckOffset(struct jpeg_compress_struct,scan_info,172,10,41260);
CheckMemberSize(struct jpeg_compress_struct,raw_data_in,4,10,41261);
CheckOffset(struct jpeg_compress_struct,raw_data_in,176,10,41261);
CheckMemberSize(struct jpeg_compress_struct,arith_code,4,10,41262);
CheckOffset(struct jpeg_compress_struct,arith_code,180,10,41262);
CheckMemberSize(struct jpeg_compress_struct,optimize_coding,4,10,41263);
CheckOffset(struct jpeg_compress_struct,optimize_coding,184,10,41263);
CheckMemberSize(struct jpeg_compress_struct,CCIR601_sampling,4,10,41264);
CheckOffset(struct jpeg_compress_struct,CCIR601_sampling,188,10,41264);
CheckMemberSize(struct jpeg_compress_struct,smoothing_factor,4,10,41265);
CheckOffset(struct jpeg_compress_struct,smoothing_factor,192,10,41265);
CheckMemberSize(struct jpeg_compress_struct,dct_method,4,10,41266);
CheckOffset(struct jpeg_compress_struct,dct_method,196,10,41266);
CheckMemberSize(struct jpeg_compress_struct,restart_interval,4,10,41267);
CheckOffset(struct jpeg_compress_struct,restart_interval,200,10,41267);
CheckMemberSize(struct jpeg_compress_struct,restart_in_rows,4,10,41268);
CheckOffset(struct jpeg_compress_struct,restart_in_rows,204,10,41268);
CheckMemberSize(struct jpeg_compress_struct,write_JFIF_header,4,10,41269);
CheckOffset(struct jpeg_compress_struct,write_JFIF_header,208,10,41269);
CheckMemberSize(struct jpeg_compress_struct,JFIF_major_version,1,10,41270);
CheckOffset(struct jpeg_compress_struct,JFIF_major_version,212,10,41270);
CheckMemberSize(struct jpeg_compress_struct,JFIF_minor_version,1,10,41271);
CheckOffset(struct jpeg_compress_struct,JFIF_minor_version,213,10,41271);
CheckMemberSize(struct jpeg_compress_struct,density_unit,1,10,41272);
CheckOffset(struct jpeg_compress_struct,density_unit,214,10,41272);
CheckMemberSize(struct jpeg_compress_struct,X_density,2,10,41273);
CheckOffset(struct jpeg_compress_struct,X_density,216,10,41273);
CheckMemberSize(struct jpeg_compress_struct,Y_density,2,10,41274);
CheckOffset(struct jpeg_compress_struct,Y_density,218,10,41274);
CheckMemberSize(struct jpeg_compress_struct,write_Adobe_marker,4,10,41275);
CheckOffset(struct jpeg_compress_struct,write_Adobe_marker,220,10,41275);
CheckMemberSize(struct jpeg_compress_struct,next_scanline,4,10,41276);
CheckOffset(struct jpeg_compress_struct,next_scanline,224,10,41276);
CheckMemberSize(struct jpeg_compress_struct,progressive_mode,4,10,41277);
CheckOffset(struct jpeg_compress_struct,progressive_mode,228,10,41277);
CheckMemberSize(struct jpeg_compress_struct,max_h_samp_factor,4,10,41278);
CheckOffset(struct jpeg_compress_struct,max_h_samp_factor,232,10,41278);
CheckMemberSize(struct jpeg_compress_struct,max_v_samp_factor,4,10,41279);
CheckOffset(struct jpeg_compress_struct,max_v_samp_factor,236,10,41279);
CheckMemberSize(struct jpeg_compress_struct,total_iMCU_rows,4,10,41280);
CheckOffset(struct jpeg_compress_struct,total_iMCU_rows,240,10,41280);
CheckMemberSize(struct jpeg_compress_struct,comps_in_scan,4,10,41281);
CheckOffset(struct jpeg_compress_struct,comps_in_scan,244,10,41281);
CheckMemberSize(struct jpeg_compress_struct,cur_comp_info,16,10,41282);
CheckOffset(struct jpeg_compress_struct,cur_comp_info,248,10,41282);
CheckMemberSize(struct jpeg_compress_struct,MCUs_per_row,4,10,41283);
CheckOffset(struct jpeg_compress_struct,MCUs_per_row,264,10,41283);
CheckMemberSize(struct jpeg_compress_struct,MCU_rows_in_scan,4,10,41284);
CheckOffset(struct jpeg_compress_struct,MCU_rows_in_scan,268,10,41284);
CheckMemberSize(struct jpeg_compress_struct,blocks_in_MCU,4,10,41285);
CheckOffset(struct jpeg_compress_struct,blocks_in_MCU,272,10,41285);
CheckMemberSize(struct jpeg_compress_struct,MCU_membership,40,10,41286);
CheckOffset(struct jpeg_compress_struct,MCU_membership,276,10,41286);
CheckMemberSize(struct jpeg_compress_struct,Ss,4,10,41287);
CheckOffset(struct jpeg_compress_struct,Ss,316,10,41287);
CheckMemberSize(struct jpeg_compress_struct,Se,4,10,41288);
CheckOffset(struct jpeg_compress_struct,Se,320,10,41288);
CheckMemberSize(struct jpeg_compress_struct,Ah,4,10,41289);
CheckOffset(struct jpeg_compress_struct,Ah,324,10,41289);
CheckMemberSize(struct jpeg_compress_struct,Al,4,10,41290);
CheckOffset(struct jpeg_compress_struct,Al,328,10,41290);
CheckMemberSize(struct jpeg_compress_struct,master,4,10,41291);
CheckOffset(struct jpeg_compress_struct,master,332,10,41291);
CheckMemberSize(struct jpeg_compress_struct,main,4,10,41292);
CheckOffset(struct jpeg_compress_struct,main,336,10,41292);
CheckMemberSize(struct jpeg_compress_struct,prep,4,10,41293);
CheckOffset(struct jpeg_compress_struct,prep,340,10,41293);
CheckMemberSize(struct jpeg_compress_struct,coef,4,10,41294);
CheckOffset(struct jpeg_compress_struct,coef,344,10,41294);
CheckMemberSize(struct jpeg_compress_struct,marker,4,10,41295);
CheckOffset(struct jpeg_compress_struct,marker,348,10,41295);
CheckMemberSize(struct jpeg_compress_struct,cconvert,4,10,41296);
CheckOffset(struct jpeg_compress_struct,cconvert,352,10,41296);
CheckMemberSize(struct jpeg_compress_struct,downsample,4,10,41297);
CheckOffset(struct jpeg_compress_struct,downsample,356,10,41297);
CheckMemberSize(struct jpeg_compress_struct,fdct,4,10,41298);
CheckOffset(struct jpeg_compress_struct,fdct,360,10,41298);
CheckMemberSize(struct jpeg_compress_struct,entropy,4,10,41299);
CheckOffset(struct jpeg_compress_struct,entropy,364,10,41299);
CheckMemberSize(struct jpeg_compress_struct,script_space,4,10,41300);
CheckOffset(struct jpeg_compress_struct,script_space,368,10,41300);
CheckMemberSize(struct jpeg_compress_struct,script_space_size,4,10,41301);
CheckOffset(struct jpeg_compress_struct,script_space_size,372,10,41301);
#elif __s390x__
CheckTypeSize(struct jpeg_compress_struct,520, 11359, 12);
CheckMemberSize(struct jpeg_compress_struct,mem,8,12,41225);
CheckOffset(struct jpeg_compress_struct,mem,8,12,41225);
CheckMemberSize(struct jpeg_compress_struct,progress,8,12,41226);
CheckOffset(struct jpeg_compress_struct,progress,16,12,41226);
CheckMemberSize(struct jpeg_compress_struct,client_data,8,12,41227);
CheckOffset(struct jpeg_compress_struct,client_data,24,12,41227);
CheckMemberSize(struct jpeg_compress_struct,is_decompressor,4,12,41228);
CheckOffset(struct jpeg_compress_struct,is_decompressor,32,12,41228);
CheckMemberSize(struct jpeg_compress_struct,global_state,4,12,41229);
CheckOffset(struct jpeg_compress_struct,global_state,36,12,41229);
CheckMemberSize(struct jpeg_compress_struct,dest,8,12,41237);
CheckOffset(struct jpeg_compress_struct,dest,40,12,41237);
CheckMemberSize(struct jpeg_compress_struct,image_width,4,12,41238);
CheckOffset(struct jpeg_compress_struct,image_width,48,12,41238);
CheckMemberSize(struct jpeg_compress_struct,image_height,4,12,41239);
CheckOffset(struct jpeg_compress_struct,image_height,52,12,41239);
CheckMemberSize(struct jpeg_compress_struct,input_components,4,12,41240);
CheckOffset(struct jpeg_compress_struct,input_components,56,12,41240);
CheckMemberSize(struct jpeg_compress_struct,in_color_space,4,12,41241);
CheckOffset(struct jpeg_compress_struct,in_color_space,60,12,41241);
CheckMemberSize(struct jpeg_compress_struct,input_gamma,8,12,41242);
CheckOffset(struct jpeg_compress_struct,input_gamma,64,12,41242);
CheckMemberSize(struct jpeg_compress_struct,data_precision,4,12,41243);
CheckOffset(struct jpeg_compress_struct,data_precision,72,12,41243);
CheckMemberSize(struct jpeg_compress_struct,num_components,4,12,41244);
CheckOffset(struct jpeg_compress_struct,num_components,76,12,41244);
CheckMemberSize(struct jpeg_compress_struct,jpeg_color_space,4,12,41245);
CheckOffset(struct jpeg_compress_struct,jpeg_color_space,80,12,41245);
CheckMemberSize(struct jpeg_compress_struct,comp_info,8,12,41246);
CheckOffset(struct jpeg_compress_struct,comp_info,88,12,41246);
CheckMemberSize(struct jpeg_compress_struct,quant_tbl_ptrs,32,12,41247);
CheckOffset(struct jpeg_compress_struct,quant_tbl_ptrs,96,12,41247);
CheckMemberSize(struct jpeg_compress_struct,dc_huff_tbl_ptrs,32,12,41248);
CheckOffset(struct jpeg_compress_struct,dc_huff_tbl_ptrs,128,12,41248);
CheckMemberSize(struct jpeg_compress_struct,ac_huff_tbl_ptrs,32,12,41249);
CheckOffset(struct jpeg_compress_struct,ac_huff_tbl_ptrs,160,12,41249);
CheckMemberSize(struct jpeg_compress_struct,arith_dc_L,16,12,41250);
CheckOffset(struct jpeg_compress_struct,arith_dc_L,192,12,41250);
CheckMemberSize(struct jpeg_compress_struct,arith_dc_U,16,12,41251);
CheckOffset(struct jpeg_compress_struct,arith_dc_U,208,12,41251);
CheckMemberSize(struct jpeg_compress_struct,arith_ac_K,16,12,41252);
CheckOffset(struct jpeg_compress_struct,arith_ac_K,224,12,41252);
CheckMemberSize(struct jpeg_compress_struct,num_scans,4,12,41253);
CheckOffset(struct jpeg_compress_struct,num_scans,240,12,41253);
CheckMemberSize(struct jpeg_compress_struct,scan_info,8,12,41260);
CheckOffset(struct jpeg_compress_struct,scan_info,248,12,41260);
CheckMemberSize(struct jpeg_compress_struct,raw_data_in,4,12,41261);
CheckOffset(struct jpeg_compress_struct,raw_data_in,256,12,41261);
CheckMemberSize(struct jpeg_compress_struct,arith_code,4,12,41262);
CheckOffset(struct jpeg_compress_struct,arith_code,260,12,41262);
CheckMemberSize(struct jpeg_compress_struct,optimize_coding,4,12,41263);
CheckOffset(struct jpeg_compress_struct,optimize_coding,264,12,41263);
CheckMemberSize(struct jpeg_compress_struct,CCIR601_sampling,4,12,41264);
CheckOffset(struct jpeg_compress_struct,CCIR601_sampling,268,12,41264);
CheckMemberSize(struct jpeg_compress_struct,smoothing_factor,4,12,41265);
CheckOffset(struct jpeg_compress_struct,smoothing_factor,272,12,41265);
CheckMemberSize(struct jpeg_compress_struct,dct_method,4,12,41266);
CheckOffset(struct jpeg_compress_struct,dct_method,276,12,41266);
CheckMemberSize(struct jpeg_compress_struct,restart_interval,4,12,41267);
CheckOffset(struct jpeg_compress_struct,restart_interval,280,12,41267);
CheckMemberSize(struct jpeg_compress_struct,restart_in_rows,4,12,41268);
CheckOffset(struct jpeg_compress_struct,restart_in_rows,284,12,41268);
CheckMemberSize(struct jpeg_compress_struct,write_JFIF_header,4,12,41269);
CheckOffset(struct jpeg_compress_struct,write_JFIF_header,288,12,41269);
CheckMemberSize(struct jpeg_compress_struct,JFIF_major_version,1,12,41270);
CheckOffset(struct jpeg_compress_struct,JFIF_major_version,292,12,41270);
CheckMemberSize(struct jpeg_compress_struct,JFIF_minor_version,1,12,41271);
CheckOffset(struct jpeg_compress_struct,JFIF_minor_version,293,12,41271);
CheckMemberSize(struct jpeg_compress_struct,density_unit,1,12,41272);
CheckOffset(struct jpeg_compress_struct,density_unit,294,12,41272);
CheckMemberSize(struct jpeg_compress_struct,X_density,2,12,41273);
CheckOffset(struct jpeg_compress_struct,X_density,296,12,41273);
CheckMemberSize(struct jpeg_compress_struct,Y_density,2,12,41274);
CheckOffset(struct jpeg_compress_struct,Y_density,298,12,41274);
CheckMemberSize(struct jpeg_compress_struct,write_Adobe_marker,4,12,41275);
CheckOffset(struct jpeg_compress_struct,write_Adobe_marker,300,12,41275);
CheckMemberSize(struct jpeg_compress_struct,next_scanline,4,12,41276);
CheckOffset(struct jpeg_compress_struct,next_scanline,304,12,41276);
CheckMemberSize(struct jpeg_compress_struct,progressive_mode,4,12,41277);
CheckOffset(struct jpeg_compress_struct,progressive_mode,308,12,41277);
CheckMemberSize(struct jpeg_compress_struct,max_h_samp_factor,4,12,41278);
CheckOffset(struct jpeg_compress_struct,max_h_samp_factor,312,12,41278);
CheckMemberSize(struct jpeg_compress_struct,max_v_samp_factor,4,12,41279);
CheckOffset(struct jpeg_compress_struct,max_v_samp_factor,316,12,41279);
CheckMemberSize(struct jpeg_compress_struct,total_iMCU_rows,4,12,41280);
CheckOffset(struct jpeg_compress_struct,total_iMCU_rows,320,12,41280);
CheckMemberSize(struct jpeg_compress_struct,comps_in_scan,4,12,41281);
CheckOffset(struct jpeg_compress_struct,comps_in_scan,324,12,41281);
CheckMemberSize(struct jpeg_compress_struct,cur_comp_info,32,12,41282);
CheckOffset(struct jpeg_compress_struct,cur_comp_info,328,12,41282);
CheckMemberSize(struct jpeg_compress_struct,MCUs_per_row,4,12,41283);
CheckOffset(struct jpeg_compress_struct,MCUs_per_row,360,12,41283);
CheckMemberSize(struct jpeg_compress_struct,MCU_rows_in_scan,4,12,41284);
CheckOffset(struct jpeg_compress_struct,MCU_rows_in_scan,364,12,41284);
CheckMemberSize(struct jpeg_compress_struct,blocks_in_MCU,4,12,41285);
CheckOffset(struct jpeg_compress_struct,blocks_in_MCU,368,12,41285);
CheckMemberSize(struct jpeg_compress_struct,MCU_membership,40,12,41286);
CheckOffset(struct jpeg_compress_struct,MCU_membership,372,12,41286);
CheckMemberSize(struct jpeg_compress_struct,Ss,4,12,41287);
CheckOffset(struct jpeg_compress_struct,Ss,412,12,41287);
CheckMemberSize(struct jpeg_compress_struct,Se,4,12,41288);
CheckOffset(struct jpeg_compress_struct,Se,416,12,41288);
CheckMemberSize(struct jpeg_compress_struct,Ah,4,12,41289);
CheckOffset(struct jpeg_compress_struct,Ah,420,12,41289);
CheckMemberSize(struct jpeg_compress_struct,Al,4,12,41290);
CheckOffset(struct jpeg_compress_struct,Al,424,12,41290);
CheckMemberSize(struct jpeg_compress_struct,master,8,12,41291);
CheckOffset(struct jpeg_compress_struct,master,432,12,41291);
CheckMemberSize(struct jpeg_compress_struct,main,8,12,41292);
CheckOffset(struct jpeg_compress_struct,main,440,12,41292);
CheckMemberSize(struct jpeg_compress_struct,prep,8,12,41293);
CheckOffset(struct jpeg_compress_struct,prep,448,12,41293);
CheckMemberSize(struct jpeg_compress_struct,coef,8,12,41294);
CheckOffset(struct jpeg_compress_struct,coef,456,12,41294);
CheckMemberSize(struct jpeg_compress_struct,marker,8,12,41295);
CheckOffset(struct jpeg_compress_struct,marker,464,12,41295);
CheckMemberSize(struct jpeg_compress_struct,cconvert,8,12,41296);
CheckOffset(struct jpeg_compress_struct,cconvert,472,12,41296);
CheckMemberSize(struct jpeg_compress_struct,downsample,8,12,41297);
CheckOffset(struct jpeg_compress_struct,downsample,480,12,41297);
CheckMemberSize(struct jpeg_compress_struct,fdct,8,12,41298);
CheckOffset(struct jpeg_compress_struct,fdct,488,12,41298);
CheckMemberSize(struct jpeg_compress_struct,entropy,8,12,41299);
CheckOffset(struct jpeg_compress_struct,entropy,496,12,41299);
CheckMemberSize(struct jpeg_compress_struct,script_space,8,12,41300);
CheckOffset(struct jpeg_compress_struct,script_space,504,12,41300);
CheckMemberSize(struct jpeg_compress_struct,script_space_size,4,12,41301);
CheckOffset(struct jpeg_compress_struct,script_space_size,512,12,41301);
#elif 1
CheckTypeSize(struct jpeg_compress_struct,0, 11359, 1);
Msg("Missing member data for jpeg_compress_struct on All\n");
CheckOffset(struct jpeg_compress_struct,err,0,1,41224);
CheckOffset(struct jpeg_compress_struct,mem,0,1,41225);
CheckOffset(struct jpeg_compress_struct,progress,0,1,41226);
CheckOffset(struct jpeg_compress_struct,client_data,0,1,41227);
CheckOffset(struct jpeg_compress_struct,is_decompressor,0,1,41228);
CheckOffset(struct jpeg_compress_struct,global_state,0,1,41229);
CheckOffset(struct jpeg_compress_struct,dest,0,1,41237);
CheckOffset(struct jpeg_compress_struct,image_width,0,1,41238);
CheckOffset(struct jpeg_compress_struct,image_height,0,1,41239);
CheckOffset(struct jpeg_compress_struct,input_components,0,1,41240);
CheckOffset(struct jpeg_compress_struct,in_color_space,0,1,41241);
CheckOffset(struct jpeg_compress_struct,input_gamma,0,1,41242);
CheckOffset(struct jpeg_compress_struct,data_precision,0,1,41243);
CheckOffset(struct jpeg_compress_struct,num_components,0,1,41244);
CheckOffset(struct jpeg_compress_struct,jpeg_color_space,0,1,41245);
CheckOffset(struct jpeg_compress_struct,comp_info,0,1,41246);
CheckOffset(struct jpeg_compress_struct,quant_tbl_ptrs,0,1,41247);
CheckOffset(struct jpeg_compress_struct,dc_huff_tbl_ptrs,0,1,41248);
CheckOffset(struct jpeg_compress_struct,ac_huff_tbl_ptrs,0,1,41249);
CheckOffset(struct jpeg_compress_struct,arith_dc_L,0,1,41250);
CheckOffset(struct jpeg_compress_struct,arith_dc_U,0,1,41251);
CheckOffset(struct jpeg_compress_struct,arith_ac_K,0,1,41252);
CheckOffset(struct jpeg_compress_struct,num_scans,0,1,41253);
CheckOffset(struct jpeg_compress_struct,scan_info,0,1,41260);
CheckOffset(struct jpeg_compress_struct,raw_data_in,0,1,41261);
CheckOffset(struct jpeg_compress_struct,arith_code,0,1,41262);
CheckOffset(struct jpeg_compress_struct,optimize_coding,0,1,41263);
CheckOffset(struct jpeg_compress_struct,CCIR601_sampling,0,1,41264);
CheckOffset(struct jpeg_compress_struct,smoothing_factor,0,1,41265);
CheckOffset(struct jpeg_compress_struct,dct_method,0,1,41266);
CheckOffset(struct jpeg_compress_struct,restart_interval,0,1,41267);
CheckOffset(struct jpeg_compress_struct,restart_in_rows,0,1,41268);
CheckOffset(struct jpeg_compress_struct,write_JFIF_header,0,1,41269);
CheckOffset(struct jpeg_compress_struct,JFIF_major_version,0,1,41270);
CheckOffset(struct jpeg_compress_struct,JFIF_minor_version,0,1,41271);
CheckOffset(struct jpeg_compress_struct,density_unit,0,1,41272);
CheckOffset(struct jpeg_compress_struct,X_density,0,1,41273);
CheckOffset(struct jpeg_compress_struct,Y_density,0,1,41274);
CheckOffset(struct jpeg_compress_struct,write_Adobe_marker,0,1,41275);
CheckOffset(struct jpeg_compress_struct,next_scanline,0,1,41276);
CheckOffset(struct jpeg_compress_struct,progressive_mode,0,1,41277);
CheckOffset(struct jpeg_compress_struct,max_h_samp_factor,0,1,41278);
CheckOffset(struct jpeg_compress_struct,max_v_samp_factor,0,1,41279);
CheckOffset(struct jpeg_compress_struct,total_iMCU_rows,0,1,41280);
CheckOffset(struct jpeg_compress_struct,comps_in_scan,0,1,41281);
CheckOffset(struct jpeg_compress_struct,cur_comp_info,0,1,41282);
CheckOffset(struct jpeg_compress_struct,MCUs_per_row,0,1,41283);
CheckOffset(struct jpeg_compress_struct,MCU_rows_in_scan,0,1,41284);
CheckOffset(struct jpeg_compress_struct,blocks_in_MCU,0,1,41285);
CheckOffset(struct jpeg_compress_struct,MCU_membership,0,1,41286);
CheckOffset(struct jpeg_compress_struct,Ss,0,1,41287);
CheckOffset(struct jpeg_compress_struct,Se,0,1,41288);
CheckOffset(struct jpeg_compress_struct,Ah,0,1,41289);
CheckOffset(struct jpeg_compress_struct,Al,0,1,41290);
CheckOffset(struct jpeg_compress_struct,master,0,1,41291);
CheckOffset(struct jpeg_compress_struct,main,0,1,41292);
CheckOffset(struct jpeg_compress_struct,prep,0,1,41293);
CheckOffset(struct jpeg_compress_struct,coef,0,1,41294);
CheckOffset(struct jpeg_compress_struct,marker,0,1,41295);
CheckOffset(struct jpeg_compress_struct,cconvert,0,1,41296);
CheckOffset(struct jpeg_compress_struct,downsample,0,1,41297);
CheckOffset(struct jpeg_compress_struct,fdct,0,1,41298);
CheckOffset(struct jpeg_compress_struct,entropy,0,1,41299);
CheckOffset(struct jpeg_compress_struct,script_space,0,1,41300);
CheckOffset(struct jpeg_compress_struct,script_space_size,0,1,41301);
#endif

#if __i386__
CheckTypeSize(struct jpeg_destination_mgr,20, 11360, 2);
CheckMemberSize(struct jpeg_destination_mgr,free_in_buffer,4,2,41231);
CheckOffset(struct jpeg_destination_mgr,free_in_buffer,4,2,41231);
CheckMemberSize(struct jpeg_destination_mgr,init_destination,4,2,41233);
CheckOffset(struct jpeg_destination_mgr,init_destination,8,2,41233);
CheckMemberSize(struct jpeg_destination_mgr,empty_output_buffer,4,2,41235);
CheckOffset(struct jpeg_destination_mgr,empty_output_buffer,12,2,41235);
CheckMemberSize(struct jpeg_destination_mgr,term_destination,4,2,41236);
CheckOffset(struct jpeg_destination_mgr,term_destination,16,2,41236);
#elif __x86_64__
CheckTypeSize(struct jpeg_destination_mgr,40, 11360, 11);
CheckMemberSize(struct jpeg_destination_mgr,free_in_buffer,8,11,41231);
CheckOffset(struct jpeg_destination_mgr,free_in_buffer,8,11,41231);
CheckMemberSize(struct jpeg_destination_mgr,init_destination,8,11,41233);
CheckOffset(struct jpeg_destination_mgr,init_destination,16,11,41233);
CheckMemberSize(struct jpeg_destination_mgr,empty_output_buffer,8,11,41235);
CheckOffset(struct jpeg_destination_mgr,empty_output_buffer,24,11,41235);
CheckMemberSize(struct jpeg_destination_mgr,term_destination,8,11,41236);
CheckOffset(struct jpeg_destination_mgr,term_destination,32,11,41236);
#elif __ia64__
CheckTypeSize(struct jpeg_destination_mgr,40, 11360, 3);
CheckMemberSize(struct jpeg_destination_mgr,free_in_buffer,8,3,41231);
CheckOffset(struct jpeg_destination_mgr,free_in_buffer,8,3,41231);
CheckMemberSize(struct jpeg_destination_mgr,init_destination,8,3,41233);
CheckOffset(struct jpeg_destination_mgr,init_destination,16,3,41233);
CheckMemberSize(struct jpeg_destination_mgr,empty_output_buffer,8,3,41235);
CheckOffset(struct jpeg_destination_mgr,empty_output_buffer,24,3,41235);
CheckMemberSize(struct jpeg_destination_mgr,term_destination,8,3,41236);
CheckOffset(struct jpeg_destination_mgr,term_destination,32,3,41236);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct jpeg_destination_mgr,20, 11360, 6);
CheckMemberSize(struct jpeg_destination_mgr,free_in_buffer,4,6,41231);
CheckOffset(struct jpeg_destination_mgr,free_in_buffer,4,6,41231);
CheckMemberSize(struct jpeg_destination_mgr,init_destination,4,6,41233);
CheckOffset(struct jpeg_destination_mgr,init_destination,8,6,41233);
CheckMemberSize(struct jpeg_destination_mgr,empty_output_buffer,4,6,41235);
CheckOffset(struct jpeg_destination_mgr,empty_output_buffer,12,6,41235);
CheckMemberSize(struct jpeg_destination_mgr,term_destination,4,6,41236);
CheckOffset(struct jpeg_destination_mgr,term_destination,16,6,41236);
#elif __powerpc64__
CheckTypeSize(struct jpeg_destination_mgr,40, 11360, 9);
CheckMemberSize(struct jpeg_destination_mgr,free_in_buffer,8,9,41231);
CheckOffset(struct jpeg_destination_mgr,free_in_buffer,8,9,41231);
CheckMemberSize(struct jpeg_destination_mgr,init_destination,8,9,41233);
CheckOffset(struct jpeg_destination_mgr,init_destination,16,9,41233);
CheckMemberSize(struct jpeg_destination_mgr,empty_output_buffer,8,9,41235);
CheckOffset(struct jpeg_destination_mgr,empty_output_buffer,24,9,41235);
CheckMemberSize(struct jpeg_destination_mgr,term_destination,8,9,41236);
CheckOffset(struct jpeg_destination_mgr,term_destination,32,9,41236);
#elif __s390__ && !__s390x__
CheckTypeSize(struct jpeg_destination_mgr,20, 11360, 10);
CheckMemberSize(struct jpeg_destination_mgr,free_in_buffer,4,10,41231);
CheckOffset(struct jpeg_destination_mgr,free_in_buffer,4,10,41231);
CheckMemberSize(struct jpeg_destination_mgr,init_destination,4,10,41233);
CheckOffset(struct jpeg_destination_mgr,init_destination,8,10,41233);
CheckMemberSize(struct jpeg_destination_mgr,empty_output_buffer,4,10,41235);
CheckOffset(struct jpeg_destination_mgr,empty_output_buffer,12,10,41235);
CheckMemberSize(struct jpeg_destination_mgr,term_destination,4,10,41236);
CheckOffset(struct jpeg_destination_mgr,term_destination,16,10,41236);
#elif __s390x__
CheckTypeSize(struct jpeg_destination_mgr,40, 11360, 12);
CheckMemberSize(struct jpeg_destination_mgr,free_in_buffer,8,12,41231);
CheckOffset(struct jpeg_destination_mgr,free_in_buffer,8,12,41231);
CheckMemberSize(struct jpeg_destination_mgr,init_destination,8,12,41233);
CheckOffset(struct jpeg_destination_mgr,init_destination,16,12,41233);
CheckMemberSize(struct jpeg_destination_mgr,empty_output_buffer,8,12,41235);
CheckOffset(struct jpeg_destination_mgr,empty_output_buffer,24,12,41235);
CheckMemberSize(struct jpeg_destination_mgr,term_destination,8,12,41236);
CheckOffset(struct jpeg_destination_mgr,term_destination,32,12,41236);
#elif 1
CheckTypeSize(struct jpeg_destination_mgr,0, 11360, 1);
Msg("Missing member data for jpeg_destination_mgr on All\n");
CheckOffset(struct jpeg_destination_mgr,next_output_byte,0,1,41230);
CheckOffset(struct jpeg_destination_mgr,free_in_buffer,0,1,41231);
CheckOffset(struct jpeg_destination_mgr,init_destination,0,1,41233);
CheckOffset(struct jpeg_destination_mgr,empty_output_buffer,0,1,41235);
CheckOffset(struct jpeg_destination_mgr,term_destination,0,1,41236);
#endif

#if __i386__
CheckTypeSize(struct jpeg_compress_struct *,4, 11361, 2);
#elif __x86_64__
CheckTypeSize(struct jpeg_compress_struct *,8, 11361, 11);
#elif __ia64__
CheckTypeSize(struct jpeg_compress_struct *,8, 11361, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct jpeg_compress_struct *,4, 11361, 6);
#elif __powerpc64__
CheckTypeSize(struct jpeg_compress_struct *,8, 11361, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(struct jpeg_compress_struct *,4, 11361, 10);
#elif __s390x__
CheckTypeSize(struct jpeg_compress_struct *,8, 11361, 12);
#elif 1
CheckTypeSize(struct jpeg_compress_struct *,0, 11361, 1);
#endif

#if __i386__
CheckTypeSize(j_compress_ptr,4, 11362, 2);
#elif __x86_64__
CheckTypeSize(j_compress_ptr,8, 11362, 11);
#elif __ia64__
CheckTypeSize(j_compress_ptr,8, 11362, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(j_compress_ptr,4, 11362, 6);
#elif __powerpc64__
CheckTypeSize(j_compress_ptr,8, 11362, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(j_compress_ptr,4, 11362, 10);
#elif __s390x__
CheckTypeSize(j_compress_ptr,8, 11362, 12);
#elif 1
CheckTypeSize(j_compress_ptr,0, 11362, 1);
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#elif 1
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#elif 1
#endif

#if __i386__
CheckTypeSize(struct jpeg_destination_mgr *,4, 11365, 2);
#elif __x86_64__
CheckTypeSize(struct jpeg_destination_mgr *,8, 11365, 11);
#elif __ia64__
CheckTypeSize(struct jpeg_destination_mgr *,8, 11365, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct jpeg_destination_mgr *,4, 11365, 6);
#elif __powerpc64__
CheckTypeSize(struct jpeg_destination_mgr *,8, 11365, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(struct jpeg_destination_mgr *,4, 11365, 10);
#elif __s390x__
CheckTypeSize(struct jpeg_destination_mgr *,8, 11365, 12);
#elif 1
CheckTypeSize(struct jpeg_destination_mgr *,0, 11365, 1);
#endif

#if 1
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#elif 1
#endif

#if __i386__
CheckTypeSize(jpeg_scan_info,36, 11368, 2);
#elif __x86_64__
CheckTypeSize(jpeg_scan_info,36, 11368, 11);
#elif __ia64__
CheckTypeSize(jpeg_scan_info,36, 11368, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(jpeg_scan_info,36, 11368, 6);
#elif __powerpc64__
CheckTypeSize(jpeg_scan_info,36, 11368, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(jpeg_scan_info,36, 11368, 10);
#elif __s390x__
CheckTypeSize(jpeg_scan_info,36, 11368, 12);
#elif 1
CheckTypeSize(jpeg_scan_info,0, 11368, 1);
#endif

#if __i386__
CheckTypeSize(const jpeg_scan_info,36, 11369, 2);
#elif __x86_64__
CheckTypeSize(const jpeg_scan_info,36, 11369, 11);
#elif __ia64__
CheckTypeSize(const jpeg_scan_info,36, 11369, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(const jpeg_scan_info,36, 11369, 6);
#elif __powerpc64__
CheckTypeSize(const jpeg_scan_info,36, 11369, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(const jpeg_scan_info,36, 11369, 10);
#elif __s390x__
CheckTypeSize(const jpeg_scan_info,36, 11369, 12);
#elif 1
CheckTypeSize(const jpeg_scan_info,0, 11369, 1);
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#elif 1
#endif

#if __i386__
CheckTypeSize(struct jpeg_comp_master *,4, 11372, 2);
#elif __x86_64__
CheckTypeSize(struct jpeg_comp_master *,8, 11372, 11);
#elif __ia64__
CheckTypeSize(struct jpeg_comp_master *,8, 11372, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct jpeg_comp_master *,4, 11372, 6);
#elif __powerpc64__
CheckTypeSize(struct jpeg_comp_master *,8, 11372, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(struct jpeg_comp_master *,4, 11372, 10);
#elif __s390x__
CheckTypeSize(struct jpeg_comp_master *,8, 11372, 12);
#elif 1
CheckTypeSize(struct jpeg_comp_master *,0, 11372, 1);
#endif

#if __i386__
CheckTypeSize(struct jpeg_c_main_controller *,4, 11374, 2);
#elif __x86_64__
CheckTypeSize(struct jpeg_c_main_controller *,8, 11374, 11);
#elif __ia64__
CheckTypeSize(struct jpeg_c_main_controller *,8, 11374, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct jpeg_c_main_controller *,4, 11374, 6);
#elif __powerpc64__
CheckTypeSize(struct jpeg_c_main_controller *,8, 11374, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(struct jpeg_c_main_controller *,4, 11374, 10);
#elif __s390x__
CheckTypeSize(struct jpeg_c_main_controller *,8, 11374, 12);
#elif 1
CheckTypeSize(struct jpeg_c_main_controller *,0, 11374, 1);
#endif

#if __i386__
CheckTypeSize(struct jpeg_c_prep_controller *,4, 11376, 2);
#elif __x86_64__
CheckTypeSize(struct jpeg_c_prep_controller *,8, 11376, 11);
#elif __ia64__
CheckTypeSize(struct jpeg_c_prep_controller *,8, 11376, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct jpeg_c_prep_controller *,4, 11376, 6);
#elif __powerpc64__
CheckTypeSize(struct jpeg_c_prep_controller *,8, 11376, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(struct jpeg_c_prep_controller *,4, 11376, 10);
#elif __s390x__
CheckTypeSize(struct jpeg_c_prep_controller *,8, 11376, 12);
#elif 1
CheckTypeSize(struct jpeg_c_prep_controller *,0, 11376, 1);
#endif

#if __i386__
CheckTypeSize(struct jpeg_c_coef_controller *,4, 11378, 2);
#elif __x86_64__
CheckTypeSize(struct jpeg_c_coef_controller *,8, 11378, 11);
#elif __ia64__
CheckTypeSize(struct jpeg_c_coef_controller *,8, 11378, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct jpeg_c_coef_controller *,4, 11378, 6);
#elif __powerpc64__
CheckTypeSize(struct jpeg_c_coef_controller *,8, 11378, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(struct jpeg_c_coef_controller *,4, 11378, 10);
#elif __s390x__
CheckTypeSize(struct jpeg_c_coef_controller *,8, 11378, 12);
#elif 1
CheckTypeSize(struct jpeg_c_coef_controller *,0, 11378, 1);
#endif

#if __i386__
CheckTypeSize(struct jpeg_marker_writer *,4, 11380, 2);
#elif __x86_64__
CheckTypeSize(struct jpeg_marker_writer *,8, 11380, 11);
#elif __ia64__
CheckTypeSize(struct jpeg_marker_writer *,8, 11380, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct jpeg_marker_writer *,4, 11380, 6);
#elif __powerpc64__
CheckTypeSize(struct jpeg_marker_writer *,8, 11380, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(struct jpeg_marker_writer *,4, 11380, 10);
#elif __s390x__
CheckTypeSize(struct jpeg_marker_writer *,8, 11380, 12);
#elif 1
CheckTypeSize(struct jpeg_marker_writer *,0, 11380, 1);
#endif

#if __i386__
CheckTypeSize(struct jpeg_color_converter *,4, 11382, 2);
#elif __x86_64__
CheckTypeSize(struct jpeg_color_converter *,8, 11382, 11);
#elif __ia64__
CheckTypeSize(struct jpeg_color_converter *,8, 11382, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct jpeg_color_converter *,4, 11382, 6);
#elif __powerpc64__
CheckTypeSize(struct jpeg_color_converter *,8, 11382, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(struct jpeg_color_converter *,4, 11382, 10);
#elif __s390x__
CheckTypeSize(struct jpeg_color_converter *,8, 11382, 12);
#elif 1
CheckTypeSize(struct jpeg_color_converter *,0, 11382, 1);
#endif

#if __i386__
CheckTypeSize(struct jpeg_downsampler *,4, 11384, 2);
#elif __x86_64__
CheckTypeSize(struct jpeg_downsampler *,8, 11384, 11);
#elif __ia64__
CheckTypeSize(struct jpeg_downsampler *,8, 11384, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct jpeg_downsampler *,4, 11384, 6);
#elif __powerpc64__
CheckTypeSize(struct jpeg_downsampler *,8, 11384, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(struct jpeg_downsampler *,4, 11384, 10);
#elif __s390x__
CheckTypeSize(struct jpeg_downsampler *,8, 11384, 12);
#elif 1
CheckTypeSize(struct jpeg_downsampler *,0, 11384, 1);
#endif

#if __i386__
CheckTypeSize(struct jpeg_forward_dct *,4, 11386, 2);
#elif __x86_64__
CheckTypeSize(struct jpeg_forward_dct *,8, 11386, 11);
#elif __ia64__
CheckTypeSize(struct jpeg_forward_dct *,8, 11386, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct jpeg_forward_dct *,4, 11386, 6);
#elif __powerpc64__
CheckTypeSize(struct jpeg_forward_dct *,8, 11386, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(struct jpeg_forward_dct *,4, 11386, 10);
#elif __s390x__
CheckTypeSize(struct jpeg_forward_dct *,8, 11386, 12);
#elif 1
CheckTypeSize(struct jpeg_forward_dct *,0, 11386, 1);
#endif

#if __i386__
CheckTypeSize(struct jpeg_entropy_encoder *,4, 11388, 2);
#elif __x86_64__
CheckTypeSize(struct jpeg_entropy_encoder *,8, 11388, 11);
#elif __ia64__
CheckTypeSize(struct jpeg_entropy_encoder *,8, 11388, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct jpeg_entropy_encoder *,4, 11388, 6);
#elif __powerpc64__
CheckTypeSize(struct jpeg_entropy_encoder *,8, 11388, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(struct jpeg_entropy_encoder *,4, 11388, 10);
#elif __s390x__
CheckTypeSize(struct jpeg_entropy_encoder *,8, 11388, 12);
#elif 1
CheckTypeSize(struct jpeg_entropy_encoder *,0, 11388, 1);
#endif

#if __i386__
CheckTypeSize(jpeg_scan_info *,4, 11389, 2);
#elif __x86_64__
CheckTypeSize(jpeg_scan_info *,8, 11389, 11);
#elif __ia64__
CheckTypeSize(jpeg_scan_info *,8, 11389, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(jpeg_scan_info *,4, 11389, 6);
#elif __powerpc64__
CheckTypeSize(jpeg_scan_info *,8, 11389, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(jpeg_scan_info *,4, 11389, 10);
#elif __s390x__
CheckTypeSize(jpeg_scan_info *,8, 11389, 12);
#elif 1
CheckTypeSize(jpeg_scan_info *,0, 11389, 1);
#endif

#if __i386__
CheckTypeSize(jvirt_barray_ptr *,4, 11390, 2);
#elif __x86_64__
CheckTypeSize(jvirt_barray_ptr *,8, 11390, 11);
#elif __ia64__
CheckTypeSize(jvirt_barray_ptr *,8, 11390, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(jvirt_barray_ptr *,4, 11390, 6);
#elif __powerpc64__
CheckTypeSize(jvirt_barray_ptr *,8, 11390, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(jvirt_barray_ptr *,4, 11390, 10);
#elif __s390x__
CheckTypeSize(jvirt_barray_ptr *,8, 11390, 12);
#elif 1
CheckTypeSize(jvirt_barray_ptr *,0, 11390, 1);
#endif

#if __i386__
CheckTypeSize(JSAMPARRAY *,4, 11391, 2);
#elif __x86_64__
CheckTypeSize(JSAMPARRAY *,8, 11391, 11);
#elif __ia64__
CheckTypeSize(JSAMPARRAY *,8, 11391, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(JSAMPARRAY *,4, 11391, 6);
#elif __powerpc64__
CheckTypeSize(JSAMPARRAY *,8, 11391, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(JSAMPARRAY *,4, 11391, 10);
#elif __s390x__
CheckTypeSize(JSAMPARRAY *,8, 11391, 12);
#elif 1
CheckTypeSize(JSAMPARRAY *,0, 11391, 1);
#endif

#if __i386__
CheckTypeSize(JSAMPIMAGE,4, 11392, 2);
#elif __x86_64__
CheckTypeSize(JSAMPIMAGE,8, 11392, 11);
#elif __ia64__
CheckTypeSize(JSAMPIMAGE,8, 11392, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(JSAMPIMAGE,4, 11392, 6);
#elif __powerpc64__
CheckTypeSize(JSAMPIMAGE,8, 11392, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(JSAMPIMAGE,4, 11392, 10);
#elif __s390x__
CheckTypeSize(JSAMPIMAGE,8, 11392, 12);
#elif 1
CheckTypeSize(JSAMPIMAGE,0, 11392, 1);
#endif

#if __i386__
CheckTypeSize(jpeg_marker_parser_method,4, 11393, 2);
#elif __x86_64__
CheckTypeSize(jpeg_marker_parser_method,8, 11393, 11);
#elif __ia64__
CheckTypeSize(jpeg_marker_parser_method,8, 11393, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(jpeg_marker_parser_method,4, 11393, 6);
#elif __powerpc64__
CheckTypeSize(jpeg_marker_parser_method,8, 11393, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(jpeg_marker_parser_method,4, 11393, 10);
#elif __s390x__
CheckTypeSize(jpeg_marker_parser_method,8, 11393, 12);
#elif 1
CheckTypeSize(jpeg_marker_parser_method,0, 11393, 1);
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#elif 1
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#elif 1
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
