/*
 * Test of GL/glx.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include <wchar.h>
#include <X11/X.h>
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include "GL/glx.h"



#ifdef TET_TEST
void GL_glx_h()
{
#else
int GL_glx_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in GL/glx.h\n");
#endif

printf("Checking data structures in GL/glx.h\n");
#if defined __i386__
CheckTypeSize(GLXContext,4, 8164, 2, 1.0, NULL, 7668, NULL)
#elif defined __ia64__
CheckTypeSize(GLXContext,8, 8164, 3, 1.3, NULL, 7668, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GLXContext,4, 8164, 6, 1.2, NULL, 7668, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GLXContext,4, 8164, 10, 1.3, NULL, 7668, NULL)
#elif defined __powerpc64__
CheckTypeSize(GLXContext,8, 8164, 9, 2.0, NULL, 7668, NULL)
#elif defined __s390x__
CheckTypeSize(GLXContext,8, 8164, 12, 1.3, NULL, 7668, NULL)
#elif defined __x86_64__
CheckTypeSize(GLXContext,8, 8164, 11, 2.0, NULL, 7668, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of GLXContext (8164)\n");
%d,%d,%d,'""2.0""',NULL,7668,NULL);\n",architecture,8164,0);
#endif

#if defined __i386__
CheckTypeSize(GLXFBConfig,4, 8165, 2, 1.2, NULL, 7671, NULL)
#elif defined __ia64__
CheckTypeSize(GLXFBConfig,8, 8165, 3, 1.3, NULL, 7671, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GLXFBConfig,4, 8165, 6, 1.2, NULL, 7671, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GLXFBConfig,4, 8165, 10, 1.3, NULL, 7671, NULL)
#elif defined __powerpc64__
CheckTypeSize(GLXFBConfig,8, 8165, 9, 2.0, NULL, 7671, NULL)
#elif defined __s390x__
CheckTypeSize(GLXFBConfig,8, 8165, 12, 1.3, NULL, 7671, NULL)
#elif defined __x86_64__
CheckTypeSize(GLXFBConfig,8, 8165, 11, 2.0, NULL, 7671, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of GLXFBConfig (8165)\n");
%d,%d,%d,'""2.0""',NULL,7671,NULL);\n",architecture,8165,0);
#endif

#if defined __i386__
CheckTypeSize(GLXContextID,4, 8717, 2, 1.0, NULL, 8171, NULL)
#elif defined __ia64__
CheckTypeSize(GLXContextID,8, 8717, 3, 1.3, NULL, 8171, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GLXContextID,4, 8717, 6, 1.2, NULL, 8171, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GLXContextID,4, 8717, 10, 1.3, NULL, 8171, NULL)
#elif defined __powerpc64__
CheckTypeSize(GLXContextID,8, 8717, 9, 2.0, NULL, 8171, NULL)
#elif defined __s390x__
CheckTypeSize(GLXContextID,8, 8717, 12, 1.3, NULL, 8171, NULL)
#elif defined __x86_64__
CheckTypeSize(GLXContextID,8, 8717, 11, 2.0, NULL, 8171, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of GLXContextID (8717)\n");
%d,%d,%d,'""2.0""',NULL,8171,NULL);\n",architecture,8717,0);
#endif

#if defined __i386__
CheckTypeSize(GLXPixmap,4, 8718, 2, 1.0, NULL, 8171, NULL)
#elif defined __ia64__
CheckTypeSize(GLXPixmap,8, 8718, 3, 1.3, NULL, 8171, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GLXPixmap,4, 8718, 6, 1.2, NULL, 8171, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GLXPixmap,4, 8718, 10, 1.3, NULL, 8171, NULL)
#elif defined __powerpc64__
CheckTypeSize(GLXPixmap,8, 8718, 9, 2.0, NULL, 8171, NULL)
#elif defined __s390x__
CheckTypeSize(GLXPixmap,8, 8718, 12, 1.3, NULL, 8171, NULL)
#elif defined __x86_64__
CheckTypeSize(GLXPixmap,8, 8718, 11, 2.0, NULL, 8171, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of GLXPixmap (8718)\n");
%d,%d,%d,'""2.0""',NULL,8171,NULL);\n",architecture,8718,0);
#endif

#if defined __i386__
CheckTypeSize(GLXDrawable,4, 8719, 2, 1.0, NULL, 8171, NULL)
#elif defined __ia64__
CheckTypeSize(GLXDrawable,8, 8719, 3, 1.3, NULL, 8171, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GLXDrawable,4, 8719, 6, 1.2, NULL, 8171, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GLXDrawable,4, 8719, 10, 1.3, NULL, 8171, NULL)
#elif defined __powerpc64__
CheckTypeSize(GLXDrawable,8, 8719, 9, 2.0, NULL, 8171, NULL)
#elif defined __s390x__
CheckTypeSize(GLXDrawable,8, 8719, 12, 1.3, NULL, 8171, NULL)
#elif defined __x86_64__
CheckTypeSize(GLXDrawable,8, 8719, 11, 2.0, NULL, 8171, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of GLXDrawable (8719)\n");
%d,%d,%d,'""2.0""',NULL,8171,NULL);\n",architecture,8719,0);
#endif

#if defined __i386__
CheckTypeSize(GLXPbuffer,4, 8720, 2, 1.0, NULL, 8171, NULL)
#elif defined __ia64__
CheckTypeSize(GLXPbuffer,8, 8720, 3, 1.3, NULL, 8171, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GLXPbuffer,4, 8720, 6, 1.2, NULL, 8171, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GLXPbuffer,4, 8720, 10, 1.3, NULL, 8171, NULL)
#elif defined __powerpc64__
CheckTypeSize(GLXPbuffer,8, 8720, 9, 2.0, NULL, 8171, NULL)
#elif defined __s390x__
CheckTypeSize(GLXPbuffer,8, 8720, 12, 1.3, NULL, 8171, NULL)
#elif defined __x86_64__
CheckTypeSize(GLXPbuffer,8, 8720, 11, 2.0, NULL, 8171, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of GLXPbuffer (8720)\n");
%d,%d,%d,'""2.0""',NULL,8171,NULL);\n",architecture,8720,0);
#endif

#if defined __i386__
CheckTypeSize(GLXWindow,4, 8721, 2, 1.0, NULL, 8171, NULL)
#elif defined __ia64__
CheckTypeSize(GLXWindow,8, 8721, 3, 1.3, NULL, 8171, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GLXWindow,4, 8721, 6, 1.2, NULL, 8171, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GLXWindow,4, 8721, 10, 1.3, NULL, 8171, NULL)
#elif defined __powerpc64__
CheckTypeSize(GLXWindow,8, 8721, 9, 2.0, NULL, 8171, NULL)
#elif defined __s390x__
CheckTypeSize(GLXWindow,8, 8721, 12, 1.3, NULL, 8171, NULL)
#elif defined __x86_64__
CheckTypeSize(GLXWindow,8, 8721, 11, 2.0, NULL, 8171, NULL)
#else
Msg("Find size of GLXWindow (8721)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,8171, NULL);\n",architecture,8721,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in GL/glx.h\n\n",pcnt,cnt);
return cnt;
#endif

}
