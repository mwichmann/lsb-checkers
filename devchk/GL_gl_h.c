/*
 * Test of GL/gl.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "GL/gl.h"



int GL_gl_h()
{
int cnt=0;
#ifdef __i386__
CheckTypeSize(GLenum,4,6424)
#elif __ia64__
CheckTypeSize(GLenum,4,6424)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6424,0);
#endif
#ifdef __i386__
CheckTypeSize(GLboolean,1,6425)
#elif __ia64__
CheckTypeSize(GLboolean,1,6425)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6425,0);
#endif
#ifdef __i386__
CheckTypeSize(GLbitfield,4,6426)
#elif __ia64__
CheckTypeSize(GLbitfield,4,6426)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6426,0);
#endif
#ifdef __i386__
CheckTypeSize(GLbyte,1,6428)
#elif __ia64__
CheckTypeSize(GLbyte,1,6428)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6428,0);
#endif
#ifdef __i386__
CheckTypeSize(GLshort,2,6429)
#elif __ia64__
CheckTypeSize(GLshort,2,6429)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6429,0);
#endif
#ifdef __i386__
CheckTypeSize(GLint,4,6430)
#elif __ia64__
CheckTypeSize(GLint,4,6430)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6430,0);
#endif
#ifdef __i386__
CheckTypeSize(GLubyte,1,6431)
#elif __ia64__
CheckTypeSize(GLubyte,1,6431)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6431,0);
#endif
#ifdef __i386__
CheckTypeSize(GLushort,2,6432)
#elif __ia64__
CheckTypeSize(GLushort,2,6432)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6432,0);
#endif
#ifdef __i386__
CheckTypeSize(GLuint,4,6433)
#elif __ia64__
CheckTypeSize(GLuint,4,6433)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6433,0);
#endif
#ifdef __i386__
CheckTypeSize(GLsizei,4,6434)
#elif __ia64__
CheckTypeSize(GLsizei,4,6434)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6434,0);
#endif
#ifdef __i386__
CheckTypeSize(GLfloat,4,6435)
#elif __ia64__
CheckTypeSize(GLfloat,4,6435)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6435,0);
#endif
#ifdef __i386__
CheckTypeSize(GLclampf,4,6436)
#elif __ia64__
CheckTypeSize(GLclampf,4,6436)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6436,0);
#endif
#ifdef __i386__
CheckTypeSize(GLdouble,8,6437)
#elif __ia64__
CheckTypeSize(GLdouble,8,6437)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6437,0);
#endif
#ifdef __i386__
CheckTypeSize(GLclampd,8,6438)
#elif __ia64__
CheckTypeSize(GLclampd,8,6438)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6438,0);
#endif
printf("%d tests in GL/gl.h\n",cnt);
return cnt;
}
