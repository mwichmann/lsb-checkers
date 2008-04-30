/*
 * Test of X11/ConstrainP.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
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
CheckTypeSize(ConstraintClassRec,312, 10258, 3, 1.2, NULL, 10257, NULL)
#elif defined __i386__
CheckTypeSize(ConstraintClassRec,164, 10258, 2, 1.2, NULL, 10257, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(ConstraintClassRec,164, 10258, 6, 1.2, NULL, 10257, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(ConstraintClassRec,164, 10258, 10, 1.2, NULL, 10257, NULL)
#elif defined __powerpc64__
CheckTypeSize(ConstraintClassRec,312, 10258, 9, 1.2, NULL, 10257, NULL)
#elif defined __s390x__
CheckTypeSize(ConstraintClassRec,312, 10258, 12, 1.2, NULL, 10257, NULL)
#elif defined __x86_64__
CheckTypeSize(ConstraintClassRec,312, 10258, 11, 1.2, NULL, 10257, NULL)
#else
Msg("Find size of ConstraintClassRec (10258)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,10257,NULL);\n",architecture,10258,0);
#endif

#if 1
CheckTypeSize(struct _ConstraintClassPart,48, 100649, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _ConstraintClassPart on All\n");
CheckOffset(struct _ConstraintClassPart,resources,0,1,78450)
CheckOffset(struct _ConstraintClassPart,num_resources,0,1,78451)
CheckOffset(struct _ConstraintClassPart,constraint_size,0,1,78452)
CheckOffset(struct _ConstraintClassPart,initialize,0,1,78453)
CheckOffset(struct _ConstraintClassPart,destroy,0,1,78454)
CheckOffset(struct _ConstraintClassPart,set_values,0,1,78455)
CheckOffset(struct _ConstraintClassPart,extension,0,1,78456)
#endif

#if 1
CheckTypeSize(ConstraintClassPart,48, 100650, 1, 1.2, NULL, 100649, NULL)
#endif

#if 1
CheckTypeSize(struct _ConstraintClassRec,312, 100651, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _ConstraintClassRec on All\n");
CheckOffset(struct _ConstraintClassRec,core_class,0,1,78457)
CheckOffset(struct _ConstraintClassRec,composite_class,0,1,78458)
CheckOffset(struct _ConstraintClassRec,constraint_class,0,1,78459)
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
