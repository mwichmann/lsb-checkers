/*
 * Test of X11/extensions/XEVIstr.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include <X11/X.h>
#include <X11/Xlib.h>
#include <X11/Xmd.h>
#include "X11/extensions/XEVIstr.h"



#ifdef TET_TEST
void X11_extensions_XEVIstr_h()
{
#else
int X11_extensions_XEVIstr_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in X11/extensions/XEVIstr.h\n");
#endif

printf("Checking data structures in X11/extensions/XEVIstr.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef EVINAME
	CompareStringConstant(EVINAME,"Extended-Visual-Information",17520,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: EVINAME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XEVI_MAJOR_VERSION
	CompareConstant(XEVI_MAJOR_VERSION,1,17521,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XEVI_MAJOR_VERSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for XEVI_MINOR_VERSION */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_VisualID32
	CompareConstant(sz_VisualID32,4,17523,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_VisualID32\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xExtendedVisualInfo
	CompareConstant(sz_xExtendedVisualInfo,16,17524,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xExtendedVisualInfo\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xEVIQueryVersionReq
	CompareConstant(sz_xEVIQueryVersionReq,4,17525,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xEVIQueryVersionReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xEVIQueryVersionReply
	CompareConstant(sz_xEVIQueryVersionReply,32,17526,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xEVIQueryVersionReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xEVIGetVisualInfoReq
	CompareConstant(sz_xEVIGetVisualInfoReq,8,17527,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xEVIGetVisualInfoReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xEVIGetVisualInfoReply
	CompareConstant(sz_xEVIGetVisualInfoReply,32,17528,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xEVIGetVisualInfoReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef _EVISTR_H_
Msg( "Error: Constant not found: _EVISTR_H_\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for X11/extensions/XEVIstr.h depends on X11/extensions/XEVI.h */
#endif

#if 1
CheckTypeSize(VisualID32,0, 39535, 1, 4.0, NULL, 7, NULL)
#endif

#if 1
CheckTypeSize(struct _xExtendedVisualInfo,0, 39536, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xExtendedVisualInfo on All\n");
CheckOffset(struct _xExtendedVisualInfo,core_visual_id,0,1,217790)
CheckOffset(struct _xExtendedVisualInfo,screen,0,1,217791)
CheckOffset(struct _xExtendedVisualInfo,level,0,1,217792)
CheckOffset(struct _xExtendedVisualInfo,transparency_type,0,1,217793)
CheckOffset(struct _xExtendedVisualInfo,pad0,0,1,217794)
CheckOffset(struct _xExtendedVisualInfo,transparency_value,0,1,217795)
CheckOffset(struct _xExtendedVisualInfo,min_hw_colormaps,0,1,217796)
CheckOffset(struct _xExtendedVisualInfo,max_hw_colormaps,0,1,217797)
CheckOffset(struct _xExtendedVisualInfo,num_colormap_conflicts,0,1,217798)
#endif

#if 1
CheckTypeSize(xExtendedVisualInfo,0, 39537, 1, 4.0, NULL, 39536, NULL)
#endif

#if 1
CheckTypeSize(struct _XEVIQueryVersion,0, 39538, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _XEVIQueryVersion on All\n");
CheckOffset(struct _XEVIQueryVersion,reqType,0,1,217799)
CheckOffset(struct _XEVIQueryVersion,xeviReqType,0,1,217800)
CheckOffset(struct _XEVIQueryVersion,length,0,1,217801)
#endif

#if 1
CheckTypeSize(xEVIQueryVersionReq,0, 39539, 1, 4.0, NULL, 39538, NULL)
#endif

#if 1
CheckTypeSize(xEVIQueryVersionReply,0, 39541, 1, 4.0, NULL, 39540, NULL)
#endif

#if 1
CheckTypeSize(struct _XEVIGetVisualInfoReq,0, 39542, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _XEVIGetVisualInfoReq on All\n");
CheckOffset(struct _XEVIGetVisualInfoReq,reqType,0,1,217813)
CheckOffset(struct _XEVIGetVisualInfoReq,xeviReqType,0,1,217814)
CheckOffset(struct _XEVIGetVisualInfoReq,length,0,1,217815)
CheckOffset(struct _XEVIGetVisualInfoReq,n_visual,0,1,217816)
#endif

#if 1
CheckTypeSize(xEVIGetVisualInfoReq,0, 39543, 1, 4.0, NULL, 39542, NULL)
#endif

#if 1
CheckTypeSize(struct _XEVIGetVisualInfoReply,0, 39544, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _XEVIGetVisualInfoReply on All\n");
CheckOffset(struct _XEVIGetVisualInfoReply,type,0,1,217817)
CheckOffset(struct _XEVIGetVisualInfoReply,unused,0,1,217818)
CheckOffset(struct _XEVIGetVisualInfoReply,sequenceNumber,0,1,217819)
CheckOffset(struct _XEVIGetVisualInfoReply,length,0,1,217820)
CheckOffset(struct _XEVIGetVisualInfoReply,n_info,0,1,217821)
CheckOffset(struct _XEVIGetVisualInfoReply,n_conflicts,0,1,217822)
CheckOffset(struct _XEVIGetVisualInfoReply,pad0,0,1,217823)
CheckOffset(struct _XEVIGetVisualInfoReply,pad1,0,1,217824)
CheckOffset(struct _XEVIGetVisualInfoReply,pad2,0,1,217825)
CheckOffset(struct _XEVIGetVisualInfoReply,pad3,0,1,217826)
#endif

#if 1
CheckTypeSize(xEVIGetVisualInfoReply,0, 39545, 1, 4.0, NULL, 39544, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/extensions/XEVIstr.h\n\n",pcnt,cnt);
return cnt;
#endif

}
