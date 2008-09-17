/*
 * Test of X11/CoreP.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "X11/Intrinsic.h"
#include "X11/IntrinsicP.h"
#include "X11/CoreP.h"



#ifdef TET_TEST
void X11_CoreP_h()
{
#else
int X11_CoreP_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in X11/CoreP.h\n");
#endif

printf("Checking data structures in X11/CoreP.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for _XtCoreP_h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XtInheritRealize */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XtInheritResize */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XtInheritSetValuesAlmost */
#endif

#if defined __i386__
CheckTypeSize(CorePart,4, 10254, 2, 1.1, NULL, 1009015, NULL)
#elif defined __ia64__
Msg("Find size of CorePart (10254)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.1""',NULL,1009015,NULL);\n",architecture,10254,0);
#elif defined __powerpc__ && !defined __powerpc64__
Msg("Find size of CorePart (10254)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.1""',NULL,1009015,NULL);\n",architecture,10254,0);
#elif defined __powerpc64__
Msg("Find size of CorePart (10254)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.1""',NULL,1009015,NULL);\n",architecture,10254,0);
#elif defined __s390__ && !defined __s390x__
Msg("Find size of CorePart (10254)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.1""',NULL,1009015,NULL);\n",architecture,10254,0);
#elif defined __x86_64__
Msg("Find size of CorePart (10254)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.1""',NULL,1009015,NULL);\n",architecture,10254,0);
#elif defined __s390x__
Msg("Find size of CorePart (10254)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.1""',NULL,1009015,NULL);\n",architecture,10254,0);
#else
Msg("Find size of CorePart (10254)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.1""',NULL,1009015,NULL);\n",architecture,10254,0);
#endif

#if 1
CheckTypeSize(struct _CoreClassPart,224, 100645, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _CoreClassPart on All\n");
CheckOffset(struct _CoreClassPart,superclass,0,1,78413)
CheckOffset(struct _CoreClassPart,class_name,0,1,78414)
CheckOffset(struct _CoreClassPart,widget_size,0,1,78415)
CheckOffset(struct _CoreClassPart,class_initialize,0,1,78416)
CheckOffset(struct _CoreClassPart,class_part_initialize,0,1,78417)
CheckOffset(struct _CoreClassPart,class_inited,0,1,78418)
CheckOffset(struct _CoreClassPart,initialize,0,1,78419)
CheckOffset(struct _CoreClassPart,initialize_hook,0,1,78420)
CheckOffset(struct _CoreClassPart,realize,0,1,78421)
CheckOffset(struct _CoreClassPart,actions,0,1,78422)
CheckOffset(struct _CoreClassPart,num_actions,0,1,78423)
CheckOffset(struct _CoreClassPart,resources,0,1,78424)
CheckOffset(struct _CoreClassPart,num_resources,0,1,78425)
CheckOffset(struct _CoreClassPart,xrm_class,0,1,78426)
CheckOffset(struct _CoreClassPart,compress_motion,0,1,78427)
CheckOffset(struct _CoreClassPart,compress_exposure,0,1,78428)
CheckOffset(struct _CoreClassPart,compress_enterleave,0,1,78429)
CheckOffset(struct _CoreClassPart,visible_interest,0,1,78430)
CheckOffset(struct _CoreClassPart,destroy,0,1,78431)
CheckOffset(struct _CoreClassPart,resize,0,1,78432)
CheckOffset(struct _CoreClassPart,expose,0,1,78433)
CheckOffset(struct _CoreClassPart,set_values,0,1,78434)
CheckOffset(struct _CoreClassPart,set_values_hook,0,1,78435)
CheckOffset(struct _CoreClassPart,set_values_almost,0,1,78436)
CheckOffset(struct _CoreClassPart,get_values_hook,0,1,78437)
CheckOffset(struct _CoreClassPart,accept_focus,0,1,78438)
CheckOffset(struct _CoreClassPart,version,0,1,78439)
CheckOffset(struct _CoreClassPart,callback_private,0,1,78440)
CheckOffset(struct _CoreClassPart,tm_table,0,1,78441)
CheckOffset(struct _CoreClassPart,query_geometry,0,1,78442)
CheckOffset(struct _CoreClassPart,display_accelerator,0,1,78443)
CheckOffset(struct _CoreClassPart,extension,0,1,78444)
#endif

#if 1
CheckTypeSize(CoreClassPart,224, 100646, 1, 1.2, NULL, 100645, NULL)
#endif

#if 1
CheckTypeSize(WidgetRec,0, 1009016, 1, 1.1, NULL, 9576, NULL)
#endif

#if 1
CheckTypeSize(CoreRec,0, 1009017, 1, 1.1, NULL, 9576, NULL)
#endif

#if 1
CheckTypeSize(WidgetClassRec,0, 1009018, 1, 1.1, NULL, 9581, NULL)
#endif

#if 1
CheckTypeSize(CoreClassRec,0, 1009019, 1, 1.1, NULL, 9581, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/CoreP.h\n\n",pcnt,cnt);
return cnt;
#endif

}
