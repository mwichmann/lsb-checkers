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

#ifdef __i386__
CheckTypeSize(GLenum,4)
#elif __ia64__
CheckTypeSize(GLenum,4)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8143,0);
#endif

#ifdef __i386__
CheckTypeSize(GLboolean,1)
#elif __ia64__
CheckTypeSize(GLboolean,1)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8144,0);
#endif

#ifdef __i386__
CheckTypeSize(GLbitfield,4)
#elif __ia64__
CheckTypeSize(GLbitfield,4)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8145,0);
#endif

#ifdef __i386__
CheckTypeSize(GLbyte,1)
#elif __ia64__
CheckTypeSize(GLbyte,1)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8147,0);
#endif

#ifdef __i386__
CheckTypeSize(GLshort,2)
#elif __ia64__
CheckTypeSize(GLshort,2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8148,0);
#endif

#ifdef __i386__
CheckTypeSize(GLint,4)
#elif __ia64__
CheckTypeSize(GLint,4)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8149,0);
#endif

#ifdef __i386__
CheckTypeSize(GLubyte,1)
#elif __ia64__
CheckTypeSize(GLubyte,1)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8150,0);
#endif

#ifdef __i386__
CheckTypeSize(GLushort,2)
#elif __ia64__
CheckTypeSize(GLushort,2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8151,0);
#endif

#ifdef __i386__
CheckTypeSize(GLuint,4)
#elif __ia64__
CheckTypeSize(GLuint,4)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8152,0);
#endif

#ifdef __i386__
CheckTypeSize(GLsizei,4)
#elif __ia64__
CheckTypeSize(GLsizei,4)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8153,0);
#endif

#ifdef __i386__
CheckTypeSize(GLfloat,4)
#elif __ia64__
CheckTypeSize(GLfloat,4)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8154,0);
#endif

#ifdef __i386__
CheckTypeSize(GLclampf,4)
#elif __ia64__
CheckTypeSize(GLclampf,4)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8155,0);
#endif

#ifdef __i386__
CheckTypeSize(GLdouble,8)
#elif __ia64__
CheckTypeSize(GLdouble,8)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8156,0);
#endif

#ifdef __i386__
CheckTypeSize(GLclampd,8)
#elif __ia64__
CheckTypeSize(GLclampd,8)
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
