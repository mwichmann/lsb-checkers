/*
 * Test of GL/gl.h
 */
#include "hdrchk.h"
#include "sys/types.h"
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

#ifdef GL_UNSIGNED_BYTE
	CompareConstant(GL_UNSIGNED_BYTE,0x1401)
#else
Msg( "Error: Constant not found: GL_UNSIGNED_BYTE\n");
cnt++;
#endif

#ifdef GL_SHORT
	CompareConstant(GL_SHORT,0x1402)
#else
Msg( "Error: Constant not found: GL_SHORT\n");
cnt++;
#endif

#ifdef GL_UNSIGNED_SHORT
	CompareConstant(GL_UNSIGNED_SHORT,0x1403)
#else
Msg( "Error: Constant not found: GL_UNSIGNED_SHORT\n");
cnt++;
#endif

#ifdef GL_INT
	CompareConstant(GL_INT,0x1404)
#else
Msg( "Error: Constant not found: GL_INT\n");
cnt++;
#endif

#ifdef GL_UNSIGNED_INT
	CompareConstant(GL_UNSIGNED_INT,0x1405)
#else
Msg( "Error: Constant not found: GL_UNSIGNED_INT\n");
cnt++;
#endif

#ifdef GL_FLOAT
	CompareConstant(GL_FLOAT,0x1406)
#else
Msg( "Error: Constant not found: GL_FLOAT\n");
cnt++;
#endif

#ifdef GL_DOUBLE
	CompareConstant(GL_DOUBLE,0x140A)
#else
Msg( "Error: Constant not found: GL_DOUBLE\n");
cnt++;
#endif

#ifdef GL_2_BYTES
	CompareConstant(GL_2_BYTES,0x1407)
#else
Msg( "Error: Constant not found: GL_2_BYTES\n");
cnt++;
#endif

#ifdef GL_3_BYTES
	CompareConstant(GL_3_BYTES,0x1408)
#else
Msg( "Error: Constant not found: GL_3_BYTES\n");
cnt++;
#endif

#ifdef GL_4_BYTES
	CompareConstant(GL_4_BYTES,0x1409)
#else
Msg( "Error: Constant not found: GL_4_BYTES\n");
cnt++;
#endif

#ifdef GL_POINTS
	CompareConstant(GL_POINTS,0x0000)
#else
Msg( "Error: Constant not found: GL_POINTS\n");
cnt++;
#endif

#ifdef GL_LINES
	CompareConstant(GL_LINES,0x0001)
#else
Msg( "Error: Constant not found: GL_LINES\n");
cnt++;
#endif

#ifdef GL_LINE_LOOP
	CompareConstant(GL_LINE_LOOP,0x0002)
#else
Msg( "Error: Constant not found: GL_LINE_LOOP\n");
cnt++;
#endif

#ifdef GL_LINE_STRIP
	CompareConstant(GL_LINE_STRIP,0x0003)
#else
Msg( "Error: Constant not found: GL_LINE_STRIP\n");
cnt++;
#endif

#ifdef GL_TRIANGLES
	CompareConstant(GL_TRIANGLES,0x0004)
#else
Msg( "Error: Constant not found: GL_TRIANGLES\n");
cnt++;
#endif

#ifdef GL_TRIANGLE_STRIP
	CompareConstant(GL_TRIANGLE_STRIP,0x0005)
#else
Msg( "Error: Constant not found: GL_TRIANGLE_STRIP\n");
cnt++;
#endif

#ifdef GL_TRIANGLE_FAN
	CompareConstant(GL_TRIANGLE_FAN,0x0006)
#else
Msg( "Error: Constant not found: GL_TRIANGLE_FAN\n");
cnt++;
#endif

#ifdef GL_QUADS
	CompareConstant(GL_QUADS,0x0007)
#else
Msg( "Error: Constant not found: GL_QUADS\n");
cnt++;
#endif

#ifdef GL_QUAD_STRIP
	CompareConstant(GL_QUAD_STRIP,0x0008)
#else
Msg( "Error: Constant not found: GL_QUAD_STRIP\n");
cnt++;
#endif

#ifdef GL_POLYGON
	CompareConstant(GL_POLYGON,0x0009)
#else
Msg( "Error: Constant not found: GL_POLYGON\n");
cnt++;
#endif

#ifdef GL_VERTEX_ARRAY
	CompareConstant(GL_VERTEX_ARRAY,0x8074)
