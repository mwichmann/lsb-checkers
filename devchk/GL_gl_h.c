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
CheckTypeSize(GLenum,4,8143)
#elif __ia64__
CheckTypeSize(GLenum,4,8143)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8143,0);
#endif
#ifdef __i386__
CheckTypeSize(GLboolean,1,8144)
#elif __ia64__
CheckTypeSize(GLboolean,1,8144)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8144,0);
#endif
#ifdef __i386__
CheckTypeSize(GLbitfield,4,8145)
#elif __ia64__
CheckTypeSize(GLbitfield,4,8145)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8145,0);
#endif
#ifdef __i386__
CheckTypeSize(GLbyte,1,8147)
#elif __ia64__
CheckTypeSize(GLbyte,1,8147)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8147,0);
#endif
#ifdef __i386__
CheckTypeSize(GLshort,2,8148)
#elif __ia64__
CheckTypeSize(GLshort,2,8148)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8148,0);
#endif
#ifdef __i386__
CheckTypeSize(GLint,4,8149)
#elif __ia64__
CheckTypeSize(GLint,4,8149)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8149,0);
#endif
#ifdef __i386__
CheckTypeSize(GLubyte,1,8150)
#elif __ia64__
CheckTypeSize(GLubyte,1,8150)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8150,0);
#endif
#ifdef __i386__
CheckTypeSize(GLushort,2,8151)
#elif __ia64__
CheckTypeSize(GLushort,2,8151)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8151,0);
#endif
#ifdef __i386__
CheckTypeSize(GLuint,4,8152)
#elif __ia64__
CheckTypeSize(GLuint,4,8152)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8152,0);
#endif
#ifdef __i386__
CheckTypeSize(GLsizei,4,8153)
#elif __ia64__
CheckTypeSize(GLsizei,4,8153)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8153,0);
#endif
#ifdef __i386__
CheckTypeSize(GLfloat,4,8154)
#elif __ia64__
CheckTypeSize(GLfloat,4,8154)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8154,0);
#endif
#ifdef __i386__
CheckTypeSize(GLclampf,4,8155)
#elif __ia64__
CheckTypeSize(GLclampf,4,8155)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8155,0);
#endif
#ifdef __i386__
CheckTypeSize(GLdouble,8,8156)
#elif __ia64__
CheckTypeSize(GLdouble,8,8156)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8156,0);
#endif
#ifdef __i386__
CheckTypeSize(GLclampd,8,8157)
#elif __ia64__
CheckTypeSize(GLclampd,8,8157)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8157,0);
#endif
printf("%d tests in GL/gl.h\n",cnt);
return cnt;
}
