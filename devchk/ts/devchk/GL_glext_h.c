/*
 * Test of GL/glext.h
 */
#include "hdrchk.h"
#include <stdio.h>
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
#ifdef TET_TEST
Msg("Checking data structures in GL/glext.h\n");
#endif

printf("Checking data structures in GL/glext.h\n");
#if 1
CheckTypeSize(GLhandleARB,4, 31668, 1, 1.0, NULL, 7, NULL)
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(GLintptr,4, 31669, 10, 1.0, NULL, 8, NULL)
#elif defined __x86_64__
CheckTypeSize(GLintptr,8, 31669, 11, 1.0, NULL, 8, NULL)
#elif defined __s390x__
CheckTypeSize(GLintptr,8, 31669, 12, 1.0, NULL, 8, NULL)
#elif defined __i386__
CheckTypeSize(GLintptr,4, 31669, 2, 1.0, NULL, 8, NULL)
#elif defined __ia64__
CheckTypeSize(GLintptr,8, 31669, 3, 1.0, NULL, 8, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GLintptr,4, 31669, 6, 1.0, NULL, 8, NULL)
#elif defined __powerpc64__
CheckTypeSize(GLintptr,4, 31669, 9, 1.0, NULL, 8, NULL)
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

#if defined __s390__ && !defined __s390x__
CheckTypeSize(GLsizeiptr,4, 31682, 10, 1.0, NULL, 9027, NULL)
#elif defined __x86_64__
CheckTypeSize(GLsizeiptr,8, 31682, 11, 1.0, NULL, 9027, NULL)
#elif defined __s390x__
CheckTypeSize(GLsizeiptr,8, 31682, 12, 1.0, NULL, 9027, NULL)
#elif defined __i386__
CheckTypeSize(GLsizeiptr,4, 31682, 2, 1.0, NULL, 9027, NULL)
#elif defined __ia64__
CheckTypeSize(GLsizeiptr,8, 31682, 3, 1.0, NULL, 9027, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GLsizeiptr,4, 31682, 6, 1.0, NULL, 9027, NULL)
#elif defined __powerpc64__
CheckTypeSize(GLsizeiptr,4, 31682, 9, 1.0, NULL, 9027, NULL)
#else
Msg("Find size of GLsizeiptr (31682)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.0""',NULL,9027,NULL);\n",architecture,31682,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(GLsizeiptrARB,4, 31683, 10, 1.0, NULL, 9027, NULL)
#elif defined __x86_64__
CheckTypeSize(GLsizeiptrARB,8, 31683, 11, 1.0, NULL, 9027, NULL)
#elif defined __s390x__
CheckTypeSize(GLsizeiptrARB,8, 31683, 12, 1.0, NULL, 9027, NULL)
#elif defined __i386__
CheckTypeSize(GLsizeiptrARB,4, 31683, 2, 1.0, NULL, 9027, NULL)
#elif defined __ia64__
CheckTypeSize(GLsizeiptrARB,8, 31683, 3, 1.0, NULL, 9027, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GLsizeiptrARB,4, 31683, 6, 1.0, NULL, 9027, NULL)
#elif defined __powerpc64__
CheckTypeSize(GLsizeiptrARB,4, 31683, 9, 1.0, NULL, 9027, NULL)
#else
Msg("Find size of GLsizeiptrARB (31683)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.0""',NULL,9027,NULL);\n",architecture,31683,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(GLintptrARB,4, 31685, 10, 1.0, NULL, 8, NULL)
#elif defined __x86_64__
CheckTypeSize(GLintptrARB,8, 31685, 11, 1.0, NULL, 8, NULL)
#elif defined __s390x__
CheckTypeSize(GLintptrARB,8, 31685, 12, 1.0, NULL, 8, NULL)
#elif defined __i386__
CheckTypeSize(GLintptrARB,4, 31685, 2, 1.0, NULL, 8, NULL)
#elif defined __ia64__
CheckTypeSize(GLintptrARB,8, 31685, 3, 1.0, NULL, 8, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GLintptrARB,4, 31685, 6, 1.0, NULL, 8, NULL)
#elif defined __powerpc64__
CheckTypeSize(GLintptrARB,4, 31685, 9, 1.0, NULL, 8, NULL)
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
