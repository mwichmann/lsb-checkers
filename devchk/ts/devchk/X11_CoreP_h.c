/*
 * Test of X11/CoreP.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in X11/CoreP.h\n");
#endif

printf("Checking data structures in X11/CoreP.h\n");
#if _LSB_DEFAULT_ARCH
#ifndef XtCoreP_h_
Msg( "Error: Constant not found: XtCoreP_h_\n");
cnt++;
#endif

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

#if _LSB_DEFAULT_ARCH
/* No test for XtInheritDisplayAccelerator */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XtInheritTranslations */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XtInheritExpose */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XtInheritAcceptFocus */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XtInheritQueryGeometry */
#endif

#if 1
CheckTypeSize(struct _WidgetRec,0, 9576, 1, , NULL, 0, NULL)
Msg("Missing member data for _WidgetRec on All\n");
CheckOffset(struct _WidgetRec,core,0,1,216486)
#endif

#if 1
CheckTypeSize(struct _WidgetClassRec,0, 9581, 1, , NULL, 0, NULL)
Msg("Missing member data for _WidgetClassRec on All\n");
CheckOffset(struct _WidgetClassRec,core_class,0,1,216487)
#endif

#if defined __i386__
CheckTypeSize(CorePart,4, 10254, 2, 1.1, NULL, 36905, NULL)
#elif defined __ia64__
Msg("Find size of CorePart (10254)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.1""',NULL,36905,NULL);\n",architecture,10254,0);
#elif defined __powerpc__ && !defined __powerpc64__
Msg("Find size of CorePart (10254)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.1""',NULL,36905,NULL);\n",architecture,10254,0);
#elif defined __powerpc64__
Msg("Find size of CorePart (10254)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.1""',NULL,36905,NULL);\n",architecture,10254,0);
#elif defined __s390__ && !defined __s390x__
Msg("Find size of CorePart (10254)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.1""',NULL,36905,NULL);\n",architecture,10254,0);
#elif defined __x86_64__
Msg("Find size of CorePart (10254)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.1""',NULL,36905,NULL);\n",architecture,10254,0);
#elif defined __s390x__
Msg("Find size of CorePart (10254)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.1""',NULL,36905,NULL);\n",architecture,10254,0);
#else
Msg("Find size of CorePart (10254)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.1""',NULL,36905,NULL);\n",architecture,10254,0);
#endif

#if 1
CheckTypeSize(struct _CoreClassPart,224, 32190, 1, 1.2, NULL, 0, NULL)
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
CheckTypeSize(CoreClassPart,224, 32191, 1, 1.2, NULL, 32190, NULL)
#endif

#if 1
CheckTypeSize(struct _CorePart,0, 36905, 1, , NULL, 0, NULL)
Msg("Missing member data for _CorePart on All\n");
CheckOffset(struct _CorePart,self,0,1,216455)
CheckOffset(struct _CorePart,widget_class,0,1,216456)
CheckOffset(struct _CorePart,parent,0,1,216457)
CheckOffset(struct _CorePart,xrm_name,0,1,216458)
CheckOffset(struct _CorePart,being_destroyed,0,1,216459)
CheckOffset(struct _CorePart,destroy_callbacks,0,1,216460)
CheckOffset(struct _CorePart,constraints,0,1,216461)
CheckOffset(struct _CorePart,x,0,1,216462)
CheckOffset(struct _CorePart,y,0,1,216463)
CheckOffset(struct _CorePart,width,0,1,216464)
CheckOffset(struct _CorePart,height,0,1,216465)
CheckOffset(struct _CorePart,border_width,0,1,216466)
CheckOffset(struct _CorePart,managed,0,1,216467)
CheckOffset(struct _CorePart,sensitive,0,1,216468)
CheckOffset(struct _CorePart,ancestor_sensitive,0,1,216469)
CheckOffset(struct _CorePart,event_table,0,1,216470)
CheckOffset(struct _CorePart,tm,0,1,216471)
CheckOffset(struct _CorePart,accelerators,0,1,216472)
CheckOffset(struct _CorePart,border_pixel,0,1,216473)
CheckOffset(struct _CorePart,border_pixmap,0,1,216474)
CheckOffset(struct _CorePart,popup_list,0,1,216475)
CheckOffset(struct _CorePart,num_popups,0,1,216476)
CheckOffset(struct _CorePart,name,0,1,216477)
CheckOffset(struct _CorePart,screen,0,1,216478)
CheckOffset(struct _CorePart,colormap,0,1,216479)
CheckOffset(struct _CorePart,window,0,1,216480)
CheckOffset(struct _CorePart,depth,0,1,216481)
CheckOffset(struct _CorePart,background_pixel,0,1,216482)
CheckOffset(struct _CorePart,background_pixmap,0,1,216483)
CheckOffset(struct _CorePart,visible,0,1,216484)
CheckOffset(struct _CorePart,mapped_when_managed,0,1,216485)
#endif

#if 1
CheckTypeSize(WidgetRec,0, 36906, 1, 1.1, NULL, 9576, NULL)
#endif

#if 1
CheckTypeSize(CoreRec,0, 36907, 1, 1.1, NULL, 9576, NULL)
#endif

#if 1
CheckTypeSize(WidgetClassRec,0, 36908, 1, 1.1, NULL, 9581, NULL)
#endif

#if 1
CheckTypeSize(CoreClassRec,0, 36909, 1, 1.1, NULL, 9581, NULL)
#endif

int _XtInheritTranslations_db ;
CheckGlobalVar(_XtInheritTranslations_db, _XtInheritTranslations);
WidgetClassRec widgetClassRec_db ;
CheckGlobalVar(widgetClassRec_db, widgetClassRec);
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
