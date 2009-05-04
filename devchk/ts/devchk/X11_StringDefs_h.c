/*
 * Test of X11/StringDefs.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "X11/StringDefs.h"



#ifdef TET_TEST
void X11_StringDefs_h()
{
#else
int X11_StringDefs_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in X11/StringDefs.h\n");
#endif

printf("Checking data structures in X11/StringDefs.h\n");
#if _LSB_DEFAULT_ARCH
#ifndef _XtStringDefs_h_
Msg( "Error: Constant not found: _XtStringDefs_h_\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNaccelerators
	CompareConstant(XtNaccelerators,((char*)&XtStrings[0]),3774,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNaccelerators\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNallowHoriz
	CompareConstant(XtNallowHoriz,((char*)&XtStrings[13]),3775,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNallowHoriz\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNallowVert
	CompareConstant(XtNallowVert,((char*)&XtStrings[24]),3776,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNallowVert\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNancestorSensitive
	CompareConstant(XtNancestorSensitive,((char*)&XtStrings[34]),3777,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNancestorSensitive\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNbackground
	CompareConstant(XtNbackground,((char*)&XtStrings[52]),3778,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNbackground\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNbackgroundPixmap
	CompareConstant(XtNbackgroundPixmap,((char*)&XtStrings[63]),3779,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNbackgroundPixmap\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNbitmap
	CompareConstant(XtNbitmap,((char*)&XtStrings[80]),3780,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNbitmap\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNborderColor
	CompareConstant(XtNborderColor,((char*)&XtStrings[87]),3781,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNborderColor\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNborder
	CompareConstant(XtNborder,((char*)&XtStrings[99]),3782,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNborder\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNborderPixmap
	CompareConstant(XtNborderPixmap,((char*)&XtStrings[111]),3783,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNborderPixmap\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNborderWidth
	CompareConstant(XtNborderWidth,((char*)&XtStrings[124]),3784,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNborderWidth\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNcallback
	CompareConstant(XtNcallback,((char*)&XtStrings[136]),3785,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNcallback\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNchildren
	CompareConstant(XtNchildren,((char*)&XtStrings[145]),3786,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNchildren\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNcolormap
	CompareConstant(XtNcolormap,((char*)&XtStrings[154]),3787,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNcolormap\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNdepth
	CompareConstant(XtNdepth,((char*)&XtStrings[163]),3788,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNdepth\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNdestroyCallback
	CompareConstant(XtNdestroyCallback,((char*)&XtStrings[169]),3789,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNdestroyCallback\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNeditType
	CompareConstant(XtNeditType,((char*)&XtStrings[185]),3790,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNeditType\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNfile
	CompareConstant(XtNfile,((char*)&XtStrings[194]),3791,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNfile\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNfont
	CompareConstant(XtNfont,((char*)&XtStrings[199]),3792,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNfont\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNforceBars
	CompareConstant(XtNforceBars,((char*)&XtStrings[204]),3793,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNforceBars\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNforeground
	CompareConstant(XtNforeground,((char*)&XtStrings[214]),3794,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNforeground\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNfunction
	CompareConstant(XtNfunction,((char*)&XtStrings[225]),3795,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNfunction\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNheight
	CompareConstant(XtNheight,((char*)&XtStrings[234]),3796,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNheight\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNhighlight
	CompareConstant(XtNhighlight,((char*)&XtStrings[241]),3797,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNhighlight\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNhSpace
	CompareConstant(XtNhSpace,((char*)&XtStrings[251]),3798,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNhSpace\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNindex
	CompareConstant(XtNindex,((char*)&XtStrings[258]),3799,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNindex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNinitialResourcesPersistent
	CompareConstant(XtNinitialResourcesPersistent,((char*)&XtStrings[264]),3800,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNinitialResourcesPersistent\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNinnerHeight
	CompareConstant(XtNinnerHeight,((char*)&XtStrings[291]),3801,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNinnerHeight\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNinnerWidth
	CompareConstant(XtNinnerWidth,((char*)&XtStrings[303]),3802,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNinnerWidth\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNinnerWindow
	CompareConstant(XtNinnerWindow,((char*)&XtStrings[314]),3803,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNinnerWindow\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNinsertPosition
	CompareConstant(XtNinsertPosition,((char*)&XtStrings[326]),3804,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNinsertPosition\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNinternalHeight
	CompareConstant(XtNinternalHeight,((char*)&XtStrings[341]),3805,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNinternalHeight\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNinternalWidth
	CompareConstant(XtNinternalWidth,((char*)&XtStrings[356]),3806,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNinternalWidth\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNjumpProc
	CompareConstant(XtNjumpProc,((char*)&XtStrings[370]),3807,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNjumpProc\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNjustify
	CompareConstant(XtNjustify,((char*)&XtStrings[379]),3808,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNjustify\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNknobHeight
	CompareConstant(XtNknobHeight,((char*)&XtStrings[387]),3809,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNknobHeight\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNknobIndent
	CompareConstant(XtNknobIndent,((char*)&XtStrings[398]),3810,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNknobIndent\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNknobPixel
	CompareConstant(XtNknobPixel,((char*)&XtStrings[409]),3811,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNknobPixel\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNknobWidth
	CompareConstant(XtNknobWidth,((char*)&XtStrings[419]),3812,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNknobWidth\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNlabel
	CompareConstant(XtNlabel,((char*)&XtStrings[429]),3813,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNlabel\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNlength
	CompareConstant(XtNlength,((char*)&XtStrings[435]),3814,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNlength\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNlowerRight
	CompareConstant(XtNlowerRight,((char*)&XtStrings[442]),3815,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNlowerRight\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNmappedWhenManaged
	CompareConstant(XtNmappedWhenManaged,((char*)&XtStrings[453]),3816,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNmappedWhenManaged\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNmenuEntry
	CompareConstant(XtNmenuEntry,((char*)&XtStrings[471]),3817,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNmenuEntry\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNname
	CompareConstant(XtNname,((char*)&XtStrings[481]),3818,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNname\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNnotify
	CompareConstant(XtNnotify,((char*)&XtStrings[486]),3819,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNnotify\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNnumChildren
	CompareConstant(XtNnumChildren,((char*)&XtStrings[493]),3820,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNnumChildren\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNorientation
	CompareConstant(XtNorientation,((char*)&XtStrings[505]),3821,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNorientation\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNparameter
	CompareConstant(XtNparameter,((char*)&XtStrings[517]),3822,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNparameter\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNpixmap
	CompareConstant(XtNpixmap,((char*)&XtStrings[527]),3823,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNpixmap\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNpopupCallback
	CompareConstant(XtNpopupCallback,((char*)&XtStrings[534]),3824,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNpopupCallback\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNpopdownCallback
	CompareConstant(XtNpopdownCallback,((char*)&XtStrings[548]),3825,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNpopdownCallback\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNresize
	CompareConstant(XtNresize,((char*)&XtStrings[564]),3826,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNresize\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNreverseVideo
	CompareConstant(XtNreverseVideo,((char*)&XtStrings[571]),3827,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNreverseVideo\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNscreen
	CompareConstant(XtNscreen,((char*)&XtStrings[584]),3828,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNscreen\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNscrollProc
	CompareConstant(XtNscrollProc,((char*)&XtStrings[591]),3829,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNscrollProc\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNscrollDCursor
	CompareConstant(XtNscrollDCursor,((char*)&XtStrings[602]),3830,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNscrollDCursor\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNscrollHCursor
	CompareConstant(XtNscrollHCursor,((char*)&XtStrings[616]),3831,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNscrollHCursor\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNscrollLCursor
	CompareConstant(XtNscrollLCursor,((char*)&XtStrings[630]),3832,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNscrollLCursor\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNscrollRCursor
	CompareConstant(XtNscrollRCursor,((char*)&XtStrings[644]),3833,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNscrollRCursor\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNscrollUCursor
	CompareConstant(XtNscrollUCursor,((char*)&XtStrings[658]),3834,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNscrollUCursor\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNscrollVCursor
	CompareConstant(XtNscrollVCursor,((char*)&XtStrings[672]),3835,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNscrollVCursor\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNselection
	CompareConstant(XtNselection,((char*)&XtStrings[686]),3836,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNselection\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNselectionArray
	CompareConstant(XtNselectionArray,((char*)&XtStrings[696]),3837,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNselectionArray\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNsensitive
	CompareConstant(XtNsensitive,((char*)&XtStrings[711]),3838,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNsensitive\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNshown
	CompareConstant(XtNshown,((char*)&XtStrings[721]),3839,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNshown\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNspace
	CompareConstant(XtNspace,((char*)&XtStrings[727]),3840,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNspace\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNstring
	CompareConstant(XtNstring,((char*)&XtStrings[733]),3841,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNstring\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNtextOptions
	CompareConstant(XtNtextOptions,((char*)&XtStrings[740]),3842,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNtextOptions\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNtextSink
	CompareConstant(XtNtextSink,((char*)&XtStrings[752]),3843,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNtextSink\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNtextSource
	CompareConstant(XtNtextSource,((char*)&XtStrings[761]),3844,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNtextSource\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNthickness
	CompareConstant(XtNthickness,((char*)&XtStrings[772]),3845,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNthickness\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNthumb
	CompareConstant(XtNthumb,((char*)&XtStrings[782]),3846,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNthumb\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNthumbProc
	CompareConstant(XtNthumbProc,((char*)&XtStrings[788]),3847,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNthumbProc\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNtop
	CompareConstant(XtNtop,((char*)&XtStrings[798]),3848,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNtop\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNtranslations
	CompareConstant(XtNtranslations,((char*)&XtStrings[802]),3849,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNtranslations\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNunrealizeCallback
	CompareConstant(XtNunrealizeCallback,((char*)&XtStrings[815]),3850,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNunrealizeCallback\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNupdate
	CompareConstant(XtNupdate,((char*)&XtStrings[833]),3851,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNupdate\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNuseBottom
	CompareConstant(XtNuseBottom,((char*)&XtStrings[840]),3852,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNuseBottom\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNuseRight
	CompareConstant(XtNuseRight,((char*)&XtStrings[850]),3853,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNuseRight\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNvalue
	CompareConstant(XtNvalue,((char*)&XtStrings[859]),3854,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNvalue\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNvSpace
	CompareConstant(XtNvSpace,((char*)&XtStrings[865]),3855,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNvSpace\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNwidth
	CompareConstant(XtNwidth,((char*)&XtStrings[872]),3856,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNwidth\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNwindow
	CompareConstant(XtNwindow,((char*)&XtStrings[878]),3857,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNwindow\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNx
	CompareConstant(XtNx,((char*)&XtStrings[885]),3858,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNx\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNy
	CompareConstant(XtNy,((char*)&XtStrings[887]),3859,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNy\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCAccelerators
	CompareConstant(XtCAccelerators,((char*)&XtStrings[889]),3860,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCAccelerators\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCBackground
	CompareConstant(XtCBackground,((char*)&XtStrings[902]),3861,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCBackground\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCBitmap
	CompareConstant(XtCBitmap,((char*)&XtStrings[913]),3862,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCBitmap\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCBoolean
	CompareConstant(XtCBoolean,((char*)&XtStrings[920]),3863,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCBoolean\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCBorderColor
	CompareConstant(XtCBorderColor,((char*)&XtStrings[928]),3864,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCBorderColor\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCBorderWidth
	CompareConstant(XtCBorderWidth,((char*)&XtStrings[940]),3865,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCBorderWidth\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCCallback
	CompareConstant(XtCCallback,((char*)&XtStrings[952]),3866,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCCallback\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCColormap
	CompareConstant(XtCColormap,((char*)&XtStrings[961]),3867,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCColormap\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCColor
	CompareConstant(XtCColor,((char*)&XtStrings[970]),3868,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCColor\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCCursor
	CompareConstant(XtCCursor,((char*)&XtStrings[976]),3869,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCCursor\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCDepth
	CompareConstant(XtCDepth,((char*)&XtStrings[983]),3870,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCDepth\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCEditType
	CompareConstant(XtCEditType,((char*)&XtStrings[989]),3871,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCEditType\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCEventBindings
	CompareConstant(XtCEventBindings,((char*)&XtStrings[998]),3872,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCEventBindings\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCFile
	CompareConstant(XtCFile,((char*)&XtStrings[1012]),3873,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCFile\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCFont
	CompareConstant(XtCFont,((char*)&XtStrings[1017]),3874,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCFont\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCForeground
	CompareConstant(XtCForeground,((char*)&XtStrings[1022]),3875,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCForeground\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCFraction
	CompareConstant(XtCFraction,((char*)&XtStrings[1033]),3876,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCFraction\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCFunction
	CompareConstant(XtCFunction,((char*)&XtStrings[1042]),3877,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCFunction\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCHeight
	CompareConstant(XtCHeight,((char*)&XtStrings[1051]),3878,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCHeight\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCHSpace
	CompareConstant(XtCHSpace,((char*)&XtStrings[1058]),3879,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCHSpace\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCIndex
	CompareConstant(XtCIndex,((char*)&XtStrings[1065]),3880,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCIndex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCInitialResourcesPersistent
	CompareConstant(XtCInitialResourcesPersistent,((char*)&XtStrings[1071]),3881,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCInitialResourcesPersistent\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCInsertPosition
	CompareConstant(XtCInsertPosition,((char*)&XtStrings[1098]),3882,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCInsertPosition\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCInterval
	CompareConstant(XtCInterval,((char*)&XtStrings[1113]),3883,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCInterval\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCJustify
	CompareConstant(XtCJustify,((char*)&XtStrings[1122]),3884,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCJustify\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCKnobIndent
	CompareConstant(XtCKnobIndent,((char*)&XtStrings[1130]),3885,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCKnobIndent\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCKnobPixel
	CompareConstant(XtCKnobPixel,((char*)&XtStrings[1141]),3886,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCKnobPixel\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCLabel
	CompareConstant(XtCLabel,((char*)&XtStrings[1151]),3887,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCLabel\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCLength
	CompareConstant(XtCLength,((char*)&XtStrings[1157]),3888,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCLength\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCMappedWhenManaged
	CompareConstant(XtCMappedWhenManaged,((char*)&XtStrings[1164]),3889,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCMappedWhenManaged\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCMargin
	CompareConstant(XtCMargin,((char*)&XtStrings[1182]),3890,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCMargin\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCMenuEntry
	CompareConstant(XtCMenuEntry,((char*)&XtStrings[1189]),3891,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCMenuEntry\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCNotify
	CompareConstant(XtCNotify,((char*)&XtStrings[1199]),3892,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCNotify\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCOrientation
	CompareConstant(XtCOrientation,((char*)&XtStrings[1206]),3893,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCOrientation\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCParameter
	CompareConstant(XtCParameter,((char*)&XtStrings[1218]),3894,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCParameter\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCPixmap
	CompareConstant(XtCPixmap,((char*)&XtStrings[1228]),3895,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCPixmap\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCPosition
	CompareConstant(XtCPosition,((char*)&XtStrings[1235]),3896,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCPosition\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCReadOnly
	CompareConstant(XtCReadOnly,((char*)&XtStrings[1244]),3897,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCReadOnly\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCResize
	CompareConstant(XtCResize,((char*)&XtStrings[1253]),3898,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCResize\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCReverseVideo
	CompareConstant(XtCReverseVideo,((char*)&XtStrings[1260]),3899,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCReverseVideo\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCScreen
	CompareConstant(XtCScreen,((char*)&XtStrings[1273]),3900,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCScreen\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCScrollProc
	CompareConstant(XtCScrollProc,((char*)&XtStrings[1280]),3901,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCScrollProc\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCScrollDCursor
	CompareConstant(XtCScrollDCursor,((char*)&XtStrings[1291]),3902,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCScrollDCursor\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCScrollHCursor
	CompareConstant(XtCScrollHCursor,((char*)&XtStrings[1305]),3903,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCScrollHCursor\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCScrollLCursor
	CompareConstant(XtCScrollLCursor,((char*)&XtStrings[1319]),3904,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCScrollLCursor\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCScrollRCursor
	CompareConstant(XtCScrollRCursor,((char*)&XtStrings[1333]),3905,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCScrollRCursor\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCScrollUCursor
	CompareConstant(XtCScrollUCursor,((char*)&XtStrings[1347]),3906,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCScrollUCursor\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCScrollVCursor
	CompareConstant(XtCScrollVCursor,((char*)&XtStrings[1361]),3907,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCScrollVCursor\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCSelection
	CompareConstant(XtCSelection,((char*)&XtStrings[1375]),3908,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCSelection\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCSensitive
	CompareConstant(XtCSensitive,((char*)&XtStrings[1385]),3909,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCSensitive\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCSelectionArray
	CompareConstant(XtCSelectionArray,((char*)&XtStrings[1395]),3910,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCSelectionArray\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCSpace
	CompareConstant(XtCSpace,((char*)&XtStrings[1410]),3911,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCSpace\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCString
	CompareConstant(XtCString,((char*)&XtStrings[1416]),3912,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCString\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCTextOptions
	CompareConstant(XtCTextOptions,((char*)&XtStrings[1423]),3913,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCTextOptions\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCTextPosition
	CompareConstant(XtCTextPosition,((char*)&XtStrings[1435]),3914,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCTextPosition\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCTextSink
	CompareConstant(XtCTextSink,((char*)&XtStrings[1448]),3915,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCTextSink\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCTextSource
	CompareConstant(XtCTextSource,((char*)&XtStrings[1457]),3916,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCTextSource\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCThickness
	CompareConstant(XtCThickness,((char*)&XtStrings[1468]),3917,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCThickness\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCThumb
	CompareConstant(XtCThumb,((char*)&XtStrings[1478]),3918,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCThumb\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCTranslations
	CompareConstant(XtCTranslations,((char*)&XtStrings[1484]),3919,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCTranslations\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCValue
	CompareConstant(XtCValue,((char*)&XtStrings[1497]),3920,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCValue\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCVSpace
	CompareConstant(XtCVSpace,((char*)&XtStrings[1503]),3921,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCVSpace\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCWidth
	CompareConstant(XtCWidth,((char*)&XtStrings[1510]),3922,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCWidth\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCWindow
	CompareConstant(XtCWindow,((char*)&XtStrings[1516]),3923,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCWindow\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCX
	CompareConstant(XtCX,((char*)&XtStrings[1523]),3924,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCY
	CompareConstant(XtCY,((char*)&XtStrings[1525]),3925,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtRAcceleratorTable
	CompareConstant(XtRAcceleratorTable,((char*)&XtStrings[1527]),3926,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtRAcceleratorTable\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtRAtom
	CompareConstant(XtRAtom,((char*)&XtStrings[1544]),3927,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtRAtom\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtRBitmap
	CompareConstant(XtRBitmap,((char*)&XtStrings[1549]),3928,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtRBitmap\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtRBool
	CompareConstant(XtRBool,((char*)&XtStrings[1556]),3929,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtRBool\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtRBoolean
	CompareConstant(XtRBoolean,((char*)&XtStrings[1561]),3930,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtRBoolean\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtRCallback
	CompareConstant(XtRCallback,((char*)&XtStrings[1569]),3931,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtRCallback\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtRCallProc
	CompareConstant(XtRCallProc,((char*)&XtStrings[1578]),3932,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtRCallProc\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtRCardinal
	CompareConstant(XtRCardinal,((char*)&XtStrings[1587]),3933,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtRCardinal\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtRColor
	CompareConstant(XtRColor,((char*)&XtStrings[1596]),3934,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtRColor\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtRColormap
	CompareConstant(XtRColormap,((char*)&XtStrings[1602]),3935,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtRColormap\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtRCursor
	CompareConstant(XtRCursor,((char*)&XtStrings[1611]),3936,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtRCursor\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtRDimension
	CompareConstant(XtRDimension,((char*)&XtStrings[1618]),3937,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtRDimension\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtRDisplay
	CompareConstant(XtRDisplay,((char*)&XtStrings[1628]),3938,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtRDisplay\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtREditMode
	CompareConstant(XtREditMode,((char*)&XtStrings[1636]),3939,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtREditMode\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtREnum
	CompareConstant(XtREnum,((char*)&XtStrings[1645]),3940,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtREnum\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtRFile
	CompareConstant(XtRFile,((char*)&XtStrings[1650]),3941,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtRFile\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtRFloat
	CompareConstant(XtRFloat,((char*)&XtStrings[1655]),3942,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtRFloat\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtRFont
	CompareConstant(XtRFont,((char*)&XtStrings[1661]),3943,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtRFont\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtRFontStruct
	CompareConstant(XtRFontStruct,((char*)&XtStrings[1666]),3944,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtRFontStruct\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtRFunction
	CompareConstant(XtRFunction,((char*)&XtStrings[1677]),3945,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtRFunction\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtRGeometry
	CompareConstant(XtRGeometry,((char*)&XtStrings[1686]),3946,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtRGeometry\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtRImmediate
	CompareConstant(XtRImmediate,((char*)&XtStrings[1695]),3947,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtRImmediate\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtRInitialState
	CompareConstant(XtRInitialState,((char*)&XtStrings[1705]),3948,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtRInitialState\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtRInt
	CompareConstant(XtRInt,((char*)&XtStrings[1718]),3949,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtRInt\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtRJustify
	CompareConstant(XtRJustify,((char*)&XtStrings[1722]),3950,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtRJustify\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtRLongBoolean
	CompareConstant(XtRLongBoolean,((char*)&XtStrings[1730]),3951,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtRLongBoolean\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtRObject
	CompareConstant(XtRObject,((char*)&XtStrings[1735]),3952,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtRObject\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtROrientation
	CompareConstant(XtROrientation,((char*)&XtStrings[1742]),3953,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtROrientation\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtRPixel
	CompareConstant(XtRPixel,((char*)&XtStrings[1754]),3954,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtRPixel\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtRPixmap
	CompareConstant(XtRPixmap,((char*)&XtStrings[1760]),3955,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtRPixmap\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtRPointer
	CompareConstant(XtRPointer,((char*)&XtStrings[1767]),3956,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtRPointer\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtRPosition
	CompareConstant(XtRPosition,((char*)&XtStrings[1775]),3957,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtRPosition\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtRScreen
	CompareConstant(XtRScreen,((char*)&XtStrings[1784]),3958,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtRScreen\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtRShort
	CompareConstant(XtRShort,((char*)&XtStrings[1791]),3959,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtRShort\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtRString
	CompareConstant(XtRString,((char*)&XtStrings[1797]),3960,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtRString\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtRStringArray
	CompareConstant(XtRStringArray,((char*)&XtStrings[1804]),3961,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtRStringArray\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtRStringTable
	CompareConstant(XtRStringTable,((char*)&XtStrings[1816]),3962,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtRStringTable\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtRUnsignedChar
	CompareConstant(XtRUnsignedChar,((char*)&XtStrings[1828]),3963,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtRUnsignedChar\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtRTranslationTable
	CompareConstant(XtRTranslationTable,((char*)&XtStrings[1841]),3964,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtRTranslationTable\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtRVisual
	CompareConstant(XtRVisual,((char*)&XtStrings[1858]),3965,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtRVisual\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtRWidget
	CompareConstant(XtRWidget,((char*)&XtStrings[1865]),3966,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtRWidget\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtRWidgetClass
	CompareConstant(XtRWidgetClass,((char*)&XtStrings[1872]),3967,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtRWidgetClass\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtRWidgetList
	CompareConstant(XtRWidgetList,((char*)&XtStrings[1884]),3968,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtRWidgetList\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtRWindow
	CompareConstant(XtRWindow,((char*)&XtStrings[1895]),3969,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtRWindow\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtEoff
	CompareConstant(XtEoff,((char*)&XtStrings[1902]),3970,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtEoff\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtEfalse
	CompareConstant(XtEfalse,((char*)&XtStrings[1906]),3971,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtEfalse\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtEno
	CompareConstant(XtEno,((char*)&XtStrings[1912]),3972,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtEno\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtEon
	CompareConstant(XtEon,((char*)&XtStrings[1915]),3973,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtEon\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtEtrue
	CompareConstant(XtEtrue,((char*)&XtStrings[1918]),3974,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtEtrue\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtEyes
	CompareConstant(XtEyes,((char*)&XtStrings[1923]),3975,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtEyes\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtEvertical
	CompareConstant(XtEvertical,((char*)&XtStrings[1927]),3976,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtEvertical\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtEhorizontal
	CompareConstant(XtEhorizontal,((char*)&XtStrings[1936]),3977,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtEhorizontal\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtEtextRead
	CompareConstant(XtEtextRead,((char*)&XtStrings[1947]),3978,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtEtextRead\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtEtextAppend
	CompareConstant(XtEtextAppend,((char*)&XtStrings[1952]),3979,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtEtextAppend\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtEtextEdit
	CompareConstant(XtEtextEdit,((char*)&XtStrings[1959]),3980,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtEtextEdit\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtExtdefaultbackground
	CompareConstant(XtExtdefaultbackground,((char*)&XtStrings[1964]),3981,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtExtdefaultbackground\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtExtdefaultforeground
	CompareConstant(XtExtdefaultforeground,((char*)&XtStrings[1984]),3982,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtExtdefaultforeground\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtExtdefaultfont
	CompareConstant(XtExtdefaultfont,((char*)&XtStrings[2004]),3983,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtExtdefaultfont\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNfontSet
	CompareConstant(XtNfontSet,((char*)&XtStrings[2018]),3984,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNfontSet\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtRFontSet
	CompareConstant(XtRFontSet,((char*)&XtStrings[2026]),3985,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtRFontSet\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCFontSet
	CompareConstant(XtCFontSet,((char*)&XtStrings[2034]),3986,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCFontSet\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtRGravity
	CompareConstant(XtRGravity,((char*)&XtStrings[2042]),3987,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtRGravity\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNcreateHook
	CompareConstant(XtNcreateHook,((char*)&XtStrings[2050]),3988,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNcreateHook\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNchangeHook
	CompareConstant(XtNchangeHook,((char*)&XtStrings[2061]),3989,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNchangeHook\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNconfigureHook
	CompareConstant(XtNconfigureHook,((char*)&XtStrings[2072]),3990,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNconfigureHook\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNgeometryHook
	CompareConstant(XtNgeometryHook,((char*)&XtStrings[2086]),3991,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNgeometryHook\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNdestroyHook
	CompareConstant(XtNdestroyHook,((char*)&XtStrings[2099]),3992,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNdestroyHook\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNshells
	CompareConstant(XtNshells,((char*)&XtStrings[2111]),3993,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNshells\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNnumShells
	CompareConstant(XtNnumShells,((char*)&XtStrings[2118]),3994,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtNnumShells\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtRCommandArgArray
	CompareConstant(XtRCommandArgArray,((char*)&XtStrings[2128]),3995,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtRCommandArgArray\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtRDirectoryString
	CompareConstant(XtRDirectoryString,((char*)&XtStrings[2144]),3996,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtRDirectoryString\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtREnvironmentArray
	CompareConstant(XtREnvironmentArray,((char*)&XtStrings[2160]),3997,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtREnvironmentArray\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtRRestartStyle
	CompareConstant(XtRRestartStyle,((char*)&XtStrings[2177]),3998,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtRRestartStyle\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtRSmcConn
	CompareConstant(XtRSmcConn,((char*)&XtStrings[2190]),3999,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtRSmcConn\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtHcreate
	CompareConstant(XtHcreate,((char*)&XtStrings[2198]),4000,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtHcreate\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtHsetValues
	CompareConstant(XtHsetValues,((char*)&XtStrings[2207]),4001,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtHsetValues\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtHmanageChildren
	CompareConstant(XtHmanageChildren,((char*)&XtStrings[2219]),4002,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtHmanageChildren\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtHunmanageChildren
	CompareConstant(XtHunmanageChildren,((char*)&XtStrings[2236]),4003,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtHunmanageChildren\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtHmanageSet
	CompareConstant(XtHmanageSet,((char*)&XtStrings[2255]),4004,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtHmanageSet\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtHunmanageSet
	CompareConstant(XtHunmanageSet,((char*)&XtStrings[2267]),4005,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtHunmanageSet\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtHrealizeWidget
	CompareConstant(XtHrealizeWidget,((char*)&XtStrings[2281]),4006,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtHrealizeWidget\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtHunrealizeWidget
	CompareConstant(XtHunrealizeWidget,((char*)&XtStrings[2297]),4007,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtHunrealizeWidget\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtHaddCallback
	CompareConstant(XtHaddCallback,((char*)&XtStrings[2315]),4008,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtHaddCallback\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtHaddCallbacks
	CompareConstant(XtHaddCallbacks,((char*)&XtStrings[2329]),4009,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtHaddCallbacks\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtHremoveCallback
	CompareConstant(XtHremoveCallback,((char*)&XtStrings[2344]),4010,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtHremoveCallback\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtHremoveCallbacks
	CompareConstant(XtHremoveCallbacks,((char*)&XtStrings[2361]),4011,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtHremoveCallbacks\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtHremoveAllCallbacks
	CompareConstant(XtHremoveAllCallbacks,((char*)&XtStrings[2379]),4012,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtHremoveAllCallbacks\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtHaugmentTranslations
	CompareConstant(XtHaugmentTranslations,((char*)&XtStrings[2400]),4013,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtHaugmentTranslations\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtHoverrideTranslations
	CompareConstant(XtHoverrideTranslations,((char*)&XtStrings[2422]),4014,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtHoverrideTranslations\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtHuninstallTranslations
	CompareConstant(XtHuninstallTranslations,((char*)&XtStrings[2445]),4015,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtHuninstallTranslations\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtHsetKeyboardFocus
	CompareConstant(XtHsetKeyboardFocus,((char*)&XtStrings[2469]),4016,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtHsetKeyboardFocus\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtHsetWMColormapWindows
	CompareConstant(XtHsetWMColormapWindows,((char*)&XtStrings[2488]),4017,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtHsetWMColormapWindows\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtHsetMappedWhenManaged
	CompareConstant(XtHsetMappedWhenManaged,((char*)&XtStrings[2511]),4018,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtHsetMappedWhenManaged\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtHmapWidget
	CompareConstant(XtHmapWidget,((char*)&XtStrings[2534]),4019,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtHmapWidget\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtHunmapWidget
	CompareConstant(XtHunmapWidget,((char*)&XtStrings[2546]),4020,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtHunmapWidget\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtHpopup
	CompareConstant(XtHpopup,((char*)&XtStrings[2560]),4021,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtHpopup\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtHpopupSpringLoaded
	CompareConstant(XtHpopupSpringLoaded,((char*)&XtStrings[2568]),4022,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtHpopupSpringLoaded\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtHpopdown
	CompareConstant(XtHpopdown,((char*)&XtStrings[2588]),4023,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtHpopdown\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtHconfigure
	CompareConstant(XtHconfigure,((char*)&XtStrings[2598]),4024,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtHconfigure\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtHpreGeometry
	CompareConstant(XtHpreGeometry,((char*)&XtStrings[2610]),4025,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtHpreGeometry\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtHpostGeometry
	CompareConstant(XtHpostGeometry,((char*)&XtStrings[2624]),4026,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtHpostGeometry\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtHdestroy
	CompareConstant(XtHdestroy,((char*)&XtStrings[2639]),4027,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtHdestroy\n");
cnt++;
#endif

#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/StringDefs.h\n\n",pcnt,cnt);
return cnt;
#endif

}