#else
Msg( "Error: Constant not found: GL_VERTEX_ARRAY\n");
cnt++;
#endif

#ifdef GL_NORMAL_ARRAY
	CompareConstant(GL_NORMAL_ARRAY,0x8075)
#else
Msg( "Error: Constant not found: GL_NORMAL_ARRAY\n");
cnt++;
#endif

#ifdef GL_COLOR_ARRAY
	CompareConstant(GL_COLOR_ARRAY,0x8076)
#else
Msg( "Error: Constant not found: GL_COLOR_ARRAY\n");
cnt++;
#endif

#ifdef GL_INDEX_ARRAY
	CompareConstant(GL_INDEX_ARRAY,0x8077)
#else
Msg( "Error: Constant not found: GL_INDEX_ARRAY\n");
cnt++;
#endif

#ifdef GL_TEXTURE_COORD_ARRAY
	CompareConstant(GL_TEXTURE_COORD_ARRAY,0x8078)
#else
Msg( "Error: Constant not found: GL_TEXTURE_COORD_ARRAY\n");
cnt++;
#endif

#ifdef GL_EDGE_FLAG_ARRAY
	CompareConstant(GL_EDGE_FLAG_ARRAY,0x8079)
#else
Msg( "Error: Constant not found: GL_EDGE_FLAG_ARRAY\n");
cnt++;
#endif

#ifdef GL_VERTEX_ARRAY_SIZE
	CompareConstant(GL_VERTEX_ARRAY_SIZE,0x807A)
#else
Msg( "Error: Constant not found: GL_VERTEX_ARRAY_SIZE\n");
cnt++;
#endif

#ifdef GL_VERTEX_ARRAY_TYPE
	CompareConstant(GL_VERTEX_ARRAY_TYPE,0x807B)
#else
Msg( "Error: Constant not found: GL_VERTEX_ARRAY_TYPE\n");
cnt++;
#endif

#ifdef GL_VERTEX_ARRAY_STRIDE
	CompareConstant(GL_VERTEX_ARRAY_STRIDE,0x807C)
#else
Msg( "Error: Constant not found: GL_VERTEX_ARRAY_STRIDE\n");
cnt++;
#endif

#ifdef GL_NORMAL_ARRAY_TYPE
	CompareConstant(GL_NORMAL_ARRAY_TYPE,0x807E)
#else
Msg( "Error: Constant not found: GL_NORMAL_ARRAY_TYPE\n");
cnt++;
#endif

#ifdef GL_NORMAL_ARRAY_STRIDE
	CompareConstant(GL_NORMAL_ARRAY_STRIDE,0x807F)
#else
Msg( "Error: Constant not found: GL_NORMAL_ARRAY_STRIDE\n");
cnt++;
#endif

#ifdef GL_COLOR_ARRAY_SIZE
	CompareConstant(GL_COLOR_ARRAY_SIZE,0x8081)
#else
Msg( "Error: Constant not found: GL_COLOR_ARRAY_SIZE\n");
cnt++;
#endif

#ifdef GL_COLOR_ARRAY_TYPE
	CompareConstant(GL_COLOR_ARRAY_TYPE,0x8082)
#else
Msg( "Error: Constant not found: GL_COLOR_ARRAY_TYPE\n");
cnt++;
#endif

#ifdef GL_COLOR_ARRAY_STRIDE
	CompareConstant(GL_COLOR_ARRAY_STRIDE,0x8083)
#else
Msg( "Error: Constant not found: GL_COLOR_ARRAY_STRIDE\n");
cnt++;
#endif

#ifdef GL_INDEX_ARRAY_TYPE
	CompareConstant(GL_INDEX_ARRAY_TYPE,0x8085)
#else
Msg( "Error: Constant not found: GL_INDEX_ARRAY_TYPE\n");
cnt++;
#endif

#ifdef GL_INDEX_ARRAY_STRIDE
	CompareConstant(GL_INDEX_ARRAY_STRIDE,0x8086)
#else
Msg( "Error: Constant not found: GL_INDEX_ARRAY_STRIDE\n");
cnt++;
#endif

#ifdef GL_TEXTURE_COORD_ARRAY_SIZE
	CompareConstant(GL_TEXTURE_COORD_ARRAY_SIZE,0x8088)
#else
Msg( "Error: Constant not found: GL_TEXTURE_COORD_ARRAY_SIZE\n");
cnt++;
#endif

