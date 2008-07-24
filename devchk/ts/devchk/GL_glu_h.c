/*
 * Test of GL/glu.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "GL/glu.h"



#ifdef TET_TEST
void GL_glu_h()
{
#else
int GL_glu_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in GL/glu.h\n");
#endif

printf("Checking data structures in GL/glu.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef GLU_TESS_END_DATA
	CompareConstant(GLU_TESS_END_DATA,100108,11909,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_TESS_END_DATA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_LINE
	CompareConstant(GLU_LINE,100011,11910,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_LINE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_ERROR10
	CompareConstant(GLU_NURBS_ERROR10,100260,11911,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_ERROR10\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_TESS_ERROR8
	CompareConstant(GLU_TESS_ERROR8,100158,11912,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_TESS_ERROR8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_INVALID_ENUM
	CompareConstant(GLU_INVALID_ENUM,100900,11913,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_INVALID_ENUM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_END
	CompareConstant(GLU_END,100102,11914,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_END\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_TESS_BOUNDARY_ONLY
	CompareConstant(GLU_TESS_BOUNDARY_ONLY,100141,11915,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_TESS_BOUNDARY_ONLY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_COLOR_DATA
	CompareConstant(GLU_NURBS_COLOR_DATA,100173,11916,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_COLOR_DATA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_ERROR36
	CompareConstant(GLU_NURBS_ERROR36,100286,11917,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_ERROR36\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_FILL
	CompareConstant(GLU_FILL,100012,11918,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_FILL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_TESS_ERROR6
	CompareConstant(GLU_TESS_ERROR6,100156,11919,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_TESS_ERROR6\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_ERROR12
	CompareConstant(GLU_NURBS_ERROR12,100262,11920,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_ERROR12\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_POINT
	CompareConstant(GLU_POINT,100010,11921,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_POINT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_TESS_ERROR2
	CompareConstant(GLU_TESS_ERROR2,100152,11922,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_TESS_ERROR2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_CCW
	CompareConstant(GLU_CCW,100121,11923,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_CCW\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_SAMPLING_METHOD
	CompareConstant(GLU_SAMPLING_METHOD,100205,11924,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_SAMPLING_METHOD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_ERROR33
	CompareConstant(GLU_NURBS_ERROR33,100283,11925,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_ERROR33\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_ERROR20
	CompareConstant(GLU_NURBS_ERROR20,100270,11926,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_ERROR20\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_ERROR
	CompareConstant(GLU_NURBS_ERROR,100103,11927,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_ERROR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_FALSE
	CompareConstant(GLU_FALSE,0,11928,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_FALSE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_MAP1_TRIM_2
	CompareConstant(GLU_MAP1_TRIM_2,100210,11929,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_MAP1_TRIM_2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_TESS_VERTEX
	CompareConstant(GLU_TESS_VERTEX,100101,11930,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_TESS_VERTEX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_MODE_EXT
	CompareConstant(GLU_NURBS_MODE_EXT,100160,11931,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_MODE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_ERROR4
	CompareConstant(GLU_NURBS_ERROR4,100254,11932,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_ERROR4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_DOMAIN_DISTANCE
	CompareConstant(GLU_DOMAIN_DISTANCE,100217,11933,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_DOMAIN_DISTANCE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_VERTEX
	CompareConstant(GLU_NURBS_VERTEX,100165,11934,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_VERTEX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_OBJECT_PARAMETRIC_ERROR
	CompareConstant(GLU_OBJECT_PARAMETRIC_ERROR,100208,11935,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_OBJECT_PARAMETRIC_ERROR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NONE
	CompareConstant(GLU_NONE,100002,11936,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NONE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_ERROR13
	CompareConstant(GLU_NURBS_ERROR13,100263,11937,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_ERROR13\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_ERROR28
	CompareConstant(GLU_NURBS_ERROR28,100278,11938,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_ERROR28\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_CULLING
	CompareConstant(GLU_CULLING,100201,11939,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_CULLING\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_ERROR15
	CompareConstant(GLU_NURBS_ERROR15,100265,11940,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_ERROR15\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_NORMAL_DATA_EXT
	CompareConstant(GLU_NURBS_NORMAL_DATA_EXT,100172,11941,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_NORMAL_DATA_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_INSIDE
	CompareConstant(GLU_INSIDE,100021,11942,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_INSIDE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_FLAT
	CompareConstant(GLU_FLAT,100001,11943,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_FLAT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_TESSELLATOR_EXT
	CompareConstant(GLU_NURBS_TESSELLATOR_EXT,100161,11944,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_TESSELLATOR_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_TESS_MAX_COORD
	CompareConstant(GLU_TESS_MAX_COORD,1.0e150,11945,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_TESS_MAX_COORD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_ERROR18
	CompareConstant(GLU_NURBS_ERROR18,100268,11946,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_ERROR18\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_VERSION_1_2
	CompareConstant(GLU_VERSION_1_2,1,11947,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_VERSION_1_2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_TESS_MISSING_BEGIN_CONTOUR
	CompareConstant(GLU_TESS_MISSING_BEGIN_CONTOUR,100152,11948,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_TESS_MISSING_BEGIN_CONTOUR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_ERROR34
	CompareConstant(GLU_NURBS_ERROR34,100284,11949,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_ERROR34\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_ERROR22
	CompareConstant(GLU_NURBS_ERROR22,100272,11950,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_ERROR22\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_ERROR7
	CompareConstant(GLU_NURBS_ERROR7,100257,11951,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_ERROR7\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_BEGIN_EXT
	CompareConstant(GLU_NURBS_BEGIN_EXT,100164,11952,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_BEGIN_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_TESS_NEED_COMBINE_CALLBACK
	CompareConstant(GLU_TESS_NEED_COMBINE_CALLBACK,100156,11953,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_TESS_NEED_COMBINE_CALLBACK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_TESS_ERROR3
	CompareConstant(GLU_TESS_ERROR3,100153,11954,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_TESS_ERROR3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_PATH_LENGTH
	CompareConstant(GLU_PATH_LENGTH,100215,11955,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_PATH_LENGTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_INVALID_OPERATION
	CompareConstant(GLU_INVALID_OPERATION,100904,11956,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_INVALID_OPERATION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_TESS_MISSING_BEGIN_POLYGON
	CompareConstant(GLU_TESS_MISSING_BEGIN_POLYGON,100151,11957,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_TESS_MISSING_BEGIN_POLYGON\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_TESS_MISSING_END_CONTOUR
	CompareConstant(GLU_TESS_MISSING_END_CONTOUR,100154,11958,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_TESS_MISSING_END_CONTOUR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_OUT_OF_MEMORY
	CompareConstant(GLU_OUT_OF_MEMORY,100902,11959,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_OUT_OF_MEMORY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_OUTLINE_PATCH
	CompareConstant(GLU_OUTLINE_PATCH,100241,11960,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_OUTLINE_PATCH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_COLOR
	CompareConstant(GLU_NURBS_COLOR,100167,11961,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_COLOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_ERROR5
	CompareConstant(GLU_NURBS_ERROR5,100255,11962,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_ERROR5\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_V_STEP
	CompareConstant(GLU_V_STEP,100207,11963,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_V_STEP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_NORMAL_EXT
	CompareConstant(GLU_NURBS_NORMAL_EXT,100166,11964,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_NORMAL_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_ERROR9
	CompareConstant(GLU_NURBS_ERROR9,100259,11965,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_ERROR9\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_TESS_COMBINE
	CompareConstant(GLU_TESS_COMBINE,100105,11966,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_TESS_COMBINE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_NORMAL_DATA
	CompareConstant(GLU_NURBS_NORMAL_DATA,100172,11967,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_NORMAL_DATA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_ERROR1
	CompareConstant(GLU_NURBS_ERROR1,100251,11968,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_ERROR1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_TESS_COORD_TOO_LARGE
	CompareConstant(GLU_TESS_COORD_TOO_LARGE,100155,11969,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_TESS_COORD_TOO_LARGE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_RENDERER_EXT
	CompareConstant(GLU_NURBS_RENDERER_EXT,100162,11970,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_RENDERER_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_COLOR_DATA_EXT
	CompareConstant(GLU_NURBS_COLOR_DATA_EXT,100173,11971,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_COLOR_DATA_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_COLOR_EXT
	CompareConstant(GLU_NURBS_COLOR_EXT,100167,11972,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_COLOR_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_TESSELLATOR
	CompareConstant(GLU_NURBS_TESSELLATOR,100161,11973,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_TESSELLATOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_TEXTURE_COORD
	CompareConstant(GLU_NURBS_TEXTURE_COORD,100168,11974,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_TEXTURE_COORD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_TESS_WINDING_ABS_GEQ_TWO
	CompareConstant(GLU_TESS_WINDING_ABS_GEQ_TWO,100134,11975,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_TESS_WINDING_ABS_GEQ_TWO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_OBJECT_PARAMETRIC_ERROR_EXT
	CompareConstant(GLU_OBJECT_PARAMETRIC_ERROR_EXT,100208,11976,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_OBJECT_PARAMETRIC_ERROR_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_ERROR26
	CompareConstant(GLU_NURBS_ERROR26,100276,11977,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_ERROR26\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_MODE
	CompareConstant(GLU_NURBS_MODE,100160,11978,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_MODE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_U_STEP
	CompareConstant(GLU_U_STEP,100206,11979,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_U_STEP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_OBJECT_PATH_LENGTH_EXT
	CompareConstant(GLU_OBJECT_PATH_LENGTH_EXT,100209,11980,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_OBJECT_PATH_LENGTH_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_TEX_COORD_EXT
	CompareConstant(GLU_NURBS_TEX_COORD_EXT,100168,11981,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_TEX_COORD_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_VERSION_1_3
	CompareConstant(GLU_VERSION_1_3,1,11982,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_VERSION_1_3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_TESS_ERROR7
	CompareConstant(GLU_TESS_ERROR7,100157,11983,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_TESS_ERROR7\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_ERROR29
	CompareConstant(GLU_NURBS_ERROR29,100279,11984,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_ERROR29\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_NORMAL
	CompareConstant(GLU_NURBS_NORMAL,100166,11985,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_NORMAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_SAMPLING_TOLERANCE
	CompareConstant(GLU_SAMPLING_TOLERANCE,100203,11986,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_SAMPLING_TOLERANCE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_VERTEX_EXT
	CompareConstant(GLU_NURBS_VERTEX_EXT,100165,11987,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_VERTEX_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_ERROR11
	CompareConstant(GLU_NURBS_ERROR11,100261,11988,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_ERROR11\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_BEGIN_DATA_EXT
	CompareConstant(GLU_NURBS_BEGIN_DATA_EXT,100170,11989,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_BEGIN_DATA_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_CW
	CompareConstant(GLU_CW,100120,11990,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_CW\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_TESS_WINDING_RULE
	CompareConstant(GLU_TESS_WINDING_RULE,100140,11991,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_TESS_WINDING_RULE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_TESS_VERTEX_DATA
	CompareConstant(GLU_TESS_VERTEX_DATA,100107,11992,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_TESS_VERTEX_DATA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_END_DATA
	CompareConstant(GLU_NURBS_END_DATA,100175,11993,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_END_DATA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_ERROR31
	CompareConstant(GLU_NURBS_ERROR31,100281,11994,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_ERROR31\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_ERROR24
	CompareConstant(GLU_NURBS_ERROR24,100274,11995,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_ERROR24\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_AUTO_LOAD_MATRIX
	CompareConstant(GLU_AUTO_LOAD_MATRIX,100200,11996,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_AUTO_LOAD_MATRIX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_ERROR14
	CompareConstant(GLU_NURBS_ERROR14,100264,11997,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_ERROR14\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_END_EXT
	CompareConstant(GLU_NURBS_END_EXT,100169,11998,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_END_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_TESS_WINDING_POSITIVE
	CompareConstant(GLU_TESS_WINDING_POSITIVE,100132,11999,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_TESS_WINDING_POSITIVE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_ERROR8
	CompareConstant(GLU_NURBS_ERROR8,100258,12000,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_ERROR8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_ERROR32
	CompareConstant(GLU_NURBS_ERROR32,100282,12001,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_ERROR32\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_TESS_ERROR1
	CompareConstant(GLU_TESS_ERROR1,100151,12002,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_TESS_ERROR1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_TRUE
	CompareConstant(GLU_TRUE,1,12003,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_TRUE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_VERTEX
	CompareConstant(GLU_VERTEX,100101,12004,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_VERTEX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_UNKNOWN
	CompareConstant(GLU_UNKNOWN,100124,12005,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_UNKNOWN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_VERTEX_DATA_EXT
	CompareConstant(GLU_NURBS_VERTEX_DATA_EXT,100171,12006,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_VERTEX_DATA_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_VERSION
	CompareConstant(GLU_VERSION,100800,12007,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_VERSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_BEGIN
	CompareConstant(GLU_NURBS_BEGIN,100164,12008,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_BEGIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_ERROR16
	CompareConstant(GLU_NURBS_ERROR16,100266,12009,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_ERROR16\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_ERROR37
	CompareConstant(GLU_NURBS_ERROR37,100287,12010,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_ERROR37\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_TESS_ERROR5
	CompareConstant(GLU_TESS_ERROR5,100155,12011,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_TESS_ERROR5\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_INCOMPATIBLE_GL_VERSION
	CompareConstant(GLU_INCOMPATIBLE_GL_VERSION,100903,12012,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_INCOMPATIBLE_GL_VERSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_TESS_WINDING_ODD
	CompareConstant(GLU_TESS_WINDING_ODD,100130,12013,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_TESS_WINDING_ODD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_TESS_BEGIN
	CompareConstant(GLU_TESS_BEGIN,100100,12014,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_TESS_BEGIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_ERROR
	CompareConstant(GLU_ERROR,100103,12015,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_ERROR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_ERROR3
	CompareConstant(GLU_NURBS_ERROR3,100253,12016,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_ERROR3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_ERROR35
	CompareConstant(GLU_NURBS_ERROR35,100285,12017,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_ERROR35\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_VERSION_1_1
	CompareConstant(GLU_VERSION_1_1,1,12018,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_VERSION_1_1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_MAP1_TRIM_3
	CompareConstant(GLU_MAP1_TRIM_3,100211,12019,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_MAP1_TRIM_3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_SILHOUETTE
	CompareConstant(GLU_SILHOUETTE,100013,12020,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_SILHOUETTE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_TESS_COMBINE_DATA
	CompareConstant(GLU_TESS_COMBINE_DATA,100111,12021,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_TESS_COMBINE_DATA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_ERROR27
	CompareConstant(GLU_NURBS_ERROR27,100277,12022,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_ERROR27\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_ERROR17
	CompareConstant(GLU_NURBS_ERROR17,100267,12023,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_ERROR17\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_OUTLINE_POLYGON
	CompareConstant(GLU_OUTLINE_POLYGON,100240,12024,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_OUTLINE_POLYGON\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_TESS_WINDING_NEGATIVE
	CompareConstant(GLU_TESS_WINDING_NEGATIVE,100133,12025,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_TESS_WINDING_NEGATIVE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_EXTENSIONS
	CompareConstant(GLU_EXTENSIONS,100801,12026,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_EXTENSIONS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_TESS_ERROR4
	CompareConstant(GLU_TESS_ERROR4,100154,12027,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_TESS_ERROR4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_TESS_ERROR
	CompareConstant(GLU_TESS_ERROR,100103,12028,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_TESS_ERROR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_RENDERER
	CompareConstant(GLU_NURBS_RENDERER,100162,12029,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_RENDERER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_BEGIN
	CompareConstant(GLU_BEGIN,100100,12030,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_BEGIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_ERROR2
	CompareConstant(GLU_NURBS_ERROR2,100252,12031,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_ERROR2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_TESS_ERROR_DATA
	CompareConstant(GLU_TESS_ERROR_DATA,100109,12032,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_TESS_ERROR_DATA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_VERTEX_DATA
	CompareConstant(GLU_NURBS_VERTEX_DATA,100171,12033,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_VERTEX_DATA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_ERROR21
	CompareConstant(GLU_NURBS_ERROR21,100271,12034,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_ERROR21\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_PARAMETRIC_ERROR
	CompareConstant(GLU_PARAMETRIC_ERROR,100216,12035,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_PARAMETRIC_ERROR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_ERROR25
	CompareConstant(GLU_NURBS_ERROR25,100275,12036,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_ERROR25\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_TESS_EDGE_FLAG
	CompareConstant(GLU_TESS_EDGE_FLAG,100104,12037,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_TESS_EDGE_FLAG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_EXT_object_space_tess
	CompareConstant(GLU_EXT_object_space_tess,1,12038,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_EXT_object_space_tess\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_ERROR19
	CompareConstant(GLU_NURBS_ERROR19,100269,12039,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_ERROR19\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_ERROR6
	CompareConstant(GLU_NURBS_ERROR6,100256,12040,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_ERROR6\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_TESS_EDGE_FLAG_DATA
	CompareConstant(GLU_TESS_EDGE_FLAG_DATA,100110,12041,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_TESS_EDGE_FLAG_DATA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_TESS_MISSING_END_POLYGON
	CompareConstant(GLU_TESS_MISSING_END_POLYGON,100153,12042,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_TESS_MISSING_END_POLYGON\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_SMOOTH
	CompareConstant(GLU_SMOOTH,100000,12043,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_SMOOTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_END_DATA_EXT
	CompareConstant(GLU_NURBS_END_DATA_EXT,100175,12044,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_END_DATA_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_TEX_COORD_DATA_EXT
	CompareConstant(GLU_NURBS_TEX_COORD_DATA_EXT,100174,12045,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_TEX_COORD_DATA_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_TEXTURE_COORD_DATA
	CompareConstant(GLU_NURBS_TEXTURE_COORD_DATA,100174,12046,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_TEXTURE_COORD_DATA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_INTERIOR
	CompareConstant(GLU_INTERIOR,100122,12047,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_INTERIOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_TESS_WINDING_NONZERO
	CompareConstant(GLU_TESS_WINDING_NONZERO,100131,12048,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_TESS_WINDING_NONZERO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_EXTERIOR
	CompareConstant(GLU_EXTERIOR,100123,12049,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_EXTERIOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_TESS_TOLERANCE
	CompareConstant(GLU_TESS_TOLERANCE,100142,12050,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_TESS_TOLERANCE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_DISPLAY_MODE
	CompareConstant(GLU_DISPLAY_MODE,100204,12051,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_DISPLAY_MODE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_OUTSIDE
	CompareConstant(GLU_OUTSIDE,100020,12052,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_OUTSIDE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_TESS_BEGIN_DATA
	CompareConstant(GLU_TESS_BEGIN_DATA,100106,12053,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_TESS_BEGIN_DATA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_BEGIN_DATA
	CompareConstant(GLU_NURBS_BEGIN_DATA,100170,12054,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_BEGIN_DATA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_ERROR23
	CompareConstant(GLU_NURBS_ERROR23,100273,12055,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_ERROR23\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_ERROR30
	CompareConstant(GLU_NURBS_ERROR30,100280,12056,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_ERROR30\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_PARAMETRIC_TOLERANCE
	CompareConstant(GLU_PARAMETRIC_TOLERANCE,100202,12057,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_PARAMETRIC_TOLERANCE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_NURBS_END
	CompareConstant(GLU_NURBS_END,100169,12058,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_NURBS_END\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_OBJECT_PATH_LENGTH
	CompareConstant(GLU_OBJECT_PATH_LENGTH,100209,12059,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_OBJECT_PATH_LENGTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_TESS_END
	CompareConstant(GLU_TESS_END,100102,12060,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_TESS_END\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_INVALID_VALUE
	CompareConstant(GLU_INVALID_VALUE,100901,12061,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_INVALID_VALUE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_EDGE_FLAG
	CompareConstant(GLU_EDGE_FLAG,100104,12062,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_EDGE_FLAG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLU_EXT_nurbs_tessellator
	CompareConstant(GLU_EXT_nurbs_tessellator,1,12063,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLU_EXT_nurbs_tessellator\n");
cnt++;
#endif

#endif

#if defined __s390x__
CheckTypeSize(_GLUfuncptr,8, 31634, 12, 1.3, NULL, 40, NULL)
#elif defined __x86_64__
CheckTypeSize(_GLUfuncptr,8, 31634, 11, 2.0, NULL, 40, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(_GLUfuncptr,4, 31634, 10, 1.3, NULL, 40, NULL)
#elif defined __powerpc64__
CheckTypeSize(_GLUfuncptr,8, 31634, 9, 2.0, NULL, 40, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(_GLUfuncptr,4, 31634, 6, 1.2, NULL, 40, NULL)
#elif defined __ia64__
CheckTypeSize(_GLUfuncptr,8, 31634, 3, 1.3, NULL, 40, NULL)
#elif defined __i386__
CheckTypeSize(_GLUfuncptr,4, 31634, 2, 1.2, NULL, 40, NULL)
#else
Msg("Find size of _GLUfuncptr (31634)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,40,NULL);\n",architecture,31634,0);
#endif

extern void gluPwlCurve_db(GLUnurbs *, GLint, GLfloat *, GLint, GLenum);
CheckInterfacedef(gluPwlCurve,gluPwlCurve_db);
extern void gluPartialDisk_db(GLUquadric *, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble);
CheckInterfacedef(gluPartialDisk,gluPartialDisk_db);
extern void gluNurbsCallbackDataEXT_db(GLUnurbs *, GLvoid *);
CheckInterfacedef(gluNurbsCallbackDataEXT,gluNurbsCallbackDataEXT_db);
extern void gluTessVertex_db(GLUtesselator *, GLdouble *, GLvoid *);
CheckInterfacedef(gluTessVertex,gluTessVertex_db);
extern void gluTessEndPolygon_db(GLUtesselator *);
CheckInterfacedef(gluTessEndPolygon,gluTessEndPolygon_db);
extern void gluTessBeginContour_db(GLUtesselator *);
CheckInterfacedef(gluTessBeginContour,gluTessBeginContour_db);
extern void gluLookAt_db(GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble);
CheckInterfacedef(gluLookAt,gluLookAt_db);
extern GLint gluBuild2DMipmaps_db(GLenum, GLint, GLsizei, GLsizei, GLenum, GLenum, const void *);
CheckInterfacedef(gluBuild2DMipmaps,gluBuild2DMipmaps_db);
extern void gluQuadricOrientation_db(GLUquadric *, GLenum);
CheckInterfacedef(gluQuadricOrientation,gluQuadricOrientation_db);
extern void gluBeginCurve_db(GLUnurbs *);
CheckInterfacedef(gluBeginCurve,gluBeginCurve_db);
extern void gluQuadricCallback_db(GLUquadric *, GLenum, _GLUfuncptr);
CheckInterfacedef(gluQuadricCallback,gluQuadricCallback_db);
extern void gluBeginPolygon_db(GLUtesselator *);
CheckInterfacedef(gluBeginPolygon,gluBeginPolygon_db);
extern void gluPickMatrix_db(GLdouble, GLdouble, GLdouble, GLdouble, GLint *);
CheckInterfacedef(gluPickMatrix,gluPickMatrix_db);
extern GLint gluBuild1DMipmapLevels_db(GLenum, GLint, GLsizei, GLenum, GLenum, GLint, GLint, GLint, const void *);
CheckInterfacedef(gluBuild1DMipmapLevels,gluBuild1DMipmapLevels_db);
extern void gluEndSurface_db(GLUnurbs *);
CheckInterfacedef(gluEndSurface,gluEndSurface_db);
extern void gluCylinder_db(GLUquadric *, GLdouble, GLdouble, GLdouble, GLint, GLint);
CheckInterfacedef(gluCylinder,gluCylinder_db);
extern void gluDeleteTess_db(GLUtesselator *);
CheckInterfacedef(gluDeleteTess,gluDeleteTess_db);
extern void gluNurbsCallbackData_db(GLUnurbs *, GLvoid *);
CheckInterfacedef(gluNurbsCallbackData,gluNurbsCallbackData_db);
extern void gluQuadricNormals_db(GLUquadric *, GLenum);
CheckInterfacedef(gluQuadricNormals,gluQuadricNormals_db);
extern void gluEndTrim_db(GLUnurbs *);
CheckInterfacedef(gluEndTrim,gluEndTrim_db);
extern GLint gluBuild3DMipmapLevels_db(GLenum, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, GLint, GLint, GLint, const void *);
CheckInterfacedef(gluBuild3DMipmapLevels,gluBuild3DMipmapLevels_db);
extern GLUnurbs * gluNewNurbsRenderer_db(void);
CheckInterfacedef(gluNewNurbsRenderer,gluNewNurbsRenderer_db);
extern void gluEndCurve_db(GLUnurbs *);
CheckInterfacedef(gluEndCurve,gluEndCurve_db);
extern void gluLoadSamplingMatrices_db(GLUnurbs *, const GLfloat *, const GLfloat *, const GLint *);
CheckInterfacedef(gluLoadSamplingMatrices,gluLoadSamplingMatrices_db);
extern void gluSphere_db(GLUquadric *, GLdouble, GLint, GLint);
CheckInterfacedef(gluSphere,gluSphere_db);
extern void gluGetNurbsProperty_db(GLUnurbs *, GLenum, GLfloat *);
CheckInterfacedef(gluGetNurbsProperty,gluGetNurbsProperty_db);
extern void gluTessProperty_db(GLUtesselator *, GLenum, GLdouble);
CheckInterfacedef(gluTessProperty,gluTessProperty_db);
extern GLboolean gluCheckExtension_db(const GLubyte *, const GLubyte *);
CheckInterfacedef(gluCheckExtension,gluCheckExtension_db);
extern GLint gluBuild1DMipmaps_db(GLenum, GLint, GLsizei, GLenum, GLenum, const void *);
CheckInterfacedef(gluBuild1DMipmaps,gluBuild1DMipmaps_db);
extern void gluPerspective_db(GLdouble, GLdouble, GLdouble, GLdouble);
CheckInterfacedef(gluPerspective,gluPerspective_db);
extern void gluTessEndContour_db(GLUtesselator *);
CheckInterfacedef(gluTessEndContour,gluTessEndContour_db);
extern void gluTessCallback_db(GLUtesselator *, GLenum, _GLUfuncptr);
CheckInterfacedef(gluTessCallback,gluTessCallback_db);
extern void gluGetTessProperty_db(GLUtesselator *, GLenum, GLdouble *);
CheckInterfacedef(gluGetTessProperty,gluGetTessProperty_db);
extern GLUquadric * gluNewQuadric_db(void);
CheckInterfacedef(gluNewQuadric,gluNewQuadric_db);
extern void gluQuadricTexture_db(GLUquadric *, GLboolean);
CheckInterfacedef(gluQuadricTexture,gluQuadricTexture_db);
extern GLint gluBuild3DMipmaps_db(GLenum, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const void *);
CheckInterfacedef(gluBuild3DMipmaps,gluBuild3DMipmaps_db);
extern void gluEndPolygon_db(GLUtesselator *);
CheckInterfacedef(gluEndPolygon,gluEndPolygon_db);
extern GLint gluBuild2DMipmapLevels_db(GLenum, GLint, GLsizei, GLsizei, GLenum, GLenum, GLint, GLint, GLint, const void *);
CheckInterfacedef(gluBuild2DMipmapLevels,gluBuild2DMipmapLevels_db);
extern void gluQuadricDrawStyle_db(GLUquadric *, GLenum);
CheckInterfacedef(gluQuadricDrawStyle,gluQuadricDrawStyle_db);
extern GLint gluUnProject4_db(GLdouble, GLdouble, GLdouble, GLdouble, const GLdouble *, const GLdouble *, const GLint *, GLdouble, GLdouble, GLdouble *, GLdouble *, GLdouble *, GLdouble *);
CheckInterfacedef(gluUnProject4,gluUnProject4_db);
extern GLint gluScaleImage_db(GLenum, GLsizei, GLsizei, GLenum, const void *, GLsizei, GLsizei, GLenum, GLvoid *);
CheckInterfacedef(gluScaleImage,gluScaleImage_db);
extern void gluNurbsSurface_db(GLUnurbs *, GLint, GLfloat *, GLint, GLfloat *, GLint, GLint, GLfloat *, GLint, GLint, GLenum);
CheckInterfacedef(gluNurbsSurface,gluNurbsSurface_db);
extern GLint gluUnProject_db(GLdouble, GLdouble, GLdouble, const GLdouble *, const GLdouble *, const GLint *, GLdouble *, GLdouble *, GLdouble *);
CheckInterfacedef(gluUnProject,gluUnProject_db);
extern void gluDisk_db(GLUquadric *, GLdouble, GLdouble, GLint, GLint);
CheckInterfacedef(gluDisk,gluDisk_db);
extern const GLubyte * gluErrorString_db(GLenum);
CheckInterfacedef(gluErrorString,gluErrorString_db);
extern void gluBeginTrim_db(GLUnurbs *);
CheckInterfacedef(gluBeginTrim,gluBeginTrim_db);
extern void gluTessBeginPolygon_db(GLUtesselator *, GLvoid *);
CheckInterfacedef(gluTessBeginPolygon,gluTessBeginPolygon_db);
extern void gluOrtho2D_db(GLdouble, GLdouble, GLdouble, GLdouble);
CheckInterfacedef(gluOrtho2D,gluOrtho2D_db);
extern void gluNextContour_db(GLUtesselator *, GLenum);
CheckInterfacedef(gluNextContour,gluNextContour_db);
extern void gluNurbsProperty_db(GLUnurbs *, GLenum, GLfloat);
CheckInterfacedef(gluNurbsProperty,gluNurbsProperty_db);
extern GLint gluProject_db(GLdouble, GLdouble, GLdouble, const GLdouble *, const GLdouble *, const GLint *, GLdouble *, GLdouble *, GLdouble *);
CheckInterfacedef(gluProject,gluProject_db);
extern void gluTessNormal_db(GLUtesselator *, GLdouble, GLdouble, GLdouble);
CheckInterfacedef(gluTessNormal,gluTessNormal_db);
extern void gluDeleteNurbsRenderer_db(GLUnurbs *);
CheckInterfacedef(gluDeleteNurbsRenderer,gluDeleteNurbsRenderer_db);
extern void gluBeginSurface_db(GLUnurbs *);
CheckInterfacedef(gluBeginSurface,gluBeginSurface_db);
extern void gluNurbsCallback_db(GLUnurbs *, GLenum, _GLUfuncptr);
CheckInterfacedef(gluNurbsCallback,gluNurbsCallback_db);
extern void gluNurbsCurve_db(GLUnurbs *, GLint, GLfloat *, GLint, GLfloat *, GLint, GLenum);
CheckInterfacedef(gluNurbsCurve,gluNurbsCurve_db);
extern const GLubyte * gluGetString_db(GLenum);
CheckInterfacedef(gluGetString,gluGetString_db);
extern GLUtesselator * gluNewTess_db(void);
CheckInterfacedef(gluNewTess,gluNewTess_db);
extern void gluDeleteQuadric_db(GLUquadric *);
CheckInterfacedef(gluDeleteQuadric,gluDeleteQuadric_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in GL/glu.h\n\n",pcnt,cnt);
return cnt;
#endif

}
