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

#ifdef _LSB_DEFAULT_ARCH
#ifdef XtObjectExtensionVersion
	CompareConstant(XtObjectExtensionVersion,1L,4944,architecture)
#else
Msg( "Error: Constant not found: XtObjectExtensionVersion\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef XtInheritAllocate
	CompareConstant(XtInheritAllocate,((XtAllocateProc) _XtInherit),4945,architecture)
#else
Msg( "Error: Constant not found: XtInheritAllocate\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef XtInheritDeallocate
	CompareConstant(XtInheritDeallocate,((XtDeallocateProc) _XtInherit),4946,architecture)
#else
Msg( "Error: Constant not found: XtInheritDeallocate\n");
cnt++;
#endif

#endif

#ifdef __i386__
CheckTypeSize(struct _ObjectPart,28, 10261, 2)
CheckOffset(struct _ObjectPart,self,0,2,34363)
CheckOffset(struct _ObjectPart,widget_class,4,2,34364)
CheckOffset(struct _ObjectPart,parent,8,2,34365)
CheckOffset(struct _ObjectPart,xrm_name,12,2,34366)
CheckOffset(struct _ObjectPart,being_destroyed,16,2,34367)
CheckOffset(struct _ObjectPart,destroy_callbacks,20,2,34368)
CheckOffset(struct _ObjectPart,constraints,24,2,34369)
#elif __ia64__
CheckTypeSize(struct _ObjectPart,48, 10261, 3)
#elif __powerpc__
CheckTypeSize(struct _ObjectPart,28, 10261, 6)
#elif __s390__
CheckTypeSize(struct _ObjectPart,0, 10261, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10261,0);
Msg("Find size of _ObjectPart (10261)\n");
#endif

#ifdef __i386__
CheckTypeSize(ObjectPart,28, 10264, 2)
#elif __ia64__
CheckTypeSize(ObjectPart,48, 10264, 3)
#elif __powerpc__
CheckTypeSize(ObjectPart,28, 10264, 6)
#elif __s390__
CheckTypeSize(ObjectPart,0, 10264, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10264,0);
Msg("Find size of ObjectPart (10264)\n");
#endif

#ifdef __i386__
CheckTypeSize(struct _ObjectRec,28, 10262, 2)
#elif __ia64__
CheckTypeSize(struct _ObjectRec,48, 10262, 3)
#elif __powerpc__
CheckTypeSize(struct _ObjectRec,28, 10262, 6)
#elif __s390__
CheckTypeSize(struct _ObjectRec,0, 10262, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10262,0);
Msg("Find size of _ObjectRec (10262)\n");
#endif

#ifdef __i386__
CheckTypeSize(ObjectRec,28, 10263, 2)
#elif __ia64__
CheckTypeSize(ObjectRec,48, 10263, 3)
#elif __powerpc__
CheckTypeSize(ObjectRec,28, 10263, 6)
#elif __s390__
CheckTypeSize(ObjectRec,0, 10263, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10263,0);
Msg("Find size of ObjectRec (10263)\n");
#endif

#ifdef __i386__
CheckTypeSize(struct _ObjectClassPart,116, 10265, 2)
CheckOffset(struct _ObjectClassPart,superclass,0,2,34370)
#elif __ia64__
CheckTypeSize(struct _ObjectClassPart,224, 10265, 3)
#elif __powerpc__
CheckTypeSize(struct _ObjectClassPart,116, 10265, 6)
#elif __s390__
CheckTypeSize(struct _ObjectClassPart,0, 10265, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10265,0);
Msg("Find size of _ObjectClassPart (10265)\n");
#endif

#ifdef __i386__
CheckTypeSize(ObjectClassPart,116, 10266, 2)
#elif __ia64__
CheckTypeSize(ObjectClassPart,224, 10266, 3)
#elif __powerpc__
CheckTypeSize(ObjectClassPart,116, 10266, 6)
#elif __s390__
CheckTypeSize(ObjectClassPart,0, 10266, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10266,0);
Msg("Find size of ObjectClassPart (10266)\n");
#endif

#ifdef __i386__
CheckTypeSize(ObjectClassExtensionRec,24, 10268, 2)
#elif __ia64__
CheckTypeSize(ObjectClassExtensionRec,48, 10268, 3)
#elif __powerpc__
CheckTypeSize(ObjectClassExtensionRec,24, 10268, 6)
#elif __s390__
CheckTypeSize(ObjectClassExtensionRec,0, 10268, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10268,0);
Msg("Find size of ObjectClassExtensionRec (10268)\n");
#endif

#ifdef __i386__
CheckTypeSize(ObjectClassExtension,4, 10270, 2)
#elif __ia64__
CheckTypeSize(ObjectClassExtension,8, 10270, 3)
#elif __powerpc__
CheckTypeSize(ObjectClassExtension,4, 10270, 6)
#elif __s390__
CheckTypeSize(ObjectClassExtension,0, 10270, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10270,0);
Msg("Find size of ObjectClassExtension (10270)\n");
#endif

#ifdef __i386__
CheckTypeSize(struct _ObjectClassRec,116, 10271, 2)
#elif __ia64__
CheckTypeSize(struct _ObjectClassRec,224, 10271, 3)
#elif __powerpc__
CheckTypeSize(struct _ObjectClassRec,116, 10271, 6)
#elif __s390__
CheckTypeSize(struct _ObjectClassRec,0, 10271, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10271,0);
Msg("Find size of _ObjectClassRec (10271)\n");
#endif

#ifdef __i386__
CheckTypeSize(ObjectClassRec,116, 10272, 2)
#elif __ia64__
CheckTypeSize(ObjectClassRec,224, 10272, 3)
#elif __powerpc__
CheckTypeSize(ObjectClassRec,116, 10272, 6)
#elif __s390__
CheckTypeSize(ObjectClassRec,0, 10272, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10272,0);
Msg("Find size of ObjectClassRec (10272)\n");
#endif

#ifdef __i386__
#elif __ia64__
#elif __powerpc__
#elif __s390__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10267,0);
Msg("Find size of anon-_ObjectClassExtensionRec (10267)\n");
#endif

#ifdef __i386__
#elif __ia64__
#elif __powerpc__
#elif __s390__
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