#ifdef GL_TEXTURE_COORD_ARRAY_TYPE
	CompareConstant(GL_TEXTURE_COORD_ARRAY_TYPE,0x8089)
#else
Msg( "Error: Constant not found: GL_TEXTURE_COORD_ARRAY_TYPE\n");
cnt++;
#endif

#ifdef GL_TEXTURE_COORD_ARRAY_STRIDE
	CompareConstant(GL_TEXTURE_COORD_ARRAY_STRIDE,0x808A)
#else
Msg( "Error: Constant not found: GL_TEXTURE_COORD_ARRAY_STRIDE\n");
cnt++;
#endif

#ifdef GL_EDGE_FLAG_ARRAY_STRIDE
	CompareConstant(GL_EDGE_FLAG_ARRAY_STRIDE,0x808C)
#else
Msg( "Error: Constant not found: GL_EDGE_FLAG_ARRAY_STRIDE\n");
cnt++;
#endif

#ifdef GL_VERTEX_ARRAY_POINTER
	CompareConstant(GL_VERTEX_ARRAY_POINTER,0x808E)
#else
Msg( "Error: Constant not found: GL_VERTEX_ARRAY_POINTER\n");
cnt++;
#endif

#ifdef GL_NORMAL_ARRAY_POINTER
	CompareConstant(GL_NORMAL_ARRAY_POINTER,0x808F)
#else
Msg( "Error: Constant not found: GL_NORMAL_ARRAY_POINTER\n");
cnt++;
#endif

#ifdef GL_COLOR_ARRAY_POINTER
	CompareConstant(GL_COLOR_ARRAY_POINTER,0x8090)
#else
Msg( "Error: Constant not found: GL_COLOR_ARRAY_POINTER\n");
cnt++;
#endif

#ifdef GL_INDEX_ARRAY_POINTER
	CompareConstant(GL_INDEX_ARRAY_POINTER,0x8091)
#else
Msg( "Error: Constant not found: GL_INDEX_ARRAY_POINTER\n");
cnt++;
#endif

#ifdef GL_TEXTURE_COORD_ARRAY_POINTER
	CompareConstant(GL_TEXTURE_COORD_ARRAY_POINTER,0x8092)
#else
Msg( "Error: Constant not found: GL_TEXTURE_COORD_ARRAY_POINTER\n");
cnt++;
#endif

#ifdef GL_V2F
	CompareConstant(GL_V2F,0x2A20)
#else
Msg( "Error: Constant not found: GL_V2F\n");
cnt++;
#endif

#ifdef GL_V3F
	CompareConstant(GL_V3F,0x2A21)
#else
Msg( "Error: Constant not found: GL_V3F\n");
cnt++;
#endif

#ifdef GL_C4UB_V2F
	CompareConstant(GL_C4UB_V2F,0x2A22)
#else
Msg( "Error: Constant not found: GL_C4UB_V2F\n");
cnt++;
#endif

#ifdef GL_C4UB_V3F
	CompareConstant(GL_C4UB_V3F,0x2A23)
#else
Msg( "Error: Constant not found: GL_C4UB_V3F\n");
cnt++;
#endif

#ifdef GL_C3F_V3F
	CompareConstant(GL_C3F_V3F,0x2A24)
#else
Msg( "Error: Constant not found: GL_C3F_V3F\n");
cnt++;
#endif

#ifdef GL_N3F_V3F
	CompareConstant(GL_N3F_V3F,0x2A25)
#else
Msg( "Error: Constant not found: GL_N3F_V3F\n");
cnt++;
#endif

#ifdef GL_C4F_N3F_V3F
	CompareConstant(GL_C4F_N3F_V3F,0x2A26)
#else
Msg( "Error: Constant not found: GL_C4F_N3F_V3F\n");
cnt++;
#endif

#ifdef GL_T2F_V3F
	CompareConstant(GL_T2F_V3F,0x2A27)
#else
Msg( "Error: Constant not found: GL_T2F_V3F\n");
cnt++;
#endif

#ifdef GL_T4F_V4F
	CompareConstant(GL_T4F_V4F,0x2A28)
#else
Msg( "Error: Constant not found: GL_T4F_V4F\n");
cnt++;
#endif

#ifdef GL_T2F_C4UB_V3F
	CompareConstant(GL_T2F_C4UB_V3F,0x2A29)
#else
Msg( "Error: Constant not found: GL_T2F_C4UB_V3F\n");
cnt++;
#endif

#ifdef GL_T2F_C3F_V3F
	CompareConstant(GL_T2F_C3F_V3F,0x2A2A)
