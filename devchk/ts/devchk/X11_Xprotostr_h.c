/*
 * Test of X11/Xprotostr.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "X11/Xprotostr.h"



#ifdef TET_TEST
void X11_Xprotostr_h()
{
#else
int X11_Xprotostr_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in X11/Xprotostr.h\n");
#endif

printf("Checking data structures in X11/Xprotostr.h\n");
#if 1
CheckTypeSize(struct _xSegment,0, 37067, 1, , NULL, 0, NULL)
Msg("Missing member data for _xSegment on All\n");
CheckOffset(struct _xSegment,x1,0,1,216885)
CheckOffset(struct _xSegment,y1,0,1,216886)
CheckOffset(struct _xSegment,x2,0,1,216887)
CheckOffset(struct _xSegment,y2,0,1,216888)
#endif

#if 1
CheckTypeSize(xSegment,0, 37068, 1, 1.0, NULL, 37067, NULL)
#endif

#if 1
CheckTypeSize(struct _xPoint,0, 37069, 1, , NULL, 0, NULL)
Msg("Missing member data for _xPoint on All\n");
CheckOffset(struct _xPoint,x,0,1,216889)
CheckOffset(struct _xPoint,y,0,1,216890)
#endif

#if 1
CheckTypeSize(xPoint,0, 37070, 1, 1.0, NULL, 37069, NULL)
#endif

#if 1
CheckTypeSize(struct _xRectangle,0, 37071, 1, , NULL, 0, NULL)
Msg("Missing member data for _xRectangle on All\n");
CheckOffset(struct _xRectangle,x,0,1,216891)
CheckOffset(struct _xRectangle,y,0,1,216892)
CheckOffset(struct _xRectangle,width,0,1,216893)
CheckOffset(struct _xRectangle,height,0,1,216894)
#endif

#if 1
CheckTypeSize(xRectangle,0, 37072, 1, 1.0, NULL, 37071, NULL)
#endif

#if 1
CheckTypeSize(struct _xArc,0, 37073, 1, , NULL, 0, NULL)
Msg("Missing member data for _xArc on All\n");
CheckOffset(struct _xArc,x,0,1,216895)
CheckOffset(struct _xArc,y,0,1,216896)
CheckOffset(struct _xArc,width,0,1,216897)
CheckOffset(struct _xArc,height,0,1,216898)
CheckOffset(struct _xArc,angle1,0,1,216899)
CheckOffset(struct _xArc,angle2,0,1,216900)
#endif

#if 1
CheckTypeSize(xArc,0, 37074, 1, 1.0, NULL, 37073, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/Xprotostr.h\n\n",pcnt,cnt);
return cnt;
#endif

}
