/*
 * Test of X11/ObjectP.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
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

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in X11/ObjectP.h\n");
#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtObjectExtensionVersion
	CompareConstant(XtObjectExtensionVersion,1L,4944,architecture)
#else
Msg( "Error: Constant not found: XtObjectExtensionVersion\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtInheritAllocate
	CompareConstant(XtInheritAllocate,((XtAllocateProc) _XtInherit),4945,architecture)
#else
Msg( "Error: Constant not found: XtInheritAllocate\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtInheritDeallocate
	CompareConstant(XtInheritDeallocate,((XtDeallocateProc) _XtInherit),4946,architecture)
#else
Msg( "Error: Constant not found: XtInheritDeallocate\n");
cnt++;
#endif

#endif

#if __i386__
CheckTypeSize(struct _ObjectPart,28, 10261, 2)
CheckMemberSize(struct _ObjectPart,self,4,2,34363)
CheckOffset(struct _ObjectPart,self,0,2,34363)
CheckMemberSize(struct _ObjectPart,widget_class,4,2,34364)
CheckOffset(struct _ObjectPart,widget_class,4,2,34364)
CheckMemberSize(struct _ObjectPart,parent,4,2,34365)
CheckOffset(struct _ObjectPart,parent,8,2,34365)
CheckMemberSize(struct _ObjectPart,xrm_name,4,2,34366)
CheckOffset(struct _ObjectPart,xrm_name,12,2,34366)
CheckMemberSize(struct _ObjectPart,being_destroyed,1,2,34367)
CheckOffset(struct _ObjectPart,being_destroyed,16,2,34367)
CheckMemberSize(struct _ObjectPart,destroy_callbacks,4,2,34368)
CheckOffset(struct _ObjectPart,destroy_callbacks,20,2,34368)
CheckMemberSize(struct _ObjectPart,constraints,4,2,34369)
CheckOffset(struct _ObjectPart,constraints,24,2,34369)
#elif __ia64__
CheckTypeSize(struct _ObjectPart,48, 10261, 3)
CheckMemberSize(struct _ObjectPart,widget_class,8,3,34364)
CheckOffset(struct _ObjectPart,widget_class,8,3,34364)
CheckMemberSize(struct _ObjectPart,parent,8,3,34365)
CheckOffset(struct _ObjectPart,parent,16,3,34365)
CheckMemberSize(struct _ObjectPart,xrm_name,4,3,34366)
CheckOffset(struct _ObjectPart,xrm_name,24,3,34366)
CheckMemberSize(struct _ObjectPart,being_destroyed,1,3,34367)
CheckOffset(struct _ObjectPart,being_destroyed,28,3,34367)
CheckMemberSize(struct _ObjectPart,destroy_callbacks,8,3,34368)
CheckOffset(struct _ObjectPart,destroy_callbacks,32,3,34368)
CheckMemberSize(struct _ObjectPart,constraints,8,3,34369)
CheckOffset(struct _ObjectPart,constraints,40,3,34369)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _ObjectPart,28, 10261, 6)
CheckMemberSize(struct _ObjectPart,widget_class,4,6,34364)
CheckOffset(struct _ObjectPart,widget_class,4,6,34364)
CheckMemberSize(struct _ObjectPart,parent,4,6,34365)
CheckOffset(struct _ObjectPart,parent,8,6,34365)
CheckMemberSize(struct _ObjectPart,xrm_name,4,6,34366)
CheckOffset(struct _ObjectPart,xrm_name,12,6,34366)
CheckMemberSize(struct _ObjectPart,being_destroyed,1,6,34367)
CheckOffset(struct _ObjectPart,being_destroyed,16,6,34367)
CheckMemberSize(struct _ObjectPart,destroy_callbacks,4,6,34368)
CheckOffset(struct _ObjectPart,destroy_callbacks,20,6,34368)
CheckMemberSize(struct _ObjectPart,constraints,4,6,34369)
CheckOffset(struct _ObjectPart,constraints,24,6,34369)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _ObjectPart,28, 10261, 10)
CheckMemberSize(struct _ObjectPart,widget_class,0,10,34364)
CheckOffset(struct _ObjectPart,widget_class,4,10,34364)
CheckMemberSize(struct _ObjectPart,parent,0,10,34365)
CheckOffset(struct _ObjectPart,parent,8,10,34365)
CheckMemberSize(struct _ObjectPart,xrm_name,0,10,34366)
CheckOffset(struct _ObjectPart,xrm_name,12,10,34366)
CheckMemberSize(struct _ObjectPart,being_destroyed,0,10,34367)
CheckOffset(struct _ObjectPart,being_destroyed,16,10,34367)
CheckMemberSize(struct _ObjectPart,destroy_callbacks,0,10,34368)
CheckOffset(struct _ObjectPart,destroy_callbacks,20,10,34368)
CheckMemberSize(struct _ObjectPart,constraints,0,10,34369)
CheckOffset(struct _ObjectPart,constraints,24,10,34369)
#elif __powerpc64__
CheckTypeSize(struct _ObjectPart,48, 10261, 9)
CheckMemberSize(struct _ObjectPart,widget_class,8,9,34364)
CheckOffset(struct _ObjectPart,widget_class,8,9,34364)
CheckMemberSize(struct _ObjectPart,parent,8,9,34365)
CheckOffset(struct _ObjectPart,parent,16,9,34365)
CheckMemberSize(struct _ObjectPart,xrm_name,4,9,34366)
CheckOffset(struct _ObjectPart,xrm_name,24,9,34366)
CheckMemberSize(struct _ObjectPart,being_destroyed,1,9,34367)
CheckOffset(struct _ObjectPart,being_destroyed,28,9,34367)
CheckMemberSize(struct _ObjectPart,destroy_callbacks,8,9,34368)
CheckOffset(struct _ObjectPart,destroy_callbacks,32,9,34368)
CheckMemberSize(struct _ObjectPart,constraints,8,9,34369)
CheckOffset(struct _ObjectPart,constraints,40,9,34369)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10261,0);
Msg("Find size of _ObjectPart (10261)\n");
#endif

#if __i386__
CheckTypeSize(ObjectPart,28, 10264, 2)
#elif __ia64__
CheckTypeSize(ObjectPart,48, 10264, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(ObjectPart,28, 10264, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(ObjectPart,28, 10264, 10)
#elif __powerpc64__
CheckTypeSize(ObjectPart,48, 10264, 9)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10264,0);
Msg("Find size of ObjectPart (10264)\n");
#endif

#if __i386__
CheckTypeSize(struct _ObjectRec,28, 10262, 2)
CheckMemberSize(struct _ObjectRec,object,28,2,34409)
CheckOffset(struct _ObjectRec,object,0,2,34409)
#elif __ia64__
CheckTypeSize(struct _ObjectRec,48, 10262, 3)
CheckMemberSize(struct _ObjectRec,object,48,3,34409)
CheckOffset(struct _ObjectRec,object,0,3,34409)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _ObjectRec,28, 10262, 6)
CheckMemberSize(struct _ObjectRec,object,28,6,34409)
CheckOffset(struct _ObjectRec,object,0,6,34409)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _ObjectRec,28, 10262, 10)
CheckMemberSize(struct _ObjectRec,object,4,10,34409)
CheckOffset(struct _ObjectRec,object,0,10,34409)
#elif __powerpc64__
CheckTypeSize(struct _ObjectRec,48, 10262, 9)
CheckMemberSize(struct _ObjectRec,object,48,9,34409)
CheckOffset(struct _ObjectRec,object,0,9,34409)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10262,0);
Msg("Find size of _ObjectRec (10262)\n");
#endif

#if __i386__
CheckTypeSize(ObjectRec,28, 10263, 2)
#elif __ia64__
CheckTypeSize(ObjectRec,48, 10263, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(ObjectRec,28, 10263, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(ObjectRec,28, 10263, 10)
#elif __powerpc64__
CheckTypeSize(ObjectRec,48, 10263, 9)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10263,0);
Msg("Find size of ObjectRec (10263)\n");
#endif

#if __i386__
CheckTypeSize(struct _ObjectClassPart,116, 10265, 2)
CheckMemberSize(struct _ObjectClassPart,superclass,4,2,34370)
CheckOffset(struct _ObjectClassPart,superclass,0,2,34370)
#elif __ia64__
CheckTypeSize(struct _ObjectClassPart,224, 10265, 3)
CheckMemberSize(struct _ObjectClassPart,class_name,8,3,34371)
CheckOffset(struct _ObjectClassPart,class_name,8,3,34371)
CheckMemberSize(struct _ObjectClassPart,widget_size,4,3,34372)
CheckOffset(struct _ObjectClassPart,widget_size,16,3,34372)
CheckMemberSize(struct _ObjectClassPart,class_initialize,8,3,34373)
CheckOffset(struct _ObjectClassPart,class_initialize,24,3,34373)
CheckMemberSize(struct _ObjectClassPart,class_part_initialize,8,3,34374)
CheckOffset(struct _ObjectClassPart,class_part_initialize,32,3,34374)
CheckMemberSize(struct _ObjectClassPart,class_inited,1,3,34375)
CheckOffset(struct _ObjectClassPart,class_inited,40,3,34375)
CheckMemberSize(struct _ObjectClassPart,initialize,8,3,34376)
CheckOffset(struct _ObjectClassPart,initialize,48,3,34376)
CheckMemberSize(struct _ObjectClassPart,initialize_hook,8,3,34377)
CheckOffset(struct _ObjectClassPart,initialize_hook,56,3,34377)
CheckMemberSize(struct _ObjectClassPart,obj1,8,3,34378)
CheckOffset(struct _ObjectClassPart,obj1,64,3,34378)
CheckMemberSize(struct _ObjectClassPart,obj2,8,3,34379)
CheckOffset(struct _ObjectClassPart,obj2,72,3,34379)
CheckMemberSize(struct _ObjectClassPart,obj3,4,3,34380)
CheckOffset(struct _ObjectClassPart,obj3,80,3,34380)
CheckMemberSize(struct _ObjectClassPart,resources,8,3,34381)
CheckOffset(struct _ObjectClassPart,resources,88,3,34381)
CheckMemberSize(struct _ObjectClassPart,num_resources,4,3,34382)
CheckOffset(struct _ObjectClassPart,num_resources,96,3,34382)
CheckMemberSize(struct _ObjectClassPart,xrm_class,4,3,34383)
CheckOffset(struct _ObjectClassPart,xrm_class,100,3,34383)
CheckMemberSize(struct _ObjectClassPart,obj4,1,3,34384)
CheckOffset(struct _ObjectClassPart,obj4,104,3,34384)
CheckMemberSize(struct _ObjectClassPart,obj5,1,3,34385)
CheckOffset(struct _ObjectClassPart,obj5,105,3,34385)
CheckMemberSize(struct _ObjectClassPart,obj6,1,3,34386)
CheckOffset(struct _ObjectClassPart,obj6,106,3,34386)
CheckMemberSize(struct _ObjectClassPart,obj7,1,3,34387)
CheckOffset(struct _ObjectClassPart,obj7,107,3,34387)
CheckMemberSize(struct _ObjectClassPart,destroy,8,3,34388)
CheckOffset(struct _ObjectClassPart,destroy,112,3,34388)
CheckMemberSize(struct _ObjectClassPart,obj8,8,3,34389)
CheckOffset(struct _ObjectClassPart,obj8,120,3,34389)
CheckMemberSize(struct _ObjectClassPart,obj9,8,3,34390)
CheckOffset(struct _ObjectClassPart,obj9,128,3,34390)
CheckMemberSize(struct _ObjectClassPart,set_values,8,3,34391)
CheckOffset(struct _ObjectClassPart,set_values,136,3,34391)
CheckMemberSize(struct _ObjectClassPart,set_values_hook,8,3,34392)
CheckOffset(struct _ObjectClassPart,set_values_hook,144,3,34392)
CheckMemberSize(struct _ObjectClassPart,obj10,8,3,34393)
CheckOffset(struct _ObjectClassPart,obj10,152,3,34393)
CheckMemberSize(struct _ObjectClassPart,get_values_hook,8,3,34394)
CheckOffset(struct _ObjectClassPart,get_values_hook,160,3,34394)
CheckMemberSize(struct _ObjectClassPart,obj11,8,3,34395)
CheckOffset(struct _ObjectClassPart,obj11,168,3,34395)
CheckMemberSize(struct _ObjectClassPart,version,8,3,34396)
CheckOffset(struct _ObjectClassPart,version,176,3,34396)
CheckMemberSize(struct _ObjectClassPart,callback_private,8,3,34397)
CheckOffset(struct _ObjectClassPart,callback_private,184,3,34397)
CheckMemberSize(struct _ObjectClassPart,obj12,8,3,34398)
CheckOffset(struct _ObjectClassPart,obj12,192,3,34398)
CheckMemberSize(struct _ObjectClassPart,obj13,8,3,34399)
CheckOffset(struct _ObjectClassPart,obj13,200,3,34399)
CheckMemberSize(struct _ObjectClassPart,obj14,8,3,34400)
CheckOffset(struct _ObjectClassPart,obj14,208,3,34400)
CheckMemberSize(struct _ObjectClassPart,extension,8,3,34401)
CheckOffset(struct _ObjectClassPart,extension,216,3,34401)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _ObjectClassPart,116, 10265, 6)
CheckMemberSize(struct _ObjectClassPart,class_name,4,6,34371)
CheckOffset(struct _ObjectClassPart,class_name,4,6,34371)
CheckMemberSize(struct _ObjectClassPart,widget_size,4,6,34372)
CheckOffset(struct _ObjectClassPart,widget_size,8,6,34372)
CheckMemberSize(struct _ObjectClassPart,class_initialize,4,6,34373)
CheckOffset(struct _ObjectClassPart,class_initialize,12,6,34373)
CheckMemberSize(struct _ObjectClassPart,class_part_initialize,4,6,34374)
CheckOffset(struct _ObjectClassPart,class_part_initialize,16,6,34374)
CheckMemberSize(struct _ObjectClassPart,class_inited,1,6,34375)
CheckOffset(struct _ObjectClassPart,class_inited,20,6,34375)
CheckMemberSize(struct _ObjectClassPart,initialize,4,6,34376)
CheckOffset(struct _ObjectClassPart,initialize,24,6,34376)
CheckMemberSize(struct _ObjectClassPart,initialize_hook,4,6,34377)
CheckOffset(struct _ObjectClassPart,initialize_hook,28,6,34377)
CheckMemberSize(struct _ObjectClassPart,obj1,4,6,34378)
CheckOffset(struct _ObjectClassPart,obj1,32,6,34378)
CheckMemberSize(struct _ObjectClassPart,obj2,4,6,34379)
CheckOffset(struct _ObjectClassPart,obj2,36,6,34379)
CheckMemberSize(struct _ObjectClassPart,obj3,4,6,34380)
CheckOffset(struct _ObjectClassPart,obj3,40,6,34380)
CheckMemberSize(struct _ObjectClassPart,resources,4,6,34381)
CheckOffset(struct _ObjectClassPart,resources,44,6,34381)
CheckMemberSize(struct _ObjectClassPart,num_resources,4,6,34382)
CheckOffset(struct _ObjectClassPart,num_resources,48,6,34382)
CheckMemberSize(struct _ObjectClassPart,xrm_class,4,6,34383)
CheckOffset(struct _ObjectClassPart,xrm_class,52,6,34383)
CheckMemberSize(struct _ObjectClassPart,obj4,1,6,34384)
CheckOffset(struct _ObjectClassPart,obj4,56,6,34384)
CheckMemberSize(struct _ObjectClassPart,obj5,1,6,34385)
CheckOffset(struct _ObjectClassPart,obj5,57,6,34385)
CheckMemberSize(struct _ObjectClassPart,obj6,1,6,34386)
CheckOffset(struct _ObjectClassPart,obj6,58,6,34386)
CheckMemberSize(struct _ObjectClassPart,obj7,1,6,34387)
CheckOffset(struct _ObjectClassPart,obj7,59,6,34387)
CheckMemberSize(struct _ObjectClassPart,destroy,4,6,34388)
CheckOffset(struct _ObjectClassPart,destroy,60,6,34388)
CheckMemberSize(struct _ObjectClassPart,obj8,4,6,34389)
CheckOffset(struct _ObjectClassPart,obj8,64,6,34389)
CheckMemberSize(struct _ObjectClassPart,obj9,4,6,34390)
CheckOffset(struct _ObjectClassPart,obj9,68,6,34390)
CheckMemberSize(struct _ObjectClassPart,set_values,4,6,34391)
CheckOffset(struct _ObjectClassPart,set_values,72,6,34391)
CheckMemberSize(struct _ObjectClassPart,set_values_hook,4,6,34392)
CheckOffset(struct _ObjectClassPart,set_values_hook,76,6,34392)
CheckMemberSize(struct _ObjectClassPart,obj10,4,6,34393)
CheckOffset(struct _ObjectClassPart,obj10,80,6,34393)
CheckMemberSize(struct _ObjectClassPart,get_values_hook,4,6,34394)
CheckOffset(struct _ObjectClassPart,get_values_hook,84,6,34394)
CheckMemberSize(struct _ObjectClassPart,obj11,4,6,34395)
CheckOffset(struct _ObjectClassPart,obj11,88,6,34395)
CheckMemberSize(struct _ObjectClassPart,version,4,6,34396)
CheckOffset(struct _ObjectClassPart,version,92,6,34396)
CheckMemberSize(struct _ObjectClassPart,callback_private,4,6,34397)
CheckOffset(struct _ObjectClassPart,callback_private,96,6,34397)
CheckMemberSize(struct _ObjectClassPart,obj12,4,6,34398)
CheckOffset(struct _ObjectClassPart,obj12,100,6,34398)
CheckMemberSize(struct _ObjectClassPart,obj13,4,6,34399)
CheckOffset(struct _ObjectClassPart,obj13,104,6,34399)
CheckMemberSize(struct _ObjectClassPart,obj14,4,6,34400)
CheckOffset(struct _ObjectClassPart,obj14,108,6,34400)
CheckMemberSize(struct _ObjectClassPart,extension,4,6,34401)
CheckOffset(struct _ObjectClassPart,extension,112,6,34401)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _ObjectClassPart,116, 10265, 10)
CheckMemberSize(struct _ObjectClassPart,class_name,0,10,34371)
CheckOffset(struct _ObjectClassPart,class_name,4,10,34371)
CheckMemberSize(struct _ObjectClassPart,widget_size,0,10,34372)
CheckOffset(struct _ObjectClassPart,widget_size,8,10,34372)
CheckMemberSize(struct _ObjectClassPart,class_initialize,0,10,34373)
CheckOffset(struct _ObjectClassPart,class_initialize,12,10,34373)
CheckMemberSize(struct _ObjectClassPart,class_part_initialize,0,10,34374)
CheckOffset(struct _ObjectClassPart,class_part_initialize,16,10,34374)
CheckMemberSize(struct _ObjectClassPart,class_inited,0,10,34375)
CheckOffset(struct _ObjectClassPart,class_inited,20,10,34375)
CheckMemberSize(struct _ObjectClassPart,initialize,0,10,34376)
CheckOffset(struct _ObjectClassPart,initialize,24,10,34376)
CheckMemberSize(struct _ObjectClassPart,initialize_hook,0,10,34377)
CheckOffset(struct _ObjectClassPart,initialize_hook,28,10,34377)
CheckMemberSize(struct _ObjectClassPart,obj1,0,10,34378)
CheckOffset(struct _ObjectClassPart,obj1,32,10,34378)
CheckMemberSize(struct _ObjectClassPart,obj2,0,10,34379)
CheckOffset(struct _ObjectClassPart,obj2,36,10,34379)
CheckMemberSize(struct _ObjectClassPart,obj3,0,10,34380)
CheckOffset(struct _ObjectClassPart,obj3,40,10,34380)
CheckMemberSize(struct _ObjectClassPart,resources,0,10,34381)
CheckOffset(struct _ObjectClassPart,resources,44,10,34381)
CheckMemberSize(struct _ObjectClassPart,num_resources,0,10,34382)
CheckOffset(struct _ObjectClassPart,num_resources,48,10,34382)
CheckMemberSize(struct _ObjectClassPart,xrm_class,0,10,34383)
CheckOffset(struct _ObjectClassPart,xrm_class,52,10,34383)
CheckMemberSize(struct _ObjectClassPart,obj4,0,10,34384)
CheckOffset(struct _ObjectClassPart,obj4,56,10,34384)
CheckMemberSize(struct _ObjectClassPart,obj5,0,10,34385)
CheckOffset(struct _ObjectClassPart,obj5,57,10,34385)
CheckMemberSize(struct _ObjectClassPart,obj6,0,10,34386)
CheckOffset(struct _ObjectClassPart,obj6,58,10,34386)
CheckMemberSize(struct _ObjectClassPart,obj7,0,10,34387)
CheckOffset(struct _ObjectClassPart,obj7,59,10,34387)
CheckMemberSize(struct _ObjectClassPart,destroy,0,10,34388)
CheckOffset(struct _ObjectClassPart,destroy,60,10,34388)
CheckMemberSize(struct _ObjectClassPart,obj8,0,10,34389)
CheckOffset(struct _ObjectClassPart,obj8,64,10,34389)
CheckMemberSize(struct _ObjectClassPart,obj9,0,10,34390)
CheckOffset(struct _ObjectClassPart,obj9,68,10,34390)
CheckMemberSize(struct _ObjectClassPart,set_values,0,10,34391)
CheckOffset(struct _ObjectClassPart,set_values,72,10,34391)
CheckMemberSize(struct _ObjectClassPart,set_values_hook,0,10,34392)
CheckOffset(struct _ObjectClassPart,set_values_hook,76,10,34392)
CheckMemberSize(struct _ObjectClassPart,obj10,0,10,34393)
CheckOffset(struct _ObjectClassPart,obj10,80,10,34393)
CheckMemberSize(struct _ObjectClassPart,get_values_hook,0,10,34394)
CheckOffset(struct _ObjectClassPart,get_values_hook,84,10,34394)
CheckMemberSize(struct _ObjectClassPart,obj11,0,10,34395)
CheckOffset(struct _ObjectClassPart,obj11,88,10,34395)
CheckMemberSize(struct _ObjectClassPart,version,0,10,34396)
CheckOffset(struct _ObjectClassPart,version,92,10,34396)
CheckMemberSize(struct _ObjectClassPart,callback_private,0,10,34397)
CheckOffset(struct _ObjectClassPart,callback_private,96,10,34397)
CheckMemberSize(struct _ObjectClassPart,obj12,0,10,34398)
CheckOffset(struct _ObjectClassPart,obj12,100,10,34398)
CheckMemberSize(struct _ObjectClassPart,obj13,0,10,34399)
CheckOffset(struct _ObjectClassPart,obj13,104,10,34399)
CheckMemberSize(struct _ObjectClassPart,obj14,0,10,34400)
CheckOffset(struct _ObjectClassPart,obj14,108,10,34400)
CheckMemberSize(struct _ObjectClassPart,extension,0,10,34401)
CheckOffset(struct _ObjectClassPart,extension,112,10,34401)
#elif __powerpc64__
CheckTypeSize(struct _ObjectClassPart,224, 10265, 9)
CheckMemberSize(struct _ObjectClassPart,class_name,8,9,34371)
CheckOffset(struct _ObjectClassPart,class_name,8,9,34371)
CheckMemberSize(struct _ObjectClassPart,widget_size,4,9,34372)
CheckOffset(struct _ObjectClassPart,widget_size,16,9,34372)
CheckMemberSize(struct _ObjectClassPart,class_initialize,8,9,34373)
CheckOffset(struct _ObjectClassPart,class_initialize,24,9,34373)
CheckMemberSize(struct _ObjectClassPart,class_part_initialize,8,9,34374)
CheckOffset(struct _ObjectClassPart,class_part_initialize,32,9,34374)
CheckMemberSize(struct _ObjectClassPart,class_inited,1,9,34375)
CheckOffset(struct _ObjectClassPart,class_inited,40,9,34375)
CheckMemberSize(struct _ObjectClassPart,initialize,8,9,34376)
CheckOffset(struct _ObjectClassPart,initialize,48,9,34376)
CheckMemberSize(struct _ObjectClassPart,initialize_hook,8,9,34377)
CheckOffset(struct _ObjectClassPart,initialize_hook,56,9,34377)
CheckMemberSize(struct _ObjectClassPart,obj1,8,9,34378)
CheckOffset(struct _ObjectClassPart,obj1,64,9,34378)
CheckMemberSize(struct _ObjectClassPart,obj2,8,9,34379)
CheckOffset(struct _ObjectClassPart,obj2,72,9,34379)
CheckMemberSize(struct _ObjectClassPart,obj3,4,9,34380)
CheckOffset(struct _ObjectClassPart,obj3,80,9,34380)
CheckMemberSize(struct _ObjectClassPart,resources,8,9,34381)
CheckOffset(struct _ObjectClassPart,resources,88,9,34381)
CheckMemberSize(struct _ObjectClassPart,num_resources,4,9,34382)
CheckOffset(struct _ObjectClassPart,num_resources,96,9,34382)
CheckMemberSize(struct _ObjectClassPart,xrm_class,4,9,34383)
CheckOffset(struct _ObjectClassPart,xrm_class,100,9,34383)
CheckMemberSize(struct _ObjectClassPart,obj4,1,9,34384)
CheckOffset(struct _ObjectClassPart,obj4,104,9,34384)
CheckMemberSize(struct _ObjectClassPart,obj5,1,9,34385)
CheckOffset(struct _ObjectClassPart,obj5,105,9,34385)
CheckMemberSize(struct _ObjectClassPart,obj6,1,9,34386)
CheckOffset(struct _ObjectClassPart,obj6,106,9,34386)
CheckMemberSize(struct _ObjectClassPart,obj7,1,9,34387)
CheckOffset(struct _ObjectClassPart,obj7,107,9,34387)
CheckMemberSize(struct _ObjectClassPart,destroy,8,9,34388)
CheckOffset(struct _ObjectClassPart,destroy,112,9,34388)
CheckMemberSize(struct _ObjectClassPart,obj8,8,9,34389)
CheckOffset(struct _ObjectClassPart,obj8,120,9,34389)
CheckMemberSize(struct _ObjectClassPart,obj9,8,9,34390)
CheckOffset(struct _ObjectClassPart,obj9,128,9,34390)
CheckMemberSize(struct _ObjectClassPart,set_values,8,9,34391)
CheckOffset(struct _ObjectClassPart,set_values,136,9,34391)
CheckMemberSize(struct _ObjectClassPart,set_values_hook,8,9,34392)
CheckOffset(struct _ObjectClassPart,set_values_hook,144,9,34392)
CheckMemberSize(struct _ObjectClassPart,obj10,8,9,34393)
CheckOffset(struct _ObjectClassPart,obj10,152,9,34393)
CheckMemberSize(struct _ObjectClassPart,get_values_hook,8,9,34394)
CheckOffset(struct _ObjectClassPart,get_values_hook,160,9,34394)
CheckMemberSize(struct _ObjectClassPart,obj11,8,9,34395)
CheckOffset(struct _ObjectClassPart,obj11,168,9,34395)
CheckMemberSize(struct _ObjectClassPart,version,8,9,34396)
CheckOffset(struct _ObjectClassPart,version,176,9,34396)
CheckMemberSize(struct _ObjectClassPart,callback_private,8,9,34397)
CheckOffset(struct _ObjectClassPart,callback_private,184,9,34397)
CheckMemberSize(struct _ObjectClassPart,obj12,8,9,34398)
CheckOffset(struct _ObjectClassPart,obj12,192,9,34398)
CheckMemberSize(struct _ObjectClassPart,obj13,8,9,34399)
CheckOffset(struct _ObjectClassPart,obj13,200,9,34399)
CheckMemberSize(struct _ObjectClassPart,obj14,8,9,34400)
CheckOffset(struct _ObjectClassPart,obj14,208,9,34400)
CheckMemberSize(struct _ObjectClassPart,extension,8,9,34401)
CheckOffset(struct _ObjectClassPart,extension,216,9,34401)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10265,0);
Msg("Find size of _ObjectClassPart (10265)\n");
#endif

#if __i386__
CheckTypeSize(ObjectClassPart,116, 10266, 2)
#elif __ia64__
CheckTypeSize(ObjectClassPart,224, 10266, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(ObjectClassPart,116, 10266, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(ObjectClassPart,116, 10266, 10)
#elif __powerpc64__
CheckTypeSize(ObjectClassPart,224, 10266, 9)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10266,0);
Msg("Find size of ObjectClassPart (10266)\n");
#endif

#if __i386__
CheckTypeSize(ObjectClassExtensionRec,24, 10268, 2)
#elif __ia64__
CheckTypeSize(ObjectClassExtensionRec,48, 10268, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(ObjectClassExtensionRec,24, 10268, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(ObjectClassExtensionRec,24, 10268, 10)
#elif __powerpc64__
CheckTypeSize(ObjectClassExtensionRec,48, 10268, 9)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10268,0);
Msg("Find size of ObjectClassExtensionRec (10268)\n");
#endif

#if __i386__
CheckTypeSize(ObjectClassExtension,4, 10270, 2)
#elif __ia64__
CheckTypeSize(ObjectClassExtension,8, 10270, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(ObjectClassExtension,4, 10270, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(ObjectClassExtension,4, 10270, 10)
#elif __powerpc64__
CheckTypeSize(ObjectClassExtension,8, 10270, 9)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10270,0);
Msg("Find size of ObjectClassExtension (10270)\n");
#endif

#if __i386__
CheckTypeSize(struct _ObjectClassRec,116, 10271, 2)
CheckMemberSize(struct _ObjectClassRec,object_class,116,2,34408)
CheckOffset(struct _ObjectClassRec,object_class,0,2,34408)
#elif __ia64__
CheckTypeSize(struct _ObjectClassRec,224, 10271, 3)
CheckMemberSize(struct _ObjectClassRec,object_class,224,3,34408)
CheckOffset(struct _ObjectClassRec,object_class,0,3,34408)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _ObjectClassRec,116, 10271, 6)
CheckMemberSize(struct _ObjectClassRec,object_class,116,6,34408)
CheckOffset(struct _ObjectClassRec,object_class,0,6,34408)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _ObjectClassRec,116, 10271, 10)
CheckMemberSize(struct _ObjectClassRec,object_class,1,10,34408)
CheckOffset(struct _ObjectClassRec,object_class,0,10,34408)
#elif __powerpc64__
CheckTypeSize(struct _ObjectClassRec,224, 10271, 9)
CheckMemberSize(struct _ObjectClassRec,object_class,224,9,34408)
CheckOffset(struct _ObjectClassRec,object_class,0,9,34408)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10271,0);
Msg("Find size of _ObjectClassRec (10271)\n");
#endif

#if __i386__
CheckTypeSize(ObjectClassRec,116, 10272, 2)
#elif __ia64__
CheckTypeSize(ObjectClassRec,224, 10272, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(ObjectClassRec,116, 10272, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(ObjectClassRec,116, 10272, 10)
#elif __powerpc64__
CheckTypeSize(ObjectClassRec,224, 10272, 9)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10272,0);
Msg("Find size of ObjectClassRec (10272)\n");
#endif

#if __i386__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __s390__ && !__s390x__
#elif __powerpc64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10267,0);
Msg("Find size of anon-_ObjectClassExtensionRec (10267)\n");
#endif

#if __i386__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __s390__ && !__s390x__
#elif __powerpc64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10269,0);
Msg("Find size of _ObjectClassExtensionRec * (10269)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in X11/ObjectP.h\n",cnt);
return cnt;
#endif

}
