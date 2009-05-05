/*
 * Test of GL/glext.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include <GL/gl.h>

#include "GL/glext.h"



#ifdef TET_TEST
void GL_glext_h()
{
#else
int GL_glext_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in GL/glext.h\n");
#endif

printf("Checking data structures in GL/glext.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef GL_BLEND_DST_RGB
	CompareConstant(GL_BLEND_DST_RGB,0x80C8,13761,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_BLEND_DST_RGB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BLEND_SRC_RGB
	CompareConstant(GL_BLEND_SRC_RGB,0x80C9,13762,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_BLEND_SRC_RGB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BLEND_DST_ALPHA
	CompareConstant(GL_BLEND_DST_ALPHA,0x80CA,13763,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_BLEND_DST_ALPHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BLEND_SRC_ALPHA
	CompareConstant(GL_BLEND_SRC_ALPHA,0x80CB,13764,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_BLEND_SRC_ALPHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POINT_SIZE_MIN
	CompareConstant(GL_POINT_SIZE_MIN,0x8126,13765,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_POINT_SIZE_MIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POINT_SIZE_MAX
	CompareConstant(GL_POINT_SIZE_MAX,0x8127,13766,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_POINT_SIZE_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POINT_FADE_THRESHOLD_SIZE
	CompareConstant(GL_POINT_FADE_THRESHOLD_SIZE,0x8128,13767,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_POINT_FADE_THRESHOLD_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POINT_DISTANCE_ATTENUATION
	CompareConstant(GL_POINT_DISTANCE_ATTENUATION,0x8129,13768,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_POINT_DISTANCE_ATTENUATION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_GENERATE_MIPMAP
	CompareConstant(GL_GENERATE_MIPMAP,0x8191,13769,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_GENERATE_MIPMAP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_GENERATE_MIPMAP_HINT
	CompareConstant(GL_GENERATE_MIPMAP_HINT,0x8192,13770,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_GENERATE_MIPMAP_HINT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DEPTH_COMPONENT16
	CompareConstant(GL_DEPTH_COMPONENT16,0x81A5,13771,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DEPTH_COMPONENT16\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DEPTH_COMPONENT24
	CompareConstant(GL_DEPTH_COMPONENT24,0x81A6,13772,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DEPTH_COMPONENT24\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DEPTH_COMPONENT32
	CompareConstant(GL_DEPTH_COMPONENT32,0x81A7,13773,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DEPTH_COMPONENT32\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MIRRORED_REPEAT
	CompareConstant(GL_MIRRORED_REPEAT,0x8370,13774,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MIRRORED_REPEAT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FOG_COORDINATE_SOURCE
	CompareConstant(GL_FOG_COORDINATE_SOURCE,0x8450,13775,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FOG_COORDINATE_SOURCE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FOG_COORDINATE
	CompareConstant(GL_FOG_COORDINATE,0x8451,13776,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FOG_COORDINATE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FRAGMENT_DEPTH
	CompareConstant(GL_FRAGMENT_DEPTH,0x8452,13777,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FRAGMENT_DEPTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CURRENT_FOG_COORDINATE
	CompareConstant(GL_CURRENT_FOG_COORDINATE,0x8453,13778,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CURRENT_FOG_COORDINATE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FOG_COORDINATE_ARRAY_TYPE
	CompareConstant(GL_FOG_COORDINATE_ARRAY_TYPE,0x8454,13779,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FOG_COORDINATE_ARRAY_TYPE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FOG_COORDINATE_ARRAY_STRIDE
	CompareConstant(GL_FOG_COORDINATE_ARRAY_STRIDE,0x8455,13780,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FOG_COORDINATE_ARRAY_STRIDE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FOG_COORDINATE_ARRAY_POINTER
	CompareConstant(GL_FOG_COORDINATE_ARRAY_POINTER,0x8456,13781,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FOG_COORDINATE_ARRAY_POINTER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FOG_COORDINATE_ARRAY
	CompareConstant(GL_FOG_COORDINATE_ARRAY,0x8457,13782,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FOG_COORDINATE_ARRAY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_SUM
	CompareConstant(GL_COLOR_SUM,0x8458,13783,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_SUM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CURRENT_SECONDARY_COLOR
	CompareConstant(GL_CURRENT_SECONDARY_COLOR,0x8459,13784,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CURRENT_SECONDARY_COLOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SECONDARY_COLOR_ARRAY_SIZE
	CompareConstant(GL_SECONDARY_COLOR_ARRAY_SIZE,0x845A,13785,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SECONDARY_COLOR_ARRAY_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SECONDARY_COLOR_ARRAY_TYPE
	CompareConstant(GL_SECONDARY_COLOR_ARRAY_TYPE,0x845B,13786,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SECONDARY_COLOR_ARRAY_TYPE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SECONDARY_COLOR_ARRAY_STRIDE
	CompareConstant(GL_SECONDARY_COLOR_ARRAY_STRIDE,0x845C,13787,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SECONDARY_COLOR_ARRAY_STRIDE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SECONDARY_COLOR_ARRAY_POINTER
	CompareConstant(GL_SECONDARY_COLOR_ARRAY_POINTER,0x845D,13788,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SECONDARY_COLOR_ARRAY_POINTER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SECONDARY_COLOR_ARRAY
	CompareConstant(GL_SECONDARY_COLOR_ARRAY,0x845E,13789,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SECONDARY_COLOR_ARRAY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_TEXTURE_LOD_BIAS
	CompareConstant(GL_MAX_TEXTURE_LOD_BIAS,0x84FD,13790,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_TEXTURE_LOD_BIAS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_FILTER_CONTROL
	CompareConstant(GL_TEXTURE_FILTER_CONTROL,0x8500,13791,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_FILTER_CONTROL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_LOD_BIAS
	CompareConstant(GL_TEXTURE_LOD_BIAS,0x8501,13792,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_LOD_BIAS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INCR_WRAP
	CompareConstant(GL_INCR_WRAP,0x8507,13793,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_INCR_WRAP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DECR_WRAP
	CompareConstant(GL_DECR_WRAP,0x8508,13794,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DECR_WRAP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_DEPTH_SIZE
	CompareConstant(GL_TEXTURE_DEPTH_SIZE,0x884A,13795,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_DEPTH_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DEPTH_TEXTURE_MODE
	CompareConstant(GL_DEPTH_TEXTURE_MODE,0x884B,13796,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DEPTH_TEXTURE_MODE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_COMPARE_MODE
	CompareConstant(GL_TEXTURE_COMPARE_MODE,0x884C,13797,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_COMPARE_MODE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_COMPARE_FUNC
	CompareConstant(GL_TEXTURE_COMPARE_FUNC,0x884D,13798,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_COMPARE_FUNC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COMPARE_R_TO_TEXTURE
	CompareConstant(GL_COMPARE_R_TO_TEXTURE,0x884E,13799,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COMPARE_R_TO_TEXTURE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BUFFER_SIZE
	CompareConstant(GL_BUFFER_SIZE,0x8764,13800,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_BUFFER_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BUFFER_USAGE
	CompareConstant(GL_BUFFER_USAGE,0x8765,13801,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_BUFFER_USAGE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_QUERY_COUNTER_BITS
	CompareConstant(GL_QUERY_COUNTER_BITS,0x8864,13802,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_QUERY_COUNTER_BITS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CURRENT_QUERY
	CompareConstant(GL_CURRENT_QUERY,0x8865,13803,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CURRENT_QUERY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_QUERY_RESULT
	CompareConstant(GL_QUERY_RESULT,0x8866,13804,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_QUERY_RESULT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_QUERY_RESULT_AVAILABLE
	CompareConstant(GL_QUERY_RESULT_AVAILABLE,0x8867,13805,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_QUERY_RESULT_AVAILABLE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ARRAY_BUFFER
	CompareConstant(GL_ARRAY_BUFFER,0x8892,13806,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ARRAY_BUFFER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ELEMENT_ARRAY_BUFFER
	CompareConstant(GL_ELEMENT_ARRAY_BUFFER,0x8893,13807,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ELEMENT_ARRAY_BUFFER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ARRAY_BUFFER_BINDING
	CompareConstant(GL_ARRAY_BUFFER_BINDING,0x8894,13808,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ARRAY_BUFFER_BINDING\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ELEMENT_ARRAY_BUFFER_BINDING
	CompareConstant(GL_ELEMENT_ARRAY_BUFFER_BINDING,0x8895,13809,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ELEMENT_ARRAY_BUFFER_BINDING\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_ARRAY_BUFFER_BINDING
	CompareConstant(GL_VERTEX_ARRAY_BUFFER_BINDING,0x8896,13810,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX_ARRAY_BUFFER_BINDING\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_NORMAL_ARRAY_BUFFER_BINDING
	CompareConstant(GL_NORMAL_ARRAY_BUFFER_BINDING,0x8897,13811,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_NORMAL_ARRAY_BUFFER_BINDING\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_ARRAY_BUFFER_BINDING
	CompareConstant(GL_COLOR_ARRAY_BUFFER_BINDING,0x8898,13812,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_ARRAY_BUFFER_BINDING\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INDEX_ARRAY_BUFFER_BINDING
	CompareConstant(GL_INDEX_ARRAY_BUFFER_BINDING,0x8899,13813,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_INDEX_ARRAY_BUFFER_BINDING\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING
	CompareConstant(GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING,0x889A,13814,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EDGE_FLAG_ARRAY_BUFFER_BINDING
	CompareConstant(GL_EDGE_FLAG_ARRAY_BUFFER_BINDING,0x889B,13815,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EDGE_FLAG_ARRAY_BUFFER_BINDING\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SECONDARY_COLOR_ARRAY_BUFFER_BINDING
	CompareConstant(GL_SECONDARY_COLOR_ARRAY_BUFFER_BINDING,0x889C,13816,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SECONDARY_COLOR_ARRAY_BUFFER_BINDING\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FOG_COORDINATE_ARRAY_BUFFER_BINDING
	CompareConstant(GL_FOG_COORDINATE_ARRAY_BUFFER_BINDING,0x889D,13817,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FOG_COORDINATE_ARRAY_BUFFER_BINDING\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_WEIGHT_ARRAY_BUFFER_BINDING
	CompareConstant(GL_WEIGHT_ARRAY_BUFFER_BINDING,0x889E,13818,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_WEIGHT_ARRAY_BUFFER_BINDING\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING
	CompareConstant(GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING,0x889F,13819,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_READ_ONLY
	CompareConstant(GL_READ_ONLY,0x88B8,13820,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_READ_ONLY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_WRITE_ONLY
	CompareConstant(GL_WRITE_ONLY,0x88B9,13821,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_WRITE_ONLY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_READ_WRITE
	CompareConstant(GL_READ_WRITE,0x88BA,13822,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_READ_WRITE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BUFFER_ACCESS
	CompareConstant(GL_BUFFER_ACCESS,0x88BB,13823,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_BUFFER_ACCESS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BUFFER_MAPPED
	CompareConstant(GL_BUFFER_MAPPED,0x88BC,13824,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_BUFFER_MAPPED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BUFFER_MAP_POINTER
	CompareConstant(GL_BUFFER_MAP_POINTER,0x88BD,13825,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_BUFFER_MAP_POINTER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_STREAM_DRAW
	CompareConstant(GL_STREAM_DRAW,0x88E0,13826,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_STREAM_DRAW\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_STREAM_READ
	CompareConstant(GL_STREAM_READ,0x88E1,13827,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_STREAM_READ\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_STREAM_COPY
	CompareConstant(GL_STREAM_COPY,0x88E2,13828,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_STREAM_COPY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_STATIC_DRAW
	CompareConstant(GL_STATIC_DRAW,0x88E4,13829,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_STATIC_DRAW\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_STATIC_READ
	CompareConstant(GL_STATIC_READ,0x88E5,13830,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_STATIC_READ\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_STATIC_COPY
	CompareConstant(GL_STATIC_COPY,0x88E6,13831,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_STATIC_COPY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DYNAMIC_DRAW
	CompareConstant(GL_DYNAMIC_DRAW,0x88E8,13832,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DYNAMIC_DRAW\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DYNAMIC_READ
	CompareConstant(GL_DYNAMIC_READ,0x88E9,13833,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DYNAMIC_READ\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DYNAMIC_COPY
	CompareConstant(GL_DYNAMIC_COPY,0x88EA,13834,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DYNAMIC_COPY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SAMPLES_PASSED
	CompareConstant(GL_SAMPLES_PASSED,0x8914,13835,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SAMPLES_PASSED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FOG_COORD_SRC
	CompareConstant(GL_FOG_COORD_SRC,GL_FOG_COORDINATE_SOURCE,13836,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FOG_COORD_SRC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FOG_COORD
	CompareConstant(GL_FOG_COORD,GL_FOG_COORDINATE,13837,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FOG_COORD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CURRENT_FOG_COORD
	CompareConstant(GL_CURRENT_FOG_COORD,GL_CURRENT_FOG_COORDINATE,13838,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CURRENT_FOG_COORD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FOG_COORD_ARRAY_TYPE
	CompareConstant(GL_FOG_COORD_ARRAY_TYPE,GL_FOG_COORDINATE_ARRAY_TYPE,13839,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FOG_COORD_ARRAY_TYPE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FOG_COORD_ARRAY_STRIDE
	CompareConstant(GL_FOG_COORD_ARRAY_STRIDE,GL_FOG_COORDINATE_ARRAY_STRIDE,13840,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FOG_COORD_ARRAY_STRIDE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FOG_COORD_ARRAY_POINTER
	CompareConstant(GL_FOG_COORD_ARRAY_POINTER,GL_FOG_COORDINATE_ARRAY_POINTER,13841,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FOG_COORD_ARRAY_POINTER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FOG_COORD_ARRAY
	CompareConstant(GL_FOG_COORD_ARRAY,GL_FOG_COORDINATE_ARRAY,13842,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FOG_COORD_ARRAY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FOG_COORD_ARRAY_BUFFER_BINDING
	CompareConstant(GL_FOG_COORD_ARRAY_BUFFER_BINDING, \
	GL_FOG_COORDINATE_ARRAY_BUFFER_BINDING,13843,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FOG_COORD_ARRAY_BUFFER_BINDING\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SRC0_RGB
	CompareConstant(GL_SRC0_RGB,GL_SOURCE0_RGB,13844,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SRC0_RGB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SRC1_RGB
	CompareConstant(GL_SRC1_RGB,GL_SOURCE1_RGB,13845,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SRC1_RGB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SRC2_RGB
	CompareConstant(GL_SRC2_RGB,GL_SOURCE2_RGB,13846,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SRC2_RGB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SRC0_ALPHA
	CompareConstant(GL_SRC0_ALPHA,GL_SOURCE0_ALPHA,13847,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SRC0_ALPHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SRC1_ALPHA
	CompareConstant(GL_SRC1_ALPHA,GL_SOURCE1_ALPHA,13848,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SRC1_ALPHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SRC2_ALPHA
	CompareConstant(GL_SRC2_ALPHA,GL_SOURCE2_ALPHA,13849,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SRC2_ALPHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BLEND_EQUATION_RGB
	CompareConstant(GL_BLEND_EQUATION_RGB,GL_BLEND_EQUATION,13850,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_BLEND_EQUATION_RGB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_ATTRIB_ARRAY_ENABLED
	CompareConstant(GL_VERTEX_ATTRIB_ARRAY_ENABLED,0x8622,13851,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX_ATTRIB_ARRAY_ENABLED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_ATTRIB_ARRAY_SIZE
	CompareConstant(GL_VERTEX_ATTRIB_ARRAY_SIZE,0x8623,13852,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX_ATTRIB_ARRAY_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_ATTRIB_ARRAY_STRIDE
	CompareConstant(GL_VERTEX_ATTRIB_ARRAY_STRIDE,0x8624,13853,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX_ATTRIB_ARRAY_STRIDE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_ATTRIB_ARRAY_TYPE
	CompareConstant(GL_VERTEX_ATTRIB_ARRAY_TYPE,0x8625,13854,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX_ATTRIB_ARRAY_TYPE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CURRENT_VERTEX_ATTRIB
	CompareConstant(GL_CURRENT_VERTEX_ATTRIB,0x8626,13855,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CURRENT_VERTEX_ATTRIB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_PROGRAM_POINT_SIZE
	CompareConstant(GL_VERTEX_PROGRAM_POINT_SIZE,0x8642,13856,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX_PROGRAM_POINT_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_PROGRAM_TWO_SIDE
	CompareConstant(GL_VERTEX_PROGRAM_TWO_SIDE,0x8643,13857,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX_PROGRAM_TWO_SIDE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_ATTRIB_ARRAY_POINTER
	CompareConstant(GL_VERTEX_ATTRIB_ARRAY_POINTER,0x8645,13858,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX_ATTRIB_ARRAY_POINTER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_STENCIL_BACK_FUNC
	CompareConstant(GL_STENCIL_BACK_FUNC,0x8800,13859,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_STENCIL_BACK_FUNC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_STENCIL_BACK_FAIL
	CompareConstant(GL_STENCIL_BACK_FAIL,0x8801,13860,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_STENCIL_BACK_FAIL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_STENCIL_BACK_PASS_DEPTH_FAIL
	CompareConstant(GL_STENCIL_BACK_PASS_DEPTH_FAIL,0x8802,13861,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_STENCIL_BACK_PASS_DEPTH_FAIL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_STENCIL_BACK_PASS_DEPTH_PASS
	CompareConstant(GL_STENCIL_BACK_PASS_DEPTH_PASS,0x8803,13862,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_STENCIL_BACK_PASS_DEPTH_PASS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_DRAW_BUFFERS
	CompareConstant(GL_MAX_DRAW_BUFFERS,0x8824,13863,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_DRAW_BUFFERS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DRAW_BUFFER0
	CompareConstant(GL_DRAW_BUFFER0,0x8825,13864,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DRAW_BUFFER0\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DRAW_BUFFER1
	CompareConstant(GL_DRAW_BUFFER1,0x8826,13865,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DRAW_BUFFER1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DRAW_BUFFER2
	CompareConstant(GL_DRAW_BUFFER2,0x8827,13866,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DRAW_BUFFER2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DRAW_BUFFER3
	CompareConstant(GL_DRAW_BUFFER3,0x8828,13867,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DRAW_BUFFER3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DRAW_BUFFER4
	CompareConstant(GL_DRAW_BUFFER4,0x8829,13868,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DRAW_BUFFER4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DRAW_BUFFER5
	CompareConstant(GL_DRAW_BUFFER5,0x882A,13869,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DRAW_BUFFER5\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DRAW_BUFFER6
	CompareConstant(GL_DRAW_BUFFER6,0x882B,13870,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DRAW_BUFFER6\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DRAW_BUFFER7
	CompareConstant(GL_DRAW_BUFFER7,0x882C,13871,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DRAW_BUFFER7\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DRAW_BUFFER8
	CompareConstant(GL_DRAW_BUFFER8,0x882D,13872,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DRAW_BUFFER8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DRAW_BUFFER9
	CompareConstant(GL_DRAW_BUFFER9,0x882E,13873,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DRAW_BUFFER9\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DRAW_BUFFER10
	CompareConstant(GL_DRAW_BUFFER10,0x882F,13874,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DRAW_BUFFER10\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DRAW_BUFFER11
	CompareConstant(GL_DRAW_BUFFER11,0x8830,13875,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DRAW_BUFFER11\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DRAW_BUFFER12
	CompareConstant(GL_DRAW_BUFFER12,0x8831,13876,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DRAW_BUFFER12\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DRAW_BUFFER13
	CompareConstant(GL_DRAW_BUFFER13,0x8832,13877,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DRAW_BUFFER13\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DRAW_BUFFER14
	CompareConstant(GL_DRAW_BUFFER14,0x8833,13878,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DRAW_BUFFER14\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DRAW_BUFFER15
	CompareConstant(GL_DRAW_BUFFER15,0x8834,13879,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DRAW_BUFFER15\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BLEND_EQUATION_ALPHA
	CompareConstant(GL_BLEND_EQUATION_ALPHA,0x883D,13880,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_BLEND_EQUATION_ALPHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POINT_SPRITE
	CompareConstant(GL_POINT_SPRITE,0x8861,13881,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_POINT_SPRITE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COORD_REPLACE
	CompareConstant(GL_COORD_REPLACE,0x8862,13882,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COORD_REPLACE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_VERTEX_ATTRIBS
	CompareConstant(GL_MAX_VERTEX_ATTRIBS,0x8869,13883,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_VERTEX_ATTRIBS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_ATTRIB_ARRAY_NORMALIZED
	CompareConstant(GL_VERTEX_ATTRIB_ARRAY_NORMALIZED,0x886A,13884,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX_ATTRIB_ARRAY_NORMALIZED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_TEXTURE_COORDS
	CompareConstant(GL_MAX_TEXTURE_COORDS,0x8871,13885,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_TEXTURE_COORDS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_TEXTURE_IMAGE_UNITS
	CompareConstant(GL_MAX_TEXTURE_IMAGE_UNITS,0x8872,13886,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_TEXTURE_IMAGE_UNITS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FRAGMENT_SHADER
	CompareConstant(GL_FRAGMENT_SHADER,0x8B30,13887,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FRAGMENT_SHADER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_SHADER
	CompareConstant(GL_VERTEX_SHADER,0x8B31,13888,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX_SHADER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_FRAGMENT_UNIFORM_COMPONENTS
	CompareConstant(GL_MAX_FRAGMENT_UNIFORM_COMPONENTS,0x8B49,13889,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_FRAGMENT_UNIFORM_COMPONENTS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_VERTEX_UNIFORM_COMPONENTS
	CompareConstant(GL_MAX_VERTEX_UNIFORM_COMPONENTS,0x8B4A,13890,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_VERTEX_UNIFORM_COMPONENTS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_VARYING_FLOATS
	CompareConstant(GL_MAX_VARYING_FLOATS,0x8B4B,13891,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_VARYING_FLOATS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS
	CompareConstant(GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS,0x8B4C,13892,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS
	CompareConstant(GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS,0x8B4D,13893,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SHADER_TYPE
	CompareConstant(GL_SHADER_TYPE,0x8B4F,13894,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SHADER_TYPE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FLOAT_VEC2
	CompareConstant(GL_FLOAT_VEC2,0x8B50,13895,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FLOAT_VEC2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FLOAT_VEC3
	CompareConstant(GL_FLOAT_VEC3,0x8B51,13896,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FLOAT_VEC3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FLOAT_VEC4
	CompareConstant(GL_FLOAT_VEC4,0x8B52,13897,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FLOAT_VEC4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INT_VEC2
	CompareConstant(GL_INT_VEC2,0x8B53,13898,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_INT_VEC2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INT_VEC3
	CompareConstant(GL_INT_VEC3,0x8B54,13899,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_INT_VEC3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INT_VEC4
	CompareConstant(GL_INT_VEC4,0x8B55,13900,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_INT_VEC4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BOOL
	CompareConstant(GL_BOOL,0x8B56,13901,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_BOOL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BOOL_VEC2
	CompareConstant(GL_BOOL_VEC2,0x8B57,13902,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_BOOL_VEC2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BOOL_VEC3
	CompareConstant(GL_BOOL_VEC3,0x8B58,13903,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_BOOL_VEC3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BOOL_VEC4
	CompareConstant(GL_BOOL_VEC4,0x8B59,13904,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_BOOL_VEC4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FLOAT_MAT2
	CompareConstant(GL_FLOAT_MAT2,0x8B5A,13905,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FLOAT_MAT2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FLOAT_MAT3
	CompareConstant(GL_FLOAT_MAT3,0x8B5B,13906,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FLOAT_MAT3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FLOAT_MAT4
	CompareConstant(GL_FLOAT_MAT4,0x8B5C,13907,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FLOAT_MAT4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SAMPLER_1D
	CompareConstant(GL_SAMPLER_1D,0x8B5D,13908,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SAMPLER_1D\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SAMPLER_2D
	CompareConstant(GL_SAMPLER_2D,0x8B5E,13909,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SAMPLER_2D\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SAMPLER_3D
	CompareConstant(GL_SAMPLER_3D,0x8B5F,13910,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SAMPLER_3D\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SAMPLER_CUBE
	CompareConstant(GL_SAMPLER_CUBE,0x8B60,13911,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SAMPLER_CUBE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SAMPLER_1D_SHADOW
	CompareConstant(GL_SAMPLER_1D_SHADOW,0x8B61,13912,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SAMPLER_1D_SHADOW\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SAMPLER_2D_SHADOW
	CompareConstant(GL_SAMPLER_2D_SHADOW,0x8B62,13913,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SAMPLER_2D_SHADOW\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DELETE_STATUS
	CompareConstant(GL_DELETE_STATUS,0x8B80,13914,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DELETE_STATUS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COMPILE_STATUS
	CompareConstant(GL_COMPILE_STATUS,0x8B81,13915,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COMPILE_STATUS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LINK_STATUS
	CompareConstant(GL_LINK_STATUS,0x8B82,13916,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_LINK_STATUS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VALIDATE_STATUS
	CompareConstant(GL_VALIDATE_STATUS,0x8B83,13917,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VALIDATE_STATUS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INFO_LOG_LENGTH
	CompareConstant(GL_INFO_LOG_LENGTH,0x8B84,13918,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_INFO_LOG_LENGTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ATTACHED_SHADERS
	CompareConstant(GL_ATTACHED_SHADERS,0x8B85,13919,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ATTACHED_SHADERS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ACTIVE_UNIFORMS
	CompareConstant(GL_ACTIVE_UNIFORMS,0x8B86,13920,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ACTIVE_UNIFORMS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ACTIVE_UNIFORM_MAX_LENGTH
	CompareConstant(GL_ACTIVE_UNIFORM_MAX_LENGTH,0x8B87,13921,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ACTIVE_UNIFORM_MAX_LENGTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SHADER_SOURCE_LENGTH
	CompareConstant(GL_SHADER_SOURCE_LENGTH,0x8B88,13922,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SHADER_SOURCE_LENGTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ACTIVE_ATTRIBUTES
	CompareConstant(GL_ACTIVE_ATTRIBUTES,0x8B89,13923,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ACTIVE_ATTRIBUTES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ACTIVE_ATTRIBUTE_MAX_LENGTH
	CompareConstant(GL_ACTIVE_ATTRIBUTE_MAX_LENGTH,0x8B8A,13924,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ACTIVE_ATTRIBUTE_MAX_LENGTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FRAGMENT_SHADER_DERIVATIVE_HINT
	CompareConstant(GL_FRAGMENT_SHADER_DERIVATIVE_HINT,0x8B8B,13925,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FRAGMENT_SHADER_DERIVATIVE_HINT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SHADING_LANGUAGE_VERSION
	CompareConstant(GL_SHADING_LANGUAGE_VERSION,0x8B8C,13926,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SHADING_LANGUAGE_VERSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CURRENT_PROGRAM
	CompareConstant(GL_CURRENT_PROGRAM,0x8B8D,13927,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CURRENT_PROGRAM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POINT_SPRITE_COORD_ORIGIN
	CompareConstant(GL_POINT_SPRITE_COORD_ORIGIN,0x8CA0,13928,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_POINT_SPRITE_COORD_ORIGIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LOWER_LEFT
	CompareConstant(GL_LOWER_LEFT,0x8CA1,13929,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_LOWER_LEFT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_UPPER_LEFT
	CompareConstant(GL_UPPER_LEFT,0x8CA2,13930,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_UPPER_LEFT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_STENCIL_BACK_REF
	CompareConstant(GL_STENCIL_BACK_REF,0x8CA3,13931,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_STENCIL_BACK_REF\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_STENCIL_BACK_VALUE_MASK
	CompareConstant(GL_STENCIL_BACK_VALUE_MASK,0x8CA4,13932,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_STENCIL_BACK_VALUE_MASK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_STENCIL_BACK_WRITEMASK
	CompareConstant(GL_STENCIL_BACK_WRITEMASK,0x8CA5,13933,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_STENCIL_BACK_WRITEMASK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TRANSPOSE_MODELVIEW_MATRIX_ARB
	CompareConstant(GL_TRANSPOSE_MODELVIEW_MATRIX_ARB,0x84E3,13957,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TRANSPOSE_MODELVIEW_MATRIX_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TRANSPOSE_PROJECTION_MATRIX_ARB
	CompareConstant(GL_TRANSPOSE_PROJECTION_MATRIX_ARB,0x84E4,13958,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TRANSPOSE_PROJECTION_MATRIX_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TRANSPOSE_TEXTURE_MATRIX_ARB
	CompareConstant(GL_TRANSPOSE_TEXTURE_MATRIX_ARB,0x84E5,13959,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TRANSPOSE_TEXTURE_MATRIX_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TRANSPOSE_COLOR_MATRIX_ARB
	CompareConstant(GL_TRANSPOSE_COLOR_MATRIX_ARB,0x84E6,13960,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TRANSPOSE_COLOR_MATRIX_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MULTISAMPLE_ARB
	CompareConstant(GL_MULTISAMPLE_ARB,0x809D,13961,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MULTISAMPLE_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SAMPLE_ALPHA_TO_COVERAGE_ARB
	CompareConstant(GL_SAMPLE_ALPHA_TO_COVERAGE_ARB,0x809E,13962,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SAMPLE_ALPHA_TO_COVERAGE_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SAMPLE_ALPHA_TO_ONE_ARB
	CompareConstant(GL_SAMPLE_ALPHA_TO_ONE_ARB,0x809F,13963,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SAMPLE_ALPHA_TO_ONE_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SAMPLE_COVERAGE_ARB
	CompareConstant(GL_SAMPLE_COVERAGE_ARB,0x80A0,13964,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SAMPLE_COVERAGE_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SAMPLE_BUFFERS_ARB
	CompareConstant(GL_SAMPLE_BUFFERS_ARB,0x80A8,13965,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SAMPLE_BUFFERS_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SAMPLES_ARB
	CompareConstant(GL_SAMPLES_ARB,0x80A9,13966,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SAMPLES_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SAMPLE_COVERAGE_VALUE_ARB
	CompareConstant(GL_SAMPLE_COVERAGE_VALUE_ARB,0x80AA,13967,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SAMPLE_COVERAGE_VALUE_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SAMPLE_COVERAGE_INVERT_ARB
	CompareConstant(GL_SAMPLE_COVERAGE_INVERT_ARB,0x80AB,13968,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SAMPLE_COVERAGE_INVERT_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MULTISAMPLE_BIT_ARB
	CompareConstant(GL_MULTISAMPLE_BIT_ARB,0x20000000,13969,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MULTISAMPLE_BIT_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_NORMAL_MAP_ARB
	CompareConstant(GL_NORMAL_MAP_ARB,0x8511,13970,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_NORMAL_MAP_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_REFLECTION_MAP_ARB
	CompareConstant(GL_REFLECTION_MAP_ARB,0x8512,13971,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_REFLECTION_MAP_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_CUBE_MAP_ARB
	CompareConstant(GL_TEXTURE_CUBE_MAP_ARB,0x8513,13972,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_CUBE_MAP_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_BINDING_CUBE_MAP_ARB
	CompareConstant(GL_TEXTURE_BINDING_CUBE_MAP_ARB,0x8514,13973,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_BINDING_CUBE_MAP_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_CUBE_MAP_POSITIVE_X_ARB
	CompareConstant(GL_TEXTURE_CUBE_MAP_POSITIVE_X_ARB,0x8515,13974,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_CUBE_MAP_POSITIVE_X_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_CUBE_MAP_NEGATIVE_X_ARB
	CompareConstant(GL_TEXTURE_CUBE_MAP_NEGATIVE_X_ARB,0x8516,13975,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_CUBE_MAP_NEGATIVE_X_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_CUBE_MAP_POSITIVE_Y_ARB
	CompareConstant(GL_TEXTURE_CUBE_MAP_POSITIVE_Y_ARB,0x8517,13976,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_CUBE_MAP_POSITIVE_Y_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_ARB
	CompareConstant(GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_ARB,0x8518,13977,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_CUBE_MAP_POSITIVE_Z_ARB
	CompareConstant(GL_TEXTURE_CUBE_MAP_POSITIVE_Z_ARB,0x8519,13978,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_CUBE_MAP_POSITIVE_Z_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_ARB
	CompareConstant(GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_ARB,0x851A,13979,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PROXY_TEXTURE_CUBE_MAP_ARB
	CompareConstant(GL_PROXY_TEXTURE_CUBE_MAP_ARB,0x851B,13980,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PROXY_TEXTURE_CUBE_MAP_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_CUBE_MAP_TEXTURE_SIZE_ARB
	CompareConstant(GL_MAX_CUBE_MAP_TEXTURE_SIZE_ARB,0x851C,13981,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_CUBE_MAP_TEXTURE_SIZE_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COMPRESSED_ALPHA_ARB
	CompareConstant(GL_COMPRESSED_ALPHA_ARB,0x84E9,13982,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COMPRESSED_ALPHA_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COMPRESSED_LUMINANCE_ARB
	CompareConstant(GL_COMPRESSED_LUMINANCE_ARB,0x84EA,13983,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COMPRESSED_LUMINANCE_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COMPRESSED_LUMINANCE_ALPHA_ARB
	CompareConstant(GL_COMPRESSED_LUMINANCE_ALPHA_ARB,0x84EB,13984,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COMPRESSED_LUMINANCE_ALPHA_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COMPRESSED_INTENSITY_ARB
	CompareConstant(GL_COMPRESSED_INTENSITY_ARB,0x84EC,13985,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COMPRESSED_INTENSITY_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COMPRESSED_RGB_ARB
	CompareConstant(GL_COMPRESSED_RGB_ARB,0x84ED,13986,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COMPRESSED_RGB_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COMPRESSED_RGBA_ARB
	CompareConstant(GL_COMPRESSED_RGBA_ARB,0x84EE,13987,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COMPRESSED_RGBA_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_COMPRESSION_HINT_ARB
	CompareConstant(GL_TEXTURE_COMPRESSION_HINT_ARB,0x84EF,13988,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_COMPRESSION_HINT_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_COMPRESSED_IMAGE_SIZE_ARB
	CompareConstant(GL_TEXTURE_COMPRESSED_IMAGE_SIZE_ARB,0x86A0,13989,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_COMPRESSED_IMAGE_SIZE_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_COMPRESSED_ARB
	CompareConstant(GL_TEXTURE_COMPRESSED_ARB,0x86A1,13990,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_COMPRESSED_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_NUM_COMPRESSED_TEXTURE_FORMATS_ARB
	CompareConstant(GL_NUM_COMPRESSED_TEXTURE_FORMATS_ARB,0x86A2,13991,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_NUM_COMPRESSED_TEXTURE_FORMATS_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COMPRESSED_TEXTURE_FORMATS_ARB
	CompareConstant(GL_COMPRESSED_TEXTURE_FORMATS_ARB,0x86A3,13992,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COMPRESSED_TEXTURE_FORMATS_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CLAMP_TO_BORDER_ARB
	CompareConstant(GL_CLAMP_TO_BORDER_ARB,0x812D,13993,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CLAMP_TO_BORDER_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POINT_SIZE_MIN_ARB
	CompareConstant(GL_POINT_SIZE_MIN_ARB,0x8126,13994,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_POINT_SIZE_MIN_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POINT_SIZE_MAX_ARB
	CompareConstant(GL_POINT_SIZE_MAX_ARB,0x8127,13995,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_POINT_SIZE_MAX_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POINT_FADE_THRESHOLD_SIZE_ARB
	CompareConstant(GL_POINT_FADE_THRESHOLD_SIZE_ARB,0x8128,13996,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_POINT_FADE_THRESHOLD_SIZE_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POINT_DISTANCE_ATTENUATION_ARB
	CompareConstant(GL_POINT_DISTANCE_ATTENUATION_ARB,0x8129,13997,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_POINT_DISTANCE_ATTENUATION_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_VERTEX_UNITS_ARB
	CompareConstant(GL_MAX_VERTEX_UNITS_ARB,0x86A4,13998,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_VERTEX_UNITS_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ACTIVE_VERTEX_UNITS_ARB
	CompareConstant(GL_ACTIVE_VERTEX_UNITS_ARB,0x86A5,13999,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ACTIVE_VERTEX_UNITS_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_WEIGHT_SUM_UNITY_ARB
	CompareConstant(GL_WEIGHT_SUM_UNITY_ARB,0x86A6,14000,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_WEIGHT_SUM_UNITY_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_BLEND_ARB
	CompareConstant(GL_VERTEX_BLEND_ARB,0x86A7,14001,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX_BLEND_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CURRENT_WEIGHT_ARB
	CompareConstant(GL_CURRENT_WEIGHT_ARB,0x86A8,14002,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CURRENT_WEIGHT_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_WEIGHT_ARRAY_TYPE_ARB
	CompareConstant(GL_WEIGHT_ARRAY_TYPE_ARB,0x86A9,14003,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_WEIGHT_ARRAY_TYPE_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_WEIGHT_ARRAY_STRIDE_ARB
	CompareConstant(GL_WEIGHT_ARRAY_STRIDE_ARB,0x86AA,14004,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_WEIGHT_ARRAY_STRIDE_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_WEIGHT_ARRAY_SIZE_ARB
	CompareConstant(GL_WEIGHT_ARRAY_SIZE_ARB,0x86AB,14005,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_WEIGHT_ARRAY_SIZE_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_WEIGHT_ARRAY_POINTER_ARB
	CompareConstant(GL_WEIGHT_ARRAY_POINTER_ARB,0x86AC,14006,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_WEIGHT_ARRAY_POINTER_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_WEIGHT_ARRAY_ARB
	CompareConstant(GL_WEIGHT_ARRAY_ARB,0x86AD,14007,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_WEIGHT_ARRAY_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MODELVIEW0_ARB
	CompareConstant(GL_MODELVIEW0_ARB,0x1700,14008,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MODELVIEW0_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MODELVIEW1_ARB
	CompareConstant(GL_MODELVIEW1_ARB,0x850A,14009,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MODELVIEW1_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MODELVIEW2_ARB
	CompareConstant(GL_MODELVIEW2_ARB,0x8722,14010,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MODELVIEW2_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MODELVIEW3_ARB
	CompareConstant(GL_MODELVIEW3_ARB,0x8723,14011,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MODELVIEW3_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MODELVIEW4_ARB
	CompareConstant(GL_MODELVIEW4_ARB,0x8724,14012,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MODELVIEW4_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MODELVIEW5_ARB
	CompareConstant(GL_MODELVIEW5_ARB,0x8725,14013,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MODELVIEW5_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MODELVIEW6_ARB
	CompareConstant(GL_MODELVIEW6_ARB,0x8726,14014,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MODELVIEW6_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MODELVIEW7_ARB
	CompareConstant(GL_MODELVIEW7_ARB,0x8727,14015,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MODELVIEW7_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MODELVIEW8_ARB
	CompareConstant(GL_MODELVIEW8_ARB,0x8728,14016,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MODELVIEW8_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MODELVIEW9_ARB
	CompareConstant(GL_MODELVIEW9_ARB,0x8729,14017,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MODELVIEW9_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MODELVIEW10_ARB
	CompareConstant(GL_MODELVIEW10_ARB,0x872A,14018,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MODELVIEW10_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MODELVIEW11_ARB
	CompareConstant(GL_MODELVIEW11_ARB,0x872B,14019,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MODELVIEW11_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MODELVIEW12_ARB
	CompareConstant(GL_MODELVIEW12_ARB,0x872C,14020,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MODELVIEW12_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MODELVIEW13_ARB
	CompareConstant(GL_MODELVIEW13_ARB,0x872D,14021,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MODELVIEW13_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MODELVIEW14_ARB
	CompareConstant(GL_MODELVIEW14_ARB,0x872E,14022,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MODELVIEW14_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MODELVIEW15_ARB
	CompareConstant(GL_MODELVIEW15_ARB,0x872F,14023,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MODELVIEW15_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MODELVIEW16_ARB
	CompareConstant(GL_MODELVIEW16_ARB,0x8730,14024,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MODELVIEW16_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MODELVIEW17_ARB
	CompareConstant(GL_MODELVIEW17_ARB,0x8731,14025,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MODELVIEW17_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MODELVIEW18_ARB
	CompareConstant(GL_MODELVIEW18_ARB,0x8732,14026,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MODELVIEW18_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MODELVIEW19_ARB
	CompareConstant(GL_MODELVIEW19_ARB,0x8733,14027,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MODELVIEW19_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MODELVIEW20_ARB
	CompareConstant(GL_MODELVIEW20_ARB,0x8734,14028,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MODELVIEW20_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MODELVIEW21_ARB
	CompareConstant(GL_MODELVIEW21_ARB,0x8735,14029,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MODELVIEW21_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MODELVIEW22_ARB
	CompareConstant(GL_MODELVIEW22_ARB,0x8736,14030,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MODELVIEW22_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MODELVIEW23_ARB
	CompareConstant(GL_MODELVIEW23_ARB,0x8737,14031,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MODELVIEW23_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MODELVIEW24_ARB
	CompareConstant(GL_MODELVIEW24_ARB,0x8738,14032,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MODELVIEW24_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MODELVIEW25_ARB
	CompareConstant(GL_MODELVIEW25_ARB,0x8739,14033,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MODELVIEW25_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MODELVIEW26_ARB
	CompareConstant(GL_MODELVIEW26_ARB,0x873A,14034,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MODELVIEW26_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MODELVIEW27_ARB
	CompareConstant(GL_MODELVIEW27_ARB,0x873B,14035,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MODELVIEW27_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MODELVIEW28_ARB
	CompareConstant(GL_MODELVIEW28_ARB,0x873C,14036,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MODELVIEW28_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MODELVIEW29_ARB
	CompareConstant(GL_MODELVIEW29_ARB,0x873D,14037,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MODELVIEW29_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MODELVIEW30_ARB
	CompareConstant(GL_MODELVIEW30_ARB,0x873E,14038,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MODELVIEW30_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MODELVIEW31_ARB
	CompareConstant(GL_MODELVIEW31_ARB,0x873F,14039,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MODELVIEW31_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MATRIX_PALETTE_ARB
	CompareConstant(GL_MATRIX_PALETTE_ARB,0x8840,14040,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MATRIX_PALETTE_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_MATRIX_PALETTE_STACK_DEPTH_ARB
	CompareConstant(GL_MAX_MATRIX_PALETTE_STACK_DEPTH_ARB,0x8841,14041,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_MATRIX_PALETTE_STACK_DEPTH_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_PALETTE_MATRICES_ARB
	CompareConstant(GL_MAX_PALETTE_MATRICES_ARB,0x8842,14042,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_PALETTE_MATRICES_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CURRENT_PALETTE_MATRIX_ARB
	CompareConstant(GL_CURRENT_PALETTE_MATRIX_ARB,0x8843,14043,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CURRENT_PALETTE_MATRIX_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MATRIX_INDEX_ARRAY_ARB
	CompareConstant(GL_MATRIX_INDEX_ARRAY_ARB,0x8844,14044,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MATRIX_INDEX_ARRAY_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CURRENT_MATRIX_INDEX_ARB
	CompareConstant(GL_CURRENT_MATRIX_INDEX_ARB,0x8845,14045,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CURRENT_MATRIX_INDEX_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MATRIX_INDEX_ARRAY_SIZE_ARB
	CompareConstant(GL_MATRIX_INDEX_ARRAY_SIZE_ARB,0x8846,14046,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MATRIX_INDEX_ARRAY_SIZE_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MATRIX_INDEX_ARRAY_TYPE_ARB
	CompareConstant(GL_MATRIX_INDEX_ARRAY_TYPE_ARB,0x8847,14047,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MATRIX_INDEX_ARRAY_TYPE_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MATRIX_INDEX_ARRAY_STRIDE_ARB
	CompareConstant(GL_MATRIX_INDEX_ARRAY_STRIDE_ARB,0x8848,14048,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MATRIX_INDEX_ARRAY_STRIDE_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MATRIX_INDEX_ARRAY_POINTER_ARB
	CompareConstant(GL_MATRIX_INDEX_ARRAY_POINTER_ARB,0x8849,14049,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MATRIX_INDEX_ARRAY_POINTER_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COMBINE_ARB
	CompareConstant(GL_COMBINE_ARB,0x8570,14050,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COMBINE_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COMBINE_RGB_ARB
	CompareConstant(GL_COMBINE_RGB_ARB,0x8571,14051,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COMBINE_RGB_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COMBINE_ALPHA_ARB
	CompareConstant(GL_COMBINE_ALPHA_ARB,0x8572,14052,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COMBINE_ALPHA_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SOURCE0_RGB_ARB
	CompareConstant(GL_SOURCE0_RGB_ARB,0x8580,14053,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SOURCE0_RGB_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SOURCE1_RGB_ARB
	CompareConstant(GL_SOURCE1_RGB_ARB,0x8581,14054,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SOURCE1_RGB_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SOURCE2_RGB_ARB
	CompareConstant(GL_SOURCE2_RGB_ARB,0x8582,14055,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SOURCE2_RGB_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SOURCE0_ALPHA_ARB
	CompareConstant(GL_SOURCE0_ALPHA_ARB,0x8588,14056,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SOURCE0_ALPHA_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SOURCE1_ALPHA_ARB
	CompareConstant(GL_SOURCE1_ALPHA_ARB,0x8589,14057,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SOURCE1_ALPHA_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SOURCE2_ALPHA_ARB
	CompareConstant(GL_SOURCE2_ALPHA_ARB,0x858A,14058,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SOURCE2_ALPHA_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OPERAND0_RGB_ARB
	CompareConstant(GL_OPERAND0_RGB_ARB,0x8590,14059,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OPERAND0_RGB_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OPERAND1_RGB_ARB
	CompareConstant(GL_OPERAND1_RGB_ARB,0x8591,14060,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OPERAND1_RGB_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OPERAND2_RGB_ARB
	CompareConstant(GL_OPERAND2_RGB_ARB,0x8592,14061,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OPERAND2_RGB_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OPERAND0_ALPHA_ARB
	CompareConstant(GL_OPERAND0_ALPHA_ARB,0x8598,14062,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OPERAND0_ALPHA_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OPERAND1_ALPHA_ARB
	CompareConstant(GL_OPERAND1_ALPHA_ARB,0x8599,14063,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OPERAND1_ALPHA_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OPERAND2_ALPHA_ARB
	CompareConstant(GL_OPERAND2_ALPHA_ARB,0x859A,14064,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OPERAND2_ALPHA_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RGB_SCALE_ARB
	CompareConstant(GL_RGB_SCALE_ARB,0x8573,14065,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_RGB_SCALE_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ADD_SIGNED_ARB
	CompareConstant(GL_ADD_SIGNED_ARB,0x8574,14066,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ADD_SIGNED_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INTERPOLATE_ARB
	CompareConstant(GL_INTERPOLATE_ARB,0x8575,14067,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_INTERPOLATE_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SUBTRACT_ARB
	CompareConstant(GL_SUBTRACT_ARB,0x84E7,14068,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SUBTRACT_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CONSTANT_ARB
	CompareConstant(GL_CONSTANT_ARB,0x8576,14069,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CONSTANT_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PRIMARY_COLOR_ARB
	CompareConstant(GL_PRIMARY_COLOR_ARB,0x8577,14070,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PRIMARY_COLOR_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PREVIOUS_ARB
	CompareConstant(GL_PREVIOUS_ARB,0x8578,14071,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PREVIOUS_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DOT3_RGB_ARB
	CompareConstant(GL_DOT3_RGB_ARB,0x86AE,14072,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DOT3_RGB_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DOT3_RGBA_ARB
	CompareConstant(GL_DOT3_RGBA_ARB,0x86AF,14073,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DOT3_RGBA_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MIRRORED_REPEAT_ARB
	CompareConstant(GL_MIRRORED_REPEAT_ARB,0x8370,14074,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MIRRORED_REPEAT_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DEPTH_COMPONENT16_ARB
	CompareConstant(GL_DEPTH_COMPONENT16_ARB,0x81A5,14075,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DEPTH_COMPONENT16_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DEPTH_COMPONENT24_ARB
	CompareConstant(GL_DEPTH_COMPONENT24_ARB,0x81A6,14076,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DEPTH_COMPONENT24_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DEPTH_COMPONENT32_ARB
	CompareConstant(GL_DEPTH_COMPONENT32_ARB,0x81A7,14077,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DEPTH_COMPONENT32_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_DEPTH_SIZE_ARB
	CompareConstant(GL_TEXTURE_DEPTH_SIZE_ARB,0x884A,14078,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_DEPTH_SIZE_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DEPTH_TEXTURE_MODE_ARB
	CompareConstant(GL_DEPTH_TEXTURE_MODE_ARB,0x884B,14079,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DEPTH_TEXTURE_MODE_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_COMPARE_MODE_ARB
	CompareConstant(GL_TEXTURE_COMPARE_MODE_ARB,0x884C,14080,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_COMPARE_MODE_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_COMPARE_FUNC_ARB
	CompareConstant(GL_TEXTURE_COMPARE_FUNC_ARB,0x884D,14081,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_COMPARE_FUNC_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COMPARE_R_TO_TEXTURE_ARB
	CompareConstant(GL_COMPARE_R_TO_TEXTURE_ARB,0x884E,14082,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COMPARE_R_TO_TEXTURE_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_COMPARE_FAIL_VALUE_ARB
	CompareConstant(GL_TEXTURE_COMPARE_FAIL_VALUE_ARB,0x80BF,14083,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_COMPARE_FAIL_VALUE_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_SUM_ARB
	CompareConstant(GL_COLOR_SUM_ARB,0x8458,14084,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_SUM_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_PROGRAM_ARB
	CompareConstant(GL_VERTEX_PROGRAM_ARB,0x8620,14085,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX_PROGRAM_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_ATTRIB_ARRAY_ENABLED_ARB
	CompareConstant(GL_VERTEX_ATTRIB_ARRAY_ENABLED_ARB,0x8622,14086,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX_ATTRIB_ARRAY_ENABLED_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_ATTRIB_ARRAY_SIZE_ARB
	CompareConstant(GL_VERTEX_ATTRIB_ARRAY_SIZE_ARB,0x8623,14087,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX_ATTRIB_ARRAY_SIZE_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_ATTRIB_ARRAY_STRIDE_ARB
	CompareConstant(GL_VERTEX_ATTRIB_ARRAY_STRIDE_ARB,0x8624,14088,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX_ATTRIB_ARRAY_STRIDE_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_ATTRIB_ARRAY_TYPE_ARB
	CompareConstant(GL_VERTEX_ATTRIB_ARRAY_TYPE_ARB,0x8625,14089,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX_ATTRIB_ARRAY_TYPE_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CURRENT_VERTEX_ATTRIB_ARB
	CompareConstant(GL_CURRENT_VERTEX_ATTRIB_ARB,0x8626,14090,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CURRENT_VERTEX_ATTRIB_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PROGRAM_LENGTH_ARB
	CompareConstant(GL_PROGRAM_LENGTH_ARB,0x8627,14091,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PROGRAM_LENGTH_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PROGRAM_STRING_ARB
	CompareConstant(GL_PROGRAM_STRING_ARB,0x8628,14092,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PROGRAM_STRING_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_PROGRAM_MATRIX_STACK_DEPTH_ARB
	CompareConstant(GL_MAX_PROGRAM_MATRIX_STACK_DEPTH_ARB,0x862E,14093,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_PROGRAM_MATRIX_STACK_DEPTH_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_PROGRAM_MATRICES_ARB
	CompareConstant(GL_MAX_PROGRAM_MATRICES_ARB,0x862F,14094,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_PROGRAM_MATRICES_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CURRENT_MATRIX_STACK_DEPTH_ARB
	CompareConstant(GL_CURRENT_MATRIX_STACK_DEPTH_ARB,0x8640,14095,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CURRENT_MATRIX_STACK_DEPTH_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CURRENT_MATRIX_ARB
	CompareConstant(GL_CURRENT_MATRIX_ARB,0x8641,14096,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CURRENT_MATRIX_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_PROGRAM_POINT_SIZE_ARB
	CompareConstant(GL_VERTEX_PROGRAM_POINT_SIZE_ARB,0x8642,14097,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX_PROGRAM_POINT_SIZE_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_PROGRAM_TWO_SIDE_ARB
	CompareConstant(GL_VERTEX_PROGRAM_TWO_SIDE_ARB,0x8643,14098,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX_PROGRAM_TWO_SIDE_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_ATTRIB_ARRAY_POINTER_ARB
	CompareConstant(GL_VERTEX_ATTRIB_ARRAY_POINTER_ARB,0x8645,14099,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX_ATTRIB_ARRAY_POINTER_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PROGRAM_ERROR_POSITION_ARB
	CompareConstant(GL_PROGRAM_ERROR_POSITION_ARB,0x864B,14100,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PROGRAM_ERROR_POSITION_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PROGRAM_BINDING_ARB
	CompareConstant(GL_PROGRAM_BINDING_ARB,0x8677,14101,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PROGRAM_BINDING_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_VERTEX_ATTRIBS_ARB
	CompareConstant(GL_MAX_VERTEX_ATTRIBS_ARB,0x8869,14102,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_VERTEX_ATTRIBS_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_ATTRIB_ARRAY_NORMALIZED_ARB
	CompareConstant(GL_VERTEX_ATTRIB_ARRAY_NORMALIZED_ARB,0x886A,14103,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX_ATTRIB_ARRAY_NORMALIZED_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PROGRAM_ERROR_STRING_ARB
	CompareConstant(GL_PROGRAM_ERROR_STRING_ARB,0x8874,14104,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PROGRAM_ERROR_STRING_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PROGRAM_FORMAT_ASCII_ARB
	CompareConstant(GL_PROGRAM_FORMAT_ASCII_ARB,0x8875,14105,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PROGRAM_FORMAT_ASCII_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PROGRAM_FORMAT_ARB
	CompareConstant(GL_PROGRAM_FORMAT_ARB,0x8876,14106,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PROGRAM_FORMAT_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PROGRAM_INSTRUCTIONS_ARB
	CompareConstant(GL_PROGRAM_INSTRUCTIONS_ARB,0x88A0,14107,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PROGRAM_INSTRUCTIONS_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_PROGRAM_INSTRUCTIONS_ARB
	CompareConstant(GL_MAX_PROGRAM_INSTRUCTIONS_ARB,0x88A1,14108,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_PROGRAM_INSTRUCTIONS_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PROGRAM_NATIVE_INSTRUCTIONS_ARB
	CompareConstant(GL_PROGRAM_NATIVE_INSTRUCTIONS_ARB,0x88A2,14109,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PROGRAM_NATIVE_INSTRUCTIONS_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_PROGRAM_NATIVE_INSTRUCTIONS_ARB
	CompareConstant(GL_MAX_PROGRAM_NATIVE_INSTRUCTIONS_ARB,0x88A3,14110,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_PROGRAM_NATIVE_INSTRUCTIONS_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PROGRAM_TEMPORARIES_ARB
	CompareConstant(GL_PROGRAM_TEMPORARIES_ARB,0x88A4,14111,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PROGRAM_TEMPORARIES_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_PROGRAM_TEMPORARIES_ARB
	CompareConstant(GL_MAX_PROGRAM_TEMPORARIES_ARB,0x88A5,14112,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_PROGRAM_TEMPORARIES_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PROGRAM_NATIVE_TEMPORARIES_ARB
	CompareConstant(GL_PROGRAM_NATIVE_TEMPORARIES_ARB,0x88A6,14113,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PROGRAM_NATIVE_TEMPORARIES_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_PROGRAM_NATIVE_TEMPORARIES_ARB
	CompareConstant(GL_MAX_PROGRAM_NATIVE_TEMPORARIES_ARB,0x88A7,14114,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_PROGRAM_NATIVE_TEMPORARIES_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PROGRAM_PARAMETERS_ARB
	CompareConstant(GL_PROGRAM_PARAMETERS_ARB,0x88A8,14115,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PROGRAM_PARAMETERS_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_PROGRAM_PARAMETERS_ARB
	CompareConstant(GL_MAX_PROGRAM_PARAMETERS_ARB,0x88A9,14116,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_PROGRAM_PARAMETERS_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PROGRAM_NATIVE_PARAMETERS_ARB
	CompareConstant(GL_PROGRAM_NATIVE_PARAMETERS_ARB,0x88AA,14117,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PROGRAM_NATIVE_PARAMETERS_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_PROGRAM_NATIVE_PARAMETERS_ARB
	CompareConstant(GL_MAX_PROGRAM_NATIVE_PARAMETERS_ARB,0x88AB,14118,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_PROGRAM_NATIVE_PARAMETERS_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PROGRAM_ATTRIBS_ARB
	CompareConstant(GL_PROGRAM_ATTRIBS_ARB,0x88AC,14119,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PROGRAM_ATTRIBS_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_PROGRAM_ATTRIBS_ARB
	CompareConstant(GL_MAX_PROGRAM_ATTRIBS_ARB,0x88AD,14120,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_PROGRAM_ATTRIBS_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PROGRAM_NATIVE_ATTRIBS_ARB
	CompareConstant(GL_PROGRAM_NATIVE_ATTRIBS_ARB,0x88AE,14121,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PROGRAM_NATIVE_ATTRIBS_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_PROGRAM_NATIVE_ATTRIBS_ARB
	CompareConstant(GL_MAX_PROGRAM_NATIVE_ATTRIBS_ARB,0x88AF,14122,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_PROGRAM_NATIVE_ATTRIBS_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PROGRAM_ADDRESS_REGISTERS_ARB
	CompareConstant(GL_PROGRAM_ADDRESS_REGISTERS_ARB,0x88B0,14123,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PROGRAM_ADDRESS_REGISTERS_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_PROGRAM_ADDRESS_REGISTERS_ARB
	CompareConstant(GL_MAX_PROGRAM_ADDRESS_REGISTERS_ARB,0x88B1,14124,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_PROGRAM_ADDRESS_REGISTERS_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PROGRAM_NATIVE_ADDRESS_REGISTERS_ARB
	CompareConstant(GL_PROGRAM_NATIVE_ADDRESS_REGISTERS_ARB,0x88B2,14125,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PROGRAM_NATIVE_ADDRESS_REGISTERS_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_PROGRAM_NATIVE_ADDRESS_REGISTERS_ARB
	CompareConstant(GL_MAX_PROGRAM_NATIVE_ADDRESS_REGISTERS_ARB,0x88B3,14126,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_PROGRAM_NATIVE_ADDRESS_REGISTERS_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_PROGRAM_LOCAL_PARAMETERS_ARB
	CompareConstant(GL_MAX_PROGRAM_LOCAL_PARAMETERS_ARB,0x88B4,14127,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_PROGRAM_LOCAL_PARAMETERS_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_PROGRAM_ENV_PARAMETERS_ARB
	CompareConstant(GL_MAX_PROGRAM_ENV_PARAMETERS_ARB,0x88B5,14128,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_PROGRAM_ENV_PARAMETERS_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PROGRAM_UNDER_NATIVE_LIMITS_ARB
	CompareConstant(GL_PROGRAM_UNDER_NATIVE_LIMITS_ARB,0x88B6,14129,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PROGRAM_UNDER_NATIVE_LIMITS_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TRANSPOSE_CURRENT_MATRIX_ARB
	CompareConstant(GL_TRANSPOSE_CURRENT_MATRIX_ARB,0x88B7,14130,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TRANSPOSE_CURRENT_MATRIX_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MATRIX0_ARB
	CompareConstant(GL_MATRIX0_ARB,0x88C0,14131,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MATRIX0_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MATRIX1_ARB
	CompareConstant(GL_MATRIX1_ARB,0x88C1,14132,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MATRIX1_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MATRIX2_ARB
	CompareConstant(GL_MATRIX2_ARB,0x88C2,14133,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MATRIX2_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MATRIX3_ARB
	CompareConstant(GL_MATRIX3_ARB,0x88C3,14134,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MATRIX3_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MATRIX4_ARB
	CompareConstant(GL_MATRIX4_ARB,0x88C4,14135,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MATRIX4_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MATRIX5_ARB
	CompareConstant(GL_MATRIX5_ARB,0x88C5,14136,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MATRIX5_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MATRIX6_ARB
	CompareConstant(GL_MATRIX6_ARB,0x88C6,14137,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MATRIX6_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MATRIX7_ARB
	CompareConstant(GL_MATRIX7_ARB,0x88C7,14138,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MATRIX7_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MATRIX8_ARB
	CompareConstant(GL_MATRIX8_ARB,0x88C8,14139,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MATRIX8_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MATRIX9_ARB
	CompareConstant(GL_MATRIX9_ARB,0x88C9,14140,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MATRIX9_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MATRIX10_ARB
	CompareConstant(GL_MATRIX10_ARB,0x88CA,14141,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MATRIX10_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MATRIX11_ARB
	CompareConstant(GL_MATRIX11_ARB,0x88CB,14142,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MATRIX11_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MATRIX12_ARB
	CompareConstant(GL_MATRIX12_ARB,0x88CC,14143,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MATRIX12_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MATRIX13_ARB
	CompareConstant(GL_MATRIX13_ARB,0x88CD,14144,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MATRIX13_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MATRIX14_ARB
	CompareConstant(GL_MATRIX14_ARB,0x88CE,14145,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MATRIX14_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MATRIX15_ARB
	CompareConstant(GL_MATRIX15_ARB,0x88CF,14146,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MATRIX15_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MATRIX16_ARB
	CompareConstant(GL_MATRIX16_ARB,0x88D0,14147,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MATRIX16_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MATRIX17_ARB
	CompareConstant(GL_MATRIX17_ARB,0x88D1,14148,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MATRIX17_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MATRIX18_ARB
	CompareConstant(GL_MATRIX18_ARB,0x88D2,14149,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MATRIX18_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MATRIX19_ARB
	CompareConstant(GL_MATRIX19_ARB,0x88D3,14150,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MATRIX19_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MATRIX20_ARB
	CompareConstant(GL_MATRIX20_ARB,0x88D4,14151,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MATRIX20_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MATRIX21_ARB
	CompareConstant(GL_MATRIX21_ARB,0x88D5,14152,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MATRIX21_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MATRIX22_ARB
	CompareConstant(GL_MATRIX22_ARB,0x88D6,14153,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MATRIX22_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MATRIX23_ARB
	CompareConstant(GL_MATRIX23_ARB,0x88D7,14154,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MATRIX23_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MATRIX24_ARB
	CompareConstant(GL_MATRIX24_ARB,0x88D8,14155,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MATRIX24_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MATRIX25_ARB
	CompareConstant(GL_MATRIX25_ARB,0x88D9,14156,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MATRIX25_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MATRIX26_ARB
	CompareConstant(GL_MATRIX26_ARB,0x88DA,14157,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MATRIX26_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MATRIX27_ARB
	CompareConstant(GL_MATRIX27_ARB,0x88DB,14158,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MATRIX27_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MATRIX28_ARB
	CompareConstant(GL_MATRIX28_ARB,0x88DC,14159,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MATRIX28_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MATRIX29_ARB
	CompareConstant(GL_MATRIX29_ARB,0x88DD,14160,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MATRIX29_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MATRIX30_ARB
	CompareConstant(GL_MATRIX30_ARB,0x88DE,14161,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MATRIX30_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MATRIX31_ARB
	CompareConstant(GL_MATRIX31_ARB,0x88DF,14162,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MATRIX31_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FRAGMENT_PROGRAM_ARB
	CompareConstant(GL_FRAGMENT_PROGRAM_ARB,0x8804,14163,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FRAGMENT_PROGRAM_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PROGRAM_ALU_INSTRUCTIONS_ARB
	CompareConstant(GL_PROGRAM_ALU_INSTRUCTIONS_ARB,0x8805,14164,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PROGRAM_ALU_INSTRUCTIONS_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PROGRAM_TEX_INSTRUCTIONS_ARB
	CompareConstant(GL_PROGRAM_TEX_INSTRUCTIONS_ARB,0x8806,14165,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PROGRAM_TEX_INSTRUCTIONS_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PROGRAM_TEX_INDIRECTIONS_ARB
	CompareConstant(GL_PROGRAM_TEX_INDIRECTIONS_ARB,0x8807,14166,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PROGRAM_TEX_INDIRECTIONS_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PROGRAM_NATIVE_ALU_INSTRUCTIONS_ARB
	CompareConstant(GL_PROGRAM_NATIVE_ALU_INSTRUCTIONS_ARB,0x8808,14167,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PROGRAM_NATIVE_ALU_INSTRUCTIONS_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PROGRAM_NATIVE_TEX_INSTRUCTIONS_ARB
	CompareConstant(GL_PROGRAM_NATIVE_TEX_INSTRUCTIONS_ARB,0x8809,14168,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PROGRAM_NATIVE_TEX_INSTRUCTIONS_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PROGRAM_NATIVE_TEX_INDIRECTIONS_ARB
	CompareConstant(GL_PROGRAM_NATIVE_TEX_INDIRECTIONS_ARB,0x880A,14169,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PROGRAM_NATIVE_TEX_INDIRECTIONS_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_PROGRAM_ALU_INSTRUCTIONS_ARB
	CompareConstant(GL_MAX_PROGRAM_ALU_INSTRUCTIONS_ARB,0x880B,14170,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_PROGRAM_ALU_INSTRUCTIONS_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_PROGRAM_TEX_INSTRUCTIONS_ARB
	CompareConstant(GL_MAX_PROGRAM_TEX_INSTRUCTIONS_ARB,0x880C,14171,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_PROGRAM_TEX_INSTRUCTIONS_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_PROGRAM_TEX_INDIRECTIONS_ARB
	CompareConstant(GL_MAX_PROGRAM_TEX_INDIRECTIONS_ARB,0x880D,14172,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_PROGRAM_TEX_INDIRECTIONS_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_PROGRAM_NATIVE_ALU_INSTRUCTIONS_ARB
	CompareConstant(GL_MAX_PROGRAM_NATIVE_ALU_INSTRUCTIONS_ARB,0x880E,14173,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_PROGRAM_NATIVE_ALU_INSTRUCTIONS_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_PROGRAM_NATIVE_TEX_INSTRUCTIONS_ARB
	CompareConstant(GL_MAX_PROGRAM_NATIVE_TEX_INSTRUCTIONS_ARB,0x880F,14174,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_PROGRAM_NATIVE_TEX_INSTRUCTIONS_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_PROGRAM_NATIVE_TEX_INDIRECTIONS_ARB
	CompareConstant(GL_MAX_PROGRAM_NATIVE_TEX_INDIRECTIONS_ARB,0x8810,14175,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_PROGRAM_NATIVE_TEX_INDIRECTIONS_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_TEXTURE_COORDS_ARB
	CompareConstant(GL_MAX_TEXTURE_COORDS_ARB,0x8871,14176,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_TEXTURE_COORDS_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_TEXTURE_IMAGE_UNITS_ARB
	CompareConstant(GL_MAX_TEXTURE_IMAGE_UNITS_ARB,0x8872,14177,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_TEXTURE_IMAGE_UNITS_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BUFFER_SIZE_ARB
	CompareConstant(GL_BUFFER_SIZE_ARB,0x8764,14178,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_BUFFER_SIZE_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BUFFER_USAGE_ARB
	CompareConstant(GL_BUFFER_USAGE_ARB,0x8765,14179,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_BUFFER_USAGE_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ARRAY_BUFFER_ARB
	CompareConstant(GL_ARRAY_BUFFER_ARB,0x8892,14180,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ARRAY_BUFFER_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ELEMENT_ARRAY_BUFFER_ARB
	CompareConstant(GL_ELEMENT_ARRAY_BUFFER_ARB,0x8893,14181,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ELEMENT_ARRAY_BUFFER_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ARRAY_BUFFER_BINDING_ARB
	CompareConstant(GL_ARRAY_BUFFER_BINDING_ARB,0x8894,14182,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ARRAY_BUFFER_BINDING_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ELEMENT_ARRAY_BUFFER_BINDING_ARB
	CompareConstant(GL_ELEMENT_ARRAY_BUFFER_BINDING_ARB,0x8895,14183,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ELEMENT_ARRAY_BUFFER_BINDING_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_ARRAY_BUFFER_BINDING_ARB
	CompareConstant(GL_VERTEX_ARRAY_BUFFER_BINDING_ARB,0x8896,14184,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX_ARRAY_BUFFER_BINDING_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_NORMAL_ARRAY_BUFFER_BINDING_ARB
	CompareConstant(GL_NORMAL_ARRAY_BUFFER_BINDING_ARB,0x8897,14185,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_NORMAL_ARRAY_BUFFER_BINDING_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_ARRAY_BUFFER_BINDING_ARB
	CompareConstant(GL_COLOR_ARRAY_BUFFER_BINDING_ARB,0x8898,14186,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_ARRAY_BUFFER_BINDING_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INDEX_ARRAY_BUFFER_BINDING_ARB
	CompareConstant(GL_INDEX_ARRAY_BUFFER_BINDING_ARB,0x8899,14187,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_INDEX_ARRAY_BUFFER_BINDING_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING_ARB
	CompareConstant(GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING_ARB,0x889A,14188,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EDGE_FLAG_ARRAY_BUFFER_BINDING_ARB
	CompareConstant(GL_EDGE_FLAG_ARRAY_BUFFER_BINDING_ARB,0x889B,14189,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EDGE_FLAG_ARRAY_BUFFER_BINDING_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SECONDARY_COLOR_ARRAY_BUFFER_BINDING_ARB
	CompareConstant(GL_SECONDARY_COLOR_ARRAY_BUFFER_BINDING_ARB,0x889C,14190,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SECONDARY_COLOR_ARRAY_BUFFER_BINDING_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FOG_COORDINATE_ARRAY_BUFFER_BINDING_ARB
	CompareConstant(GL_FOG_COORDINATE_ARRAY_BUFFER_BINDING_ARB,0x889D,14191,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FOG_COORDINATE_ARRAY_BUFFER_BINDING_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_WEIGHT_ARRAY_BUFFER_BINDING_ARB
	CompareConstant(GL_WEIGHT_ARRAY_BUFFER_BINDING_ARB,0x889E,14192,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_WEIGHT_ARRAY_BUFFER_BINDING_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING_ARB
	CompareConstant(GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING_ARB,0x889F,14193,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_READ_ONLY_ARB
	CompareConstant(GL_READ_ONLY_ARB,0x88B8,14194,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_READ_ONLY_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_WRITE_ONLY_ARB
	CompareConstant(GL_WRITE_ONLY_ARB,0x88B9,14195,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_WRITE_ONLY_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_READ_WRITE_ARB
	CompareConstant(GL_READ_WRITE_ARB,0x88BA,14196,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_READ_WRITE_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BUFFER_ACCESS_ARB
	CompareConstant(GL_BUFFER_ACCESS_ARB,0x88BB,14197,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_BUFFER_ACCESS_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BUFFER_MAPPED_ARB
	CompareConstant(GL_BUFFER_MAPPED_ARB,0x88BC,14198,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_BUFFER_MAPPED_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BUFFER_MAP_POINTER_ARB
	CompareConstant(GL_BUFFER_MAP_POINTER_ARB,0x88BD,14199,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_BUFFER_MAP_POINTER_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_STREAM_DRAW_ARB
	CompareConstant(GL_STREAM_DRAW_ARB,0x88E0,14200,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_STREAM_DRAW_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_STREAM_READ_ARB
	CompareConstant(GL_STREAM_READ_ARB,0x88E1,14201,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_STREAM_READ_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_STREAM_COPY_ARB
	CompareConstant(GL_STREAM_COPY_ARB,0x88E2,14202,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_STREAM_COPY_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_STATIC_DRAW_ARB
	CompareConstant(GL_STATIC_DRAW_ARB,0x88E4,14203,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_STATIC_DRAW_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_STATIC_READ_ARB
	CompareConstant(GL_STATIC_READ_ARB,0x88E5,14204,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_STATIC_READ_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_STATIC_COPY_ARB
	CompareConstant(GL_STATIC_COPY_ARB,0x88E6,14205,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_STATIC_COPY_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DYNAMIC_DRAW_ARB
	CompareConstant(GL_DYNAMIC_DRAW_ARB,0x88E8,14206,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DYNAMIC_DRAW_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DYNAMIC_READ_ARB
	CompareConstant(GL_DYNAMIC_READ_ARB,0x88E9,14207,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DYNAMIC_READ_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DYNAMIC_COPY_ARB
	CompareConstant(GL_DYNAMIC_COPY_ARB,0x88EA,14208,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DYNAMIC_COPY_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_QUERY_COUNTER_BITS_ARB
	CompareConstant(GL_QUERY_COUNTER_BITS_ARB,0x8864,14209,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_QUERY_COUNTER_BITS_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CURRENT_QUERY_ARB
	CompareConstant(GL_CURRENT_QUERY_ARB,0x8865,14210,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CURRENT_QUERY_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_QUERY_RESULT_ARB
	CompareConstant(GL_QUERY_RESULT_ARB,0x8866,14211,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_QUERY_RESULT_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_QUERY_RESULT_AVAILABLE_ARB
	CompareConstant(GL_QUERY_RESULT_AVAILABLE_ARB,0x8867,14212,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_QUERY_RESULT_AVAILABLE_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SAMPLES_PASSED_ARB
	CompareConstant(GL_SAMPLES_PASSED_ARB,0x8914,14213,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SAMPLES_PASSED_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PROGRAM_OBJECT_ARB
	CompareConstant(GL_PROGRAM_OBJECT_ARB,0x8B40,14214,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PROGRAM_OBJECT_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SHADER_OBJECT_ARB
	CompareConstant(GL_SHADER_OBJECT_ARB,0x8B48,14215,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SHADER_OBJECT_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OBJECT_TYPE_ARB
	CompareConstant(GL_OBJECT_TYPE_ARB,0x8B4E,14216,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OBJECT_TYPE_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OBJECT_SUBTYPE_ARB
	CompareConstant(GL_OBJECT_SUBTYPE_ARB,0x8B4F,14217,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OBJECT_SUBTYPE_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FLOAT_VEC2_ARB
	CompareConstant(GL_FLOAT_VEC2_ARB,0x8B50,14218,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FLOAT_VEC2_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FLOAT_VEC3_ARB
	CompareConstant(GL_FLOAT_VEC3_ARB,0x8B51,14219,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FLOAT_VEC3_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FLOAT_VEC4_ARB
	CompareConstant(GL_FLOAT_VEC4_ARB,0x8B52,14220,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FLOAT_VEC4_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INT_VEC2_ARB
	CompareConstant(GL_INT_VEC2_ARB,0x8B53,14221,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_INT_VEC2_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INT_VEC3_ARB
	CompareConstant(GL_INT_VEC3_ARB,0x8B54,14222,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_INT_VEC3_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INT_VEC4_ARB
	CompareConstant(GL_INT_VEC4_ARB,0x8B55,14223,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_INT_VEC4_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BOOL_ARB
	CompareConstant(GL_BOOL_ARB,0x8B56,14224,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_BOOL_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BOOL_VEC2_ARB
	CompareConstant(GL_BOOL_VEC2_ARB,0x8B57,14225,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_BOOL_VEC2_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BOOL_VEC3_ARB
	CompareConstant(GL_BOOL_VEC3_ARB,0x8B58,14226,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_BOOL_VEC3_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BOOL_VEC4_ARB
	CompareConstant(GL_BOOL_VEC4_ARB,0x8B59,14227,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_BOOL_VEC4_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FLOAT_MAT2_ARB
	CompareConstant(GL_FLOAT_MAT2_ARB,0x8B5A,14228,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FLOAT_MAT2_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FLOAT_MAT3_ARB
	CompareConstant(GL_FLOAT_MAT3_ARB,0x8B5B,14229,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FLOAT_MAT3_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FLOAT_MAT4_ARB
	CompareConstant(GL_FLOAT_MAT4_ARB,0x8B5C,14230,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FLOAT_MAT4_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SAMPLER_1D_ARB
	CompareConstant(GL_SAMPLER_1D_ARB,0x8B5D,14231,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SAMPLER_1D_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SAMPLER_2D_ARB
	CompareConstant(GL_SAMPLER_2D_ARB,0x8B5E,14232,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SAMPLER_2D_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SAMPLER_3D_ARB
	CompareConstant(GL_SAMPLER_3D_ARB,0x8B5F,14233,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SAMPLER_3D_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SAMPLER_CUBE_ARB
	CompareConstant(GL_SAMPLER_CUBE_ARB,0x8B60,14234,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SAMPLER_CUBE_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SAMPLER_1D_SHADOW_ARB
	CompareConstant(GL_SAMPLER_1D_SHADOW_ARB,0x8B61,14235,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SAMPLER_1D_SHADOW_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SAMPLER_2D_SHADOW_ARB
	CompareConstant(GL_SAMPLER_2D_SHADOW_ARB,0x8B62,14236,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SAMPLER_2D_SHADOW_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SAMPLER_2D_RECT_ARB
	CompareConstant(GL_SAMPLER_2D_RECT_ARB,0x8B63,14237,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SAMPLER_2D_RECT_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SAMPLER_2D_RECT_SHADOW_ARB
	CompareConstant(GL_SAMPLER_2D_RECT_SHADOW_ARB,0x8B64,14238,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SAMPLER_2D_RECT_SHADOW_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OBJECT_DELETE_STATUS_ARB
	CompareConstant(GL_OBJECT_DELETE_STATUS_ARB,0x8B80,14239,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OBJECT_DELETE_STATUS_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OBJECT_COMPILE_STATUS_ARB
	CompareConstant(GL_OBJECT_COMPILE_STATUS_ARB,0x8B81,14240,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OBJECT_COMPILE_STATUS_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OBJECT_LINK_STATUS_ARB
	CompareConstant(GL_OBJECT_LINK_STATUS_ARB,0x8B82,14241,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OBJECT_LINK_STATUS_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OBJECT_VALIDATE_STATUS_ARB
	CompareConstant(GL_OBJECT_VALIDATE_STATUS_ARB,0x8B83,14242,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OBJECT_VALIDATE_STATUS_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OBJECT_INFO_LOG_LENGTH_ARB
	CompareConstant(GL_OBJECT_INFO_LOG_LENGTH_ARB,0x8B84,14243,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OBJECT_INFO_LOG_LENGTH_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OBJECT_ATTACHED_OBJECTS_ARB
	CompareConstant(GL_OBJECT_ATTACHED_OBJECTS_ARB,0x8B85,14244,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OBJECT_ATTACHED_OBJECTS_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OBJECT_ACTIVE_UNIFORMS_ARB
	CompareConstant(GL_OBJECT_ACTIVE_UNIFORMS_ARB,0x8B86,14245,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OBJECT_ACTIVE_UNIFORMS_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OBJECT_ACTIVE_UNIFORM_MAX_LENGTH_ARB
	CompareConstant(GL_OBJECT_ACTIVE_UNIFORM_MAX_LENGTH_ARB,0x8B87,14246,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OBJECT_ACTIVE_UNIFORM_MAX_LENGTH_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OBJECT_SHADER_SOURCE_LENGTH_ARB
	CompareConstant(GL_OBJECT_SHADER_SOURCE_LENGTH_ARB,0x8B88,14247,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OBJECT_SHADER_SOURCE_LENGTH_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_SHADER_ARB
	CompareConstant(GL_VERTEX_SHADER_ARB,0x8B31,14248,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX_SHADER_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_VERTEX_UNIFORM_COMPONENTS_ARB
	CompareConstant(GL_MAX_VERTEX_UNIFORM_COMPONENTS_ARB,0x8B4A,14249,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_VERTEX_UNIFORM_COMPONENTS_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_VARYING_FLOATS_ARB
	CompareConstant(GL_MAX_VARYING_FLOATS_ARB,0x8B4B,14250,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_VARYING_FLOATS_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS_ARB
	CompareConstant(GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS_ARB,0x8B4C,14251,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS_ARB
	CompareConstant(GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS_ARB,0x8B4D,14252,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OBJECT_ACTIVE_ATTRIBUTES_ARB
	CompareConstant(GL_OBJECT_ACTIVE_ATTRIBUTES_ARB,0x8B89,14253,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OBJECT_ACTIVE_ATTRIBUTES_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OBJECT_ACTIVE_ATTRIBUTE_MAX_LENGTH_ARB
	CompareConstant(GL_OBJECT_ACTIVE_ATTRIBUTE_MAX_LENGTH_ARB,0x8B8A,14254,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OBJECT_ACTIVE_ATTRIBUTE_MAX_LENGTH_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FRAGMENT_SHADER_ARB
	CompareConstant(GL_FRAGMENT_SHADER_ARB,0x8B30,14255,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FRAGMENT_SHADER_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_FRAGMENT_UNIFORM_COMPONENTS_ARB
	CompareConstant(GL_MAX_FRAGMENT_UNIFORM_COMPONENTS_ARB,0x8B49,14256,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_FRAGMENT_UNIFORM_COMPONENTS_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FRAGMENT_SHADER_DERIVATIVE_HINT_ARB
	CompareConstant(GL_FRAGMENT_SHADER_DERIVATIVE_HINT_ARB,0x8B8B,14257,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FRAGMENT_SHADER_DERIVATIVE_HINT_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SHADING_LANGUAGE_VERSION_ARB
	CompareConstant(GL_SHADING_LANGUAGE_VERSION_ARB,0x8B8C,14258,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SHADING_LANGUAGE_VERSION_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POINT_SPRITE_ARB
	CompareConstant(GL_POINT_SPRITE_ARB,0x8861,14259,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_POINT_SPRITE_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COORD_REPLACE_ARB
	CompareConstant(GL_COORD_REPLACE_ARB,0x8862,14260,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COORD_REPLACE_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_DRAW_BUFFERS_ARB
	CompareConstant(GL_MAX_DRAW_BUFFERS_ARB,0x8824,14261,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_DRAW_BUFFERS_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DRAW_BUFFER0_ARB
	CompareConstant(GL_DRAW_BUFFER0_ARB,0x8825,14262,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DRAW_BUFFER0_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DRAW_BUFFER1_ARB
	CompareConstant(GL_DRAW_BUFFER1_ARB,0x8826,14263,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DRAW_BUFFER1_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DRAW_BUFFER2_ARB
	CompareConstant(GL_DRAW_BUFFER2_ARB,0x8827,14264,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DRAW_BUFFER2_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DRAW_BUFFER3_ARB
	CompareConstant(GL_DRAW_BUFFER3_ARB,0x8828,14265,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DRAW_BUFFER3_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DRAW_BUFFER4_ARB
	CompareConstant(GL_DRAW_BUFFER4_ARB,0x8829,14266,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DRAW_BUFFER4_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DRAW_BUFFER5_ARB
	CompareConstant(GL_DRAW_BUFFER5_ARB,0x882A,14267,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DRAW_BUFFER5_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DRAW_BUFFER6_ARB
	CompareConstant(GL_DRAW_BUFFER6_ARB,0x882B,14268,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DRAW_BUFFER6_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DRAW_BUFFER7_ARB
	CompareConstant(GL_DRAW_BUFFER7_ARB,0x882C,14269,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DRAW_BUFFER7_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DRAW_BUFFER8_ARB
	CompareConstant(GL_DRAW_BUFFER8_ARB,0x882D,14270,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DRAW_BUFFER8_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DRAW_BUFFER9_ARB
	CompareConstant(GL_DRAW_BUFFER9_ARB,0x882E,14271,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DRAW_BUFFER9_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DRAW_BUFFER10_ARB
	CompareConstant(GL_DRAW_BUFFER10_ARB,0x882F,14272,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DRAW_BUFFER10_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DRAW_BUFFER11_ARB
	CompareConstant(GL_DRAW_BUFFER11_ARB,0x8830,14273,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DRAW_BUFFER11_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DRAW_BUFFER12_ARB
	CompareConstant(GL_DRAW_BUFFER12_ARB,0x8831,14274,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DRAW_BUFFER12_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DRAW_BUFFER13_ARB
	CompareConstant(GL_DRAW_BUFFER13_ARB,0x8832,14275,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DRAW_BUFFER13_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DRAW_BUFFER14_ARB
	CompareConstant(GL_DRAW_BUFFER14_ARB,0x8833,14276,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DRAW_BUFFER14_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DRAW_BUFFER15_ARB
	CompareConstant(GL_DRAW_BUFFER15_ARB,0x8834,14277,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DRAW_BUFFER15_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_RECTANGLE_ARB
	CompareConstant(GL_TEXTURE_RECTANGLE_ARB,0x84F5,14278,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_RECTANGLE_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_BINDING_RECTANGLE_ARB
	CompareConstant(GL_TEXTURE_BINDING_RECTANGLE_ARB,0x84F6,14279,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_BINDING_RECTANGLE_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PROXY_TEXTURE_RECTANGLE_ARB
	CompareConstant(GL_PROXY_TEXTURE_RECTANGLE_ARB,0x84F7,14280,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PROXY_TEXTURE_RECTANGLE_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_RECTANGLE_TEXTURE_SIZE_ARB
	CompareConstant(GL_MAX_RECTANGLE_TEXTURE_SIZE_ARB,0x84F8,14281,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_RECTANGLE_TEXTURE_SIZE_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RGBA_FLOAT_MODE_ARB
	CompareConstant(GL_RGBA_FLOAT_MODE_ARB,0x8820,14282,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_RGBA_FLOAT_MODE_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CLAMP_VERTEX_COLOR_ARB
	CompareConstant(GL_CLAMP_VERTEX_COLOR_ARB,0x891A,14283,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CLAMP_VERTEX_COLOR_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CLAMP_FRAGMENT_COLOR_ARB
	CompareConstant(GL_CLAMP_FRAGMENT_COLOR_ARB,0x891B,14284,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CLAMP_FRAGMENT_COLOR_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CLAMP_READ_COLOR_ARB
	CompareConstant(GL_CLAMP_READ_COLOR_ARB,0x891C,14285,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CLAMP_READ_COLOR_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FIXED_ONLY_ARB
	CompareConstant(GL_FIXED_ONLY_ARB,0x891D,14286,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FIXED_ONLY_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_HALF_FLOAT_ARB
	CompareConstant(GL_HALF_FLOAT_ARB,0x140B,14287,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_HALF_FLOAT_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_RED_TYPE_ARB
	CompareConstant(GL_TEXTURE_RED_TYPE_ARB,0x8C10,14288,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_RED_TYPE_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_GREEN_TYPE_ARB
	CompareConstant(GL_TEXTURE_GREEN_TYPE_ARB,0x8C11,14289,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_GREEN_TYPE_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_BLUE_TYPE_ARB
	CompareConstant(GL_TEXTURE_BLUE_TYPE_ARB,0x8C12,14290,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_BLUE_TYPE_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_ALPHA_TYPE_ARB
	CompareConstant(GL_TEXTURE_ALPHA_TYPE_ARB,0x8C13,14291,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_ALPHA_TYPE_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_LUMINANCE_TYPE_ARB
	CompareConstant(GL_TEXTURE_LUMINANCE_TYPE_ARB,0x8C14,14292,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_LUMINANCE_TYPE_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_INTENSITY_TYPE_ARB
	CompareConstant(GL_TEXTURE_INTENSITY_TYPE_ARB,0x8C15,14293,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_INTENSITY_TYPE_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_DEPTH_TYPE_ARB
	CompareConstant(GL_TEXTURE_DEPTH_TYPE_ARB,0x8C16,14294,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_DEPTH_TYPE_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_UNSIGNED_NORMALIZED_ARB
	CompareConstant(GL_UNSIGNED_NORMALIZED_ARB,0x8C17,14295,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_UNSIGNED_NORMALIZED_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RGBA32F_ARB
	CompareConstant(GL_RGBA32F_ARB,0x8814,14296,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_RGBA32F_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RGB32F_ARB
	CompareConstant(GL_RGB32F_ARB,0x8815,14297,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_RGB32F_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ALPHA32F_ARB
	CompareConstant(GL_ALPHA32F_ARB,0x8816,14298,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ALPHA32F_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INTENSITY32F_ARB
	CompareConstant(GL_INTENSITY32F_ARB,0x8817,14299,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_INTENSITY32F_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LUMINANCE32F_ARB
	CompareConstant(GL_LUMINANCE32F_ARB,0x8818,14300,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_LUMINANCE32F_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LUMINANCE_ALPHA32F_ARB
	CompareConstant(GL_LUMINANCE_ALPHA32F_ARB,0x8819,14301,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_LUMINANCE_ALPHA32F_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RGBA16F_ARB
	CompareConstant(GL_RGBA16F_ARB,0x881A,14302,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_RGBA16F_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RGB16F_ARB
	CompareConstant(GL_RGB16F_ARB,0x881B,14303,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_RGB16F_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ALPHA16F_ARB
	CompareConstant(GL_ALPHA16F_ARB,0x881C,14304,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ALPHA16F_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INTENSITY16F_ARB
	CompareConstant(GL_INTENSITY16F_ARB,0x881D,14305,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_INTENSITY16F_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LUMINANCE16F_ARB
	CompareConstant(GL_LUMINANCE16F_ARB,0x881E,14306,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_LUMINANCE16F_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LUMINANCE_ALPHA16F_ARB
	CompareConstant(GL_LUMINANCE_ALPHA16F_ARB,0x881F,14307,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_LUMINANCE_ALPHA16F_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PIXEL_PACK_BUFFER_ARB
	CompareConstant(GL_PIXEL_PACK_BUFFER_ARB,0x88EB,14308,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PIXEL_PACK_BUFFER_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PIXEL_UNPACK_BUFFER_ARB
	CompareConstant(GL_PIXEL_UNPACK_BUFFER_ARB,0x88EC,14309,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PIXEL_UNPACK_BUFFER_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PIXEL_PACK_BUFFER_BINDING_ARB
	CompareConstant(GL_PIXEL_PACK_BUFFER_BINDING_ARB,0x88ED,14310,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PIXEL_PACK_BUFFER_BINDING_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PIXEL_UNPACK_BUFFER_BINDING_ARB
	CompareConstant(GL_PIXEL_UNPACK_BUFFER_BINDING_ARB,0x88EF,14311,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PIXEL_UNPACK_BUFFER_BINDING_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ABGR_EXT
	CompareConstant(GL_ABGR_EXT,0x8000,14312,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ABGR_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CONSTANT_COLOR_EXT
	CompareConstant(GL_CONSTANT_COLOR_EXT,0x8001,14313,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CONSTANT_COLOR_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ONE_MINUS_CONSTANT_COLOR_EXT
	CompareConstant(GL_ONE_MINUS_CONSTANT_COLOR_EXT,0x8002,14314,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ONE_MINUS_CONSTANT_COLOR_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CONSTANT_ALPHA_EXT
	CompareConstant(GL_CONSTANT_ALPHA_EXT,0x8003,14315,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CONSTANT_ALPHA_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ONE_MINUS_CONSTANT_ALPHA_EXT
	CompareConstant(GL_ONE_MINUS_CONSTANT_ALPHA_EXT,0x8004,14316,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ONE_MINUS_CONSTANT_ALPHA_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BLEND_COLOR_EXT
	CompareConstant(GL_BLEND_COLOR_EXT,0x8005,14317,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_BLEND_COLOR_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POLYGON_OFFSET_EXT
	CompareConstant(GL_POLYGON_OFFSET_EXT,0x8037,14318,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_POLYGON_OFFSET_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POLYGON_OFFSET_FACTOR_EXT
	CompareConstant(GL_POLYGON_OFFSET_FACTOR_EXT,0x8038,14319,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_POLYGON_OFFSET_FACTOR_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POLYGON_OFFSET_BIAS_EXT
	CompareConstant(GL_POLYGON_OFFSET_BIAS_EXT,0x8039,14320,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_POLYGON_OFFSET_BIAS_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ALPHA4_EXT
	CompareConstant(GL_ALPHA4_EXT,0x803B,14321,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ALPHA4_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ALPHA8_EXT
	CompareConstant(GL_ALPHA8_EXT,0x803C,14322,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ALPHA8_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ALPHA12_EXT
	CompareConstant(GL_ALPHA12_EXT,0x803D,14323,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ALPHA12_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ALPHA16_EXT
	CompareConstant(GL_ALPHA16_EXT,0x803E,14324,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ALPHA16_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LUMINANCE4_EXT
	CompareConstant(GL_LUMINANCE4_EXT,0x803F,14325,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_LUMINANCE4_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LUMINANCE8_EXT
	CompareConstant(GL_LUMINANCE8_EXT,0x8040,14326,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_LUMINANCE8_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LUMINANCE12_EXT
	CompareConstant(GL_LUMINANCE12_EXT,0x8041,14327,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_LUMINANCE12_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LUMINANCE16_EXT
	CompareConstant(GL_LUMINANCE16_EXT,0x8042,14328,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_LUMINANCE16_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LUMINANCE4_ALPHA4_EXT
	CompareConstant(GL_LUMINANCE4_ALPHA4_EXT,0x8043,14329,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_LUMINANCE4_ALPHA4_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LUMINANCE6_ALPHA2_EXT
	CompareConstant(GL_LUMINANCE6_ALPHA2_EXT,0x8044,14330,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_LUMINANCE6_ALPHA2_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LUMINANCE8_ALPHA8_EXT
	CompareConstant(GL_LUMINANCE8_ALPHA8_EXT,0x8045,14331,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_LUMINANCE8_ALPHA8_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LUMINANCE12_ALPHA4_EXT
	CompareConstant(GL_LUMINANCE12_ALPHA4_EXT,0x8046,14332,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_LUMINANCE12_ALPHA4_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LUMINANCE12_ALPHA12_EXT
	CompareConstant(GL_LUMINANCE12_ALPHA12_EXT,0x8047,14333,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_LUMINANCE12_ALPHA12_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LUMINANCE16_ALPHA16_EXT
	CompareConstant(GL_LUMINANCE16_ALPHA16_EXT,0x8048,14334,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_LUMINANCE16_ALPHA16_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INTENSITY_EXT
	CompareConstant(GL_INTENSITY_EXT,0x8049,14335,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_INTENSITY_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INTENSITY4_EXT
	CompareConstant(GL_INTENSITY4_EXT,0x804A,14336,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_INTENSITY4_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INTENSITY8_EXT
	CompareConstant(GL_INTENSITY8_EXT,0x804B,14337,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_INTENSITY8_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INTENSITY12_EXT
	CompareConstant(GL_INTENSITY12_EXT,0x804C,14338,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_INTENSITY12_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INTENSITY16_EXT
	CompareConstant(GL_INTENSITY16_EXT,0x804D,14339,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_INTENSITY16_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RGB2_EXT
	CompareConstant(GL_RGB2_EXT,0x804E,14340,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_RGB2_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RGB4_EXT
	CompareConstant(GL_RGB4_EXT,0x804F,14341,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_RGB4_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RGB5_EXT
	CompareConstant(GL_RGB5_EXT,0x8050,14342,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_RGB5_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RGB8_EXT
	CompareConstant(GL_RGB8_EXT,0x8051,14343,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_RGB8_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RGB10_EXT
	CompareConstant(GL_RGB10_EXT,0x8052,14344,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_RGB10_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RGB12_EXT
	CompareConstant(GL_RGB12_EXT,0x8053,14345,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_RGB12_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RGB16_EXT
	CompareConstant(GL_RGB16_EXT,0x8054,14346,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_RGB16_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RGBA2_EXT
	CompareConstant(GL_RGBA2_EXT,0x8055,14347,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_RGBA2_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RGBA4_EXT
	CompareConstant(GL_RGBA4_EXT,0x8056,14348,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_RGBA4_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RGB5_A1_EXT
	CompareConstant(GL_RGB5_A1_EXT,0x8057,14349,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_RGB5_A1_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RGBA8_EXT
	CompareConstant(GL_RGBA8_EXT,0x8058,14350,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_RGBA8_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RGB10_A2_EXT
	CompareConstant(GL_RGB10_A2_EXT,0x8059,14351,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_RGB10_A2_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RGBA12_EXT
	CompareConstant(GL_RGBA12_EXT,0x805A,14352,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_RGBA12_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RGBA16_EXT
	CompareConstant(GL_RGBA16_EXT,0x805B,14353,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_RGBA16_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_RED_SIZE_EXT
	CompareConstant(GL_TEXTURE_RED_SIZE_EXT,0x805C,14354,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_RED_SIZE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_GREEN_SIZE_EXT
	CompareConstant(GL_TEXTURE_GREEN_SIZE_EXT,0x805D,14355,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_GREEN_SIZE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_BLUE_SIZE_EXT
	CompareConstant(GL_TEXTURE_BLUE_SIZE_EXT,0x805E,14356,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_BLUE_SIZE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_ALPHA_SIZE_EXT
	CompareConstant(GL_TEXTURE_ALPHA_SIZE_EXT,0x805F,14357,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_ALPHA_SIZE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_LUMINANCE_SIZE_EXT
	CompareConstant(GL_TEXTURE_LUMINANCE_SIZE_EXT,0x8060,14358,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_LUMINANCE_SIZE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_INTENSITY_SIZE_EXT
	CompareConstant(GL_TEXTURE_INTENSITY_SIZE_EXT,0x8061,14359,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_INTENSITY_SIZE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_REPLACE_EXT
	CompareConstant(GL_REPLACE_EXT,0x8062,14360,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_REPLACE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PROXY_TEXTURE_1D_EXT
	CompareConstant(GL_PROXY_TEXTURE_1D_EXT,0x8063,14361,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PROXY_TEXTURE_1D_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PROXY_TEXTURE_2D_EXT
	CompareConstant(GL_PROXY_TEXTURE_2D_EXT,0x8064,14362,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PROXY_TEXTURE_2D_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_TOO_LARGE_EXT
	CompareConstant(GL_TEXTURE_TOO_LARGE_EXT,0x8065,14363,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_TOO_LARGE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PACK_SKIP_IMAGES_EXT
	CompareConstant(GL_PACK_SKIP_IMAGES_EXT,0x806B,14364,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PACK_SKIP_IMAGES_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PACK_IMAGE_HEIGHT_EXT
	CompareConstant(GL_PACK_IMAGE_HEIGHT_EXT,0x806C,14365,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PACK_IMAGE_HEIGHT_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_UNPACK_SKIP_IMAGES_EXT
	CompareConstant(GL_UNPACK_SKIP_IMAGES_EXT,0x806D,14366,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_UNPACK_SKIP_IMAGES_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_UNPACK_IMAGE_HEIGHT_EXT
	CompareConstant(GL_UNPACK_IMAGE_HEIGHT_EXT,0x806E,14367,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_UNPACK_IMAGE_HEIGHT_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_3D_EXT
	CompareConstant(GL_TEXTURE_3D_EXT,0x806F,14368,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_3D_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PROXY_TEXTURE_3D_EXT
	CompareConstant(GL_PROXY_TEXTURE_3D_EXT,0x8070,14369,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PROXY_TEXTURE_3D_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_DEPTH_EXT
	CompareConstant(GL_TEXTURE_DEPTH_EXT,0x8071,14370,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_DEPTH_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_WRAP_R_EXT
	CompareConstant(GL_TEXTURE_WRAP_R_EXT,0x8072,14371,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_WRAP_R_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_3D_TEXTURE_SIZE_EXT
	CompareConstant(GL_MAX_3D_TEXTURE_SIZE_EXT,0x8073,14372,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_3D_TEXTURE_SIZE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_HISTOGRAM_EXT
	CompareConstant(GL_HISTOGRAM_EXT,0x8024,14373,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_HISTOGRAM_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PROXY_HISTOGRAM_EXT
	CompareConstant(GL_PROXY_HISTOGRAM_EXT,0x8025,14374,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PROXY_HISTOGRAM_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_HISTOGRAM_WIDTH_EXT
	CompareConstant(GL_HISTOGRAM_WIDTH_EXT,0x8026,14375,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_HISTOGRAM_WIDTH_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_HISTOGRAM_FORMAT_EXT
	CompareConstant(GL_HISTOGRAM_FORMAT_EXT,0x8027,14376,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_HISTOGRAM_FORMAT_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_HISTOGRAM_RED_SIZE_EXT
	CompareConstant(GL_HISTOGRAM_RED_SIZE_EXT,0x8028,14377,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_HISTOGRAM_RED_SIZE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_HISTOGRAM_GREEN_SIZE_EXT
	CompareConstant(GL_HISTOGRAM_GREEN_SIZE_EXT,0x8029,14378,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_HISTOGRAM_GREEN_SIZE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_HISTOGRAM_BLUE_SIZE_EXT
	CompareConstant(GL_HISTOGRAM_BLUE_SIZE_EXT,0x802A,14379,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_HISTOGRAM_BLUE_SIZE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_HISTOGRAM_ALPHA_SIZE_EXT
	CompareConstant(GL_HISTOGRAM_ALPHA_SIZE_EXT,0x802B,14380,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_HISTOGRAM_ALPHA_SIZE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_HISTOGRAM_LUMINANCE_SIZE_EXT
	CompareConstant(GL_HISTOGRAM_LUMINANCE_SIZE_EXT,0x802C,14381,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_HISTOGRAM_LUMINANCE_SIZE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_HISTOGRAM_SINK_EXT
	CompareConstant(GL_HISTOGRAM_SINK_EXT,0x802D,14382,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_HISTOGRAM_SINK_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MINMAX_EXT
	CompareConstant(GL_MINMAX_EXT,0x802E,14383,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MINMAX_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MINMAX_FORMAT_EXT
	CompareConstant(GL_MINMAX_FORMAT_EXT,0x802F,14384,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MINMAX_FORMAT_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MINMAX_SINK_EXT
	CompareConstant(GL_MINMAX_SINK_EXT,0x8030,14385,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MINMAX_SINK_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TABLE_TOO_LARGE_EXT
	CompareConstant(GL_TABLE_TOO_LARGE_EXT,0x8031,14386,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TABLE_TOO_LARGE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CONVOLUTION_1D_EXT
	CompareConstant(GL_CONVOLUTION_1D_EXT,0x8010,14387,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CONVOLUTION_1D_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CONVOLUTION_2D_EXT
	CompareConstant(GL_CONVOLUTION_2D_EXT,0x8011,14388,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CONVOLUTION_2D_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SEPARABLE_2D_EXT
	CompareConstant(GL_SEPARABLE_2D_EXT,0x8012,14389,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SEPARABLE_2D_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CONVOLUTION_BORDER_MODE_EXT
	CompareConstant(GL_CONVOLUTION_BORDER_MODE_EXT,0x8013,14390,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CONVOLUTION_BORDER_MODE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CONVOLUTION_FILTER_SCALE_EXT
	CompareConstant(GL_CONVOLUTION_FILTER_SCALE_EXT,0x8014,14391,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CONVOLUTION_FILTER_SCALE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CONVOLUTION_FILTER_BIAS_EXT
	CompareConstant(GL_CONVOLUTION_FILTER_BIAS_EXT,0x8015,14392,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CONVOLUTION_FILTER_BIAS_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_REDUCE_EXT
	CompareConstant(GL_REDUCE_EXT,0x8016,14393,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_REDUCE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CONVOLUTION_FORMAT_EXT
	CompareConstant(GL_CONVOLUTION_FORMAT_EXT,0x8017,14394,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CONVOLUTION_FORMAT_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CONVOLUTION_WIDTH_EXT
	CompareConstant(GL_CONVOLUTION_WIDTH_EXT,0x8018,14395,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CONVOLUTION_WIDTH_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CONVOLUTION_HEIGHT_EXT
	CompareConstant(GL_CONVOLUTION_HEIGHT_EXT,0x8019,14396,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CONVOLUTION_HEIGHT_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_CONVOLUTION_WIDTH_EXT
	CompareConstant(GL_MAX_CONVOLUTION_WIDTH_EXT,0x801A,14397,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_CONVOLUTION_WIDTH_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_CONVOLUTION_HEIGHT_EXT
	CompareConstant(GL_MAX_CONVOLUTION_HEIGHT_EXT,0x801B,14398,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_CONVOLUTION_HEIGHT_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POST_CONVOLUTION_RED_SCALE_EXT
	CompareConstant(GL_POST_CONVOLUTION_RED_SCALE_EXT,0x801C,14399,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_POST_CONVOLUTION_RED_SCALE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POST_CONVOLUTION_GREEN_SCALE_EXT
	CompareConstant(GL_POST_CONVOLUTION_GREEN_SCALE_EXT,0x801D,14400,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_POST_CONVOLUTION_GREEN_SCALE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POST_CONVOLUTION_BLUE_SCALE_EXT
	CompareConstant(GL_POST_CONVOLUTION_BLUE_SCALE_EXT,0x801E,14401,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_POST_CONVOLUTION_BLUE_SCALE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POST_CONVOLUTION_ALPHA_SCALE_EXT
	CompareConstant(GL_POST_CONVOLUTION_ALPHA_SCALE_EXT,0x801F,14402,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_POST_CONVOLUTION_ALPHA_SCALE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POST_CONVOLUTION_RED_BIAS_EXT
	CompareConstant(GL_POST_CONVOLUTION_RED_BIAS_EXT,0x8020,14403,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_POST_CONVOLUTION_RED_BIAS_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POST_CONVOLUTION_GREEN_BIAS_EXT
	CompareConstant(GL_POST_CONVOLUTION_GREEN_BIAS_EXT,0x8021,14404,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_POST_CONVOLUTION_GREEN_BIAS_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POST_CONVOLUTION_BLUE_BIAS_EXT
	CompareConstant(GL_POST_CONVOLUTION_BLUE_BIAS_EXT,0x8022,14405,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_POST_CONVOLUTION_BLUE_BIAS_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POST_CONVOLUTION_ALPHA_BIAS_EXT
	CompareConstant(GL_POST_CONVOLUTION_ALPHA_BIAS_EXT,0x8023,14406,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_POST_CONVOLUTION_ALPHA_BIAS_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CMYK_EXT
	CompareConstant(GL_CMYK_EXT,0x800C,14407,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CMYK_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CMYKA_EXT
	CompareConstant(GL_CMYKA_EXT,0x800D,14408,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CMYKA_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PACK_CMYK_HINT_EXT
	CompareConstant(GL_PACK_CMYK_HINT_EXT,0x800E,14409,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PACK_CMYK_HINT_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_UNPACK_CMYK_HINT_EXT
	CompareConstant(GL_UNPACK_CMYK_HINT_EXT,0x800F,14410,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_UNPACK_CMYK_HINT_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_PRIORITY_EXT
	CompareConstant(GL_TEXTURE_PRIORITY_EXT,0x8066,14411,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_PRIORITY_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_RESIDENT_EXT
	CompareConstant(GL_TEXTURE_RESIDENT_EXT,0x8067,14412,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_RESIDENT_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_1D_BINDING_EXT
	CompareConstant(GL_TEXTURE_1D_BINDING_EXT,0x8068,14413,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_1D_BINDING_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_2D_BINDING_EXT
	CompareConstant(GL_TEXTURE_2D_BINDING_EXT,0x8069,14414,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_2D_BINDING_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_3D_BINDING_EXT
	CompareConstant(GL_TEXTURE_3D_BINDING_EXT,0x806A,14415,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_3D_BINDING_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_UNSIGNED_BYTE_3_3_2_EXT
	CompareConstant(GL_UNSIGNED_BYTE_3_3_2_EXT,0x8032,14416,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_UNSIGNED_BYTE_3_3_2_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_UNSIGNED_SHORT_4_4_4_4_EXT
	CompareConstant(GL_UNSIGNED_SHORT_4_4_4_4_EXT,0x8033,14417,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_UNSIGNED_SHORT_4_4_4_4_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_UNSIGNED_SHORT_5_5_5_1_EXT
	CompareConstant(GL_UNSIGNED_SHORT_5_5_5_1_EXT,0x8034,14418,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_UNSIGNED_SHORT_5_5_5_1_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_UNSIGNED_INT_8_8_8_8_EXT
	CompareConstant(GL_UNSIGNED_INT_8_8_8_8_EXT,0x8035,14419,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_UNSIGNED_INT_8_8_8_8_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_UNSIGNED_INT_10_10_10_2_EXT
	CompareConstant(GL_UNSIGNED_INT_10_10_10_2_EXT,0x8036,14420,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_UNSIGNED_INT_10_10_10_2_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RESCALE_NORMAL_EXT
	CompareConstant(GL_RESCALE_NORMAL_EXT,0x803A,14421,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_RESCALE_NORMAL_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_ARRAY_EXT
	CompareConstant(GL_VERTEX_ARRAY_EXT,0x8074,14422,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX_ARRAY_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_NORMAL_ARRAY_EXT
	CompareConstant(GL_NORMAL_ARRAY_EXT,0x8075,14423,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_NORMAL_ARRAY_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_ARRAY_EXT
	CompareConstant(GL_COLOR_ARRAY_EXT,0x8076,14424,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_ARRAY_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INDEX_ARRAY_EXT
	CompareConstant(GL_INDEX_ARRAY_EXT,0x8077,14425,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_INDEX_ARRAY_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_COORD_ARRAY_EXT
	CompareConstant(GL_TEXTURE_COORD_ARRAY_EXT,0x8078,14426,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_COORD_ARRAY_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EDGE_FLAG_ARRAY_EXT
	CompareConstant(GL_EDGE_FLAG_ARRAY_EXT,0x8079,14427,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EDGE_FLAG_ARRAY_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_ARRAY_SIZE_EXT
	CompareConstant(GL_VERTEX_ARRAY_SIZE_EXT,0x807A,14428,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX_ARRAY_SIZE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_ARRAY_TYPE_EXT
	CompareConstant(GL_VERTEX_ARRAY_TYPE_EXT,0x807B,14429,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX_ARRAY_TYPE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_ARRAY_STRIDE_EXT
	CompareConstant(GL_VERTEX_ARRAY_STRIDE_EXT,0x807C,14430,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX_ARRAY_STRIDE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_ARRAY_COUNT_EXT
	CompareConstant(GL_VERTEX_ARRAY_COUNT_EXT,0x807D,14431,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX_ARRAY_COUNT_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_NORMAL_ARRAY_TYPE_EXT
	CompareConstant(GL_NORMAL_ARRAY_TYPE_EXT,0x807E,14432,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_NORMAL_ARRAY_TYPE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_NORMAL_ARRAY_STRIDE_EXT
	CompareConstant(GL_NORMAL_ARRAY_STRIDE_EXT,0x807F,14433,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_NORMAL_ARRAY_STRIDE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_NORMAL_ARRAY_COUNT_EXT
	CompareConstant(GL_NORMAL_ARRAY_COUNT_EXT,0x8080,14434,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_NORMAL_ARRAY_COUNT_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_ARRAY_SIZE_EXT
	CompareConstant(GL_COLOR_ARRAY_SIZE_EXT,0x8081,14435,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_ARRAY_SIZE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_ARRAY_TYPE_EXT
	CompareConstant(GL_COLOR_ARRAY_TYPE_EXT,0x8082,14436,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_ARRAY_TYPE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_ARRAY_STRIDE_EXT
	CompareConstant(GL_COLOR_ARRAY_STRIDE_EXT,0x8083,14437,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_ARRAY_STRIDE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_ARRAY_COUNT_EXT
	CompareConstant(GL_COLOR_ARRAY_COUNT_EXT,0x8084,14438,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_ARRAY_COUNT_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INDEX_ARRAY_TYPE_EXT
	CompareConstant(GL_INDEX_ARRAY_TYPE_EXT,0x8085,14439,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_INDEX_ARRAY_TYPE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INDEX_ARRAY_STRIDE_EXT
	CompareConstant(GL_INDEX_ARRAY_STRIDE_EXT,0x8086,14440,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_INDEX_ARRAY_STRIDE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INDEX_ARRAY_COUNT_EXT
	CompareConstant(GL_INDEX_ARRAY_COUNT_EXT,0x8087,14441,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_INDEX_ARRAY_COUNT_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_COORD_ARRAY_SIZE_EXT
	CompareConstant(GL_TEXTURE_COORD_ARRAY_SIZE_EXT,0x8088,14442,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_COORD_ARRAY_SIZE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_COORD_ARRAY_TYPE_EXT
	CompareConstant(GL_TEXTURE_COORD_ARRAY_TYPE_EXT,0x8089,14443,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_COORD_ARRAY_TYPE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_COORD_ARRAY_STRIDE_EXT
	CompareConstant(GL_TEXTURE_COORD_ARRAY_STRIDE_EXT,0x808A,14444,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_COORD_ARRAY_STRIDE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_COORD_ARRAY_COUNT_EXT
	CompareConstant(GL_TEXTURE_COORD_ARRAY_COUNT_EXT,0x808B,14445,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_COORD_ARRAY_COUNT_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EDGE_FLAG_ARRAY_STRIDE_EXT
	CompareConstant(GL_EDGE_FLAG_ARRAY_STRIDE_EXT,0x808C,14446,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EDGE_FLAG_ARRAY_STRIDE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EDGE_FLAG_ARRAY_COUNT_EXT
	CompareConstant(GL_EDGE_FLAG_ARRAY_COUNT_EXT,0x808D,14447,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EDGE_FLAG_ARRAY_COUNT_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_ARRAY_POINTER_EXT
	CompareConstant(GL_VERTEX_ARRAY_POINTER_EXT,0x808E,14448,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX_ARRAY_POINTER_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_NORMAL_ARRAY_POINTER_EXT
	CompareConstant(GL_NORMAL_ARRAY_POINTER_EXT,0x808F,14449,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_NORMAL_ARRAY_POINTER_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_ARRAY_POINTER_EXT
	CompareConstant(GL_COLOR_ARRAY_POINTER_EXT,0x8090,14450,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_ARRAY_POINTER_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INDEX_ARRAY_POINTER_EXT
	CompareConstant(GL_INDEX_ARRAY_POINTER_EXT,0x8091,14451,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_INDEX_ARRAY_POINTER_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_COORD_ARRAY_POINTER_EXT
	CompareConstant(GL_TEXTURE_COORD_ARRAY_POINTER_EXT,0x8092,14452,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_COORD_ARRAY_POINTER_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EDGE_FLAG_ARRAY_POINTER_EXT
	CompareConstant(GL_EDGE_FLAG_ARRAY_POINTER_EXT,0x8093,14453,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EDGE_FLAG_ARRAY_POINTER_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FUNC_ADD_EXT
	CompareConstant(GL_FUNC_ADD_EXT,0x8006,14454,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FUNC_ADD_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MIN_EXT
	CompareConstant(GL_MIN_EXT,0x8007,14455,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MIN_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_EXT
	CompareConstant(GL_MAX_EXT,0x8008,14456,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BLEND_EQUATION_EXT
	CompareConstant(GL_BLEND_EQUATION_EXT,0x8009,14457,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_BLEND_EQUATION_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FUNC_SUBTRACT_EXT
	CompareConstant(GL_FUNC_SUBTRACT_EXT,0x800A,14458,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FUNC_SUBTRACT_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FUNC_REVERSE_SUBTRACT_EXT
	CompareConstant(GL_FUNC_REVERSE_SUBTRACT_EXT,0x800B,14459,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FUNC_REVERSE_SUBTRACT_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POINT_SIZE_MIN_EXT
	CompareConstant(GL_POINT_SIZE_MIN_EXT,0x8126,14460,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_POINT_SIZE_MIN_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POINT_SIZE_MAX_EXT
	CompareConstant(GL_POINT_SIZE_MAX_EXT,0x8127,14461,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_POINT_SIZE_MAX_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POINT_FADE_THRESHOLD_SIZE_EXT
	CompareConstant(GL_POINT_FADE_THRESHOLD_SIZE_EXT,0x8128,14462,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_POINT_FADE_THRESHOLD_SIZE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DISTANCE_ATTENUATION_EXT
	CompareConstant(GL_DISTANCE_ATTENUATION_EXT,0x8129,14463,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DISTANCE_ATTENUATION_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_IMAGE_SCALE_X_HP
	CompareConstant(GL_IMAGE_SCALE_X_HP,0x8155,14464,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_IMAGE_SCALE_X_HP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_IMAGE_SCALE_Y_HP
	CompareConstant(GL_IMAGE_SCALE_Y_HP,0x8156,14465,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_IMAGE_SCALE_Y_HP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_IMAGE_TRANSLATE_X_HP
	CompareConstant(GL_IMAGE_TRANSLATE_X_HP,0x8157,14466,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_IMAGE_TRANSLATE_X_HP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_IMAGE_TRANSLATE_Y_HP
	CompareConstant(GL_IMAGE_TRANSLATE_Y_HP,0x8158,14467,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_IMAGE_TRANSLATE_Y_HP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_IMAGE_ROTATE_ANGLE_HP
	CompareConstant(GL_IMAGE_ROTATE_ANGLE_HP,0x8159,14468,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_IMAGE_ROTATE_ANGLE_HP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_IMAGE_ROTATE_ORIGIN_X_HP
	CompareConstant(GL_IMAGE_ROTATE_ORIGIN_X_HP,0x815A,14469,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_IMAGE_ROTATE_ORIGIN_X_HP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_IMAGE_ROTATE_ORIGIN_Y_HP
	CompareConstant(GL_IMAGE_ROTATE_ORIGIN_Y_HP,0x815B,14470,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_IMAGE_ROTATE_ORIGIN_Y_HP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_IMAGE_MAG_FILTER_HP
	CompareConstant(GL_IMAGE_MAG_FILTER_HP,0x815C,14471,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_IMAGE_MAG_FILTER_HP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_IMAGE_MIN_FILTER_HP
	CompareConstant(GL_IMAGE_MIN_FILTER_HP,0x815D,14472,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_IMAGE_MIN_FILTER_HP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_IMAGE_CUBIC_WEIGHT_HP
	CompareConstant(GL_IMAGE_CUBIC_WEIGHT_HP,0x815E,14473,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_IMAGE_CUBIC_WEIGHT_HP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CUBIC_HP
	CompareConstant(GL_CUBIC_HP,0x815F,14474,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CUBIC_HP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_AVERAGE_HP
	CompareConstant(GL_AVERAGE_HP,0x8160,14475,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_AVERAGE_HP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_IMAGE_TRANSFORM_2D_HP
	CompareConstant(GL_IMAGE_TRANSFORM_2D_HP,0x8161,14476,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_IMAGE_TRANSFORM_2D_HP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POST_IMAGE_TRANSFORM_COLOR_TABLE_HP
	CompareConstant(GL_POST_IMAGE_TRANSFORM_COLOR_TABLE_HP,0x8162,14477,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_POST_IMAGE_TRANSFORM_COLOR_TABLE_HP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PROXY_POST_IMAGE_TRANSFORM_COLOR_TABLE_HP
	CompareConstant(GL_PROXY_POST_IMAGE_TRANSFORM_COLOR_TABLE_HP,0x8163,14478,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PROXY_POST_IMAGE_TRANSFORM_COLOR_TABLE_HP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_IGNORE_BORDER_HP
	CompareConstant(GL_IGNORE_BORDER_HP,0x8150,14479,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_IGNORE_BORDER_HP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CONSTANT_BORDER_HP
	CompareConstant(GL_CONSTANT_BORDER_HP,0x8151,14480,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CONSTANT_BORDER_HP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_REPLICATE_BORDER_HP
	CompareConstant(GL_REPLICATE_BORDER_HP,0x8153,14481,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_REPLICATE_BORDER_HP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CONVOLUTION_BORDER_COLOR_HP
	CompareConstant(GL_CONVOLUTION_BORDER_COLOR_HP,0x8154,14482,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CONVOLUTION_BORDER_COLOR_HP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_DATA_HINT_PGI
	CompareConstant(GL_VERTEX_DATA_HINT_PGI,0x1A22A,14483,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX_DATA_HINT_PGI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_CONSISTENT_HINT_PGI
	CompareConstant(GL_VERTEX_CONSISTENT_HINT_PGI,0x1A22B,14484,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX_CONSISTENT_HINT_PGI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MATERIAL_SIDE_HINT_PGI
	CompareConstant(GL_MATERIAL_SIDE_HINT_PGI,0x1A22C,14485,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MATERIAL_SIDE_HINT_PGI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_VERTEX_HINT_PGI
	CompareConstant(GL_MAX_VERTEX_HINT_PGI,0x1A22D,14486,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_VERTEX_HINT_PGI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR3_BIT_PGI
	CompareConstant(GL_COLOR3_BIT_PGI,0x00010000,14487,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR3_BIT_PGI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR4_BIT_PGI
	CompareConstant(GL_COLOR4_BIT_PGI,0x00020000,14488,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR4_BIT_PGI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EDGEFLAG_BIT_PGI
	CompareConstant(GL_EDGEFLAG_BIT_PGI,0x00040000,14489,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EDGEFLAG_BIT_PGI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INDEX_BIT_PGI
	CompareConstant(GL_INDEX_BIT_PGI,0x00080000,14490,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_INDEX_BIT_PGI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAT_AMBIENT_BIT_PGI
	CompareConstant(GL_MAT_AMBIENT_BIT_PGI,0x00100000,14491,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAT_AMBIENT_BIT_PGI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAT_AMBIENT_AND_DIFFUSE_BIT_PGI
	CompareConstant(GL_MAT_AMBIENT_AND_DIFFUSE_BIT_PGI,0x00200000,14492,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAT_AMBIENT_AND_DIFFUSE_BIT_PGI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAT_DIFFUSE_BIT_PGI
	CompareConstant(GL_MAT_DIFFUSE_BIT_PGI,0x00400000,14493,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAT_DIFFUSE_BIT_PGI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAT_EMISSION_BIT_PGI
	CompareConstant(GL_MAT_EMISSION_BIT_PGI,0x00800000,14494,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAT_EMISSION_BIT_PGI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAT_COLOR_INDEXES_BIT_PGI
	CompareConstant(GL_MAT_COLOR_INDEXES_BIT_PGI,0x01000000,14495,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAT_COLOR_INDEXES_BIT_PGI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAT_SHININESS_BIT_PGI
	CompareConstant(GL_MAT_SHININESS_BIT_PGI,0x02000000,14496,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAT_SHININESS_BIT_PGI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAT_SPECULAR_BIT_PGI
	CompareConstant(GL_MAT_SPECULAR_BIT_PGI,0x04000000,14497,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAT_SPECULAR_BIT_PGI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_NORMAL_BIT_PGI
	CompareConstant(GL_NORMAL_BIT_PGI,0x08000000,14498,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_NORMAL_BIT_PGI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXCOORD1_BIT_PGI
	CompareConstant(GL_TEXCOORD1_BIT_PGI,0x10000000,14499,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXCOORD1_BIT_PGI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXCOORD2_BIT_PGI
	CompareConstant(GL_TEXCOORD2_BIT_PGI,0x20000000,14500,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXCOORD2_BIT_PGI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXCOORD3_BIT_PGI
	CompareConstant(GL_TEXCOORD3_BIT_PGI,0x40000000,14501,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXCOORD3_BIT_PGI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXCOORD4_BIT_PGI
	CompareConstant(GL_TEXCOORD4_BIT_PGI,0x80000000,14502,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXCOORD4_BIT_PGI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX23_BIT_PGI
	CompareConstant(GL_VERTEX23_BIT_PGI,0x00000004,14503,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX23_BIT_PGI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX4_BIT_PGI
	CompareConstant(GL_VERTEX4_BIT_PGI,0x00000008,14504,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX4_BIT_PGI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PREFER_DOUBLEBUFFER_HINT_PGI
	CompareConstant(GL_PREFER_DOUBLEBUFFER_HINT_PGI,0x1A1F8,14505,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PREFER_DOUBLEBUFFER_HINT_PGI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CONSERVE_MEMORY_HINT_PGI
	CompareConstant(GL_CONSERVE_MEMORY_HINT_PGI,0x1A1FD,14506,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CONSERVE_MEMORY_HINT_PGI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RECLAIM_MEMORY_HINT_PGI
	CompareConstant(GL_RECLAIM_MEMORY_HINT_PGI,0x1A1FE,14507,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_RECLAIM_MEMORY_HINT_PGI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_NATIVE_GRAPHICS_HANDLE_PGI
	CompareConstant(GL_NATIVE_GRAPHICS_HANDLE_PGI,0x1A202,14508,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_NATIVE_GRAPHICS_HANDLE_PGI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_NATIVE_GRAPHICS_BEGIN_HINT_PGI
	CompareConstant(GL_NATIVE_GRAPHICS_BEGIN_HINT_PGI,0x1A203,14509,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_NATIVE_GRAPHICS_BEGIN_HINT_PGI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_NATIVE_GRAPHICS_END_HINT_PGI
	CompareConstant(GL_NATIVE_GRAPHICS_END_HINT_PGI,0x1A204,14510,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_NATIVE_GRAPHICS_END_HINT_PGI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ALWAYS_FAST_HINT_PGI
	CompareConstant(GL_ALWAYS_FAST_HINT_PGI,0x1A20C,14511,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ALWAYS_FAST_HINT_PGI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ALWAYS_SOFT_HINT_PGI
	CompareConstant(GL_ALWAYS_SOFT_HINT_PGI,0x1A20D,14512,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ALWAYS_SOFT_HINT_PGI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ALLOW_DRAW_OBJ_HINT_PGI
	CompareConstant(GL_ALLOW_DRAW_OBJ_HINT_PGI,0x1A20E,14513,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ALLOW_DRAW_OBJ_HINT_PGI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ALLOW_DRAW_WIN_HINT_PGI
	CompareConstant(GL_ALLOW_DRAW_WIN_HINT_PGI,0x1A20F,14514,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ALLOW_DRAW_WIN_HINT_PGI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ALLOW_DRAW_FRG_HINT_PGI
	CompareConstant(GL_ALLOW_DRAW_FRG_HINT_PGI,0x1A210,14515,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ALLOW_DRAW_FRG_HINT_PGI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ALLOW_DRAW_MEM_HINT_PGI
	CompareConstant(GL_ALLOW_DRAW_MEM_HINT_PGI,0x1A211,14516,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ALLOW_DRAW_MEM_HINT_PGI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_STRICT_DEPTHFUNC_HINT_PGI
	CompareConstant(GL_STRICT_DEPTHFUNC_HINT_PGI,0x1A216,14517,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_STRICT_DEPTHFUNC_HINT_PGI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_STRICT_LIGHTING_HINT_PGI
	CompareConstant(GL_STRICT_LIGHTING_HINT_PGI,0x1A217,14518,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_STRICT_LIGHTING_HINT_PGI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_STRICT_SCISSOR_HINT_PGI
	CompareConstant(GL_STRICT_SCISSOR_HINT_PGI,0x1A218,14519,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_STRICT_SCISSOR_HINT_PGI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FULL_STIPPLE_HINT_PGI
	CompareConstant(GL_FULL_STIPPLE_HINT_PGI,0x1A219,14520,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FULL_STIPPLE_HINT_PGI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CLIP_NEAR_HINT_PGI
	CompareConstant(GL_CLIP_NEAR_HINT_PGI,0x1A220,14521,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CLIP_NEAR_HINT_PGI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CLIP_FAR_HINT_PGI
	CompareConstant(GL_CLIP_FAR_HINT_PGI,0x1A221,14522,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CLIP_FAR_HINT_PGI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_WIDE_LINE_HINT_PGI
	CompareConstant(GL_WIDE_LINE_HINT_PGI,0x1A222,14523,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_WIDE_LINE_HINT_PGI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BACK_NORMALS_HINT_PGI
	CompareConstant(GL_BACK_NORMALS_HINT_PGI,0x1A223,14524,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_BACK_NORMALS_HINT_PGI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_INDEX1_EXT
	CompareConstant(GL_COLOR_INDEX1_EXT,0x80E2,14525,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_INDEX1_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_INDEX2_EXT
	CompareConstant(GL_COLOR_INDEX2_EXT,0x80E3,14526,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_INDEX2_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_INDEX4_EXT
	CompareConstant(GL_COLOR_INDEX4_EXT,0x80E4,14527,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_INDEX4_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_INDEX8_EXT
	CompareConstant(GL_COLOR_INDEX8_EXT,0x80E5,14528,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_INDEX8_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_INDEX12_EXT
	CompareConstant(GL_COLOR_INDEX12_EXT,0x80E6,14529,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_INDEX12_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_INDEX16_EXT
	CompareConstant(GL_COLOR_INDEX16_EXT,0x80E7,14530,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_INDEX16_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_INDEX_SIZE_EXT
	CompareConstant(GL_TEXTURE_INDEX_SIZE_EXT,0x80ED,14531,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_INDEX_SIZE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CLIP_VOLUME_CLIPPING_HINT_EXT
	CompareConstant(GL_CLIP_VOLUME_CLIPPING_HINT_EXT,0x80F0,14532,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CLIP_VOLUME_CLIPPING_HINT_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INDEX_MATERIAL_EXT
	CompareConstant(GL_INDEX_MATERIAL_EXT,0x81B8,14533,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_INDEX_MATERIAL_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INDEX_MATERIAL_PARAMETER_EXT
	CompareConstant(GL_INDEX_MATERIAL_PARAMETER_EXT,0x81B9,14534,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_INDEX_MATERIAL_PARAMETER_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INDEX_MATERIAL_FACE_EXT
	CompareConstant(GL_INDEX_MATERIAL_FACE_EXT,0x81BA,14535,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_INDEX_MATERIAL_FACE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INDEX_TEST_EXT
	CompareConstant(GL_INDEX_TEST_EXT,0x81B5,14536,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_INDEX_TEST_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INDEX_TEST_FUNC_EXT
	CompareConstant(GL_INDEX_TEST_FUNC_EXT,0x81B6,14537,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_INDEX_TEST_FUNC_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INDEX_TEST_REF_EXT
	CompareConstant(GL_INDEX_TEST_REF_EXT,0x81B7,14538,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_INDEX_TEST_REF_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_IUI_V2F_EXT
	CompareConstant(GL_IUI_V2F_EXT,0x81AD,14539,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_IUI_V2F_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_IUI_V3F_EXT
	CompareConstant(GL_IUI_V3F_EXT,0x81AE,14540,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_IUI_V3F_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_IUI_N3F_V2F_EXT
	CompareConstant(GL_IUI_N3F_V2F_EXT,0x81AF,14541,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_IUI_N3F_V2F_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_IUI_N3F_V3F_EXT
	CompareConstant(GL_IUI_N3F_V3F_EXT,0x81B0,14542,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_IUI_N3F_V3F_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_T2F_IUI_V2F_EXT
	CompareConstant(GL_T2F_IUI_V2F_EXT,0x81B1,14543,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_T2F_IUI_V2F_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_T2F_IUI_V3F_EXT
	CompareConstant(GL_T2F_IUI_V3F_EXT,0x81B2,14544,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_T2F_IUI_V3F_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_T2F_IUI_N3F_V2F_EXT
	CompareConstant(GL_T2F_IUI_N3F_V2F_EXT,0x81B3,14545,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_T2F_IUI_N3F_V2F_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_T2F_IUI_N3F_V3F_EXT
	CompareConstant(GL_T2F_IUI_N3F_V3F_EXT,0x81B4,14546,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_T2F_IUI_N3F_V3F_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ARRAY_ELEMENT_LOCK_FIRST_EXT
	CompareConstant(GL_ARRAY_ELEMENT_LOCK_FIRST_EXT,0x81A8,14547,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ARRAY_ELEMENT_LOCK_FIRST_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ARRAY_ELEMENT_LOCK_COUNT_EXT
	CompareConstant(GL_ARRAY_ELEMENT_LOCK_COUNT_EXT,0x81A9,14548,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ARRAY_ELEMENT_LOCK_COUNT_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CULL_VERTEX_EXT
	CompareConstant(GL_CULL_VERTEX_EXT,0x81AA,14549,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CULL_VERTEX_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CULL_VERTEX_EYE_POSITION_EXT
	CompareConstant(GL_CULL_VERTEX_EYE_POSITION_EXT,0x81AB,14550,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CULL_VERTEX_EYE_POSITION_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CULL_VERTEX_OBJECT_POSITION_EXT
	CompareConstant(GL_CULL_VERTEX_OBJECT_POSITION_EXT,0x81AC,14551,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CULL_VERTEX_OBJECT_POSITION_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RASTER_POSITION_UNCLIPPED_IBM
	CompareConstant(GL_RASTER_POSITION_UNCLIPPED_IBM,0x19262,14552,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_RASTER_POSITION_UNCLIPPED_IBM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_LIGHTING_MODE_HP
	CompareConstant(GL_TEXTURE_LIGHTING_MODE_HP,0x8167,14553,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_LIGHTING_MODE_HP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_POST_SPECULAR_HP
	CompareConstant(GL_TEXTURE_POST_SPECULAR_HP,0x8168,14554,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_POST_SPECULAR_HP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_PRE_SPECULAR_HP
	CompareConstant(GL_TEXTURE_PRE_SPECULAR_HP,0x8169,14555,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_PRE_SPECULAR_HP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_ELEMENTS_VERTICES_EXT
	CompareConstant(GL_MAX_ELEMENTS_VERTICES_EXT,0x80E8,14556,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_ELEMENTS_VERTICES_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_ELEMENTS_INDICES_EXT
	CompareConstant(GL_MAX_ELEMENTS_INDICES_EXT,0x80E9,14557,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_ELEMENTS_INDICES_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PHONG_WIN
	CompareConstant(GL_PHONG_WIN,0x80EA,14558,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PHONG_WIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PHONG_HINT_WIN
	CompareConstant(GL_PHONG_HINT_WIN,0x80EB,14559,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PHONG_HINT_WIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FOG_SPECULAR_TEXTURE_WIN
	CompareConstant(GL_FOG_SPECULAR_TEXTURE_WIN,0x80EC,14560,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FOG_SPECULAR_TEXTURE_WIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FRAGMENT_MATERIAL_EXT
	CompareConstant(GL_FRAGMENT_MATERIAL_EXT,0x8349,14561,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FRAGMENT_MATERIAL_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FRAGMENT_NORMAL_EXT
	CompareConstant(GL_FRAGMENT_NORMAL_EXT,0x834A,14562,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FRAGMENT_NORMAL_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FRAGMENT_COLOR_EXT
	CompareConstant(GL_FRAGMENT_COLOR_EXT,0x834C,14563,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FRAGMENT_COLOR_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ATTENUATION_EXT
	CompareConstant(GL_ATTENUATION_EXT,0x834D,14564,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ATTENUATION_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SHADOW_ATTENUATION_EXT
	CompareConstant(GL_SHADOW_ATTENUATION_EXT,0x834E,14565,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SHADOW_ATTENUATION_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_APPLICATION_MODE_EXT
	CompareConstant(GL_TEXTURE_APPLICATION_MODE_EXT,0x834F,14566,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_APPLICATION_MODE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_LIGHT_EXT
	CompareConstant(GL_TEXTURE_LIGHT_EXT,0x8350,14567,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_LIGHT_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_MATERIAL_FACE_EXT
	CompareConstant(GL_TEXTURE_MATERIAL_FACE_EXT,0x8351,14568,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_MATERIAL_FACE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_MATERIAL_PARAMETER_EXT
	CompareConstant(GL_TEXTURE_MATERIAL_PARAMETER_EXT,0x8352,14569,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_MATERIAL_PARAMETER_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BGR_EXT
	CompareConstant(GL_BGR_EXT,0x80E0,14570,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_BGR_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BGRA_EXT
	CompareConstant(GL_BGRA_EXT,0x80E1,14571,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_BGRA_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PARALLEL_ARRAYS_INTEL
	CompareConstant(GL_PARALLEL_ARRAYS_INTEL,0x83F4,14572,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PARALLEL_ARRAYS_INTEL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_ARRAY_PARALLEL_POINTERS_INTEL
	CompareConstant(GL_VERTEX_ARRAY_PARALLEL_POINTERS_INTEL,0x83F5,14573,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX_ARRAY_PARALLEL_POINTERS_INTEL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_NORMAL_ARRAY_PARALLEL_POINTERS_INTEL
	CompareConstant(GL_NORMAL_ARRAY_PARALLEL_POINTERS_INTEL,0x83F6,14574,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_NORMAL_ARRAY_PARALLEL_POINTERS_INTEL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_ARRAY_PARALLEL_POINTERS_INTEL
	CompareConstant(GL_COLOR_ARRAY_PARALLEL_POINTERS_INTEL,0x83F7,14575,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_ARRAY_PARALLEL_POINTERS_INTEL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_COORD_ARRAY_PARALLEL_POINTERS_INTEL
	CompareConstant(GL_TEXTURE_COORD_ARRAY_PARALLEL_POINTERS_INTEL,0x83F8,14576,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_COORD_ARRAY_PARALLEL_POINTERS_INTEL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OCCLUSION_TEST_HP
	CompareConstant(GL_OCCLUSION_TEST_HP,0x8165,14577,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OCCLUSION_TEST_HP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OCCLUSION_TEST_RESULT_HP
	CompareConstant(GL_OCCLUSION_TEST_RESULT_HP,0x8166,14578,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OCCLUSION_TEST_RESULT_HP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PIXEL_TRANSFORM_2D_EXT
	CompareConstant(GL_PIXEL_TRANSFORM_2D_EXT,0x8330,14579,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PIXEL_TRANSFORM_2D_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PIXEL_MAG_FILTER_EXT
	CompareConstant(GL_PIXEL_MAG_FILTER_EXT,0x8331,14580,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PIXEL_MAG_FILTER_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PIXEL_MIN_FILTER_EXT
	CompareConstant(GL_PIXEL_MIN_FILTER_EXT,0x8332,14581,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PIXEL_MIN_FILTER_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PIXEL_CUBIC_WEIGHT_EXT
	CompareConstant(GL_PIXEL_CUBIC_WEIGHT_EXT,0x8333,14582,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PIXEL_CUBIC_WEIGHT_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CUBIC_EXT
	CompareConstant(GL_CUBIC_EXT,0x8334,14583,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CUBIC_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_AVERAGE_EXT
	CompareConstant(GL_AVERAGE_EXT,0x8335,14584,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_AVERAGE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PIXEL_TRANSFORM_2D_STACK_DEPTH_EXT
	CompareConstant(GL_PIXEL_TRANSFORM_2D_STACK_DEPTH_EXT,0x8336,14585,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PIXEL_TRANSFORM_2D_STACK_DEPTH_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_PIXEL_TRANSFORM_2D_STACK_DEPTH_EXT
	CompareConstant(GL_MAX_PIXEL_TRANSFORM_2D_STACK_DEPTH_EXT,0x8337,14586,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_PIXEL_TRANSFORM_2D_STACK_DEPTH_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PIXEL_TRANSFORM_2D_MATRIX_EXT
	CompareConstant(GL_PIXEL_TRANSFORM_2D_MATRIX_EXT,0x8338,14587,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PIXEL_TRANSFORM_2D_MATRIX_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SHARED_TEXTURE_PALETTE_EXT
	CompareConstant(GL_SHARED_TEXTURE_PALETTE_EXT,0x81FB,14588,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SHARED_TEXTURE_PALETTE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LIGHT_MODEL_COLOR_CONTROL_EXT
	CompareConstant(GL_LIGHT_MODEL_COLOR_CONTROL_EXT,0x81F8,14589,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_LIGHT_MODEL_COLOR_CONTROL_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SINGLE_COLOR_EXT
	CompareConstant(GL_SINGLE_COLOR_EXT,0x81F9,14590,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SINGLE_COLOR_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SEPARATE_SPECULAR_COLOR_EXT
	CompareConstant(GL_SEPARATE_SPECULAR_COLOR_EXT,0x81FA,14591,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SEPARATE_SPECULAR_COLOR_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_SUM_EXT
	CompareConstant(GL_COLOR_SUM_EXT,0x8458,14592,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_SUM_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CURRENT_SECONDARY_COLOR_EXT
	CompareConstant(GL_CURRENT_SECONDARY_COLOR_EXT,0x8459,14593,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CURRENT_SECONDARY_COLOR_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SECONDARY_COLOR_ARRAY_SIZE_EXT
	CompareConstant(GL_SECONDARY_COLOR_ARRAY_SIZE_EXT,0x845A,14594,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SECONDARY_COLOR_ARRAY_SIZE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SECONDARY_COLOR_ARRAY_TYPE_EXT
	CompareConstant(GL_SECONDARY_COLOR_ARRAY_TYPE_EXT,0x845B,14595,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SECONDARY_COLOR_ARRAY_TYPE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SECONDARY_COLOR_ARRAY_STRIDE_EXT
	CompareConstant(GL_SECONDARY_COLOR_ARRAY_STRIDE_EXT,0x845C,14596,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SECONDARY_COLOR_ARRAY_STRIDE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SECONDARY_COLOR_ARRAY_POINTER_EXT
	CompareConstant(GL_SECONDARY_COLOR_ARRAY_POINTER_EXT,0x845D,14597,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SECONDARY_COLOR_ARRAY_POINTER_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SECONDARY_COLOR_ARRAY_EXT
	CompareConstant(GL_SECONDARY_COLOR_ARRAY_EXT,0x845E,14598,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SECONDARY_COLOR_ARRAY_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PERTURB_EXT
	CompareConstant(GL_PERTURB_EXT,0x85AE,14599,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PERTURB_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_NORMAL_EXT
	CompareConstant(GL_TEXTURE_NORMAL_EXT,0x85AF,14600,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_NORMAL_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FOG_COORDINATE_SOURCE_EXT
	CompareConstant(GL_FOG_COORDINATE_SOURCE_EXT,0x8450,14601,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FOG_COORDINATE_SOURCE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FOG_COORDINATE_EXT
	CompareConstant(GL_FOG_COORDINATE_EXT,0x8451,14602,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FOG_COORDINATE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FRAGMENT_DEPTH_EXT
	CompareConstant(GL_FRAGMENT_DEPTH_EXT,0x8452,14603,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FRAGMENT_DEPTH_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CURRENT_FOG_COORDINATE_EXT
	CompareConstant(GL_CURRENT_FOG_COORDINATE_EXT,0x8453,14604,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CURRENT_FOG_COORDINATE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FOG_COORDINATE_ARRAY_TYPE_EXT
	CompareConstant(GL_FOG_COORDINATE_ARRAY_TYPE_EXT,0x8454,14605,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FOG_COORDINATE_ARRAY_TYPE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FOG_COORDINATE_ARRAY_STRIDE_EXT
	CompareConstant(GL_FOG_COORDINATE_ARRAY_STRIDE_EXT,0x8455,14606,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FOG_COORDINATE_ARRAY_STRIDE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FOG_COORDINATE_ARRAY_POINTER_EXT
	CompareConstant(GL_FOG_COORDINATE_ARRAY_POINTER_EXT,0x8456,14607,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FOG_COORDINATE_ARRAY_POINTER_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FOG_COORDINATE_ARRAY_EXT
	CompareConstant(GL_FOG_COORDINATE_ARRAY_EXT,0x8457,14608,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FOG_COORDINATE_ARRAY_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SCREEN_COORDINATES_REND
	CompareConstant(GL_SCREEN_COORDINATES_REND,0x8490,14609,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SCREEN_COORDINATES_REND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INVERTED_SCREEN_W_REND
	CompareConstant(GL_INVERTED_SCREEN_W_REND,0x8491,14610,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_INVERTED_SCREEN_W_REND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TANGENT_ARRAY_EXT
	CompareConstant(GL_TANGENT_ARRAY_EXT,0x8439,14611,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TANGENT_ARRAY_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BINORMAL_ARRAY_EXT
	CompareConstant(GL_BINORMAL_ARRAY_EXT,0x843A,14612,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_BINORMAL_ARRAY_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CURRENT_TANGENT_EXT
	CompareConstant(GL_CURRENT_TANGENT_EXT,0x843B,14613,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CURRENT_TANGENT_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CURRENT_BINORMAL_EXT
	CompareConstant(GL_CURRENT_BINORMAL_EXT,0x843C,14614,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CURRENT_BINORMAL_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TANGENT_ARRAY_TYPE_EXT
	CompareConstant(GL_TANGENT_ARRAY_TYPE_EXT,0x843E,14615,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TANGENT_ARRAY_TYPE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TANGENT_ARRAY_STRIDE_EXT
	CompareConstant(GL_TANGENT_ARRAY_STRIDE_EXT,0x843F,14616,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TANGENT_ARRAY_STRIDE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BINORMAL_ARRAY_TYPE_EXT
	CompareConstant(GL_BINORMAL_ARRAY_TYPE_EXT,0x8440,14617,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_BINORMAL_ARRAY_TYPE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BINORMAL_ARRAY_STRIDE_EXT
	CompareConstant(GL_BINORMAL_ARRAY_STRIDE_EXT,0x8441,14618,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_BINORMAL_ARRAY_STRIDE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TANGENT_ARRAY_POINTER_EXT
	CompareConstant(GL_TANGENT_ARRAY_POINTER_EXT,0x8442,14619,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TANGENT_ARRAY_POINTER_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BINORMAL_ARRAY_POINTER_EXT
	CompareConstant(GL_BINORMAL_ARRAY_POINTER_EXT,0x8443,14620,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_BINORMAL_ARRAY_POINTER_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAP1_TANGENT_EXT
	CompareConstant(GL_MAP1_TANGENT_EXT,0x8444,14621,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAP1_TANGENT_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAP2_TANGENT_EXT
	CompareConstant(GL_MAP2_TANGENT_EXT,0x8445,14622,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAP2_TANGENT_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAP1_BINORMAL_EXT
	CompareConstant(GL_MAP1_BINORMAL_EXT,0x8446,14623,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAP1_BINORMAL_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAP2_BINORMAL_EXT
	CompareConstant(GL_MAP2_BINORMAL_EXT,0x8447,14624,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAP2_BINORMAL_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COMBINE_EXT
	CompareConstant(GL_COMBINE_EXT,0x8570,14625,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COMBINE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COMBINE_RGB_EXT
	CompareConstant(GL_COMBINE_RGB_EXT,0x8571,14626,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COMBINE_RGB_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COMBINE_ALPHA_EXT
	CompareConstant(GL_COMBINE_ALPHA_EXT,0x8572,14627,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COMBINE_ALPHA_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RGB_SCALE_EXT
	CompareConstant(GL_RGB_SCALE_EXT,0x8573,14628,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_RGB_SCALE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ADD_SIGNED_EXT
	CompareConstant(GL_ADD_SIGNED_EXT,0x8574,14629,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ADD_SIGNED_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INTERPOLATE_EXT
	CompareConstant(GL_INTERPOLATE_EXT,0x8575,14630,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_INTERPOLATE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CONSTANT_EXT
	CompareConstant(GL_CONSTANT_EXT,0x8576,14631,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CONSTANT_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PRIMARY_COLOR_EXT
	CompareConstant(GL_PRIMARY_COLOR_EXT,0x8577,14632,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PRIMARY_COLOR_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PREVIOUS_EXT
	CompareConstant(GL_PREVIOUS_EXT,0x8578,14633,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PREVIOUS_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SOURCE0_RGB_EXT
	CompareConstant(GL_SOURCE0_RGB_EXT,0x8580,14634,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SOURCE0_RGB_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SOURCE1_RGB_EXT
	CompareConstant(GL_SOURCE1_RGB_EXT,0x8581,14635,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SOURCE1_RGB_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SOURCE2_RGB_EXT
	CompareConstant(GL_SOURCE2_RGB_EXT,0x8582,14636,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SOURCE2_RGB_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SOURCE0_ALPHA_EXT
	CompareConstant(GL_SOURCE0_ALPHA_EXT,0x8588,14637,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SOURCE0_ALPHA_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SOURCE1_ALPHA_EXT
	CompareConstant(GL_SOURCE1_ALPHA_EXT,0x8589,14638,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SOURCE1_ALPHA_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SOURCE2_ALPHA_EXT
	CompareConstant(GL_SOURCE2_ALPHA_EXT,0x858A,14639,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SOURCE2_ALPHA_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OPERAND0_RGB_EXT
	CompareConstant(GL_OPERAND0_RGB_EXT,0x8590,14640,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OPERAND0_RGB_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OPERAND1_RGB_EXT
	CompareConstant(GL_OPERAND1_RGB_EXT,0x8591,14641,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OPERAND1_RGB_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OPERAND2_RGB_EXT
	CompareConstant(GL_OPERAND2_RGB_EXT,0x8592,14642,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OPERAND2_RGB_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OPERAND0_ALPHA_EXT
	CompareConstant(GL_OPERAND0_ALPHA_EXT,0x8598,14643,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OPERAND0_ALPHA_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OPERAND1_ALPHA_EXT
	CompareConstant(GL_OPERAND1_ALPHA_EXT,0x8599,14644,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OPERAND1_ALPHA_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OPERAND2_ALPHA_EXT
	CompareConstant(GL_OPERAND2_ALPHA_EXT,0x859A,14645,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OPERAND2_ALPHA_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_UNPACK_CONSTANT_DATA_SUNX
	CompareConstant(GL_UNPACK_CONSTANT_DATA_SUNX,0x81D5,14646,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_UNPACK_CONSTANT_DATA_SUNX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_CONSTANT_DATA_SUNX
	CompareConstant(GL_TEXTURE_CONSTANT_DATA_SUNX,0x81D6,14647,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_CONSTANT_DATA_SUNX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_GLOBAL_ALPHA_SUN
	CompareConstant(GL_GLOBAL_ALPHA_SUN,0x81D9,14648,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_GLOBAL_ALPHA_SUN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_GLOBAL_ALPHA_FACTOR_SUN
	CompareConstant(GL_GLOBAL_ALPHA_FACTOR_SUN,0x81DA,14649,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_GLOBAL_ALPHA_FACTOR_SUN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RESTART_SUN
	CompareConstant(GL_RESTART_SUN,0x0001,14650,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_RESTART_SUN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_REPLACE_MIDDLE_SUN
	CompareConstant(GL_REPLACE_MIDDLE_SUN,0x0002,14651,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_REPLACE_MIDDLE_SUN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_REPLACE_OLDEST_SUN
	CompareConstant(GL_REPLACE_OLDEST_SUN,0x0003,14652,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_REPLACE_OLDEST_SUN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TRIANGLE_LIST_SUN
	CompareConstant(GL_TRIANGLE_LIST_SUN,0x81D7,14653,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TRIANGLE_LIST_SUN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_REPLACEMENT_CODE_SUN
	CompareConstant(GL_REPLACEMENT_CODE_SUN,0x81D8,14654,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_REPLACEMENT_CODE_SUN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_REPLACEMENT_CODE_ARRAY_SUN
	CompareConstant(GL_REPLACEMENT_CODE_ARRAY_SUN,0x85C0,14655,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_REPLACEMENT_CODE_ARRAY_SUN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_REPLACEMENT_CODE_ARRAY_TYPE_SUN
	CompareConstant(GL_REPLACEMENT_CODE_ARRAY_TYPE_SUN,0x85C1,14656,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_REPLACEMENT_CODE_ARRAY_TYPE_SUN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_REPLACEMENT_CODE_ARRAY_STRIDE_SUN
	CompareConstant(GL_REPLACEMENT_CODE_ARRAY_STRIDE_SUN,0x85C2,14657,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_REPLACEMENT_CODE_ARRAY_STRIDE_SUN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_REPLACEMENT_CODE_ARRAY_POINTER_SUN
	CompareConstant(GL_REPLACEMENT_CODE_ARRAY_POINTER_SUN,0x85C3,14658,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_REPLACEMENT_CODE_ARRAY_POINTER_SUN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_R1UI_V3F_SUN
	CompareConstant(GL_R1UI_V3F_SUN,0x85C4,14659,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_R1UI_V3F_SUN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_R1UI_C4UB_V3F_SUN
	CompareConstant(GL_R1UI_C4UB_V3F_SUN,0x85C5,14660,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_R1UI_C4UB_V3F_SUN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_R1UI_C3F_V3F_SUN
	CompareConstant(GL_R1UI_C3F_V3F_SUN,0x85C6,14661,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_R1UI_C3F_V3F_SUN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_R1UI_N3F_V3F_SUN
	CompareConstant(GL_R1UI_N3F_V3F_SUN,0x85C7,14662,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_R1UI_N3F_V3F_SUN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_R1UI_C4F_N3F_V3F_SUN
	CompareConstant(GL_R1UI_C4F_N3F_V3F_SUN,0x85C8,14663,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_R1UI_C4F_N3F_V3F_SUN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_R1UI_T2F_V3F_SUN
	CompareConstant(GL_R1UI_T2F_V3F_SUN,0x85C9,14664,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_R1UI_T2F_V3F_SUN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_R1UI_T2F_N3F_V3F_SUN
	CompareConstant(GL_R1UI_T2F_N3F_V3F_SUN,0x85CA,14665,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_R1UI_T2F_N3F_V3F_SUN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_R1UI_T2F_C4F_N3F_V3F_SUN
	CompareConstant(GL_R1UI_T2F_C4F_N3F_V3F_SUN,0x85CB,14666,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_R1UI_T2F_C4F_N3F_V3F_SUN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BLEND_DST_RGB_EXT
	CompareConstant(GL_BLEND_DST_RGB_EXT,0x80C8,14667,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_BLEND_DST_RGB_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BLEND_SRC_RGB_EXT
	CompareConstant(GL_BLEND_SRC_RGB_EXT,0x80C9,14668,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_BLEND_SRC_RGB_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BLEND_DST_ALPHA_EXT
	CompareConstant(GL_BLEND_DST_ALPHA_EXT,0x80CA,14669,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_BLEND_DST_ALPHA_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BLEND_SRC_ALPHA_EXT
	CompareConstant(GL_BLEND_SRC_ALPHA_EXT,0x80CB,14670,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_BLEND_SRC_ALPHA_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RED_MIN_CLAMP_INGR
	CompareConstant(GL_RED_MIN_CLAMP_INGR,0x8560,14671,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_RED_MIN_CLAMP_INGR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_GREEN_MIN_CLAMP_INGR
	CompareConstant(GL_GREEN_MIN_CLAMP_INGR,0x8561,14672,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_GREEN_MIN_CLAMP_INGR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BLUE_MIN_CLAMP_INGR
	CompareConstant(GL_BLUE_MIN_CLAMP_INGR,0x8562,14673,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_BLUE_MIN_CLAMP_INGR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ALPHA_MIN_CLAMP_INGR
	CompareConstant(GL_ALPHA_MIN_CLAMP_INGR,0x8563,14674,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ALPHA_MIN_CLAMP_INGR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RED_MAX_CLAMP_INGR
	CompareConstant(GL_RED_MAX_CLAMP_INGR,0x8564,14675,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_RED_MAX_CLAMP_INGR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_GREEN_MAX_CLAMP_INGR
	CompareConstant(GL_GREEN_MAX_CLAMP_INGR,0x8565,14676,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_GREEN_MAX_CLAMP_INGR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BLUE_MAX_CLAMP_INGR
	CompareConstant(GL_BLUE_MAX_CLAMP_INGR,0x8566,14677,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_BLUE_MAX_CLAMP_INGR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ALPHA_MAX_CLAMP_INGR
	CompareConstant(GL_ALPHA_MAX_CLAMP_INGR,0x8567,14678,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ALPHA_MAX_CLAMP_INGR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INTERLACE_READ_INGR
	CompareConstant(GL_INTERLACE_READ_INGR,0x8568,14679,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_INTERLACE_READ_INGR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INCR_WRAP_EXT
	CompareConstant(GL_INCR_WRAP_EXT,0x8507,14680,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_INCR_WRAP_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DECR_WRAP_EXT
	CompareConstant(GL_DECR_WRAP_EXT,0x8508,14681,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DECR_WRAP_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_422_EXT
	CompareConstant(GL_422_EXT,0x80CC,14682,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_422_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_422_REV_EXT
	CompareConstant(GL_422_REV_EXT,0x80CD,14683,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_422_REV_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_422_AVERAGE_EXT
	CompareConstant(GL_422_AVERAGE_EXT,0x80CE,14684,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_422_AVERAGE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_422_REV_AVERAGE_EXT
	CompareConstant(GL_422_REV_AVERAGE_EXT,0x80CF,14685,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_422_REV_AVERAGE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_NORMAL_MAP_EXT
	CompareConstant(GL_NORMAL_MAP_EXT,0x8511,14686,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_NORMAL_MAP_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_REFLECTION_MAP_EXT
	CompareConstant(GL_REFLECTION_MAP_EXT,0x8512,14687,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_REFLECTION_MAP_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_CUBE_MAP_EXT
	CompareConstant(GL_TEXTURE_CUBE_MAP_EXT,0x8513,14688,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_CUBE_MAP_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_BINDING_CUBE_MAP_EXT
	CompareConstant(GL_TEXTURE_BINDING_CUBE_MAP_EXT,0x8514,14689,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_BINDING_CUBE_MAP_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_CUBE_MAP_POSITIVE_X_EXT
	CompareConstant(GL_TEXTURE_CUBE_MAP_POSITIVE_X_EXT,0x8515,14690,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_CUBE_MAP_POSITIVE_X_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_CUBE_MAP_NEGATIVE_X_EXT
	CompareConstant(GL_TEXTURE_CUBE_MAP_NEGATIVE_X_EXT,0x8516,14691,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_CUBE_MAP_NEGATIVE_X_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_CUBE_MAP_POSITIVE_Y_EXT
	CompareConstant(GL_TEXTURE_CUBE_MAP_POSITIVE_Y_EXT,0x8517,14692,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_CUBE_MAP_POSITIVE_Y_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_EXT
	CompareConstant(GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_EXT,0x8518,14693,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_CUBE_MAP_POSITIVE_Z_EXT
	CompareConstant(GL_TEXTURE_CUBE_MAP_POSITIVE_Z_EXT,0x8519,14694,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_CUBE_MAP_POSITIVE_Z_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_EXT
	CompareConstant(GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_EXT,0x851A,14695,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PROXY_TEXTURE_CUBE_MAP_EXT
	CompareConstant(GL_PROXY_TEXTURE_CUBE_MAP_EXT,0x851B,14696,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PROXY_TEXTURE_CUBE_MAP_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_CUBE_MAP_TEXTURE_SIZE_EXT
	CompareConstant(GL_MAX_CUBE_MAP_TEXTURE_SIZE_EXT,0x851C,14697,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_CUBE_MAP_TEXTURE_SIZE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_WRAP_BORDER_SUN
	CompareConstant(GL_WRAP_BORDER_SUN,0x81D4,14698,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_WRAP_BORDER_SUN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_TEXTURE_LOD_BIAS_EXT
	CompareConstant(GL_MAX_TEXTURE_LOD_BIAS_EXT,0x84FD,14699,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_TEXTURE_LOD_BIAS_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_FILTER_CONTROL_EXT
	CompareConstant(GL_TEXTURE_FILTER_CONTROL_EXT,0x8500,14700,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_FILTER_CONTROL_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_LOD_BIAS_EXT
	CompareConstant(GL_TEXTURE_LOD_BIAS_EXT,0x8501,14701,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_LOD_BIAS_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_MAX_ANISOTROPY_EXT
	CompareConstant(GL_TEXTURE_MAX_ANISOTROPY_EXT,0x84FE,14702,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_MAX_ANISOTROPY_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT
	CompareConstant(GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT,0x84FF,14703,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MODELVIEW0_STACK_DEPTH_EXT
	CompareConstant(GL_MODELVIEW0_STACK_DEPTH_EXT,GL_MODELVIEW_STACK_DEPTH,14704,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MODELVIEW0_STACK_DEPTH_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MODELVIEW1_STACK_DEPTH_EXT
	CompareConstant(GL_MODELVIEW1_STACK_DEPTH_EXT,0x8502,14705,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MODELVIEW1_STACK_DEPTH_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MODELVIEW0_MATRIX_EXT
	CompareConstant(GL_MODELVIEW0_MATRIX_EXT,GL_MODELVIEW_MATRIX,14706,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MODELVIEW0_MATRIX_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MODELVIEW1_MATRIX_EXT
	CompareConstant(GL_MODELVIEW1_MATRIX_EXT,0x8506,14707,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MODELVIEW1_MATRIX_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_WEIGHTING_EXT
	CompareConstant(GL_VERTEX_WEIGHTING_EXT,0x8509,14708,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX_WEIGHTING_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MODELVIEW0_EXT
	CompareConstant(GL_MODELVIEW0_EXT,GL_MODELVIEW,14709,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MODELVIEW0_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MODELVIEW1_EXT
	CompareConstant(GL_MODELVIEW1_EXT,0x850A,14710,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MODELVIEW1_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CURRENT_VERTEX_WEIGHT_EXT
	CompareConstant(GL_CURRENT_VERTEX_WEIGHT_EXT,0x850B,14711,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CURRENT_VERTEX_WEIGHT_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_WEIGHT_ARRAY_EXT
	CompareConstant(GL_VERTEX_WEIGHT_ARRAY_EXT,0x850C,14712,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX_WEIGHT_ARRAY_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_WEIGHT_ARRAY_SIZE_EXT
	CompareConstant(GL_VERTEX_WEIGHT_ARRAY_SIZE_EXT,0x850D,14713,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX_WEIGHT_ARRAY_SIZE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_WEIGHT_ARRAY_TYPE_EXT
	CompareConstant(GL_VERTEX_WEIGHT_ARRAY_TYPE_EXT,0x850E,14714,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX_WEIGHT_ARRAY_TYPE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_WEIGHT_ARRAY_STRIDE_EXT
	CompareConstant(GL_VERTEX_WEIGHT_ARRAY_STRIDE_EXT,0x850F,14715,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX_WEIGHT_ARRAY_STRIDE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_WEIGHT_ARRAY_POINTER_EXT
	CompareConstant(GL_VERTEX_WEIGHT_ARRAY_POINTER_EXT,0x8510,14716,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX_WEIGHT_ARRAY_POINTER_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COMPRESSED_RGB_S3TC_DXT1_EXT
	CompareConstant(GL_COMPRESSED_RGB_S3TC_DXT1_EXT,0x83F0,14717,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COMPRESSED_RGB_S3TC_DXT1_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COMPRESSED_RGBA_S3TC_DXT1_EXT
	CompareConstant(GL_COMPRESSED_RGBA_S3TC_DXT1_EXT,0x83F1,14718,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COMPRESSED_RGBA_S3TC_DXT1_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COMPRESSED_RGBA_S3TC_DXT3_EXT
	CompareConstant(GL_COMPRESSED_RGBA_S3TC_DXT3_EXT,0x83F2,14719,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COMPRESSED_RGBA_S3TC_DXT3_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COMPRESSED_RGBA_S3TC_DXT5_EXT
	CompareConstant(GL_COMPRESSED_RGBA_S3TC_DXT5_EXT,0x83F3,14720,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COMPRESSED_RGBA_S3TC_DXT5_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CULL_VERTEX_IBM
	CompareConstant(GL_CULL_VERTEX_IBM,103050,14721,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CULL_VERTEX_IBM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_ARRAY_LIST_IBM
	CompareConstant(GL_VERTEX_ARRAY_LIST_IBM,103070,14722,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX_ARRAY_LIST_IBM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_NORMAL_ARRAY_LIST_IBM
	CompareConstant(GL_NORMAL_ARRAY_LIST_IBM,103071,14723,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_NORMAL_ARRAY_LIST_IBM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_ARRAY_LIST_IBM
	CompareConstant(GL_COLOR_ARRAY_LIST_IBM,103072,14724,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_ARRAY_LIST_IBM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INDEX_ARRAY_LIST_IBM
	CompareConstant(GL_INDEX_ARRAY_LIST_IBM,103073,14725,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_INDEX_ARRAY_LIST_IBM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_COORD_ARRAY_LIST_IBM
	CompareConstant(GL_TEXTURE_COORD_ARRAY_LIST_IBM,103074,14726,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_COORD_ARRAY_LIST_IBM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EDGE_FLAG_ARRAY_LIST_IBM
	CompareConstant(GL_EDGE_FLAG_ARRAY_LIST_IBM,103075,14727,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EDGE_FLAG_ARRAY_LIST_IBM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FOG_COORDINATE_ARRAY_LIST_IBM
	CompareConstant(GL_FOG_COORDINATE_ARRAY_LIST_IBM,103076,14728,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FOG_COORDINATE_ARRAY_LIST_IBM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SECONDARY_COLOR_ARRAY_LIST_IBM
	CompareConstant(GL_SECONDARY_COLOR_ARRAY_LIST_IBM,103077,14729,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SECONDARY_COLOR_ARRAY_LIST_IBM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_ARRAY_LIST_STRIDE_IBM
	CompareConstant(GL_VERTEX_ARRAY_LIST_STRIDE_IBM,103080,14730,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX_ARRAY_LIST_STRIDE_IBM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_NORMAL_ARRAY_LIST_STRIDE_IBM
	CompareConstant(GL_NORMAL_ARRAY_LIST_STRIDE_IBM,103081,14731,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_NORMAL_ARRAY_LIST_STRIDE_IBM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_ARRAY_LIST_STRIDE_IBM
	CompareConstant(GL_COLOR_ARRAY_LIST_STRIDE_IBM,103082,14732,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_ARRAY_LIST_STRIDE_IBM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INDEX_ARRAY_LIST_STRIDE_IBM
	CompareConstant(GL_INDEX_ARRAY_LIST_STRIDE_IBM,103083,14733,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_INDEX_ARRAY_LIST_STRIDE_IBM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_COORD_ARRAY_LIST_STRIDE_IBM
	CompareConstant(GL_TEXTURE_COORD_ARRAY_LIST_STRIDE_IBM,103084,14734,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_COORD_ARRAY_LIST_STRIDE_IBM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EDGE_FLAG_ARRAY_LIST_STRIDE_IBM
	CompareConstant(GL_EDGE_FLAG_ARRAY_LIST_STRIDE_IBM,103085,14735,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EDGE_FLAG_ARRAY_LIST_STRIDE_IBM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FOG_COORDINATE_ARRAY_LIST_STRIDE_IBM
	CompareConstant(GL_FOG_COORDINATE_ARRAY_LIST_STRIDE_IBM,103086,14736,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FOG_COORDINATE_ARRAY_LIST_STRIDE_IBM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SECONDARY_COLOR_ARRAY_LIST_STRIDE_IBM
	CompareConstant(GL_SECONDARY_COLOR_ARRAY_LIST_STRIDE_IBM,103087,14737,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SECONDARY_COLOR_ARRAY_LIST_STRIDE_IBM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COMPRESSED_RGB_FXT1_3DFX
	CompareConstant(GL_COMPRESSED_RGB_FXT1_3DFX,0x86B0,14738,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COMPRESSED_RGB_FXT1_3DFX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COMPRESSED_RGBA_FXT1_3DFX
	CompareConstant(GL_COMPRESSED_RGBA_FXT1_3DFX,0x86B1,14739,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COMPRESSED_RGBA_FXT1_3DFX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MULTISAMPLE_3DFX
	CompareConstant(GL_MULTISAMPLE_3DFX,0x86B2,14740,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MULTISAMPLE_3DFX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SAMPLE_BUFFERS_3DFX
	CompareConstant(GL_SAMPLE_BUFFERS_3DFX,0x86B3,14741,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SAMPLE_BUFFERS_3DFX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SAMPLES_3DFX
	CompareConstant(GL_SAMPLES_3DFX,0x86B4,14742,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SAMPLES_3DFX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MULTISAMPLE_BIT_3DFX
	CompareConstant(GL_MULTISAMPLE_BIT_3DFX,0x20000000,14743,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MULTISAMPLE_BIT_3DFX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MULTISAMPLE_EXT
	CompareConstant(GL_MULTISAMPLE_EXT,0x809D,14744,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MULTISAMPLE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SAMPLE_ALPHA_TO_MASK_EXT
	CompareConstant(GL_SAMPLE_ALPHA_TO_MASK_EXT,0x809E,14745,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SAMPLE_ALPHA_TO_MASK_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SAMPLE_ALPHA_TO_ONE_EXT
	CompareConstant(GL_SAMPLE_ALPHA_TO_ONE_EXT,0x809F,14746,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SAMPLE_ALPHA_TO_ONE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SAMPLE_MASK_EXT
	CompareConstant(GL_SAMPLE_MASK_EXT,0x80A0,14747,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SAMPLE_MASK_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_1PASS_EXT
	CompareConstant(GL_1PASS_EXT,0x80A1,14748,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_1PASS_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_2PASS_0_EXT
	CompareConstant(GL_2PASS_0_EXT,0x80A2,14749,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_2PASS_0_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_2PASS_1_EXT
	CompareConstant(GL_2PASS_1_EXT,0x80A3,14750,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_2PASS_1_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_4PASS_0_EXT
	CompareConstant(GL_4PASS_0_EXT,0x80A4,14751,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_4PASS_0_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_4PASS_1_EXT
	CompareConstant(GL_4PASS_1_EXT,0x80A5,14752,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_4PASS_1_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_4PASS_2_EXT
	CompareConstant(GL_4PASS_2_EXT,0x80A6,14753,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_4PASS_2_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_4PASS_3_EXT
	CompareConstant(GL_4PASS_3_EXT,0x80A7,14754,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_4PASS_3_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SAMPLE_BUFFERS_EXT
	CompareConstant(GL_SAMPLE_BUFFERS_EXT,0x80A8,14755,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SAMPLE_BUFFERS_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SAMPLES_EXT
	CompareConstant(GL_SAMPLES_EXT,0x80A9,14756,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SAMPLES_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SAMPLE_MASK_VALUE_EXT
	CompareConstant(GL_SAMPLE_MASK_VALUE_EXT,0x80AA,14757,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SAMPLE_MASK_VALUE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SAMPLE_MASK_INVERT_EXT
	CompareConstant(GL_SAMPLE_MASK_INVERT_EXT,0x80AB,14758,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SAMPLE_MASK_INVERT_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SAMPLE_PATTERN_EXT
	CompareConstant(GL_SAMPLE_PATTERN_EXT,0x80AC,14759,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SAMPLE_PATTERN_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MULTISAMPLE_BIT_EXT
	CompareConstant(GL_MULTISAMPLE_BIT_EXT,0x20000000,14760,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MULTISAMPLE_BIT_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DOT3_RGB_EXT
	CompareConstant(GL_DOT3_RGB_EXT,0x8740,14761,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DOT3_RGB_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DOT3_RGBA_EXT
	CompareConstant(GL_DOT3_RGBA_EXT,0x8741,14762,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DOT3_RGBA_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MIRROR_CLAMP_ATI
	CompareConstant(GL_MIRROR_CLAMP_ATI,0x8742,14763,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MIRROR_CLAMP_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MIRROR_CLAMP_TO_EDGE_ATI
	CompareConstant(GL_MIRROR_CLAMP_TO_EDGE_ATI,0x8743,14764,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MIRROR_CLAMP_TO_EDGE_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MIRRORED_REPEAT_IBM
	CompareConstant(GL_MIRRORED_REPEAT_IBM,0x8370,14765,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MIRRORED_REPEAT_IBM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BUMP_ROT_MATRIX_ATI
	CompareConstant(GL_BUMP_ROT_MATRIX_ATI,0x8775,14766,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_BUMP_ROT_MATRIX_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BUMP_ROT_MATRIX_SIZE_ATI
	CompareConstant(GL_BUMP_ROT_MATRIX_SIZE_ATI,0x8776,14767,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_BUMP_ROT_MATRIX_SIZE_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BUMP_NUM_TEX_UNITS_ATI
	CompareConstant(GL_BUMP_NUM_TEX_UNITS_ATI,0x8777,14768,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_BUMP_NUM_TEX_UNITS_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BUMP_TEX_UNITS_ATI
	CompareConstant(GL_BUMP_TEX_UNITS_ATI,0x8778,14769,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_BUMP_TEX_UNITS_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DUDV_ATI
	CompareConstant(GL_DUDV_ATI,0x8779,14770,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DUDV_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DU8DV8_ATI
	CompareConstant(GL_DU8DV8_ATI,0x877A,14771,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DU8DV8_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BUMP_ENVMAP_ATI
	CompareConstant(GL_BUMP_ENVMAP_ATI,0x877B,14772,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_BUMP_ENVMAP_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BUMP_TARGET_ATI
	CompareConstant(GL_BUMP_TARGET_ATI,0x877C,14773,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_BUMP_TARGET_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FRAGMENT_SHADER_ATI
	CompareConstant(GL_FRAGMENT_SHADER_ATI,0x8920,14774,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FRAGMENT_SHADER_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_REG_0_ATI
	CompareConstant(GL_REG_0_ATI,0x8921,14775,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_REG_0_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_REG_1_ATI
	CompareConstant(GL_REG_1_ATI,0x8922,14776,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_REG_1_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_REG_2_ATI
	CompareConstant(GL_REG_2_ATI,0x8923,14777,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_REG_2_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_REG_3_ATI
	CompareConstant(GL_REG_3_ATI,0x8924,14778,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_REG_3_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_REG_4_ATI
	CompareConstant(GL_REG_4_ATI,0x8925,14779,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_REG_4_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_REG_5_ATI
	CompareConstant(GL_REG_5_ATI,0x8926,14780,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_REG_5_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_REG_6_ATI
	CompareConstant(GL_REG_6_ATI,0x8927,14781,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_REG_6_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_REG_7_ATI
	CompareConstant(GL_REG_7_ATI,0x8928,14782,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_REG_7_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_REG_8_ATI
	CompareConstant(GL_REG_8_ATI,0x8929,14783,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_REG_8_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_REG_9_ATI
	CompareConstant(GL_REG_9_ATI,0x892A,14784,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_REG_9_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_REG_10_ATI
	CompareConstant(GL_REG_10_ATI,0x892B,14785,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_REG_10_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_REG_11_ATI
	CompareConstant(GL_REG_11_ATI,0x892C,14786,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_REG_11_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_REG_12_ATI
	CompareConstant(GL_REG_12_ATI,0x892D,14787,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_REG_12_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_REG_13_ATI
	CompareConstant(GL_REG_13_ATI,0x892E,14788,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_REG_13_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_REG_14_ATI
	CompareConstant(GL_REG_14_ATI,0x892F,14789,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_REG_14_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_REG_15_ATI
	CompareConstant(GL_REG_15_ATI,0x8930,14790,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_REG_15_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_REG_16_ATI
	CompareConstant(GL_REG_16_ATI,0x8931,14791,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_REG_16_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_REG_17_ATI
	CompareConstant(GL_REG_17_ATI,0x8932,14792,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_REG_17_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_REG_18_ATI
	CompareConstant(GL_REG_18_ATI,0x8933,14793,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_REG_18_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_REG_19_ATI
	CompareConstant(GL_REG_19_ATI,0x8934,14794,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_REG_19_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_REG_20_ATI
	CompareConstant(GL_REG_20_ATI,0x8935,14795,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_REG_20_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_REG_21_ATI
	CompareConstant(GL_REG_21_ATI,0x8936,14796,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_REG_21_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_REG_22_ATI
	CompareConstant(GL_REG_22_ATI,0x8937,14797,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_REG_22_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_REG_23_ATI
	CompareConstant(GL_REG_23_ATI,0x8938,14798,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_REG_23_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_REG_24_ATI
	CompareConstant(GL_REG_24_ATI,0x8939,14799,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_REG_24_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_REG_25_ATI
	CompareConstant(GL_REG_25_ATI,0x893A,14800,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_REG_25_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_REG_26_ATI
	CompareConstant(GL_REG_26_ATI,0x893B,14801,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_REG_26_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_REG_27_ATI
	CompareConstant(GL_REG_27_ATI,0x893C,14802,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_REG_27_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_REG_28_ATI
	CompareConstant(GL_REG_28_ATI,0x893D,14803,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_REG_28_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_REG_29_ATI
	CompareConstant(GL_REG_29_ATI,0x893E,14804,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_REG_29_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_REG_30_ATI
	CompareConstant(GL_REG_30_ATI,0x893F,14805,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_REG_30_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_REG_31_ATI
	CompareConstant(GL_REG_31_ATI,0x8940,14806,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_REG_31_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CON_0_ATI
	CompareConstant(GL_CON_0_ATI,0x8941,14807,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CON_0_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CON_1_ATI
	CompareConstant(GL_CON_1_ATI,0x8942,14808,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CON_1_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CON_2_ATI
	CompareConstant(GL_CON_2_ATI,0x8943,14809,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CON_2_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CON_3_ATI
	CompareConstant(GL_CON_3_ATI,0x8944,14810,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CON_3_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CON_4_ATI
	CompareConstant(GL_CON_4_ATI,0x8945,14811,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CON_4_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CON_5_ATI
	CompareConstant(GL_CON_5_ATI,0x8946,14812,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CON_5_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CON_6_ATI
	CompareConstant(GL_CON_6_ATI,0x8947,14813,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CON_6_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CON_7_ATI
	CompareConstant(GL_CON_7_ATI,0x8948,14814,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CON_7_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CON_8_ATI
	CompareConstant(GL_CON_8_ATI,0x8949,14815,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CON_8_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CON_9_ATI
	CompareConstant(GL_CON_9_ATI,0x894A,14816,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CON_9_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CON_10_ATI
	CompareConstant(GL_CON_10_ATI,0x894B,14817,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CON_10_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CON_11_ATI
	CompareConstant(GL_CON_11_ATI,0x894C,14818,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CON_11_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CON_12_ATI
	CompareConstant(GL_CON_12_ATI,0x894D,14819,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CON_12_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CON_13_ATI
	CompareConstant(GL_CON_13_ATI,0x894E,14820,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CON_13_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CON_14_ATI
	CompareConstant(GL_CON_14_ATI,0x894F,14821,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CON_14_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CON_15_ATI
	CompareConstant(GL_CON_15_ATI,0x8950,14822,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CON_15_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CON_16_ATI
	CompareConstant(GL_CON_16_ATI,0x8951,14823,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CON_16_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CON_17_ATI
	CompareConstant(GL_CON_17_ATI,0x8952,14824,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CON_17_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CON_18_ATI
	CompareConstant(GL_CON_18_ATI,0x8953,14825,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CON_18_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CON_19_ATI
	CompareConstant(GL_CON_19_ATI,0x8954,14826,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CON_19_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CON_20_ATI
	CompareConstant(GL_CON_20_ATI,0x8955,14827,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CON_20_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CON_21_ATI
	CompareConstant(GL_CON_21_ATI,0x8956,14828,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CON_21_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CON_22_ATI
	CompareConstant(GL_CON_22_ATI,0x8957,14829,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CON_22_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CON_23_ATI
	CompareConstant(GL_CON_23_ATI,0x8958,14830,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CON_23_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CON_24_ATI
	CompareConstant(GL_CON_24_ATI,0x8959,14831,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CON_24_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CON_25_ATI
	CompareConstant(GL_CON_25_ATI,0x895A,14832,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CON_25_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CON_26_ATI
	CompareConstant(GL_CON_26_ATI,0x895B,14833,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CON_26_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CON_27_ATI
	CompareConstant(GL_CON_27_ATI,0x895C,14834,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CON_27_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CON_28_ATI
	CompareConstant(GL_CON_28_ATI,0x895D,14835,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CON_28_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CON_29_ATI
	CompareConstant(GL_CON_29_ATI,0x895E,14836,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CON_29_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CON_30_ATI
	CompareConstant(GL_CON_30_ATI,0x895F,14837,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CON_30_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CON_31_ATI
	CompareConstant(GL_CON_31_ATI,0x8960,14838,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CON_31_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MOV_ATI
	CompareConstant(GL_MOV_ATI,0x8961,14839,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MOV_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ADD_ATI
	CompareConstant(GL_ADD_ATI,0x8963,14840,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ADD_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MUL_ATI
	CompareConstant(GL_MUL_ATI,0x8964,14841,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MUL_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SUB_ATI
	CompareConstant(GL_SUB_ATI,0x8965,14842,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SUB_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DOT3_ATI
	CompareConstant(GL_DOT3_ATI,0x8966,14843,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DOT3_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DOT4_ATI
	CompareConstant(GL_DOT4_ATI,0x8967,14844,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DOT4_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAD_ATI
	CompareConstant(GL_MAD_ATI,0x8968,14845,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAD_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LERP_ATI
	CompareConstant(GL_LERP_ATI,0x8969,14846,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_LERP_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CND_ATI
	CompareConstant(GL_CND_ATI,0x896A,14847,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CND_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CND0_ATI
	CompareConstant(GL_CND0_ATI,0x896B,14848,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CND0_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DOT2_ADD_ATI
	CompareConstant(GL_DOT2_ADD_ATI,0x896C,14849,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DOT2_ADD_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SECONDARY_INTERPOLATOR_ATI
	CompareConstant(GL_SECONDARY_INTERPOLATOR_ATI,0x896D,14850,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SECONDARY_INTERPOLATOR_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_NUM_FRAGMENT_REGISTERS_ATI
	CompareConstant(GL_NUM_FRAGMENT_REGISTERS_ATI,0x896E,14851,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_NUM_FRAGMENT_REGISTERS_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_NUM_FRAGMENT_CONSTANTS_ATI
	CompareConstant(GL_NUM_FRAGMENT_CONSTANTS_ATI,0x896F,14852,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_NUM_FRAGMENT_CONSTANTS_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_NUM_PASSES_ATI
	CompareConstant(GL_NUM_PASSES_ATI,0x8970,14853,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_NUM_PASSES_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_NUM_INSTRUCTIONS_PER_PASS_ATI
	CompareConstant(GL_NUM_INSTRUCTIONS_PER_PASS_ATI,0x8971,14854,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_NUM_INSTRUCTIONS_PER_PASS_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_NUM_INSTRUCTIONS_TOTAL_ATI
	CompareConstant(GL_NUM_INSTRUCTIONS_TOTAL_ATI,0x8972,14855,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_NUM_INSTRUCTIONS_TOTAL_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_NUM_INPUT_INTERPOLATOR_COMPONENTS_ATI
	CompareConstant(GL_NUM_INPUT_INTERPOLATOR_COMPONENTS_ATI,0x8973,14856,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_NUM_INPUT_INTERPOLATOR_COMPONENTS_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_NUM_LOOPBACK_COMPONENTS_ATI
	CompareConstant(GL_NUM_LOOPBACK_COMPONENTS_ATI,0x8974,14857,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_NUM_LOOPBACK_COMPONENTS_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_ALPHA_PAIRING_ATI
	CompareConstant(GL_COLOR_ALPHA_PAIRING_ATI,0x8975,14858,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_ALPHA_PAIRING_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SWIZZLE_STR_ATI
	CompareConstant(GL_SWIZZLE_STR_ATI,0x8976,14859,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SWIZZLE_STR_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SWIZZLE_STQ_ATI
	CompareConstant(GL_SWIZZLE_STQ_ATI,0x8977,14860,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SWIZZLE_STQ_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SWIZZLE_STR_DR_ATI
	CompareConstant(GL_SWIZZLE_STR_DR_ATI,0x8978,14861,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SWIZZLE_STR_DR_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SWIZZLE_STQ_DQ_ATI
	CompareConstant(GL_SWIZZLE_STQ_DQ_ATI,0x8979,14862,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SWIZZLE_STQ_DQ_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SWIZZLE_STRQ_ATI
	CompareConstant(GL_SWIZZLE_STRQ_ATI,0x897A,14863,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SWIZZLE_STRQ_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SWIZZLE_STRQ_DQ_ATI
	CompareConstant(GL_SWIZZLE_STRQ_DQ_ATI,0x897B,14864,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SWIZZLE_STRQ_DQ_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RED_BIT_ATI
	CompareConstant(GL_RED_BIT_ATI,0x00000001,14865,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_RED_BIT_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_GREEN_BIT_ATI
	CompareConstant(GL_GREEN_BIT_ATI,0x00000002,14866,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_GREEN_BIT_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BLUE_BIT_ATI
	CompareConstant(GL_BLUE_BIT_ATI,0x00000004,14867,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_BLUE_BIT_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_2X_BIT_ATI
	CompareConstant(GL_2X_BIT_ATI,0x00000001,14868,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_2X_BIT_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_4X_BIT_ATI
	CompareConstant(GL_4X_BIT_ATI,0x00000002,14869,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_4X_BIT_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_8X_BIT_ATI
	CompareConstant(GL_8X_BIT_ATI,0x00000004,14870,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_8X_BIT_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_HALF_BIT_ATI
	CompareConstant(GL_HALF_BIT_ATI,0x00000008,14871,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_HALF_BIT_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_QUARTER_BIT_ATI
	CompareConstant(GL_QUARTER_BIT_ATI,0x00000010,14872,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_QUARTER_BIT_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EIGHTH_BIT_ATI
	CompareConstant(GL_EIGHTH_BIT_ATI,0x00000020,14873,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EIGHTH_BIT_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SATURATE_BIT_ATI
	CompareConstant(GL_SATURATE_BIT_ATI,0x00000040,14874,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SATURATE_BIT_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COMP_BIT_ATI
	CompareConstant(GL_COMP_BIT_ATI,0x00000002,14875,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COMP_BIT_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_NEGATE_BIT_ATI
	CompareConstant(GL_NEGATE_BIT_ATI,0x00000004,14876,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_NEGATE_BIT_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BIAS_BIT_ATI
	CompareConstant(GL_BIAS_BIT_ATI,0x00000008,14877,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_BIAS_BIT_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PN_TRIANGLES_ATI
	CompareConstant(GL_PN_TRIANGLES_ATI,0x87F0,14878,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PN_TRIANGLES_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_PN_TRIANGLES_TESSELATION_LEVEL_ATI
	CompareConstant(GL_MAX_PN_TRIANGLES_TESSELATION_LEVEL_ATI,0x87F1,14879,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_PN_TRIANGLES_TESSELATION_LEVEL_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PN_TRIANGLES_POINT_MODE_ATI
	CompareConstant(GL_PN_TRIANGLES_POINT_MODE_ATI,0x87F2,14880,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PN_TRIANGLES_POINT_MODE_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PN_TRIANGLES_NORMAL_MODE_ATI
	CompareConstant(GL_PN_TRIANGLES_NORMAL_MODE_ATI,0x87F3,14881,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PN_TRIANGLES_NORMAL_MODE_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PN_TRIANGLES_TESSELATION_LEVEL_ATI
	CompareConstant(GL_PN_TRIANGLES_TESSELATION_LEVEL_ATI,0x87F4,14882,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PN_TRIANGLES_TESSELATION_LEVEL_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PN_TRIANGLES_POINT_MODE_LINEAR_ATI
	CompareConstant(GL_PN_TRIANGLES_POINT_MODE_LINEAR_ATI,0x87F5,14883,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PN_TRIANGLES_POINT_MODE_LINEAR_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PN_TRIANGLES_POINT_MODE_CUBIC_ATI
	CompareConstant(GL_PN_TRIANGLES_POINT_MODE_CUBIC_ATI,0x87F6,14884,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PN_TRIANGLES_POINT_MODE_CUBIC_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PN_TRIANGLES_NORMAL_MODE_LINEAR_ATI
	CompareConstant(GL_PN_TRIANGLES_NORMAL_MODE_LINEAR_ATI,0x87F7,14885,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PN_TRIANGLES_NORMAL_MODE_LINEAR_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PN_TRIANGLES_NORMAL_MODE_QUADRATIC_ATI
	CompareConstant(GL_PN_TRIANGLES_NORMAL_MODE_QUADRATIC_ATI,0x87F8,14886,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PN_TRIANGLES_NORMAL_MODE_QUADRATIC_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_STATIC_ATI
	CompareConstant(GL_STATIC_ATI,0x8760,14887,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_STATIC_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DYNAMIC_ATI
	CompareConstant(GL_DYNAMIC_ATI,0x8761,14888,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DYNAMIC_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PRESERVE_ATI
	CompareConstant(GL_PRESERVE_ATI,0x8762,14889,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PRESERVE_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DISCARD_ATI
	CompareConstant(GL_DISCARD_ATI,0x8763,14890,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DISCARD_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OBJECT_BUFFER_SIZE_ATI
	CompareConstant(GL_OBJECT_BUFFER_SIZE_ATI,0x8764,14891,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OBJECT_BUFFER_SIZE_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OBJECT_BUFFER_USAGE_ATI
	CompareConstant(GL_OBJECT_BUFFER_USAGE_ATI,0x8765,14892,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OBJECT_BUFFER_USAGE_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ARRAY_OBJECT_BUFFER_ATI
	CompareConstant(GL_ARRAY_OBJECT_BUFFER_ATI,0x8766,14893,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ARRAY_OBJECT_BUFFER_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ARRAY_OBJECT_OFFSET_ATI
	CompareConstant(GL_ARRAY_OBJECT_OFFSET_ATI,0x8767,14894,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ARRAY_OBJECT_OFFSET_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_SHADER_EXT
	CompareConstant(GL_VERTEX_SHADER_EXT,0x8780,14895,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX_SHADER_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_SHADER_BINDING_EXT
	CompareConstant(GL_VERTEX_SHADER_BINDING_EXT,0x8781,14896,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX_SHADER_BINDING_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OP_INDEX_EXT
	CompareConstant(GL_OP_INDEX_EXT,0x8782,14897,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OP_INDEX_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OP_NEGATE_EXT
	CompareConstant(GL_OP_NEGATE_EXT,0x8783,14898,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OP_NEGATE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OP_DOT3_EXT
	CompareConstant(GL_OP_DOT3_EXT,0x8784,14899,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OP_DOT3_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OP_DOT4_EXT
	CompareConstant(GL_OP_DOT4_EXT,0x8785,14900,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OP_DOT4_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OP_MUL_EXT
	CompareConstant(GL_OP_MUL_EXT,0x8786,14901,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OP_MUL_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OP_ADD_EXT
	CompareConstant(GL_OP_ADD_EXT,0x8787,14902,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OP_ADD_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OP_MADD_EXT
	CompareConstant(GL_OP_MADD_EXT,0x8788,14903,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OP_MADD_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OP_FRAC_EXT
	CompareConstant(GL_OP_FRAC_EXT,0x8789,14904,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OP_FRAC_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OP_MAX_EXT
	CompareConstant(GL_OP_MAX_EXT,0x878A,14905,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OP_MAX_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OP_MIN_EXT
	CompareConstant(GL_OP_MIN_EXT,0x878B,14906,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OP_MIN_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OP_SET_GE_EXT
	CompareConstant(GL_OP_SET_GE_EXT,0x878C,14907,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OP_SET_GE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OP_SET_LT_EXT
	CompareConstant(GL_OP_SET_LT_EXT,0x878D,14908,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OP_SET_LT_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OP_CLAMP_EXT
	CompareConstant(GL_OP_CLAMP_EXT,0x878E,14909,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OP_CLAMP_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OP_FLOOR_EXT
	CompareConstant(GL_OP_FLOOR_EXT,0x878F,14910,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OP_FLOOR_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OP_ROUND_EXT
	CompareConstant(GL_OP_ROUND_EXT,0x8790,14911,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OP_ROUND_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OP_EXP_BASE_2_EXT
	CompareConstant(GL_OP_EXP_BASE_2_EXT,0x8791,14912,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OP_EXP_BASE_2_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OP_LOG_BASE_2_EXT
	CompareConstant(GL_OP_LOG_BASE_2_EXT,0x8792,14913,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OP_LOG_BASE_2_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OP_POWER_EXT
	CompareConstant(GL_OP_POWER_EXT,0x8793,14914,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OP_POWER_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OP_RECIP_EXT
	CompareConstant(GL_OP_RECIP_EXT,0x8794,14915,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OP_RECIP_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OP_RECIP_SQRT_EXT
	CompareConstant(GL_OP_RECIP_SQRT_EXT,0x8795,14916,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OP_RECIP_SQRT_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OP_SUB_EXT
	CompareConstant(GL_OP_SUB_EXT,0x8796,14917,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OP_SUB_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OP_CROSS_PRODUCT_EXT
	CompareConstant(GL_OP_CROSS_PRODUCT_EXT,0x8797,14918,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OP_CROSS_PRODUCT_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OP_MULTIPLY_MATRIX_EXT
	CompareConstant(GL_OP_MULTIPLY_MATRIX_EXT,0x8798,14919,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OP_MULTIPLY_MATRIX_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OP_MOV_EXT
	CompareConstant(GL_OP_MOV_EXT,0x8799,14920,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OP_MOV_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OUTPUT_VERTEX_EXT
	CompareConstant(GL_OUTPUT_VERTEX_EXT,0x879A,14921,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OUTPUT_VERTEX_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OUTPUT_COLOR0_EXT
	CompareConstant(GL_OUTPUT_COLOR0_EXT,0x879B,14922,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OUTPUT_COLOR0_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OUTPUT_COLOR1_EXT
	CompareConstant(GL_OUTPUT_COLOR1_EXT,0x879C,14923,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OUTPUT_COLOR1_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OUTPUT_TEXTURE_COORD0_EXT
	CompareConstant(GL_OUTPUT_TEXTURE_COORD0_EXT,0x879D,14924,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OUTPUT_TEXTURE_COORD0_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OUTPUT_TEXTURE_COORD1_EXT
	CompareConstant(GL_OUTPUT_TEXTURE_COORD1_EXT,0x879E,14925,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OUTPUT_TEXTURE_COORD1_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OUTPUT_TEXTURE_COORD2_EXT
	CompareConstant(GL_OUTPUT_TEXTURE_COORD2_EXT,0x879F,14926,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OUTPUT_TEXTURE_COORD2_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OUTPUT_TEXTURE_COORD3_EXT
	CompareConstant(GL_OUTPUT_TEXTURE_COORD3_EXT,0x87A0,14927,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OUTPUT_TEXTURE_COORD3_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OUTPUT_TEXTURE_COORD4_EXT
	CompareConstant(GL_OUTPUT_TEXTURE_COORD4_EXT,0x87A1,14928,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OUTPUT_TEXTURE_COORD4_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OUTPUT_TEXTURE_COORD5_EXT
	CompareConstant(GL_OUTPUT_TEXTURE_COORD5_EXT,0x87A2,14929,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OUTPUT_TEXTURE_COORD5_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OUTPUT_TEXTURE_COORD6_EXT
	CompareConstant(GL_OUTPUT_TEXTURE_COORD6_EXT,0x87A3,14930,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OUTPUT_TEXTURE_COORD6_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OUTPUT_TEXTURE_COORD7_EXT
	CompareConstant(GL_OUTPUT_TEXTURE_COORD7_EXT,0x87A4,14931,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OUTPUT_TEXTURE_COORD7_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OUTPUT_TEXTURE_COORD8_EXT
	CompareConstant(GL_OUTPUT_TEXTURE_COORD8_EXT,0x87A5,14932,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OUTPUT_TEXTURE_COORD8_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OUTPUT_TEXTURE_COORD9_EXT
	CompareConstant(GL_OUTPUT_TEXTURE_COORD9_EXT,0x87A6,14933,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OUTPUT_TEXTURE_COORD9_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OUTPUT_TEXTURE_COORD10_EXT
	CompareConstant(GL_OUTPUT_TEXTURE_COORD10_EXT,0x87A7,14934,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OUTPUT_TEXTURE_COORD10_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OUTPUT_TEXTURE_COORD11_EXT
	CompareConstant(GL_OUTPUT_TEXTURE_COORD11_EXT,0x87A8,14935,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OUTPUT_TEXTURE_COORD11_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OUTPUT_TEXTURE_COORD12_EXT
	CompareConstant(GL_OUTPUT_TEXTURE_COORD12_EXT,0x87A9,14936,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OUTPUT_TEXTURE_COORD12_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OUTPUT_TEXTURE_COORD13_EXT
	CompareConstant(GL_OUTPUT_TEXTURE_COORD13_EXT,0x87AA,14937,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OUTPUT_TEXTURE_COORD13_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OUTPUT_TEXTURE_COORD14_EXT
	CompareConstant(GL_OUTPUT_TEXTURE_COORD14_EXT,0x87AB,14938,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OUTPUT_TEXTURE_COORD14_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OUTPUT_TEXTURE_COORD15_EXT
	CompareConstant(GL_OUTPUT_TEXTURE_COORD15_EXT,0x87AC,14939,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OUTPUT_TEXTURE_COORD15_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OUTPUT_TEXTURE_COORD16_EXT
	CompareConstant(GL_OUTPUT_TEXTURE_COORD16_EXT,0x87AD,14940,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OUTPUT_TEXTURE_COORD16_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OUTPUT_TEXTURE_COORD17_EXT
	CompareConstant(GL_OUTPUT_TEXTURE_COORD17_EXT,0x87AE,14941,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OUTPUT_TEXTURE_COORD17_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OUTPUT_TEXTURE_COORD18_EXT
	CompareConstant(GL_OUTPUT_TEXTURE_COORD18_EXT,0x87AF,14942,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OUTPUT_TEXTURE_COORD18_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OUTPUT_TEXTURE_COORD19_EXT
	CompareConstant(GL_OUTPUT_TEXTURE_COORD19_EXT,0x87B0,14943,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OUTPUT_TEXTURE_COORD19_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OUTPUT_TEXTURE_COORD20_EXT
	CompareConstant(GL_OUTPUT_TEXTURE_COORD20_EXT,0x87B1,14944,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OUTPUT_TEXTURE_COORD20_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OUTPUT_TEXTURE_COORD21_EXT
	CompareConstant(GL_OUTPUT_TEXTURE_COORD21_EXT,0x87B2,14945,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OUTPUT_TEXTURE_COORD21_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OUTPUT_TEXTURE_COORD22_EXT
	CompareConstant(GL_OUTPUT_TEXTURE_COORD22_EXT,0x87B3,14946,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OUTPUT_TEXTURE_COORD22_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OUTPUT_TEXTURE_COORD23_EXT
	CompareConstant(GL_OUTPUT_TEXTURE_COORD23_EXT,0x87B4,14947,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OUTPUT_TEXTURE_COORD23_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OUTPUT_TEXTURE_COORD24_EXT
	CompareConstant(GL_OUTPUT_TEXTURE_COORD24_EXT,0x87B5,14948,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OUTPUT_TEXTURE_COORD24_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OUTPUT_TEXTURE_COORD25_EXT
	CompareConstant(GL_OUTPUT_TEXTURE_COORD25_EXT,0x87B6,14949,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OUTPUT_TEXTURE_COORD25_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OUTPUT_TEXTURE_COORD26_EXT
	CompareConstant(GL_OUTPUT_TEXTURE_COORD26_EXT,0x87B7,14950,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OUTPUT_TEXTURE_COORD26_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OUTPUT_TEXTURE_COORD27_EXT
	CompareConstant(GL_OUTPUT_TEXTURE_COORD27_EXT,0x87B8,14951,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OUTPUT_TEXTURE_COORD27_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OUTPUT_TEXTURE_COORD28_EXT
	CompareConstant(GL_OUTPUT_TEXTURE_COORD28_EXT,0x87B9,14952,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OUTPUT_TEXTURE_COORD28_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OUTPUT_TEXTURE_COORD29_EXT
	CompareConstant(GL_OUTPUT_TEXTURE_COORD29_EXT,0x87BA,14953,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OUTPUT_TEXTURE_COORD29_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OUTPUT_TEXTURE_COORD30_EXT
	CompareConstant(GL_OUTPUT_TEXTURE_COORD30_EXT,0x87BB,14954,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OUTPUT_TEXTURE_COORD30_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OUTPUT_TEXTURE_COORD31_EXT
	CompareConstant(GL_OUTPUT_TEXTURE_COORD31_EXT,0x87BC,14955,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OUTPUT_TEXTURE_COORD31_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OUTPUT_FOG_EXT
	CompareConstant(GL_OUTPUT_FOG_EXT,0x87BD,14956,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OUTPUT_FOG_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SCALAR_EXT
	CompareConstant(GL_SCALAR_EXT,0x87BE,14957,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SCALAR_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VECTOR_EXT
	CompareConstant(GL_VECTOR_EXT,0x87BF,14958,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VECTOR_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MATRIX_EXT
	CompareConstant(GL_MATRIX_EXT,0x87C0,14959,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MATRIX_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VARIANT_EXT
	CompareConstant(GL_VARIANT_EXT,0x87C1,14960,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VARIANT_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INVARIANT_EXT
	CompareConstant(GL_INVARIANT_EXT,0x87C2,14961,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_INVARIANT_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LOCAL_CONSTANT_EXT
	CompareConstant(GL_LOCAL_CONSTANT_EXT,0x87C3,14962,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_LOCAL_CONSTANT_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LOCAL_EXT
	CompareConstant(GL_LOCAL_EXT,0x87C4,14963,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_LOCAL_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_VERTEX_SHADER_INSTRUCTIONS_EXT
	CompareConstant(GL_MAX_VERTEX_SHADER_INSTRUCTIONS_EXT,0x87C5,14964,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_VERTEX_SHADER_INSTRUCTIONS_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_VERTEX_SHADER_VARIANTS_EXT
	CompareConstant(GL_MAX_VERTEX_SHADER_VARIANTS_EXT,0x87C6,14965,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_VERTEX_SHADER_VARIANTS_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_VERTEX_SHADER_INVARIANTS_EXT
	CompareConstant(GL_MAX_VERTEX_SHADER_INVARIANTS_EXT,0x87C7,14966,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_VERTEX_SHADER_INVARIANTS_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_VERTEX_SHADER_LOCAL_CONSTANTS_EXT
	CompareConstant(GL_MAX_VERTEX_SHADER_LOCAL_CONSTANTS_EXT,0x87C8,14967,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_VERTEX_SHADER_LOCAL_CONSTANTS_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_VERTEX_SHADER_LOCALS_EXT
	CompareConstant(GL_MAX_VERTEX_SHADER_LOCALS_EXT,0x87C9,14968,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_VERTEX_SHADER_LOCALS_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_OPTIMIZED_VERTEX_SHADER_INSTRUCTIONS_EXT
	CompareConstant(GL_MAX_OPTIMIZED_VERTEX_SHADER_INSTRUCTIONS_EXT,0x87CA,14969,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_OPTIMIZED_VERTEX_SHADER_INSTRUCTIONS_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_OPTIMIZED_VERTEX_SHADER_VARIANTS_EXT
	CompareConstant(GL_MAX_OPTIMIZED_VERTEX_SHADER_VARIANTS_EXT,0x87CB,14970,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_OPTIMIZED_VERTEX_SHADER_VARIANTS_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_OPTIMIZED_VERTEX_SHADER_LOCAL_CONSTANTS_EXT
	CompareConstant(GL_MAX_OPTIMIZED_VERTEX_SHADER_LOCAL_CONSTANTS_EXT,0x87CC,14971,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_OPTIMIZED_VERTEX_SHADER_LOCAL_CONSTANTS_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_OPTIMIZED_VERTEX_SHADER_INVARIANTS_EXT
	CompareConstant(GL_MAX_OPTIMIZED_VERTEX_SHADER_INVARIANTS_EXT,0x87CD,14972,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_OPTIMIZED_VERTEX_SHADER_INVARIANTS_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_OPTIMIZED_VERTEX_SHADER_LOCALS_EXT
	CompareConstant(GL_MAX_OPTIMIZED_VERTEX_SHADER_LOCALS_EXT,0x87CE,14973,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_OPTIMIZED_VERTEX_SHADER_LOCALS_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_SHADER_INSTRUCTIONS_EXT
	CompareConstant(GL_VERTEX_SHADER_INSTRUCTIONS_EXT,0x87CF,14974,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX_SHADER_INSTRUCTIONS_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_SHADER_VARIANTS_EXT
	CompareConstant(GL_VERTEX_SHADER_VARIANTS_EXT,0x87D0,14975,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX_SHADER_VARIANTS_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_SHADER_INVARIANTS_EXT
	CompareConstant(GL_VERTEX_SHADER_INVARIANTS_EXT,0x87D1,14976,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX_SHADER_INVARIANTS_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_SHADER_LOCAL_CONSTANTS_EXT
	CompareConstant(GL_VERTEX_SHADER_LOCAL_CONSTANTS_EXT,0x87D2,14977,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX_SHADER_LOCAL_CONSTANTS_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_SHADER_LOCALS_EXT
	CompareConstant(GL_VERTEX_SHADER_LOCALS_EXT,0x87D3,14978,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX_SHADER_LOCALS_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_SHADER_OPTIMIZED_EXT
	CompareConstant(GL_VERTEX_SHADER_OPTIMIZED_EXT,0x87D4,14979,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX_SHADER_OPTIMIZED_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_X_EXT
	CompareConstant(GL_X_EXT,0x87D5,14980,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_X_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_Y_EXT
	CompareConstant(GL_Y_EXT,0x87D6,14981,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_Y_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_Z_EXT
	CompareConstant(GL_Z_EXT,0x87D7,14982,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_Z_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_W_EXT
	CompareConstant(GL_W_EXT,0x87D8,14983,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_W_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_NEGATIVE_X_EXT
	CompareConstant(GL_NEGATIVE_X_EXT,0x87D9,14984,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_NEGATIVE_X_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_NEGATIVE_Y_EXT
	CompareConstant(GL_NEGATIVE_Y_EXT,0x87DA,14985,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_NEGATIVE_Y_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_NEGATIVE_Z_EXT
	CompareConstant(GL_NEGATIVE_Z_EXT,0x87DB,14986,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_NEGATIVE_Z_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_NEGATIVE_W_EXT
	CompareConstant(GL_NEGATIVE_W_EXT,0x87DC,14987,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_NEGATIVE_W_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ZERO_EXT
	CompareConstant(GL_ZERO_EXT,0x87DD,14988,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ZERO_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ONE_EXT
	CompareConstant(GL_ONE_EXT,0x87DE,14989,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ONE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_NEGATIVE_ONE_EXT
	CompareConstant(GL_NEGATIVE_ONE_EXT,0x87DF,14990,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_NEGATIVE_ONE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_NORMALIZED_RANGE_EXT
	CompareConstant(GL_NORMALIZED_RANGE_EXT,0x87E0,14991,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_NORMALIZED_RANGE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FULL_RANGE_EXT
	CompareConstant(GL_FULL_RANGE_EXT,0x87E1,14992,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FULL_RANGE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CURRENT_VERTEX_EXT
	CompareConstant(GL_CURRENT_VERTEX_EXT,0x87E2,14993,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_CURRENT_VERTEX_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MVP_MATRIX_EXT
	CompareConstant(GL_MVP_MATRIX_EXT,0x87E3,14994,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MVP_MATRIX_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VARIANT_VALUE_EXT
	CompareConstant(GL_VARIANT_VALUE_EXT,0x87E4,14995,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VARIANT_VALUE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VARIANT_DATATYPE_EXT
	CompareConstant(GL_VARIANT_DATATYPE_EXT,0x87E5,14996,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VARIANT_DATATYPE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VARIANT_ARRAY_STRIDE_EXT
	CompareConstant(GL_VARIANT_ARRAY_STRIDE_EXT,0x87E6,14997,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VARIANT_ARRAY_STRIDE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VARIANT_ARRAY_TYPE_EXT
	CompareConstant(GL_VARIANT_ARRAY_TYPE_EXT,0x87E7,14998,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VARIANT_ARRAY_TYPE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VARIANT_ARRAY_EXT
	CompareConstant(GL_VARIANT_ARRAY_EXT,0x87E8,14999,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VARIANT_ARRAY_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VARIANT_ARRAY_POINTER_EXT
	CompareConstant(GL_VARIANT_ARRAY_POINTER_EXT,0x87E9,15000,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VARIANT_ARRAY_POINTER_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INVARIANT_VALUE_EXT
	CompareConstant(GL_INVARIANT_VALUE_EXT,0x87EA,15001,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_INVARIANT_VALUE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INVARIANT_DATATYPE_EXT
	CompareConstant(GL_INVARIANT_DATATYPE_EXT,0x87EB,15002,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_INVARIANT_DATATYPE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LOCAL_CONSTANT_VALUE_EXT
	CompareConstant(GL_LOCAL_CONSTANT_VALUE_EXT,0x87EC,15003,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_LOCAL_CONSTANT_VALUE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LOCAL_CONSTANT_DATATYPE_EXT
	CompareConstant(GL_LOCAL_CONSTANT_DATATYPE_EXT,0x87ED,15004,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_LOCAL_CONSTANT_DATATYPE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_VERTEX_STREAMS_ATI
	CompareConstant(GL_MAX_VERTEX_STREAMS_ATI,0x876B,15005,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_VERTEX_STREAMS_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_STREAM0_ATI
	CompareConstant(GL_VERTEX_STREAM0_ATI,0x876C,15006,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX_STREAM0_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_STREAM1_ATI
	CompareConstant(GL_VERTEX_STREAM1_ATI,0x876D,15007,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX_STREAM1_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_STREAM2_ATI
	CompareConstant(GL_VERTEX_STREAM2_ATI,0x876E,15008,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX_STREAM2_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_STREAM3_ATI
	CompareConstant(GL_VERTEX_STREAM3_ATI,0x876F,15009,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX_STREAM3_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_STREAM4_ATI
	CompareConstant(GL_VERTEX_STREAM4_ATI,0x8770,15010,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX_STREAM4_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_STREAM5_ATI
	CompareConstant(GL_VERTEX_STREAM5_ATI,0x8771,15011,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX_STREAM5_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_STREAM6_ATI
	CompareConstant(GL_VERTEX_STREAM6_ATI,0x8772,15012,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX_STREAM6_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_STREAM7_ATI
	CompareConstant(GL_VERTEX_STREAM7_ATI,0x8773,15013,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX_STREAM7_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_SOURCE_ATI
	CompareConstant(GL_VERTEX_SOURCE_ATI,0x8774,15014,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX_SOURCE_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ELEMENT_ARRAY_ATI
	CompareConstant(GL_ELEMENT_ARRAY_ATI,0x8768,15015,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ELEMENT_ARRAY_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ELEMENT_ARRAY_TYPE_ATI
	CompareConstant(GL_ELEMENT_ARRAY_TYPE_ATI,0x8769,15016,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ELEMENT_ARRAY_TYPE_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ELEMENT_ARRAY_POINTER_ATI
	CompareConstant(GL_ELEMENT_ARRAY_POINTER_ATI,0x876A,15017,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ELEMENT_ARRAY_POINTER_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_QUAD_MESH_SUN
	CompareConstant(GL_QUAD_MESH_SUN,0x8614,15018,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_QUAD_MESH_SUN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TRIANGLE_MESH_SUN
	CompareConstant(GL_TRIANGLE_MESH_SUN,0x8615,15019,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TRIANGLE_MESH_SUN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SLICE_ACCUM_SUN
	CompareConstant(GL_SLICE_ACCUM_SUN,0x85CC,15020,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SLICE_ACCUM_SUN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_STENCIL_TEST_TWO_SIDE_EXT
	CompareConstant(GL_STENCIL_TEST_TWO_SIDE_EXT,0x8910,15021,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_STENCIL_TEST_TWO_SIDE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ACTIVE_STENCIL_FACE_EXT
	CompareConstant(GL_ACTIVE_STENCIL_FACE_EXT,0x8911,15022,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ACTIVE_STENCIL_FACE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXT_FRAGMENT_SHADER_ATI
	CompareConstant(GL_TEXT_FRAGMENT_SHADER_ATI,0x8200,15023,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TEXT_FRAGMENT_SHADER_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RGB_S3TC
	CompareConstant(GL_RGB_S3TC,0x83A0,15024,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_RGB_S3TC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RGB4_S3TC
	CompareConstant(GL_RGB4_S3TC,0x83A1,15025,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_RGB4_S3TC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RGBA_S3TC
	CompareConstant(GL_RGBA_S3TC,0x83A2,15026,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_RGBA_S3TC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RGBA4_S3TC
	CompareConstant(GL_RGBA4_S3TC,0x83A3,15027,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_RGBA4_S3TC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_DRAW_BUFFERS_ATI
	CompareConstant(GL_MAX_DRAW_BUFFERS_ATI,0x8824,15028,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_DRAW_BUFFERS_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DRAW_BUFFER0_ATI
	CompareConstant(GL_DRAW_BUFFER0_ATI,0x8825,15029,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DRAW_BUFFER0_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DRAW_BUFFER1_ATI
	CompareConstant(GL_DRAW_BUFFER1_ATI,0x8826,15030,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DRAW_BUFFER1_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DRAW_BUFFER2_ATI
	CompareConstant(GL_DRAW_BUFFER2_ATI,0x8827,15031,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DRAW_BUFFER2_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DRAW_BUFFER3_ATI
	CompareConstant(GL_DRAW_BUFFER3_ATI,0x8828,15032,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DRAW_BUFFER3_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DRAW_BUFFER4_ATI
	CompareConstant(GL_DRAW_BUFFER4_ATI,0x8829,15033,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DRAW_BUFFER4_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DRAW_BUFFER5_ATI
	CompareConstant(GL_DRAW_BUFFER5_ATI,0x882A,15034,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DRAW_BUFFER5_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DRAW_BUFFER6_ATI
	CompareConstant(GL_DRAW_BUFFER6_ATI,0x882B,15035,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DRAW_BUFFER6_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DRAW_BUFFER7_ATI
	CompareConstant(GL_DRAW_BUFFER7_ATI,0x882C,15036,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DRAW_BUFFER7_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DRAW_BUFFER8_ATI
	CompareConstant(GL_DRAW_BUFFER8_ATI,0x882D,15037,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DRAW_BUFFER8_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DRAW_BUFFER9_ATI
	CompareConstant(GL_DRAW_BUFFER9_ATI,0x882E,15038,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DRAW_BUFFER9_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DRAW_BUFFER10_ATI
	CompareConstant(GL_DRAW_BUFFER10_ATI,0x882F,15039,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DRAW_BUFFER10_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DRAW_BUFFER11_ATI
	CompareConstant(GL_DRAW_BUFFER11_ATI,0x8830,15040,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DRAW_BUFFER11_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DRAW_BUFFER12_ATI
	CompareConstant(GL_DRAW_BUFFER12_ATI,0x8831,15041,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DRAW_BUFFER12_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DRAW_BUFFER13_ATI
	CompareConstant(GL_DRAW_BUFFER13_ATI,0x8832,15042,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DRAW_BUFFER13_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DRAW_BUFFER14_ATI
	CompareConstant(GL_DRAW_BUFFER14_ATI,0x8833,15043,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DRAW_BUFFER14_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DRAW_BUFFER15_ATI
	CompareConstant(GL_DRAW_BUFFER15_ATI,0x8834,15044,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DRAW_BUFFER15_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TYPE_RGBA_FLOAT_ATI
	CompareConstant(GL_TYPE_RGBA_FLOAT_ATI,0x8820,15045,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_TYPE_RGBA_FLOAT_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_CLEAR_UNCLAMPED_VALUE_ATI
	CompareConstant(GL_COLOR_CLEAR_UNCLAMPED_VALUE_ATI,0x8835,15046,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_CLEAR_UNCLAMPED_VALUE_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MODULATE_ADD_ATI
	CompareConstant(GL_MODULATE_ADD_ATI,0x8744,15047,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MODULATE_ADD_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MODULATE_SIGNED_ADD_ATI
	CompareConstant(GL_MODULATE_SIGNED_ADD_ATI,0x8745,15048,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MODULATE_SIGNED_ADD_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MODULATE_SUBTRACT_ATI
	CompareConstant(GL_MODULATE_SUBTRACT_ATI,0x8746,15049,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MODULATE_SUBTRACT_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RGBA_FLOAT32_ATI
	CompareConstant(GL_RGBA_FLOAT32_ATI,0x8814,15050,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_RGBA_FLOAT32_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RGB_FLOAT32_ATI
	CompareConstant(GL_RGB_FLOAT32_ATI,0x8815,15051,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_RGB_FLOAT32_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ALPHA_FLOAT32_ATI
	CompareConstant(GL_ALPHA_FLOAT32_ATI,0x8816,15052,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ALPHA_FLOAT32_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INTENSITY_FLOAT32_ATI
	CompareConstant(GL_INTENSITY_FLOAT32_ATI,0x8817,15053,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_INTENSITY_FLOAT32_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LUMINANCE_FLOAT32_ATI
	CompareConstant(GL_LUMINANCE_FLOAT32_ATI,0x8818,15054,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_LUMINANCE_FLOAT32_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LUMINANCE_ALPHA_FLOAT32_ATI
	CompareConstant(GL_LUMINANCE_ALPHA_FLOAT32_ATI,0x8819,15055,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_LUMINANCE_ALPHA_FLOAT32_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RGBA_FLOAT16_ATI
	CompareConstant(GL_RGBA_FLOAT16_ATI,0x881A,15056,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_RGBA_FLOAT16_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RGB_FLOAT16_ATI
	CompareConstant(GL_RGB_FLOAT16_ATI,0x881B,15057,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_RGB_FLOAT16_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ALPHA_FLOAT16_ATI
	CompareConstant(GL_ALPHA_FLOAT16_ATI,0x881C,15058,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ALPHA_FLOAT16_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INTENSITY_FLOAT16_ATI
	CompareConstant(GL_INTENSITY_FLOAT16_ATI,0x881D,15059,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_INTENSITY_FLOAT16_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LUMINANCE_FLOAT16_ATI
	CompareConstant(GL_LUMINANCE_FLOAT16_ATI,0x881E,15060,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_LUMINANCE_FLOAT16_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LUMINANCE_ALPHA_FLOAT16_ATI
	CompareConstant(GL_LUMINANCE_ALPHA_FLOAT16_ATI,0x881F,15061,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_LUMINANCE_ALPHA_FLOAT16_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_STENCIL_BACK_FUNC_ATI
	CompareConstant(GL_STENCIL_BACK_FUNC_ATI,0x8800,15062,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_STENCIL_BACK_FUNC_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_STENCIL_BACK_FAIL_ATI
	CompareConstant(GL_STENCIL_BACK_FAIL_ATI,0x8801,15063,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_STENCIL_BACK_FAIL_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_STENCIL_BACK_PASS_DEPTH_FAIL_ATI
	CompareConstant(GL_STENCIL_BACK_PASS_DEPTH_FAIL_ATI,0x8802,15064,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_STENCIL_BACK_PASS_DEPTH_FAIL_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_STENCIL_BACK_PASS_DEPTH_PASS_ATI
	CompareConstant(GL_STENCIL_BACK_PASS_DEPTH_PASS_ATI,0x8803,15065,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_STENCIL_BACK_PASS_DEPTH_PASS_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_IMPLEMENTATION_COLOR_READ_TYPE_OES
	CompareConstant(GL_IMPLEMENTATION_COLOR_READ_TYPE_OES,0x8B9A,15066,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_IMPLEMENTATION_COLOR_READ_TYPE_OES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_IMPLEMENTATION_COLOR_READ_FORMAT_OES
	CompareConstant(GL_IMPLEMENTATION_COLOR_READ_FORMAT_OES,0x8B9B,15067,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_IMPLEMENTATION_COLOR_READ_FORMAT_OES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DEPTH_BOUNDS_TEST_EXT
	CompareConstant(GL_DEPTH_BOUNDS_TEST_EXT,0x8890,15068,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DEPTH_BOUNDS_TEST_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DEPTH_BOUNDS_EXT
	CompareConstant(GL_DEPTH_BOUNDS_EXT,0x8891,15069,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DEPTH_BOUNDS_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MIRROR_CLAMP_EXT
	CompareConstant(GL_MIRROR_CLAMP_EXT,0x8742,15070,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MIRROR_CLAMP_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MIRROR_CLAMP_TO_EDGE_EXT
	CompareConstant(GL_MIRROR_CLAMP_TO_EDGE_EXT,0x8743,15071,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MIRROR_CLAMP_TO_EDGE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MIRROR_CLAMP_TO_BORDER_EXT
	CompareConstant(GL_MIRROR_CLAMP_TO_BORDER_EXT,0x8912,15072,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MIRROR_CLAMP_TO_BORDER_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BLEND_EQUATION_RGB_EXT
	CompareConstant(GL_BLEND_EQUATION_RGB_EXT,GL_BLEND_EQUATION,15073,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_BLEND_EQUATION_RGB_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BLEND_EQUATION_ALPHA_EXT
	CompareConstant(GL_BLEND_EQUATION_ALPHA_EXT,0x883D,15074,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_BLEND_EQUATION_ALPHA_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PIXEL_PACK_BUFFER_EXT
	CompareConstant(GL_PIXEL_PACK_BUFFER_EXT,0x88EB,15075,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PIXEL_PACK_BUFFER_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PIXEL_UNPACK_BUFFER_EXT
	CompareConstant(GL_PIXEL_UNPACK_BUFFER_EXT,0x88EC,15076,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PIXEL_UNPACK_BUFFER_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PIXEL_PACK_BUFFER_BINDING_EXT
	CompareConstant(GL_PIXEL_PACK_BUFFER_BINDING_EXT,0x88ED,15077,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PIXEL_PACK_BUFFER_BINDING_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PIXEL_UNPACK_BUFFER_BINDING_EXT
	CompareConstant(GL_PIXEL_UNPACK_BUFFER_BINDING_EXT,0x88EF,15078,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PIXEL_UNPACK_BUFFER_BINDING_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INVALID_FRAMEBUFFER_OPERATION_EXT
	CompareConstant(GL_INVALID_FRAMEBUFFER_OPERATION_EXT,0x0506,15079,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_INVALID_FRAMEBUFFER_OPERATION_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_RENDERBUFFER_SIZE_EXT
	CompareConstant(GL_MAX_RENDERBUFFER_SIZE_EXT,0x84E8,15080,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_RENDERBUFFER_SIZE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FRAMEBUFFER_BINDING_EXT
	CompareConstant(GL_FRAMEBUFFER_BINDING_EXT,0x8CA6,15081,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FRAMEBUFFER_BINDING_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RENDERBUFFER_BINDING_EXT
	CompareConstant(GL_RENDERBUFFER_BINDING_EXT,0x8CA7,15082,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_RENDERBUFFER_BINDING_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE_EXT
	CompareConstant(GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE_EXT,0x8CD0,15083,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME_EXT
	CompareConstant(GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME_EXT,0x8CD1,15084,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL_EXT
	CompareConstant(GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL_EXT,0x8CD2,15085,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE_EXT
	CompareConstant(GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE_EXT,0x8CD3,15086,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_EXT
	CompareConstant(GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_EXT,0x8CD4,15087,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FRAMEBUFFER_COMPLETE_EXT
	CompareConstant(GL_FRAMEBUFFER_COMPLETE_EXT,0x8CD5,15088,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FRAMEBUFFER_COMPLETE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT_EXT
	CompareConstant(GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT_EXT,0x8CD6,15089,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT_EXT
	CompareConstant(GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT_EXT,0x8CD7,15090,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS_EXT
	CompareConstant(GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS_EXT,0x8CD9,15091,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FRAMEBUFFER_INCOMPLETE_FORMATS_EXT
	CompareConstant(GL_FRAMEBUFFER_INCOMPLETE_FORMATS_EXT,0x8CDA,15092,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FRAMEBUFFER_INCOMPLETE_FORMATS_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER_EXT
	CompareConstant(GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER_EXT,0x8CDB,15093,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER_EXT
	CompareConstant(GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER_EXT,0x8CDC,15094,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FRAMEBUFFER_UNSUPPORTED_EXT
	CompareConstant(GL_FRAMEBUFFER_UNSUPPORTED_EXT,0x8CDD,15095,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FRAMEBUFFER_UNSUPPORTED_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_COLOR_ATTACHMENTS_EXT
	CompareConstant(GL_MAX_COLOR_ATTACHMENTS_EXT,0x8CDF,15096,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_COLOR_ATTACHMENTS_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_ATTACHMENT0_EXT
	CompareConstant(GL_COLOR_ATTACHMENT0_EXT,0x8CE0,15097,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_ATTACHMENT0_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_ATTACHMENT1_EXT
	CompareConstant(GL_COLOR_ATTACHMENT1_EXT,0x8CE1,15098,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_ATTACHMENT1_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_ATTACHMENT2_EXT
	CompareConstant(GL_COLOR_ATTACHMENT2_EXT,0x8CE2,15099,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_ATTACHMENT2_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_ATTACHMENT3_EXT
	CompareConstant(GL_COLOR_ATTACHMENT3_EXT,0x8CE3,15100,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_ATTACHMENT3_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_ATTACHMENT4_EXT
	CompareConstant(GL_COLOR_ATTACHMENT4_EXT,0x8CE4,15101,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_ATTACHMENT4_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_ATTACHMENT5_EXT
	CompareConstant(GL_COLOR_ATTACHMENT5_EXT,0x8CE5,15102,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_ATTACHMENT5_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_ATTACHMENT6_EXT
	CompareConstant(GL_COLOR_ATTACHMENT6_EXT,0x8CE6,15103,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_ATTACHMENT6_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_ATTACHMENT7_EXT
	CompareConstant(GL_COLOR_ATTACHMENT7_EXT,0x8CE7,15104,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_ATTACHMENT7_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_ATTACHMENT8_EXT
	CompareConstant(GL_COLOR_ATTACHMENT8_EXT,0x8CE8,15105,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_ATTACHMENT8_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_ATTACHMENT9_EXT
	CompareConstant(GL_COLOR_ATTACHMENT9_EXT,0x8CE9,15106,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_ATTACHMENT9_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_ATTACHMENT10_EXT
	CompareConstant(GL_COLOR_ATTACHMENT10_EXT,0x8CEA,15107,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_ATTACHMENT10_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_ATTACHMENT11_EXT
	CompareConstant(GL_COLOR_ATTACHMENT11_EXT,0x8CEB,15108,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_ATTACHMENT11_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_ATTACHMENT12_EXT
	CompareConstant(GL_COLOR_ATTACHMENT12_EXT,0x8CEC,15109,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_ATTACHMENT12_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_ATTACHMENT13_EXT
	CompareConstant(GL_COLOR_ATTACHMENT13_EXT,0x8CED,15110,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_ATTACHMENT13_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_ATTACHMENT14_EXT
	CompareConstant(GL_COLOR_ATTACHMENT14_EXT,0x8CEE,15111,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_ATTACHMENT14_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_ATTACHMENT15_EXT
	CompareConstant(GL_COLOR_ATTACHMENT15_EXT,0x8CEF,15112,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_ATTACHMENT15_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DEPTH_ATTACHMENT_EXT
	CompareConstant(GL_DEPTH_ATTACHMENT_EXT,0x8D00,15113,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_DEPTH_ATTACHMENT_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_STENCIL_ATTACHMENT_EXT
	CompareConstant(GL_STENCIL_ATTACHMENT_EXT,0x8D20,15114,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_STENCIL_ATTACHMENT_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FRAMEBUFFER_EXT
	CompareConstant(GL_FRAMEBUFFER_EXT,0x8D40,15115,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_FRAMEBUFFER_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RENDERBUFFER_EXT
	CompareConstant(GL_RENDERBUFFER_EXT,0x8D41,15116,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_RENDERBUFFER_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RENDERBUFFER_WIDTH_EXT
	CompareConstant(GL_RENDERBUFFER_WIDTH_EXT,0x8D42,15117,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_RENDERBUFFER_WIDTH_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RENDERBUFFER_HEIGHT_EXT
	CompareConstant(GL_RENDERBUFFER_HEIGHT_EXT,0x8D43,15118,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_RENDERBUFFER_HEIGHT_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RENDERBUFFER_INTERNAL_FORMAT_EXT
	CompareConstant(GL_RENDERBUFFER_INTERNAL_FORMAT_EXT,0x8D44,15119,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_RENDERBUFFER_INTERNAL_FORMAT_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_STENCIL_INDEX1_EXT
	CompareConstant(GL_STENCIL_INDEX1_EXT,0x8D46,15120,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_STENCIL_INDEX1_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_STENCIL_INDEX4_EXT
	CompareConstant(GL_STENCIL_INDEX4_EXT,0x8D47,15121,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_STENCIL_INDEX4_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_STENCIL_INDEX8_EXT
	CompareConstant(GL_STENCIL_INDEX8_EXT,0x8D48,15122,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_STENCIL_INDEX8_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_STENCIL_INDEX16_EXT
	CompareConstant(GL_STENCIL_INDEX16_EXT,0x8D49,15123,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_STENCIL_INDEX16_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RENDERBUFFER_RED_SIZE_EXT
	CompareConstant(GL_RENDERBUFFER_RED_SIZE_EXT,0x8D50,15124,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_RENDERBUFFER_RED_SIZE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RENDERBUFFER_GREEN_SIZE_EXT
	CompareConstant(GL_RENDERBUFFER_GREEN_SIZE_EXT,0x8D51,15125,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_RENDERBUFFER_GREEN_SIZE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RENDERBUFFER_BLUE_SIZE_EXT
	CompareConstant(GL_RENDERBUFFER_BLUE_SIZE_EXT,0x8D52,15126,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_RENDERBUFFER_BLUE_SIZE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RENDERBUFFER_ALPHA_SIZE_EXT
	CompareConstant(GL_RENDERBUFFER_ALPHA_SIZE_EXT,0x8D53,15127,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_RENDERBUFFER_ALPHA_SIZE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RENDERBUFFER_DEPTH_SIZE_EXT
	CompareConstant(GL_RENDERBUFFER_DEPTH_SIZE_EXT,0x8D54,15128,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_RENDERBUFFER_DEPTH_SIZE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RENDERBUFFER_STENCIL_SIZE_EXT
	CompareConstant(GL_RENDERBUFFER_STENCIL_SIZE_EXT,0x8D55,15129,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_RENDERBUFFER_STENCIL_SIZE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_READ_FRAMEBUFFER_BINDING_EXT
	CompareConstant(GL_READ_FRAMEBUFFER_BINDING_EXT,GL_FRAMEBUFFER_BINDING_EXT,15154,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_READ_FRAMEBUFFER_BINDING_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef GLEXT_64_TYPES_DEFINED
Msg( "Error: Constant not found: GLEXT_64_TYPES_DEFINED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERSION_1_4
	CompareConstant(GL_VERSION_1_4,1,15288,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VERSION_1_4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERSION_1_5
	CompareConstant(GL_VERSION_1_5,1,15289,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VERSION_1_5\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERSION_2_0
	CompareConstant(GL_VERSION_2_0,1,15290,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_VERSION_2_0\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ARB_transpose_matrix
	CompareConstant(GL_ARB_transpose_matrix,1,15292,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ARB_transpose_matrix\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ARB_multisample
	CompareConstant(GL_ARB_multisample,1,15293,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ARB_multisample\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ARB_texture_env_add
	CompareConstant(GL_ARB_texture_env_add,1,15294,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ARB_texture_env_add\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ARB_texture_cube_map
	CompareConstant(GL_ARB_texture_cube_map,1,15295,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ARB_texture_cube_map\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ARB_texture_compression
	CompareConstant(GL_ARB_texture_compression,1,15296,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ARB_texture_compression\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ARB_texture_border_clamp
	CompareConstant(GL_ARB_texture_border_clamp,1,15297,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ARB_texture_border_clamp\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ARB_point_parameters
	CompareConstant(GL_ARB_point_parameters,1,15298,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ARB_point_parameters\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ARB_vertex_blend
	CompareConstant(GL_ARB_vertex_blend,1,15299,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ARB_vertex_blend\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ARB_matrix_palette
	CompareConstant(GL_ARB_matrix_palette,1,15300,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ARB_matrix_palette\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ARB_texture_env_combine
	CompareConstant(GL_ARB_texture_env_combine,1,15301,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ARB_texture_env_combine\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ARB_texture_env_crossbar
	CompareConstant(GL_ARB_texture_env_crossbar,1,15302,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ARB_texture_env_crossbar\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ARB_texture_env_dot3
	CompareConstant(GL_ARB_texture_env_dot3,1,15303,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ARB_texture_env_dot3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ARB_texture_mirrored_repeat
	CompareConstant(GL_ARB_texture_mirrored_repeat,1,15304,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ARB_texture_mirrored_repeat\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ARB_depth_texture
	CompareConstant(GL_ARB_depth_texture,1,15305,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ARB_depth_texture\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ARB_shadow
	CompareConstant(GL_ARB_shadow,1,15306,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ARB_shadow\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ARB_shadow_ambient
	CompareConstant(GL_ARB_shadow_ambient,1,15307,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ARB_shadow_ambient\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ARB_window_pos
	CompareConstant(GL_ARB_window_pos,1,15308,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ARB_window_pos\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ARB_vertex_program
	CompareConstant(GL_ARB_vertex_program,1,15309,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ARB_vertex_program\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ARB_fragment_program
	CompareConstant(GL_ARB_fragment_program,1,15310,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ARB_fragment_program\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ARB_vertex_buffer_object
	CompareConstant(GL_ARB_vertex_buffer_object,1,15311,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ARB_vertex_buffer_object\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ARB_occlusion_query
	CompareConstant(GL_ARB_occlusion_query,1,15312,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ARB_occlusion_query\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ARB_shader_objects
	CompareConstant(GL_ARB_shader_objects,1,15313,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ARB_shader_objects\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ARB_vertex_shader
	CompareConstant(GL_ARB_vertex_shader,1,15314,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ARB_vertex_shader\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ARB_fragment_shader
	CompareConstant(GL_ARB_fragment_shader,1,15315,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ARB_fragment_shader\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ARB_shading_language_100
	CompareConstant(GL_ARB_shading_language_100,1,15316,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ARB_shading_language_100\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ARB_texture_non_power_of_two
	CompareConstant(GL_ARB_texture_non_power_of_two,1,15317,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ARB_texture_non_power_of_two\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ARB_point_sprite
	CompareConstant(GL_ARB_point_sprite,1,15318,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ARB_point_sprite\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ARB_fragment_program_shadow
	CompareConstant(GL_ARB_fragment_program_shadow,1,15319,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ARB_fragment_program_shadow\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ARB_draw_buffers
	CompareConstant(GL_ARB_draw_buffers,1,15320,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ARB_draw_buffers\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ARB_texture_rectangle
	CompareConstant(GL_ARB_texture_rectangle,1,15321,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ARB_texture_rectangle\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ARB_color_buffer_float
	CompareConstant(GL_ARB_color_buffer_float,1,15322,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ARB_color_buffer_float\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ARB_half_float_pixel
	CompareConstant(GL_ARB_half_float_pixel,1,15323,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ARB_half_float_pixel\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ARB_texture_float
	CompareConstant(GL_ARB_texture_float,1,15324,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ARB_texture_float\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ARB_pixel_buffer_object
	CompareConstant(GL_ARB_pixel_buffer_object,1,15325,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ARB_pixel_buffer_object\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EXT_abgr
	CompareConstant(GL_EXT_abgr,1,15326,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EXT_abgr\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EXT_blend_color
	CompareConstant(GL_EXT_blend_color,1,15327,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EXT_blend_color\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EXT_polygon_offset
	CompareConstant(GL_EXT_polygon_offset,1,15328,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EXT_polygon_offset\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EXT_texture
	CompareConstant(GL_EXT_texture,1,15329,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EXT_texture\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EXT_texture3D
	CompareConstant(GL_EXT_texture3D,1,15330,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EXT_texture3D\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EXT_subtexture
	CompareConstant(GL_EXT_subtexture,1,15331,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EXT_subtexture\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EXT_copy_texture
	CompareConstant(GL_EXT_copy_texture,1,15332,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EXT_copy_texture\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EXT_histogram
	CompareConstant(GL_EXT_histogram,1,15333,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EXT_histogram\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EXT_convolution
	CompareConstant(GL_EXT_convolution,1,15334,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EXT_convolution\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EXT_cmyka
	CompareConstant(GL_EXT_cmyka,1,15335,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EXT_cmyka\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EXT_texture_object
	CompareConstant(GL_EXT_texture_object,1,15336,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EXT_texture_object\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EXT_packed_pixels
	CompareConstant(GL_EXT_packed_pixels,1,15337,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EXT_packed_pixels\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EXT_rescale_normal
	CompareConstant(GL_EXT_rescale_normal,1,15338,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EXT_rescale_normal\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EXT_vertex_array
	CompareConstant(GL_EXT_vertex_array,1,15339,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EXT_vertex_array\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EXT_misc_attribute
	CompareConstant(GL_EXT_misc_attribute,1,15340,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EXT_misc_attribute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EXT_blend_minmax
	CompareConstant(GL_EXT_blend_minmax,1,15341,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EXT_blend_minmax\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EXT_blend_subtract
	CompareConstant(GL_EXT_blend_subtract,1,15342,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EXT_blend_subtract\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EXT_blend_logic_op
	CompareConstant(GL_EXT_blend_logic_op,1,15343,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EXT_blend_logic_op\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EXT_point_parameters
	CompareConstant(GL_EXT_point_parameters,1,15344,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EXT_point_parameters\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_HP_image_transform
	CompareConstant(GL_HP_image_transform,1,15345,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_HP_image_transform\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_HP_convolution_border_modes
	CompareConstant(GL_HP_convolution_border_modes,1,15346,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_HP_convolution_border_modes\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EXT_color_subtable
	CompareConstant(GL_EXT_color_subtable,1,15347,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EXT_color_subtable\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PGI_vertex_hints
	CompareConstant(GL_PGI_vertex_hints,1,15348,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PGI_vertex_hints\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PGI_misc_hints
	CompareConstant(GL_PGI_misc_hints,1,15349,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_PGI_misc_hints\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EXT_paletted_texture
	CompareConstant(GL_EXT_paletted_texture,1,15350,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EXT_paletted_texture\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EXT_clip_volume_hint
	CompareConstant(GL_EXT_clip_volume_hint,1,15351,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EXT_clip_volume_hint\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EXT_index_texture
	CompareConstant(GL_EXT_index_texture,1,15352,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EXT_index_texture\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EXT_index_material
	CompareConstant(GL_EXT_index_material,1,15353,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EXT_index_material\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EXT_index_func
	CompareConstant(GL_EXT_index_func,1,15354,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EXT_index_func\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EXT_index_array_formats
	CompareConstant(GL_EXT_index_array_formats,1,15355,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EXT_index_array_formats\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EXT_compiled_vertex_array
	CompareConstant(GL_EXT_compiled_vertex_array,1,15356,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EXT_compiled_vertex_array\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EXT_cull_vertex
	CompareConstant(GL_EXT_cull_vertex,1,15357,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EXT_cull_vertex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_IBM_rasterpos_clip
	CompareConstant(GL_IBM_rasterpos_clip,1,15358,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_IBM_rasterpos_clip\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_HP_texture_lighting
	CompareConstant(GL_HP_texture_lighting,1,15359,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_HP_texture_lighting\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EXT_draw_range_elements
	CompareConstant(GL_EXT_draw_range_elements,1,15360,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EXT_draw_range_elements\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_WIN_phong_shading
	CompareConstant(GL_WIN_phong_shading,1,15361,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_WIN_phong_shading\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_WIN_specular_fog
	CompareConstant(GL_WIN_specular_fog,1,15362,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_WIN_specular_fog\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EXT_light_texture
	CompareConstant(GL_EXT_light_texture,1,15363,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EXT_light_texture\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EXT_bgra
	CompareConstant(GL_EXT_bgra,1,15364,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EXT_bgra\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INTEL_parallel_arrays
	CompareConstant(GL_INTEL_parallel_arrays,1,15365,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_INTEL_parallel_arrays\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_HP_occlusion_test
	CompareConstant(GL_HP_occlusion_test,1,15366,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_HP_occlusion_test\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EXT_pixel_transform
	CompareConstant(GL_EXT_pixel_transform,1,15367,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EXT_pixel_transform\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EXT_pixel_transform_color_table
	CompareConstant(GL_EXT_pixel_transform_color_table,1,15368,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EXT_pixel_transform_color_table\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EXT_shared_texture_palette
	CompareConstant(GL_EXT_shared_texture_palette,1,15369,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EXT_shared_texture_palette\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EXT_separate_specular_color
	CompareConstant(GL_EXT_separate_specular_color,1,15370,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EXT_separate_specular_color\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EXT_secondary_color
	CompareConstant(GL_EXT_secondary_color,1,15371,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EXT_secondary_color\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EXT_texture_perturb_normal
	CompareConstant(GL_EXT_texture_perturb_normal,1,15372,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EXT_texture_perturb_normal\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EXT_multi_draw_arrays
	CompareConstant(GL_EXT_multi_draw_arrays,1,15373,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EXT_multi_draw_arrays\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EXT_fog_coord
	CompareConstant(GL_EXT_fog_coord,1,15374,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EXT_fog_coord\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_REND_screen_coordinates
	CompareConstant(GL_REND_screen_coordinates,1,15375,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_REND_screen_coordinates\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EXT_coordinate_frame
	CompareConstant(GL_EXT_coordinate_frame,1,15376,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EXT_coordinate_frame\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EXT_texture_env_combine
	CompareConstant(GL_EXT_texture_env_combine,1,15377,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EXT_texture_env_combine\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SUNX_constant_data
	CompareConstant(GL_SUNX_constant_data,1,15378,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SUNX_constant_data\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SUN_global_alpha
	CompareConstant(GL_SUN_global_alpha,1,15379,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SUN_global_alpha\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SUN_triangle_list
	CompareConstant(GL_SUN_triangle_list,1,15380,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SUN_triangle_list\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SUN_vertex
	CompareConstant(GL_SUN_vertex,1,15381,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SUN_vertex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EXT_blend_func_separate
	CompareConstant(GL_EXT_blend_func_separate,1,15382,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EXT_blend_func_separate\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INGR_blend_func_separate
	CompareConstant(GL_INGR_blend_func_separate,1,15383,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_INGR_blend_func_separate\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INGR_color_clamp
	CompareConstant(GL_INGR_color_clamp,1,15384,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_INGR_color_clamp\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INGR_interlace_read
	CompareConstant(GL_INGR_interlace_read,1,15385,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_INGR_interlace_read\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EXT_stencil_wrap
	CompareConstant(GL_EXT_stencil_wrap,1,15386,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EXT_stencil_wrap\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EXT_422_pixels
	CompareConstant(GL_EXT_422_pixels,1,15387,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EXT_422_pixels\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SUN_convolution_border_modes
	CompareConstant(GL_SUN_convolution_border_modes,1,15388,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SUN_convolution_border_modes\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EXT_texture_env_add
	CompareConstant(GL_EXT_texture_env_add,1,15389,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EXT_texture_env_add\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EXT_texture_lod_bias
	CompareConstant(GL_EXT_texture_lod_bias,1,15390,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EXT_texture_lod_bias\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EXT_texture_filter_anisotropic
	CompareConstant(GL_EXT_texture_filter_anisotropic,1,15391,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EXT_texture_filter_anisotropic\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EXT_vertex_weighting
	CompareConstant(GL_EXT_vertex_weighting,1,15392,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EXT_vertex_weighting\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_IBM_cull_vertex
	CompareConstant(GL_IBM_cull_vertex,1,15393,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_IBM_cull_vertex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_IBM_multimode_draw_arrays
	CompareConstant(GL_IBM_multimode_draw_arrays,1,15394,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_IBM_multimode_draw_arrays\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_IBM_vertex_array_lists
	CompareConstant(GL_IBM_vertex_array_lists,1,15395,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_IBM_vertex_array_lists\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_3DFX_texture_compression_FXT1
	CompareConstant(GL_3DFX_texture_compression_FXT1,1,15396,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_3DFX_texture_compression_FXT1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_3DFX_multisample
	CompareConstant(GL_3DFX_multisample,1,15397,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_3DFX_multisample\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_3DFX_tbuffer
	CompareConstant(GL_3DFX_tbuffer,1,15398,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_3DFX_tbuffer\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EXT_multisample
	CompareConstant(GL_EXT_multisample,1,15399,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EXT_multisample\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EXT_texture_env_dot3
	CompareConstant(GL_EXT_texture_env_dot3,1,15400,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EXT_texture_env_dot3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ATI_texture_mirror_once
	CompareConstant(GL_ATI_texture_mirror_once,1,15401,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ATI_texture_mirror_once\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ATI_envmap_bumpmap
	CompareConstant(GL_ATI_envmap_bumpmap,1,15402,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ATI_envmap_bumpmap\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ATI_fragment_shader
	CompareConstant(GL_ATI_fragment_shader,1,15403,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ATI_fragment_shader\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ATI_pn_triangles
	CompareConstant(GL_ATI_pn_triangles,1,15404,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ATI_pn_triangles\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ATI_vertex_array_object
	CompareConstant(GL_ATI_vertex_array_object,1,15405,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ATI_vertex_array_object\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EXT_vertex_shader
	CompareConstant(GL_EXT_vertex_shader,1,15406,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EXT_vertex_shader\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ATI_vertex_streams
	CompareConstant(GL_ATI_vertex_streams,1,15407,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ATI_vertex_streams\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ATI_element_array
	CompareConstant(GL_ATI_element_array,1,15408,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ATI_element_array\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SUN_mesh_array
	CompareConstant(GL_SUN_mesh_array,1,15409,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SUN_mesh_array\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SUN_slice_accum
	CompareConstant(GL_SUN_slice_accum,1,15410,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_SUN_slice_accum\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EXT_shadow_funcs
	CompareConstant(GL_EXT_shadow_funcs,1,15411,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EXT_shadow_funcs\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EXT_stencil_two_side
	CompareConstant(GL_EXT_stencil_two_side,1,15412,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EXT_stencil_two_side\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ATI_text_fragment_shader
	CompareConstant(GL_ATI_text_fragment_shader,1,15413,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ATI_text_fragment_shader\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_S3_s3tc
	CompareConstant(GL_S3_s3tc,1,15414,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_S3_s3tc\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ATI_draw_buffers
	CompareConstant(GL_ATI_draw_buffers,1,15415,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ATI_draw_buffers\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ATI_pixel_format_float
	CompareConstant(GL_ATI_pixel_format_float,1,15416,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ATI_pixel_format_float\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ATI_texture_env_combine3
	CompareConstant(GL_ATI_texture_env_combine3,1,15417,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ATI_texture_env_combine3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ATI_texture_float
	CompareConstant(GL_ATI_texture_float,1,15418,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ATI_texture_float\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ATI_map_object_buffer
	CompareConstant(GL_ATI_map_object_buffer,1,15419,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ATI_map_object_buffer\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ATI_separate_stencil
	CompareConstant(GL_ATI_separate_stencil,1,15420,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ATI_separate_stencil\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ATI_vertex_attrib_array_object
	CompareConstant(GL_ATI_vertex_attrib_array_object,1,15421,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_ATI_vertex_attrib_array_object\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OES_read_format
	CompareConstant(GL_OES_read_format,1,15422,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_OES_read_format\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EXT_depth_bounds_test
	CompareConstant(GL_EXT_depth_bounds_test,1,15423,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EXT_depth_bounds_test\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EXT_texture_mirror_clamp
	CompareConstant(GL_EXT_texture_mirror_clamp,1,15424,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EXT_texture_mirror_clamp\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EXT_blend_equation_separate
	CompareConstant(GL_EXT_blend_equation_separate,1,15425,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EXT_blend_equation_separate\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EXT_pixel_buffer_object
	CompareConstant(GL_EXT_pixel_buffer_object,1,15426,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EXT_pixel_buffer_object\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EXT_framebuffer_object
	CompareConstant(GL_EXT_framebuffer_object,1,15427,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_EXT_framebuffer_object\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_GREMEDY_string_marker
	CompareConstant(GL_GREMEDY_string_marker,1,15428,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GL_GREMEDY_string_marker\n");
cnt++;
#endif

#endif

#if 1
CheckTypeSize(GLhandleARB,4, 31668, 1, 1.0, NULL, 7, NULL)
#endif

#if defined __s390x__
CheckTypeSize(GLintptr,8, 31669, 12, 1.3, NULL, 8, NULL)
#elif defined __x86_64__
CheckTypeSize(GLintptr,8, 31669, 11, 2.0, NULL, 8, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GLintptr,4, 31669, 10, 1.3, NULL, 8, NULL)
#elif defined __powerpc64__
CheckTypeSize(GLintptr,8, 31669, 9, 2.0, NULL, 8, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GLintptr,4, 31669, 6, 1.2, NULL, 8, NULL)
#elif defined __ia64__
CheckTypeSize(GLintptr,8, 31669, 3, 1.3, NULL, 8, NULL)
#elif defined __i386__
CheckTypeSize(GLintptr,4, 31669, 2, 1.0, NULL, 8, NULL)
#else
Msg("Find size of GLintptr (31669)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.0""',NULL,8,NULL);\n",architecture,31669,0);
#endif

#if 1
CheckTypeSize(GLchar,1, 31674, 1, 1.0, NULL, 2, NULL)
#endif

#if 1
CheckTypeSize(GLcharARB,1, 31678, 1, 1.0, NULL, 2, NULL)
#endif

#if defined __s390x__
CheckTypeSize(GLsizeiptr,8, 31682, 12, 1.3, NULL, 9027, NULL)
#elif defined __x86_64__
CheckTypeSize(GLsizeiptr,8, 31682, 11, 2.0, NULL, 9027, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GLsizeiptr,4, 31682, 10, 1.3, NULL, 9027, NULL)
#elif defined __powerpc64__
CheckTypeSize(GLsizeiptr,8, 31682, 9, 2.0, NULL, 9027, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GLsizeiptr,4, 31682, 6, 1.2, NULL, 9027, NULL)
#elif defined __ia64__
CheckTypeSize(GLsizeiptr,8, 31682, 3, 1.3, NULL, 9027, NULL)
#elif defined __i386__
CheckTypeSize(GLsizeiptr,4, 31682, 2, 1.0, NULL, 9027, NULL)
#else
Msg("Find size of GLsizeiptr (31682)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.0""',NULL,9027,NULL);\n",architecture,31682,0);
#endif

#if defined __s390x__
CheckTypeSize(GLsizeiptrARB,8, 31683, 12, 1.3, NULL, 9027, NULL)
#elif defined __x86_64__
CheckTypeSize(GLsizeiptrARB,8, 31683, 11, 2.0, NULL, 9027, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GLsizeiptrARB,4, 31683, 10, 1.3, NULL, 9027, NULL)
#elif defined __powerpc64__
CheckTypeSize(GLsizeiptrARB,8, 31683, 9, 2.0, NULL, 9027, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GLsizeiptrARB,4, 31683, 6, 1.2, NULL, 9027, NULL)
#elif defined __ia64__
CheckTypeSize(GLsizeiptrARB,8, 31683, 3, 1.3, NULL, 9027, NULL)
#elif defined __i386__
CheckTypeSize(GLsizeiptrARB,4, 31683, 2, 1.0, NULL, 9027, NULL)
#else
Msg("Find size of GLsizeiptrARB (31683)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.0""',NULL,9027,NULL);\n",architecture,31683,0);
#endif

#if defined __s390x__
CheckTypeSize(GLintptrARB,8, 31685, 12, 1.3, NULL, 8, NULL)
#elif defined __x86_64__
CheckTypeSize(GLintptrARB,8, 31685, 11, 2.0, NULL, 8, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GLintptrARB,4, 31685, 10, 1.3, NULL, 8, NULL)
#elif defined __powerpc64__
CheckTypeSize(GLintptrARB,8, 31685, 9, 2.0, NULL, 8, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GLintptrARB,4, 31685, 6, 1.2, NULL, 8, NULL)
#elif defined __ia64__
CheckTypeSize(GLintptrARB,8, 31685, 3, 1.3, NULL, 8, NULL)
#elif defined __i386__
CheckTypeSize(GLintptrARB,4, 31685, 2, 1.0, NULL, 8, NULL)
#else
Msg("Find size of GLintptrARB (31685)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.0""',NULL,8, NULL);\n",architecture,31685,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in GL/glext.h\n\n",pcnt,cnt);
return cnt;
#endif

}
