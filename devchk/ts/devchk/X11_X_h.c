/*
 * Test of X11/X.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "X11/X.h"



#ifdef TET_TEST
void X11_X_h()
{
#else
int X11_X_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in X11/X.h\n");
#endif

printf("Checking data structures in X11/X.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef X_PROTOCOL
	CompareConstant(X_PROTOCOL,11,1965,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: X_PROTOCOL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_PROTOCOL_REVISION
	CompareConstant(X_PROTOCOL_REVISION,0,1966,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: X_PROTOCOL_REVISION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef None
	CompareConstant(None,0L,1971,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: None\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ParentRelative
	CompareConstant(ParentRelative,1L,1972,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ParentRelative\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CopyFromParent
	CompareConstant(CopyFromParent,0L,1973,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: CopyFromParent\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PointerWindow
	CompareConstant(PointerWindow,0L,1974,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PointerWindow\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef InputFocus
	CompareConstant(InputFocus,1L,1975,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: InputFocus\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PointerRoot
	CompareConstant(PointerRoot,1L,1976,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PointerRoot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef AnyPropertyType
	CompareConstant(AnyPropertyType,0L,1977,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: AnyPropertyType\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef AnyKey
	CompareConstant(AnyKey,0L,1978,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: AnyKey\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef AnyButton
	CompareConstant(AnyButton,0L,1979,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: AnyButton\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef AllTemporary
	CompareConstant(AllTemporary,0L,1980,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: AllTemporary\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CurrentTime
	CompareConstant(CurrentTime,0L,1981,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: CurrentTime\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NoSymbol
	CompareConstant(NoSymbol,0L,1982,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: NoSymbol\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NoEventMask
	CompareConstant(NoEventMask,0L,1983,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: NoEventMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KeyPressMask
	CompareConstant(KeyPressMask,(1L<<0),1984,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: KeyPressMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KeyReleaseMask
	CompareConstant(KeyReleaseMask,(1L<<1),1985,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: KeyReleaseMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ButtonPressMask
	CompareConstant(ButtonPressMask,(1L<<2),1986,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ButtonPressMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ButtonReleaseMask
	CompareConstant(ButtonReleaseMask,(1L<<3),1987,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ButtonReleaseMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EnterWindowMask
	CompareConstant(EnterWindowMask,(1L<<4),1988,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: EnterWindowMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LeaveWindowMask
	CompareConstant(LeaveWindowMask,(1L<<5),1989,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: LeaveWindowMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PointerMotionMask
	CompareConstant(PointerMotionMask,(1L<<6),1990,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PointerMotionMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PointerMotionHintMask
	CompareConstant(PointerMotionHintMask,(1L<<7),1991,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PointerMotionHintMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Button1MotionMask
	CompareConstant(Button1MotionMask,(1L<<8),1992,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: Button1MotionMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Button2MotionMask
	CompareConstant(Button2MotionMask,(1L<<9),1993,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: Button2MotionMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Button3MotionMask
	CompareConstant(Button3MotionMask,(1L<<10),1994,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: Button3MotionMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Button4MotionMask
	CompareConstant(Button4MotionMask,(1L<<11),1995,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: Button4MotionMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Button5MotionMask
	CompareConstant(Button5MotionMask,(1L<<12),1996,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: Button5MotionMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ButtonMotionMask
	CompareConstant(ButtonMotionMask,(1L<<13),1997,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ButtonMotionMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KeymapStateMask
	CompareConstant(KeymapStateMask,(1L<<14),1998,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: KeymapStateMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ExposureMask
	CompareConstant(ExposureMask,(1L<<15),1999,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ExposureMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef VisibilityChangeMask
	CompareConstant(VisibilityChangeMask,(1L<<16),2000,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: VisibilityChangeMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef StructureNotifyMask
	CompareConstant(StructureNotifyMask,(1L<<17),2001,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: StructureNotifyMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ResizeRedirectMask
	CompareConstant(ResizeRedirectMask,(1L<<18),2002,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ResizeRedirectMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SubstructureNotifyMask
	CompareConstant(SubstructureNotifyMask,(1L<<19),2003,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SubstructureNotifyMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SubstructureRedirectMask
	CompareConstant(SubstructureRedirectMask,(1L<<20),2004,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SubstructureRedirectMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FocusChangeMask
	CompareConstant(FocusChangeMask,(1L<<21),2005,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: FocusChangeMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PropertyChangeMask
	CompareConstant(PropertyChangeMask,(1L<<22),2006,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PropertyChangeMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ColormapChangeMask
	CompareConstant(ColormapChangeMask,(1L<<23),2007,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ColormapChangeMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef OwnerGrabButtonMask
	CompareConstant(OwnerGrabButtonMask,(1L<<24),2008,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: OwnerGrabButtonMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KeyPress
	CompareConstant(KeyPress,2,2009,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: KeyPress\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KeyRelease
	CompareConstant(KeyRelease,3,2010,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: KeyRelease\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ButtonPress
	CompareConstant(ButtonPress,4,2011,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ButtonPress\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ButtonRelease
	CompareConstant(ButtonRelease,5,2012,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ButtonRelease\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MotionNotify
	CompareConstant(MotionNotify,6,2013,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: MotionNotify\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EnterNotify
	CompareConstant(EnterNotify,7,2014,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: EnterNotify\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LeaveNotify
	CompareConstant(LeaveNotify,8,2015,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: LeaveNotify\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FocusIn
	CompareConstant(FocusIn,9,2016,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: FocusIn\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FocusOut
	CompareConstant(FocusOut,10,2017,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: FocusOut\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KeymapNotify
	CompareConstant(KeymapNotify,11,2018,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: KeymapNotify\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Expose
	CompareConstant(Expose,12,2019,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: Expose\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GraphicsExpose
	CompareConstant(GraphicsExpose,13,2020,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GraphicsExpose\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NoExpose
	CompareConstant(NoExpose,14,2021,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: NoExpose\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef VisibilityNotify
	CompareConstant(VisibilityNotify,15,2022,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: VisibilityNotify\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CreateNotify
	CompareConstant(CreateNotify,16,2023,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: CreateNotify\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DestroyNotify
	CompareConstant(DestroyNotify,17,2024,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: DestroyNotify\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef UnmapNotify
	CompareConstant(UnmapNotify,18,2025,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: UnmapNotify\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MapNotify
	CompareConstant(MapNotify,19,2026,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: MapNotify\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MapRequest
	CompareConstant(MapRequest,20,2027,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: MapRequest\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ReparentNotify
	CompareConstant(ReparentNotify,21,2028,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ReparentNotify\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ConfigureNotify
	CompareConstant(ConfigureNotify,22,2029,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ConfigureNotify\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ConfigureRequest
	CompareConstant(ConfigureRequest,23,2030,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ConfigureRequest\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GravityNotify
	CompareConstant(GravityNotify,24,2031,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GravityNotify\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ResizeRequest
	CompareConstant(ResizeRequest,25,2032,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ResizeRequest\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CirculateNotify
	CompareConstant(CirculateNotify,26,2033,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: CirculateNotify\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CirculateRequest
	CompareConstant(CirculateRequest,27,2034,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: CirculateRequest\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PropertyNotify
	CompareConstant(PropertyNotify,28,2035,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PropertyNotify\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SelectionClear
	CompareConstant(SelectionClear,29,2036,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SelectionClear\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SelectionRequest
	CompareConstant(SelectionRequest,30,2037,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SelectionRequest\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SelectionNotify
	CompareConstant(SelectionNotify,31,2038,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SelectionNotify\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ColormapNotify
	CompareConstant(ColormapNotify,32,2039,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ColormapNotify\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ClientMessage
	CompareConstant(ClientMessage,33,2040,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ClientMessage\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MappingNotify
	CompareConstant(MappingNotify,34,2041,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: MappingNotify\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LASTEvent
	CompareConstant(LASTEvent,35,2042,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: LASTEvent\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ShiftMask
	CompareConstant(ShiftMask,(1<<0),2043,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ShiftMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LockMask
	CompareConstant(LockMask,(1<<1),2044,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: LockMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ControlMask
	CompareConstant(ControlMask,(1<<2),2045,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ControlMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Mod1Mask
	CompareConstant(Mod1Mask,(1<<3),2046,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: Mod1Mask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Mod2Mask
	CompareConstant(Mod2Mask,(1<<4),2047,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: Mod2Mask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Mod3Mask
	CompareConstant(Mod3Mask,(1<<5),2048,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: Mod3Mask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Mod4Mask
	CompareConstant(Mod4Mask,(1<<6),2049,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: Mod4Mask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Mod5Mask
	CompareConstant(Mod5Mask,(1<<7),2050,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: Mod5Mask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ShiftMapIndex
	CompareConstant(ShiftMapIndex,0,2051,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ShiftMapIndex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LockMapIndex
	CompareConstant(LockMapIndex,1,2052,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: LockMapIndex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ControlMapIndex
	CompareConstant(ControlMapIndex,2,2053,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ControlMapIndex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Mod1MapIndex
	CompareConstant(Mod1MapIndex,3,2054,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: Mod1MapIndex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Mod2MapIndex
	CompareConstant(Mod2MapIndex,4,2055,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: Mod2MapIndex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Mod3MapIndex
	CompareConstant(Mod3MapIndex,5,2056,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: Mod3MapIndex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Mod4MapIndex
	CompareConstant(Mod4MapIndex,6,2057,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: Mod4MapIndex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Mod5MapIndex
	CompareConstant(Mod5MapIndex,7,2058,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: Mod5MapIndex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Button1Mask
	CompareConstant(Button1Mask,(1<<8),2059,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: Button1Mask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Button2Mask
	CompareConstant(Button2Mask,(1<<9),2060,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: Button2Mask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Button3Mask
	CompareConstant(Button3Mask,(1<<10),2061,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: Button3Mask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Button4Mask
	CompareConstant(Button4Mask,(1<<11),2062,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: Button4Mask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Button5Mask
	CompareConstant(Button5Mask,(1<<12),2063,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: Button5Mask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef AnyModifier
	CompareConstant(AnyModifier,(1<<15),2064,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: AnyModifier\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Button1
	CompareConstant(Button1,1,2065,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: Button1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Button2
	CompareConstant(Button2,2,2066,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: Button2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Button3
	CompareConstant(Button3,3,2067,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: Button3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Button4
	CompareConstant(Button4,4,2068,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: Button4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Button5
	CompareConstant(Button5,5,2069,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: Button5\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NotifyNormal
	CompareConstant(NotifyNormal,0,2070,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: NotifyNormal\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NotifyGrab
	CompareConstant(NotifyGrab,1,2071,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: NotifyGrab\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NotifyUngrab
	CompareConstant(NotifyUngrab,2,2072,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: NotifyUngrab\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NotifyWhileGrabbed
	CompareConstant(NotifyWhileGrabbed,3,2073,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: NotifyWhileGrabbed\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NotifyHint
	CompareConstant(NotifyHint,1,2074,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: NotifyHint\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NotifyAncestor
	CompareConstant(NotifyAncestor,0,2075,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: NotifyAncestor\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NotifyVirtual
	CompareConstant(NotifyVirtual,1,2076,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: NotifyVirtual\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NotifyInferior
	CompareConstant(NotifyInferior,2,2077,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: NotifyInferior\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NotifyNonlinear
	CompareConstant(NotifyNonlinear,3,2078,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: NotifyNonlinear\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NotifyNonlinearVirtual
	CompareConstant(NotifyNonlinearVirtual,4,2079,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: NotifyNonlinearVirtual\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NotifyPointer
	CompareConstant(NotifyPointer,5,2080,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: NotifyPointer\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NotifyPointerRoot
	CompareConstant(NotifyPointerRoot,6,2081,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: NotifyPointerRoot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NotifyDetailNone
	CompareConstant(NotifyDetailNone,7,2082,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: NotifyDetailNone\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef VisibilityUnobscured
	CompareConstant(VisibilityUnobscured,0,2083,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: VisibilityUnobscured\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef VisibilityPartiallyObscured
	CompareConstant(VisibilityPartiallyObscured,1,2084,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: VisibilityPartiallyObscured\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef VisibilityFullyObscured
	CompareConstant(VisibilityFullyObscured,2,2085,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: VisibilityFullyObscured\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PlaceOnTop
	CompareConstant(PlaceOnTop,0,2086,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PlaceOnTop\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PlaceOnBottom
	CompareConstant(PlaceOnBottom,1,2087,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PlaceOnBottom\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FamilyInternet
	CompareConstant(FamilyInternet,0,2088,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: FamilyInternet\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FamilyDECnet
	CompareConstant(FamilyDECnet,1,2089,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: FamilyDECnet\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FamilyChaos
	CompareConstant(FamilyChaos,2,2090,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: FamilyChaos\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PropertyNewValue
	CompareConstant(PropertyNewValue,0,2091,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PropertyNewValue\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PropertyDelete
	CompareConstant(PropertyDelete,1,2092,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PropertyDelete\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ColormapUninstalled
	CompareConstant(ColormapUninstalled,0,2093,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ColormapUninstalled\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ColormapInstalled
	CompareConstant(ColormapInstalled,1,2094,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ColormapInstalled\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GrabModeSync
	CompareConstant(GrabModeSync,0,2095,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GrabModeSync\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GrabModeAsync
	CompareConstant(GrabModeAsync,1,2096,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GrabModeAsync\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GrabSuccess
	CompareConstant(GrabSuccess,0,2097,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GrabSuccess\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef AlreadyGrabbed
	CompareConstant(AlreadyGrabbed,1,2098,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: AlreadyGrabbed\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GrabInvalidTime
	CompareConstant(GrabInvalidTime,2,2099,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GrabInvalidTime\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GrabNotViewable
	CompareConstant(GrabNotViewable,3,2100,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GrabNotViewable\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GrabFrozen
	CompareConstant(GrabFrozen,4,2101,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GrabFrozen\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef AsyncPointer
	CompareConstant(AsyncPointer,0,2102,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: AsyncPointer\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SyncPointer
	CompareConstant(SyncPointer,1,2103,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SyncPointer\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ReplayPointer
	CompareConstant(ReplayPointer,2,2104,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ReplayPointer\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef AsyncKeyboard
	CompareConstant(AsyncKeyboard,3,2105,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: AsyncKeyboard\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SyncKeyboard
	CompareConstant(SyncKeyboard,4,2106,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SyncKeyboard\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ReplayKeyboard
	CompareConstant(ReplayKeyboard,5,2107,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ReplayKeyboard\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef AsyncBoth
	CompareConstant(AsyncBoth,6,2108,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: AsyncBoth\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SyncBoth
	CompareConstant(SyncBoth,7,2109,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SyncBoth\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RevertToNone
	CompareConstant(RevertToNone,(int)None,2110,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: RevertToNone\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RevertToPointerRoot
	CompareConstant(RevertToPointerRoot,(int)PointerRoot,2111,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: RevertToPointerRoot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RevertToParent
	CompareConstant(RevertToParent,2,2112,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: RevertToParent\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Success
	CompareConstant(Success,0,2113,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: Success\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef BadRequest
	CompareConstant(BadRequest,1,2114,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: BadRequest\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef BadValue
	CompareConstant(BadValue,2,2115,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: BadValue\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef BadWindow
	CompareConstant(BadWindow,3,2116,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: BadWindow\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef BadPixmap
	CompareConstant(BadPixmap,4,2117,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: BadPixmap\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef BadAtom
	CompareConstant(BadAtom,5,2118,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: BadAtom\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef BadCursor
	CompareConstant(BadCursor,6,2119,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: BadCursor\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef BadFont
	CompareConstant(BadFont,7,2120,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: BadFont\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef BadMatch
	CompareConstant(BadMatch,8,2121,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: BadMatch\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef BadDrawable
	CompareConstant(BadDrawable,9,2122,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: BadDrawable\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef BadAccess
	CompareConstant(BadAccess,10,2123,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: BadAccess\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef BadAlloc
	CompareConstant(BadAlloc,11,2124,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: BadAlloc\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef BadColor
	CompareConstant(BadColor,12,2125,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: BadColor\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef BadGC
	CompareConstant(BadGC,13,2126,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: BadGC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef BadIDChoice
	CompareConstant(BadIDChoice,14,2127,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: BadIDChoice\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef BadName
	CompareConstant(BadName,15,2128,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: BadName\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef BadLength
	CompareConstant(BadLength,16,2129,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: BadLength\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef BadImplementation
	CompareConstant(BadImplementation,17,2130,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: BadImplementation\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FirstExtensionError
	CompareConstant(FirstExtensionError,128,2131,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: FirstExtensionError\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LastExtensionError
	CompareConstant(LastExtensionError,255,2132,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: LastExtensionError\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef InputOutput
	CompareConstant(InputOutput,1,2133,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: InputOutput\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef InputOnly
	CompareConstant(InputOnly,2,2134,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: InputOnly\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CWBackPixmap
	CompareConstant(CWBackPixmap,(1L<<0),2135,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: CWBackPixmap\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CWBackPixel
	CompareConstant(CWBackPixel,(1L<<1),2136,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: CWBackPixel\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CWBorderPixmap
	CompareConstant(CWBorderPixmap,(1L<<2),2137,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: CWBorderPixmap\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CWBorderPixel
	CompareConstant(CWBorderPixel,(1L<<3),2138,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: CWBorderPixel\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CWBitGravity
	CompareConstant(CWBitGravity,(1L<<4),2139,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: CWBitGravity\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CWWinGravity
	CompareConstant(CWWinGravity,(1L<<5),2140,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: CWWinGravity\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CWBackingStore
	CompareConstant(CWBackingStore,(1L<<6),2141,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: CWBackingStore\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CWBackingPlanes
	CompareConstant(CWBackingPlanes,(1L<<7),2142,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: CWBackingPlanes\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CWBackingPixel
	CompareConstant(CWBackingPixel,(1L<<8),2143,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: CWBackingPixel\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CWOverrideRedirect
	CompareConstant(CWOverrideRedirect,(1L<<9),2144,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: CWOverrideRedirect\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CWSaveUnder
	CompareConstant(CWSaveUnder,(1L<<10),2145,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: CWSaveUnder\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CWEventMask
	CompareConstant(CWEventMask,(1L<<11),2146,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: CWEventMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CWDontPropagate
	CompareConstant(CWDontPropagate,(1L<<12),2147,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: CWDontPropagate\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CWColormap
	CompareConstant(CWColormap,(1L<<13),2148,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: CWColormap\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CWCursor
	CompareConstant(CWCursor,(1L<<14),2149,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: CWCursor\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CWX
	CompareConstant(CWX,(1<<0),2150,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: CWX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CWY
	CompareConstant(CWY,(1<<1),2151,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: CWY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CWWidth
	CompareConstant(CWWidth,(1<<2),2152,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: CWWidth\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CWHeight
	CompareConstant(CWHeight,(1<<3),2153,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: CWHeight\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CWBorderWidth
	CompareConstant(CWBorderWidth,(1<<4),2154,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: CWBorderWidth\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CWSibling
	CompareConstant(CWSibling,(1<<5),2155,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: CWSibling\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CWStackMode
	CompareConstant(CWStackMode,(1<<6),2156,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: CWStackMode\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ForgetGravity
	CompareConstant(ForgetGravity,0,2157,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ForgetGravity\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NorthWestGravity
	CompareConstant(NorthWestGravity,1,2158,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: NorthWestGravity\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NorthGravity
	CompareConstant(NorthGravity,2,2159,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: NorthGravity\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NorthEastGravity
	CompareConstant(NorthEastGravity,3,2160,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: NorthEastGravity\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef WestGravity
	CompareConstant(WestGravity,4,2161,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: WestGravity\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CenterGravity
	CompareConstant(CenterGravity,5,2162,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: CenterGravity\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EastGravity
	CompareConstant(EastGravity,6,2163,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: EastGravity\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SouthWestGravity
	CompareConstant(SouthWestGravity,7,2164,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SouthWestGravity\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SouthGravity
	CompareConstant(SouthGravity,8,2165,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SouthGravity\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SouthEastGravity
	CompareConstant(SouthEastGravity,9,2166,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SouthEastGravity\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef StaticGravity
	CompareConstant(StaticGravity,10,2167,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: StaticGravity\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef UnmapGravity
	CompareConstant(UnmapGravity,0,2168,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: UnmapGravity\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NotUseful
	CompareConstant(NotUseful,0,2169,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: NotUseful\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef WhenMapped
	CompareConstant(WhenMapped,1,2170,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: WhenMapped\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Always
	CompareConstant(Always,2,2171,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: Always\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IsUnmapped
	CompareConstant(IsUnmapped,0,2172,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: IsUnmapped\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IsUnviewable
	CompareConstant(IsUnviewable,1,2173,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: IsUnviewable\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IsViewable
	CompareConstant(IsViewable,2,2174,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: IsViewable\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SetModeInsert
	CompareConstant(SetModeInsert,0,2175,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SetModeInsert\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SetModeDelete
	CompareConstant(SetModeDelete,1,2176,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SetModeDelete\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DestroyAll
	CompareConstant(DestroyAll,0,2177,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: DestroyAll\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RetainPermanent
	CompareConstant(RetainPermanent,1,2178,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: RetainPermanent\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RetainTemporary
	CompareConstant(RetainTemporary,2,2179,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: RetainTemporary\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Above
	CompareConstant(Above,0,2180,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: Above\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Below
	CompareConstant(Below,1,2181,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: Below\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TopIf
	CompareConstant(TopIf,2,2182,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: TopIf\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef BottomIf
	CompareConstant(BottomIf,3,2183,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: BottomIf\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Opposite
	CompareConstant(Opposite,4,2184,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: Opposite\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RaiseLowest
	CompareConstant(RaiseLowest,0,2185,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: RaiseLowest\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LowerHighest
	CompareConstant(LowerHighest,1,2186,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: LowerHighest\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PropModeReplace
	CompareConstant(PropModeReplace,0,2187,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PropModeReplace\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PropModePrepend
	CompareConstant(PropModePrepend,1,2188,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PropModePrepend\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PropModeAppend
	CompareConstant(PropModeAppend,2,2189,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PropModeAppend\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GXclear
	CompareConstant(GXclear,0x0,2190,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GXclear\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GXand
	CompareConstant(GXand,0x1,2191,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GXand\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GXandReverse
	CompareConstant(GXandReverse,0x2,2192,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GXandReverse\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GXcopy
	CompareConstant(GXcopy,0x3,2193,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GXcopy\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GXandInverted
	CompareConstant(GXandInverted,0x4,2194,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GXandInverted\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GXnoop
	CompareConstant(GXnoop,0x5,2195,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GXnoop\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GXxor
	CompareConstant(GXxor,0x6,2196,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GXxor\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GXor
	CompareConstant(GXor,0x7,2197,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GXor\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GXnor
	CompareConstant(GXnor,0x8,2198,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GXnor\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GXequiv
	CompareConstant(GXequiv,0x9,2199,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GXequiv\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GXinvert
	CompareConstant(GXinvert,0xa,2200,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GXinvert\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GXorReverse
	CompareConstant(GXorReverse,0xb,2201,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GXorReverse\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GXcopyInverted
	CompareConstant(GXcopyInverted,0xc,2202,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GXcopyInverted\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GXorInverted
	CompareConstant(GXorInverted,0xd,2203,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GXorInverted\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GXnand
	CompareConstant(GXnand,0xe,2204,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GXnand\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GXset
	CompareConstant(GXset,0xf,2205,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GXset\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LineSolid
	CompareConstant(LineSolid,0,2206,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: LineSolid\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LineOnOffDash
	CompareConstant(LineOnOffDash,1,2207,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: LineOnOffDash\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LineDoubleDash
	CompareConstant(LineDoubleDash,2,2208,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: LineDoubleDash\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CapNotLast
	CompareConstant(CapNotLast,0,2209,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: CapNotLast\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CapButt
	CompareConstant(CapButt,1,2210,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: CapButt\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CapRound
	CompareConstant(CapRound,2,2211,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: CapRound\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CapProjecting
	CompareConstant(CapProjecting,3,2212,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: CapProjecting\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef JoinMiter
	CompareConstant(JoinMiter,0,2213,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: JoinMiter\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef JoinRound
	CompareConstant(JoinRound,1,2214,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: JoinRound\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef JoinBevel
	CompareConstant(JoinBevel,2,2215,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: JoinBevel\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FillSolid
	CompareConstant(FillSolid,0,2216,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: FillSolid\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FillTiled
	CompareConstant(FillTiled,1,2217,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: FillTiled\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FillStippled
	CompareConstant(FillStippled,2,2218,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: FillStippled\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FillOpaqueStippled
	CompareConstant(FillOpaqueStippled,3,2219,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: FillOpaqueStippled\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EvenOddRule
	CompareConstant(EvenOddRule,0,2220,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: EvenOddRule\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef WindingRule
	CompareConstant(WindingRule,1,2221,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: WindingRule\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ClipByChildren
	CompareConstant(ClipByChildren,0,2222,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ClipByChildren\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IncludeInferiors
	CompareConstant(IncludeInferiors,1,2223,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: IncludeInferiors\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Unsorted
	CompareConstant(Unsorted,0,2224,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: Unsorted\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef YSorted
	CompareConstant(YSorted,1,2225,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: YSorted\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef YXSorted
	CompareConstant(YXSorted,2,2226,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: YXSorted\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef YXBanded
	CompareConstant(YXBanded,3,2227,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: YXBanded\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CoordModeOrigin
	CompareConstant(CoordModeOrigin,0,2228,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: CoordModeOrigin\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CoordModePrevious
	CompareConstant(CoordModePrevious,1,2229,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: CoordModePrevious\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Complex
	CompareConstant(Complex,0,2230,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: Complex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Nonconvex
	CompareConstant(Nonconvex,1,2231,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: Nonconvex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Convex
	CompareConstant(Convex,2,2232,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: Convex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ArcChord
	CompareConstant(ArcChord,0,2233,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ArcChord\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ArcPieSlice
	CompareConstant(ArcPieSlice,1,2234,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ArcPieSlice\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GCFunction
	CompareConstant(GCFunction,(1L<<0),2235,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GCFunction\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GCPlaneMask
	CompareConstant(GCPlaneMask,(1L<<1),2236,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GCPlaneMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GCForeground
	CompareConstant(GCForeground,(1L<<2),2237,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GCForeground\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GCBackground
	CompareConstant(GCBackground,(1L<<3),2238,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GCBackground\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GCLineWidth
	CompareConstant(GCLineWidth,(1L<<4),2239,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GCLineWidth\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GCLineStyle
	CompareConstant(GCLineStyle,(1L<<5),2240,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GCLineStyle\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GCCapStyle
	CompareConstant(GCCapStyle,(1L<<6),2241,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GCCapStyle\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GCJoinStyle
	CompareConstant(GCJoinStyle,(1L<<7),2242,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GCJoinStyle\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GCFillStyle
	CompareConstant(GCFillStyle,(1L<<8),2243,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GCFillStyle\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GCFillRule
	CompareConstant(GCFillRule,(1L<<9),2244,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GCFillRule\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GCTile
	CompareConstant(GCTile,(1L<<10),2245,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GCTile\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GCStipple
	CompareConstant(GCStipple,(1L<<11),2246,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GCStipple\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GCTileStipXOrigin
	CompareConstant(GCTileStipXOrigin,(1L<<12),2247,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GCTileStipXOrigin\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GCTileStipYOrigin
	CompareConstant(GCTileStipYOrigin,(1L<<13),2248,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GCTileStipYOrigin\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GCFont
	CompareConstant(GCFont,(1L<<14),2249,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GCFont\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GCSubwindowMode
	CompareConstant(GCSubwindowMode,(1L<<15),2250,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GCSubwindowMode\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GCGraphicsExposures
	CompareConstant(GCGraphicsExposures,(1L<<16),2251,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GCGraphicsExposures\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GCClipXOrigin
	CompareConstant(GCClipXOrigin,(1L<<17),2252,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GCClipXOrigin\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GCClipYOrigin
	CompareConstant(GCClipYOrigin,(1L<<18),2253,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GCClipYOrigin\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GCClipMask
	CompareConstant(GCClipMask,(1L<<19),2254,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GCClipMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GCDashOffset
	CompareConstant(GCDashOffset,(1L<<20),2255,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GCDashOffset\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GCDashList
	CompareConstant(GCDashList,(1L<<21),2256,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GCDashList\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GCArcMode
	CompareConstant(GCArcMode,(1L<<22),2257,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GCArcMode\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GCLastBit
	CompareConstant(GCLastBit,22,2258,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GCLastBit\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FontLeftToRight
	CompareConstant(FontLeftToRight,0,2259,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: FontLeftToRight\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FontRightToLeft
	CompareConstant(FontRightToLeft,1,2260,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: FontRightToLeft\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FontChange
	CompareConstant(FontChange,255,2261,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: FontChange\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XYBitmap
	CompareConstant(XYBitmap,0,2262,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XYBitmap\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XYPixmap
	CompareConstant(XYPixmap,1,2263,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XYPixmap\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ZPixmap
	CompareConstant(ZPixmap,2,2264,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ZPixmap\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef AllocNone
	CompareConstant(AllocNone,0,2265,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: AllocNone\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef AllocAll
	CompareConstant(AllocAll,1,2266,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: AllocAll\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DoRed
	CompareConstant(DoRed,(1<<0),2267,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: DoRed\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DoGreen
	CompareConstant(DoGreen,(1<<1),2268,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: DoGreen\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DoBlue
	CompareConstant(DoBlue,(1<<2),2269,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: DoBlue\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CursorShape
	CompareConstant(CursorShape,0,2270,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: CursorShape\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TileShape
	CompareConstant(TileShape,1,2271,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: TileShape\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef StippleShape
	CompareConstant(StippleShape,2,2272,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: StippleShape\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef AutoRepeatModeOff
	CompareConstant(AutoRepeatModeOff,0,2273,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: AutoRepeatModeOff\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef AutoRepeatModeOn
	CompareConstant(AutoRepeatModeOn,1,2274,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: AutoRepeatModeOn\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef AutoRepeatModeDefault
	CompareConstant(AutoRepeatModeDefault,2,2275,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: AutoRepeatModeDefault\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LedModeOff
	CompareConstant(LedModeOff,0,2276,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: LedModeOff\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LedModeOn
	CompareConstant(LedModeOn,1,2277,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: LedModeOn\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KBKeyClickPercent
	CompareConstant(KBKeyClickPercent,(1L<<0),2278,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: KBKeyClickPercent\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KBBellPercent
	CompareConstant(KBBellPercent,(1L<<1),2279,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: KBBellPercent\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KBBellPitch
	CompareConstant(KBBellPitch,(1L<<2),2280,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: KBBellPitch\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KBBellDuration
	CompareConstant(KBBellDuration,(1L<<3),2281,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: KBBellDuration\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KBLed
	CompareConstant(KBLed,(1L<<4),2282,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: KBLed\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KBLedMode
	CompareConstant(KBLedMode,(1L<<5),2283,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: KBLedMode\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KBKey
	CompareConstant(KBKey,(1L<<6),2284,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: KBKey\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KBAutoRepeatMode
	CompareConstant(KBAutoRepeatMode,(1L<<7),2285,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: KBAutoRepeatMode\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MappingSuccess
	CompareConstant(MappingSuccess,0,2286,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: MappingSuccess\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MappingBusy
	CompareConstant(MappingBusy,1,2287,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: MappingBusy\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MappingFailed
	CompareConstant(MappingFailed,2,2288,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: MappingFailed\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MappingModifier
	CompareConstant(MappingModifier,0,2289,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: MappingModifier\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MappingKeyboard
	CompareConstant(MappingKeyboard,1,2290,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: MappingKeyboard\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MappingPointer
	CompareConstant(MappingPointer,2,2291,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: MappingPointer\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DontPreferBlanking
	CompareConstant(DontPreferBlanking,0,2292,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: DontPreferBlanking\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PreferBlanking
	CompareConstant(PreferBlanking,1,2293,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PreferBlanking\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DefaultBlanking
	CompareConstant(DefaultBlanking,2,2294,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: DefaultBlanking\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DisableScreenSaver
	CompareConstant(DisableScreenSaver,0,2295,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: DisableScreenSaver\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DisableScreenInterval
	CompareConstant(DisableScreenInterval,0,2296,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: DisableScreenInterval\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DontAllowExposures
	CompareConstant(DontAllowExposures,0,2297,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: DontAllowExposures\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef AllowExposures
	CompareConstant(AllowExposures,1,2298,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: AllowExposures\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DefaultExposures
	CompareConstant(DefaultExposures,2,2299,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: DefaultExposures\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ScreenSaverReset
	CompareConstant(ScreenSaverReset,0,2300,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ScreenSaverReset\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ScreenSaverActive
	CompareConstant(ScreenSaverActive,1,2301,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ScreenSaverActive\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef HostInsert
	CompareConstant(HostInsert,0,2302,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: HostInsert\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef HostDelete
	CompareConstant(HostDelete,1,2303,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: HostDelete\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EnableAccess
	CompareConstant(EnableAccess,1,2304,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: EnableAccess\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DisableAccess
	CompareConstant(DisableAccess,0,2305,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: DisableAccess\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef StaticGray
	CompareConstant(StaticGray,0,2306,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: StaticGray\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GrayScale
	CompareConstant(GrayScale,1,2307,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GrayScale\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef StaticColor
	CompareConstant(StaticColor,2,2308,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: StaticColor\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PseudoColor
	CompareConstant(PseudoColor,3,2309,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PseudoColor\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TrueColor
	CompareConstant(TrueColor,4,2310,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: TrueColor\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DirectColor
	CompareConstant(DirectColor,5,2311,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: DirectColor\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LSBFirst
	CompareConstant(LSBFirst,0,2312,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: LSBFirst\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MSBFirst
	CompareConstant(MSBFirst,1,2313,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: MSBFirst\n");
cnt++;
#endif

#endif

#if defined __s390x__
CheckTypeSize(XID,8, 8171, 12, 1.3, NULL, 9, NULL)
#elif defined __x86_64__
CheckTypeSize(XID,8, 8171, 11, 2.0, NULL, 9, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XID,4, 8171, 10, 1.3, NULL, 9, NULL)
#elif defined __powerpc64__
CheckTypeSize(XID,8, 8171, 9, 2.0, NULL, 9, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XID,4, 8171, 6, 1.2, NULL, 9, NULL)
#elif defined __ia64__
CheckTypeSize(XID,8, 8171, 3, 1.3, NULL, 9, NULL)
#elif defined __i386__
CheckTypeSize(XID,4, 8171, 2, 1.2, NULL, 9, NULL)
#else
Msg("Find size of XID (8171)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9,NULL);\n",architecture,8171,0);
#endif

#if defined __s390x__
CheckTypeSize(Mask,8, 8172, 12, 1.3, NULL, 9, NULL)
#elif defined __x86_64__
CheckTypeSize(Mask,8, 8172, 11, 2.0, NULL, 9, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(Mask,4, 8172, 10, 1.3, NULL, 9, NULL)
#elif defined __powerpc64__
CheckTypeSize(Mask,8, 8172, 9, 2.0, NULL, 9, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(Mask,4, 8172, 6, 1.2, NULL, 9, NULL)
#elif defined __ia64__
CheckTypeSize(Mask,8, 8172, 3, 1.3, NULL, 9, NULL)
#elif defined __i386__
CheckTypeSize(Mask,4, 8172, 2, 1.2, NULL, 9, NULL)
#else
Msg("Find size of Mask (8172)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9,NULL);\n",architecture,8172,0);
#endif

#if defined __s390x__
CheckTypeSize(Atom,8, 8173, 12, 1.3, NULL, 9, NULL)
#elif defined __x86_64__
CheckTypeSize(Atom,8, 8173, 11, 2.0, NULL, 9, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(Atom,4, 8173, 10, 1.3, NULL, 9, NULL)
#elif defined __powerpc64__
CheckTypeSize(Atom,8, 8173, 9, 2.0, NULL, 9, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(Atom,4, 8173, 6, 1.2, NULL, 9, NULL)
#elif defined __ia64__
CheckTypeSize(Atom,8, 8173, 3, 1.3, NULL, 9, NULL)
#elif defined __i386__
CheckTypeSize(Atom,4, 8173, 2, 1.2, NULL, 9, NULL)
#else
Msg("Find size of Atom (8173)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9,NULL);\n",architecture,8173,0);
#endif

#if defined __s390x__
CheckTypeSize(VisualID,8, 8174, 12, 1.3, NULL, 9, NULL)
#elif defined __x86_64__
CheckTypeSize(VisualID,8, 8174, 11, 2.0, NULL, 9, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(VisualID,4, 8174, 10, 1.3, NULL, 9, NULL)
#elif defined __powerpc64__
CheckTypeSize(VisualID,8, 8174, 9, 2.0, NULL, 9, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(VisualID,4, 8174, 6, 1.2, NULL, 9, NULL)
#elif defined __ia64__
CheckTypeSize(VisualID,8, 8174, 3, 1.3, NULL, 9, NULL)
#elif defined __i386__
CheckTypeSize(VisualID,4, 8174, 2, 1.2, NULL, 9, NULL)
#else
Msg("Find size of VisualID (8174)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9,NULL);\n",architecture,8174,0);
#endif

#if defined __s390x__
CheckTypeSize(Time,8, 8175, 12, 1.3, NULL, 9, NULL)
#elif defined __x86_64__
CheckTypeSize(Time,8, 8175, 11, 2.0, NULL, 9, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(Time,4, 8175, 10, 1.3, NULL, 9, NULL)
#elif defined __powerpc64__
CheckTypeSize(Time,8, 8175, 9, 2.0, NULL, 9, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(Time,4, 8175, 6, 1.2, NULL, 9, NULL)
#elif defined __ia64__
CheckTypeSize(Time,8, 8175, 3, 1.3, NULL, 9, NULL)
#elif defined __i386__
CheckTypeSize(Time,4, 8175, 2, 1.2, NULL, 9, NULL)
#else
Msg("Find size of Time (8175)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9,NULL);\n",architecture,8175,0);
#endif

#if defined __s390x__
CheckTypeSize(Window,8, 8176, 12, 1.3, NULL, 8171, NULL)
#elif defined __x86_64__
CheckTypeSize(Window,8, 8176, 11, 2.0, NULL, 8171, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(Window,4, 8176, 10, 1.3, NULL, 8171, NULL)
#elif defined __powerpc64__
CheckTypeSize(Window,8, 8176, 9, 2.0, NULL, 8171, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(Window,4, 8176, 6, 1.2, NULL, 8171, NULL)
#elif defined __ia64__
CheckTypeSize(Window,8, 8176, 3, 1.3, NULL, 8171, NULL)
#elif defined __i386__
CheckTypeSize(Window,4, 8176, 2, 1.2, NULL, 8171, NULL)
#else
Msg("Find size of Window (8176)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8171,NULL);\n",architecture,8176,0);
#endif

#if defined __s390x__
CheckTypeSize(Font,8, 8177, 12, 1.3, NULL, 8171, NULL)
#elif defined __x86_64__
CheckTypeSize(Font,8, 8177, 11, 2.0, NULL, 8171, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(Font,4, 8177, 10, 1.3, NULL, 8171, NULL)
#elif defined __powerpc64__
CheckTypeSize(Font,8, 8177, 9, 2.0, NULL, 8171, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(Font,4, 8177, 6, 1.2, NULL, 8171, NULL)
#elif defined __ia64__
CheckTypeSize(Font,8, 8177, 3, 1.3, NULL, 8171, NULL)
#elif defined __i386__
CheckTypeSize(Font,4, 8177, 2, 1.2, NULL, 8171, NULL)
#else
Msg("Find size of Font (8177)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8171,NULL);\n",architecture,8177,0);
#endif

#if defined __s390x__
CheckTypeSize(Pixmap,8, 8178, 12, 1.3, NULL, 8171, NULL)
#elif defined __x86_64__
CheckTypeSize(Pixmap,8, 8178, 11, 2.0, NULL, 8171, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(Pixmap,4, 8178, 10, 1.3, NULL, 8171, NULL)
#elif defined __powerpc64__
CheckTypeSize(Pixmap,8, 8178, 9, 2.0, NULL, 8171, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(Pixmap,4, 8178, 6, 1.2, NULL, 8171, NULL)
#elif defined __ia64__
CheckTypeSize(Pixmap,8, 8178, 3, 1.3, NULL, 8171, NULL)
#elif defined __i386__
CheckTypeSize(Pixmap,4, 8178, 2, 1.2, NULL, 8171, NULL)
#else
Msg("Find size of Pixmap (8178)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8171,NULL);\n",architecture,8178,0);
#endif

#if defined __s390x__
CheckTypeSize(KeyCode,1, 8179, 12, 1.3, NULL, 3, NULL)
#elif defined __x86_64__
CheckTypeSize(KeyCode,1, 8179, 11, 2.0, NULL, 3, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(KeyCode,1, 8179, 10, 1.3, NULL, 3, NULL)
#elif defined __powerpc64__
CheckTypeSize(KeyCode,1, 8179, 9, 2.0, NULL, 3, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(KeyCode,1, 8179, 6, 1.2, NULL, 3, NULL)
#elif defined __ia64__
CheckTypeSize(KeyCode,1, 8179, 3, 1.3, NULL, 3, NULL)
#elif defined __i386__
CheckTypeSize(KeyCode,1, 8179, 2, 1.2, NULL, 3, NULL)
#else
Msg("Find size of KeyCode (8179)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,3,NULL);\n",architecture,8179,0);
#endif

#if defined __s390x__
CheckTypeSize(Drawable,8, 8727, 12, 1.3, NULL, 8171, NULL)
#elif defined __x86_64__
CheckTypeSize(Drawable,8, 8727, 11, 2.0, NULL, 8171, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(Drawable,4, 8727, 10, 1.3, NULL, 8171, NULL)
#elif defined __powerpc64__
CheckTypeSize(Drawable,8, 8727, 9, 2.0, NULL, 8171, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(Drawable,4, 8727, 6, 1.2, NULL, 8171, NULL)
#elif defined __ia64__
CheckTypeSize(Drawable,8, 8727, 3, 1.3, NULL, 8171, NULL)
#elif defined __i386__
CheckTypeSize(Drawable,4, 8727, 2, 1.2, NULL, 8171, NULL)
#else
Msg("Find size of Drawable (8727)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8171,NULL);\n",architecture,8727,0);
#endif

#if defined __s390x__
CheckTypeSize(Cursor,8, 8728, 12, 1.3, NULL, 8171, NULL)
#elif defined __x86_64__
CheckTypeSize(Cursor,8, 8728, 11, 2.0, NULL, 8171, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(Cursor,4, 8728, 10, 1.3, NULL, 8171, NULL)
#elif defined __powerpc64__
CheckTypeSize(Cursor,8, 8728, 9, 2.0, NULL, 8171, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(Cursor,4, 8728, 6, 1.2, NULL, 8171, NULL)
#elif defined __ia64__
CheckTypeSize(Cursor,8, 8728, 3, 1.3, NULL, 8171, NULL)
#elif defined __i386__
CheckTypeSize(Cursor,4, 8728, 2, 1.2, NULL, 8171, NULL)
#else
Msg("Find size of Cursor (8728)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8171,NULL);\n",architecture,8728,0);
#endif

#if defined __s390x__
CheckTypeSize(Colormap,8, 8729, 12, 1.3, NULL, 8171, NULL)
#elif defined __x86_64__
CheckTypeSize(Colormap,8, 8729, 11, 2.0, NULL, 8171, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(Colormap,4, 8729, 10, 1.3, NULL, 8171, NULL)
#elif defined __powerpc64__
CheckTypeSize(Colormap,8, 8729, 9, 2.0, NULL, 8171, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(Colormap,4, 8729, 6, 1.2, NULL, 8171, NULL)
#elif defined __ia64__
CheckTypeSize(Colormap,8, 8729, 3, 1.3, NULL, 8171, NULL)
#elif defined __i386__
CheckTypeSize(Colormap,4, 8729, 2, 1.2, NULL, 8171, NULL)
#else
Msg("Find size of Colormap (8729)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8171,NULL);\n",architecture,8729,0);
#endif

#if defined __s390x__
CheckTypeSize(GContext,8, 8730, 12, 1.3, NULL, 8171, NULL)
#elif defined __x86_64__
CheckTypeSize(GContext,8, 8730, 11, 2.0, NULL, 8171, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GContext,4, 8730, 10, 1.3, NULL, 8171, NULL)
#elif defined __powerpc64__
CheckTypeSize(GContext,8, 8730, 9, 2.0, NULL, 8171, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GContext,4, 8730, 6, 1.2, NULL, 8171, NULL)
#elif defined __ia64__
CheckTypeSize(GContext,8, 8730, 3, 1.3, NULL, 8171, NULL)
#elif defined __i386__
CheckTypeSize(GContext,4, 8730, 2, 1.2, NULL, 8171, NULL)
#else
Msg("Find size of GContext (8730)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8171,NULL);\n",architecture,8730,0);
#endif

#if defined __s390x__
CheckTypeSize(KeySym,8, 8731, 12, 1.3, NULL, 8171, NULL)
#elif defined __x86_64__
CheckTypeSize(KeySym,8, 8731, 11, 2.0, NULL, 8171, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(KeySym,4, 8731, 10, 1.3, NULL, 8171, NULL)
#elif defined __powerpc64__
CheckTypeSize(KeySym,8, 8731, 9, 2.0, NULL, 8171, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(KeySym,4, 8731, 6, 1.2, NULL, 8171, NULL)
#elif defined __ia64__
CheckTypeSize(KeySym,8, 8731, 3, 1.3, NULL, 8171, NULL)
#elif defined __i386__
CheckTypeSize(KeySym,4, 8731, 2, 1.2, NULL, 8171, NULL)
#else
Msg("Find size of KeySym (8731)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8171, NULL);\n",architecture,8731,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/X.h\n\n",pcnt,cnt);
return cnt;
#endif

}
