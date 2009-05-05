/*
 * Test of X11/Xlibint.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#ifdef XLIB_ILLEGAL_ACCESS
#undef XLIB_ILLEGAL_ACCESS
#endif
#include "X11/Xlibint.h"



#ifdef TET_TEST
void X11_Xlibint_h()
{
#else
int X11_Xlibint_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in X11/Xlibint.h\n");
#endif

printf("Checking data structures in X11/Xlibint.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef XCONN_CHECK_FREQ
	CompareConstant(XCONN_CHECK_FREQ,256,16678,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XCONN_CHECK_FREQ\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for XAllocIDs(dpy,ids,n) */
#endif

#if _LSB_DEFAULT_ARCH
#ifndef NEED_REPLIES
Msg( "Error: Constant not found: NEED_REPLIES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef NEED_EVENTS
Msg( "Error: Constant not found: NEED_EVENTS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for _XBCOPYFUNC */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for LockDisplay(d) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for UnlockDisplay(d) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for _XLockMutex(lock) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for _XUnlockMutex(lock) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for _XCreateMutex(lock) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for _XFreeMutex(lock) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for Xfree(ptr) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for Xmalloc(size) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for Xrealloc(ptr,size) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for Xcalloc(nelem,elsize) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef LOCKED
	CompareConstant(LOCKED,1,16693,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: LOCKED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef UNLOCKED
	CompareConstant(UNLOCKED,0,16694,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: UNLOCKED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef BUFSIZE
	CompareConstant(BUFSIZE,2048,16695,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: BUFSIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PTSPERBATCH
	CompareConstant(PTSPERBATCH,1024,16696,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: PTSPERBATCH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef WLNSPERBATCH
	CompareConstant(WLNSPERBATCH,50,16697,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: WLNSPERBATCH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ZLNSPERBATCH
	CompareConstant(ZLNSPERBATCH,1024,16698,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: ZLNSPERBATCH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef WRCTSPERBATCH
	CompareConstant(WRCTSPERBATCH,10,16699,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: WRCTSPERBATCH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ZRCTSPERBATCH
	CompareConstant(ZRCTSPERBATCH,256,16700,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: ZRCTSPERBATCH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FRCTSPERBATCH
	CompareConstant(FRCTSPERBATCH,256,16701,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: FRCTSPERBATCH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FARCSPERBATCH
	CompareConstant(FARCSPERBATCH,256,16702,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: FARCSPERBATCH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CURSORFONT
	CompareStringConstant(CURSORFONT,"cursor",16703,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: CURSORFONT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XlibDisplayIOError
	CompareLongConstant(XlibDisplayIOError,(1L << 0),16704,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XlibDisplayIOError\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XlibDisplayClosing
	CompareLongConstant(XlibDisplayClosing,(1L << 1),16705,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XlibDisplayClosing\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XlibDisplayNoXkb
	CompareLongConstant(XlibDisplayNoXkb,(1L << 2),16706,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XlibDisplayNoXkb\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XlibDisplayPrivSync
	CompareLongConstant(XlibDisplayPrivSync,(1L << 3),16707,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XlibDisplayPrivSync\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XlibDisplayProcConni
	CompareLongConstant(XlibDisplayProcConni,(1L << 4),16708,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XlibDisplayProcConni\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XlibDisplayReadEvents
	CompareLongConstant(XlibDisplayReadEvents,(1L << 5),16709,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XlibDisplayReadEvents\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XlibDisplayReply
	CompareLongConstant(XlibDisplayReply,(1L << 5),16710,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XlibDisplayReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XlibDisplayWriting
	CompareLongConstant(XlibDisplayWriting,(1L << 6),16711,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XlibDisplayWriting\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XlibDisplayDfltRMDB
	CompareLongConstant(XlibDisplayDfltRMDB,(1L << 7),16712,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XlibDisplayDfltRMDB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for WORD64ALIGN */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GetReq(name,req) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GetReqExtra(name,n,req) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GetResReq(name,rid,req) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GetEmptyReq(name,req) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for MakeBigReq(req,n) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SetReqLen(req,n,badlen) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SyncHandle() */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FlushGC(dpy,gc) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for Data(dpy,data,len) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for BufAlloc(type,ptr,n) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for Data16(dpy,data,len) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for _XRead16Pad(dpy,data,len) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for _XRead16(dpy,data,len) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for Data32(dpy,data,len) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PackData16(dpy,data,len) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PackData32(dpy,data,len) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PackData(dpy,data,len) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for min(a,b) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for max(a,b) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for CI_NONEXISTCHAR(cs) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for CI_GET_CHAR_INFO_1D(fs,col,def,cs) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for CI_GET_DEFAULT_INFO_1D(fs,cs) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for CI_GET_CHAR_INFO_2D(fs,row,col,def,cs) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for CI_GET_DEFAULT_INFO_2D(fs,cs) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for OneDataCard32(dpy,dstaddr,srcvar) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for DeqAsyncHandler(dpy,handler) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for _XOpenFile(path,flags) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for _XOpenFileMode(path,flags,mode) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for _XFopenFile(path,mode) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for X11/Xlibint.h depends on stdlib.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for X11/Xlibint.h depends on errno.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for X11/Xlibint.h depends on string.h */
#endif

#if 1
CheckTypeSize(struct _XSQEvent,0, 36953, 1, , NULL, 0, NULL)
Msg("Missing member data for _XSQEvent on All\n");
CheckOffset(struct _XSQEvent,next,0,1,216643)
CheckOffset(struct _XSQEvent,event,0,1,216644)
CheckOffset(struct _XSQEvent,qserial_num,0,1,216645)
#endif

#if 1
CheckTypeSize(_XQEvent,0, 36954, 1, 1.0, NULL, 36953, NULL)
#endif

#if 1
CheckTypeSize(LockInfoPtr,0, 36956, 1, 1.0, NULL, 32242, NULL)
#endif

#if 1
CheckTypeSize(struct _XInternalAsync,0, 36958, 1, , NULL, 0, NULL)
Msg("Missing member data for _XInternalAsync on All\n");
CheckOffset(struct _XInternalAsync,next,0,1,216649)
CheckOffset(struct _XInternalAsync,handler,0,1,216650)
CheckOffset(struct _XInternalAsync,data,0,1,216651)
#endif

#if 1
CheckTypeSize(_XAsyncHandler,0, 36959, 1, 1.0, NULL, 36958, NULL)
#endif

#if 1
CheckTypeSize(struct _XAsyncEState,0, 36960, 1, , NULL, 0, NULL)
Msg("Missing member data for _XAsyncEState on All\n");
CheckOffset(struct _XAsyncEState,min_sequence_number,0,1,216652)
CheckOffset(struct _XAsyncEState,max_sequence_number,0,1,216653)
CheckOffset(struct _XAsyncEState,error_code,0,1,216654)
CheckOffset(struct _XAsyncEState,major_opcode,0,1,216655)
CheckOffset(struct _XAsyncEState,minor_opcode,0,1,216656)
CheckOffset(struct _XAsyncEState,last_error_received,0,1,216657)
CheckOffset(struct _XAsyncEState,error_count,0,1,216658)
#endif

#if 1
CheckTypeSize(_XAsyncErrorState,0, 36961, 1, 1.0, NULL, 36960, NULL)
#endif

#if 1
CheckTypeSize(FreeFuncType,0, 36962, 1, 1.0, NULL, 32256, NULL)
#endif

#if 1
CheckTypeSize(FreeModmapType,0, 36963, 1, 1.0, NULL, 32251, NULL)
#endif

#if 1
CheckTypeSize(struct _XFreeFuncs,0, 36964, 1, , NULL, 0, NULL)
Msg("Missing member data for _XFreeFuncs on All\n");
CheckOffset(struct _XFreeFuncs,atoms,0,1,216659)
CheckOffset(struct _XFreeFuncs,modifiermap,0,1,216660)
CheckOffset(struct _XFreeFuncs,key_bindings,0,1,216661)
CheckOffset(struct _XFreeFuncs,context_db,0,1,216662)
CheckOffset(struct _XFreeFuncs,defaultCCCs,0,1,216663)
CheckOffset(struct _XFreeFuncs,clientCmaps,0,1,216664)
CheckOffset(struct _XFreeFuncs,intensityMaps,0,1,216665)
CheckOffset(struct _XFreeFuncs,im_filters,0,1,216666)
CheckOffset(struct _XFreeFuncs,xkb,0,1,216667)
#endif

#if 1
CheckTypeSize(_XFreeFuncRec,0, 36965, 1, 1.0, NULL, 36964, NULL)
#endif

#if 1
CheckTypeSize(CreateGCType,0, 36966, 1, 1.0, NULL, 32253, NULL)
#endif

#if 1
CheckTypeSize(CopyGCType,0, 36967, 1, 1.0, NULL, 32253, NULL)
#endif

#if 1
CheckTypeSize(FlushGCType,0, 36968, 1, 1.0, NULL, 32253, NULL)
#endif

#if 1
CheckTypeSize(FreeGCType,0, 36969, 1, 1.0, NULL, 32253, NULL)
#endif

#if 1
CheckTypeSize(CreateFontType,0, 36970, 1, 1.0, NULL, 32240, NULL)
#endif

#if 1
CheckTypeSize(FreeFontType,0, 36971, 1, 1.0, NULL, 32240, NULL)
#endif

#if 1
CheckTypeSize(CloseDisplayType,0, 36972, 1, 1.0, NULL, 32258, NULL)
#endif

#if 1
CheckTypeSize(ErrorType,0, 36973, 1, 1.0, NULL, 32250, NULL)
#endif

#if 1
CheckTypeSize(ErrorStringType,0, 36974, 1, 1.0, NULL, 32261, NULL)
#endif

#if 1
CheckTypeSize(PrintErrorType,0, 36975, 1, 1.0, NULL, 32218, NULL)
#endif

#if 1
CheckTypeSize(BeforeFlushType,0, 36976, 1, 1.0, NULL, 32226, NULL)
#endif

#if 1
CheckTypeSize(struct _XExten,0, 36977, 1, , NULL, 0, NULL)
Msg("Missing member data for _XExten on All\n");
CheckOffset(struct _XExten,next,0,1,216668)
CheckOffset(struct _XExten,codes,0,1,216669)
CheckOffset(struct _XExten,create_GC,0,1,216670)
CheckOffset(struct _XExten,copy_GC,0,1,216671)
CheckOffset(struct _XExten,flush_GC,0,1,216672)
CheckOffset(struct _XExten,free_GC,0,1,216673)
CheckOffset(struct _XExten,create_Font,0,1,216674)
CheckOffset(struct _XExten,free_Font,0,1,216675)
CheckOffset(struct _XExten,close_display,0,1,216676)
CheckOffset(struct _XExten,error,0,1,216677)
CheckOffset(struct _XExten,error_string,0,1,216678)
CheckOffset(struct _XExten,name,0,1,216679)
CheckOffset(struct _XExten,error_values,0,1,216680)
CheckOffset(struct _XExten,before_flush,0,1,216681)
CheckOffset(struct _XExten,next_flush,0,1,216682)
#endif

#if 1
CheckTypeSize(_XExtension,0, 36978, 1, 1.0, NULL, 36977, NULL)
#endif

#if 1
CheckTypeSize(_XInternalConnectionProc,0, 36979, 1, 1.0, NULL, 32243, NULL)
#endif

#if 1
CheckTypeSize(struct _XDisplay,0, 37065, 1, 1.0, NULL, 0, NULL)
Msg("Missing member data for _XDisplay on All\n");
CheckOffset(struct _XDisplay,ext_data,0,1,216564)
CheckOffset(struct _XDisplay,free_funcs,0,1,216565)
CheckOffset(struct _XDisplay,fd,0,1,216566)
CheckOffset(struct _XDisplay,conn_checker,0,1,216567)
CheckOffset(struct _XDisplay,proto_major_version,0,1,216568)
CheckOffset(struct _XDisplay,proto_minor_version,0,1,216569)
CheckOffset(struct _XDisplay,vendor,0,1,216570)
CheckOffset(struct _XDisplay,resource_base,0,1,216571)
CheckOffset(struct _XDisplay,resource_mask,0,1,216572)
CheckOffset(struct _XDisplay,resource_id,0,1,216573)
CheckOffset(struct _XDisplay,resource_shift,0,1,216574)
CheckOffset(struct _XDisplay,resource_alloc,0,1,216575)
CheckOffset(struct _XDisplay,byte_order,0,1,216576)
CheckOffset(struct _XDisplay,bitmap_unit,0,1,216577)
CheckOffset(struct _XDisplay,bitmap_pad,0,1,216578)
CheckOffset(struct _XDisplay,bitmap_bit_order,0,1,216579)
CheckOffset(struct _XDisplay,nformats,0,1,216580)
CheckOffset(struct _XDisplay,pixmap_format,0,1,216581)
CheckOffset(struct _XDisplay,vnumber,0,1,216582)
CheckOffset(struct _XDisplay,release,0,1,216583)
CheckOffset(struct _XDisplay,head,0,1,216584)
CheckOffset(struct _XDisplay,tail,0,1,216585)
CheckOffset(struct _XDisplay,qlen,0,1,216586)
CheckOffset(struct _XDisplay,last_request_read,0,1,216587)
CheckOffset(struct _XDisplay,request,0,1,216588)
CheckOffset(struct _XDisplay,last_req,0,1,216589)
CheckOffset(struct _XDisplay,buffer,0,1,216590)
CheckOffset(struct _XDisplay,bufptr,0,1,216591)
CheckOffset(struct _XDisplay,bufmax,0,1,216592)
CheckOffset(struct _XDisplay,max_request_size,0,1,216593)
CheckOffset(struct _XDisplay,db,0,1,216594)
CheckOffset(struct _XDisplay,synchandler,0,1,216595)
CheckOffset(struct _XDisplay,display_name,0,1,216596)
CheckOffset(struct _XDisplay,default_screen,0,1,216597)
CheckOffset(struct _XDisplay,nscreens,0,1,216598)
CheckOffset(struct _XDisplay,screens,0,1,216599)
CheckOffset(struct _XDisplay,motion_buffer,0,1,216600)
CheckOffset(struct _XDisplay,flags,0,1,216601)
CheckOffset(struct _XDisplay,min_keycode,0,1,216602)
CheckOffset(struct _XDisplay,max_keycode,0,1,216603)
CheckOffset(struct _XDisplay,keysyms,0,1,216604)
CheckOffset(struct _XDisplay,modifiermap,0,1,216605)
CheckOffset(struct _XDisplay,keysyms_per_keycode,0,1,216606)
CheckOffset(struct _XDisplay,xdefaults,0,1,216607)
CheckOffset(struct _XDisplay,scratch_buffer,0,1,216608)
CheckOffset(struct _XDisplay,scratch_length,0,1,216609)
CheckOffset(struct _XDisplay,ext_number,0,1,216610)
CheckOffset(struct _XDisplay,ext_procs,0,1,216611)
CheckOffset(struct _XDisplay,event_vec,0,1,216612)
CheckOffset(struct _XDisplay,wire_vec,0,1,216613)
CheckOffset(struct _XDisplay,lock_meaning,0,1,216614)
CheckOffset(struct _XDisplay,lock,0,1,216615)
CheckOffset(struct _XDisplay,async_handlers,0,1,216616)
CheckOffset(struct _XDisplay,bigreq_size,0,1,216617)
CheckOffset(struct _XDisplay,lock_fns,0,1,216618)
CheckOffset(struct _XDisplay,idlist_alloc,0,1,216619)
CheckOffset(struct _XDisplay,key_bindings,0,1,216620)
CheckOffset(struct _XDisplay,cursor_font,0,1,216621)
CheckOffset(struct _XDisplay,atoms,0,1,216622)
CheckOffset(struct _XDisplay,mode_switch,0,1,216623)
CheckOffset(struct _XDisplay,num_lock,0,1,216624)
CheckOffset(struct _XDisplay,context_db,0,1,216625)
CheckOffset(struct _XDisplay,error_vec,0,1,216626)
CheckOffset(struct _XDisplay,cms,0,1,216627)
CheckOffset(struct _XDisplay,im_filters,0,1,216628)
CheckOffset(struct _XDisplay,qfree,0,1,216629)
CheckOffset(struct _XDisplay,next_event_serial_num,0,1,216630)
CheckOffset(struct _XDisplay,flushes,0,1,216631)
CheckOffset(struct _XDisplay,im_fd_info,0,1,216632)
CheckOffset(struct _XDisplay,im_fd_length,0,1,216633)
CheckOffset(struct _XDisplay,conn_watchers,0,1,216634)
CheckOffset(struct _XDisplay,watcher_count,0,1,216635)
CheckOffset(struct _XDisplay,filedes,0,1,216636)
CheckOffset(struct _XDisplay,savedsynchandler,0,1,216637)
CheckOffset(struct _XDisplay,resource_max,0,1,216638)
CheckOffset(struct _XDisplay,xcmisc_opcode,0,1,216639)
CheckOffset(struct _XDisplay,xkb_info,0,1,216640)
CheckOffset(struct _XDisplay,trans_conn,0,1,216641)
#endif

#if 1
CheckTypeSize(struct _XGC,0, 37075, 1, 1.0, NULL, 0, NULL)
Msg("Missing member data for _XGC on All\n");
CheckOffset(struct _XGC,ext_data,0,1,216552)
CheckOffset(struct _XGC,gid,0,1,216553)
CheckOffset(struct _XGC,rects,0,1,216554)
CheckOffset(struct _XGC,dashes,0,1,216555)
CheckOffset(struct _XGC,dirty,0,1,216556)
CheckOffset(struct _XGC,values,0,1,216557)
#endif

#if 1
/* All */
typedef void (*FreeFuncType_db)(Display *);
CheckFunctionTypedef(FreeFuncType,FreeFuncType_db);
#endif

#if 1
/* All */
typedef int (*FreeModmapType_db)(XModifierKeymap *);
CheckFunctionTypedef(FreeModmapType,FreeModmapType_db);
#endif

#if 1
/* All */
typedef int (*CreateGCType_db)(Display *, GC, XExtCodes *);
CheckFunctionTypedef(CreateGCType,CreateGCType_db);
#endif

#if 1
/* All */
typedef int (*CopyGCType_db)(Display *, GC, XExtCodes *);
CheckFunctionTypedef(CopyGCType,CopyGCType_db);
#endif

#if 1
/* All */
typedef int (*FlushGCType_db)(Display *, GC, XExtCodes *);
CheckFunctionTypedef(FlushGCType,FlushGCType_db);
#endif

#if 1
/* All */
typedef int (*FreeGCType_db)(Display *, GC, XExtCodes *);
CheckFunctionTypedef(FreeGCType,FreeGCType_db);
#endif

#if 1
/* All */
typedef int (*CreateFontType_db)(Display *, XFontStruct *, XExtCodes *);
CheckFunctionTypedef(CreateFontType,CreateFontType_db);
#endif

#if 1
/* All */
typedef int (*FreeFontType_db)(Display *, XFontStruct *, XExtCodes *);
CheckFunctionTypedef(FreeFontType,FreeFontType_db);
#endif

#if 1
/* All */
typedef int (*CloseDisplayType_db)(Display *, XExtCodes *);
CheckFunctionTypedef(CloseDisplayType,CloseDisplayType_db);
#endif

#if 1
/* All */
typedef int (*ErrorType_db)(Display *, xError *, XExtCodes *, int *);
CheckFunctionTypedef(ErrorType,ErrorType_db);
#endif

#if 1
/* All */
typedef char * (*ErrorStringType_db)(Display *, int, XExtCodes *, char *, int);
CheckFunctionTypedef(ErrorStringType,ErrorStringType_db);
#endif

#if 1
/* All */
typedef void (*PrintErrorType_db)(Display *, XErrorEvent *, void *);
CheckFunctionTypedef(PrintErrorType,PrintErrorType_db);
#endif

#if 1
/* All */
typedef void (*BeforeFlushType_db)(Display *, XExtCodes *, const char *, long int);
CheckFunctionTypedef(BeforeFlushType,BeforeFlushType_db);
#endif

#if 1
/* All */
typedef void (*_XInternalConnectionProc_db)(Display *, int, XPointer);
CheckFunctionTypedef(_XInternalConnectionProc,_XInternalConnectionProc_db);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/Xlibint.h\n\n",pcnt,cnt);
return cnt;
#endif

}
