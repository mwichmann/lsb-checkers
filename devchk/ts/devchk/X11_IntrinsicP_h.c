/*
 * Test of X11/IntrinsicP.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#define NeedWidePrototypes 1
#include "X11/IntrinsicP.h"



#ifdef TET_TEST
void X11_IntrinsicP_h()
{
#else
int X11_IntrinsicP_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in X11/IntrinsicP.h\n");
#endif

printf("Checking data structures in X11/IntrinsicP.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for XtCheckSubclass(w,widget_class,message) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for X11/IntrinsicP.h depends on X11/ConstrainP.h */
#endif

#if _LSB_DEFAULT_ARCH
#ifndef _XtintrinsicP_h
Msg( "Error: Constant not found: _XtintrinsicP_h\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XT_VERSION
	CompareConstant(XT_VERSION,11,4145,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XT_VERSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XT_REVISION
	CompareConstant(XT_REVISION,6,4146,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XT_REVISION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for XtVersion */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtVersionDontCheck
	CompareConstant(XtVersionDontCheck,0,4148,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtVersionDontCheck\n");
cnt++;
#endif

#endif

#if defined __s390x__
CheckTypeSize(XrmResource,48, 32104, 12, 1.3, NULL, 32103, NULL)
#elif defined __x86_64__
CheckTypeSize(XrmResource,48, 32104, 11, 2.0, NULL, 32103, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XrmResource,28, 32104, 10, 1.3, NULL, 32103, NULL)
#elif defined __powerpc64__
CheckTypeSize(XrmResource,48, 32104, 9, 2.0, NULL, 32103, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XrmResource,28, 32104, 6, 1.2, NULL, 32103, NULL)
#elif defined __ia64__
CheckTypeSize(XrmResource,48, 32104, 3, 1.3, NULL, 32103, NULL)
#elif defined __i386__
CheckTypeSize(XrmResource,28, 32104, 2, 1.2, NULL, 32103, NULL)
#else
Msg("Find size of XrmResource (32104)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,32103,NULL);\n",architecture,32104,0);
#endif

#if defined __s390x__
CheckTypeSize(XrmResourceList,8, 32106, 12, 1.3, NULL, 32105, NULL)
#elif defined __x86_64__
CheckTypeSize(XrmResourceList,8, 32106, 11, 2.0, NULL, 32105, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XrmResourceList,4, 32106, 10, 1.3, NULL, 32105, NULL)
#elif defined __powerpc64__
CheckTypeSize(XrmResourceList,8, 32106, 9, 2.0, NULL, 32105, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XrmResourceList,4, 32106, 6, 1.2, NULL, 32105, NULL)
#elif defined __ia64__
CheckTypeSize(XrmResourceList,8, 32106, 3, 1.3, NULL, 32105, NULL)
#elif defined __i386__
CheckTypeSize(XrmResourceList,4, 32106, 2, 1.2, NULL, 32105, NULL)
#else
Msg("Find size of XrmResourceList (32106)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,32105,NULL);\n",architecture,32106,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _XtTMRec,32, 32132, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XtTMRec,proc_table,8,12,78350)
CheckOffset(struct _XtTMRec,proc_table,8,12,78350)
CheckMemberSize(struct _XtTMRec,current_state,8,12,78351)
CheckOffset(struct _XtTMRec,current_state,16,12,78351)
CheckMemberSize(struct _XtTMRec,lastEventTime,8,12,78352)
CheckOffset(struct _XtTMRec,lastEventTime,24,12,78352)
#elif defined __x86_64__
CheckTypeSize(struct _XtTMRec,32, 32132, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XtTMRec,proc_table,8,11,78350)
CheckOffset(struct _XtTMRec,proc_table,8,11,78350)
CheckMemberSize(struct _XtTMRec,current_state,8,11,78351)
CheckOffset(struct _XtTMRec,current_state,16,11,78351)
CheckMemberSize(struct _XtTMRec,lastEventTime,8,11,78352)
CheckOffset(struct _XtTMRec,lastEventTime,24,11,78352)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XtTMRec,16, 32132, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XtTMRec,proc_table,4,10,78350)
CheckOffset(struct _XtTMRec,proc_table,4,10,78350)
CheckMemberSize(struct _XtTMRec,current_state,4,10,78351)
CheckOffset(struct _XtTMRec,current_state,8,10,78351)
CheckMemberSize(struct _XtTMRec,lastEventTime,4,10,78352)
CheckOffset(struct _XtTMRec,lastEventTime,12,10,78352)
#elif defined __powerpc64__
CheckTypeSize(struct _XtTMRec,32, 32132, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XtTMRec,proc_table,8,9,78350)
CheckOffset(struct _XtTMRec,proc_table,8,9,78350)
CheckMemberSize(struct _XtTMRec,current_state,8,9,78351)
CheckOffset(struct _XtTMRec,current_state,16,9,78351)
CheckMemberSize(struct _XtTMRec,lastEventTime,8,9,78352)
CheckOffset(struct _XtTMRec,lastEventTime,24,9,78352)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XtTMRec,16, 32132, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XtTMRec,proc_table,4,6,78350)
CheckOffset(struct _XtTMRec,proc_table,4,6,78350)
CheckMemberSize(struct _XtTMRec,current_state,4,6,78351)
CheckOffset(struct _XtTMRec,current_state,8,6,78351)
CheckMemberSize(struct _XtTMRec,lastEventTime,4,6,78352)
CheckOffset(struct _XtTMRec,lastEventTime,12,6,78352)
#elif defined __ia64__
CheckTypeSize(struct _XtTMRec,32, 32132, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XtTMRec,proc_table,8,3,78350)
CheckOffset(struct _XtTMRec,proc_table,8,3,78350)
CheckMemberSize(struct _XtTMRec,current_state,8,3,78351)
CheckOffset(struct _XtTMRec,current_state,16,3,78351)
CheckMemberSize(struct _XtTMRec,lastEventTime,8,3,78352)
CheckOffset(struct _XtTMRec,lastEventTime,24,3,78352)
#elif defined __i386__
CheckTypeSize(struct _XtTMRec,16, 32132, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XtTMRec,proc_table,4,2,78350)
CheckOffset(struct _XtTMRec,proc_table,4,2,78350)
CheckMemberSize(struct _XtTMRec,current_state,4,2,78351)
CheckOffset(struct _XtTMRec,current_state,8,2,78351)
CheckMemberSize(struct _XtTMRec,lastEventTime,4,2,78352)
CheckOffset(struct _XtTMRec,lastEventTime,12,2,78352)
#else
Msg("Find size of _XtTMRec (32132)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,32132,0);
#endif

#if defined __s390x__
CheckTypeSize(XtTM,8, 32134, 12, 1.3, NULL, 32133, NULL)
#elif defined __x86_64__
CheckTypeSize(XtTM,8, 32134, 11, 2.0, NULL, 32133, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtTM,4, 32134, 10, 1.3, NULL, 32133, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtTM,8, 32134, 9, 2.0, NULL, 32133, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtTM,4, 32134, 6, 1.2, NULL, 32133, NULL)
#elif defined __ia64__
CheckTypeSize(XtTM,8, 32134, 3, 1.3, NULL, 32133, NULL)
#elif defined __i386__
CheckTypeSize(XtTM,4, 32134, 2, 1.2, NULL, 32133, NULL)
#else
Msg("Find size of XtTM (32134)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,32133,NULL);\n",architecture,32134,0);
#endif

#if defined __s390x__
CheckTypeSize(XtTypedArg,32, 32138, 12, 1.3, NULL, 32137, NULL)
#elif defined __x86_64__
CheckTypeSize(XtTypedArg,32, 32138, 11, 2.0, NULL, 32137, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtTypedArg,16, 32138, 10, 1.3, NULL, 32137, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtTypedArg,32, 32138, 9, 2.0, NULL, 32137, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtTypedArg,16, 32138, 6, 1.2, NULL, 32137, NULL)
#elif defined __ia64__
CheckTypeSize(XtTypedArg,32, 32138, 3, 1.3, NULL, 32137, NULL)
#elif defined __i386__
CheckTypeSize(XtTypedArg,16, 32138, 2, 1.2, NULL, 32137, NULL)
#else
Msg("Find size of XtTypedArg (32138)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,32137,NULL);\n",architecture,32138,0);
#endif

#if defined __s390x__
CheckTypeSize(XtTypedArgList,8, 32140, 12, 1.3, NULL, 32139, NULL)
#elif defined __x86_64__
CheckTypeSize(XtTypedArgList,8, 32140, 11, 2.0, NULL, 32139, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtTypedArgList,4, 32140, 10, 1.3, NULL, 32139, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtTypedArgList,8, 32140, 9, 2.0, NULL, 32139, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtTypedArgList,4, 32140, 6, 1.2, NULL, 32139, NULL)
#elif defined __ia64__
CheckTypeSize(XtTypedArgList,8, 32140, 3, 1.3, NULL, 32139, NULL)
#elif defined __i386__
CheckTypeSize(XtTypedArgList,4, 32140, 2, 1.2, NULL, 32139, NULL)
#else
Msg("Find size of XtTypedArgList (32140)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,32139,NULL);\n",architecture,32140,0);
#endif

#if defined __s390x__
CheckTypeSize(XtProc,8, 32163, 12, 1.3, NULL, 20504, NULL)
#elif defined __x86_64__
CheckTypeSize(XtProc,8, 32163, 11, 2.0, NULL, 20504, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtProc,4, 32163, 10, 1.3, NULL, 20504, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtProc,8, 32163, 9, 2.0, NULL, 20504, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtProc,4, 32163, 6, 1.2, NULL, 20504, NULL)
#elif defined __ia64__
CheckTypeSize(XtProc,8, 32163, 3, 1.3, NULL, 20504, NULL)
#elif defined __i386__
CheckTypeSize(XtProc,4, 32163, 2, 1.2, NULL, 20504, NULL)
#else
Msg("Find size of XtProc (32163)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,20504,NULL);\n",architecture,32163,0);
#endif

#if defined __s390x__
CheckTypeSize(XtWidgetClassProc,8, 32165, 12, 1.3, NULL, 32164, NULL)
#elif defined __x86_64__
CheckTypeSize(XtWidgetClassProc,8, 32165, 11, 2.0, NULL, 32164, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtWidgetClassProc,4, 32165, 10, 1.3, NULL, 32164, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtWidgetClassProc,8, 32165, 9, 2.0, NULL, 32164, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtWidgetClassProc,4, 32165, 6, 1.2, NULL, 32164, NULL)
#elif defined __ia64__
CheckTypeSize(XtWidgetClassProc,8, 32165, 3, 1.3, NULL, 32164, NULL)
#elif defined __i386__
CheckTypeSize(XtWidgetClassProc,4, 32165, 2, 1.2, NULL, 32164, NULL)
#else
Msg("Find size of XtWidgetClassProc (32165)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,32164,NULL);\n",architecture,32165,0);
#endif

#if defined __s390x__
CheckTypeSize(XtInitProc,8, 32167, 12, 1.3, NULL, 32166, NULL)
#elif defined __x86_64__
CheckTypeSize(XtInitProc,8, 32167, 11, 2.0, NULL, 32166, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtInitProc,4, 32167, 10, 1.3, NULL, 32166, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtInitProc,8, 32167, 9, 2.0, NULL, 32166, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtInitProc,4, 32167, 6, 1.2, NULL, 32166, NULL)
#elif defined __ia64__
CheckTypeSize(XtInitProc,8, 32167, 3, 1.3, NULL, 32166, NULL)
#elif defined __i386__
CheckTypeSize(XtInitProc,4, 32167, 2, 1.2, NULL, 32166, NULL)
#else
Msg("Find size of XtInitProc (32167)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,32166,NULL);\n",architecture,32167,0);
#endif

#if defined __s390x__
CheckTypeSize(XtArgsProc,8, 32169, 12, 1.3, NULL, 32168, NULL)
#elif defined __x86_64__
CheckTypeSize(XtArgsProc,8, 32169, 11, 2.0, NULL, 32168, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtArgsProc,4, 32169, 10, 1.3, NULL, 32168, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtArgsProc,8, 32169, 9, 2.0, NULL, 32168, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtArgsProc,4, 32169, 6, 1.2, NULL, 32168, NULL)
#elif defined __ia64__
CheckTypeSize(XtArgsProc,8, 32169, 3, 1.3, NULL, 32168, NULL)
#elif defined __i386__
CheckTypeSize(XtArgsProc,4, 32169, 2, 1.2, NULL, 32168, NULL)
#else
Msg("Find size of XtArgsProc (32169)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,32168,NULL);\n",architecture,32169,0);
#endif

#if defined __s390x__
CheckTypeSize(XtRealizeProc,8, 32172, 12, 1.3, NULL, 32171, NULL)
#elif defined __x86_64__
CheckTypeSize(XtRealizeProc,8, 32172, 11, 2.0, NULL, 32171, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtRealizeProc,4, 32172, 10, 1.3, NULL, 32171, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtRealizeProc,8, 32172, 9, 2.0, NULL, 32171, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtRealizeProc,4, 32172, 6, 1.2, NULL, 32171, NULL)
#elif defined __ia64__
CheckTypeSize(XtRealizeProc,8, 32172, 3, 1.3, NULL, 32171, NULL)
#elif defined __i386__
CheckTypeSize(XtRealizeProc,4, 32172, 2, 1.2, NULL, 32171, NULL)
#else
Msg("Find size of XtRealizeProc (32172)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,32171,NULL);\n",architecture,32172,0);
#endif

#if defined __s390x__
CheckTypeSize(XtWidgetProc,8, 32174, 12, 1.3, NULL, 32173, NULL)
#elif defined __x86_64__
CheckTypeSize(XtWidgetProc,8, 32174, 11, 2.0, NULL, 32173, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtWidgetProc,4, 32174, 10, 1.3, NULL, 32173, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtWidgetProc,8, 32174, 9, 2.0, NULL, 32173, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtWidgetProc,4, 32174, 6, 1.2, NULL, 32173, NULL)
#elif defined __ia64__
CheckTypeSize(XtWidgetProc,8, 32174, 3, 1.3, NULL, 32173, NULL)
#elif defined __i386__
CheckTypeSize(XtWidgetProc,4, 32174, 2, 1.2, NULL, 32173, NULL)
#else
Msg("Find size of XtWidgetProc (32174)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,32173,NULL);\n",architecture,32174,0);
#endif

#if defined __s390x__
CheckTypeSize(XtExposeProc,8, 32176, 12, 1.3, NULL, 32175, NULL)
#elif defined __x86_64__
CheckTypeSize(XtExposeProc,8, 32176, 11, 2.0, NULL, 32175, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtExposeProc,4, 32176, 10, 1.3, NULL, 32175, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtExposeProc,8, 32176, 9, 2.0, NULL, 32175, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtExposeProc,4, 32176, 6, 1.2, NULL, 32175, NULL)
#elif defined __ia64__
CheckTypeSize(XtExposeProc,8, 32176, 3, 1.3, NULL, 32175, NULL)
#elif defined __i386__
CheckTypeSize(XtExposeProc,4, 32176, 2, 1.2, NULL, 32175, NULL)
#else
Msg("Find size of XtExposeProc (32176)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,32175,NULL);\n",architecture,32176,0);
#endif

#if defined __s390x__
CheckTypeSize(XtArgsFunc,8, 32180, 12, 1.3, NULL, 32179, NULL)
#elif defined __x86_64__
CheckTypeSize(XtArgsFunc,8, 32180, 11, 2.0, NULL, 32179, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtArgsFunc,4, 32180, 10, 1.3, NULL, 32179, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtArgsFunc,8, 32180, 9, 2.0, NULL, 32179, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtArgsFunc,4, 32180, 6, 1.2, NULL, 32179, NULL)
#elif defined __ia64__
CheckTypeSize(XtArgsFunc,8, 32180, 3, 1.3, NULL, 32179, NULL)
#elif defined __i386__
CheckTypeSize(XtArgsFunc,4, 32180, 2, 1.2, NULL, 32179, NULL)
#else
Msg("Find size of XtArgsFunc (32180)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,32179,NULL);\n",architecture,32180,0);
#endif

#if defined __s390x__
CheckTypeSize(XtAlmostProc,8, 32182, 12, 1.3, NULL, 32181, NULL)
#elif defined __x86_64__
CheckTypeSize(XtAlmostProc,8, 32182, 11, 2.0, NULL, 32181, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtAlmostProc,4, 32182, 10, 1.3, NULL, 32181, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtAlmostProc,8, 32182, 9, 2.0, NULL, 32181, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtAlmostProc,4, 32182, 6, 1.2, NULL, 32181, NULL)
#elif defined __ia64__
CheckTypeSize(XtAlmostProc,8, 32182, 3, 1.3, NULL, 32181, NULL)
#elif defined __i386__
CheckTypeSize(XtAlmostProc,4, 32182, 2, 1.2, NULL, 32181, NULL)
#else
Msg("Find size of XtAlmostProc (32182)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,32181,NULL);\n",architecture,32182,0);
#endif

#if defined __s390x__
CheckTypeSize(XtAcceptFocusProc,8, 32184, 12, 1.3, NULL, 32183, NULL)
#elif defined __x86_64__
CheckTypeSize(XtAcceptFocusProc,8, 32184, 11, 2.0, NULL, 32183, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtAcceptFocusProc,4, 32184, 10, 1.3, NULL, 32183, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtAcceptFocusProc,8, 32184, 9, 2.0, NULL, 32183, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtAcceptFocusProc,4, 32184, 6, 1.2, NULL, 32183, NULL)
#elif defined __ia64__
CheckTypeSize(XtAcceptFocusProc,8, 32184, 3, 1.3, NULL, 32183, NULL)
#elif defined __i386__
CheckTypeSize(XtAcceptFocusProc,4, 32184, 2, 1.2, NULL, 32183, NULL)
#else
Msg("Find size of XtAcceptFocusProc (32184)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,32183,NULL);\n",architecture,32184,0);
#endif

#if defined __s390x__
CheckTypeSize(XtVersionType,8, 32185, 12, 1.3, NULL, 11186, NULL)
#elif defined __x86_64__
CheckTypeSize(XtVersionType,8, 32185, 11, 2.0, NULL, 11186, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtVersionType,4, 32185, 10, 1.3, NULL, 11186, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtVersionType,8, 32185, 9, 2.0, NULL, 11186, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtVersionType,4, 32185, 6, 1.2, NULL, 11186, NULL)
#elif defined __ia64__
CheckTypeSize(XtVersionType,8, 32185, 3, 1.3, NULL, 11186, NULL)
#elif defined __i386__
CheckTypeSize(XtVersionType,4, 32185, 2, 1.2, NULL, 11186, NULL)
#else
Msg("Find size of XtVersionType (32185)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,11186,NULL);\n",architecture,32185,0);
#endif

#if defined __s390x__
CheckTypeSize(XtGeometryHandler,8, 32187, 12, 1.3, NULL, 32186, NULL)
#elif defined __x86_64__
CheckTypeSize(XtGeometryHandler,8, 32187, 11, 2.0, NULL, 32186, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtGeometryHandler,4, 32187, 10, 1.3, NULL, 32186, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtGeometryHandler,8, 32187, 9, 2.0, NULL, 32186, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtGeometryHandler,4, 32187, 6, 1.2, NULL, 32186, NULL)
#elif defined __ia64__
CheckTypeSize(XtGeometryHandler,8, 32187, 3, 1.3, NULL, 32186, NULL)
#elif defined __i386__
CheckTypeSize(XtGeometryHandler,4, 32187, 2, 1.2, NULL, 32186, NULL)
#else
Msg("Find size of XtGeometryHandler (32187)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,32186,NULL);\n",architecture,32187,0);
#endif

#if 1
CheckTypeSize(XtAllocateProc,0, 36851, 1, 1.2, NULL, 36853, NULL)
#endif

#if 1
CheckTypeSize(XtDeallocateProc,0, 36854, 1, 1.2, NULL, 36855, NULL)
#endif

#if 1
CheckTypeSize(XtTMRec,0, 36856, 1, 1.2, NULL, 32132, NULL)
#endif

#if defined __s390x__
CheckTypeSize(XtStringProc,8, 32178, 12, 1.3, NULL, 32188, NULL)
#elif defined __x86_64__
CheckTypeSize(XtStringProc,8, 32178, 11, 2.0, NULL, 32188, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtStringProc,4, 32178, 10, 1.3, NULL, 32188, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtStringProc,8, 32178, 9, 2.0, NULL, 32188, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtStringProc,4, 32178, 6, 1.2, NULL, 32188, NULL)
#elif defined __ia64__
CheckTypeSize(XtStringProc,8, 32178, 3, 1.3, NULL, 32188, NULL)
#elif defined __i386__
CheckTypeSize(XtStringProc,4, 32178, 2, 1.2, NULL, 32188, NULL)
#else
Msg("Find size of XtStringProc (32178)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,32188,NULL);\n",architecture,32178,0);
#endif

#if defined __s390x__
CheckTypeSize(XtSetValuesFunc,8, 32189, 12, 1.3, NULL, 32177, NULL)
#elif defined __x86_64__
CheckTypeSize(XtSetValuesFunc,8, 32189, 11, 2.0, NULL, 32177, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtSetValuesFunc,4, 32189, 10, 1.3, NULL, 32177, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtSetValuesFunc,8, 32189, 9, 2.0, NULL, 32177, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtSetValuesFunc,4, 32189, 6, 1.2, NULL, 32177, NULL)
#elif defined __ia64__
CheckTypeSize(XtSetValuesFunc,8, 32189, 3, 1.3, NULL, 32177, NULL)
#elif defined __i386__
CheckTypeSize(XtSetValuesFunc,4, 32189, 2, 1.2, NULL, 32177, NULL)
#else
Msg("Find size of XtSetValuesFunc (32189)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,32177, NULL);\n",architecture,32189,0);
#endif

#if defined __s390x__
/* S390X */
typedef void (*XtProc_db)(void);
CheckFunctionTypedef(XtProc,XtProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*XtProc_db)(void);
CheckFunctionTypedef(XtProc,XtProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*XtProc_db)(void);
CheckFunctionTypedef(XtProc,XtProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*XtProc_db)(void);
CheckFunctionTypedef(XtProc,XtProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*XtProc_db)(void);
CheckFunctionTypedef(XtProc,XtProc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*XtProc_db)(void);
CheckFunctionTypedef(XtProc,XtProc_db);
#elif defined __i386__
/* IA32 */
typedef void (*XtProc_db)(void);
CheckFunctionTypedef(XtProc,XtProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*XtWidgetClassProc_db)(WidgetClass);
CheckFunctionTypedef(XtWidgetClassProc,XtWidgetClassProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*XtWidgetClassProc_db)(WidgetClass);
CheckFunctionTypedef(XtWidgetClassProc,XtWidgetClassProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*XtWidgetClassProc_db)(WidgetClass);
CheckFunctionTypedef(XtWidgetClassProc,XtWidgetClassProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*XtWidgetClassProc_db)(WidgetClass);
CheckFunctionTypedef(XtWidgetClassProc,XtWidgetClassProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*XtWidgetClassProc_db)(WidgetClass);
CheckFunctionTypedef(XtWidgetClassProc,XtWidgetClassProc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*XtWidgetClassProc_db)(WidgetClass);
CheckFunctionTypedef(XtWidgetClassProc,XtWidgetClassProc_db);
#elif defined __i386__
/* IA32 */
typedef void (*XtWidgetClassProc_db)(WidgetClass);
CheckFunctionTypedef(XtWidgetClassProc,XtWidgetClassProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*XtInitProc_db)(Widget, Widget, ArgList, Cardinal *);
CheckFunctionTypedef(XtInitProc,XtInitProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*XtInitProc_db)(Widget, Widget, ArgList, Cardinal *);
CheckFunctionTypedef(XtInitProc,XtInitProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*XtInitProc_db)(Widget, Widget, ArgList, Cardinal *);
CheckFunctionTypedef(XtInitProc,XtInitProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*XtInitProc_db)(Widget, Widget, ArgList, Cardinal *);
CheckFunctionTypedef(XtInitProc,XtInitProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*XtInitProc_db)(Widget, Widget, ArgList, Cardinal *);
CheckFunctionTypedef(XtInitProc,XtInitProc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*XtInitProc_db)(Widget, Widget, ArgList, Cardinal *);
CheckFunctionTypedef(XtInitProc,XtInitProc_db);
#elif defined __i386__
/* IA32 */
typedef void (*XtInitProc_db)(Widget, Widget, ArgList, Cardinal *);
CheckFunctionTypedef(XtInitProc,XtInitProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*XtArgsProc_db)(Widget, ArgList, Cardinal *);
CheckFunctionTypedef(XtArgsProc,XtArgsProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*XtArgsProc_db)(Widget, ArgList, Cardinal *);
CheckFunctionTypedef(XtArgsProc,XtArgsProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*XtArgsProc_db)(Widget, ArgList, Cardinal *);
CheckFunctionTypedef(XtArgsProc,XtArgsProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*XtArgsProc_db)(Widget, ArgList, Cardinal *);
CheckFunctionTypedef(XtArgsProc,XtArgsProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*XtArgsProc_db)(Widget, ArgList, Cardinal *);
CheckFunctionTypedef(XtArgsProc,XtArgsProc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*XtArgsProc_db)(Widget, ArgList, Cardinal *);
CheckFunctionTypedef(XtArgsProc,XtArgsProc_db);
#elif defined __i386__
/* IA32 */
typedef void (*XtArgsProc_db)(Widget, ArgList, Cardinal *);
CheckFunctionTypedef(XtArgsProc,XtArgsProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*XtRealizeProc_db)(Widget, XtValueMask *, XSetWindowAttributes *);
CheckFunctionTypedef(XtRealizeProc,XtRealizeProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*XtRealizeProc_db)(Widget, XtValueMask *, XSetWindowAttributes *);
CheckFunctionTypedef(XtRealizeProc,XtRealizeProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*XtRealizeProc_db)(Widget, XtValueMask *, XSetWindowAttributes *);
CheckFunctionTypedef(XtRealizeProc,XtRealizeProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*XtRealizeProc_db)(Widget, XtValueMask *, XSetWindowAttributes *);
CheckFunctionTypedef(XtRealizeProc,XtRealizeProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*XtRealizeProc_db)(Widget, XtValueMask *, XSetWindowAttributes *);
CheckFunctionTypedef(XtRealizeProc,XtRealizeProc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*XtRealizeProc_db)(Widget, XtValueMask *, XSetWindowAttributes *);
CheckFunctionTypedef(XtRealizeProc,XtRealizeProc_db);
#elif defined __i386__
/* IA32 */
typedef void (*XtRealizeProc_db)(Widget, XtValueMask *, XSetWindowAttributes *);
CheckFunctionTypedef(XtRealizeProc,XtRealizeProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*XtWidgetProc_db)(Widget);
CheckFunctionTypedef(XtWidgetProc,XtWidgetProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*XtWidgetProc_db)(Widget);
CheckFunctionTypedef(XtWidgetProc,XtWidgetProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*XtWidgetProc_db)(Widget);
CheckFunctionTypedef(XtWidgetProc,XtWidgetProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*XtWidgetProc_db)(Widget);
CheckFunctionTypedef(XtWidgetProc,XtWidgetProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*XtWidgetProc_db)(Widget);
CheckFunctionTypedef(XtWidgetProc,XtWidgetProc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*XtWidgetProc_db)(Widget);
CheckFunctionTypedef(XtWidgetProc,XtWidgetProc_db);
#elif defined __i386__
/* IA32 */
typedef void (*XtWidgetProc_db)(Widget);
CheckFunctionTypedef(XtWidgetProc,XtWidgetProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*XtExposeProc_db)(Widget, XEvent *, Region);
CheckFunctionTypedef(XtExposeProc,XtExposeProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*XtExposeProc_db)(Widget, XEvent *, Region);
CheckFunctionTypedef(XtExposeProc,XtExposeProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*XtExposeProc_db)(Widget, XEvent *, Region);
CheckFunctionTypedef(XtExposeProc,XtExposeProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*XtExposeProc_db)(Widget, XEvent *, Region);
CheckFunctionTypedef(XtExposeProc,XtExposeProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*XtExposeProc_db)(Widget, XEvent *, Region);
CheckFunctionTypedef(XtExposeProc,XtExposeProc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*XtExposeProc_db)(Widget, XEvent *, Region);
CheckFunctionTypedef(XtExposeProc,XtExposeProc_db);
#elif defined __i386__
/* IA32 */
typedef void (*XtExposeProc_db)(Widget, XEvent *, Region);
CheckFunctionTypedef(XtExposeProc,XtExposeProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef Boolean (*XtArgsFunc_db)(Widget, ArgList, Cardinal *);
CheckFunctionTypedef(XtArgsFunc,XtArgsFunc_db);
#elif defined __x86_64__
/* x86-64 */
typedef Boolean (*XtArgsFunc_db)(Widget, ArgList, Cardinal *);
CheckFunctionTypedef(XtArgsFunc,XtArgsFunc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef Boolean (*XtArgsFunc_db)(Widget, ArgList, Cardinal *);
CheckFunctionTypedef(XtArgsFunc,XtArgsFunc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef Boolean (*XtArgsFunc_db)(Widget, ArgList, Cardinal *);
CheckFunctionTypedef(XtArgsFunc,XtArgsFunc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef Boolean (*XtArgsFunc_db)(Widget, ArgList, Cardinal *);
CheckFunctionTypedef(XtArgsFunc,XtArgsFunc_db);
#elif defined __ia64__
/* IA64 */
typedef Boolean (*XtArgsFunc_db)(Widget, ArgList, Cardinal *);
CheckFunctionTypedef(XtArgsFunc,XtArgsFunc_db);
#elif defined __i386__
/* IA32 */
typedef Boolean (*XtArgsFunc_db)(Widget, ArgList, Cardinal *);
CheckFunctionTypedef(XtArgsFunc,XtArgsFunc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*XtAlmostProc_db)(Widget, Widget, XtWidgetGeometry *, XtWidgetGeometry *);
CheckFunctionTypedef(XtAlmostProc,XtAlmostProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*XtAlmostProc_db)(Widget, Widget, XtWidgetGeometry *, XtWidgetGeometry *);
CheckFunctionTypedef(XtAlmostProc,XtAlmostProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*XtAlmostProc_db)(Widget, Widget, XtWidgetGeometry *, XtWidgetGeometry *);
CheckFunctionTypedef(XtAlmostProc,XtAlmostProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*XtAlmostProc_db)(Widget, Widget, XtWidgetGeometry *, XtWidgetGeometry *);
CheckFunctionTypedef(XtAlmostProc,XtAlmostProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*XtAlmostProc_db)(Widget, Widget, XtWidgetGeometry *, XtWidgetGeometry *);
CheckFunctionTypedef(XtAlmostProc,XtAlmostProc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*XtAlmostProc_db)(Widget, Widget, XtWidgetGeometry *, XtWidgetGeometry *);
CheckFunctionTypedef(XtAlmostProc,XtAlmostProc_db);
#elif defined __i386__
/* IA32 */
typedef void (*XtAlmostProc_db)(Widget, Widget, XtWidgetGeometry *, XtWidgetGeometry *);
CheckFunctionTypedef(XtAlmostProc,XtAlmostProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef Boolean (*XtAcceptFocusProc_db)(Widget, Time *);
CheckFunctionTypedef(XtAcceptFocusProc,XtAcceptFocusProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef Boolean (*XtAcceptFocusProc_db)(Widget, Time *);
CheckFunctionTypedef(XtAcceptFocusProc,XtAcceptFocusProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef Boolean (*XtAcceptFocusProc_db)(Widget, Time *);
CheckFunctionTypedef(XtAcceptFocusProc,XtAcceptFocusProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef Boolean (*XtAcceptFocusProc_db)(Widget, Time *);
CheckFunctionTypedef(XtAcceptFocusProc,XtAcceptFocusProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef Boolean (*XtAcceptFocusProc_db)(Widget, Time *);
CheckFunctionTypedef(XtAcceptFocusProc,XtAcceptFocusProc_db);
#elif defined __ia64__
/* IA64 */
typedef Boolean (*XtAcceptFocusProc_db)(Widget, Time *);
CheckFunctionTypedef(XtAcceptFocusProc,XtAcceptFocusProc_db);
#elif defined __i386__
/* IA32 */
typedef Boolean (*XtAcceptFocusProc_db)(Widget, Time *);
CheckFunctionTypedef(XtAcceptFocusProc,XtAcceptFocusProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef XtGeometryResult (*XtGeometryHandler_db)(Widget, XtWidgetGeometry *, XtWidgetGeometry *);
CheckFunctionTypedef(XtGeometryHandler,XtGeometryHandler_db);
#elif defined __x86_64__
/* x86-64 */
typedef XtGeometryResult (*XtGeometryHandler_db)(Widget, XtWidgetGeometry *, XtWidgetGeometry *);
CheckFunctionTypedef(XtGeometryHandler,XtGeometryHandler_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef XtGeometryResult (*XtGeometryHandler_db)(Widget, XtWidgetGeometry *, XtWidgetGeometry *);
CheckFunctionTypedef(XtGeometryHandler,XtGeometryHandler_db);
#elif defined __powerpc64__
/* PPC64 */
typedef XtGeometryResult (*XtGeometryHandler_db)(Widget, XtWidgetGeometry *, XtWidgetGeometry *);
CheckFunctionTypedef(XtGeometryHandler,XtGeometryHandler_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef XtGeometryResult (*XtGeometryHandler_db)(Widget, XtWidgetGeometry *, XtWidgetGeometry *);
CheckFunctionTypedef(XtGeometryHandler,XtGeometryHandler_db);
#elif defined __ia64__
/* IA64 */
typedef XtGeometryResult (*XtGeometryHandler_db)(Widget, XtWidgetGeometry *, XtWidgetGeometry *);
CheckFunctionTypedef(XtGeometryHandler,XtGeometryHandler_db);
#elif defined __i386__
/* IA32 */
typedef XtGeometryResult (*XtGeometryHandler_db)(Widget, XtWidgetGeometry *, XtWidgetGeometry *);
CheckFunctionTypedef(XtGeometryHandler,XtGeometryHandler_db);
#endif

#if 1
/* All */
typedef void (*XtAllocateProc_db)(WidgetClass, Cardinal *, Cardinal *, ArgList, Cardinal *, XtTypedArgList, Cardinal *, struct _WidgetRec * *, void * *);
CheckFunctionTypedef(XtAllocateProc,XtAllocateProc_db);
#endif

#if 1
/* All */
typedef void (*XtDeallocateProc_db)(struct _WidgetRec *, void *);
CheckFunctionTypedef(XtDeallocateProc,XtDeallocateProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*XtStringProc_db)(Widget, String);
CheckFunctionTypedef(XtStringProc,XtStringProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*XtStringProc_db)(Widget, String);
CheckFunctionTypedef(XtStringProc,XtStringProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*XtStringProc_db)(Widget, String);
CheckFunctionTypedef(XtStringProc,XtStringProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*XtStringProc_db)(Widget, String);
CheckFunctionTypedef(XtStringProc,XtStringProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*XtStringProc_db)(Widget, String);
CheckFunctionTypedef(XtStringProc,XtStringProc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*XtStringProc_db)(Widget, String);
CheckFunctionTypedef(XtStringProc,XtStringProc_db);
#elif defined __i386__
/* IA32 */
typedef void (*XtStringProc_db)(Widget, String);
CheckFunctionTypedef(XtStringProc,XtStringProc_db);
#elif defined __s390x__
/* S390X */
typedef Boolean (*XtSetValuesFunc_db)(Widget, Widget, Widget, ArgList, Cardinal *);
CheckFunctionTypedef(XtSetValuesFunc,XtSetValuesFunc_db);
#elif defined __x86_64__
/* x86-64 */
typedef Boolean (*XtSetValuesFunc_db)(Widget, Widget, Widget, ArgList, Cardinal *);
CheckFunctionTypedef(XtSetValuesFunc,XtSetValuesFunc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef Boolean (*XtSetValuesFunc_db)(Widget, Widget, Widget, ArgList, Cardinal *);
CheckFunctionTypedef(XtSetValuesFunc,XtSetValuesFunc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef Boolean (*XtSetValuesFunc_db)(Widget, Widget, Widget, ArgList, Cardinal *);
CheckFunctionTypedef(XtSetValuesFunc,XtSetValuesFunc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef Boolean (*XtSetValuesFunc_db)(Widget, Widget, Widget, ArgList, Cardinal *);
CheckFunctionTypedef(XtSetValuesFunc,XtSetValuesFunc_db);
#elif defined __ia64__
/* IA64 */
typedef Boolean (*XtSetValuesFunc_db)(Widget, Widget, Widget, ArgList, Cardinal *);
CheckFunctionTypedef(XtSetValuesFunc,XtSetValuesFunc_db);
#elif defined __i386__
/* IA32 */
typedef Boolean (*XtSetValuesFunc_db)(Widget, Widget, Widget, ArgList, Cardinal *);
CheckFunctionTypedef(XtSetValuesFunc,XtSetValuesFunc_db);
#endif

extern void XtConfigureWidget_db(Widget, int, int, unsigned int, unsigned int, unsigned int);
CheckInterfacedef(XtConfigureWidget,XtConfigureWidget_db);
extern void XtCreateWindow_db(Widget, unsigned int, Visual *, XtValueMask, XSetWindowAttributes *);
CheckInterfacedef(XtCreateWindow,XtCreateWindow_db);
extern Boolean XtIsComposite_db(Widget);
CheckInterfacedef(XtIsComposite,XtIsComposite_db);
extern Boolean XtIsConstraint_db(Widget);
CheckInterfacedef(XtIsConstraint,XtIsConstraint_db);
extern Boolean XtIsRectObj_db(Widget);
CheckInterfacedef(XtIsRectObj,XtIsRectObj_db);
extern Boolean XtIsShell_db(Widget);
CheckInterfacedef(XtIsShell,XtIsShell_db);
extern Boolean XtIsTopLevelShell_db(Widget);
CheckInterfacedef(XtIsTopLevelShell,XtIsTopLevelShell_db);
extern Boolean XtIsWMShell_db(Widget);
CheckInterfacedef(XtIsWMShell,XtIsWMShell_db);
extern Boolean XtIsWidget_db(Widget);
CheckInterfacedef(XtIsWidget,XtIsWidget_db);
extern void XtMoveWidget_db(Widget, int, int);
CheckInterfacedef(XtMoveWidget,XtMoveWidget_db);
extern void XtProcessLock_db(void);
CheckInterfacedef(XtProcessLock,XtProcessLock_db);
extern void XtProcessUnlock_db(void);
CheckInterfacedef(XtProcessUnlock,XtProcessUnlock_db);
extern void XtResizeWidget_db(Widget, unsigned int, unsigned int, unsigned int);
CheckInterfacedef(XtResizeWidget,XtResizeWidget_db);
extern void XtResizeWindow_db(Widget);
CheckInterfacedef(XtResizeWindow,XtResizeWindow_db);
extern void _XtInherit_db(void);
CheckInterfacedef(_XtInherit,_XtInherit_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/IntrinsicP.h\n\n",pcnt,cnt);
return cnt;
#endif

}
