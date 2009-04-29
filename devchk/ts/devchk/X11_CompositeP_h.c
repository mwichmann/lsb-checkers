/*
 * Test of X11/CompositeP.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
#include "X11/CompositeP.h"



#ifdef TET_TEST
void X11_CompositeP_h()
{
#else
int X11_CompositeP_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in X11/CompositeP.h\n");
#endif

printf("Checking data structures in X11/CompositeP.h\n");
#if _LSB_DEFAULT_ARCH
#ifndef _XtCompositeP_h
Msg( "Error: Constant not found: _XtCompositeP_h\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for XtInheritChangeManaged */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCompositeExtensionVersion
	CompareConstant(XtCompositeExtensionVersion,2L,4931,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XtCompositeExtensionVersion\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for XtInheritGeometryManager */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XtInheritInsertChild */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtInheritDeleteChild
	CompareConstant(XtInheritDeleteChild,((XtWidgetProc) _XtInherit),4934,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XtInheritDeleteChild\n");
cnt++;
#endif

#endif

#if 1
CheckTypeSize(struct _CompositeRec,0, 9584, 1, , NULL, 0, NULL)
Msg("Missing member data for _CompositeRec on All\n");
CheckOffset(struct _CompositeRec,core,0,1,216492)
CheckOffset(struct _CompositeRec,composite,0,1,216493)
#endif

#if defined __i386__
CheckTypeSize(struct _CompositeClassRec,136, 10239, 2, , NULL, 0, NULL)
CheckMemberSize(struct _CompositeClassRec,core_class,12,2,34335)
CheckOffset(struct _CompositeClassRec,core_class,0,2,34335)
CheckMemberSize(struct _CompositeClassRec,composite_class,12,2,34336)
CheckOffset(struct _CompositeClassRec,composite_class,0,2,34336)
#elif 1
CheckTypeSize(struct _CompositeClassRec,0, 10239, 1, , NULL, 0, NULL)
Msg("Missing member data for _CompositeClassRec on All\n");
#endif

#if defined __i386__
CheckTypeSize(CompositePart,4, 10255, 2, 1.2, NULL, 36910, NULL)
#elif defined __ia64__
Msg("Find size of CompositePart (10255)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,36910,NULL);\n",architecture,10255,0);
#elif defined __powerpc__ && !defined __powerpc64__
Msg("Find size of CompositePart (10255)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,36910,NULL);\n",architecture,10255,0);
#elif defined __powerpc64__
Msg("Find size of CompositePart (10255)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,36910,NULL);\n",architecture,10255,0);
#elif defined __s390__ && !defined __s390x__
Msg("Find size of CompositePart (10255)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,36910,NULL);\n",architecture,10255,0);
#elif defined __x86_64__
Msg("Find size of CompositePart (10255)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,36910,NULL);\n",architecture,10255,0);
#elif defined __s390x__
Msg("Find size of CompositePart (10255)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,36910,NULL);\n",architecture,10255,0);
#else
Msg("Find size of CompositePart (10255)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,36910,NULL);\n",architecture,10255,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _CompositeClassPart,40, 32192, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _CompositeClassPart,change_managed,8,12,78446)
CheckOffset(struct _CompositeClassPart,change_managed,8,12,78446)
CheckMemberSize(struct _CompositeClassPart,insert_child,8,12,78447)
CheckOffset(struct _CompositeClassPart,insert_child,16,12,78447)
CheckMemberSize(struct _CompositeClassPart,delete_child,8,12,78448)
CheckOffset(struct _CompositeClassPart,delete_child,24,12,78448)
CheckMemberSize(struct _CompositeClassPart,extension,8,12,78449)
CheckOffset(struct _CompositeClassPart,extension,32,12,78449)
#elif defined __x86_64__
CheckTypeSize(struct _CompositeClassPart,40, 32192, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _CompositeClassPart,change_managed,8,11,78446)
CheckOffset(struct _CompositeClassPart,change_managed,8,11,78446)
CheckMemberSize(struct _CompositeClassPart,insert_child,8,11,78447)
CheckOffset(struct _CompositeClassPart,insert_child,16,11,78447)
CheckMemberSize(struct _CompositeClassPart,delete_child,8,11,78448)
CheckOffset(struct _CompositeClassPart,delete_child,24,11,78448)
CheckMemberSize(struct _CompositeClassPart,extension,8,11,78449)
CheckOffset(struct _CompositeClassPart,extension,32,11,78449)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _CompositeClassPart,20, 32192, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _CompositeClassPart,change_managed,4,10,78446)
CheckOffset(struct _CompositeClassPart,change_managed,4,10,78446)
CheckMemberSize(struct _CompositeClassPart,insert_child,4,10,78447)
CheckOffset(struct _CompositeClassPart,insert_child,8,10,78447)
CheckMemberSize(struct _CompositeClassPart,delete_child,4,10,78448)
CheckOffset(struct _CompositeClassPart,delete_child,12,10,78448)
CheckMemberSize(struct _CompositeClassPart,extension,4,10,78449)
CheckOffset(struct _CompositeClassPart,extension,16,10,78449)
#elif defined __powerpc64__
CheckTypeSize(struct _CompositeClassPart,40, 32192, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _CompositeClassPart,change_managed,8,9,78446)
CheckOffset(struct _CompositeClassPart,change_managed,8,9,78446)
CheckMemberSize(struct _CompositeClassPart,insert_child,8,9,78447)
CheckOffset(struct _CompositeClassPart,insert_child,16,9,78447)
CheckMemberSize(struct _CompositeClassPart,delete_child,8,9,78448)
CheckOffset(struct _CompositeClassPart,delete_child,24,9,78448)
CheckMemberSize(struct _CompositeClassPart,extension,8,9,78449)
CheckOffset(struct _CompositeClassPart,extension,32,9,78449)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _CompositeClassPart,20, 32192, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _CompositeClassPart,change_managed,4,6,78446)
CheckOffset(struct _CompositeClassPart,change_managed,4,6,78446)
CheckMemberSize(struct _CompositeClassPart,insert_child,4,6,78447)
CheckOffset(struct _CompositeClassPart,insert_child,8,6,78447)
CheckMemberSize(struct _CompositeClassPart,delete_child,4,6,78448)
CheckOffset(struct _CompositeClassPart,delete_child,12,6,78448)
CheckMemberSize(struct _CompositeClassPart,extension,4,6,78449)
CheckOffset(struct _CompositeClassPart,extension,16,6,78449)
#elif defined __ia64__
CheckTypeSize(struct _CompositeClassPart,40, 32192, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _CompositeClassPart,change_managed,8,3,78446)
CheckOffset(struct _CompositeClassPart,change_managed,8,3,78446)
CheckMemberSize(struct _CompositeClassPart,insert_child,8,3,78447)
CheckOffset(struct _CompositeClassPart,insert_child,16,3,78447)
CheckMemberSize(struct _CompositeClassPart,delete_child,8,3,78448)
CheckOffset(struct _CompositeClassPart,delete_child,24,3,78448)
CheckMemberSize(struct _CompositeClassPart,extension,8,3,78449)
CheckOffset(struct _CompositeClassPart,extension,32,3,78449)
#elif defined __i386__
CheckTypeSize(struct _CompositeClassPart,20, 32192, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _CompositeClassPart,change_managed,4,2,78446)
CheckOffset(struct _CompositeClassPart,change_managed,4,2,78446)
CheckMemberSize(struct _CompositeClassPart,insert_child,4,2,78447)
CheckOffset(struct _CompositeClassPart,insert_child,8,2,78447)
CheckMemberSize(struct _CompositeClassPart,delete_child,4,2,78448)
CheckOffset(struct _CompositeClassPart,delete_child,12,2,78448)
CheckMemberSize(struct _CompositeClassPart,extension,4,2,78449)
CheckOffset(struct _CompositeClassPart,extension,16,2,78449)
#else
Msg("Find size of _CompositeClassPart (32192)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,32192,0);
#endif

#if defined __s390x__
CheckTypeSize(CompositeClassPart,40, 32193, 12, 1.3, NULL, 32192, NULL)
#elif defined __x86_64__
CheckTypeSize(CompositeClassPart,40, 32193, 11, 2.0, NULL, 32192, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(CompositeClassPart,20, 32193, 10, 1.3, NULL, 32192, NULL)
#elif defined __powerpc64__
CheckTypeSize(CompositeClassPart,40, 32193, 9, 2.0, NULL, 32192, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(CompositeClassPart,20, 32193, 6, 1.2, NULL, 32192, NULL)
#elif defined __ia64__
CheckTypeSize(CompositeClassPart,40, 32193, 3, 1.3, NULL, 32192, NULL)
#elif defined __i386__
CheckTypeSize(CompositeClassPart,20, 32193, 2, 1.2, NULL, 32192, NULL)
#else
Msg("Find size of CompositeClassPart (32193)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,32192,NULL);\n",architecture,32193,0);
#endif

#if 1
CheckTypeSize(struct _CompositePart,0, 36910, 1, , NULL, 0, NULL)
Msg("Missing member data for _CompositePart on All\n");
CheckOffset(struct _CompositePart,children,0,1,216488)
CheckOffset(struct _CompositePart,num_children,0,1,216489)
CheckOffset(struct _CompositePart,num_slots,0,1,216490)
CheckOffset(struct _CompositePart,insert_position,0,1,216491)
#endif

#if 1
CheckTypeSize(CompositePtr,0, 36911, 1, 1.2, NULL, 36912, NULL)
#endif

#if 1
CheckTypeSize(CompositeRec,0, 36913, 1, 1.2, NULL, 9584, NULL)
#endif

#if 1
CheckTypeSize(CompositePartPtr,0, 36914, 1, 1.2, NULL, 10243, NULL)
#endif

#if 1
CheckTypeSize(CompositeClassExtensionRec,0, 36916, 1, 1.2, NULL, 36915, NULL)
#endif

#if 1
CheckTypeSize(CompositeClassExtension,0, 36917, 1, 1.2, NULL, 36918, NULL)
#endif

#if defined __s390x__
CheckTypeSize(CompositeClassRec,264, 10240, 12, 1.3, NULL, 10239, NULL)
#elif defined __x86_64__
CheckTypeSize(CompositeClassRec,264, 10240, 11, 2.0, NULL, 10239, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(CompositeClassRec,136, 10240, 10, 1.3, NULL, 10239, NULL)
#elif defined __powerpc64__
CheckTypeSize(CompositeClassRec,264, 10240, 9, 2.0, NULL, 10239, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(CompositeClassRec,136, 10240, 6, 1.2, NULL, 10239, NULL)
#elif defined __ia64__
CheckTypeSize(CompositeClassRec,264, 10240, 3, 1.3, NULL, 10239, NULL)
#elif defined __i386__
CheckTypeSize(CompositeClassRec,136, 10240, 2, 1.2, NULL, 10239, NULL)
#else
Msg("Find size of CompositeClassRec (10240)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,10239, NULL);\n",architecture,10240,0);
#endif

CompositeClassRec compositeClassRec_db ;
CheckGlobalVar(compositeClassRec_db, compositeClassRec);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/CompositeP.h\n\n",pcnt,cnt);
return cnt;
#endif

}