#else
Msg( "Error: Constant not found: GL_T2F_C3F_V3F\n");
cnt++;
#endif

#ifdef GL_T2F_N3F_V3F
	CompareConstant(GL_T2F_N3F_V3F,0x2A2B)
#else
Msg( "Error: Constant not found: GL_T2F_N3F_V3F\n");
cnt++;
#endif

#ifdef GL_T2F_C4F_N3F_V3F
	CompareConstant(GL_T2F_C4F_N3F_V3F,0x2A2C)
#else
Msg( "Error: Constant not found: GL_T2F_C4F_N3F_V3F\n");
cnt++;
#endif

#ifdef GL_T4F_C4F_N3F_V4F
	CompareConstant(GL_T4F_C4F_N3F_V4F,0x2A2D)
#else
Msg( "Error: Constant not found: GL_T4F_C4F_N3F_V4F\n");
cnt++;
#endif

#ifdef GL_MATRIX_MODE
	CompareConstant(GL_MATRIX_MODE,0x0BA0)
#else
Msg( "Error: Constant not found: GL_MATRIX_MODE\n");
cnt++;
#endif

#ifdef GL_MODELVIEW
	CompareConstant(GL_MODELVIEW,0x1700)
#else
Msg( "Error: Constant not found: GL_MODELVIEW\n");
cnt++;
#endif

#ifdef GL_PROJECTION
	CompareConstant(GL_PROJECTION,0x1701)
#else
Msg( "Error: Constant not found: GL_PROJECTION\n");
cnt++;
#endif

#ifdef GL_TEXTURE
	CompareConstant(GL_TEXTURE,0x1702)
#else
Msg( "Error: Constant not found: GL_TEXTURE\n");
cnt++;
#endif

#ifdef __i386__
CheckTypeSize(GLenum,4, 8143, 2)
#elif __ia64__
CheckTypeSize(GLenum,4, 8143, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8143,0);
#endif

#ifdef __i386__
CheckTypeSize(GLboolean,1, 8144, 2)
#elif __ia64__
CheckTypeSize(GLboolean,1, 8144, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8144,0);
#endif

#ifdef __i386__
CheckTypeSize(GLbitfield,4, 8145, 2)
#elif __ia64__
CheckTypeSize(GLbitfield,4, 8145, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8145,0);
#endif

#ifdef __i386__
CheckTypeSize(GLbyte,1, 8147, 2)
#elif __ia64__
CheckTypeSize(GLbyte,1, 8147, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8147,0);
#endif

#ifdef __i386__
CheckTypeSize(GLshort,2, 8148, 2)
#elif __ia64__
CheckTypeSize(GLshort,2, 8148, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8148,0);
#endif

#ifdef __i386__
CheckTypeSize(GLint,4, 8149, 2)
#elif __ia64__
CheckTypeSize(GLint,4, 8149, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8149,0);
#endif

#ifdef __i386__
CheckTypeSize(GLubyte,1, 8150, 2)
#elif __ia64__
CheckTypeSize(GLubyte,1, 8150, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8150,0);
#endif

#ifdef __i386__
CheckTypeSize(GLushort,2, 8151, 2)
#elif __ia64__
CheckTypeSize(GLushort,2, 8151, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8151,0);
#endif

#ifdef __i386__
CheckTypeSize(GLuint,4, 8152, 2)
#elif __ia64__
CheckTypeSize(GLuint,4, 8152, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8152,0);
#endif

#ifdef __i386__
CheckTypeSize(GLsizei,4, 8153, 2)
#elif __ia64__
CheckTypeSize(GLsizei,4, 8153, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8153,0);
#endif

#ifdef __i386__
CheckTypeSize(GLfloat,4, 8154, 2)
#elif __ia64__
CheckTypeSize(GLfloat,4, 8154, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8154,0);
#endif

#ifdef __i386__
CheckTypeSize(GLclampf,4, 8155, 2)
#elif __ia64__
CheckTypeSize(GLclampf,4, 8155, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8155,0);
#endif

#ifdef __i386__
CheckTypeSize(GLdouble,8, 8156, 2)
#elif __ia64__
CheckTypeSize(GLdouble,8, 8156, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8156,0);
#endif

#ifdef __i386__
CheckTypeSize(GLclampd,8, 8157, 2)
#elif __ia64__
CheckTypeSize(GLclampd,8, 8157, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8157,0);
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
