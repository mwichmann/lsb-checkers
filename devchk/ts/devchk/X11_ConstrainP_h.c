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

#if defined __i386__
CheckTypeSize(struct _ConstraintClassPart,28, 100649, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _ConstraintClassPart,num_resources,4,2,78451)
CheckOffset(struct _ConstraintClassPart,num_resources,4,2,78451)
CheckMemberSize(struct _ConstraintClassPart,constraint_size,4,2,78452)
CheckOffset(struct _ConstraintClassPart,constraint_size,8,2,78452)
CheckMemberSize(struct _ConstraintClassPart,initialize,4,2,78453)
CheckOffset(struct _ConstraintClassPart,initialize,12,2,78453)
CheckMemberSize(struct _ConstraintClassPart,destroy,4,2,78454)
CheckOffset(struct _ConstraintClassPart,destroy,16,2,78454)
CheckMemberSize(struct _ConstraintClassPart,set_values,4,2,78455)
CheckOffset(struct _ConstraintClassPart,set_values,20,2,78455)
CheckMemberSize(struct _ConstraintClassPart,extension,4,2,78456)
CheckOffset(struct _ConstraintClassPart,extension,24,2,78456)
#elif defined __ia64__
CheckTypeSize(struct _ConstraintClassPart,48, 100649, 3, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _ConstraintClassPart,num_resources,4,3,78451)
CheckOffset(struct _ConstraintClassPart,num_resources,8,3,78451)
CheckMemberSize(struct _ConstraintClassPart,constraint_size,4,3,78452)
CheckOffset(struct _ConstraintClassPart,constraint_size,12,3,78452)
CheckMemberSize(struct _ConstraintClassPart,initialize,8,3,78453)
CheckOffset(struct _ConstraintClassPart,initialize,16,3,78453)
CheckMemberSize(struct _ConstraintClassPart,destroy,8,3,78454)
CheckOffset(struct _ConstraintClassPart,destroy,24,3,78454)
CheckMemberSize(struct _ConstraintClassPart,set_values,8,3,78455)
CheckOffset(struct _ConstraintClassPart,set_values,32,3,78455)
CheckMemberSize(struct _ConstraintClassPart,extension,8,3,78456)
CheckOffset(struct _ConstraintClassPart,extension,40,3,78456)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _ConstraintClassPart,28, 100649, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _ConstraintClassPart,num_resources,4,6,78451)
CheckOffset(struct _ConstraintClassPart,num_resources,4,6,78451)
CheckMemberSize(struct _ConstraintClassPart,constraint_size,4,6,78452)
CheckOffset(struct _ConstraintClassPart,constraint_size,8,6,78452)
CheckMemberSize(struct _ConstraintClassPart,initialize,4,6,78453)
CheckOffset(struct _ConstraintClassPart,initialize,12,6,78453)
CheckMemberSize(struct _ConstraintClassPart,destroy,4,6,78454)
CheckOffset(struct _ConstraintClassPart,destroy,16,6,78454)
CheckMemberSize(struct _ConstraintClassPart,set_values,4,6,78455)
CheckOffset(struct _ConstraintClassPart,set_values,20,6,78455)
CheckMemberSize(struct _ConstraintClassPart,extension,4,6,78456)
CheckOffset(struct _ConstraintClassPart,extension,24,6,78456)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _ConstraintClassPart,28, 100649, 10, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _ConstraintClassPart,num_resources,4,10,78451)
CheckOffset(struct _ConstraintClassPart,num_resources,4,10,78451)
CheckMemberSize(struct _ConstraintClassPart,constraint_size,4,10,78452)
CheckOffset(struct _ConstraintClassPart,constraint_size,8,10,78452)
CheckMemberSize(struct _ConstraintClassPart,initialize,4,10,78453)
CheckOffset(struct _ConstraintClassPart,initialize,12,10,78453)
CheckMemberSize(struct _ConstraintClassPart,destroy,4,10,78454)
CheckOffset(struct _ConstraintClassPart,destroy,16,10,78454)
CheckMemberSize(struct _ConstraintClassPart,set_values,4,10,78455)
CheckOffset(struct _ConstraintClassPart,set_values,20,10,78455)
CheckMemberSize(struct _ConstraintClassPart,extension,4,10,78456)
CheckOffset(struct _ConstraintClassPart,extension,24,10,78456)
#elif defined __powerpc64__
CheckTypeSize(struct _ConstraintClassPart,48, 100649, 9, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _ConstraintClassPart,num_resources,4,9,78451)
CheckOffset(struct _ConstraintClassPart,num_resources,8,9,78451)
CheckMemberSize(struct _ConstraintClassPart,constraint_size,4,9,78452)
CheckOffset(struct _ConstraintClassPart,constraint_size,12,9,78452)
CheckMemberSize(struct _ConstraintClassPart,initialize,8,9,78453)
CheckOffset(struct _ConstraintClassPart,initialize,16,9,78453)
CheckMemberSize(struct _ConstraintClassPart,destroy,8,9,78454)
CheckOffset(struct _ConstraintClassPart,destroy,24,9,78454)
CheckMemberSize(struct _ConstraintClassPart,set_values,8,9,78455)
CheckOffset(struct _ConstraintClassPart,set_values,32,9,78455)
CheckMemberSize(struct _ConstraintClassPart,extension,8,9,78456)
CheckOffset(struct _ConstraintClassPart,extension,40,9,78456)
#elif defined __x86_64__
CheckTypeSize(struct _ConstraintClassPart,48, 100649, 11, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _ConstraintClassPart,num_resources,4,11,78451)
CheckOffset(struct _ConstraintClassPart,num_resources,8,11,78451)
CheckMemberSize(struct _ConstraintClassPart,constraint_size,4,11,78452)
CheckOffset(struct _ConstraintClassPart,constraint_size,12,11,78452)
CheckMemberSize(struct _ConstraintClassPart,initialize,8,11,78453)
CheckOffset(struct _ConstraintClassPart,initialize,16,11,78453)
CheckMemberSize(struct _ConstraintClassPart,destroy,8,11,78454)
CheckOffset(struct _ConstraintClassPart,destroy,24,11,78454)
CheckMemberSize(struct _ConstraintClassPart,set_values,8,11,78455)
CheckOffset(struct _ConstraintClassPart,set_values,32,11,78455)
CheckMemberSize(struct _ConstraintClassPart,extension,8,11,78456)
CheckOffset(struct _ConstraintClassPart,extension,40,11,78456)
#elif defined __s390x__
CheckTypeSize(struct _ConstraintClassPart,48, 100649, 12, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _ConstraintClassPart,num_resources,4,12,78451)
CheckOffset(struct _ConstraintClassPart,num_resources,8,12,78451)
CheckMemberSize(struct _ConstraintClassPart,constraint_size,4,12,78452)
CheckOffset(struct _ConstraintClassPart,constraint_size,12,12,78452)
CheckMemberSize(struct _ConstraintClassPart,initialize,8,12,78453)
CheckOffset(struct _ConstraintClassPart,initialize,16,12,78453)
CheckMemberSize(struct _ConstraintClassPart,destroy,8,12,78454)
CheckOffset(struct _ConstraintClassPart,destroy,24,12,78454)
CheckMemberSize(struct _ConstraintClassPart,set_values,8,12,78455)
CheckOffset(struct _ConstraintClassPart,set_values,32,12,78455)
CheckMemberSize(struct _ConstraintClassPart,extension,8,12,78456)
CheckOffset(struct _ConstraintClassPart,extension,40,12,78456)
#else
Msg("Find size of _ConstraintClassPart (100649)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,100649,0);
#endif

#if defined __i386__
CheckTypeSize(ConstraintClassPart,28, 100650, 2, 1.2, NULL, 100649, NULL)
#elif defined __ia64__
CheckTypeSize(ConstraintClassPart,48, 100650, 3, 1.2, NULL, 100649, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(ConstraintClassPart,28, 100650, 6, 1.2, NULL, 100649, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(ConstraintClassPart,28, 100650, 10, 1.2, NULL, 100649, NULL)
#elif defined __powerpc64__
CheckTypeSize(ConstraintClassPart,48, 100650, 9, 1.2, NULL, 100649, NULL)
#elif defined __x86_64__
CheckTypeSize(ConstraintClassPart,48, 100650, 11, 1.2, NULL, 100649, NULL)
#elif defined __s390x__
CheckTypeSize(ConstraintClassPart,48, 100650, 12, 1.2, NULL, 100649, NULL)
#else
Msg("Find size of ConstraintClassPart (100650)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100649,NULL);\n",architecture,100650,0);
#endif

#if defined __i386__
CheckTypeSize(struct _ConstraintClassRec,164, 100651, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _ConstraintClassRec,composite_class,20,2,78458)
CheckOffset(struct _ConstraintClassRec,composite_class,116,2,78458)
CheckMemberSize(struct _ConstraintClassRec,constraint_class,28,2,78459)
CheckOffset(struct _ConstraintClassRec,constraint_class,136,2,78459)
#elif defined __ia64__
CheckTypeSize(struct _ConstraintClassRec,312, 100651, 3, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _ConstraintClassRec,composite_class,40,3,78458)
CheckOffset(struct _ConstraintClassRec,composite_class,224,3,78458)
CheckMemberSize(struct _ConstraintClassRec,constraint_class,48,3,78459)
CheckOffset(struct _ConstraintClassRec,constraint_class,264,3,78459)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _ConstraintClassRec,164, 100651, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _ConstraintClassRec,composite_class,20,6,78458)
CheckOffset(struct _ConstraintClassRec,composite_class,116,6,78458)
CheckMemberSize(struct _ConstraintClassRec,constraint_class,28,6,78459)
CheckOffset(struct _ConstraintClassRec,constraint_class,136,6,78459)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _ConstraintClassRec,164, 100651, 10, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _ConstraintClassRec,composite_class,20,10,78458)
CheckOffset(struct _ConstraintClassRec,composite_class,116,10,78458)
CheckMemberSize(struct _ConstraintClassRec,constraint_class,28,10,78459)
CheckOffset(struct _ConstraintClassRec,constraint_class,136,10,78459)
#elif defined __powerpc64__
CheckTypeSize(struct _ConstraintClassRec,312, 100651, 9, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _ConstraintClassRec,composite_class,40,9,78458)
CheckOffset(struct _ConstraintClassRec,composite_class,224,9,78458)
CheckMemberSize(struct _ConstraintClassRec,constraint_class,48,9,78459)
CheckOffset(struct _ConstraintClassRec,constraint_class,264,9,78459)
#elif defined __x86_64__
CheckTypeSize(struct _ConstraintClassRec,312, 100651, 11, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _ConstraintClassRec,composite_class,40,11,78458)
CheckOffset(struct _ConstraintClassRec,composite_class,224,11,78458)
CheckMemberSize(struct _ConstraintClassRec,constraint_class,48,11,78459)
CheckOffset(struct _ConstraintClassRec,constraint_class,264,11,78459)
#elif defined __s390x__
CheckTypeSize(struct _ConstraintClassRec,312, 100651, 12, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _ConstraintClassRec,composite_class,40,12,78458)
CheckOffset(struct _ConstraintClassRec,composite_class,224,12,78458)
CheckMemberSize(struct _ConstraintClassRec,constraint_class,48,12,78459)
CheckOffset(struct _ConstraintClassRec,constraint_class,264,12,78459)
#else
Msg("Find size of _ConstraintClassRec (100651)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0, NULL);\n",architecture,100651,0);
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
