/*
 * Test of X11/ObjectP.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include <wchar.h>
#include <X11/X.h>
#include <X11/Xlib.h>
#include <X11/Intrinsic.h>
#include <X11/IntrinsicP.h>
#include <X11/Core.h>
#include <X11/CoreP.h>
#include "X11/ObjectP.h"



#ifdef TET_TEST
void X11_ObjectP_h()
{
#else
int X11_ObjectP_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in X11/ObjectP.h\n");
#endif

printf("Checking data structures in X11/ObjectP.h\n");
#if _LSB_DEFAULT_ARCH
#ifndef _Xt_ObjectP_h_
Msg( "Error: Constant not found: _Xt_ObjectP_h_\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtObjectExtensionVersion
	CompareConstant(XtObjectExtensionVersion,1L,4944,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XtObjectExtensionVersion\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtInheritAllocate
	CompareConstant(XtInheritAllocate,((XtAllocateProc) _XtInherit),4945,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XtInheritAllocate\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtInheritDeallocate
	CompareConstant(XtInheritDeallocate,((XtDeallocateProc) _XtInherit),4946,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XtInheritDeallocate\n");
cnt++;
#endif

#endif

#if 1
CheckTypeSize(struct _ObjectPart,0, 36933, 1, , NULL, 0, NULL)
Msg("Missing member data for _ObjectPart on All\n");
CheckOffset(struct _ObjectPart,self,0,1,216505)
CheckOffset(struct _ObjectPart,widget_class,0,1,216506)
CheckOffset(struct _ObjectPart,parent,0,1,216507)
CheckOffset(struct _ObjectPart,xrm_name,0,1,216508)
CheckOffset(struct _ObjectPart,being_destroyed,0,1,216509)
CheckOffset(struct _ObjectPart,destroy_callbacks,0,1,216510)
CheckOffset(struct _ObjectPart,constraints,0,1,216511)
#endif

#if 1
CheckTypeSize(struct _ObjectRec,0, 36934, 1, , NULL, 0, NULL)
Msg("Missing member data for _ObjectRec on All\n");
CheckOffset(struct _ObjectRec,object,0,1,216512)
#endif

#if 1
CheckTypeSize(ObjectPart,0, 36935, 1, 1.2, NULL, 36933, NULL)
#endif

#if 1
CheckTypeSize(ObjectRec,0, 36936, 1, 1.2, NULL, 36934, NULL)
#endif

#if 1
CheckTypeSize(struct _ObjectClassPart,0, 36937, 1, , NULL, 0, NULL)
Msg("Missing member data for _ObjectClassPart on All\n");
CheckOffset(struct _ObjectClassPart,superclass,0,1,216513)
CheckOffset(struct _ObjectClassPart,class_name,0,1,216514)
CheckOffset(struct _ObjectClassPart,widget_size,0,1,216515)
CheckOffset(struct _ObjectClassPart,class_initialize,0,1,216516)
CheckOffset(struct _ObjectClassPart,class_part_initialize,0,1,216517)
CheckOffset(struct _ObjectClassPart,class_inited,0,1,216518)
CheckOffset(struct _ObjectClassPart,initialize,0,1,216519)
CheckOffset(struct _ObjectClassPart,initialize_hook,0,1,216520)
CheckOffset(struct _ObjectClassPart,obj1,0,1,216521)
CheckOffset(struct _ObjectClassPart,obj2,0,1,216522)
CheckOffset(struct _ObjectClassPart,obj3,0,1,216523)
CheckOffset(struct _ObjectClassPart,resources,0,1,216524)
CheckOffset(struct _ObjectClassPart,num_resources,0,1,216525)
CheckOffset(struct _ObjectClassPart,xrm_class,0,1,216526)
CheckOffset(struct _ObjectClassPart,obj4,0,1,216527)
CheckOffset(struct _ObjectClassPart,obj5,0,1,216528)
CheckOffset(struct _ObjectClassPart,obj6,0,1,216529)
CheckOffset(struct _ObjectClassPart,obj7,0,1,216530)
CheckOffset(struct _ObjectClassPart,destroy,0,1,216531)
CheckOffset(struct _ObjectClassPart,obj8,0,1,216532)
CheckOffset(struct _ObjectClassPart,obj9,0,1,216533)
CheckOffset(struct _ObjectClassPart,set_values,0,1,216534)
CheckOffset(struct _ObjectClassPart,set_values_hook,0,1,216535)
CheckOffset(struct _ObjectClassPart,obj10,0,1,216536)
CheckOffset(struct _ObjectClassPart,get_values_hook,0,1,216537)
CheckOffset(struct _ObjectClassPart,obj11,0,1,216538)
CheckOffset(struct _ObjectClassPart,version,0,1,216539)
CheckOffset(struct _ObjectClassPart,callback_private,0,1,216540)
CheckOffset(struct _ObjectClassPart,obj12,0,1,216541)
CheckOffset(struct _ObjectClassPart,obj13,0,1,216542)
CheckOffset(struct _ObjectClassPart,obj14,0,1,216543)
CheckOffset(struct _ObjectClassPart,extension,0,1,216544)
#endif

#if 1
CheckTypeSize(ObjectClassPart,0, 36938, 1, 1.2, NULL, 36937, NULL)
#endif

#if 1
CheckTypeSize(ObjectClassExtensionRec,0, 36940, 1, 1.2, NULL, 36939, NULL)
#endif

#if 1
CheckTypeSize(ObjectClassExtension,0, 36941, 1, 1.2, NULL, 36942, NULL)
#endif

#if defined __s390x__
CheckTypeSize(struct _ObjectClassRec,224, 10271, 12, , NULL, 0, NULL)
Msg("Missing member data for _ObjectClassRec on S390X\n");
CheckOffset(struct _ObjectClassRec,object_class,0,12,216551)
#elif defined __x86_64__
CheckTypeSize(struct _ObjectClassRec,224, 10271, 11, , NULL, 0, NULL)
Msg("Missing member data for _ObjectClassRec on x86-64\n");
CheckOffset(struct _ObjectClassRec,object_class,0,11,216551)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _ObjectClassRec,116, 10271, 10, , NULL, 0, NULL)
Msg("Missing member data for _ObjectClassRec on S390\n");
CheckOffset(struct _ObjectClassRec,object_class,0,10,216551)
#elif defined __powerpc64__
CheckTypeSize(struct _ObjectClassRec,224, 10271, 9, , NULL, 0, NULL)
Msg("Missing member data for _ObjectClassRec on PPC64\n");
CheckOffset(struct _ObjectClassRec,object_class,0,9,216551)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _ObjectClassRec,116, 10271, 6, , NULL, 0, NULL)
Msg("Missing member data for _ObjectClassRec on PPC32\n");
CheckOffset(struct _ObjectClassRec,object_class,0,6,216551)
#elif defined __ia64__
CheckTypeSize(struct _ObjectClassRec,224, 10271, 3, , NULL, 0, NULL)
Msg("Missing member data for _ObjectClassRec on IA64\n");
CheckOffset(struct _ObjectClassRec,object_class,0,3,216551)
#elif defined __i386__
CheckTypeSize(struct _ObjectClassRec,116, 10271, 2, , NULL, 0, NULL)
Msg("Missing member data for _ObjectClassRec on IA32\n");
CheckOffset(struct _ObjectClassRec,object_class,0,2,216551)
#elif 1
CheckTypeSize(struct _ObjectClassRec,0, 10271, 1, , NULL, 0, NULL)
Msg("Missing member data for _ObjectClassRec on All\n");
CheckOffset(struct _ObjectClassRec,object_class,0,1,216551)
#endif

#if defined __s390x__
CheckTypeSize(ObjectClassRec,224, 10272, 12, 1.3, NULL, 10271, NULL)
#elif defined __x86_64__
CheckTypeSize(ObjectClassRec,224, 10272, 11, 2.0, NULL, 10271, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(ObjectClassRec,116, 10272, 10, 1.3, NULL, 10271, NULL)
#elif defined __powerpc64__
CheckTypeSize(ObjectClassRec,224, 10272, 9, 2.0, NULL, 10271, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(ObjectClassRec,116, 10272, 6, 1.2, NULL, 10271, NULL)
#elif defined __ia64__
CheckTypeSize(ObjectClassRec,224, 10272, 3, 1.3, NULL, 10271, NULL)
#elif defined __i386__
CheckTypeSize(ObjectClassRec,116, 10272, 2, 1.2, NULL, 10271, NULL)
#else
Msg("Find size of ObjectClassRec (10272)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,10271, NULL);\n",architecture,10272,0);
#endif

ObjectClassRec objectClassRec_db ;
CheckGlobalVar(objectClassRec_db, objectClassRec);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/ObjectP.h\n\n",pcnt,cnt);
return cnt;
#endif

}
