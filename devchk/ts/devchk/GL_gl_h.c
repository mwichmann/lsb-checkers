/*
 * Test of GL/gl.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include "GL/gl.h"



#ifdef TET_TEST
void GL_gl_h()
{
#else
int GL_gl_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in GL/gl.h\n");
#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_ARRAY_SIZE
	CompareConstant(GL_VERTEX_ARRAY_SIZE,0x807A,196,architecture)
#else
Msg( "Error: Constant not found: GL_VERTEX_ARRAY_SIZE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_ARRAY_TYPE
	CompareConstant(GL_VERTEX_ARRAY_TYPE,0x807B,197,architecture)
#else
Msg( "Error: Constant not found: GL_VERTEX_ARRAY_TYPE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_ARRAY_STRIDE
	CompareConstant(GL_VERTEX_ARRAY_STRIDE,0x807C,198,architecture)
#else
Msg( "Error: Constant not found: GL_VERTEX_ARRAY_STRIDE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GL_NORMAL_ARRAY_TYPE
	CompareConstant(GL_NORMAL_ARRAY_TYPE,0x807E,199,architecture)
#else
Msg( "Error: Constant not found: GL_NORMAL_ARRAY_TYPE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_ARRAY_POINTER
	CompareConstant(GL_VERTEX_ARRAY_POINTER,0x808E,210,architecture)
#else
Msg( "Error: Constant not found: GL_VERTEX_ARRAY_POINTER\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GL_NORMAL_ARRAY_POINTER
	CompareConstant(GL_NORMAL_ARRAY_POINTER,0x808F,211,architecture)
#else
Msg( "Error: Constant not found: GL_NORMAL_ARRAY_POINTER\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_ARRAY_POINTER
	CompareConstant(GL_COLOR_ARRAY_POINTER,0x8090,212,architecture)
#else
Msg( "Error: Constant not found: GL_COLOR_ARRAY_POINTER\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GL_INDEX_ARRAY_POINTER
	CompareConstant(GL_INDEX_ARRAY_POINTER,0x8091,213,architecture)
#else
Msg( "Error: Constant not found: GL_INDEX_ARRAY_POINTER\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GL_MATRIX_MODE
	CompareConstant(GL_MATRIX_MODE,0x0BA0,230,architecture)
#else
Msg( "Error: Constant not found: GL_MATRIX_MODE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_COORD_ARRAY_POINTER
	CompareConstant(GL_TEXTURE_COORD_ARRAY_POINTER,0x8092,214,architecture)
#else
Msg( "Error: Constant not found: GL_TEXTURE_COORD_ARRAY_POINTER\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GL_MODELVIEW
	CompareConstant(GL_MODELVIEW,0x1700,231,architecture)
#else
Msg( "Error: Constant not found: GL_MODELVIEW\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GL_PROJECTION
	CompareConstant(GL_PROJECTION,0x1701,232,architecture)
#else
Msg( "Error: Constant not found: GL_PROJECTION\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GL_V2F
	CompareConstant(GL_V2F,0x2A20,216,architecture)
#else
Msg( "Error: Constant not found: GL_V2F\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE
	CompareConstant(GL_TEXTURE,0x1702,233,architecture)
#else
Msg( "Error: Constant not found: GL_TEXTURE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GL_V3F
	CompareConstant(GL_V3F,0x2A21,217,architecture)
#else
Msg( "Error: Constant not found: GL_V3F\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GL_C4UB_V2F
	CompareConstant(GL_C4UB_V2F,0x2A22,218,architecture)
#else
Msg( "Error: Constant not found: GL_C4UB_V2F\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GL_C4UB_V3F
	CompareConstant(GL_C4UB_V3F,0x2A23,219,architecture)
#else
Msg( "Error: Constant not found: GL_C4UB_V3F\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GL_POINTS
	CompareConstant(GL_POINTS,0x0000,180,architecture)
#else
Msg( "Error: Constant not found: GL_POINTS\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GL_LINES
	CompareConstant(GL_LINES,0x0001,181,architecture)
#else
Msg( "Error: Constant not found: GL_LINES\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GL_LINE_LOOP
	CompareConstant(GL_LINE_LOOP,0x0002,182,architecture)
#else
Msg( "Error: Constant not found: GL_LINE_LOOP\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GL_LINE_STRIP
	CompareConstant(GL_LINE_STRIP,0x0003,183,architecture)
#else
Msg( "Error: Constant not found: GL_LINE_STRIP\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GL_TRIANGLES
	CompareConstant(GL_TRIANGLES,0x0004,184,architecture)
#else
Msg( "Error: Constant not found: GL_TRIANGLES\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GL_TRIANGLE_STRIP
	CompareConstant(GL_TRIANGLE_STRIP,0x0005,185,architecture)
#else
Msg( "Error: Constant not found: GL_TRIANGLE_STRIP\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GL_TRIANGLE_FAN
	CompareConstant(GL_TRIANGLE_FAN,0x0006,186,architecture)
#else
Msg( "Error: Constant not found: GL_TRIANGLE_FAN\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GL_QUADS
	CompareConstant(GL_QUADS,0x0007,187,architecture)
#else
Msg( "Error: Constant not found: GL_QUADS\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GL_QUAD_STRIP
	CompareConstant(GL_QUAD_STRIP,0x0008,188,architecture)
#else
Msg( "Error: Constant not found: GL_QUAD_STRIP\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GL_POLYGON
	CompareConstant(GL_POLYGON,0x0009,189,architecture)
#else
Msg( "Error: Constant not found: GL_POLYGON\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GL_NORMAL_ARRAY_STRIDE
	CompareConstant(GL_NORMAL_ARRAY_STRIDE,0x807F,200,architecture)
#else
Msg( "Error: Constant not found: GL_NORMAL_ARRAY_STRIDE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_ARRAY_SIZE
	CompareConstant(GL_COLOR_ARRAY_SIZE,0x8081,201,architecture)
#else
Msg( "Error: Constant not found: GL_COLOR_ARRAY_SIZE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_ARRAY_TYPE
	CompareConstant(GL_COLOR_ARRAY_TYPE,0x8082,202,architecture)
#else
Msg( "Error: Constant not found: GL_COLOR_ARRAY_TYPE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_ARRAY_STRIDE
	CompareConstant(GL_COLOR_ARRAY_STRIDE,0x8083,203,architecture)
#else
Msg( "Error: Constant not found: GL_COLOR_ARRAY_STRIDE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GL_INDEX_ARRAY_TYPE
	CompareConstant(GL_INDEX_ARRAY_TYPE,0x8085,204,architecture)
#else
Msg( "Error: Constant not found: GL_INDEX_ARRAY_TYPE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GL_C3F_V3F
	CompareConstant(GL_C3F_V3F,0x2A24,220,architecture)
#else
Msg( "Error: Constant not found: GL_C3F_V3F\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GL_N3F_V3F
	CompareConstant(GL_N3F_V3F,0x2A25,221,architecture)
#else
Msg( "Error: Constant not found: GL_N3F_V3F\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GL_INDEX_ARRAY_STRIDE
	CompareConstant(GL_INDEX_ARRAY_STRIDE,0x8086,205,architecture)
#else
Msg( "Error: Constant not found: GL_INDEX_ARRAY_STRIDE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_COORD_ARRAY_SIZE
	CompareConstant(GL_TEXTURE_COORD_ARRAY_SIZE,0x8088,206,architecture)
#else
Msg( "Error: Constant not found: GL_TEXTURE_COORD_ARRAY_SIZE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GL_C4F_N3F_V3F
	CompareConstant(GL_C4F_N3F_V3F,0x2A26,222,architecture)
#else
Msg( "Error: Constant not found: GL_C4F_N3F_V3F\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_COORD_ARRAY_TYPE
	CompareConstant(GL_TEXTURE_COORD_ARRAY_TYPE,0x8089,207,architecture)
#else
Msg( "Error: Constant not found: GL_TEXTURE_COORD_ARRAY_TYPE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GL_T2F_V3F
	CompareConstant(GL_T2F_V3F,0x2A27,223,architecture)
#else
Msg( "Error: Constant not found: GL_T2F_V3F\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_COORD_ARRAY_STRIDE
	CompareConstant(GL_TEXTURE_COORD_ARRAY_STRIDE,0x808A,208,architecture)
#else
Msg( "Error: Constant not found: GL_TEXTURE_COORD_ARRAY_STRIDE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GL_T4F_V4F
	CompareConstant(GL_T4F_V4F,0x2A28,224,architecture)
#else
Msg( "Error: Constant not found: GL_T4F_V4F\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GL_T2F_C4UB_V3F
	CompareConstant(GL_T2F_C4UB_V3F,0x2A29,225,architecture)
#else
Msg( "Error: Constant not found: GL_T2F_C4UB_V3F\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GL_EDGE_FLAG_ARRAY_STRIDE
	CompareConstant(GL_EDGE_FLAG_ARRAY_STRIDE,0x808C,209,architecture)
#else
Msg( "Error: Constant not found: GL_EDGE_FLAG_ARRAY_STRIDE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GL_T2F_C3F_V3F
	CompareConstant(GL_T2F_C3F_V3F,0x2A2A,226,architecture)
#else
Msg( "Error: Constant not found: GL_T2F_C3F_V3F\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GL_T2F_N3F_V3F
	CompareConstant(GL_T2F_N3F_V3F,0x2A2B,227,architecture)
#else
Msg( "Error: Constant not found: GL_T2F_N3F_V3F\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GL_UNSIGNED_BYTE
	CompareConstant(GL_UNSIGNED_BYTE,0x1401,170,architecture)
#else
Msg( "Error: Constant not found: GL_UNSIGNED_BYTE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GL_T2F_C4F_N3F_V3F
	CompareConstant(GL_T2F_C4F_N3F_V3F,0x2A2C,228,architecture)
#else
Msg( "Error: Constant not found: GL_T2F_C4F_N3F_V3F\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GL_SHORT
	CompareConstant(GL_SHORT,0x1402,171,architecture)
#else
Msg( "Error: Constant not found: GL_SHORT\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GL_T4F_C4F_N3F_V4F
	CompareConstant(GL_T4F_C4F_N3F_V4F,0x2A2D,229,architecture)
#else
Msg( "Error: Constant not found: GL_T4F_C4F_N3F_V4F\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GL_UNSIGNED_SHORT
	CompareConstant(GL_UNSIGNED_SHORT,0x1403,172,architecture)
#else
Msg( "Error: Constant not found: GL_UNSIGNED_SHORT\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GL_INT
	CompareConstant(GL_INT,0x1404,173,architecture)
#else
Msg( "Error: Constant not found: GL_INT\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GL_VERTEX_ARRAY
	CompareConstant(GL_VERTEX_ARRAY,0x8074,190,architecture)
#else
Msg( "Error: Constant not found: GL_VERTEX_ARRAY\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GL_UNSIGNED_INT
	CompareConstant(GL_UNSIGNED_INT,0x1405,174,architecture)
#else
Msg( "Error: Constant not found: GL_UNSIGNED_INT\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GL_NORMAL_ARRAY
	CompareConstant(GL_NORMAL_ARRAY,0x8075,191,architecture)
#else
Msg( "Error: Constant not found: GL_NORMAL_ARRAY\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GL_FLOAT
	CompareConstant(GL_FLOAT,0x1406,175,architecture)
#else
Msg( "Error: Constant not found: GL_FLOAT\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GL_DOUBLE
	CompareConstant(GL_DOUBLE,0x140A,176,architecture)
#else
Msg( "Error: Constant not found: GL_DOUBLE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GL_COLOR_ARRAY
	CompareConstant(GL_COLOR_ARRAY,0x8076,192,architecture)
#else
Msg( "Error: Constant not found: GL_COLOR_ARRAY\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GL_2_BYTES
	CompareConstant(GL_2_BYTES,0x1407,177,architecture)
#else
Msg( "Error: Constant not found: GL_2_BYTES\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GL_INDEX_ARRAY
	CompareConstant(GL_INDEX_ARRAY,0x8077,193,architecture)
#else
Msg( "Error: Constant not found: GL_INDEX_ARRAY\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GL_TEXTURE_COORD_ARRAY
	CompareConstant(GL_TEXTURE_COORD_ARRAY,0x8078,194,architecture)
#else
Msg( "Error: Constant not found: GL_TEXTURE_COORD_ARRAY\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GL_3_BYTES
	CompareConstant(GL_3_BYTES,0x1408,178,architecture)
#else
Msg( "Error: Constant not found: GL_3_BYTES\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GL_EDGE_FLAG_ARRAY
	CompareConstant(GL_EDGE_FLAG_ARRAY,0x8079,195,architecture)
#else
Msg( "Error: Constant not found: GL_EDGE_FLAG_ARRAY\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GL_4_BYTES
	CompareConstant(GL_4_BYTES,0x1409,179,architecture)
#else
Msg( "Error: Constant not found: GL_4_BYTES\n");
cnt++;
#endif

#endif

#ifdef __i386__
CheckTypeSize(GLenum,4, 8143, 2)
#elif __ia64__
CheckTypeSize(GLenum,4, 8143, 3)
#elif __powerpc__
CheckTypeSize(GLenum,4, 8143, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8143,0);
Msg("Find size of GLboolean (8143)\n");
#endif

#ifdef __i386__
CheckTypeSize(GLboolean,1, 8144, 2)
#elif __ia64__
CheckTypeSize(GLboolean,1, 8144, 3)
#elif __powerpc__
CheckTypeSize(GLboolean,1, 8144, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8144,0);
Msg("Find size of GLbitfield (8144)\n");
#endif

#ifdef __i386__
CheckTypeSize(GLbitfield,4, 8145, 2)
#elif __ia64__
CheckTypeSize(GLbitfield,4, 8145, 3)
#elif __powerpc__
CheckTypeSize(GLbitfield,4, 8145, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8145,0);
Msg("Find size of GLvoid (8145)\n");
#endif

#ifdef __ia64__
CheckTypeSize(GLvoid,1, 8146, 3)
#elif __i386__
CheckTypeSize(GLvoid,1, 8146, 2)
#elif __powerpc__
CheckTypeSize(GLvoid,1, 8146, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8146,0);
Msg("Find size of GLbyte (8146)\n");
#endif

#ifdef __i386__
CheckTypeSize(GLbyte,1, 8147, 2)
#elif __ia64__
CheckTypeSize(GLbyte,1, 8147, 3)
#elif __powerpc__
CheckTypeSize(GLbyte,1, 8147, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8147,0);
Msg("Find size of GLshort (8147)\n");
#endif

#ifdef __i386__
CheckTypeSize(GLshort,2, 8148, 2)
#elif __ia64__
CheckTypeSize(GLshort,2, 8148, 3)
#elif __powerpc__
CheckTypeSize(GLshort,2, 8148, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8148,0);
Msg("Find size of GLint (8148)\n");
#endif

#ifdef __i386__
CheckTypeSize(GLint,4, 8149, 2)
#elif __ia64__
CheckTypeSize(GLint,4, 8149, 3)
#elif __powerpc__
CheckTypeSize(GLint,4, 8149, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8149,0);
Msg("Find size of GLubyte (8149)\n");
#endif

#ifdef __i386__
CheckTypeSize(GLubyte,1, 8150, 2)
#elif __ia64__
CheckTypeSize(GLubyte,1, 8150, 3)
#elif __powerpc__
CheckTypeSize(GLubyte,1, 8150, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8150,0);
Msg("Find size of GLushort (8150)\n");
#endif

#ifdef __i386__
CheckTypeSize(GLushort,2, 8151, 2)
#elif __ia64__
CheckTypeSize(GLushort,2, 8151, 3)
#elif __powerpc__
CheckTypeSize(GLushort,2, 8151, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8151,0);
Msg("Find size of GLuint (8151)\n");
#endif

#ifdef __i386__
CheckTypeSize(GLuint,4, 8152, 2)
#elif __ia64__
CheckTypeSize(GLuint,4, 8152, 3)
#elif __powerpc__
CheckTypeSize(GLuint,4, 8152, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8152,0);
Msg("Find size of GLsizei (8152)\n");
#endif

#ifdef __i386__
CheckTypeSize(GLsizei,4, 8153, 2)
#elif __ia64__
CheckTypeSize(GLsizei,4, 8153, 3)
#elif __powerpc__
CheckTypeSize(GLsizei,4, 8153, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8153,0);
Msg("Find size of GLfloat (8153)\n");
#endif

#ifdef __i386__
CheckTypeSize(GLfloat,4, 8154, 2)
#elif __ia64__
CheckTypeSize(GLfloat,4, 8154, 3)
#elif __powerpc__
CheckTypeSize(GLfloat,4, 8154, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8154,0);
Msg("Find size of GLclampf (8154)\n");
#endif

#ifdef __i386__
CheckTypeSize(GLclampf,4, 8155, 2)
#elif __ia64__
CheckTypeSize(GLclampf,4, 8155, 3)
#elif __powerpc__
CheckTypeSize(GLclampf,4, 8155, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8155,0);
Msg("Find size of GLdouble (8155)\n");
#endif

#ifdef __i386__
CheckTypeSize(GLdouble,8, 8156, 2)
#elif __ia64__
CheckTypeSize(GLdouble,8, 8156, 3)
#elif __powerpc__
CheckTypeSize(GLdouble,8, 8156, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8156,0);
Msg("Find size of GLclampd (8156)\n");
#endif

#ifdef __i386__
CheckTypeSize(GLclampd,8, 8157, 2)
#elif __ia64__
CheckTypeSize(GLclampd,8, 8157, 3)
#elif __powerpc__
CheckTypeSize(GLclampd,8, 8157, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8157,0);
Msg("Find size of GLclampd (8157)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in GL/gl.h\n",cnt);
return cnt;
#endif

}
