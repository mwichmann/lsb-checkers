/*
 * Test of X11/RectObjP.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include <stdio.h>
#ifndef LSBCC_MODE
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include <X11/Xresource.h>
#include <X11/Intrinsic.h>
#include <X11/IntrinsicP.h>
#include <X11/ObjectP.h>
#endif
#include "X11/RectObjP.h"



#ifdef TET_TEST
void X11_RectObjP_h()
{
#else
int X11_RectObjP_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in X11/RectObjP.h\n");
#endif

printf("Checking data structures in X11/RectObjP.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for X11/RectObjP.h depends on X11/RectObj.h */
#endif

#if 1
CheckTypeSize(struct _RectObjPart,0, 39359, 1, , NULL, 0, NULL)
Msg("Missing member data for _RectObjPart on All\n");
CheckOffset(struct _RectObjPart,x,0,1,217453)
CheckOffset(struct _RectObjPart,y,0,1,217454)
CheckOffset(struct _RectObjPart,width,0,1,217455)
CheckOffset(struct _RectObjPart,height,0,1,217456)
CheckOffset(struct _RectObjPart,border_width,0,1,217457)
CheckOffset(struct _RectObjPart,managed,0,1,217458)
CheckOffset(struct _RectObjPart,sensitive,0,1,217459)
CheckOffset(struct _RectObjPart,ancestor_sensitive,0,1,217460)
#endif

#if 1
CheckTypeSize(RectObjPart,0, 39360, 1, 4.0, NULL, 39359, NULL)
#endif

#if 1
CheckTypeSize(struct _RectObjRec,0, 39361, 1, , NULL, 0, NULL)
Msg("Missing member data for _RectObjRec on All\n");
CheckOffset(struct _RectObjRec,object,0,1,217461)
CheckOffset(struct _RectObjRec,rectangle,0,1,217462)
#endif

#if 1
CheckTypeSize(RectObjRec,0, 39362, 1, 4.0, NULL, 39361, NULL)
#endif

#if 1
CheckTypeSize(struct _RectObjClassPart,0, 39363, 1, , NULL, 0, NULL)
Msg("Missing member data for _RectObjClassPart on All\n");
CheckOffset(struct _RectObjClassPart,superclass,0,1,217463)
CheckOffset(struct _RectObjClassPart,class_name,0,1,217464)
CheckOffset(struct _RectObjClassPart,widget_size,0,1,217465)
CheckOffset(struct _RectObjClassPart,class_initialize,0,1,217466)
CheckOffset(struct _RectObjClassPart,class_part_initialize,0,1,217467)
CheckOffset(struct _RectObjClassPart,class_inited,0,1,217468)
CheckOffset(struct _RectObjClassPart,initialize,0,1,217469)
CheckOffset(struct _RectObjClassPart,initialize_hook,0,1,217470)
CheckOffset(struct _RectObjClassPart,rect1,0,1,217471)
CheckOffset(struct _RectObjClassPart,rect2,0,1,217472)
CheckOffset(struct _RectObjClassPart,rect3,0,1,217473)
CheckOffset(struct _RectObjClassPart,resources,0,1,217474)
CheckOffset(struct _RectObjClassPart,num_resources,0,1,217475)
CheckOffset(struct _RectObjClassPart,xrm_class,0,1,217476)
CheckOffset(struct _RectObjClassPart,rect4,0,1,217477)
CheckOffset(struct _RectObjClassPart,rect5,0,1,217478)
CheckOffset(struct _RectObjClassPart,rect6,0,1,217479)
CheckOffset(struct _RectObjClassPart,rect7,0,1,217480)
CheckOffset(struct _RectObjClassPart,destroy,0,1,217481)
CheckOffset(struct _RectObjClassPart,resize,0,1,217482)
CheckOffset(struct _RectObjClassPart,expose,0,1,217483)
CheckOffset(struct _RectObjClassPart,set_values,0,1,217484)
CheckOffset(struct _RectObjClassPart,set_values_hook,0,1,217485)
CheckOffset(struct _RectObjClassPart,set_values_almost,0,1,217486)
CheckOffset(struct _RectObjClassPart,get_values_hook,0,1,217487)
CheckOffset(struct _RectObjClassPart,rect9,0,1,217488)
CheckOffset(struct _RectObjClassPart,version,0,1,217489)
CheckOffset(struct _RectObjClassPart,callback_private,0,1,217490)
CheckOffset(struct _RectObjClassPart,rect10,0,1,217491)
CheckOffset(struct _RectObjClassPart,query_geometry,0,1,217492)
CheckOffset(struct _RectObjClassPart,rect11,0,1,217493)
CheckOffset(struct _RectObjClassPart,extension,0,1,217494)
#endif

#if 1
CheckTypeSize(RectObjClassPart,0, 39364, 1, 4.0, NULL, 39363, NULL)
#endif

#if 1
CheckTypeSize(struct _RectObjClassRec,0, 39365, 1, , NULL, 0, NULL)
Msg("Missing member data for _RectObjClassRec on All\n");
CheckOffset(struct _RectObjClassRec,rect_class,0,1,217495)
#endif

#if 1
CheckTypeSize(RectObjClassRec,0, 39366, 1, 4.0, NULL, 39365, NULL)
#endif

RectObjClassRec rectObjClassRec_db ;
CheckGlobalVar(rectObjClassRec_db, rectObjClassRec);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/RectObjP.h\n\n",pcnt,cnt);
return cnt;
#endif

}
