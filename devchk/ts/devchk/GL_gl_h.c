/*
 * Test of GL/gl.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "GL/gl.h"



#ifdef TET_TEST
void GL_gl_h()
{
#else
int GL_gl_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in GL/gl.h\n");
#endif

printf("Checking data structures in GL/gl.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef GL_BYTE
	CompareConstant(GL_BYTE,0x1400,12065,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_BYTE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_UNSIGNED_BYTE
	CompareConstant(GL_UNSIGNED_BYTE,0x1401,12066,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_UNSIGNED_BYTE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SHORT
	CompareConstant(GL_SHORT,0x1402,12067,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_SHORT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_UNSIGNED_SHORT
	CompareConstant(GL_UNSIGNED_SHORT,0x1403,12068,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_UNSIGNED_SHORT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INT
	CompareConstant(GL_INT,0x1404,12069,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_INT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_UNSIGNED_INT
	CompareConstant(GL_UNSIGNED_INT,0x1405,12070,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_UNSIGNED_INT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FLOAT
	CompareConstant(GL_FLOAT,0x1406,12071,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_FLOAT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_2_BYTES
	CompareConstant(GL_2_BYTES,0x1407,12072,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_2_BYTES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_3_BYTES
	CompareConstant(GL_3_BYTES,0x1408,12073,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_3_BYTES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_4_BYTES
	CompareConstant(GL_4_BYTES,0x1409,12074,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_4_BYTES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DOUBLE
	CompareConstant(GL_DOUBLE,0x140A,12075,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_DOUBLE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POINTS
	CompareConstant(GL_POINTS,0x0000,12076,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_POINTS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LINES
	CompareConstant(GL_LINES,0x0001,12077,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_LINES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LINE_LOOP
	CompareConstant(GL_LINE_LOOP,0x0002,12078,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_LINE_LOOP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LINE_STRIP
	CompareConstant(GL_LINE_STRIP,0x0003,12079,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_LINE_STRIP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TRIANGLES
	CompareConstant(GL_TRIANGLES,0x0004,12080,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TRIANGLES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TRIANGLE_STRIP
	CompareConstant(GL_TRIANGLE_STRIP,0x0005,12081,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TRIANGLE_STRIP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TRIANGLE_FAN
	CompareConstant(GL_TRIANGLE_FAN,0x0006,12082,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TRIANGLE_FAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_QUADS
	CompareConstant(GL_QUADS,0x0007,12083,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_QUADS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_QUAD_STRIP
	CompareConstant(GL_QUAD_STRIP,0x0008,12084,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_QUAD_STRIP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POLYGON
	CompareConstant(GL_POLYGON,0x0009,12085,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_POLYGON\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_ARRAY
	CompareConstant(GL_VERTEX_ARRAY,0x8074,12086,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX_ARRAY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_NORMAL_ARRAY
	CompareConstant(GL_NORMAL_ARRAY,0x8075,12087,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_NORMAL_ARRAY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_ARRAY
	CompareConstant(GL_COLOR_ARRAY,0x8076,12088,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_ARRAY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INDEX_ARRAY
	CompareConstant(GL_INDEX_ARRAY,0x8077,12089,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_INDEX_ARRAY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_COORD_ARRAY
	CompareConstant(GL_TEXTURE_COORD_ARRAY,0x8078,12090,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_COORD_ARRAY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EDGE_FLAG_ARRAY
	CompareConstant(GL_EDGE_FLAG_ARRAY,0x8079,12091,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_EDGE_FLAG_ARRAY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_ARRAY_SIZE
	CompareConstant(GL_VERTEX_ARRAY_SIZE,0x807A,12092,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX_ARRAY_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_ARRAY_TYPE
	CompareConstant(GL_VERTEX_ARRAY_TYPE,0x807B,12093,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX_ARRAY_TYPE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_ARRAY_STRIDE
	CompareConstant(GL_VERTEX_ARRAY_STRIDE,0x807C,12094,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX_ARRAY_STRIDE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_NORMAL_ARRAY_TYPE
	CompareConstant(GL_NORMAL_ARRAY_TYPE,0x807E,12095,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_NORMAL_ARRAY_TYPE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_NORMAL_ARRAY_STRIDE
	CompareConstant(GL_NORMAL_ARRAY_STRIDE,0x807F,12096,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_NORMAL_ARRAY_STRIDE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_ARRAY_SIZE
	CompareConstant(GL_COLOR_ARRAY_SIZE,0x8081,12097,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_ARRAY_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_ARRAY_TYPE
	CompareConstant(GL_COLOR_ARRAY_TYPE,0x8082,12098,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_ARRAY_TYPE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_ARRAY_STRIDE
	CompareConstant(GL_COLOR_ARRAY_STRIDE,0x8083,12099,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_ARRAY_STRIDE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INDEX_ARRAY_TYPE
	CompareConstant(GL_INDEX_ARRAY_TYPE,0x8085,12100,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_INDEX_ARRAY_TYPE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INDEX_ARRAY_STRIDE
	CompareConstant(GL_INDEX_ARRAY_STRIDE,0x8086,12101,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_INDEX_ARRAY_STRIDE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_COORD_ARRAY_SIZE
	CompareConstant(GL_TEXTURE_COORD_ARRAY_SIZE,0x8088,12102,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_COORD_ARRAY_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_COORD_ARRAY_TYPE
	CompareConstant(GL_TEXTURE_COORD_ARRAY_TYPE,0x8089,12103,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_COORD_ARRAY_TYPE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_COORD_ARRAY_STRIDE
	CompareConstant(GL_TEXTURE_COORD_ARRAY_STRIDE,0x808A,12104,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_COORD_ARRAY_STRIDE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EDGE_FLAG_ARRAY_STRIDE
	CompareConstant(GL_EDGE_FLAG_ARRAY_STRIDE,0x808C,12105,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_EDGE_FLAG_ARRAY_STRIDE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_ARRAY_POINTER
	CompareConstant(GL_VERTEX_ARRAY_POINTER,0x808E,12106,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_VERTEX_ARRAY_POINTER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_NORMAL_ARRAY_POINTER
	CompareConstant(GL_NORMAL_ARRAY_POINTER,0x808F,12107,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_NORMAL_ARRAY_POINTER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_ARRAY_POINTER
	CompareConstant(GL_COLOR_ARRAY_POINTER,0x8090,12108,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_ARRAY_POINTER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INDEX_ARRAY_POINTER
	CompareConstant(GL_INDEX_ARRAY_POINTER,0x8091,12109,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_INDEX_ARRAY_POINTER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_COORD_ARRAY_POINTER
	CompareConstant(GL_TEXTURE_COORD_ARRAY_POINTER,0x8092,12110,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_COORD_ARRAY_POINTER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EDGE_FLAG_ARRAY_POINTER
	CompareConstant(GL_EDGE_FLAG_ARRAY_POINTER,0x8093,12111,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_EDGE_FLAG_ARRAY_POINTER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_V2F
	CompareConstant(GL_V2F,0x2A20,12112,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_V2F\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_V3F
	CompareConstant(GL_V3F,0x2A21,12113,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_V3F\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_C4UB_V2F
	CompareConstant(GL_C4UB_V2F,0x2A22,12114,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_C4UB_V2F\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_C4UB_V3F
	CompareConstant(GL_C4UB_V3F,0x2A23,12115,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_C4UB_V3F\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_C3F_V3F
	CompareConstant(GL_C3F_V3F,0x2A24,12116,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_C3F_V3F\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_N3F_V3F
	CompareConstant(GL_N3F_V3F,0x2A25,12117,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_N3F_V3F\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_C4F_N3F_V3F
	CompareConstant(GL_C4F_N3F_V3F,0x2A26,12118,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_C4F_N3F_V3F\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_T2F_V3F
	CompareConstant(GL_T2F_V3F,0x2A27,12119,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_T2F_V3F\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_T4F_V4F
	CompareConstant(GL_T4F_V4F,0x2A28,12120,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_T4F_V4F\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_T2F_C4UB_V3F
	CompareConstant(GL_T2F_C4UB_V3F,0x2A29,12121,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_T2F_C4UB_V3F\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_T2F_C3F_V3F
	CompareConstant(GL_T2F_C3F_V3F,0x2A2A,12122,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_T2F_C3F_V3F\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_T2F_N3F_V3F
	CompareConstant(GL_T2F_N3F_V3F,0x2A2B,12123,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_T2F_N3F_V3F\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_T2F_C4F_N3F_V3F
	CompareConstant(GL_T2F_C4F_N3F_V3F,0x2A2C,12124,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_T2F_C4F_N3F_V3F\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_T4F_C4F_N3F_V4F
	CompareConstant(GL_T4F_C4F_N3F_V4F,0x2A2D,12125,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_T4F_C4F_N3F_V4F\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MATRIX_MODE
	CompareConstant(GL_MATRIX_MODE,0x0BA0,12126,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_MATRIX_MODE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MODELVIEW
	CompareConstant(GL_MODELVIEW,0x1700,12127,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_MODELVIEW\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PROJECTION
	CompareConstant(GL_PROJECTION,0x1701,12128,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_PROJECTION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE
	CompareConstant(GL_TEXTURE,0x1702,12129,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POINT_SMOOTH
	CompareConstant(GL_POINT_SMOOTH,0x0B10,12130,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_POINT_SMOOTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POINT_SIZE
	CompareConstant(GL_POINT_SIZE,0x0B11,12131,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_POINT_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POINT_SIZE_GRANULARITY
	CompareConstant(GL_POINT_SIZE_GRANULARITY,0x0B13,12132,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_POINT_SIZE_GRANULARITY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POINT_SIZE_RANGE
	CompareConstant(GL_POINT_SIZE_RANGE,0x0B12,12133,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_POINT_SIZE_RANGE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LINE_SMOOTH
	CompareConstant(GL_LINE_SMOOTH,0x0B20,12134,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_LINE_SMOOTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LINE_STIPPLE
	CompareConstant(GL_LINE_STIPPLE,0x0B24,12135,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_LINE_STIPPLE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LINE_STIPPLE_PATTERN
	CompareConstant(GL_LINE_STIPPLE_PATTERN,0x0B25,12136,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_LINE_STIPPLE_PATTERN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LINE_STIPPLE_REPEAT
	CompareConstant(GL_LINE_STIPPLE_REPEAT,0x0B26,12137,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_LINE_STIPPLE_REPEAT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LINE_WIDTH
	CompareConstant(GL_LINE_WIDTH,0x0B21,12138,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_LINE_WIDTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LINE_WIDTH_GRANULARITY
	CompareConstant(GL_LINE_WIDTH_GRANULARITY,0x0B23,12139,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_LINE_WIDTH_GRANULARITY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LINE_WIDTH_RANGE
	CompareConstant(GL_LINE_WIDTH_RANGE,0x0B22,12140,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_LINE_WIDTH_RANGE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POINT
	CompareConstant(GL_POINT,0x1B00,12141,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_POINT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LINE
	CompareConstant(GL_LINE,0x1B01,12142,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_LINE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FILL
	CompareConstant(GL_FILL,0x1B02,12143,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_FILL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CW
	CompareConstant(GL_CW,0x0900,12144,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_CW\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CCW
	CompareConstant(GL_CCW,0x0901,12145,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_CCW\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FRONT
	CompareConstant(GL_FRONT,0x0404,12146,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_FRONT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BACK
	CompareConstant(GL_BACK,0x0405,12147,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_BACK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POLYGON_MODE
	CompareConstant(GL_POLYGON_MODE,0x0B40,12148,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_POLYGON_MODE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POLYGON_SMOOTH
	CompareConstant(GL_POLYGON_SMOOTH,0x0B41,12149,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_POLYGON_SMOOTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POLYGON_STIPPLE
	CompareConstant(GL_POLYGON_STIPPLE,0x0B42,12150,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_POLYGON_STIPPLE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EDGE_FLAG
	CompareConstant(GL_EDGE_FLAG,0x0B43,12151,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_EDGE_FLAG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CULL_FACE
	CompareConstant(GL_CULL_FACE,0x0B44,12152,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_CULL_FACE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CULL_FACE_MODE
	CompareConstant(GL_CULL_FACE_MODE,0x0B45,12153,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_CULL_FACE_MODE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FRONT_FACE
	CompareConstant(GL_FRONT_FACE,0x0B46,12154,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_FRONT_FACE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POLYGON_OFFSET_FACTOR
	CompareConstant(GL_POLYGON_OFFSET_FACTOR,0x8038,12155,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_POLYGON_OFFSET_FACTOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POLYGON_OFFSET_UNITS
	CompareConstant(GL_POLYGON_OFFSET_UNITS,0x2A00,12156,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_POLYGON_OFFSET_UNITS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POLYGON_OFFSET_POINT
	CompareConstant(GL_POLYGON_OFFSET_POINT,0x2A01,12157,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_POLYGON_OFFSET_POINT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POLYGON_OFFSET_LINE
	CompareConstant(GL_POLYGON_OFFSET_LINE,0x2A02,12158,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_POLYGON_OFFSET_LINE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POLYGON_OFFSET_FILL
	CompareConstant(GL_POLYGON_OFFSET_FILL,0x8037,12159,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_POLYGON_OFFSET_FILL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COMPILE
	CompareConstant(GL_COMPILE,0x1300,12160,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_COMPILE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COMPILE_AND_EXECUTE
	CompareConstant(GL_COMPILE_AND_EXECUTE,0x1301,12161,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_COMPILE_AND_EXECUTE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LIST_BASE
	CompareConstant(GL_LIST_BASE,0x0B32,12162,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_LIST_BASE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LIST_INDEX
	CompareConstant(GL_LIST_INDEX,0x0B33,12163,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_LIST_INDEX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LIST_MODE
	CompareConstant(GL_LIST_MODE,0x0B30,12164,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_LIST_MODE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_NEVER
	CompareConstant(GL_NEVER,0x0200,12165,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_NEVER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LESS
	CompareConstant(GL_LESS,0x0201,12166,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_LESS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EQUAL
	CompareConstant(GL_EQUAL,0x0202,12167,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_EQUAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LEQUAL
	CompareConstant(GL_LEQUAL,0x0203,12168,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_LEQUAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_GREATER
	CompareConstant(GL_GREATER,0x0204,12169,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_GREATER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_NOTEQUAL
	CompareConstant(GL_NOTEQUAL,0x0205,12170,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_NOTEQUAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_GEQUAL
	CompareConstant(GL_GEQUAL,0x0206,12171,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_GEQUAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ALWAYS
	CompareConstant(GL_ALWAYS,0x0207,12172,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_ALWAYS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DEPTH_TEST
	CompareConstant(GL_DEPTH_TEST,0x0B71,12173,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_DEPTH_TEST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DEPTH_BITS
	CompareConstant(GL_DEPTH_BITS,0x0D56,12174,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_DEPTH_BITS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DEPTH_CLEAR_VALUE
	CompareConstant(GL_DEPTH_CLEAR_VALUE,0x0B73,12175,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_DEPTH_CLEAR_VALUE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DEPTH_FUNC
	CompareConstant(GL_DEPTH_FUNC,0x0B74,12176,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_DEPTH_FUNC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DEPTH_RANGE
	CompareConstant(GL_DEPTH_RANGE,0x0B70,12177,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_DEPTH_RANGE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DEPTH_WRITEMASK
	CompareConstant(GL_DEPTH_WRITEMASK,0x0B72,12178,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_DEPTH_WRITEMASK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DEPTH_COMPONENT
	CompareConstant(GL_DEPTH_COMPONENT,0x1902,12179,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_DEPTH_COMPONENT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LIGHTING
	CompareConstant(GL_LIGHTING,0x0B50,12180,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_LIGHTING\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LIGHT0
	CompareConstant(GL_LIGHT0,0x4000,12181,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_LIGHT0\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LIGHT1
	CompareConstant(GL_LIGHT1,0x4001,12182,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_LIGHT1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LIGHT2
	CompareConstant(GL_LIGHT2,0x4002,12183,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_LIGHT2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LIGHT3
	CompareConstant(GL_LIGHT3,0x4003,12184,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_LIGHT3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LIGHT4
	CompareConstant(GL_LIGHT4,0x4004,12185,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_LIGHT4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LIGHT5
	CompareConstant(GL_LIGHT5,0x4005,12186,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_LIGHT5\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LIGHT6
	CompareConstant(GL_LIGHT6,0x4006,12187,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_LIGHT6\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LIGHT7
	CompareConstant(GL_LIGHT7,0x4007,12188,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_LIGHT7\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SPOT_EXPONENT
	CompareConstant(GL_SPOT_EXPONENT,0x1205,12189,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_SPOT_EXPONENT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SPOT_CUTOFF
	CompareConstant(GL_SPOT_CUTOFF,0x1206,12190,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_SPOT_CUTOFF\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CONSTANT_ATTENUATION
	CompareConstant(GL_CONSTANT_ATTENUATION,0x1207,12191,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_CONSTANT_ATTENUATION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LINEAR_ATTENUATION
	CompareConstant(GL_LINEAR_ATTENUATION,0x1208,12192,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_LINEAR_ATTENUATION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_QUADRATIC_ATTENUATION
	CompareConstant(GL_QUADRATIC_ATTENUATION,0x1209,12193,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_QUADRATIC_ATTENUATION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_AMBIENT
	CompareConstant(GL_AMBIENT,0x1200,12194,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_AMBIENT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DIFFUSE
	CompareConstant(GL_DIFFUSE,0x1201,12195,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_DIFFUSE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SPECULAR
	CompareConstant(GL_SPECULAR,0x1202,12196,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_SPECULAR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SHININESS
	CompareConstant(GL_SHININESS,0x1601,12197,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_SHININESS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EMISSION
	CompareConstant(GL_EMISSION,0x1600,12198,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_EMISSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POSITION
	CompareConstant(GL_POSITION,0x1203,12199,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_POSITION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SPOT_DIRECTION
	CompareConstant(GL_SPOT_DIRECTION,0x1204,12200,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_SPOT_DIRECTION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_AMBIENT_AND_DIFFUSE
	CompareConstant(GL_AMBIENT_AND_DIFFUSE,0x1602,12201,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_AMBIENT_AND_DIFFUSE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_INDEXES
	CompareConstant(GL_COLOR_INDEXES,0x1603,12202,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_INDEXES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LIGHT_MODEL_TWO_SIDE
	CompareConstant(GL_LIGHT_MODEL_TWO_SIDE,0x0B52,12203,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_LIGHT_MODEL_TWO_SIDE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LIGHT_MODEL_LOCAL_VIEWER
	CompareConstant(GL_LIGHT_MODEL_LOCAL_VIEWER,0x0B51,12204,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_LIGHT_MODEL_LOCAL_VIEWER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LIGHT_MODEL_AMBIENT
	CompareConstant(GL_LIGHT_MODEL_AMBIENT,0x0B53,12205,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_LIGHT_MODEL_AMBIENT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FRONT_AND_BACK
	CompareConstant(GL_FRONT_AND_BACK,0x0408,12206,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_FRONT_AND_BACK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SHADE_MODEL
	CompareConstant(GL_SHADE_MODEL,0x0B54,12207,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_SHADE_MODEL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FLAT
	CompareConstant(GL_FLAT,0x1D00,12208,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_FLAT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SMOOTH
	CompareConstant(GL_SMOOTH,0x1D01,12209,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_SMOOTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_MATERIAL
	CompareConstant(GL_COLOR_MATERIAL,0x0B57,12210,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_MATERIAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_MATERIAL_FACE
	CompareConstant(GL_COLOR_MATERIAL_FACE,0x0B55,12211,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_MATERIAL_FACE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_MATERIAL_PARAMETER
	CompareConstant(GL_COLOR_MATERIAL_PARAMETER,0x0B56,12212,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_MATERIAL_PARAMETER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_NORMALIZE
	CompareConstant(GL_NORMALIZE,0x0BA1,12213,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_NORMALIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CLIP_PLANE0
	CompareConstant(GL_CLIP_PLANE0,0x3000,12214,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_CLIP_PLANE0\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CLIP_PLANE1
	CompareConstant(GL_CLIP_PLANE1,0x3001,12215,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_CLIP_PLANE1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CLIP_PLANE2
	CompareConstant(GL_CLIP_PLANE2,0x3002,12216,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_CLIP_PLANE2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CLIP_PLANE3
	CompareConstant(GL_CLIP_PLANE3,0x3003,12217,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_CLIP_PLANE3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CLIP_PLANE4
	CompareConstant(GL_CLIP_PLANE4,0x3004,12218,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_CLIP_PLANE4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CLIP_PLANE5
	CompareConstant(GL_CLIP_PLANE5,0x3005,12219,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_CLIP_PLANE5\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ACCUM_RED_BITS
	CompareConstant(GL_ACCUM_RED_BITS,0x0D58,12220,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_ACCUM_RED_BITS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ACCUM_GREEN_BITS
	CompareConstant(GL_ACCUM_GREEN_BITS,0x0D59,12221,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_ACCUM_GREEN_BITS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ACCUM_BLUE_BITS
	CompareConstant(GL_ACCUM_BLUE_BITS,0x0D5A,12222,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_ACCUM_BLUE_BITS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ACCUM_ALPHA_BITS
	CompareConstant(GL_ACCUM_ALPHA_BITS,0x0D5B,12223,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_ACCUM_ALPHA_BITS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ACCUM_CLEAR_VALUE
	CompareConstant(GL_ACCUM_CLEAR_VALUE,0x0B80,12224,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_ACCUM_CLEAR_VALUE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ACCUM
	CompareConstant(GL_ACCUM,0x0100,12225,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_ACCUM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ADD
	CompareConstant(GL_ADD,0x0104,12226,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_ADD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LOAD
	CompareConstant(GL_LOAD,0x0101,12227,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_LOAD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MULT
	CompareConstant(GL_MULT,0x0103,12228,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_MULT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RETURN
	CompareConstant(GL_RETURN,0x0102,12229,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_RETURN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ALPHA_TEST
	CompareConstant(GL_ALPHA_TEST,0x0BC0,12230,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_ALPHA_TEST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ALPHA_TEST_REF
	CompareConstant(GL_ALPHA_TEST_REF,0x0BC2,12231,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_ALPHA_TEST_REF\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ALPHA_TEST_FUNC
	CompareConstant(GL_ALPHA_TEST_FUNC,0x0BC1,12232,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_ALPHA_TEST_FUNC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BLEND
	CompareConstant(GL_BLEND,0x0BE2,12233,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_BLEND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BLEND_SRC
	CompareConstant(GL_BLEND_SRC,0x0BE1,12234,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_BLEND_SRC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BLEND_DST
	CompareConstant(GL_BLEND_DST,0x0BE0,12235,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_BLEND_DST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ZERO
	CompareConstant(GL_ZERO,0x0,12236,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_ZERO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ONE
	CompareConstant(GL_ONE,0x1,12237,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_ONE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SRC_COLOR
	CompareConstant(GL_SRC_COLOR,0x0300,12238,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_SRC_COLOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ONE_MINUS_SRC_COLOR
	CompareConstant(GL_ONE_MINUS_SRC_COLOR,0x0301,12239,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_ONE_MINUS_SRC_COLOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SRC_ALPHA
	CompareConstant(GL_SRC_ALPHA,0x0302,12240,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_SRC_ALPHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ONE_MINUS_SRC_ALPHA
	CompareConstant(GL_ONE_MINUS_SRC_ALPHA,0x0303,12241,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_ONE_MINUS_SRC_ALPHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DST_ALPHA
	CompareConstant(GL_DST_ALPHA,0x0304,12242,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_DST_ALPHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ONE_MINUS_DST_ALPHA
	CompareConstant(GL_ONE_MINUS_DST_ALPHA,0x0305,12243,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_ONE_MINUS_DST_ALPHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DST_COLOR
	CompareConstant(GL_DST_COLOR,0x0306,12244,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_DST_COLOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ONE_MINUS_DST_COLOR
	CompareConstant(GL_ONE_MINUS_DST_COLOR,0x0307,12245,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_ONE_MINUS_DST_COLOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SRC_ALPHA_SATURATE
	CompareConstant(GL_SRC_ALPHA_SATURATE,0x0308,12246,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_SRC_ALPHA_SATURATE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FEEDBACK
	CompareConstant(GL_FEEDBACK,0x1C01,12247,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_FEEDBACK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RENDER
	CompareConstant(GL_RENDER,0x1C00,12248,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_RENDER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SELECT
	CompareConstant(GL_SELECT,0x1C02,12249,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_SELECT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_2D
	CompareConstant(GL_2D,0x0600,12250,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_2D\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_3D
	CompareConstant(GL_3D,0x0601,12251,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_3D\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_3D_COLOR
	CompareConstant(GL_3D_COLOR,0x0602,12252,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_3D_COLOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_3D_COLOR_TEXTURE
	CompareConstant(GL_3D_COLOR_TEXTURE,0x0603,12253,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_3D_COLOR_TEXTURE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_4D_COLOR_TEXTURE
	CompareConstant(GL_4D_COLOR_TEXTURE,0x0604,12254,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_4D_COLOR_TEXTURE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POINT_TOKEN
	CompareConstant(GL_POINT_TOKEN,0x0701,12255,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_POINT_TOKEN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LINE_TOKEN
	CompareConstant(GL_LINE_TOKEN,0x0702,12256,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_LINE_TOKEN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LINE_RESET_TOKEN
	CompareConstant(GL_LINE_RESET_TOKEN,0x0707,12257,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_LINE_RESET_TOKEN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POLYGON_TOKEN
	CompareConstant(GL_POLYGON_TOKEN,0x0703,12258,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_POLYGON_TOKEN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BITMAP_TOKEN
	CompareConstant(GL_BITMAP_TOKEN,0x0704,12259,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_BITMAP_TOKEN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DRAW_PIXEL_TOKEN
	CompareConstant(GL_DRAW_PIXEL_TOKEN,0x0705,12260,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_DRAW_PIXEL_TOKEN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COPY_PIXEL_TOKEN
	CompareConstant(GL_COPY_PIXEL_TOKEN,0x0706,12261,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_COPY_PIXEL_TOKEN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PASS_THROUGH_TOKEN
	CompareConstant(GL_PASS_THROUGH_TOKEN,0x0700,12262,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_PASS_THROUGH_TOKEN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FEEDBACK_BUFFER_POINTER
	CompareConstant(GL_FEEDBACK_BUFFER_POINTER,0x0DF0,12263,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_FEEDBACK_BUFFER_POINTER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FEEDBACK_BUFFER_SIZE
	CompareConstant(GL_FEEDBACK_BUFFER_SIZE,0x0DF1,12264,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_FEEDBACK_BUFFER_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FEEDBACK_BUFFER_TYPE
	CompareConstant(GL_FEEDBACK_BUFFER_TYPE,0x0DF2,12265,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_FEEDBACK_BUFFER_TYPE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ATI_blend_equation_separate
	CompareConstant(GL_ATI_blend_equation_separate,1,12840,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_ATI_blend_equation_separate\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ALPHA_BLEND_EQUATION_ATI
	CompareConstant(GL_ALPHA_BLEND_EQUATION_ATI,0x883D,12841,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_ALPHA_BLEND_EQUATION_ATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FALSE
	CompareConstant(GL_FALSE,0x0,12842,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_FALSE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TRUE
	CompareConstant(GL_TRUE,0x1,12843,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TRUE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SELECTION_BUFFER_POINTER
	CompareConstant(GL_SELECTION_BUFFER_POINTER,0x0DF3,12844,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_SELECTION_BUFFER_POINTER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SELECTION_BUFFER_SIZE
	CompareConstant(GL_SELECTION_BUFFER_SIZE,0x0DF4,12845,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_SELECTION_BUFFER_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FOG
	CompareConstant(GL_FOG,0x0B60,12846,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_FOG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FOG_MODE
	CompareConstant(GL_FOG_MODE,0x0B65,12847,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_FOG_MODE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FOG_DENSITY
	CompareConstant(GL_FOG_DENSITY,0x0B62,12848,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_FOG_DENSITY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FOG_COLOR
	CompareConstant(GL_FOG_COLOR,0x0B66,12849,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_FOG_COLOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FOG_INDEX
	CompareConstant(GL_FOG_INDEX,0x0B61,12850,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_FOG_INDEX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FOG_START
	CompareConstant(GL_FOG_START,0x0B63,12851,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_FOG_START\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FOG_END
	CompareConstant(GL_FOG_END,0x0B64,12852,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_FOG_END\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LINEAR
	CompareConstant(GL_LINEAR,0x2601,12853,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_LINEAR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EXP
	CompareConstant(GL_EXP,0x0800,12854,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_EXP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EXP2
	CompareConstant(GL_EXP2,0x0801,12855,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_EXP2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LOGIC_OP
	CompareConstant(GL_LOGIC_OP,0x0BF1,12856,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_LOGIC_OP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INDEX_LOGIC_OP
	CompareConstant(GL_INDEX_LOGIC_OP,0x0BF1,12857,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_INDEX_LOGIC_OP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_LOGIC_OP
	CompareConstant(GL_COLOR_LOGIC_OP,0x0BF2,12858,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_LOGIC_OP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LOGIC_OP_MODE
	CompareConstant(GL_LOGIC_OP_MODE,0x0BF0,12859,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_LOGIC_OP_MODE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CLEAR
	CompareConstant(GL_CLEAR,0x1500,12860,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_CLEAR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SET
	CompareConstant(GL_SET,0x150F,12861,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_SET\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COPY
	CompareConstant(GL_COPY,0x1503,12862,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_COPY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COPY_INVERTED
	CompareConstant(GL_COPY_INVERTED,0x150C,12863,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_COPY_INVERTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_NOOP
	CompareConstant(GL_NOOP,0x1505,12864,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_NOOP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INVERT
	CompareConstant(GL_INVERT,0x150A,12865,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_INVERT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_AND
	CompareConstant(GL_AND,0x1501,12866,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_AND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_NAND
	CompareConstant(GL_NAND,0x150E,12867,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_NAND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OR
	CompareConstant(GL_OR,0x1507,12868,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_OR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_NOR
	CompareConstant(GL_NOR,0x1508,12869,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_NOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_XOR
	CompareConstant(GL_XOR,0x1506,12870,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_XOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EQUIV
	CompareConstant(GL_EQUIV,0x1509,12871,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_EQUIV\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_AND_REVERSE
	CompareConstant(GL_AND_REVERSE,0x1502,12872,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_AND_REVERSE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_AND_INVERTED
	CompareConstant(GL_AND_INVERTED,0x1504,12873,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_AND_INVERTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OR_REVERSE
	CompareConstant(GL_OR_REVERSE,0x150B,12874,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_OR_REVERSE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OR_INVERTED
	CompareConstant(GL_OR_INVERTED,0x150D,12875,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_OR_INVERTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_STENCIL_BITS
	CompareConstant(GL_STENCIL_BITS,0x0D57,12876,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_STENCIL_BITS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_STENCIL_TEST
	CompareConstant(GL_STENCIL_TEST,0x0B90,12877,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_STENCIL_TEST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_STENCIL_CLEAR_VALUE
	CompareConstant(GL_STENCIL_CLEAR_VALUE,0x0B91,12878,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_STENCIL_CLEAR_VALUE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_STENCIL_FUNC
	CompareConstant(GL_STENCIL_FUNC,0x0B92,12879,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_STENCIL_FUNC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_STENCIL_VALUE_MASK
	CompareConstant(GL_STENCIL_VALUE_MASK,0x0B93,12880,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_STENCIL_VALUE_MASK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_STENCIL_FAIL
	CompareConstant(GL_STENCIL_FAIL,0x0B94,12881,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_STENCIL_FAIL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_STENCIL_PASS_DEPTH_FAIL
	CompareConstant(GL_STENCIL_PASS_DEPTH_FAIL,0x0B95,12882,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_STENCIL_PASS_DEPTH_FAIL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_STENCIL_PASS_DEPTH_PASS
	CompareConstant(GL_STENCIL_PASS_DEPTH_PASS,0x0B96,12883,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_STENCIL_PASS_DEPTH_PASS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_STENCIL_REF
	CompareConstant(GL_STENCIL_REF,0x0B97,12884,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_STENCIL_REF\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_STENCIL_WRITEMASK
	CompareConstant(GL_STENCIL_WRITEMASK,0x0B98,12885,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_STENCIL_WRITEMASK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_STENCIL_INDEX
	CompareConstant(GL_STENCIL_INDEX,0x1901,12886,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_STENCIL_INDEX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_KEEP
	CompareConstant(GL_KEEP,0x1E00,12887,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_KEEP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_REPLACE
	CompareConstant(GL_REPLACE,0x1E01,12888,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_REPLACE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INCR
	CompareConstant(GL_INCR,0x1E02,12889,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_INCR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DECR
	CompareConstant(GL_DECR,0x1E03,12890,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_DECR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_NONE
	CompareConstant(GL_NONE,0x0,12891,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_NONE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LEFT
	CompareConstant(GL_LEFT,0x0406,12892,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_LEFT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RIGHT
	CompareConstant(GL_RIGHT,0x0407,12893,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_RIGHT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FRONT_LEFT
	CompareConstant(GL_FRONT_LEFT,0x0400,12894,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_FRONT_LEFT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FRONT_RIGHT
	CompareConstant(GL_FRONT_RIGHT,0x0401,12895,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_FRONT_RIGHT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BACK_LEFT
	CompareConstant(GL_BACK_LEFT,0x0402,12896,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_BACK_LEFT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BACK_RIGHT
	CompareConstant(GL_BACK_RIGHT,0x0403,12897,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_BACK_RIGHT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_AUX0
	CompareConstant(GL_AUX0,0x0409,12898,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_AUX0\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_AUX1
	CompareConstant(GL_AUX1,0x040A,12899,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_AUX1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_AUX2
	CompareConstant(GL_AUX2,0x040B,12900,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_AUX2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_AUX3
	CompareConstant(GL_AUX3,0x040C,12901,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_AUX3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_INDEX
	CompareConstant(GL_COLOR_INDEX,0x1900,12902,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_INDEX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RED
	CompareConstant(GL_RED,0x1903,12903,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_RED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_GREEN
	CompareConstant(GL_GREEN,0x1904,12904,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_GREEN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BLUE
	CompareConstant(GL_BLUE,0x1905,12905,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_BLUE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ALPHA
	CompareConstant(GL_ALPHA,0x1906,12906,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_ALPHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LUMINANCE
	CompareConstant(GL_LUMINANCE,0x1909,12907,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_LUMINANCE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LUMINANCE_ALPHA
	CompareConstant(GL_LUMINANCE_ALPHA,0x190A,12908,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_LUMINANCE_ALPHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ALPHA_BITS
	CompareConstant(GL_ALPHA_BITS,0x0D55,12909,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_ALPHA_BITS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RED_BITS
	CompareConstant(GL_RED_BITS,0x0D52,12910,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_RED_BITS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_GREEN_BITS
	CompareConstant(GL_GREEN_BITS,0x0D53,12911,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_GREEN_BITS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BLUE_BITS
	CompareConstant(GL_BLUE_BITS,0x0D54,12912,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_BLUE_BITS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INDEX_BITS
	CompareConstant(GL_INDEX_BITS,0x0D51,12913,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_INDEX_BITS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SUBPIXEL_BITS
	CompareConstant(GL_SUBPIXEL_BITS,0x0D50,12914,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_SUBPIXEL_BITS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_AUX_BUFFERS
	CompareConstant(GL_AUX_BUFFERS,0x0C00,12915,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_AUX_BUFFERS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_READ_BUFFER
	CompareConstant(GL_READ_BUFFER,0x0C02,12916,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_READ_BUFFER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DRAW_BUFFER
	CompareConstant(GL_DRAW_BUFFER,0x0C01,12917,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_DRAW_BUFFER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DOUBLEBUFFER
	CompareConstant(GL_DOUBLEBUFFER,0x0C32,12918,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_DOUBLEBUFFER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_STEREO
	CompareConstant(GL_STEREO,0x0C33,12919,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_STEREO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BITMAP
	CompareConstant(GL_BITMAP,0x1A00,12920,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_BITMAP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR
	CompareConstant(GL_COLOR,0x1800,12921,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DEPTH
	CompareConstant(GL_DEPTH,0x1801,12922,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_DEPTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_STENCIL
	CompareConstant(GL_STENCIL,0x1802,12923,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_STENCIL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DITHER
	CompareConstant(GL_DITHER,0x0BD0,12924,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_DITHER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RGB
	CompareConstant(GL_RGB,0x1907,12925,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_RGB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RGBA
	CompareConstant(GL_RGBA,0x1908,12926,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_RGBA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_LIST_NESTING
	CompareConstant(GL_MAX_LIST_NESTING,0x0B31,12927,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_LIST_NESTING\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_EVAL_ORDER
	CompareConstant(GL_MAX_EVAL_ORDER,0x0D30,12928,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_EVAL_ORDER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_LIGHTS
	CompareConstant(GL_MAX_LIGHTS,0x0D31,12929,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_LIGHTS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_CLIP_PLANES
	CompareConstant(GL_MAX_CLIP_PLANES,0x0D32,12930,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_CLIP_PLANES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_TEXTURE_SIZE
	CompareConstant(GL_MAX_TEXTURE_SIZE,0x0D33,12931,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_TEXTURE_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_PIXEL_MAP_TABLE
	CompareConstant(GL_MAX_PIXEL_MAP_TABLE,0x0D34,12932,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_PIXEL_MAP_TABLE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_ATTRIB_STACK_DEPTH
	CompareConstant(GL_MAX_ATTRIB_STACK_DEPTH,0x0D35,12933,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_ATTRIB_STACK_DEPTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_MODELVIEW_STACK_DEPTH
	CompareConstant(GL_MAX_MODELVIEW_STACK_DEPTH,0x0D36,12934,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_MODELVIEW_STACK_DEPTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_NAME_STACK_DEPTH
	CompareConstant(GL_MAX_NAME_STACK_DEPTH,0x0D37,12935,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_NAME_STACK_DEPTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_PROJECTION_STACK_DEPTH
	CompareConstant(GL_MAX_PROJECTION_STACK_DEPTH,0x0D38,12936,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_PROJECTION_STACK_DEPTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_TEXTURE_STACK_DEPTH
	CompareConstant(GL_MAX_TEXTURE_STACK_DEPTH,0x0D39,12937,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_TEXTURE_STACK_DEPTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_VIEWPORT_DIMS
	CompareConstant(GL_MAX_VIEWPORT_DIMS,0x0D3A,12938,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_VIEWPORT_DIMS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_CLIENT_ATTRIB_STACK_DEPTH
	CompareConstant(GL_MAX_CLIENT_ATTRIB_STACK_DEPTH,0x0D3B,12939,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_CLIENT_ATTRIB_STACK_DEPTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ATTRIB_STACK_DEPTH
	CompareConstant(GL_ATTRIB_STACK_DEPTH,0x0BB0,12940,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_ATTRIB_STACK_DEPTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CLIENT_ATTRIB_STACK_DEPTH
	CompareConstant(GL_CLIENT_ATTRIB_STACK_DEPTH,0x0BB1,12941,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_CLIENT_ATTRIB_STACK_DEPTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_CLEAR_VALUE
	CompareConstant(GL_COLOR_CLEAR_VALUE,0x0C22,12942,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_CLEAR_VALUE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_WRITEMASK
	CompareConstant(GL_COLOR_WRITEMASK,0x0C23,12943,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_WRITEMASK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CURRENT_INDEX
	CompareConstant(GL_CURRENT_INDEX,0x0B01,12944,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_CURRENT_INDEX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CURRENT_COLOR
	CompareConstant(GL_CURRENT_COLOR,0x0B00,12945,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_CURRENT_COLOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CURRENT_NORMAL
	CompareConstant(GL_CURRENT_NORMAL,0x0B02,12946,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_CURRENT_NORMAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CURRENT_RASTER_COLOR
	CompareConstant(GL_CURRENT_RASTER_COLOR,0x0B04,12947,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_CURRENT_RASTER_COLOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CURRENT_RASTER_DISTANCE
	CompareConstant(GL_CURRENT_RASTER_DISTANCE,0x0B09,12948,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_CURRENT_RASTER_DISTANCE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CURRENT_RASTER_INDEX
	CompareConstant(GL_CURRENT_RASTER_INDEX,0x0B05,12949,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_CURRENT_RASTER_INDEX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CURRENT_RASTER_POSITION
	CompareConstant(GL_CURRENT_RASTER_POSITION,0x0B07,12950,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_CURRENT_RASTER_POSITION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CURRENT_RASTER_TEXTURE_COORDS
	CompareConstant(GL_CURRENT_RASTER_TEXTURE_COORDS,0x0B06,12951,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_CURRENT_RASTER_TEXTURE_COORDS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CURRENT_RASTER_POSITION_VALID
	CompareConstant(GL_CURRENT_RASTER_POSITION_VALID,0x0B08,12952,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_CURRENT_RASTER_POSITION_VALID\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CURRENT_TEXTURE_COORDS
	CompareConstant(GL_CURRENT_TEXTURE_COORDS,0x0B03,12953,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_CURRENT_TEXTURE_COORDS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INDEX_CLEAR_VALUE
	CompareConstant(GL_INDEX_CLEAR_VALUE,0x0C20,12954,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_INDEX_CLEAR_VALUE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INDEX_MODE
	CompareConstant(GL_INDEX_MODE,0x0C30,12955,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_INDEX_MODE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INDEX_WRITEMASK
	CompareConstant(GL_INDEX_WRITEMASK,0x0C21,12956,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_INDEX_WRITEMASK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MODELVIEW_MATRIX
	CompareConstant(GL_MODELVIEW_MATRIX,0x0BA6,12957,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_MODELVIEW_MATRIX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MODELVIEW_STACK_DEPTH
	CompareConstant(GL_MODELVIEW_STACK_DEPTH,0x0BA3,12958,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_MODELVIEW_STACK_DEPTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_NAME_STACK_DEPTH
	CompareConstant(GL_NAME_STACK_DEPTH,0x0D70,12959,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_NAME_STACK_DEPTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PROJECTION_MATRIX
	CompareConstant(GL_PROJECTION_MATRIX,0x0BA7,12960,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_PROJECTION_MATRIX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PROJECTION_STACK_DEPTH
	CompareConstant(GL_PROJECTION_STACK_DEPTH,0x0BA4,12961,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_PROJECTION_STACK_DEPTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RENDER_MODE
	CompareConstant(GL_RENDER_MODE,0x0C40,12962,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_RENDER_MODE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RGBA_MODE
	CompareConstant(GL_RGBA_MODE,0x0C31,12963,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_RGBA_MODE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_MATRIX
	CompareConstant(GL_TEXTURE_MATRIX,0x0BA8,12964,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_MATRIX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_STACK_DEPTH
	CompareConstant(GL_TEXTURE_STACK_DEPTH,0x0BA5,12965,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_STACK_DEPTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VIEWPORT
	CompareConstant(GL_VIEWPORT,0x0BA2,12966,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_VIEWPORT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_AUTO_NORMAL
	CompareConstant(GL_AUTO_NORMAL,0x0D80,12967,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_AUTO_NORMAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAP1_COLOR_4
	CompareConstant(GL_MAP1_COLOR_4,0x0D90,12968,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_MAP1_COLOR_4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAP1_INDEX
	CompareConstant(GL_MAP1_INDEX,0x0D91,12969,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_MAP1_INDEX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAP1_NORMAL
	CompareConstant(GL_MAP1_NORMAL,0x0D92,12970,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_MAP1_NORMAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAP1_TEXTURE_COORD_1
	CompareConstant(GL_MAP1_TEXTURE_COORD_1,0x0D93,12971,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_MAP1_TEXTURE_COORD_1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAP1_TEXTURE_COORD_2
	CompareConstant(GL_MAP1_TEXTURE_COORD_2,0x0D94,12972,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_MAP1_TEXTURE_COORD_2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAP1_TEXTURE_COORD_3
	CompareConstant(GL_MAP1_TEXTURE_COORD_3,0x0D95,12973,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_MAP1_TEXTURE_COORD_3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAP1_TEXTURE_COORD_4
	CompareConstant(GL_MAP1_TEXTURE_COORD_4,0x0D96,12974,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_MAP1_TEXTURE_COORD_4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAP1_VERTEX_3
	CompareConstant(GL_MAP1_VERTEX_3,0x0D97,12975,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_MAP1_VERTEX_3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAP1_VERTEX_4
	CompareConstant(GL_MAP1_VERTEX_4,0x0D98,12976,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_MAP1_VERTEX_4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAP2_COLOR_4
	CompareConstant(GL_MAP2_COLOR_4,0x0DB0,12977,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_MAP2_COLOR_4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAP2_INDEX
	CompareConstant(GL_MAP2_INDEX,0x0DB1,12978,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_MAP2_INDEX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAP2_NORMAL
	CompareConstant(GL_MAP2_NORMAL,0x0DB2,12979,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_MAP2_NORMAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAP2_TEXTURE_COORD_1
	CompareConstant(GL_MAP2_TEXTURE_COORD_1,0x0DB3,12980,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_MAP2_TEXTURE_COORD_1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAP2_TEXTURE_COORD_2
	CompareConstant(GL_MAP2_TEXTURE_COORD_2,0x0DB4,12981,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_MAP2_TEXTURE_COORD_2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAP2_TEXTURE_COORD_3
	CompareConstant(GL_MAP2_TEXTURE_COORD_3,0x0DB5,12982,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_MAP2_TEXTURE_COORD_3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAP2_TEXTURE_COORD_4
	CompareConstant(GL_MAP2_TEXTURE_COORD_4,0x0DB6,12983,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_MAP2_TEXTURE_COORD_4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAP2_VERTEX_3
	CompareConstant(GL_MAP2_VERTEX_3,0x0DB7,12984,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_MAP2_VERTEX_3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAP2_VERTEX_4
	CompareConstant(GL_MAP2_VERTEX_4,0x0DB8,12985,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_MAP2_VERTEX_4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAP1_GRID_DOMAIN
	CompareConstant(GL_MAP1_GRID_DOMAIN,0x0DD0,12986,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_MAP1_GRID_DOMAIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAP1_GRID_SEGMENTS
	CompareConstant(GL_MAP1_GRID_SEGMENTS,0x0DD1,12987,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_MAP1_GRID_SEGMENTS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAP2_GRID_DOMAIN
	CompareConstant(GL_MAP2_GRID_DOMAIN,0x0DD2,12988,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_MAP2_GRID_DOMAIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAP2_GRID_SEGMENTS
	CompareConstant(GL_MAP2_GRID_SEGMENTS,0x0DD3,12989,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_MAP2_GRID_SEGMENTS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COEFF
	CompareConstant(GL_COEFF,0x0A00,12990,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_COEFF\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ORDER
	CompareConstant(GL_ORDER,0x0A01,12991,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_ORDER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DOMAIN
	CompareConstant(GL_DOMAIN,0x0A02,12992,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_DOMAIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PERSPECTIVE_CORRECTION_HINT
	CompareConstant(GL_PERSPECTIVE_CORRECTION_HINT,0x0C50,12993,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_PERSPECTIVE_CORRECTION_HINT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POINT_SMOOTH_HINT
	CompareConstant(GL_POINT_SMOOTH_HINT,0x0C51,12994,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_POINT_SMOOTH_HINT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LINE_SMOOTH_HINT
	CompareConstant(GL_LINE_SMOOTH_HINT,0x0C52,12995,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_LINE_SMOOTH_HINT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POLYGON_SMOOTH_HINT
	CompareConstant(GL_POLYGON_SMOOTH_HINT,0x0C53,12996,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_POLYGON_SMOOTH_HINT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FOG_HINT
	CompareConstant(GL_FOG_HINT,0x0C54,12997,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_FOG_HINT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DONT_CARE
	CompareConstant(GL_DONT_CARE,0x1100,12998,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_DONT_CARE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FASTEST
	CompareConstant(GL_FASTEST,0x1101,12999,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_FASTEST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_NICEST
	CompareConstant(GL_NICEST,0x1102,13000,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_NICEST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SCISSOR_BOX
	CompareConstant(GL_SCISSOR_BOX,0x0C10,13001,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_SCISSOR_BOX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SCISSOR_TEST
	CompareConstant(GL_SCISSOR_TEST,0x0C11,13002,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_SCISSOR_TEST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAP_COLOR
	CompareConstant(GL_MAP_COLOR,0x0D10,13003,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_MAP_COLOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAP_STENCIL
	CompareConstant(GL_MAP_STENCIL,0x0D11,13004,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_MAP_STENCIL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INDEX_SHIFT
	CompareConstant(GL_INDEX_SHIFT,0x0D12,13005,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_INDEX_SHIFT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INDEX_OFFSET
	CompareConstant(GL_INDEX_OFFSET,0x0D13,13006,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_INDEX_OFFSET\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RED_SCALE
	CompareConstant(GL_RED_SCALE,0x0D14,13007,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_RED_SCALE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RED_BIAS
	CompareConstant(GL_RED_BIAS,0x0D15,13008,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_RED_BIAS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_GREEN_SCALE
	CompareConstant(GL_GREEN_SCALE,0x0D18,13009,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_GREEN_SCALE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_GREEN_BIAS
	CompareConstant(GL_GREEN_BIAS,0x0D19,13010,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_GREEN_BIAS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BLUE_SCALE
	CompareConstant(GL_BLUE_SCALE,0x0D1A,13011,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_BLUE_SCALE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BLUE_BIAS
	CompareConstant(GL_BLUE_BIAS,0x0D1B,13012,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_BLUE_BIAS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ALPHA_SCALE
	CompareConstant(GL_ALPHA_SCALE,0x0D1C,13013,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_ALPHA_SCALE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ALPHA_BIAS
	CompareConstant(GL_ALPHA_BIAS,0x0D1D,13014,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_ALPHA_BIAS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DEPTH_SCALE
	CompareConstant(GL_DEPTH_SCALE,0x0D1E,13015,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_DEPTH_SCALE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DEPTH_BIAS
	CompareConstant(GL_DEPTH_BIAS,0x0D1F,13016,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_DEPTH_BIAS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PIXEL_MAP_S_TO_S_SIZE
	CompareConstant(GL_PIXEL_MAP_S_TO_S_SIZE,0x0CB1,13017,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_PIXEL_MAP_S_TO_S_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PIXEL_MAP_I_TO_I_SIZE
	CompareConstant(GL_PIXEL_MAP_I_TO_I_SIZE,0x0CB0,13018,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_PIXEL_MAP_I_TO_I_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PIXEL_MAP_I_TO_R_SIZE
	CompareConstant(GL_PIXEL_MAP_I_TO_R_SIZE,0x0CB2,13019,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_PIXEL_MAP_I_TO_R_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PIXEL_MAP_I_TO_G_SIZE
	CompareConstant(GL_PIXEL_MAP_I_TO_G_SIZE,0x0CB3,13020,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_PIXEL_MAP_I_TO_G_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PIXEL_MAP_I_TO_B_SIZE
	CompareConstant(GL_PIXEL_MAP_I_TO_B_SIZE,0x0CB4,13021,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_PIXEL_MAP_I_TO_B_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PIXEL_MAP_I_TO_A_SIZE
	CompareConstant(GL_PIXEL_MAP_I_TO_A_SIZE,0x0CB5,13022,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_PIXEL_MAP_I_TO_A_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PIXEL_MAP_R_TO_R_SIZE
	CompareConstant(GL_PIXEL_MAP_R_TO_R_SIZE,0x0CB6,13023,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_PIXEL_MAP_R_TO_R_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PIXEL_MAP_G_TO_G_SIZE
	CompareConstant(GL_PIXEL_MAP_G_TO_G_SIZE,0x0CB7,13024,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_PIXEL_MAP_G_TO_G_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PIXEL_MAP_B_TO_B_SIZE
	CompareConstant(GL_PIXEL_MAP_B_TO_B_SIZE,0x0CB8,13025,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_PIXEL_MAP_B_TO_B_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PIXEL_MAP_A_TO_A_SIZE
	CompareConstant(GL_PIXEL_MAP_A_TO_A_SIZE,0x0CB9,13026,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_PIXEL_MAP_A_TO_A_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PIXEL_MAP_S_TO_S
	CompareConstant(GL_PIXEL_MAP_S_TO_S,0x0C71,13027,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_PIXEL_MAP_S_TO_S\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PIXEL_MAP_I_TO_I
	CompareConstant(GL_PIXEL_MAP_I_TO_I,0x0C70,13028,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_PIXEL_MAP_I_TO_I\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PIXEL_MAP_I_TO_R
	CompareConstant(GL_PIXEL_MAP_I_TO_R,0x0C72,13029,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_PIXEL_MAP_I_TO_R\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PIXEL_MAP_I_TO_G
	CompareConstant(GL_PIXEL_MAP_I_TO_G,0x0C73,13030,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_PIXEL_MAP_I_TO_G\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PIXEL_MAP_I_TO_B
	CompareConstant(GL_PIXEL_MAP_I_TO_B,0x0C74,13031,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_PIXEL_MAP_I_TO_B\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PIXEL_MAP_I_TO_A
	CompareConstant(GL_PIXEL_MAP_I_TO_A,0x0C75,13032,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_PIXEL_MAP_I_TO_A\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PIXEL_MAP_R_TO_R
	CompareConstant(GL_PIXEL_MAP_R_TO_R,0x0C76,13033,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_PIXEL_MAP_R_TO_R\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PIXEL_MAP_G_TO_G
	CompareConstant(GL_PIXEL_MAP_G_TO_G,0x0C77,13034,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_PIXEL_MAP_G_TO_G\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PIXEL_MAP_B_TO_B
	CompareConstant(GL_PIXEL_MAP_B_TO_B,0x0C78,13035,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_PIXEL_MAP_B_TO_B\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PIXEL_MAP_A_TO_A
	CompareConstant(GL_PIXEL_MAP_A_TO_A,0x0C79,13036,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_PIXEL_MAP_A_TO_A\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PACK_ALIGNMENT
	CompareConstant(GL_PACK_ALIGNMENT,0x0D05,13037,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_PACK_ALIGNMENT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PACK_LSB_FIRST
	CompareConstant(GL_PACK_LSB_FIRST,0x0D01,13038,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_PACK_LSB_FIRST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PACK_ROW_LENGTH
	CompareConstant(GL_PACK_ROW_LENGTH,0x0D02,13039,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_PACK_ROW_LENGTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PACK_SKIP_PIXELS
	CompareConstant(GL_PACK_SKIP_PIXELS,0x0D04,13040,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_PACK_SKIP_PIXELS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PACK_SKIP_ROWS
	CompareConstant(GL_PACK_SKIP_ROWS,0x0D03,13041,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_PACK_SKIP_ROWS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PACK_SWAP_BYTES
	CompareConstant(GL_PACK_SWAP_BYTES,0x0D00,13042,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_PACK_SWAP_BYTES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_UNPACK_ALIGNMENT
	CompareConstant(GL_UNPACK_ALIGNMENT,0x0CF5,13043,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_UNPACK_ALIGNMENT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_UNPACK_LSB_FIRST
	CompareConstant(GL_UNPACK_LSB_FIRST,0x0CF1,13044,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_UNPACK_LSB_FIRST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_UNPACK_ROW_LENGTH
	CompareConstant(GL_UNPACK_ROW_LENGTH,0x0CF2,13045,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_UNPACK_ROW_LENGTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_UNPACK_SKIP_PIXELS
	CompareConstant(GL_UNPACK_SKIP_PIXELS,0x0CF4,13046,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_UNPACK_SKIP_PIXELS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_UNPACK_SKIP_ROWS
	CompareConstant(GL_UNPACK_SKIP_ROWS,0x0CF3,13047,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_UNPACK_SKIP_ROWS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_UNPACK_SWAP_BYTES
	CompareConstant(GL_UNPACK_SWAP_BYTES,0x0CF0,13048,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_UNPACK_SWAP_BYTES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ZOOM_X
	CompareConstant(GL_ZOOM_X,0x0D16,13049,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_ZOOM_X\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ZOOM_Y
	CompareConstant(GL_ZOOM_Y,0x0D17,13050,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_ZOOM_Y\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_ENV
	CompareConstant(GL_TEXTURE_ENV,0x2300,13051,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_ENV\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_ENV_MODE
	CompareConstant(GL_TEXTURE_ENV_MODE,0x2200,13052,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_ENV_MODE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_1D
	CompareConstant(GL_TEXTURE_1D,0x0DE0,13053,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_1D\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_2D
	CompareConstant(GL_TEXTURE_2D,0x0DE1,13054,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_2D\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_WRAP_S
	CompareConstant(GL_TEXTURE_WRAP_S,0x2802,13055,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_WRAP_S\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_WRAP_T
	CompareConstant(GL_TEXTURE_WRAP_T,0x2803,13056,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_WRAP_T\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_MAG_FILTER
	CompareConstant(GL_TEXTURE_MAG_FILTER,0x2800,13057,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_MAG_FILTER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_MIN_FILTER
	CompareConstant(GL_TEXTURE_MIN_FILTER,0x2801,13058,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_MIN_FILTER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_ENV_COLOR
	CompareConstant(GL_TEXTURE_ENV_COLOR,0x2201,13059,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_ENV_COLOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_GEN_S
	CompareConstant(GL_TEXTURE_GEN_S,0x0C60,13060,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_GEN_S\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_GEN_T
	CompareConstant(GL_TEXTURE_GEN_T,0x0C61,13061,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_GEN_T\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_GEN_MODE
	CompareConstant(GL_TEXTURE_GEN_MODE,0x2500,13062,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_GEN_MODE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_BORDER_COLOR
	CompareConstant(GL_TEXTURE_BORDER_COLOR,0x1004,13063,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_BORDER_COLOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_WIDTH
	CompareConstant(GL_TEXTURE_WIDTH,0x1000,13064,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_WIDTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_HEIGHT
	CompareConstant(GL_TEXTURE_HEIGHT,0x1001,13065,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_HEIGHT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_BORDER
	CompareConstant(GL_TEXTURE_BORDER,0x1005,13066,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_BORDER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_COMPONENTS
	CompareConstant(GL_TEXTURE_COMPONENTS,0x1003,13067,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_COMPONENTS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_RED_SIZE
	CompareConstant(GL_TEXTURE_RED_SIZE,0x805C,13068,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_RED_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_GREEN_SIZE
	CompareConstant(GL_TEXTURE_GREEN_SIZE,0x805D,13069,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_GREEN_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_BLUE_SIZE
	CompareConstant(GL_TEXTURE_BLUE_SIZE,0x805E,13070,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_BLUE_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_ALPHA_SIZE
	CompareConstant(GL_TEXTURE_ALPHA_SIZE,0x805F,13071,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_ALPHA_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_LUMINANCE_SIZE
	CompareConstant(GL_TEXTURE_LUMINANCE_SIZE,0x8060,13072,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_LUMINANCE_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_INTENSITY_SIZE
	CompareConstant(GL_TEXTURE_INTENSITY_SIZE,0x8061,13073,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_INTENSITY_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_NEAREST_MIPMAP_NEAREST
	CompareConstant(GL_NEAREST_MIPMAP_NEAREST,0x2700,13074,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_NEAREST_MIPMAP_NEAREST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_NEAREST_MIPMAP_LINEAR
	CompareConstant(GL_NEAREST_MIPMAP_LINEAR,0x2702,13075,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_NEAREST_MIPMAP_LINEAR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LINEAR_MIPMAP_NEAREST
	CompareConstant(GL_LINEAR_MIPMAP_NEAREST,0x2701,13076,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_LINEAR_MIPMAP_NEAREST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LINEAR_MIPMAP_LINEAR
	CompareConstant(GL_LINEAR_MIPMAP_LINEAR,0x2703,13077,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_LINEAR_MIPMAP_LINEAR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OBJECT_LINEAR
	CompareConstant(GL_OBJECT_LINEAR,0x2401,13078,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_OBJECT_LINEAR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OBJECT_PLANE
	CompareConstant(GL_OBJECT_PLANE,0x2501,13079,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_OBJECT_PLANE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EYE_LINEAR
	CompareConstant(GL_EYE_LINEAR,0x2400,13080,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_EYE_LINEAR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EYE_PLANE
	CompareConstant(GL_EYE_PLANE,0x2502,13081,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_EYE_PLANE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SPHERE_MAP
	CompareConstant(GL_SPHERE_MAP,0x2402,13082,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_SPHERE_MAP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DECAL
	CompareConstant(GL_DECAL,0x2101,13083,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_DECAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MODULATE
	CompareConstant(GL_MODULATE,0x2100,13084,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_MODULATE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_NEAREST
	CompareConstant(GL_NEAREST,0x2600,13085,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_NEAREST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_REPEAT
	CompareConstant(GL_REPEAT,0x2901,13086,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_REPEAT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CLAMP
	CompareConstant(GL_CLAMP,0x2900,13087,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_CLAMP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_S
	CompareConstant(GL_S,0x2000,13088,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_S\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_T
	CompareConstant(GL_T,0x2001,13089,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_T\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_R
	CompareConstant(GL_R,0x2002,13090,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_R\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_Q
	CompareConstant(GL_Q,0x2003,13091,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_Q\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_GEN_R
	CompareConstant(GL_TEXTURE_GEN_R,0x0C62,13092,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_GEN_R\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_GEN_Q
	CompareConstant(GL_TEXTURE_GEN_Q,0x0C63,13093,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_GEN_Q\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VENDOR
	CompareConstant(GL_VENDOR,0x1F00,13094,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_VENDOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RENDERER
	CompareConstant(GL_RENDERER,0x1F01,13095,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_RENDERER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERSION
	CompareConstant(GL_VERSION,0x1F02,13096,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_VERSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EXTENSIONS
	CompareConstant(GL_EXTENSIONS,0x1F03,13097,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_EXTENSIONS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_NO_ERROR
	CompareConstant(GL_NO_ERROR,0x0,13098,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_NO_ERROR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INVALID_ENUM
	CompareConstant(GL_INVALID_ENUM,0x0500,13099,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_INVALID_ENUM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INVALID_VALUE
	CompareConstant(GL_INVALID_VALUE,0x0501,13100,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_INVALID_VALUE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INVALID_OPERATION
	CompareConstant(GL_INVALID_OPERATION,0x0502,13101,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_INVALID_OPERATION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_STACK_OVERFLOW
	CompareConstant(GL_STACK_OVERFLOW,0x0503,13102,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_STACK_OVERFLOW\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_STACK_UNDERFLOW
	CompareConstant(GL_STACK_UNDERFLOW,0x0504,13103,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_STACK_UNDERFLOW\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OUT_OF_MEMORY
	CompareConstant(GL_OUT_OF_MEMORY,0x0505,13104,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_OUT_OF_MEMORY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CURRENT_BIT
	CompareConstant(GL_CURRENT_BIT,0x00000001,13105,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_CURRENT_BIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POINT_BIT
	CompareConstant(GL_POINT_BIT,0x00000002,13106,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_POINT_BIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LINE_BIT
	CompareConstant(GL_LINE_BIT,0x00000004,13107,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_LINE_BIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POLYGON_BIT
	CompareConstant(GL_POLYGON_BIT,0x00000008,13108,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_POLYGON_BIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POLYGON_STIPPLE_BIT
	CompareConstant(GL_POLYGON_STIPPLE_BIT,0x00000010,13109,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_POLYGON_STIPPLE_BIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PIXEL_MODE_BIT
	CompareConstant(GL_PIXEL_MODE_BIT,0x00000020,13110,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_PIXEL_MODE_BIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LIGHTING_BIT
	CompareConstant(GL_LIGHTING_BIT,0x00000040,13111,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_LIGHTING_BIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FOG_BIT
	CompareConstant(GL_FOG_BIT,0x00000080,13112,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_FOG_BIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DEPTH_BUFFER_BIT
	CompareConstant(GL_DEPTH_BUFFER_BIT,0x00000100,13113,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_DEPTH_BUFFER_BIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ACCUM_BUFFER_BIT
	CompareConstant(GL_ACCUM_BUFFER_BIT,0x00000200,13114,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_ACCUM_BUFFER_BIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_STENCIL_BUFFER_BIT
	CompareConstant(GL_STENCIL_BUFFER_BIT,0x00000400,13115,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_STENCIL_BUFFER_BIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VIEWPORT_BIT
	CompareConstant(GL_VIEWPORT_BIT,0x00000800,13116,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_VIEWPORT_BIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TRANSFORM_BIT
	CompareConstant(GL_TRANSFORM_BIT,0x00001000,13117,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TRANSFORM_BIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ENABLE_BIT
	CompareConstant(GL_ENABLE_BIT,0x00002000,13118,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_ENABLE_BIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_BUFFER_BIT
	CompareConstant(GL_COLOR_BUFFER_BIT,0x00004000,13119,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_BUFFER_BIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_HINT_BIT
	CompareConstant(GL_HINT_BIT,0x00008000,13120,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_HINT_BIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_EVAL_BIT
	CompareConstant(GL_EVAL_BIT,0x00010000,13121,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_EVAL_BIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LIST_BIT
	CompareConstant(GL_LIST_BIT,0x00020000,13122,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_LIST_BIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_BIT
	CompareConstant(GL_TEXTURE_BIT,0x00040000,13123,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_BIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SCISSOR_BIT
	CompareConstant(GL_SCISSOR_BIT,0x00080000,13124,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_SCISSOR_BIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ALL_ATTRIB_BITS
	CompareConstant(GL_ALL_ATTRIB_BITS,0x000FFFFF,13125,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_ALL_ATTRIB_BITS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PROXY_TEXTURE_1D
	CompareConstant(GL_PROXY_TEXTURE_1D,0x8063,13126,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_PROXY_TEXTURE_1D\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PROXY_TEXTURE_2D
	CompareConstant(GL_PROXY_TEXTURE_2D,0x8064,13127,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_PROXY_TEXTURE_2D\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_PRIORITY
	CompareConstant(GL_TEXTURE_PRIORITY,0x8066,13128,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_PRIORITY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_RESIDENT
	CompareConstant(GL_TEXTURE_RESIDENT,0x8067,13129,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_RESIDENT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_BINDING_1D
	CompareConstant(GL_TEXTURE_BINDING_1D,0x8068,13130,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_BINDING_1D\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_BINDING_2D
	CompareConstant(GL_TEXTURE_BINDING_2D,0x8069,13131,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_BINDING_2D\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_INTERNAL_FORMAT
	CompareConstant(GL_TEXTURE_INTERNAL_FORMAT,0x1003,13132,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_INTERNAL_FORMAT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ALPHA4
	CompareConstant(GL_ALPHA4,0x803B,13133,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_ALPHA4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ALPHA8
	CompareConstant(GL_ALPHA8,0x803C,13134,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_ALPHA8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ALPHA12
	CompareConstant(GL_ALPHA12,0x803D,13135,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_ALPHA12\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ALPHA16
	CompareConstant(GL_ALPHA16,0x803E,13136,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_ALPHA16\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LUMINANCE4
	CompareConstant(GL_LUMINANCE4,0x803F,13137,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_LUMINANCE4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LUMINANCE8
	CompareConstant(GL_LUMINANCE8,0x8040,13138,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_LUMINANCE8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LUMINANCE12
	CompareConstant(GL_LUMINANCE12,0x8041,13139,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_LUMINANCE12\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LUMINANCE16
	CompareConstant(GL_LUMINANCE16,0x8042,13140,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_LUMINANCE16\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LUMINANCE4_ALPHA4
	CompareConstant(GL_LUMINANCE4_ALPHA4,0x8043,13141,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_LUMINANCE4_ALPHA4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LUMINANCE6_ALPHA2
	CompareConstant(GL_LUMINANCE6_ALPHA2,0x8044,13142,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_LUMINANCE6_ALPHA2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LUMINANCE8_ALPHA8
	CompareConstant(GL_LUMINANCE8_ALPHA8,0x8045,13143,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_LUMINANCE8_ALPHA8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LUMINANCE12_ALPHA4
	CompareConstant(GL_LUMINANCE12_ALPHA4,0x8046,13144,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_LUMINANCE12_ALPHA4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LUMINANCE12_ALPHA12
	CompareConstant(GL_LUMINANCE12_ALPHA12,0x8047,13145,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_LUMINANCE12_ALPHA12\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LUMINANCE16_ALPHA16
	CompareConstant(GL_LUMINANCE16_ALPHA16,0x8048,13146,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_LUMINANCE16_ALPHA16\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INTENSITY
	CompareConstant(GL_INTENSITY,0x8049,13147,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_INTENSITY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INTENSITY4
	CompareConstant(GL_INTENSITY4,0x804A,13148,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_INTENSITY4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INTENSITY8
	CompareConstant(GL_INTENSITY8,0x804B,13149,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_INTENSITY8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INTENSITY12
	CompareConstant(GL_INTENSITY12,0x804C,13150,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_INTENSITY12\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INTENSITY16
	CompareConstant(GL_INTENSITY16,0x804D,13151,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_INTENSITY16\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_R3_G3_B2
	CompareConstant(GL_R3_G3_B2,0x2A10,13152,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_R3_G3_B2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RGB4
	CompareConstant(GL_RGB4,0x804F,13153,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_RGB4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RGB5
	CompareConstant(GL_RGB5,0x8050,13154,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_RGB5\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RGB8
	CompareConstant(GL_RGB8,0x8051,13155,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_RGB8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RGB10
	CompareConstant(GL_RGB10,0x8052,13156,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_RGB10\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RGB12
	CompareConstant(GL_RGB12,0x8053,13157,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_RGB12\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RGB16
	CompareConstant(GL_RGB16,0x8054,13158,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_RGB16\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RGBA2
	CompareConstant(GL_RGBA2,0x8055,13159,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_RGBA2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RGBA4
	CompareConstant(GL_RGBA4,0x8056,13160,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_RGBA4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RGB5_A1
	CompareConstant(GL_RGB5_A1,0x8057,13161,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_RGB5_A1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RGBA8
	CompareConstant(GL_RGBA8,0x8058,13162,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_RGBA8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RGB10_A2
	CompareConstant(GL_RGB10_A2,0x8059,13163,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_RGB10_A2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RGBA12
	CompareConstant(GL_RGBA12,0x805A,13164,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_RGBA12\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RGBA16
	CompareConstant(GL_RGBA16,0x805B,13165,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_RGBA16\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CLIENT_PIXEL_STORE_BIT
	CompareConstant(GL_CLIENT_PIXEL_STORE_BIT,0x00000001,13166,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_CLIENT_PIXEL_STORE_BIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CLIENT_VERTEX_ARRAY_BIT
	CompareConstant(GL_CLIENT_VERTEX_ARRAY_BIT,0x00000002,13167,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_CLIENT_VERTEX_ARRAY_BIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ALL_CLIENT_ATTRIB_BITS
	CompareConstant(GL_ALL_CLIENT_ATTRIB_BITS,0xFFFFFFFF,13168,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_ALL_CLIENT_ATTRIB_BITS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CLIENT_ALL_ATTRIB_BITS
	CompareConstant(GL_CLIENT_ALL_ATTRIB_BITS,0xFFFFFFFF,13169,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_CLIENT_ALL_ATTRIB_BITS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RESCALE_NORMAL
	CompareConstant(GL_RESCALE_NORMAL,0x803A,13170,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_RESCALE_NORMAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CLAMP_TO_EDGE
	CompareConstant(GL_CLAMP_TO_EDGE,0x812F,13171,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_CLAMP_TO_EDGE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_ELEMENTS_VERTICES
	CompareConstant(GL_MAX_ELEMENTS_VERTICES,0x80E8,13172,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_ELEMENTS_VERTICES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_ELEMENTS_INDICES
	CompareConstant(GL_MAX_ELEMENTS_INDICES,0x80E9,13173,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_ELEMENTS_INDICES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BGR
	CompareConstant(GL_BGR,0x80E0,13174,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_BGR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BGRA
	CompareConstant(GL_BGRA,0x80E1,13175,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_BGRA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_UNSIGNED_BYTE_3_3_2
	CompareConstant(GL_UNSIGNED_BYTE_3_3_2,0x8032,13176,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_UNSIGNED_BYTE_3_3_2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_UNSIGNED_BYTE_2_3_3_REV
	CompareConstant(GL_UNSIGNED_BYTE_2_3_3_REV,0x8362,13177,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_UNSIGNED_BYTE_2_3_3_REV\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_UNSIGNED_SHORT_5_6_5
	CompareConstant(GL_UNSIGNED_SHORT_5_6_5,0x8363,13178,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_UNSIGNED_SHORT_5_6_5\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_UNSIGNED_SHORT_5_6_5_REV
	CompareConstant(GL_UNSIGNED_SHORT_5_6_5_REV,0x8364,13179,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_UNSIGNED_SHORT_5_6_5_REV\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_UNSIGNED_SHORT_4_4_4_4
	CompareConstant(GL_UNSIGNED_SHORT_4_4_4_4,0x8033,13180,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_UNSIGNED_SHORT_4_4_4_4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_UNSIGNED_SHORT_4_4_4_4_REV
	CompareConstant(GL_UNSIGNED_SHORT_4_4_4_4_REV,0x8365,13181,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_UNSIGNED_SHORT_4_4_4_4_REV\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_UNSIGNED_SHORT_5_5_5_1
	CompareConstant(GL_UNSIGNED_SHORT_5_5_5_1,0x8034,13182,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_UNSIGNED_SHORT_5_5_5_1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_UNSIGNED_SHORT_1_5_5_5_REV
	CompareConstant(GL_UNSIGNED_SHORT_1_5_5_5_REV,0x8366,13183,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_UNSIGNED_SHORT_1_5_5_5_REV\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_UNSIGNED_INT_8_8_8_8
	CompareConstant(GL_UNSIGNED_INT_8_8_8_8,0x8035,13184,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_UNSIGNED_INT_8_8_8_8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_UNSIGNED_INT_8_8_8_8_REV
	CompareConstant(GL_UNSIGNED_INT_8_8_8_8_REV,0x8367,13185,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_UNSIGNED_INT_8_8_8_8_REV\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_UNSIGNED_INT_10_10_10_2
	CompareConstant(GL_UNSIGNED_INT_10_10_10_2,0x8036,13186,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_UNSIGNED_INT_10_10_10_2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_UNSIGNED_INT_2_10_10_10_REV
	CompareConstant(GL_UNSIGNED_INT_2_10_10_10_REV,0x8368,13187,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_UNSIGNED_INT_2_10_10_10_REV\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_LIGHT_MODEL_COLOR_CONTROL
	CompareConstant(GL_LIGHT_MODEL_COLOR_CONTROL,0x81F8,13188,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_LIGHT_MODEL_COLOR_CONTROL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SINGLE_COLOR
	CompareConstant(GL_SINGLE_COLOR,0x81F9,13189,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_SINGLE_COLOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SEPARATE_SPECULAR_COLOR
	CompareConstant(GL_SEPARATE_SPECULAR_COLOR,0x81FA,13190,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_SEPARATE_SPECULAR_COLOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_MIN_LOD
	CompareConstant(GL_TEXTURE_MIN_LOD,0x813A,13191,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_MIN_LOD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_MAX_LOD
	CompareConstant(GL_TEXTURE_MAX_LOD,0x813B,13192,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_MAX_LOD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_BASE_LEVEL
	CompareConstant(GL_TEXTURE_BASE_LEVEL,0x813C,13193,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_BASE_LEVEL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_MAX_LEVEL
	CompareConstant(GL_TEXTURE_MAX_LEVEL,0x813D,13194,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_MAX_LEVEL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SMOOTH_POINT_SIZE_RANGE
	CompareConstant(GL_SMOOTH_POINT_SIZE_RANGE,0x0B12,13195,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_SMOOTH_POINT_SIZE_RANGE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SMOOTH_POINT_SIZE_GRANULARITY
	CompareConstant(GL_SMOOTH_POINT_SIZE_GRANULARITY,0x0B13,13196,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_SMOOTH_POINT_SIZE_GRANULARITY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SMOOTH_LINE_WIDTH_RANGE
	CompareConstant(GL_SMOOTH_LINE_WIDTH_RANGE,0x0B22,13197,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_SMOOTH_LINE_WIDTH_RANGE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SMOOTH_LINE_WIDTH_GRANULARITY
	CompareConstant(GL_SMOOTH_LINE_WIDTH_GRANULARITY,0x0B23,13198,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_SMOOTH_LINE_WIDTH_GRANULARITY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ALIASED_POINT_SIZE_RANGE
	CompareConstant(GL_ALIASED_POINT_SIZE_RANGE,0x846D,13199,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_ALIASED_POINT_SIZE_RANGE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ALIASED_LINE_WIDTH_RANGE
	CompareConstant(GL_ALIASED_LINE_WIDTH_RANGE,0x846E,13200,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_ALIASED_LINE_WIDTH_RANGE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PACK_SKIP_IMAGES
	CompareConstant(GL_PACK_SKIP_IMAGES,0x806B,13201,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_PACK_SKIP_IMAGES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PACK_IMAGE_HEIGHT
	CompareConstant(GL_PACK_IMAGE_HEIGHT,0x806C,13202,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_PACK_IMAGE_HEIGHT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_UNPACK_SKIP_IMAGES
	CompareConstant(GL_UNPACK_SKIP_IMAGES,0x806D,13203,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_UNPACK_SKIP_IMAGES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_UNPACK_IMAGE_HEIGHT
	CompareConstant(GL_UNPACK_IMAGE_HEIGHT,0x806E,13204,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_UNPACK_IMAGE_HEIGHT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_3D
	CompareConstant(GL_TEXTURE_3D,0x806F,13205,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_3D\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PROXY_TEXTURE_3D
	CompareConstant(GL_PROXY_TEXTURE_3D,0x8070,13206,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_PROXY_TEXTURE_3D\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_DEPTH
	CompareConstant(GL_TEXTURE_DEPTH,0x8071,13207,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_DEPTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_WRAP_R
	CompareConstant(GL_TEXTURE_WRAP_R,0x8072,13208,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_WRAP_R\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_3D_TEXTURE_SIZE
	CompareConstant(GL_MAX_3D_TEXTURE_SIZE,0x8073,13209,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_3D_TEXTURE_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_BINDING_3D
	CompareConstant(GL_TEXTURE_BINDING_3D,0x806A,13210,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_BINDING_3D\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CONSTANT_COLOR
	CompareConstant(GL_CONSTANT_COLOR,0x8001,13211,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_CONSTANT_COLOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ONE_MINUS_CONSTANT_COLOR
	CompareConstant(GL_ONE_MINUS_CONSTANT_COLOR,0x8002,13212,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_ONE_MINUS_CONSTANT_COLOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CONSTANT_ALPHA
	CompareConstant(GL_CONSTANT_ALPHA,0x8003,13213,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_CONSTANT_ALPHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ONE_MINUS_CONSTANT_ALPHA
	CompareConstant(GL_ONE_MINUS_CONSTANT_ALPHA,0x8004,13214,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_ONE_MINUS_CONSTANT_ALPHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_TABLE
	CompareConstant(GL_COLOR_TABLE,0x80D0,13215,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_TABLE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POST_CONVOLUTION_COLOR_TABLE
	CompareConstant(GL_POST_CONVOLUTION_COLOR_TABLE,0x80D1,13216,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_POST_CONVOLUTION_COLOR_TABLE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POST_COLOR_MATRIX_COLOR_TABLE
	CompareConstant(GL_POST_COLOR_MATRIX_COLOR_TABLE,0x80D2,13217,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_POST_COLOR_MATRIX_COLOR_TABLE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PROXY_COLOR_TABLE
	CompareConstant(GL_PROXY_COLOR_TABLE,0x80D3,13218,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_PROXY_COLOR_TABLE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PROXY_POST_CONVOLUTION_COLOR_TABLE
	CompareConstant(GL_PROXY_POST_CONVOLUTION_COLOR_TABLE,0x80D4,13219,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_PROXY_POST_CONVOLUTION_COLOR_TABLE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PROXY_POST_COLOR_MATRIX_COLOR_TABLE
	CompareConstant(GL_PROXY_POST_COLOR_MATRIX_COLOR_TABLE,0x80D5,13220,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_PROXY_POST_COLOR_MATRIX_COLOR_TABLE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_TABLE_SCALE
	CompareConstant(GL_COLOR_TABLE_SCALE,0x80D6,13221,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_TABLE_SCALE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_TABLE_BIAS
	CompareConstant(GL_COLOR_TABLE_BIAS,0x80D7,13222,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_TABLE_BIAS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_TABLE_FORMAT
	CompareConstant(GL_COLOR_TABLE_FORMAT,0x80D8,13223,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_TABLE_FORMAT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_TABLE_WIDTH
	CompareConstant(GL_COLOR_TABLE_WIDTH,0x80D9,13224,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_TABLE_WIDTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_TABLE_RED_SIZE
	CompareConstant(GL_COLOR_TABLE_RED_SIZE,0x80DA,13225,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_TABLE_RED_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_TABLE_GREEN_SIZE
	CompareConstant(GL_COLOR_TABLE_GREEN_SIZE,0x80DB,13226,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_TABLE_GREEN_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_TABLE_BLUE_SIZE
	CompareConstant(GL_COLOR_TABLE_BLUE_SIZE,0x80DC,13227,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_TABLE_BLUE_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_TABLE_ALPHA_SIZE
	CompareConstant(GL_COLOR_TABLE_ALPHA_SIZE,0x80DD,13228,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_TABLE_ALPHA_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_TABLE_LUMINANCE_SIZE
	CompareConstant(GL_COLOR_TABLE_LUMINANCE_SIZE,0x80DE,13229,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_TABLE_LUMINANCE_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_TABLE_INTENSITY_SIZE
	CompareConstant(GL_COLOR_TABLE_INTENSITY_SIZE,0x80DF,13230,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_TABLE_INTENSITY_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CONVOLUTION_1D
	CompareConstant(GL_CONVOLUTION_1D,0x8010,13231,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_CONVOLUTION_1D\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CONVOLUTION_2D
	CompareConstant(GL_CONVOLUTION_2D,0x8011,13232,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_CONVOLUTION_2D\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SEPARABLE_2D
	CompareConstant(GL_SEPARABLE_2D,0x8012,13233,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_SEPARABLE_2D\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CONVOLUTION_BORDER_MODE
	CompareConstant(GL_CONVOLUTION_BORDER_MODE,0x8013,13234,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_CONVOLUTION_BORDER_MODE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CONVOLUTION_FILTER_SCALE
	CompareConstant(GL_CONVOLUTION_FILTER_SCALE,0x8014,13235,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_CONVOLUTION_FILTER_SCALE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CONVOLUTION_FILTER_BIAS
	CompareConstant(GL_CONVOLUTION_FILTER_BIAS,0x8015,13236,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_CONVOLUTION_FILTER_BIAS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_REDUCE
	CompareConstant(GL_REDUCE,0x8016,13237,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_REDUCE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CONVOLUTION_FORMAT
	CompareConstant(GL_CONVOLUTION_FORMAT,0x8017,13238,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_CONVOLUTION_FORMAT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CONVOLUTION_WIDTH
	CompareConstant(GL_CONVOLUTION_WIDTH,0x8018,13239,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_CONVOLUTION_WIDTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CONVOLUTION_HEIGHT
	CompareConstant(GL_CONVOLUTION_HEIGHT,0x8019,13240,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_CONVOLUTION_HEIGHT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_CONVOLUTION_WIDTH
	CompareConstant(GL_MAX_CONVOLUTION_WIDTH,0x801A,13241,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_CONVOLUTION_WIDTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_CONVOLUTION_HEIGHT
	CompareConstant(GL_MAX_CONVOLUTION_HEIGHT,0x801B,13242,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_CONVOLUTION_HEIGHT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POST_CONVOLUTION_RED_SCALE
	CompareConstant(GL_POST_CONVOLUTION_RED_SCALE,0x801C,13243,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_POST_CONVOLUTION_RED_SCALE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POST_CONVOLUTION_GREEN_SCALE
	CompareConstant(GL_POST_CONVOLUTION_GREEN_SCALE,0x801D,13244,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_POST_CONVOLUTION_GREEN_SCALE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POST_CONVOLUTION_BLUE_SCALE
	CompareConstant(GL_POST_CONVOLUTION_BLUE_SCALE,0x801E,13245,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_POST_CONVOLUTION_BLUE_SCALE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POST_CONVOLUTION_ALPHA_SCALE
	CompareConstant(GL_POST_CONVOLUTION_ALPHA_SCALE,0x801F,13246,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_POST_CONVOLUTION_ALPHA_SCALE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POST_CONVOLUTION_RED_BIAS
	CompareConstant(GL_POST_CONVOLUTION_RED_BIAS,0x8020,13247,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_POST_CONVOLUTION_RED_BIAS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POST_CONVOLUTION_GREEN_BIAS
	CompareConstant(GL_POST_CONVOLUTION_GREEN_BIAS,0x8021,13248,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_POST_CONVOLUTION_GREEN_BIAS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POST_CONVOLUTION_BLUE_BIAS
	CompareConstant(GL_POST_CONVOLUTION_BLUE_BIAS,0x8022,13249,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_POST_CONVOLUTION_BLUE_BIAS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POST_CONVOLUTION_ALPHA_BIAS
	CompareConstant(GL_POST_CONVOLUTION_ALPHA_BIAS,0x8023,13250,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_POST_CONVOLUTION_ALPHA_BIAS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CONSTANT_BORDER
	CompareConstant(GL_CONSTANT_BORDER,0x8151,13251,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_CONSTANT_BORDER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_REPLICATE_BORDER
	CompareConstant(GL_REPLICATE_BORDER,0x8153,13252,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_REPLICATE_BORDER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CONVOLUTION_BORDER_COLOR
	CompareConstant(GL_CONVOLUTION_BORDER_COLOR,0x8154,13253,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_CONVOLUTION_BORDER_COLOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_MATRIX
	CompareConstant(GL_COLOR_MATRIX,0x80B1,13254,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_MATRIX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_MATRIX_STACK_DEPTH
	CompareConstant(GL_COLOR_MATRIX_STACK_DEPTH,0x80B2,13255,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_COLOR_MATRIX_STACK_DEPTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_COLOR_MATRIX_STACK_DEPTH
	CompareConstant(GL_MAX_COLOR_MATRIX_STACK_DEPTH,0x80B3,13256,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_COLOR_MATRIX_STACK_DEPTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POST_COLOR_MATRIX_RED_SCALE
	CompareConstant(GL_POST_COLOR_MATRIX_RED_SCALE,0x80B4,13257,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_POST_COLOR_MATRIX_RED_SCALE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POST_COLOR_MATRIX_GREEN_SCALE
	CompareConstant(GL_POST_COLOR_MATRIX_GREEN_SCALE,0x80B5,13258,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_POST_COLOR_MATRIX_GREEN_SCALE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POST_COLOR_MATRIX_BLUE_SCALE
	CompareConstant(GL_POST_COLOR_MATRIX_BLUE_SCALE,0x80B6,13259,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_POST_COLOR_MATRIX_BLUE_SCALE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POST_COLOR_MATRIX_ALPHA_SCALE
	CompareConstant(GL_POST_COLOR_MATRIX_ALPHA_SCALE,0x80B7,13260,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_POST_COLOR_MATRIX_ALPHA_SCALE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POST_COLOR_MATRIX_RED_BIAS
	CompareConstant(GL_POST_COLOR_MATRIX_RED_BIAS,0x80B8,13261,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_POST_COLOR_MATRIX_RED_BIAS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POST_COLOR_MATRIX_GREEN_BIAS
	CompareConstant(GL_POST_COLOR_MATRIX_GREEN_BIAS,0x80B9,13262,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_POST_COLOR_MATRIX_GREEN_BIAS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POST_COLOR_MATRIX_BLUE_BIAS
	CompareConstant(GL_POST_COLOR_MATRIX_BLUE_BIAS,0x80BA,13263,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_POST_COLOR_MATRIX_BLUE_BIAS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_POST_COLOR_MATRIX_ALPHA_BIAS
	CompareConstant(GL_POST_COLOR_MATRIX_ALPHA_BIAS,0x80BB,13264,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_POST_COLOR_MATRIX_ALPHA_BIAS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_HISTOGRAM
	CompareConstant(GL_HISTOGRAM,0x8024,13265,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_HISTOGRAM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PROXY_HISTOGRAM
	CompareConstant(GL_PROXY_HISTOGRAM,0x8025,13266,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_PROXY_HISTOGRAM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_HISTOGRAM_WIDTH
	CompareConstant(GL_HISTOGRAM_WIDTH,0x8026,13267,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_HISTOGRAM_WIDTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_HISTOGRAM_FORMAT
	CompareConstant(GL_HISTOGRAM_FORMAT,0x8027,13268,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_HISTOGRAM_FORMAT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_HISTOGRAM_RED_SIZE
	CompareConstant(GL_HISTOGRAM_RED_SIZE,0x8028,13269,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_HISTOGRAM_RED_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_HISTOGRAM_GREEN_SIZE
	CompareConstant(GL_HISTOGRAM_GREEN_SIZE,0x8029,13270,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_HISTOGRAM_GREEN_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_HISTOGRAM_BLUE_SIZE
	CompareConstant(GL_HISTOGRAM_BLUE_SIZE,0x802A,13271,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_HISTOGRAM_BLUE_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_HISTOGRAM_ALPHA_SIZE
	CompareConstant(GL_HISTOGRAM_ALPHA_SIZE,0x802B,13272,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_HISTOGRAM_ALPHA_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_HISTOGRAM_LUMINANCE_SIZE
	CompareConstant(GL_HISTOGRAM_LUMINANCE_SIZE,0x802C,13273,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_HISTOGRAM_LUMINANCE_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_HISTOGRAM_SINK
	CompareConstant(GL_HISTOGRAM_SINK,0x802D,13274,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_HISTOGRAM_SINK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MINMAX
	CompareConstant(GL_MINMAX,0x802E,13275,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_MINMAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MINMAX_FORMAT
	CompareConstant(GL_MINMAX_FORMAT,0x802F,13276,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_MINMAX_FORMAT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MINMAX_SINK
	CompareConstant(GL_MINMAX_SINK,0x8030,13277,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_MINMAX_SINK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TABLE_TOO_LARGE
	CompareConstant(GL_TABLE_TOO_LARGE,0x8031,13278,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TABLE_TOO_LARGE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BLEND_EQUATION
	CompareConstant(GL_BLEND_EQUATION,0x8009,13279,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_BLEND_EQUATION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MIN
	CompareConstant(GL_MIN,0x8007,13280,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_MIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX
	CompareConstant(GL_MAX,0x8008,13281,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FUNC_ADD
	CompareConstant(GL_FUNC_ADD,0x8006,13282,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_FUNC_ADD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FUNC_SUBTRACT
	CompareConstant(GL_FUNC_SUBTRACT,0x800A,13283,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_FUNC_SUBTRACT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_FUNC_REVERSE_SUBTRACT
	CompareConstant(GL_FUNC_REVERSE_SUBTRACT,0x800B,13284,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_FUNC_REVERSE_SUBTRACT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_BLEND_COLOR
	CompareConstant(GL_BLEND_COLOR,0x8005,13285,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_BLEND_COLOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE0
	CompareConstant(GL_TEXTURE0,0x84C0,13286,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE0\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE1
	CompareConstant(GL_TEXTURE1,0x84C1,13287,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE2
	CompareConstant(GL_TEXTURE2,0x84C2,13288,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE3
	CompareConstant(GL_TEXTURE3,0x84C3,13289,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE4
	CompareConstant(GL_TEXTURE4,0x84C4,13290,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE5
	CompareConstant(GL_TEXTURE5,0x84C5,13291,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE5\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE6
	CompareConstant(GL_TEXTURE6,0x84C6,13292,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE6\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE7
	CompareConstant(GL_TEXTURE7,0x84C7,13293,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE7\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE8
	CompareConstant(GL_TEXTURE8,0x84C8,13294,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE9
	CompareConstant(GL_TEXTURE9,0x84C9,13295,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE9\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE10
	CompareConstant(GL_TEXTURE10,0x84CA,13296,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE10\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE11
	CompareConstant(GL_TEXTURE11,0x84CB,13297,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE11\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE12
	CompareConstant(GL_TEXTURE12,0x84CC,13298,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE12\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE13
	CompareConstant(GL_TEXTURE13,0x84CD,13299,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE13\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE14
	CompareConstant(GL_TEXTURE14,0x84CE,13300,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE14\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE15
	CompareConstant(GL_TEXTURE15,0x84CF,13301,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE15\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE16
	CompareConstant(GL_TEXTURE16,0x84D0,13302,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE16\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE17
	CompareConstant(GL_TEXTURE17,0x84D1,13303,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE17\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE18
	CompareConstant(GL_TEXTURE18,0x84D2,13304,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE18\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE19
	CompareConstant(GL_TEXTURE19,0x84D3,13305,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE19\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE20
	CompareConstant(GL_TEXTURE20,0x84D4,13306,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE20\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE21
	CompareConstant(GL_TEXTURE21,0x84D5,13307,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE21\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE22
	CompareConstant(GL_TEXTURE22,0x84D6,13308,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE22\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE23
	CompareConstant(GL_TEXTURE23,0x84D7,13309,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE23\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE24
	CompareConstant(GL_TEXTURE24,0x84D8,13310,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE24\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE25
	CompareConstant(GL_TEXTURE25,0x84D9,13311,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE25\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE26
	CompareConstant(GL_TEXTURE26,0x84DA,13312,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE26\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE27
	CompareConstant(GL_TEXTURE27,0x84DB,13313,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE27\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE28
	CompareConstant(GL_TEXTURE28,0x84DC,13314,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE28\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE29
	CompareConstant(GL_TEXTURE29,0x84DD,13315,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE29\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE30
	CompareConstant(GL_TEXTURE30,0x84DE,13316,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE30\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE31
	CompareConstant(GL_TEXTURE31,0x84DF,13317,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE31\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ACTIVE_TEXTURE
	CompareConstant(GL_ACTIVE_TEXTURE,0x84E0,13318,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_ACTIVE_TEXTURE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CLIENT_ACTIVE_TEXTURE
	CompareConstant(GL_CLIENT_ACTIVE_TEXTURE,0x84E1,13319,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_CLIENT_ACTIVE_TEXTURE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_TEXTURE_UNITS
	CompareConstant(GL_MAX_TEXTURE_UNITS,0x84E2,13320,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_TEXTURE_UNITS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_NORMAL_MAP
	CompareConstant(GL_NORMAL_MAP,0x8511,13321,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_NORMAL_MAP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_REFLECTION_MAP
	CompareConstant(GL_REFLECTION_MAP,0x8512,13322,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_REFLECTION_MAP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_CUBE_MAP
	CompareConstant(GL_TEXTURE_CUBE_MAP,0x8513,13323,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_CUBE_MAP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_BINDING_CUBE_MAP
	CompareConstant(GL_TEXTURE_BINDING_CUBE_MAP,0x8514,13324,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_BINDING_CUBE_MAP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_CUBE_MAP_POSITIVE_X
	CompareConstant(GL_TEXTURE_CUBE_MAP_POSITIVE_X,0x8515,13325,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_CUBE_MAP_POSITIVE_X\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_CUBE_MAP_NEGATIVE_X
	CompareConstant(GL_TEXTURE_CUBE_MAP_NEGATIVE_X,0x8516,13326,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_CUBE_MAP_NEGATIVE_X\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_CUBE_MAP_POSITIVE_Y
	CompareConstant(GL_TEXTURE_CUBE_MAP_POSITIVE_Y,0x8517,13327,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_CUBE_MAP_POSITIVE_Y\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_CUBE_MAP_NEGATIVE_Y
	CompareConstant(GL_TEXTURE_CUBE_MAP_NEGATIVE_Y,0x8518,13328,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_CUBE_MAP_NEGATIVE_Y\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_CUBE_MAP_POSITIVE_Z
	CompareConstant(GL_TEXTURE_CUBE_MAP_POSITIVE_Z,0x8519,13329,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_CUBE_MAP_POSITIVE_Z\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_CUBE_MAP_NEGATIVE_Z
	CompareConstant(GL_TEXTURE_CUBE_MAP_NEGATIVE_Z,0x851A,13330,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_CUBE_MAP_NEGATIVE_Z\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PROXY_TEXTURE_CUBE_MAP
	CompareConstant(GL_PROXY_TEXTURE_CUBE_MAP,0x851B,13331,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_PROXY_TEXTURE_CUBE_MAP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_CUBE_MAP_TEXTURE_SIZE
	CompareConstant(GL_MAX_CUBE_MAP_TEXTURE_SIZE,0x851C,13332,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_CUBE_MAP_TEXTURE_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COMPRESSED_ALPHA
	CompareConstant(GL_COMPRESSED_ALPHA,0x84E9,13333,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_COMPRESSED_ALPHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COMPRESSED_LUMINANCE
	CompareConstant(GL_COMPRESSED_LUMINANCE,0x84EA,13334,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_COMPRESSED_LUMINANCE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COMPRESSED_LUMINANCE_ALPHA
	CompareConstant(GL_COMPRESSED_LUMINANCE_ALPHA,0x84EB,13335,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_COMPRESSED_LUMINANCE_ALPHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COMPRESSED_INTENSITY
	CompareConstant(GL_COMPRESSED_INTENSITY,0x84EC,13336,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_COMPRESSED_INTENSITY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COMPRESSED_RGB
	CompareConstant(GL_COMPRESSED_RGB,0x84ED,13337,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_COMPRESSED_RGB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COMPRESSED_RGBA
	CompareConstant(GL_COMPRESSED_RGBA,0x84EE,13338,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_COMPRESSED_RGBA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_COMPRESSION_HINT
	CompareConstant(GL_TEXTURE_COMPRESSION_HINT,0x84EF,13339,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_COMPRESSION_HINT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_COMPRESSED_IMAGE_SIZE
	CompareConstant(GL_TEXTURE_COMPRESSED_IMAGE_SIZE,0x86A0,13340,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_COMPRESSED_IMAGE_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_COMPRESSED
	CompareConstant(GL_TEXTURE_COMPRESSED,0x86A1,13341,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE_COMPRESSED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_NUM_COMPRESSED_TEXTURE_FORMATS
	CompareConstant(GL_NUM_COMPRESSED_TEXTURE_FORMATS,0x86A2,13342,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_NUM_COMPRESSED_TEXTURE_FORMATS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COMPRESSED_TEXTURE_FORMATS
	CompareConstant(GL_COMPRESSED_TEXTURE_FORMATS,0x86A3,13343,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_COMPRESSED_TEXTURE_FORMATS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MULTISAMPLE
	CompareConstant(GL_MULTISAMPLE,0x809D,13344,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_MULTISAMPLE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SAMPLE_ALPHA_TO_COVERAGE
	CompareConstant(GL_SAMPLE_ALPHA_TO_COVERAGE,0x809E,13345,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_SAMPLE_ALPHA_TO_COVERAGE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SAMPLE_ALPHA_TO_ONE
	CompareConstant(GL_SAMPLE_ALPHA_TO_ONE,0x809F,13346,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_SAMPLE_ALPHA_TO_ONE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SAMPLE_COVERAGE
	CompareConstant(GL_SAMPLE_COVERAGE,0x80A0,13347,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_SAMPLE_COVERAGE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SAMPLE_BUFFERS
	CompareConstant(GL_SAMPLE_BUFFERS,0x80A8,13348,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_SAMPLE_BUFFERS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SAMPLES
	CompareConstant(GL_SAMPLES,0x80A9,13349,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_SAMPLES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SAMPLE_COVERAGE_VALUE
	CompareConstant(GL_SAMPLE_COVERAGE_VALUE,0x80AA,13350,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_SAMPLE_COVERAGE_VALUE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SAMPLE_COVERAGE_INVERT
	CompareConstant(GL_SAMPLE_COVERAGE_INVERT,0x80AB,13351,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_SAMPLE_COVERAGE_INVERT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MULTISAMPLE_BIT
	CompareConstant(GL_MULTISAMPLE_BIT,0x20000000,13352,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_MULTISAMPLE_BIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TRANSPOSE_MODELVIEW_MATRIX
	CompareConstant(GL_TRANSPOSE_MODELVIEW_MATRIX,0x84E3,13353,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TRANSPOSE_MODELVIEW_MATRIX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TRANSPOSE_PROJECTION_MATRIX
	CompareConstant(GL_TRANSPOSE_PROJECTION_MATRIX,0x84E4,13354,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TRANSPOSE_PROJECTION_MATRIX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TRANSPOSE_TEXTURE_MATRIX
	CompareConstant(GL_TRANSPOSE_TEXTURE_MATRIX,0x84E5,13355,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TRANSPOSE_TEXTURE_MATRIX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TRANSPOSE_COLOR_MATRIX
	CompareConstant(GL_TRANSPOSE_COLOR_MATRIX,0x84E6,13356,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TRANSPOSE_COLOR_MATRIX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COMBINE
	CompareConstant(GL_COMBINE,0x8570,13357,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_COMBINE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COMBINE_RGB
	CompareConstant(GL_COMBINE_RGB,0x8571,13358,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_COMBINE_RGB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_COMBINE_ALPHA
	CompareConstant(GL_COMBINE_ALPHA,0x8572,13359,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_COMBINE_ALPHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SOURCE0_RGB
	CompareConstant(GL_SOURCE0_RGB,0x8580,13360,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_SOURCE0_RGB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SOURCE1_RGB
	CompareConstant(GL_SOURCE1_RGB,0x8581,13361,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_SOURCE1_RGB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SOURCE2_RGB
	CompareConstant(GL_SOURCE2_RGB,0x8582,13362,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_SOURCE2_RGB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SOURCE0_ALPHA
	CompareConstant(GL_SOURCE0_ALPHA,0x8588,13363,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_SOURCE0_ALPHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SOURCE1_ALPHA
	CompareConstant(GL_SOURCE1_ALPHA,0x8589,13364,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_SOURCE1_ALPHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SOURCE2_ALPHA
	CompareConstant(GL_SOURCE2_ALPHA,0x858A,13365,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_SOURCE2_ALPHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OPERAND0_RGB
	CompareConstant(GL_OPERAND0_RGB,0x8590,13366,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_OPERAND0_RGB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OPERAND1_RGB
	CompareConstant(GL_OPERAND1_RGB,0x8591,13367,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_OPERAND1_RGB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OPERAND2_RGB
	CompareConstant(GL_OPERAND2_RGB,0x8592,13368,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_OPERAND2_RGB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OPERAND0_ALPHA
	CompareConstant(GL_OPERAND0_ALPHA,0x8598,13369,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_OPERAND0_ALPHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OPERAND1_ALPHA
	CompareConstant(GL_OPERAND1_ALPHA,0x8599,13370,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_OPERAND1_ALPHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_OPERAND2_ALPHA
	CompareConstant(GL_OPERAND2_ALPHA,0x859A,13371,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_OPERAND2_ALPHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_RGB_SCALE
	CompareConstant(GL_RGB_SCALE,0x8573,13372,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_RGB_SCALE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ADD_SIGNED
	CompareConstant(GL_ADD_SIGNED,0x8574,13373,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_ADD_SIGNED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_INTERPOLATE
	CompareConstant(GL_INTERPOLATE,0x8575,13374,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_INTERPOLATE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_SUBTRACT
	CompareConstant(GL_SUBTRACT,0x84E7,13375,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_SUBTRACT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CONSTANT
	CompareConstant(GL_CONSTANT,0x8576,13376,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_CONSTANT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PRIMARY_COLOR
	CompareConstant(GL_PRIMARY_COLOR,0x8577,13377,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_PRIMARY_COLOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_PREVIOUS
	CompareConstant(GL_PREVIOUS,0x8578,13378,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_PREVIOUS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DOT3_RGB
	CompareConstant(GL_DOT3_RGB,0x86AE,13379,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_DOT3_RGB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_DOT3_RGBA
	CompareConstant(GL_DOT3_RGBA,0x86AF,13380,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_DOT3_RGBA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CLAMP_TO_BORDER
	CompareConstant(GL_CLAMP_TO_BORDER,0x812D,13381,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_CLAMP_TO_BORDER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ARB_multitexture
	CompareConstant(GL_ARB_multitexture,1,13382,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_ARB_multitexture\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE0_ARB
	CompareConstant(GL_TEXTURE0_ARB,0x84C0,13383,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE0_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE1_ARB
	CompareConstant(GL_TEXTURE1_ARB,0x84C1,13384,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE1_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE2_ARB
	CompareConstant(GL_TEXTURE2_ARB,0x84C2,13385,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE2_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE3_ARB
	CompareConstant(GL_TEXTURE3_ARB,0x84C3,13386,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE3_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE4_ARB
	CompareConstant(GL_TEXTURE4_ARB,0x84C4,13387,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE4_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE5_ARB
	CompareConstant(GL_TEXTURE5_ARB,0x84C5,13388,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE5_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE6_ARB
	CompareConstant(GL_TEXTURE6_ARB,0x84C6,13389,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE6_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE7_ARB
	CompareConstant(GL_TEXTURE7_ARB,0x84C7,13390,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE7_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE8_ARB
	CompareConstant(GL_TEXTURE8_ARB,0x84C8,13391,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE8_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE9_ARB
	CompareConstant(GL_TEXTURE9_ARB,0x84C9,13392,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE9_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE10_ARB
	CompareConstant(GL_TEXTURE10_ARB,0x84CA,13393,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE10_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE11_ARB
	CompareConstant(GL_TEXTURE11_ARB,0x84CB,13394,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE11_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE12_ARB
	CompareConstant(GL_TEXTURE12_ARB,0x84CC,13395,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE12_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE13_ARB
	CompareConstant(GL_TEXTURE13_ARB,0x84CD,13396,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE13_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE14_ARB
	CompareConstant(GL_TEXTURE14_ARB,0x84CE,13397,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE14_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE15_ARB
	CompareConstant(GL_TEXTURE15_ARB,0x84CF,13398,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE15_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE16_ARB
	CompareConstant(GL_TEXTURE16_ARB,0x84D0,13399,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE16_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE17_ARB
	CompareConstant(GL_TEXTURE17_ARB,0x84D1,13400,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE17_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE18_ARB
	CompareConstant(GL_TEXTURE18_ARB,0x84D2,13401,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE18_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE19_ARB
	CompareConstant(GL_TEXTURE19_ARB,0x84D3,13402,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE19_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE20_ARB
	CompareConstant(GL_TEXTURE20_ARB,0x84D4,13403,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE20_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE21_ARB
	CompareConstant(GL_TEXTURE21_ARB,0x84D5,13404,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE21_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE22_ARB
	CompareConstant(GL_TEXTURE22_ARB,0x84D6,13405,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE22_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE23_ARB
	CompareConstant(GL_TEXTURE23_ARB,0x84D7,13406,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE23_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE24_ARB
	CompareConstant(GL_TEXTURE24_ARB,0x84D8,13407,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE24_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE25_ARB
	CompareConstant(GL_TEXTURE25_ARB,0x84D9,13408,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE25_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE26_ARB
	CompareConstant(GL_TEXTURE26_ARB,0x84DA,13409,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE26_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE27_ARB
	CompareConstant(GL_TEXTURE27_ARB,0x84DB,13410,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE27_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE28_ARB
	CompareConstant(GL_TEXTURE28_ARB,0x84DC,13411,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE28_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE29_ARB
	CompareConstant(GL_TEXTURE29_ARB,0x84DD,13412,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE29_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE30_ARB
	CompareConstant(GL_TEXTURE30_ARB,0x84DE,13413,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE30_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE31_ARB
	CompareConstant(GL_TEXTURE31_ARB,0x84DF,13414,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_TEXTURE31_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ACTIVE_TEXTURE_ARB
	CompareConstant(GL_ACTIVE_TEXTURE_ARB,0x84E0,13415,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_ACTIVE_TEXTURE_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_CLIENT_ACTIVE_TEXTURE_ARB
	CompareConstant(GL_CLIENT_ACTIVE_TEXTURE_ARB,0x84E1,13416,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_CLIENT_ACTIVE_TEXTURE_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_MAX_TEXTURE_UNITS_ARB
	CompareConstant(GL_MAX_TEXTURE_UNITS_ARB,0x84E2,13417,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_MAX_TEXTURE_UNITS_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_ARB_imaging
	CompareConstant(GL_ARB_imaging,1,15488,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_ARB_imaging\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERSION_1_3
	CompareConstant(GL_VERSION_1_3,1,15489,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_VERSION_1_3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for GL/gl.h depends on GL/glext.h */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERSION_1_1
	CompareConstant(GL_VERSION_1_1,1,165,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_VERSION_1_1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GL_VERSION_1_2
	CompareConstant(GL_VERSION_1_2,1,166,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GL_VERSION_1_2\n");
cnt++;
#endif

#endif

#if defined __s390x__
CheckTypeSize(GLenum,4, 8143, 12, 1.3, NULL, 7, NULL)
#elif defined __x86_64__
CheckTypeSize(GLenum,4, 8143, 11, 2.0, NULL, 7, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GLenum,4, 8143, 10, 1.3, NULL, 7, NULL)
#elif defined __powerpc64__
CheckTypeSize(GLenum,4, 8143, 9, 2.0, NULL, 7, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GLenum,4, 8143, 6, 1.2, NULL, 7, NULL)
#elif defined __ia64__
CheckTypeSize(GLenum,4, 8143, 3, 1.3, NULL, 7, NULL)
#elif defined __i386__
CheckTypeSize(GLenum,4, 8143, 2, 1.0, NULL, 7, NULL)
#else
Msg("Find size of GLenum (8143)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.0""',NULL,7,NULL);\n",architecture,8143,0);
#endif

#if defined __s390x__
CheckTypeSize(GLboolean,1, 8144, 12, 1.3, NULL, 3, NULL)
#elif defined __x86_64__
CheckTypeSize(GLboolean,1, 8144, 11, 2.0, NULL, 3, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GLboolean,1, 8144, 10, 1.3, NULL, 3, NULL)
#elif defined __powerpc64__
CheckTypeSize(GLboolean,1, 8144, 9, 2.0, NULL, 3, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GLboolean,1, 8144, 6, 1.2, NULL, 3, NULL)
#elif defined __ia64__
CheckTypeSize(GLboolean,1, 8144, 3, 1.3, NULL, 3, NULL)
#elif defined __i386__
CheckTypeSize(GLboolean,1, 8144, 2, 1.2, NULL, 3, NULL)
#else
Msg("Find size of GLboolean (8144)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,3,NULL);\n",architecture,8144,0);
#endif

#if defined __s390x__
CheckTypeSize(GLbitfield,4, 8145, 12, 1.3, NULL, 7, NULL)
#elif defined __x86_64__
CheckTypeSize(GLbitfield,4, 8145, 11, 2.0, NULL, 7, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GLbitfield,4, 8145, 10, 1.3, NULL, 7, NULL)
#elif defined __powerpc64__
CheckTypeSize(GLbitfield,4, 8145, 9, 2.0, NULL, 7, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GLbitfield,4, 8145, 6, 1.2, NULL, 7, NULL)
#elif defined __ia64__
CheckTypeSize(GLbitfield,4, 8145, 3, 1.3, NULL, 7, NULL)
#elif defined __i386__
CheckTypeSize(GLbitfield,4, 8145, 2, 1.0, NULL, 7, NULL)
#else
Msg("Find size of GLbitfield (8145)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.0""',NULL,7,NULL);\n",architecture,8145,0);
#endif

#if defined __s390x__
CheckTypeSize(GLvoid,1, 8146, 12, 1.3, NULL, 1, NULL)
#elif defined __x86_64__
CheckTypeSize(GLvoid,1, 8146, 11, 2.0, NULL, 1, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GLvoid,1, 8146, 10, 1.3, NULL, 1, NULL)
#elif defined __powerpc64__
CheckTypeSize(GLvoid,1, 8146, 9, 2.0, NULL, 1, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GLvoid,1, 8146, 6, 1.2, NULL, 1, NULL)
#elif defined __ia64__
CheckTypeSize(GLvoid,1, 8146, 3, 1.3, NULL, 1, NULL)
#elif defined __i386__
CheckTypeSize(GLvoid,1, 8146, 2, 1.2, NULL, 1, NULL)
#else
Msg("Find size of GLvoid (8146)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,1,NULL);\n",architecture,8146,0);
#endif

#if defined __s390x__
CheckTypeSize(GLbyte,1, 8147, 12, 1.3, NULL, 2, NULL)
#elif defined __x86_64__
CheckTypeSize(GLbyte,1, 8147, 11, 2.0, NULL, 2, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GLbyte,1, 8147, 10, 1.3, NULL, 2, NULL)
#elif defined __powerpc64__
CheckTypeSize(GLbyte,1, 8147, 9, 2.0, NULL, 2, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GLbyte,1, 8147, 6, 1.2, NULL, 2, NULL)
#elif defined __ia64__
CheckTypeSize(GLbyte,1, 8147, 3, 1.3, NULL, 2, NULL)
#elif defined __i386__
CheckTypeSize(GLbyte,1, 8147, 2, 1.2, NULL, 2, NULL)
#else
Msg("Find size of GLbyte (8147)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,2,NULL);\n",architecture,8147,0);
#endif

#if defined __s390x__
CheckTypeSize(GLshort,2, 8148, 12, 1.3, NULL, 4, NULL)
#elif defined __x86_64__
CheckTypeSize(GLshort,2, 8148, 11, 2.0, NULL, 4, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GLshort,2, 8148, 10, 1.3, NULL, 4, NULL)
#elif defined __powerpc64__
CheckTypeSize(GLshort,2, 8148, 9, 2.0, NULL, 4, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GLshort,2, 8148, 6, 1.2, NULL, 4, NULL)
#elif defined __ia64__
CheckTypeSize(GLshort,2, 8148, 3, 1.3, NULL, 4, NULL)
#elif defined __i386__
CheckTypeSize(GLshort,2, 8148, 2, 1.2, NULL, 4, NULL)
#else
Msg("Find size of GLshort (8148)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,4,NULL);\n",architecture,8148,0);
#endif

#if defined __s390x__
CheckTypeSize(GLint,4, 8149, 12, 1.3, NULL, 6, NULL)
#elif defined __x86_64__
CheckTypeSize(GLint,4, 8149, 11, 2.0, NULL, 6, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GLint,4, 8149, 10, 1.3, NULL, 6, NULL)
#elif defined __powerpc64__
CheckTypeSize(GLint,4, 8149, 9, 2.0, NULL, 6, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GLint,4, 8149, 6, 1.2, NULL, 6, NULL)
#elif defined __ia64__
CheckTypeSize(GLint,4, 8149, 3, 1.3, NULL, 6, NULL)
#elif defined __i386__
CheckTypeSize(GLint,4, 8149, 2, 1.2, NULL, 6, NULL)
#else
Msg("Find size of GLint (8149)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,6,NULL);\n",architecture,8149,0);
#endif

#if defined __s390x__
CheckTypeSize(GLubyte,1, 8150, 12, 1.3, NULL, 3, NULL)
#elif defined __x86_64__
CheckTypeSize(GLubyte,1, 8150, 11, 2.0, NULL, 3, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GLubyte,1, 8150, 10, 1.3, NULL, 3, NULL)
#elif defined __powerpc64__
CheckTypeSize(GLubyte,1, 8150, 9, 2.0, NULL, 3, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GLubyte,1, 8150, 6, 1.2, NULL, 3, NULL)
#elif defined __ia64__
CheckTypeSize(GLubyte,1, 8150, 3, 1.3, NULL, 3, NULL)
#elif defined __i386__
CheckTypeSize(GLubyte,1, 8150, 2, 1.2, NULL, 3, NULL)
#else
Msg("Find size of GLubyte (8150)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,3,NULL);\n",architecture,8150,0);
#endif

#if defined __s390x__
CheckTypeSize(GLushort,2, 8151, 12, 1.3, NULL, 5, NULL)
#elif defined __x86_64__
CheckTypeSize(GLushort,2, 8151, 11, 2.0, NULL, 5, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GLushort,2, 8151, 10, 1.3, NULL, 5, NULL)
#elif defined __powerpc64__
CheckTypeSize(GLushort,2, 8151, 9, 2.0, NULL, 5, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GLushort,2, 8151, 6, 1.2, NULL, 5, NULL)
#elif defined __ia64__
CheckTypeSize(GLushort,2, 8151, 3, 1.3, NULL, 5, NULL)
#elif defined __i386__
CheckTypeSize(GLushort,2, 8151, 2, 1.2, NULL, 5, NULL)
#else
Msg("Find size of GLushort (8151)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,5,NULL);\n",architecture,8151,0);
#endif

#if defined __s390x__
CheckTypeSize(GLuint,4, 8152, 12, 1.3, NULL, 7, NULL)
#elif defined __x86_64__
CheckTypeSize(GLuint,4, 8152, 11, 2.0, NULL, 7, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GLuint,4, 8152, 10, 1.3, NULL, 7, NULL)
#elif defined __powerpc64__
CheckTypeSize(GLuint,4, 8152, 9, 2.0, NULL, 7, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GLuint,4, 8152, 6, 1.2, NULL, 7, NULL)
#elif defined __ia64__
CheckTypeSize(GLuint,4, 8152, 3, 1.3, NULL, 7, NULL)
#elif defined __i386__
CheckTypeSize(GLuint,4, 8152, 2, 1.2, NULL, 7, NULL)
#else
Msg("Find size of GLuint (8152)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,7,NULL);\n",architecture,8152,0);
#endif

#if defined __s390x__
CheckTypeSize(GLsizei,4, 8153, 12, 1.3, NULL, 6, NULL)
#elif defined __x86_64__
CheckTypeSize(GLsizei,4, 8153, 11, 2.0, NULL, 6, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GLsizei,4, 8153, 10, 1.3, NULL, 6, NULL)
#elif defined __powerpc64__
CheckTypeSize(GLsizei,4, 8153, 9, 2.0, NULL, 6, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GLsizei,4, 8153, 6, 1.2, NULL, 6, NULL)
#elif defined __ia64__
CheckTypeSize(GLsizei,4, 8153, 3, 1.3, NULL, 6, NULL)
#elif defined __i386__
CheckTypeSize(GLsizei,4, 8153, 2, 1.0, NULL, 6, NULL)
#else
Msg("Find size of GLsizei (8153)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.0""',NULL,6,NULL);\n",architecture,8153,0);
#endif

#if defined __s390x__
CheckTypeSize(GLfloat,4, 8154, 12, 1.3, NULL, 12, NULL)
#elif defined __x86_64__
CheckTypeSize(GLfloat,4, 8154, 11, 2.0, NULL, 12, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GLfloat,4, 8154, 10, 1.3, NULL, 12, NULL)
#elif defined __powerpc64__
CheckTypeSize(GLfloat,4, 8154, 9, 2.0, NULL, 12, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GLfloat,4, 8154, 6, 1.2, NULL, 12, NULL)
#elif defined __ia64__
CheckTypeSize(GLfloat,4, 8154, 3, 1.3, NULL, 12, NULL)
#elif defined __i386__
CheckTypeSize(GLfloat,4, 8154, 2, 1.2, NULL, 12, NULL)
#else
Msg("Find size of GLfloat (8154)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,12,NULL);\n",architecture,8154,0);
#endif

#if defined __s390x__
CheckTypeSize(GLclampf,4, 8155, 12, 1.3, NULL, 12, NULL)
#elif defined __x86_64__
CheckTypeSize(GLclampf,4, 8155, 11, 2.0, NULL, 12, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GLclampf,4, 8155, 10, 1.3, NULL, 12, NULL)
#elif defined __powerpc64__
CheckTypeSize(GLclampf,4, 8155, 9, 2.0, NULL, 12, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GLclampf,4, 8155, 6, 1.2, NULL, 12, NULL)
#elif defined __ia64__
CheckTypeSize(GLclampf,4, 8155, 3, 1.3, NULL, 12, NULL)
#elif defined __i386__
CheckTypeSize(GLclampf,4, 8155, 2, 1.2, NULL, 12, NULL)
#else
Msg("Find size of GLclampf (8155)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,12,NULL);\n",architecture,8155,0);
#endif

#if defined __s390x__
CheckTypeSize(GLdouble,8, 8156, 12, 1.3, NULL, 13, NULL)
#elif defined __x86_64__
CheckTypeSize(GLdouble,8, 8156, 11, 2.0, NULL, 13, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GLdouble,8, 8156, 10, 1.3, NULL, 13, NULL)
#elif defined __powerpc64__
CheckTypeSize(GLdouble,8, 8156, 9, 2.0, NULL, 13, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GLdouble,8, 8156, 6, 1.2, NULL, 13, NULL)
#elif defined __ia64__
CheckTypeSize(GLdouble,8, 8156, 3, 1.3, NULL, 13, NULL)
#elif defined __i386__
CheckTypeSize(GLdouble,8, 8156, 2, 1.2, NULL, 13, NULL)
#else
Msg("Find size of GLdouble (8156)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,13,NULL);\n",architecture,8156,0);
#endif

#if defined __s390x__
CheckTypeSize(GLclampd,8, 8157, 12, 1.3, NULL, 13, NULL)
#elif defined __x86_64__
CheckTypeSize(GLclampd,8, 8157, 11, 2.0, NULL, 13, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GLclampd,8, 8157, 10, 1.3, NULL, 13, NULL)
#elif defined __powerpc64__
CheckTypeSize(GLclampd,8, 8157, 9, 2.0, NULL, 13, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GLclampd,8, 8157, 6, 1.2, NULL, 13, NULL)
#elif defined __ia64__
CheckTypeSize(GLclampd,8, 8157, 3, 1.3, NULL, 13, NULL)
#elif defined __i386__
CheckTypeSize(GLclampd,8, 8157, 2, 1.0, NULL, 13, NULL)
#else
Msg("Find size of GLclampd (8157)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.0""',NULL,13, NULL);\n",architecture,8157,0);
#endif

extern void glAccum_db(GLenum, GLfloat);
CheckInterfacedef(glAccum,glAccum_db);
extern void glAlphaFunc_db(GLenum, GLclampf);
CheckInterfacedef(glAlphaFunc,glAlphaFunc_db);
extern GLboolean glAreTexturesResident_db(GLsizei, const GLuint *, GLboolean *);
CheckInterfacedef(glAreTexturesResident,glAreTexturesResident_db);
extern void glArrayElement_db(GLint);
CheckInterfacedef(glArrayElement,glArrayElement_db);
extern void glBegin_db(GLenum);
CheckInterfacedef(glBegin,glBegin_db);
extern void glBindTexture_db(GLenum, GLuint);
CheckInterfacedef(glBindTexture,glBindTexture_db);
extern void glBitmap_db(GLsizei, GLsizei, GLfloat, GLfloat, GLfloat, GLfloat, const GLubyte *);
CheckInterfacedef(glBitmap,glBitmap_db);
extern void glBlendFunc_db(GLenum, GLenum);
CheckInterfacedef(glBlendFunc,glBlendFunc_db);
extern void glCallList_db(GLuint);
CheckInterfacedef(glCallList,glCallList_db);
extern void glCallLists_db(GLsizei, GLenum, const GLvoid *);
CheckInterfacedef(glCallLists,glCallLists_db);
extern void glClear_db(GLbitfield);
CheckInterfacedef(glClear,glClear_db);
extern void glClearAccum_db(GLfloat, GLfloat, GLfloat, GLfloat);
CheckInterfacedef(glClearAccum,glClearAccum_db);
extern void glClearColor_db(GLclampf, GLclampf, GLclampf, GLclampf);
CheckInterfacedef(glClearColor,glClearColor_db);
extern void glClearDepth_db(GLclampd);
CheckInterfacedef(glClearDepth,glClearDepth_db);
extern void glClearIndex_db(GLfloat);
CheckInterfacedef(glClearIndex,glClearIndex_db);
extern void glClearStencil_db(GLint);
CheckInterfacedef(glClearStencil,glClearStencil_db);
extern void glClipPlane_db(GLenum, const GLdouble *);
CheckInterfacedef(glClipPlane,glClipPlane_db);
extern void glColor3b_db(GLbyte, GLbyte, GLbyte);
CheckInterfacedef(glColor3b,glColor3b_db);
extern void glColor3bv_db(const GLbyte *);
CheckInterfacedef(glColor3bv,glColor3bv_db);
extern void glColor3d_db(GLdouble, GLdouble, GLdouble);
CheckInterfacedef(glColor3d,glColor3d_db);
extern void glColor3dv_db(const GLdouble *);
CheckInterfacedef(glColor3dv,glColor3dv_db);
extern void glColor3f_db(GLfloat, GLfloat, GLfloat);
CheckInterfacedef(glColor3f,glColor3f_db);
extern void glColor3fv_db(const GLfloat *);
CheckInterfacedef(glColor3fv,glColor3fv_db);
extern void glColor3i_db(GLint, GLint, GLint);
CheckInterfacedef(glColor3i,glColor3i_db);
extern void glColor3iv_db(const GLint *);
CheckInterfacedef(glColor3iv,glColor3iv_db);
extern void glColor3s_db(GLshort, GLshort, GLshort);
CheckInterfacedef(glColor3s,glColor3s_db);
extern void glColor3sv_db(const GLshort *);
CheckInterfacedef(glColor3sv,glColor3sv_db);
extern void glColor3ub_db(GLubyte, GLubyte, GLubyte);
CheckInterfacedef(glColor3ub,glColor3ub_db);
extern void glColor3ubv_db(const GLubyte *);
CheckInterfacedef(glColor3ubv,glColor3ubv_db);
extern void glColor3ui_db(GLuint, GLuint, GLuint);
CheckInterfacedef(glColor3ui,glColor3ui_db);
extern void glColor3uiv_db(const GLuint *);
CheckInterfacedef(glColor3uiv,glColor3uiv_db);
extern void glColor3us_db(GLushort, GLushort, GLushort);
CheckInterfacedef(glColor3us,glColor3us_db);
extern void glColor3usv_db(const GLushort *);
CheckInterfacedef(glColor3usv,glColor3usv_db);
extern void glColor4b_db(GLbyte, GLbyte, GLbyte, GLbyte);
CheckInterfacedef(glColor4b,glColor4b_db);
extern void glColor4bv_db(const GLbyte *);
CheckInterfacedef(glColor4bv,glColor4bv_db);
extern void glColor4d_db(GLdouble, GLdouble, GLdouble, GLdouble);
CheckInterfacedef(glColor4d,glColor4d_db);
extern void glColor4dv_db(const GLdouble *);
CheckInterfacedef(glColor4dv,glColor4dv_db);
extern void glColor4f_db(GLfloat, GLfloat, GLfloat, GLfloat);
CheckInterfacedef(glColor4f,glColor4f_db);
extern void glColor4fv_db(const GLfloat *);
CheckInterfacedef(glColor4fv,glColor4fv_db);
extern void glColor4i_db(GLint, GLint, GLint, GLint);
CheckInterfacedef(glColor4i,glColor4i_db);
extern void glColor4iv_db(const GLint *);
CheckInterfacedef(glColor4iv,glColor4iv_db);
extern void glColor4s_db(GLshort, GLshort, GLshort, GLshort);
CheckInterfacedef(glColor4s,glColor4s_db);
extern void glColor4sv_db(const GLshort *);
CheckInterfacedef(glColor4sv,glColor4sv_db);
extern void glColor4ub_db(GLubyte, GLubyte, GLubyte, GLubyte);
CheckInterfacedef(glColor4ub,glColor4ub_db);
extern void glColor4ubv_db(const GLubyte *);
CheckInterfacedef(glColor4ubv,glColor4ubv_db);
extern void glColor4ui_db(GLuint, GLuint, GLuint, GLuint);
CheckInterfacedef(glColor4ui,glColor4ui_db);
extern void glColor4uiv_db(const GLuint *);
CheckInterfacedef(glColor4uiv,glColor4uiv_db);
extern void glColor4us_db(GLushort, GLushort, GLushort, GLushort);
CheckInterfacedef(glColor4us,glColor4us_db);
extern void glColor4usv_db(const GLushort *);
CheckInterfacedef(glColor4usv,glColor4usv_db);
extern void glColorMask_db(GLboolean, GLboolean, GLboolean, GLboolean);
CheckInterfacedef(glColorMask,glColorMask_db);
extern void glColorMaterial_db(GLenum, GLenum);
CheckInterfacedef(glColorMaterial,glColorMaterial_db);
extern void glColorPointer_db(GLint, GLenum, GLsizei, const GLvoid *);
CheckInterfacedef(glColorPointer,glColorPointer_db);
extern void glCopyPixels_db(GLint, GLint, GLsizei, GLsizei, GLenum);
CheckInterfacedef(glCopyPixels,glCopyPixels_db);
extern void glCopyTexImage1D_db(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint);
CheckInterfacedef(glCopyTexImage1D,glCopyTexImage1D_db);
extern void glCopyTexImage2D_db(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint);
CheckInterfacedef(glCopyTexImage2D,glCopyTexImage2D_db);
extern void glCopyTexSubImage1D_db(GLenum, GLint, GLint, GLint, GLint, GLsizei);
CheckInterfacedef(glCopyTexSubImage1D,glCopyTexSubImage1D_db);
extern void glCopyTexSubImage2D_db(GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei);
CheckInterfacedef(glCopyTexSubImage2D,glCopyTexSubImage2D_db);
extern void glCullFace_db(GLenum);
CheckInterfacedef(glCullFace,glCullFace_db);
extern void glDeleteLists_db(GLuint, GLsizei);
CheckInterfacedef(glDeleteLists,glDeleteLists_db);
extern void glDeleteTextures_db(GLsizei, const GLuint *);
CheckInterfacedef(glDeleteTextures,glDeleteTextures_db);
extern void glDepthFunc_db(GLenum);
CheckInterfacedef(glDepthFunc,glDepthFunc_db);
extern void glDepthMask_db(GLboolean);
CheckInterfacedef(glDepthMask,glDepthMask_db);
extern void glDepthRange_db(GLclampd, GLclampd);
CheckInterfacedef(glDepthRange,glDepthRange_db);
extern void glDisable_db(GLenum);
CheckInterfacedef(glDisable,glDisable_db);
extern void glDisableClientState_db(GLenum);
CheckInterfacedef(glDisableClientState,glDisableClientState_db);
extern void glDrawArrays_db(GLenum, GLint, GLsizei);
CheckInterfacedef(glDrawArrays,glDrawArrays_db);
extern void glDrawBuffer_db(GLenum);
CheckInterfacedef(glDrawBuffer,glDrawBuffer_db);
extern void glDrawElements_db(GLenum, GLsizei, GLenum, const GLvoid *);
CheckInterfacedef(glDrawElements,glDrawElements_db);
extern void glDrawPixels_db(GLsizei, GLsizei, GLenum, GLenum, const GLvoid *);
CheckInterfacedef(glDrawPixels,glDrawPixels_db);
extern void glEdgeFlag_db(GLboolean);
CheckInterfacedef(glEdgeFlag,glEdgeFlag_db);
extern void glEdgeFlagPointer_db(GLsizei, const GLvoid *);
CheckInterfacedef(glEdgeFlagPointer,glEdgeFlagPointer_db);
extern void glEdgeFlagv_db(const GLboolean *);
CheckInterfacedef(glEdgeFlagv,glEdgeFlagv_db);
extern void glEnable_db(GLenum);
CheckInterfacedef(glEnable,glEnable_db);
extern void glEnableClientState_db(GLenum);
CheckInterfacedef(glEnableClientState,glEnableClientState_db);
extern void glEnd_db(void);
CheckInterfacedef(glEnd,glEnd_db);
extern void glEndList_db(void);
CheckInterfacedef(glEndList,glEndList_db);
extern void glEvalCoord1d_db(GLdouble);
CheckInterfacedef(glEvalCoord1d,glEvalCoord1d_db);
extern void glEvalCoord1dv_db(const GLdouble *);
CheckInterfacedef(glEvalCoord1dv,glEvalCoord1dv_db);
extern void glEvalCoord1f_db(GLfloat);
CheckInterfacedef(glEvalCoord1f,glEvalCoord1f_db);
extern void glEvalCoord1fv_db(const GLfloat *);
CheckInterfacedef(glEvalCoord1fv,glEvalCoord1fv_db);
extern void glEvalCoord2d_db(GLdouble, GLdouble);
CheckInterfacedef(glEvalCoord2d,glEvalCoord2d_db);
extern void glEvalCoord2dv_db(const GLdouble *);
CheckInterfacedef(glEvalCoord2dv,glEvalCoord2dv_db);
extern void glEvalCoord2f_db(GLfloat, GLfloat);
CheckInterfacedef(glEvalCoord2f,glEvalCoord2f_db);
extern void glEvalCoord2fv_db(const GLfloat *);
CheckInterfacedef(glEvalCoord2fv,glEvalCoord2fv_db);
extern void glEvalMesh1_db(GLenum, GLint, GLint);
CheckInterfacedef(glEvalMesh1,glEvalMesh1_db);
extern void glEvalMesh2_db(GLenum, GLint, GLint, GLint, GLint);
CheckInterfacedef(glEvalMesh2,glEvalMesh2_db);
extern void glEvalPoint1_db(GLint);
CheckInterfacedef(glEvalPoint1,glEvalPoint1_db);
extern void glEvalPoint2_db(GLint, GLint);
CheckInterfacedef(glEvalPoint2,glEvalPoint2_db);
extern void glFeedbackBuffer_db(GLsizei, GLenum, GLfloat *);
CheckInterfacedef(glFeedbackBuffer,glFeedbackBuffer_db);
extern void glFinish_db(void);
CheckInterfacedef(glFinish,glFinish_db);
extern void glFlush_db(void);
CheckInterfacedef(glFlush,glFlush_db);
extern void glFogf_db(GLenum, GLfloat);
CheckInterfacedef(glFogf,glFogf_db);
extern void glFogfv_db(GLenum, const GLfloat *);
CheckInterfacedef(glFogfv,glFogfv_db);
extern void glFogi_db(GLenum, GLint);
CheckInterfacedef(glFogi,glFogi_db);
extern void glFogiv_db(GLenum, const GLint *);
CheckInterfacedef(glFogiv,glFogiv_db);
extern void glFrontFace_db(GLenum);
CheckInterfacedef(glFrontFace,glFrontFace_db);
extern void glFrustum_db(GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble);
CheckInterfacedef(glFrustum,glFrustum_db);
extern GLuint glGenLists_db(GLsizei);
CheckInterfacedef(glGenLists,glGenLists_db);
extern void glGenTextures_db(GLsizei, GLuint *);
CheckInterfacedef(glGenTextures,glGenTextures_db);
extern void glGetBooleanv_db(GLenum, GLboolean *);
CheckInterfacedef(glGetBooleanv,glGetBooleanv_db);
extern void glGetClipPlane_db(GLenum, GLdouble *);
CheckInterfacedef(glGetClipPlane,glGetClipPlane_db);
extern void glGetDoublev_db(GLenum, GLdouble *);
CheckInterfacedef(glGetDoublev,glGetDoublev_db);
extern GLenum glGetError_db(void);
CheckInterfacedef(glGetError,glGetError_db);
extern void glGetFloatv_db(GLenum, GLfloat *);
CheckInterfacedef(glGetFloatv,glGetFloatv_db);
extern void glGetIntegerv_db(GLenum, GLint *);
CheckInterfacedef(glGetIntegerv,glGetIntegerv_db);
extern void glGetLightfv_db(GLenum, GLenum, GLfloat *);
CheckInterfacedef(glGetLightfv,glGetLightfv_db);
extern void glGetLightiv_db(GLenum, GLenum, GLint *);
CheckInterfacedef(glGetLightiv,glGetLightiv_db);
extern void glGetMapdv_db(GLenum, GLenum, GLdouble *);
CheckInterfacedef(glGetMapdv,glGetMapdv_db);
extern void glGetMapfv_db(GLenum, GLenum, GLfloat *);
CheckInterfacedef(glGetMapfv,glGetMapfv_db);
extern void glGetMapiv_db(GLenum, GLenum, GLint *);
CheckInterfacedef(glGetMapiv,glGetMapiv_db);
extern void glGetMaterialfv_db(GLenum, GLenum, GLfloat *);
CheckInterfacedef(glGetMaterialfv,glGetMaterialfv_db);
extern void glGetMaterialiv_db(GLenum, GLenum, GLint *);
CheckInterfacedef(glGetMaterialiv,glGetMaterialiv_db);
extern void glGetPixelMapfv_db(GLenum, GLfloat *);
CheckInterfacedef(glGetPixelMapfv,glGetPixelMapfv_db);
extern void glGetPixelMapuiv_db(GLenum, GLuint *);
CheckInterfacedef(glGetPixelMapuiv,glGetPixelMapuiv_db);
extern void glGetPixelMapusv_db(GLenum, GLushort *);
CheckInterfacedef(glGetPixelMapusv,glGetPixelMapusv_db);
extern void glGetPointerv_db(GLenum, void * *);
CheckInterfacedef(glGetPointerv,glGetPointerv_db);
extern void glGetPolygonStipple_db(GLubyte *);
CheckInterfacedef(glGetPolygonStipple,glGetPolygonStipple_db);
extern const GLubyte * glGetString_db(GLenum);
CheckInterfacedef(glGetString,glGetString_db);
extern void glGetTexEnvfv_db(GLenum, GLenum, GLfloat *);
CheckInterfacedef(glGetTexEnvfv,glGetTexEnvfv_db);
extern void glGetTexEnviv_db(GLenum, GLenum, GLint *);
CheckInterfacedef(glGetTexEnviv,glGetTexEnviv_db);
extern void glGetTexGendv_db(GLenum, GLenum, GLdouble *);
CheckInterfacedef(glGetTexGendv,glGetTexGendv_db);
extern void glGetTexGenfv_db(GLenum, GLenum, GLfloat *);
CheckInterfacedef(glGetTexGenfv,glGetTexGenfv_db);
extern void glGetTexGeniv_db(GLenum, GLenum, GLint *);
CheckInterfacedef(glGetTexGeniv,glGetTexGeniv_db);
extern void glGetTexImage_db(GLenum, GLint, GLenum, GLenum, GLvoid *);
CheckInterfacedef(glGetTexImage,glGetTexImage_db);
extern void glGetTexLevelParameterfv_db(GLenum, GLint, GLenum, GLfloat *);
CheckInterfacedef(glGetTexLevelParameterfv,glGetTexLevelParameterfv_db);
extern void glGetTexLevelParameteriv_db(GLenum, GLint, GLenum, GLint *);
CheckInterfacedef(glGetTexLevelParameteriv,glGetTexLevelParameteriv_db);
extern void glGetTexParameterfv_db(GLenum, GLenum, GLfloat *);
CheckInterfacedef(glGetTexParameterfv,glGetTexParameterfv_db);
extern void glGetTexParameteriv_db(GLenum, GLenum, GLint *);
CheckInterfacedef(glGetTexParameteriv,glGetTexParameteriv_db);
extern void glHint_db(GLenum, GLenum);
CheckInterfacedef(glHint,glHint_db);
extern void glIndexMask_db(GLuint);
CheckInterfacedef(glIndexMask,glIndexMask_db);
extern void glIndexPointer_db(GLenum, GLsizei, const GLvoid *);
CheckInterfacedef(glIndexPointer,glIndexPointer_db);
extern void glIndexd_db(GLdouble);
CheckInterfacedef(glIndexd,glIndexd_db);
extern void glIndexdv_db(const GLdouble *);
CheckInterfacedef(glIndexdv,glIndexdv_db);
extern void glIndexf_db(GLfloat);
CheckInterfacedef(glIndexf,glIndexf_db);
extern void glIndexfv_db(const GLfloat *);
CheckInterfacedef(glIndexfv,glIndexfv_db);
extern void glIndexi_db(GLint);
CheckInterfacedef(glIndexi,glIndexi_db);
extern void glIndexiv_db(const GLint *);
CheckInterfacedef(glIndexiv,glIndexiv_db);
extern void glIndexs_db(GLshort);
CheckInterfacedef(glIndexs,glIndexs_db);
extern void glIndexsv_db(const GLshort *);
CheckInterfacedef(glIndexsv,glIndexsv_db);
extern void glIndexub_db(GLubyte);
CheckInterfacedef(glIndexub,glIndexub_db);
extern void glIndexubv_db(const GLubyte *);
CheckInterfacedef(glIndexubv,glIndexubv_db);
extern void glInitNames_db(void);
CheckInterfacedef(glInitNames,glInitNames_db);
extern void glInterleavedArrays_db(GLenum, GLsizei, const GLvoid *);
CheckInterfacedef(glInterleavedArrays,glInterleavedArrays_db);
extern GLboolean glIsEnabled_db(GLenum);
CheckInterfacedef(glIsEnabled,glIsEnabled_db);
extern GLboolean glIsList_db(GLuint);
CheckInterfacedef(glIsList,glIsList_db);
extern GLboolean glIsTexture_db(GLuint);
CheckInterfacedef(glIsTexture,glIsTexture_db);
extern void glLightModelf_db(GLenum, GLfloat);
CheckInterfacedef(glLightModelf,glLightModelf_db);
extern void glLightModelfv_db(GLenum, const GLfloat *);
CheckInterfacedef(glLightModelfv,glLightModelfv_db);
extern void glLightModeli_db(GLenum, GLint);
CheckInterfacedef(glLightModeli,glLightModeli_db);
extern void glLightModeliv_db(GLenum, const GLint *);
CheckInterfacedef(glLightModeliv,glLightModeliv_db);
extern void glLightf_db(GLenum, GLenum, GLfloat);
CheckInterfacedef(glLightf,glLightf_db);
extern void glLightfv_db(GLenum, GLenum, const GLfloat *);
CheckInterfacedef(glLightfv,glLightfv_db);
extern void glLighti_db(GLenum, GLenum, GLint);
CheckInterfacedef(glLighti,glLighti_db);
extern void glLightiv_db(GLenum, GLenum, const GLint *);
CheckInterfacedef(glLightiv,glLightiv_db);
extern void glLineStipple_db(GLint, GLushort);
CheckInterfacedef(glLineStipple,glLineStipple_db);
extern void glLineWidth_db(GLfloat);
CheckInterfacedef(glLineWidth,glLineWidth_db);
extern void glListBase_db(GLuint);
CheckInterfacedef(glListBase,glListBase_db);
extern void glLoadIdentity_db(void);
CheckInterfacedef(glLoadIdentity,glLoadIdentity_db);
extern void glLoadMatrixd_db(const GLdouble *);
CheckInterfacedef(glLoadMatrixd,glLoadMatrixd_db);
extern void glLoadMatrixf_db(const GLfloat *);
CheckInterfacedef(glLoadMatrixf,glLoadMatrixf_db);
extern void glLoadName_db(GLuint);
CheckInterfacedef(glLoadName,glLoadName_db);
extern void glLogicOp_db(GLenum);
CheckInterfacedef(glLogicOp,glLogicOp_db);
extern void glMap1d_db(GLenum, GLdouble, GLdouble, GLint, GLint, const GLdouble *);
CheckInterfacedef(glMap1d,glMap1d_db);
extern void glMap1f_db(GLenum, GLfloat, GLfloat, GLint, GLint, const GLfloat *);
CheckInterfacedef(glMap1f,glMap1f_db);
extern void glMap2d_db(GLenum, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble, GLint, GLint, const GLdouble *);
CheckInterfacedef(glMap2d,glMap2d_db);
extern void glMap2f_db(GLenum, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint, GLint, const GLfloat *);
CheckInterfacedef(glMap2f,glMap2f_db);
extern void glMapGrid1d_db(GLint, GLdouble, GLdouble);
CheckInterfacedef(glMapGrid1d,glMapGrid1d_db);
extern void glMapGrid1f_db(GLint, GLfloat, GLfloat);
CheckInterfacedef(glMapGrid1f,glMapGrid1f_db);
extern void glMapGrid2d_db(GLint, GLdouble, GLdouble, GLint, GLdouble, GLdouble);
CheckInterfacedef(glMapGrid2d,glMapGrid2d_db);
extern void glMapGrid2f_db(GLint, GLfloat, GLfloat, GLint, GLfloat, GLfloat);
CheckInterfacedef(glMapGrid2f,glMapGrid2f_db);
extern void glMaterialf_db(GLenum, GLenum, GLfloat);
CheckInterfacedef(glMaterialf,glMaterialf_db);
extern void glMaterialfv_db(GLenum, GLenum, const GLfloat *);
CheckInterfacedef(glMaterialfv,glMaterialfv_db);
extern void glMateriali_db(GLenum, GLenum, GLint);
CheckInterfacedef(glMateriali,glMateriali_db);
extern void glMaterialiv_db(GLenum, GLenum, const GLint *);
CheckInterfacedef(glMaterialiv,glMaterialiv_db);
extern void glMatrixMode_db(GLenum);
CheckInterfacedef(glMatrixMode,glMatrixMode_db);
extern void glMultMatrixd_db(const GLdouble *);
CheckInterfacedef(glMultMatrixd,glMultMatrixd_db);
extern void glMultMatrixf_db(const GLfloat *);
CheckInterfacedef(glMultMatrixf,glMultMatrixf_db);
extern void glNewList_db(GLuint, GLenum);
CheckInterfacedef(glNewList,glNewList_db);
extern void glNormal3b_db(GLbyte, GLbyte, GLbyte);
CheckInterfacedef(glNormal3b,glNormal3b_db);
extern void glNormal3bv_db(const GLbyte *);
CheckInterfacedef(glNormal3bv,glNormal3bv_db);
extern void glNormal3d_db(GLdouble, GLdouble, GLdouble);
CheckInterfacedef(glNormal3d,glNormal3d_db);
extern void glNormal3dv_db(const GLdouble *);
CheckInterfacedef(glNormal3dv,glNormal3dv_db);
extern void glNormal3f_db(GLfloat, GLfloat, GLfloat);
CheckInterfacedef(glNormal3f,glNormal3f_db);
extern void glNormal3fv_db(const GLfloat *);
CheckInterfacedef(glNormal3fv,glNormal3fv_db);
extern void glNormal3i_db(GLint, GLint, GLint);
CheckInterfacedef(glNormal3i,glNormal3i_db);
extern void glNormal3iv_db(const GLint *);
CheckInterfacedef(glNormal3iv,glNormal3iv_db);
extern void glNormal3s_db(GLshort, GLshort, GLshort);
CheckInterfacedef(glNormal3s,glNormal3s_db);
extern void glNormal3sv_db(const GLshort *);
CheckInterfacedef(glNormal3sv,glNormal3sv_db);
extern void glNormalPointer_db(GLenum, GLsizei, const GLvoid *);
CheckInterfacedef(glNormalPointer,glNormalPointer_db);
extern void glOrtho_db(GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble);
CheckInterfacedef(glOrtho,glOrtho_db);
extern void glPassThrough_db(GLfloat);
CheckInterfacedef(glPassThrough,glPassThrough_db);
extern void glPixelMapfv_db(GLenum, GLint, const GLfloat *);
CheckInterfacedef(glPixelMapfv,glPixelMapfv_db);
extern void glPixelMapuiv_db(GLenum, GLint, const GLuint *);
CheckInterfacedef(glPixelMapuiv,glPixelMapuiv_db);
extern void glPixelMapusv_db(GLenum, GLint, const GLushort *);
CheckInterfacedef(glPixelMapusv,glPixelMapusv_db);
extern void glPixelStoref_db(GLenum, GLfloat);
CheckInterfacedef(glPixelStoref,glPixelStoref_db);
extern void glPixelStorei_db(GLenum, GLint);
CheckInterfacedef(glPixelStorei,glPixelStorei_db);
extern void glPixelTransferf_db(GLenum, GLfloat);
CheckInterfacedef(glPixelTransferf,glPixelTransferf_db);
extern void glPixelTransferi_db(GLenum, GLint);
CheckInterfacedef(glPixelTransferi,glPixelTransferi_db);
extern void glPixelZoom_db(GLfloat, GLfloat);
CheckInterfacedef(glPixelZoom,glPixelZoom_db);
extern void glPointSize_db(GLfloat);
CheckInterfacedef(glPointSize,glPointSize_db);
extern void glPolygonMode_db(GLenum, GLenum);
CheckInterfacedef(glPolygonMode,glPolygonMode_db);
extern void glPolygonOffset_db(GLfloat, GLfloat);
CheckInterfacedef(glPolygonOffset,glPolygonOffset_db);
extern void glPolygonStipple_db(const GLubyte *);
CheckInterfacedef(glPolygonStipple,glPolygonStipple_db);
extern void glPopAttrib_db(void);
CheckInterfacedef(glPopAttrib,glPopAttrib_db);
extern void glPopClientAttrib_db(void);
CheckInterfacedef(glPopClientAttrib,glPopClientAttrib_db);
extern void glPopMatrix_db(void);
CheckInterfacedef(glPopMatrix,glPopMatrix_db);
extern void glPopName_db(void);
CheckInterfacedef(glPopName,glPopName_db);
extern void glPrioritizeTextures_db(GLsizei, GLuint *, const GLclampf *);
CheckInterfacedef(glPrioritizeTextures,glPrioritizeTextures_db);
extern void glPushAttrib_db(GLbitfield);
CheckInterfacedef(glPushAttrib,glPushAttrib_db);
extern void glPushClientAttrib_db(GLbitfield);
CheckInterfacedef(glPushClientAttrib,glPushClientAttrib_db);
extern void glPushMatrix_db(void);
CheckInterfacedef(glPushMatrix,glPushMatrix_db);
extern void glPushName_db(GLuint);
CheckInterfacedef(glPushName,glPushName_db);
extern void glRasterPos2d_db(GLdouble, GLdouble);
CheckInterfacedef(glRasterPos2d,glRasterPos2d_db);
extern void glRasterPos2dv_db(const GLdouble *);
CheckInterfacedef(glRasterPos2dv,glRasterPos2dv_db);
extern void glRasterPos2f_db(GLfloat, GLfloat);
CheckInterfacedef(glRasterPos2f,glRasterPos2f_db);
extern void glRasterPos2fv_db(const GLfloat *);
CheckInterfacedef(glRasterPos2fv,glRasterPos2fv_db);
extern void glRasterPos2i_db(GLint, GLint);
CheckInterfacedef(glRasterPos2i,glRasterPos2i_db);
extern void glRasterPos2iv_db(const GLint *);
CheckInterfacedef(glRasterPos2iv,glRasterPos2iv_db);
extern void glRasterPos2s_db(GLshort, GLshort);
CheckInterfacedef(glRasterPos2s,glRasterPos2s_db);
extern void glRasterPos2sv_db(const GLshort *);
CheckInterfacedef(glRasterPos2sv,glRasterPos2sv_db);
extern void glRasterPos3d_db(GLdouble, GLdouble, GLdouble);
CheckInterfacedef(glRasterPos3d,glRasterPos3d_db);
extern void glRasterPos3dv_db(const GLdouble *);
CheckInterfacedef(glRasterPos3dv,glRasterPos3dv_db);
extern void glRasterPos3f_db(GLfloat, GLfloat, GLfloat);
CheckInterfacedef(glRasterPos3f,glRasterPos3f_db);
extern void glRasterPos3fv_db(const GLfloat *);
CheckInterfacedef(glRasterPos3fv,glRasterPos3fv_db);
extern void glRasterPos3i_db(GLint, GLint, GLint);
CheckInterfacedef(glRasterPos3i,glRasterPos3i_db);
extern void glRasterPos3iv_db(const GLint *);
CheckInterfacedef(glRasterPos3iv,glRasterPos3iv_db);
extern void glRasterPos3s_db(GLshort, GLshort, GLshort);
CheckInterfacedef(glRasterPos3s,glRasterPos3s_db);
extern void glRasterPos3sv_db(const GLshort *);
CheckInterfacedef(glRasterPos3sv,glRasterPos3sv_db);
extern void glRasterPos4d_db(GLdouble, GLdouble, GLdouble, GLdouble);
CheckInterfacedef(glRasterPos4d,glRasterPos4d_db);
extern void glRasterPos4dv_db(const GLdouble *);
CheckInterfacedef(glRasterPos4dv,glRasterPos4dv_db);
extern void glRasterPos4f_db(GLfloat, GLfloat, GLfloat, GLfloat);
CheckInterfacedef(glRasterPos4f,glRasterPos4f_db);
extern void glRasterPos4fv_db(const GLfloat *);
CheckInterfacedef(glRasterPos4fv,glRasterPos4fv_db);
extern void glRasterPos4i_db(GLint, GLint, GLint, GLint);
CheckInterfacedef(glRasterPos4i,glRasterPos4i_db);
extern void glRasterPos4iv_db(const GLint *);
CheckInterfacedef(glRasterPos4iv,glRasterPos4iv_db);
extern void glRasterPos4s_db(GLshort, GLshort, GLshort, GLshort);
CheckInterfacedef(glRasterPos4s,glRasterPos4s_db);
extern void glRasterPos4sv_db(const GLshort *);
CheckInterfacedef(glRasterPos4sv,glRasterPos4sv_db);
extern void glReadBuffer_db(GLenum);
CheckInterfacedef(glReadBuffer,glReadBuffer_db);
extern void glReadPixels_db(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLvoid *);
CheckInterfacedef(glReadPixels,glReadPixels_db);
extern void glRectd_db(GLdouble, GLdouble, GLdouble, GLdouble);
CheckInterfacedef(glRectd,glRectd_db);
extern void glRectdv_db(const GLdouble *, const GLdouble *);
CheckInterfacedef(glRectdv,glRectdv_db);
extern void glRectf_db(GLfloat, GLfloat, GLfloat, GLfloat);
CheckInterfacedef(glRectf,glRectf_db);
extern void glRectfv_db(const GLfloat *, const GLfloat *);
CheckInterfacedef(glRectfv,glRectfv_db);
extern void glRecti_db(GLint, GLint, GLint, GLint);
CheckInterfacedef(glRecti,glRecti_db);
extern void glRectiv_db(const GLint *, const GLint *);
CheckInterfacedef(glRectiv,glRectiv_db);
extern void glRects_db(GLshort, GLshort, GLshort, GLshort);
CheckInterfacedef(glRects,glRects_db);
extern void glRectsv_db(const GLshort *, const GLshort *);
CheckInterfacedef(glRectsv,glRectsv_db);
extern GLint glRenderMode_db(GLenum);
CheckInterfacedef(glRenderMode,glRenderMode_db);
extern void glRotated_db(GLdouble, GLdouble, GLdouble, GLdouble);
CheckInterfacedef(glRotated,glRotated_db);
extern void glRotatef_db(GLfloat, GLfloat, GLfloat, GLfloat);
CheckInterfacedef(glRotatef,glRotatef_db);
extern void glScaled_db(GLdouble, GLdouble, GLdouble);
CheckInterfacedef(glScaled,glScaled_db);
extern void glScalef_db(GLfloat, GLfloat, GLfloat);
CheckInterfacedef(glScalef,glScalef_db);
extern void glScissor_db(GLint, GLint, GLsizei, GLsizei);
CheckInterfacedef(glScissor,glScissor_db);
extern void glSelectBuffer_db(GLsizei, GLuint *);
CheckInterfacedef(glSelectBuffer,glSelectBuffer_db);
extern void glShadeModel_db(GLenum);
CheckInterfacedef(glShadeModel,glShadeModel_db);
extern void glStencilFunc_db(GLenum, GLint, GLuint);
CheckInterfacedef(glStencilFunc,glStencilFunc_db);
extern void glStencilMask_db(GLuint);
CheckInterfacedef(glStencilMask,glStencilMask_db);
extern void glStencilOp_db(GLenum, GLenum, GLenum);
CheckInterfacedef(glStencilOp,glStencilOp_db);
extern void glTexCoord1d_db(GLdouble);
CheckInterfacedef(glTexCoord1d,glTexCoord1d_db);
extern void glTexCoord1dv_db(const GLdouble *);
CheckInterfacedef(glTexCoord1dv,glTexCoord1dv_db);
extern void glTexCoord1f_db(GLfloat);
CheckInterfacedef(glTexCoord1f,glTexCoord1f_db);
extern void glTexCoord1fv_db(const GLfloat *);
CheckInterfacedef(glTexCoord1fv,glTexCoord1fv_db);
extern void glTexCoord1i_db(GLint);
CheckInterfacedef(glTexCoord1i,glTexCoord1i_db);
extern void glTexCoord1iv_db(const GLint *);
CheckInterfacedef(glTexCoord1iv,glTexCoord1iv_db);
extern void glTexCoord1s_db(GLshort);
CheckInterfacedef(glTexCoord1s,glTexCoord1s_db);
extern void glTexCoord1sv_db(const GLshort *);
CheckInterfacedef(glTexCoord1sv,glTexCoord1sv_db);
extern void glTexCoord2d_db(GLdouble, GLdouble);
CheckInterfacedef(glTexCoord2d,glTexCoord2d_db);
extern void glTexCoord2dv_db(const GLdouble *);
CheckInterfacedef(glTexCoord2dv,glTexCoord2dv_db);
extern void glTexCoord2f_db(GLfloat, GLfloat);
CheckInterfacedef(glTexCoord2f,glTexCoord2f_db);
extern void glTexCoord2fv_db(const GLfloat *);
CheckInterfacedef(glTexCoord2fv,glTexCoord2fv_db);
extern void glTexCoord2i_db(GLint, GLint);
CheckInterfacedef(glTexCoord2i,glTexCoord2i_db);
extern void glTexCoord2iv_db(const GLint *);
CheckInterfacedef(glTexCoord2iv,glTexCoord2iv_db);
extern void glTexCoord2s_db(GLshort, GLshort);
CheckInterfacedef(glTexCoord2s,glTexCoord2s_db);
extern void glTexCoord2sv_db(const GLshort *);
CheckInterfacedef(glTexCoord2sv,glTexCoord2sv_db);
extern void glTexCoord3d_db(GLdouble, GLdouble, GLdouble);
CheckInterfacedef(glTexCoord3d,glTexCoord3d_db);
extern void glTexCoord3dv_db(const GLdouble *);
CheckInterfacedef(glTexCoord3dv,glTexCoord3dv_db);
extern void glTexCoord3f_db(GLfloat, GLfloat, GLfloat);
CheckInterfacedef(glTexCoord3f,glTexCoord3f_db);
extern void glTexCoord3fv_db(const GLfloat *);
CheckInterfacedef(glTexCoord3fv,glTexCoord3fv_db);
extern void glTexCoord3i_db(GLint, GLint, GLint);
CheckInterfacedef(glTexCoord3i,glTexCoord3i_db);
extern void glTexCoord3iv_db(const GLint *);
CheckInterfacedef(glTexCoord3iv,glTexCoord3iv_db);
extern void glTexCoord3s_db(GLshort, GLshort, GLshort);
CheckInterfacedef(glTexCoord3s,glTexCoord3s_db);
extern void glTexCoord3sv_db(const GLshort *);
CheckInterfacedef(glTexCoord3sv,glTexCoord3sv_db);
extern void glTexCoord4d_db(GLdouble, GLdouble, GLdouble, GLdouble);
CheckInterfacedef(glTexCoord4d,glTexCoord4d_db);
extern void glTexCoord4dv_db(const GLdouble *);
CheckInterfacedef(glTexCoord4dv,glTexCoord4dv_db);
extern void glTexCoord4f_db(GLfloat, GLfloat, GLfloat, GLfloat);
CheckInterfacedef(glTexCoord4f,glTexCoord4f_db);
extern void glTexCoord4fv_db(const GLfloat *);
CheckInterfacedef(glTexCoord4fv,glTexCoord4fv_db);
extern void glTexCoord4i_db(GLint, GLint, GLint, GLint);
CheckInterfacedef(glTexCoord4i,glTexCoord4i_db);
extern void glTexCoord4iv_db(const GLint *);
CheckInterfacedef(glTexCoord4iv,glTexCoord4iv_db);
extern void glTexCoord4s_db(GLshort, GLshort, GLshort, GLshort);
CheckInterfacedef(glTexCoord4s,glTexCoord4s_db);
extern void glTexCoord4sv_db(const GLshort *);
CheckInterfacedef(glTexCoord4sv,glTexCoord4sv_db);
extern void glTexCoordPointer_db(GLint, GLenum, GLsizei, const GLvoid *);
CheckInterfacedef(glTexCoordPointer,glTexCoordPointer_db);
extern void glTexEnvf_db(GLenum, GLenum, GLfloat);
CheckInterfacedef(glTexEnvf,glTexEnvf_db);
extern void glTexEnvfv_db(GLenum, GLenum, const GLfloat *);
CheckInterfacedef(glTexEnvfv,glTexEnvfv_db);
extern void glTexEnvi_db(GLenum, GLenum, GLint);
CheckInterfacedef(glTexEnvi,glTexEnvi_db);
extern void glTexEnviv_db(GLenum, GLenum, const GLint *);
CheckInterfacedef(glTexEnviv,glTexEnviv_db);
extern void glTexGend_db(GLenum, GLenum, GLdouble);
CheckInterfacedef(glTexGend,glTexGend_db);
extern void glTexGendv_db(GLenum, GLenum, const GLdouble *);
CheckInterfacedef(glTexGendv,glTexGendv_db);
extern void glTexGenf_db(GLenum, GLenum, GLfloat);
CheckInterfacedef(glTexGenf,glTexGenf_db);
extern void glTexGenfv_db(GLenum, GLenum, const GLfloat *);
CheckInterfacedef(glTexGenfv,glTexGenfv_db);
extern void glTexGeni_db(GLenum, GLenum, GLint);
CheckInterfacedef(glTexGeni,glTexGeni_db);
extern void glTexGeniv_db(GLenum, GLenum, const GLint *);
CheckInterfacedef(glTexGeniv,glTexGeniv_db);
extern void glTexImage1D_db(GLenum, GLint, GLint, GLsizei, GLint, GLenum, GLenum, const GLvoid *);
CheckInterfacedef(glTexImage1D,glTexImage1D_db);
extern void glTexImage2D_db(GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *);
CheckInterfacedef(glTexImage2D,glTexImage2D_db);
extern void glTexParameterf_db(GLenum, GLenum, GLfloat);
CheckInterfacedef(glTexParameterf,glTexParameterf_db);
extern void glTexParameterfv_db(GLenum, GLenum, const GLfloat *);
CheckInterfacedef(glTexParameterfv,glTexParameterfv_db);
extern void glTexParameteri_db(GLenum, GLenum, GLint);
CheckInterfacedef(glTexParameteri,glTexParameteri_db);
extern void glTexParameteriv_db(GLenum, GLenum, const GLint *);
CheckInterfacedef(glTexParameteriv,glTexParameteriv_db);
extern void glTexSubImage1D_db(GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const GLvoid *);
CheckInterfacedef(glTexSubImage1D,glTexSubImage1D_db);
extern void glTexSubImage2D_db(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *);
CheckInterfacedef(glTexSubImage2D,glTexSubImage2D_db);
extern void glTranslated_db(GLdouble, GLdouble, GLdouble);
CheckInterfacedef(glTranslated,glTranslated_db);
extern void glTranslatef_db(GLfloat, GLfloat, GLfloat);
CheckInterfacedef(glTranslatef,glTranslatef_db);
extern void glVertex2d_db(GLdouble, GLdouble);
CheckInterfacedef(glVertex2d,glVertex2d_db);
extern void glVertex2dv_db(const GLdouble *);
CheckInterfacedef(glVertex2dv,glVertex2dv_db);
extern void glVertex2f_db(GLfloat, GLfloat);
CheckInterfacedef(glVertex2f,glVertex2f_db);
extern void glVertex2fv_db(const GLfloat *);
CheckInterfacedef(glVertex2fv,glVertex2fv_db);
extern void glVertex2i_db(GLint, GLint);
CheckInterfacedef(glVertex2i,glVertex2i_db);
extern void glVertex2iv_db(const GLint *);
CheckInterfacedef(glVertex2iv,glVertex2iv_db);
extern void glVertex2s_db(GLshort, GLshort);
CheckInterfacedef(glVertex2s,glVertex2s_db);
extern void glVertex2sv_db(const GLshort *);
CheckInterfacedef(glVertex2sv,glVertex2sv_db);
extern void glVertex3d_db(GLdouble, GLdouble, GLdouble);
CheckInterfacedef(glVertex3d,glVertex3d_db);
extern void glVertex3dv_db(const GLdouble *);
CheckInterfacedef(glVertex3dv,glVertex3dv_db);
extern void glVertex3f_db(GLfloat, GLfloat, GLfloat);
CheckInterfacedef(glVertex3f,glVertex3f_db);
extern void glVertex3fv_db(const GLfloat *);
CheckInterfacedef(glVertex3fv,glVertex3fv_db);
extern void glVertex3i_db(GLint, GLint, GLint);
CheckInterfacedef(glVertex3i,glVertex3i_db);
extern void glVertex3iv_db(const GLint *);
CheckInterfacedef(glVertex3iv,glVertex3iv_db);
extern void glVertex3s_db(GLshort, GLshort, GLshort);
CheckInterfacedef(glVertex3s,glVertex3s_db);
extern void glVertex3sv_db(const GLshort *);
CheckInterfacedef(glVertex3sv,glVertex3sv_db);
extern void glVertex4d_db(GLdouble, GLdouble, GLdouble, GLdouble);
CheckInterfacedef(glVertex4d,glVertex4d_db);
extern void glVertex4dv_db(const GLdouble *);
CheckInterfacedef(glVertex4dv,glVertex4dv_db);
extern void glVertex4f_db(GLfloat, GLfloat, GLfloat, GLfloat);
CheckInterfacedef(glVertex4f,glVertex4f_db);
extern void glVertex4fv_db(const GLfloat *);
CheckInterfacedef(glVertex4fv,glVertex4fv_db);
extern void glVertex4i_db(GLint, GLint, GLint, GLint);
CheckInterfacedef(glVertex4i,glVertex4i_db);
extern void glVertex4iv_db(const GLint *);
CheckInterfacedef(glVertex4iv,glVertex4iv_db);
extern void glVertex4s_db(GLshort, GLshort, GLshort, GLshort);
CheckInterfacedef(glVertex4s,glVertex4s_db);
extern void glVertex4sv_db(const GLshort *);
CheckInterfacedef(glVertex4sv,glVertex4sv_db);
extern void glVertexPointer_db(GLint, GLenum, GLsizei, const GLvoid *);
CheckInterfacedef(glVertexPointer,glVertexPointer_db);
extern void glViewport_db(GLint, GLint, GLsizei, GLsizei);
CheckInterfacedef(glViewport,glViewport_db);
extern void glMultiTexCoord4svARB_db(GLenum, const GLshort *);
CheckInterfacedef(glMultiTexCoord4svARB,glMultiTexCoord4svARB_db);
extern void glMultiTexCoord4sARB_db(GLenum, GLshort, GLshort, GLshort, GLshort);
CheckInterfacedef(glMultiTexCoord4sARB,glMultiTexCoord4sARB_db);
extern void glMultiTexCoord4ivARB_db(GLenum, const GLint *);
CheckInterfacedef(glMultiTexCoord4ivARB,glMultiTexCoord4ivARB_db);
extern void glMultiTexCoord4iARB_db(GLenum, GLint, GLint, GLint, GLint);
CheckInterfacedef(glMultiTexCoord4iARB,glMultiTexCoord4iARB_db);
extern void glMultiTexCoord4fvARB_db(GLenum, const GLfloat *);
CheckInterfacedef(glMultiTexCoord4fvARB,glMultiTexCoord4fvARB_db);
extern void glMultiTexCoord4fARB_db(GLenum, GLfloat, GLfloat, GLfloat, GLfloat);
CheckInterfacedef(glMultiTexCoord4fARB,glMultiTexCoord4fARB_db);
extern void glMultiTexCoord4dvARB_db(GLenum, const GLdouble *);
CheckInterfacedef(glMultiTexCoord4dvARB,glMultiTexCoord4dvARB_db);
extern void glMultiTexCoord4dARB_db(GLenum, GLdouble, GLdouble, GLdouble, GLdouble);
CheckInterfacedef(glMultiTexCoord4dARB,glMultiTexCoord4dARB_db);
extern void glMultiTexCoord3svARB_db(GLenum, const GLshort *);
CheckInterfacedef(glMultiTexCoord3svARB,glMultiTexCoord3svARB_db);
extern void glMultiTexCoord3sARB_db(GLenum, GLshort, GLshort, GLshort);
CheckInterfacedef(glMultiTexCoord3sARB,glMultiTexCoord3sARB_db);
extern void glMultiTexCoord3ivARB_db(GLenum, const GLint *);
CheckInterfacedef(glMultiTexCoord3ivARB,glMultiTexCoord3ivARB_db);
extern void glMultiTexCoord3iARB_db(GLenum, GLint, GLint, GLint);
CheckInterfacedef(glMultiTexCoord3iARB,glMultiTexCoord3iARB_db);
extern void glMultiTexCoord3fvARB_db(GLenum, const GLfloat *);
CheckInterfacedef(glMultiTexCoord3fvARB,glMultiTexCoord3fvARB_db);
extern void glMultiTexCoord3fARB_db(GLenum, GLfloat, GLfloat, GLfloat);
CheckInterfacedef(glMultiTexCoord3fARB,glMultiTexCoord3fARB_db);
extern void glMultiTexCoord3dvARB_db(GLenum, const GLdouble *);
CheckInterfacedef(glMultiTexCoord3dvARB,glMultiTexCoord3dvARB_db);
extern void glMultiTexCoord3dARB_db(GLenum, GLdouble, GLdouble, GLdouble);
CheckInterfacedef(glMultiTexCoord3dARB,glMultiTexCoord3dARB_db);
extern void glMultiTexCoord2svARB_db(GLenum, const GLshort *);
CheckInterfacedef(glMultiTexCoord2svARB,glMultiTexCoord2svARB_db);
extern void glMultiTexCoord2sARB_db(GLenum, GLshort, GLshort);
CheckInterfacedef(glMultiTexCoord2sARB,glMultiTexCoord2sARB_db);
extern void glMultiTexCoord2ivARB_db(GLenum, const GLint *);
CheckInterfacedef(glMultiTexCoord2ivARB,glMultiTexCoord2ivARB_db);
extern void glMultiTexCoord2iARB_db(GLenum, GLint, GLint);
CheckInterfacedef(glMultiTexCoord2iARB,glMultiTexCoord2iARB_db);
extern void glMultiTexCoord2fvARB_db(GLenum, const GLfloat *);
CheckInterfacedef(glMultiTexCoord2fvARB,glMultiTexCoord2fvARB_db);
extern void glMultiTexCoord2fARB_db(GLenum, GLfloat, GLfloat);
CheckInterfacedef(glMultiTexCoord2fARB,glMultiTexCoord2fARB_db);
extern void glMultiTexCoord2dvARB_db(GLenum, const GLdouble *);
CheckInterfacedef(glMultiTexCoord2dvARB,glMultiTexCoord2dvARB_db);
extern void glMultiTexCoord2dARB_db(GLenum, GLdouble, GLdouble);
CheckInterfacedef(glMultiTexCoord2dARB,glMultiTexCoord2dARB_db);
extern void glMultiTexCoord1svARB_db(GLenum, const GLshort *);
CheckInterfacedef(glMultiTexCoord1svARB,glMultiTexCoord1svARB_db);
extern void glMultiTexCoord1sARB_db(GLenum, GLshort);
CheckInterfacedef(glMultiTexCoord1sARB,glMultiTexCoord1sARB_db);
extern void glMultiTexCoord1ivARB_db(GLenum, const GLint *);
CheckInterfacedef(glMultiTexCoord1ivARB,glMultiTexCoord1ivARB_db);
extern void glMultiTexCoord1iARB_db(GLenum, GLint);
CheckInterfacedef(glMultiTexCoord1iARB,glMultiTexCoord1iARB_db);
extern void glMultiTexCoord1fvARB_db(GLenum, const GLfloat *);
CheckInterfacedef(glMultiTexCoord1fvARB,glMultiTexCoord1fvARB_db);
extern void glMultiTexCoord1fARB_db(GLenum, GLfloat);
CheckInterfacedef(glMultiTexCoord1fARB,glMultiTexCoord1fARB_db);
extern void glMultiTexCoord1dvARB_db(GLenum, const GLdouble *);
CheckInterfacedef(glMultiTexCoord1dvARB,glMultiTexCoord1dvARB_db);
extern void glMultiTexCoord1dARB_db(GLenum, GLdouble);
CheckInterfacedef(glMultiTexCoord1dARB,glMultiTexCoord1dARB_db);
extern void glClientActiveTextureARB_db(GLenum);
CheckInterfacedef(glClientActiveTextureARB,glClientActiveTextureARB_db);
extern void glActiveTextureARB_db(GLenum);
CheckInterfacedef(glActiveTextureARB,glActiveTextureARB_db);
extern void glGetSeparableFilter_db(GLenum, GLenum, GLenum, GLvoid *, GLvoid *, GLvoid *);
CheckInterfacedef(glGetSeparableFilter,glGetSeparableFilter_db);
extern void glSeparableFilter2D_db(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, GLvoid *, GLvoid *);
CheckInterfacedef(glSeparableFilter2D,glSeparableFilter2D_db);
extern void glGetConvolutionParameteriv_db(GLenum, GLenum, GLint *);
CheckInterfacedef(glGetConvolutionParameteriv,glGetConvolutionParameteriv_db);
extern void glGetConvolutionParameterfv_db(GLenum, GLenum, GLfloat *);
CheckInterfacedef(glGetConvolutionParameterfv,glGetConvolutionParameterfv_db);
extern void glGetConvolutionFilter_db(GLenum, GLenum, GLenum, GLvoid *);
CheckInterfacedef(glGetConvolutionFilter,glGetConvolutionFilter_db);
extern void glCopyConvolutionFilter2D_db(GLenum, GLenum, GLint, GLint, GLsizei, GLsizei);
CheckInterfacedef(glCopyConvolutionFilter2D,glCopyConvolutionFilter2D_db);
extern void glCopyConvolutionFilter1D_db(GLenum, GLenum, GLint, GLint, GLsizei);
CheckInterfacedef(glCopyConvolutionFilter1D,glCopyConvolutionFilter1D_db);
extern void glConvolutionParameteriv_db(GLenum, GLenum, GLint *);
CheckInterfacedef(glConvolutionParameteriv,glConvolutionParameteriv_db);
extern void glConvolutionParameteri_db(GLenum, GLenum, GLint);
CheckInterfacedef(glConvolutionParameteri,glConvolutionParameteri_db);
extern void glConvolutionParameterfv_db(GLenum, GLenum, GLfloat *);
CheckInterfacedef(glConvolutionParameterfv,glConvolutionParameterfv_db);
extern void glConvolutionParameterf_db(GLenum, GLenum, GLfloat);
CheckInterfacedef(glConvolutionParameterf,glConvolutionParameterf_db);
extern void glConvolutionFilter2D_db(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, GLvoid *);
CheckInterfacedef(glConvolutionFilter2D,glConvolutionFilter2D_db);
extern void glConvolutionFilter1D_db(GLenum, GLenum, GLsizei, GLenum, GLenum, GLvoid *);
CheckInterfacedef(glConvolutionFilter1D,glConvolutionFilter1D_db);
extern void glGetMinmaxParameteriv_db(GLenum, GLenum, GLint *);
CheckInterfacedef(glGetMinmaxParameteriv,glGetMinmaxParameteriv_db);
extern void glGetMinmaxParameterfv_db(GLenum, GLenum, GLfloat *);
CheckInterfacedef(glGetMinmaxParameterfv,glGetMinmaxParameterfv_db);
extern void glGetMinmax_db(GLenum, GLboolean, GLenum, GLenum, GLvoid *);
CheckInterfacedef(glGetMinmax,glGetMinmax_db);
extern void glResetMinmax_db(GLenum);
CheckInterfacedef(glResetMinmax,glResetMinmax_db);
extern void glMinmax_db(GLenum, GLenum, GLboolean);
CheckInterfacedef(glMinmax,glMinmax_db);
extern void glGetHistogramParameteriv_db(GLenum, GLenum, GLint *);
CheckInterfacedef(glGetHistogramParameteriv,glGetHistogramParameteriv_db);
extern void glGetHistogramParameterfv_db(GLenum, GLenum, GLfloat *);
CheckInterfacedef(glGetHistogramParameterfv,glGetHistogramParameterfv_db);
extern void glGetHistogram_db(GLenum, GLboolean, GLenum, GLenum, GLvoid *);
CheckInterfacedef(glGetHistogram,glGetHistogram_db);
extern void glResetHistogram_db(GLenum);
CheckInterfacedef(glResetHistogram,glResetHistogram_db);
extern void glHistogram_db(GLenum, GLsizei, GLenum, GLboolean);
CheckInterfacedef(glHistogram,glHistogram_db);
extern void glBlendColor_db(GLclampf, GLclampf, GLclampf, GLclampf);
CheckInterfacedef(glBlendColor,glBlendColor_db);
extern void glBlendEquation_db(GLenum);
CheckInterfacedef(glBlendEquation,glBlendEquation_db);
extern void glGetColorTableParameteriv_db(GLenum, GLenum, GLint *);
CheckInterfacedef(glGetColorTableParameteriv,glGetColorTableParameteriv_db);
extern void glGetColorTableParameterfv_db(GLenum, GLenum, GLfloat *);
CheckInterfacedef(glGetColorTableParameterfv,glGetColorTableParameterfv_db);
extern void glGetColorTable_db(GLenum, GLenum, GLenum, GLvoid *);
CheckInterfacedef(glGetColorTable,glGetColorTable_db);
extern void glCopyColorTable_db(GLenum, GLenum, GLint, GLint, GLsizei);
CheckInterfacedef(glCopyColorTable,glCopyColorTable_db);
extern void glCopyColorSubTable_db(GLenum, GLsizei, GLint, GLint, GLsizei);
CheckInterfacedef(glCopyColorSubTable,glCopyColorSubTable_db);
extern void glColorTableParameterfv_db(GLenum, GLenum, GLfloat *);
CheckInterfacedef(glColorTableParameterfv,glColorTableParameterfv_db);
extern void glColorTableParameteriv_db(GLenum, GLenum, GLint *);
CheckInterfacedef(glColorTableParameteriv,glColorTableParameteriv_db);
extern void glColorSubTable_db(GLenum, GLsizei, GLsizei, GLenum, GLenum, GLvoid *);
CheckInterfacedef(glColorSubTable,glColorSubTable_db);
extern void glColorTable_db(GLenum, GLenum, GLsizei, GLenum, GLenum, GLvoid *);
CheckInterfacedef(glColorTable,glColorTable_db);
extern void glCopyTexSubImage3D_db(GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei);
CheckInterfacedef(glCopyTexSubImage3D,glCopyTexSubImage3D_db);
extern void glTexSubImage3D_db(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, GLvoid *);
CheckInterfacedef(glTexSubImage3D,glTexSubImage3D_db);
extern void glTexImage3D_db(GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, GLvoid *);
CheckInterfacedef(glTexImage3D,glTexImage3D_db);
extern void glDrawRangeElements_db(GLenum, GLuint, GLuint, GLsizei, GLenum, GLvoid *);
CheckInterfacedef(glDrawRangeElements,glDrawRangeElements_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in GL/gl.h\n\n",pcnt,cnt);
return cnt;
#endif

}
