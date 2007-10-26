/*
 * Test of X11/ConstrainP.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include <wchar.h>
#include <X11/X.h>
#include <X11/Xlib.h>
#include <X11/Intrinsic.h>
#include <X11/IntrinsicP.h>
#include <X11/Core.h>
#include <X11/CoreP.h>
#include "X11/ConstrainP.h"



#ifdef TET_TEST
void X11_ConstrainP_h()
{
#else
int X11_ConstrainP_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in X11/ConstrainP.h\n");
#endif

printf("Checking data structures in X11/ConstrainP.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef XtConstraintExtensionVersion
	CompareConstant(XtConstraintExtensionVersion,1L,4935,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XtConstraintExtensionVersion\n");
cnt++;
#endif

#endif

#if defined __ia64__
CheckTypeSize(ConstraintPart,8, 10250, 3, 1.3, NULL, 10249, NULL)
#elif defined __i386__
CheckTypeSize(ConstraintPart,4, 10250, 2, 1.2, NULL, 10249, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(ConstraintPart,4, 10250, 6, 1.2, NULL, 10249, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(ConstraintPart,4, 10250, 10, 1.3, NULL, 10249, NULL)
#elif defined __powerpc64__
CheckTypeSize(ConstraintPart,8, 10250, 9, 2.0, NULL, 10249, NULL)
#elif defined __s390x__
CheckTypeSize(ConstraintPart,8, 10250, 12, 1.3, NULL, 10249, NULL)
#elif defined __x86_64__
CheckTypeSize(ConstraintPart,8, 10250, 11, 2.0, NULL, 10249, NULL)
#else
Msg("Find size of ConstraintPart (10250)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,10249,NULL);\n",architecture,10250,0);
#endif

#if defined __ia64__
CheckTypeSize(ConstraintClassPart,48, 10252, 3, 1.3, NULL, 10251, NULL)
#elif defined __i386__
CheckTypeSize(ConstraintClassPart,28, 10252, 2, 1.2, NULL, 10251, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(ConstraintClassPart,28, 10252, 6, 1.2, NULL, 10251, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(ConstraintClassPart,28, 10252, 10, 1.3, NULL, 10251, NULL)
#elif defined __powerpc64__
CheckTypeSize(ConstraintClassPart,48, 10252, 9, 2.0, NULL, 10251, NULL)
#elif defined __s390x__
CheckTypeSize(ConstraintClassPart,48, 10252, 12, 1.3, NULL, 10251, NULL)
#elif defined __x86_64__
CheckTypeSize(ConstraintClassPart,48, 10252, 11, 2.0, NULL, 10251, NULL)
#else
Msg("Find size of ConstraintClassPart (10252)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,10251,NULL);\n",architecture,10252,0);
#endif

#if defined __ia64__
CheckTypeSize(ConstraintClassRec,312, 10258, 3, 1.3, NULL, 10257, NULL)
#elif defined __i386__
CheckTypeSize(ConstraintClassRec,164, 10258, 2, 1.2, NULL, 10257, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(ConstraintClassRec,164, 10258, 6, 1.2, NULL, 10257, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(ConstraintClassRec,164, 10258, 10, 1.3, NULL, 10257, NULL)
#elif defined __powerpc64__
CheckTypeSize(ConstraintClassRec,312, 10258, 9, 2.0, NULL, 10257, NULL)
#elif defined __s390x__
CheckTypeSize(ConstraintClassRec,312, 10258, 12, 1.3, NULL, 10257, NULL)
#elif defined __x86_64__
CheckTypeSize(ConstraintClassRec,312, 10258, 11, 2.0, NULL, 10257, NULL)
#else
Msg("Find size of ConstraintClassRec (10258)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,10257, NULL);\n",architecture,10258,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/ConstrainP.h\n\n",pcnt,cnt);
return cnt;
#endif

}
