/*
 * Test of X11/X.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "X11/X.h"



#ifdef TET_TEST
void X11_X_h()
{
#else
int X11_X_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in X11/X.h\n");
#endif

#ifdef None
	CompareConstant(None,0L)
#else
Msg( "Error: Constant not found: None\n");
cnt++;
#endif

#ifdef ParentRelative
	CompareConstant(ParentRelative,1L)
#else
Msg( "Error: Constant not found: ParentRelative\n");
cnt++;
#endif

#ifdef CopyFromParent
	CompareConstant(CopyFromParent,0L)
#else
Msg( "Error: Constant not found: CopyFromParent\n");
cnt++;
#endif

#ifdef PointerWindow
	CompareConstant(PointerWindow,0L)
#else
Msg( "Error: Constant not found: PointerWindow\n");
cnt++;
#endif

#ifdef InputFocus
	CompareConstant(InputFocus,1L)
#else
Msg( "Error: Constant not found: InputFocus\n");
cnt++;
#endif

#ifdef PointerRoot
	CompareConstant(PointerRoot,1L)
#else
Msg( "Error: Constant not found: PointerRoot\n");
cnt++;
#endif

#ifdef AnyPropertyType
	CompareConstant(AnyPropertyType,0L)
#else
Msg( "Error: Constant not found: AnyPropertyType\n");
cnt++;
#endif

#ifdef AnyKey
	CompareConstant(AnyKey,0L)
#else
Msg( "Error: Constant not found: AnyKey\n");
cnt++;
#endif

#ifdef AnyButton
	CompareConstant(AnyButton,0L)
#else
Msg( "Error: Constant not found: AnyButton\n");
cnt++;
#endif

#ifdef AllTemporary
	CompareConstant(AllTemporary,0L)
#else
Msg( "Error: Constant not found: AllTemporary\n");
cnt++;
#endif

#ifdef CurrentTime
	CompareConstant(CurrentTime,0L)
#else
Msg( "Error: Constant not found: CurrentTime\n");
cnt++;
#endif

#ifdef NoSymbol
	CompareConstant(NoSymbol,0L)
#else
Msg( "Error: Constant not found: NoSymbol\n");
cnt++;
#endif

#ifdef KeyPressMask
	CompareConstant(KeyPressMask,(1L<<0))
#else
Msg( "Error: Constant not found: KeyPressMask\n");
cnt++;
#endif

#ifdef KeyReleaseMask
	CompareConstant(KeyReleaseMask,(1L<<1))
#else
Msg( "Error: Constant not found: KeyReleaseMask\n");
cnt++;
#endif

#ifdef ButtonPressMask
	CompareConstant(ButtonPressMask,(1L<<2))
#else
Msg( "Error: Constant not found: ButtonPressMask\n");
cnt++;
#endif

#ifdef ButtonReleaseMask
	CompareConstant(ButtonReleaseMask,(1L<<3))
#else
Msg( "Error: Constant not found: ButtonReleaseMask\n");
cnt++;
#endif

#ifdef EnterWindowMask
	CompareConstant(EnterWindowMask,(1L<<4))
#else
Msg( "Error: Constant not found: EnterWindowMask\n");
cnt++;
#endif

#ifdef LeaveWindowMask
	CompareConstant(LeaveWindowMask,(1L<<5))
#else
Msg( "Error: Constant not found: LeaveWindowMask\n");
cnt++;
#endif

#ifdef PointerMotionMask
	CompareConstant(PointerMotionMask,(1L<<6))
#else
Msg( "Error: Constant not found: PointerMotionMask\n");
cnt++;
#endif

#ifdef PointerMotionHintMask
	CompareConstant(PointerMotionHintMask,(1L<<7))
#else
Msg( "Error: Constant not found: PointerMotionHintMask\n");
cnt++;
#endif

#ifdef Button1MotionMask
	CompareConstant(Button1MotionMask,(1L<<8))
#else
Msg( "Error: Constant not found: Button1MotionMask\n");
cnt++;
#endif

#ifdef Button2MotionMask
	CompareConstant(Button2MotionMask,(1L<<9))
#else
Msg( "Error: Constant not found: Button2MotionMask\n");
cnt++;
#endif

#ifdef Button3MotionMask
	CompareConstant(Button3MotionMask,(1L<<10))
#else
Msg( "Error: Constant not found: Button3MotionMask\n");
cnt++;
#endif

#ifdef Button4MotionMask
	CompareConstant(Button4MotionMask,(1L<<11))
#else
Msg( "Error: Constant not found: Button4MotionMask\n");
cnt++;
#endif

#ifdef Button5MotionMask
	CompareConstant(Button5MotionMask,(1L<<12))
#else
Msg( "Error: Constant not found: Button5MotionMask\n");
cnt++;
#endif

#ifdef ButtonMotionMask
	CompareConstant(ButtonMotionMask,(1L<<13))
#else
Msg( "Error: Constant not found: ButtonMotionMask\n");
cnt++;
#endif

#ifdef KeymapStateMask
	CompareConstant(KeymapStateMask,(1L<<14))
#else
Msg( "Error: Constant not found: KeymapStateMask\n");
cnt++;
#endif

#ifdef ExposureMask
	CompareConstant(ExposureMask,(1L<<15))
#else
Msg( "Error: Constant not found: ExposureMask\n");
cnt++;
#endif

#ifdef VisibilityChangeMask
	CompareConstant(VisibilityChangeMask,(1L<<16))
#else
Msg( "Error: Constant not found: VisibilityChangeMask\n");
cnt++;
#endif

#ifdef StructureNotifyMask
	CompareConstant(StructureNotifyMask,(1L<<17))
#else
Msg( "Error: Constant not found: StructureNotifyMask\n");
cnt++;
#endif

#ifdef ResizeRedirectMask
	CompareConstant(ResizeRedirectMask,(1L<<18))
#else
Msg( "Error: Constant not found: ResizeRedirectMask\n");
cnt++;
#endif

#ifdef SubstructureNotifyMask
	CompareConstant(SubstructureNotifyMask,(1L<<19))
#else
Msg( "Error: Constant not found: SubstructureNotifyMask\n");
cnt++;
#endif

#ifdef SubstructureRedirectMask
	CompareConstant(SubstructureRedirectMask,(1L<<20))
#else
Msg( "Error: Constant not found: SubstructureRedirectMask\n");
cnt++;
#endif

#ifdef FocusChangeMask
	CompareConstant(FocusChangeMask,(1L<<21))
#else
Msg( "Error: Constant not found: FocusChangeMask\n");
cnt++;
#endif

#ifdef PropertyChangeMask
	CompareConstant(PropertyChangeMask,(1L<<22))
#else
Msg( "Error: Constant not found: PropertyChangeMask\n");
cnt++;
#endif

#ifdef ColormapChangeMask
	CompareConstant(ColormapChangeMask,(1L<<23))
#else
Msg( "Error: Constant not found: ColormapChangeMask\n");
cnt++;
#endif

#ifdef NoEventMask
	CompareConstant(NoEventMask,0L)
#else
Msg( "Error: Constant not found: NoEventMask\n");
cnt++;
#endif

#ifdef KeyPress
	CompareConstant(KeyPress,2)
#else
Msg( "Error: Constant not found: KeyPress\n");
cnt++;
#endif

#ifdef KeyRelease
	CompareConstant(KeyRelease,3)
#else
Msg( "Error: Constant not found: KeyRelease\n");
cnt++;
#endif

#ifdef ButtonPress
	CompareConstant(ButtonPress,4)
#else
Msg( "Error: Constant not found: ButtonPress\n");
cnt++;
#endif

#ifdef ButtonRelease
	CompareConstant(ButtonRelease,5)
#else
Msg( "Error: Constant not found: ButtonRelease\n");
cnt++;
#endif

#ifdef MotionNotify
	CompareConstant(MotionNotify,6)
#else
Msg( "Error: Constant not found: MotionNotify\n");
cnt++;
#endif

#ifdef EnterNotify
	CompareConstant(EnterNotify,7)
#else
Msg( "Error: Constant not found: EnterNotify\n");
cnt++;
#endif

#ifdef LeaveNotify
	CompareConstant(LeaveNotify,8)
#else
Msg( "Error: Constant not found: LeaveNotify\n");
cnt++;
#endif

#ifdef FocusIn
	CompareConstant(FocusIn,9)
#else
Msg( "Error: Constant not found: FocusIn\n");
cnt++;
#endif

#ifdef FocusOut
	CompareConstant(FocusOut,10)
#else
Msg( "Error: Constant not found: FocusOut\n");
cnt++;
#endif

#ifdef KeymapNotify
	CompareConstant(KeymapNotify,11)
#else
Msg( "Error: Constant not found: KeymapNotify\n");
cnt++;
#endif

#ifdef Expose
	CompareConstant(Expose,12)
#else
Msg( "Error: Constant not found: Expose\n");
cnt++;
#endif

#ifdef GraphicsExpose
	CompareConstant(GraphicsExpose,13)
#else
Msg( "Error: Constant not found: GraphicsExpose\n");
cnt++;
#endif

#ifdef NoExpose
	CompareConstant(NoExpose,14)
#else
Msg( "Error: Constant not found: NoExpose\n");
cnt++;
#endif

#ifdef VisibilityNotify
	CompareConstant(VisibilityNotify,15)
#else
Msg( "Error: Constant not found: VisibilityNotify\n");
cnt++;
#endif

#ifdef CreateNotify
	CompareConstant(CreateNotify,16)
#else
Msg( "Error: Constant not found: CreateNotify\n");
cnt++;
#endif

#ifdef DestroyNotify
	CompareConstant(DestroyNotify,17)
#else
Msg( "Error: Constant not found: DestroyNotify\n");
cnt++;
#endif

#ifdef UnmapNotify
	CompareConstant(UnmapNotify,18)
#else
Msg( "Error: Constant not found: UnmapNotify\n");
cnt++;
#endif

#ifdef MapNotify
	CompareConstant(MapNotify,19)
#else
Msg( "Error: Constant not found: MapNotify\n");
cnt++;
#endif

#ifdef MapRequest
	CompareConstant(MapRequest,20)
#else
Msg( "Error: Constant not found: MapRequest\n");
cnt++;
#endif

#ifdef ReparentNotify
	CompareConstant(ReparentNotify,21)
#else
Msg( "Error: Constant not found: ReparentNotify\n");
cnt++;
#endif

#ifdef ConfigureNotify
	CompareConstant(ConfigureNotify,22)
#else
Msg( "Error: Constant not found: ConfigureNotify\n");
cnt++;
#endif

#ifdef ConfigureRequest
	CompareConstant(ConfigureRequest,23)
#else
Msg( "Error: Constant not found: ConfigureRequest\n");
cnt++;
#endif

#ifdef GravityNotify
	CompareConstant(GravityNotify,24)
#else
Msg( "Error: Constant not found: GravityNotify\n");
cnt++;
#endif

#ifdef ResizeRequest
	CompareConstant(ResizeRequest,25)
#else
Msg( "Error: Constant not found: ResizeRequest\n");
cnt++;
#endif

#ifdef CirculateNotify
	CompareConstant(CirculateNotify,26)
#else
Msg( "Error: Constant not found: CirculateNotify\n");
cnt++;
#endif

#ifdef CirculateRequest
	CompareConstant(CirculateRequest,27)
#else
Msg( "Error: Constant not found: CirculateRequest\n");
cnt++;
#endif

#ifdef PropertyNotify
	CompareConstant(PropertyNotify,28)
#else
Msg( "Error: Constant not found: PropertyNotify\n");
cnt++;
#endif

#ifdef SelectionClear
	CompareConstant(SelectionClear,29)
#else
Msg( "Error: Constant not found: SelectionClear\n");
cnt++;
#endif

#ifdef SelectionRequest
	CompareConstant(SelectionRequest,30)
#else
Msg( "Error: Constant not found: SelectionRequest\n");
cnt++;
#endif

#ifdef SelectionNotify
	CompareConstant(SelectionNotify,31)
#else
Msg( "Error: Constant not found: SelectionNotify\n");
cnt++;
#endif

#ifdef ColormapNotify
	CompareConstant(ColormapNotify,32)
#else
Msg( "Error: Constant not found: ColormapNotify\n");
cnt++;
#endif

#ifdef ClientMessage
	CompareConstant(ClientMessage,33)
#else
Msg( "Error: Constant not found: ClientMessage\n");
cnt++;
#endif

#ifdef MappingNotify
	CompareConstant(MappingNotify,34)
#else
Msg( "Error: Constant not found: MappingNotify\n");
cnt++;
#endif

#ifdef LASTEvent
	CompareConstant(LASTEvent,35)
#else
Msg( "Error: Constant not found: LASTEvent\n");
cnt++;
#endif

#ifdef ShiftMask
	CompareConstant(ShiftMask,(1<<0))
#else
Msg( "Error: Constant not found: ShiftMask\n");
cnt++;
#endif

#ifdef LockMask
	CompareConstant(LockMask,(1<<1))
#else
Msg( "Error: Constant not found: LockMask\n");
cnt++;
#endif

#ifdef ControlMask
	CompareConstant(ControlMask,(1<<2))
#else
Msg( "Error: Constant not found: ControlMask\n");
cnt++;
#endif

#ifdef Mod1Mask
	CompareConstant(Mod1Mask,(1<<3))
#else
Msg( "Error: Constant not found: Mod1Mask\n");
cnt++;
#endif

#ifdef Mod2Mask
	CompareConstant(Mod2Mask,(1<<4))
#else
Msg( "Error: Constant not found: Mod2Mask\n");
cnt++;
#endif

#ifdef Mod3Mask
	CompareConstant(Mod3Mask,(1<<5))
#else
Msg( "Error: Constant not found: Mod3Mask\n");
cnt++;
#endif

#ifdef Mod4Mask
	CompareConstant(Mod4Mask,(1<<6))
#else
Msg( "Error: Constant not found: Mod4Mask\n");
cnt++;
#endif

#ifdef Mod5Mask
	CompareConstant(Mod5Mask,(1<<7))
#else
Msg( "Error: Constant not found: Mod5Mask\n");
cnt++;
#endif

#ifdef ShiftMapIndex
	CompareConstant(ShiftMapIndex,0)
#else
Msg( "Error: Constant not found: ShiftMapIndex\n");
cnt++;
#endif

#ifdef LockMapIndex
	CompareConstant(LockMapIndex,1)
#else
Msg( "Error: Constant not found: LockMapIndex\n");
cnt++;
#endif

#ifdef ControlMapIndex
	CompareConstant(ControlMapIndex,2)
#else
Msg( "Error: Constant not found: ControlMapIndex\n");
cnt++;
#endif

#ifdef Mod1MapIndex
	CompareConstant(Mod1MapIndex,3)
#else
Msg( "Error: Constant not found: Mod1MapIndex\n");
cnt++;
#endif

#ifdef Mod2MapIndex
	CompareConstant(Mod2MapIndex,4)
#else
Msg( "Error: Constant not found: Mod2MapIndex\n");
cnt++;
#endif

#ifdef Mod3MapIndex
	CompareConstant(Mod3MapIndex,5)
#else
Msg( "Error: Constant not found: Mod3MapIndex\n");
cnt++;
#endif

#ifdef Mod4MapIndex
	CompareConstant(Mod4MapIndex,6)
#else
Msg( "Error: Constant not found: Mod4MapIndex\n");
cnt++;
#endif

#ifdef Mod5MapIndex
	CompareConstant(Mod5MapIndex,7)
#else
Msg( "Error: Constant not found: Mod5MapIndex\n");
cnt++;
#endif

#ifdef Button1Mask
	CompareConstant(Button1Mask,(1<<8))
#else
Msg( "Error: Constant not found: Button1Mask\n");
cnt++;
#endif

#ifdef Button2Mask
	CompareConstant(Button2Mask,(1<<9))
#else
Msg( "Error: Constant not found: Button2Mask\n");
cnt++;
#endif

#ifdef Button3Mask
	CompareConstant(Button3Mask,(1<<10))
#else
Msg( "Error: Constant not found: Button3Mask\n");
cnt++;
#endif

#ifdef Button4Mask
	CompareConstant(Button4Mask,(1<<11))
#else
Msg( "Error: Constant not found: Button4Mask\n");
cnt++;
#endif

#ifdef Button5Mask
	CompareConstant(Button5Mask,(1<<12))
#else
Msg( "Error: Constant not found: Button5Mask\n");
cnt++;
#endif

#ifdef AnyModifier
	CompareConstant(AnyModifier,(1<<15))
#else
Msg( "Error: Constant not found: AnyModifier\n");
cnt++;
#endif

#ifdef Button1
	CompareConstant(Button1,1)
#else
Msg( "Error: Constant not found: Button1\n");
cnt++;
#endif

#ifdef Button2
	CompareConstant(Button2,2)
#else
Msg( "Error: Constant not found: Button2\n");
cnt++;
#endif

#ifdef Button3
	CompareConstant(Button3,3)
#else
Msg( "Error: Constant not found: Button3\n");
cnt++;
#endif

#ifdef Button4
	CompareConstant(Button4,4)
#else
Msg( "Error: Constant not found: Button4\n");
cnt++;
#endif

#ifdef Button5
	CompareConstant(Button5,5)
#else
Msg( "Error: Constant not found: Button5\n");
cnt++;
#endif

#ifdef NotifyNormal
	CompareConstant(NotifyNormal,0)
#else
Msg( "Error: Constant not found: NotifyNormal\n");
cnt++;
#endif

#ifdef NotifyGrab
	CompareConstant(NotifyGrab,1)
#else
Msg( "Error: Constant not found: NotifyGrab\n");
cnt++;
#endif

#ifdef NotifyUngrab
	CompareConstant(NotifyUngrab,2)
#else
Msg( "Error: Constant not found: NotifyUngrab\n");
cnt++;
#endif

#ifdef NotifyWhileGrabbed
	CompareConstant(NotifyWhileGrabbed,3)
#else
Msg( "Error: Constant not found: NotifyWhileGrabbed\n");
cnt++;
#endif

#ifdef NotifyHint
	CompareConstant(NotifyHint,1)
#else
Msg( "Error: Constant not found: NotifyHint\n");
cnt++;
#endif

#ifdef NotifyAncestor
	CompareConstant(NotifyAncestor,0)
#else
Msg( "Error: Constant not found: NotifyAncestor\n");
cnt++;
#endif

#ifdef NotifyVirtual
	CompareConstant(NotifyVirtual,1)
#else
Msg( "Error: Constant not found: NotifyVirtual\n");
cnt++;
#endif

#ifdef NotifyInferior
	CompareConstant(NotifyInferior,2)
#else
Msg( "Error: Constant not found: NotifyInferior\n");
cnt++;
#endif

#ifdef NotifyNonlinear
	CompareConstant(NotifyNonlinear,3)
#else
Msg( "Error: Constant not found: NotifyNonlinear\n");
cnt++;
#endif

#ifdef NotifyNonlinearVirtual
	CompareConstant(NotifyNonlinearVirtual,4)
#else
Msg( "Error: Constant not found: NotifyNonlinearVirtual\n");
cnt++;
#endif

#ifdef NotifyPointer
	CompareConstant(NotifyPointer,5)
#else
Msg( "Error: Constant not found: NotifyPointer\n");
cnt++;
#endif

#ifdef NotifyPointerRoot
	CompareConstant(NotifyPointerRoot,6)
#else
Msg( "Error: Constant not found: NotifyPointerRoot\n");
cnt++;
#endif

#ifdef NotifyDetailNone
	CompareConstant(NotifyDetailNone,7)
#else
Msg( "Error: Constant not found: NotifyDetailNone\n");
cnt++;
#endif

#ifdef VisibilityUnobscured
	CompareConstant(VisibilityUnobscured,0)
#else
Msg( "Error: Constant not found: VisibilityUnobscured\n");
cnt++;
#endif

#ifdef VisibilityPartiallyObscured
	CompareConstant(VisibilityPartiallyObscured,1)
#else
Msg( "Error: Constant not found: VisibilityPartiallyObscured\n");
cnt++;
#endif

#ifdef VisibilityFullyObscured
	CompareConstant(VisibilityFullyObscured,2)
#else
Msg( "Error: Constant not found: VisibilityFullyObscured\n");
cnt++;
#endif

#ifdef PlaceOnTop
	CompareConstant(PlaceOnTop,0)
#else
Msg( "Error: Constant not found: PlaceOnTop\n");
cnt++;
#endif

#ifdef PlaceOnBottom
	CompareConstant(PlaceOnBottom,1)
#else
Msg( "Error: Constant not found: PlaceOnBottom\n");
cnt++;
#endif

#ifdef FamilyInternet
	CompareConstant(FamilyInternet,0)
#else
Msg( "Error: Constant not found: FamilyInternet\n");
cnt++;
#endif

#ifdef FamilyDECnet
	CompareConstant(FamilyDECnet,1)
#else
Msg( "Error: Constant not found: FamilyDECnet\n");
cnt++;
#endif

#ifdef FamilyChaos
	CompareConstant(FamilyChaos,2)
#else
Msg( "Error: Constant not found: FamilyChaos\n");
cnt++;
#endif

#ifdef PropertyNewValue
	CompareConstant(PropertyNewValue,0)
#else
Msg( "Error: Constant not found: PropertyNewValue\n");
cnt++;
#endif

#ifdef PropertyDelete
	CompareConstant(PropertyDelete,1)
#else
Msg( "Error: Constant not found: PropertyDelete\n");
cnt++;
#endif

#ifdef PropModeReplace
	CompareConstant(PropModeReplace,0)
#else
Msg( "Error: Constant not found: PropModeReplace\n");
cnt++;
#endif

#ifdef ColormapUninstalled
	CompareConstant(ColormapUninstalled,0)
#else
Msg( "Error: Constant not found: ColormapUninstalled\n");
cnt++;
#endif

#ifdef ColormapInstalled
	CompareConstant(ColormapInstalled,1)
#else
Msg( "Error: Constant not found: ColormapInstalled\n");
cnt++;
#endif

#ifdef GrabModeSync
	CompareConstant(GrabModeSync,0)
#else
Msg( "Error: Constant not found: GrabModeSync\n");
cnt++;
#endif

#ifdef GrabModeAsync
	CompareConstant(GrabModeAsync,1)
#else
Msg( "Error: Constant not found: GrabModeAsync\n");
cnt++;
#endif

#ifdef GrabSuccess
	CompareConstant(GrabSuccess,0)
#else
Msg( "Error: Constant not found: GrabSuccess\n");
cnt++;
#endif

#ifdef AlreadyGrabbed
	CompareConstant(AlreadyGrabbed,1)
#else
Msg( "Error: Constant not found: AlreadyGrabbed\n");
cnt++;
#endif

#ifdef GrabInvalidTime
	CompareConstant(GrabInvalidTime,2)
#else
Msg( "Error: Constant not found: GrabInvalidTime\n");
cnt++;
#endif

#ifdef GrabNotViewable
	CompareConstant(GrabNotViewable,3)
#else
Msg( "Error: Constant not found: GrabNotViewable\n");
cnt++;
#endif

#ifdef GrabFrozen
	CompareConstant(GrabFrozen,4)
#else
Msg( "Error: Constant not found: GrabFrozen\n");
cnt++;
#endif

#ifdef AsyncPointer
	CompareConstant(AsyncPointer,0)
#else
Msg( "Error: Constant not found: AsyncPointer\n");
cnt++;
#endif

#ifdef SyncPointer
	CompareConstant(SyncPointer,1)
#else
Msg( "Error: Constant not found: SyncPointer\n");
cnt++;
#endif

#ifdef ReplayPointer
	CompareConstant(ReplayPointer,2)
#else
Msg( "Error: Constant not found: ReplayPointer\n");
cnt++;
#endif

#ifdef AsyncKeyboard
	CompareConstant(AsyncKeyboard,3)
#else
Msg( "Error: Constant not found: AsyncKeyboard\n");
cnt++;
#endif

#ifdef SyncKeyboard
	CompareConstant(SyncKeyboard,4)
#else
Msg( "Error: Constant not found: SyncKeyboard\n");
cnt++;
#endif

#ifdef ReplayKeyboard
	CompareConstant(ReplayKeyboard,5)
#else
Msg( "Error: Constant not found: ReplayKeyboard\n");
cnt++;
#endif

#ifdef AsyncBoth
	CompareConstant(AsyncBoth,6)
#else
Msg( "Error: Constant not found: AsyncBoth\n");
cnt++;
#endif

#ifdef SyncBoth
	CompareConstant(SyncBoth,7)
#else
Msg( "Error: Constant not found: SyncBoth\n");
cnt++;
#endif

#ifdef RevertToNone
	CompareConstant(RevertToNone,(int)None)
#else
Msg( "Error: Constant not found: RevertToNone\n");
cnt++;
#endif

#ifdef RevertToPointerRoot
	CompareConstant(RevertToPointerRoot,(int)PointerRoot)
#else
Msg( "Error: Constant not found: RevertToPointerRoot\n");
cnt++;
#endif

#ifdef RevertToParent
	CompareConstant(RevertToParent,2)
#else
Msg( "Error: Constant not found: RevertToParent\n");
cnt++;
#endif

#ifdef Success
	CompareConstant(Success,0)
#else
Msg( "Error: Constant not found: Success\n");
cnt++;
#endif

#ifdef BadRequest
	CompareConstant(BadRequest,1)
#else
Msg( "Error: Constant not found: BadRequest\n");
cnt++;
#endif

#ifdef BadValue
	CompareConstant(BadValue,2)
#else
Msg( "Error: Constant not found: BadValue\n");
cnt++;
#endif

#ifdef BadWindow
	CompareConstant(BadWindow,3)
#else
Msg( "Error: Constant not found: BadWindow\n");
cnt++;
#endif

#ifdef BadPixmap
	CompareConstant(BadPixmap,4)
#else
Msg( "Error: Constant not found: BadPixmap\n");
cnt++;
#endif

#ifdef BadAtom
	CompareConstant(BadAtom,5)
#else
Msg( "Error: Constant not found: BadAtom\n");
cnt++;
#endif

#ifdef BadCursor
	CompareConstant(BadCursor,6)
#else
Msg( "Error: Constant not found: BadCursor\n");
cnt++;
#endif

#ifdef BadFont
	CompareConstant(BadFont,7)
#else
Msg( "Error: Constant not found: BadFont\n");
cnt++;
#endif

#ifdef BadMatch
	CompareConstant(BadMatch,8)
#else
Msg( "Error: Constant not found: BadMatch\n");
cnt++;
#endif

#ifdef BadDrawable
	CompareConstant(BadDrawable,9)
#else
Msg( "Error: Constant not found: BadDrawable\n");
cnt++;
#endif

#ifdef BadAccess
	CompareConstant(BadAccess,10)
#else
Msg( "Error: Constant not found: BadAccess\n");
cnt++;
#endif

#ifdef BadAlloc
	CompareConstant(BadAlloc,11)
#else
Msg( "Error: Constant not found: BadAlloc\n");
cnt++;
#endif

#ifdef BadColor
	CompareConstant(BadColor,12)
#else
Msg( "Error: Constant not found: BadColor\n");
cnt++;
#endif

#ifdef BadGC
	CompareConstant(BadGC,13)
#else
Msg( "Error: Constant not found: BadGC\n");
cnt++;
#endif

#ifdef BadIDChoice
	CompareConstant(BadIDChoice,14)
#else
Msg( "Error: Constant not found: BadIDChoice\n");
cnt++;
#endif

#ifdef BadName
	CompareConstant(BadName,15)
#else
Msg( "Error: Constant not found: BadName\n");
cnt++;
#endif

#ifdef BadLength
	CompareConstant(BadLength,16)
#else
Msg( "Error: Constant not found: BadLength\n");
cnt++;
#endif

#ifdef BadImplementation
	CompareConstant(BadImplementation,17)
#else
Msg( "Error: Constant not found: BadImplementation\n");
cnt++;
#endif

#ifdef FirstExtensionError
	CompareConstant(FirstExtensionError,128)
#else
Msg( "Error: Constant not found: FirstExtensionError\n");
cnt++;
#endif

#ifdef LastExtensionError
	CompareConstant(LastExtensionError,255)
#else
Msg( "Error: Constant not found: LastExtensionError\n");
cnt++;
#endif

#ifdef InputOutput
	CompareConstant(InputOutput,1)
#else
Msg( "Error: Constant not found: InputOutput\n");
cnt++;
#endif

#ifdef InputOnly
	CompareConstant(InputOnly,2)
#else
Msg( "Error: Constant not found: InputOnly\n");
cnt++;
#endif

#ifdef CWX
	CompareConstant(CWX,(1<<0))
#else
Msg( "Error: Constant not found: CWX\n");
cnt++;
#endif

#ifdef CWBackPixmap
	CompareConstant(CWBackPixmap,(1L<<0))
#else
Msg( "Error: Constant not found: CWBackPixmap\n");
cnt++;
#endif

#ifdef CWBackPixel
	CompareConstant(CWBackPixel,(1L<<1))
#else
Msg( "Error: Constant not found: CWBackPixel\n");
cnt++;
#endif

#ifdef CWBorderPixmap
	CompareConstant(CWBorderPixmap,(1L<<2))
#else
Msg( "Error: Constant not found: CWBorderPixmap\n");
cnt++;
#endif

#ifdef CWBorderPixel
	CompareConstant(CWBorderPixel,(1L<<3))
#else
Msg( "Error: Constant not found: CWBorderPixel\n");
cnt++;
#endif

#ifdef CWBitGravity
	CompareConstant(CWBitGravity,(1L<<4))
#else
Msg( "Error: Constant not found: CWBitGravity\n");
cnt++;
#endif

#ifdef CWWinGravity
	CompareConstant(CWWinGravity,(1L<<5))
#else
Msg( "Error: Constant not found: CWWinGravity\n");
cnt++;
#endif

#ifdef CWBackingStore
	CompareConstant(CWBackingStore,(1L<<6))
#else
Msg( "Error: Constant not found: CWBackingStore\n");
cnt++;
#endif

#ifdef CWBackingPlanes
	CompareConstant(CWBackingPlanes,(1L<<7))
#else
Msg( "Error: Constant not found: CWBackingPlanes\n");
cnt++;
#endif

#ifdef CWBackingPixel
	CompareConstant(CWBackingPixel,(1L<<8))
#else
Msg( "Error: Constant not found: CWBackingPixel\n");
cnt++;
#endif

#ifdef CWOverrideRedirect
	CompareConstant(CWOverrideRedirect,(1L<<9))
#else
Msg( "Error: Constant not found: CWOverrideRedirect\n");
cnt++;
#endif

#ifdef CWSaveUnder
	CompareConstant(CWSaveUnder,(1L<<10))
#else
Msg( "Error: Constant not found: CWSaveUnder\n");
cnt++;
#endif

#ifdef CWEventMask
	CompareConstant(CWEventMask,(1L<<11))
#else
Msg( "Error: Constant not found: CWEventMask\n");
cnt++;
#endif

#ifdef CWDontPropagate
	CompareConstant(CWDontPropagate,(1L<<12))
#else
Msg( "Error: Constant not found: CWDontPropagate\n");
cnt++;
#endif

#ifdef CWColormap
	CompareConstant(CWColormap,(1L<<13))
#else
Msg( "Error: Constant not found: CWColormap\n");
cnt++;
#endif

#ifdef CWCursor
	CompareConstant(CWCursor,(1L<<14))
#else
Msg( "Error: Constant not found: CWCursor\n");
cnt++;
#endif

#ifdef CWY
	CompareConstant(CWY,(1<<1))
#else
Msg( "Error: Constant not found: CWY\n");
cnt++;
#endif

#ifdef CWWidth
	CompareConstant(CWWidth,(1<<2))
#else
Msg( "Error: Constant not found: CWWidth\n");
cnt++;
#endif

#ifdef CWHeight
	CompareConstant(CWHeight,(1<<3))
#else
Msg( "Error: Constant not found: CWHeight\n");
cnt++;
#endif

#ifdef CWBorderWidth
	CompareConstant(CWBorderWidth,(1<<4))
#else
Msg( "Error: Constant not found: CWBorderWidth\n");
cnt++;
#endif

#ifdef CWSibling
	CompareConstant(CWSibling,(1<<5))
#else
Msg( "Error: Constant not found: CWSibling\n");
cnt++;
#endif

#ifdef CWStackMode
	CompareConstant(CWStackMode,(1<<6))
#else
Msg( "Error: Constant not found: CWStackMode\n");
cnt++;
#endif

#ifdef ForgetGravity
	CompareConstant(ForgetGravity,0)
#else
Msg( "Error: Constant not found: ForgetGravity\n");
cnt++;
#endif

#ifdef NorthWestGravity
	CompareConstant(NorthWestGravity,1)
#else
Msg( "Error: Constant not found: NorthWestGravity\n");
cnt++;
#endif

#ifdef NorthGravity
	CompareConstant(NorthGravity,2)
#else
Msg( "Error: Constant not found: NorthGravity\n");
cnt++;
#endif

#ifdef NorthEastGravity
	CompareConstant(NorthEastGravity,3)
#else
Msg( "Error: Constant not found: NorthEastGravity\n");
cnt++;
#endif

#ifdef WestGravity
	CompareConstant(WestGravity,4)
#else
Msg( "Error: Constant not found: WestGravity\n");
cnt++;
#endif

#ifdef CenterGravity
	CompareConstant(CenterGravity,5)
#else
Msg( "Error: Constant not found: CenterGravity\n");
cnt++;
#endif

#ifdef EastGravity
	CompareConstant(EastGravity,6)
#else
Msg( "Error: Constant not found: EastGravity\n");
cnt++;
#endif

#ifdef SouthWestGravity
	CompareConstant(SouthWestGravity,7)
#else
Msg( "Error: Constant not found: SouthWestGravity\n");
cnt++;
#endif

#ifdef SouthGravity
	CompareConstant(SouthGravity,8)
#else
Msg( "Error: Constant not found: SouthGravity\n");
cnt++;
#endif

#ifdef SouthEastGravity
	CompareConstant(SouthEastGravity,9)
#else
Msg( "Error: Constant not found: SouthEastGravity\n");
cnt++;
#endif

#ifdef StaticGravity
	CompareConstant(StaticGravity,10)
#else
Msg( "Error: Constant not found: StaticGravity\n");
cnt++;
#endif

#ifdef UnmapGravity
	CompareConstant(UnmapGravity,0)
#else
Msg( "Error: Constant not found: UnmapGravity\n");
cnt++;
#endif

#ifdef NotUseful
	CompareConstant(NotUseful,0)
#else
Msg( "Error: Constant not found: NotUseful\n");
cnt++;
#endif

#ifdef WhenMapped
	CompareConstant(WhenMapped,1)
#else
Msg( "Error: Constant not found: WhenMapped\n");
cnt++;
#endif

#ifdef Always
	CompareConstant(Always,2)
#else
Msg( "Error: Constant not found: Always\n");
cnt++;
#endif

#ifdef IsUnmapped
	CompareConstant(IsUnmapped,0)
#else
Msg( "Error: Constant not found: IsUnmapped\n");
cnt++;
#endif

#ifdef IsUnviewable
	CompareConstant(IsUnviewable,1)
#else
Msg( "Error: Constant not found: IsUnviewable\n");
cnt++;
#endif

#ifdef IsViewable
	CompareConstant(IsViewable,2)
#else
Msg( "Error: Constant not found: IsViewable\n");
cnt++;
#endif

#ifdef SetModeInsert
	CompareConstant(SetModeInsert,0)
#else
Msg( "Error: Constant not found: SetModeInsert\n");
cnt++;
#endif

#ifdef SetModeDelete
	CompareConstant(SetModeDelete,1)
#else
Msg( "Error: Constant not found: SetModeDelete\n");
cnt++;
#endif

#ifdef DestroyAll
	CompareConstant(DestroyAll,0)
#else
Msg( "Error: Constant not found: DestroyAll\n");
cnt++;
#endif

#ifdef RetainPermanent
	CompareConstant(RetainPermanent,1)
#else
Msg( "Error: Constant not found: RetainPermanent\n");
cnt++;
#endif

#ifdef RetainTemporary
	CompareConstant(RetainTemporary,2)
#else
Msg( "Error: Constant not found: RetainTemporary\n");
cnt++;
#endif

#ifdef Above
	CompareConstant(Above,0)
#else
Msg( "Error: Constant not found: Above\n");
cnt++;
#endif

#ifdef Below
	CompareConstant(Below,1)
#else
Msg( "Error: Constant not found: Below\n");
cnt++;
#endif

#ifdef TopIf
	CompareConstant(TopIf,2)
#else
Msg( "Error: Constant not found: TopIf\n");
cnt++;
#endif

#ifdef BottomIf
	CompareConstant(BottomIf,3)
#else
Msg( "Error: Constant not found: BottomIf\n");
cnt++;
#endif

#ifdef RaiseLowest
	CompareConstant(RaiseLowest,0)
#else
Msg( "Error: Constant not found: RaiseLowest\n");
cnt++;
#endif

#ifdef LowerHighest
	CompareConstant(LowerHighest,1)
#else
Msg( "Error: Constant not found: LowerHighest\n");
cnt++;
#endif

#ifdef PropModePrepend
	CompareConstant(PropModePrepend,1)
#else
Msg( "Error: Constant not found: PropModePrepend\n");
cnt++;
#endif

#ifdef PropModeAppend
	CompareConstant(PropModeAppend,2)
#else
Msg( "Error: Constant not found: PropModeAppend\n");
cnt++;
#endif

#ifdef GXclear
	CompareConstant(GXclear,0x0)
#else
Msg( "Error: Constant not found: GXclear\n");
cnt++;
#endif

#ifdef GXand
	CompareConstant(GXand,0x1)
#else
Msg( "Error: Constant not found: GXand\n");
cnt++;
#endif

#ifdef GXandReverse
	CompareConstant(GXandReverse,0x2)
#else
Msg( "Error: Constant not found: GXandReverse\n");
cnt++;
#endif

#ifdef GXcopy
	CompareConstant(GXcopy,0x3)
#else
Msg( "Error: Constant not found: GXcopy\n");
cnt++;
#endif

#ifdef GXandInverted
	CompareConstant(GXandInverted,0x4)
#else
Msg( "Error: Constant not found: GXandInverted\n");
cnt++;
#endif

#ifdef GXnoop
	CompareConstant(GXnoop,0x5)
#else
Msg( "Error: Constant not found: GXnoop\n");
cnt++;
#endif

#ifdef GXxor
	CompareConstant(GXxor,0x6)
#else
Msg( "Error: Constant not found: GXxor\n");
cnt++;
#endif

#ifdef GXor
	CompareConstant(GXor,0x7)
#else
Msg( "Error: Constant not found: GXor\n");
cnt++;
#endif

#ifdef GXnor
	CompareConstant(GXnor,0x8)
#else
Msg( "Error: Constant not found: GXnor\n");
cnt++;
#endif

#ifdef GXequiv
	CompareConstant(GXequiv,0x9)
#else
Msg( "Error: Constant not found: GXequiv\n");
cnt++;
#endif

#ifdef GXinvert
	CompareConstant(GXinvert,0xa)
#else
Msg( "Error: Constant not found: GXinvert\n");
cnt++;
#endif

#ifdef GXorReverse
	CompareConstant(GXorReverse,0xb)
#else
Msg( "Error: Constant not found: GXorReverse\n");
cnt++;
#endif

#ifdef GXcopyInverted
	CompareConstant(GXcopyInverted,0xc)
#else
Msg( "Error: Constant not found: GXcopyInverted\n");
cnt++;
#endif

#ifdef GXorInverted
	CompareConstant(GXorInverted,0xd)
#else
Msg( "Error: Constant not found: GXorInverted\n");
cnt++;
#endif

#ifdef GXnand
	CompareConstant(GXnand,0xe)
#else
Msg( "Error: Constant not found: GXnand\n");
cnt++;
#endif

#ifdef GXset
	CompareConstant(GXset,0xf)
#else
Msg( "Error: Constant not found: GXset\n");
cnt++;
#endif

#ifdef LineSolid
	CompareConstant(LineSolid,0)
#else
Msg( "Error: Constant not found: LineSolid\n");
cnt++;
#endif

#ifdef LineOnOffDash
	CompareConstant(LineOnOffDash,1)
#else
Msg( "Error: Constant not found: LineOnOffDash\n");
cnt++;
#endif

#ifdef LineDoubleDash
	CompareConstant(LineDoubleDash,2)
#else
Msg( "Error: Constant not found: LineDoubleDash\n");
cnt++;
#endif

#ifdef CapNotLast
	CompareConstant(CapNotLast,0)
#else
Msg( "Error: Constant not found: CapNotLast\n");
cnt++;
#endif

#ifdef CapButt
	CompareConstant(CapButt,1)
#else
Msg( "Error: Constant not found: CapButt\n");
cnt++;
#endif

#ifdef CapRound
	CompareConstant(CapRound,2)
#else
Msg( "Error: Constant not found: CapRound\n");
cnt++;
#endif

#ifdef CapProjecting
	CompareConstant(CapProjecting,3)
#else
Msg( "Error: Constant not found: CapProjecting\n");
cnt++;
#endif

#ifdef JoinMiter
	CompareConstant(JoinMiter,0)
#else
Msg( "Error: Constant not found: JoinMiter\n");
cnt++;
#endif

#ifdef JoinRound
	CompareConstant(JoinRound,1)
#else
Msg( "Error: Constant not found: JoinRound\n");
cnt++;
#endif

#ifdef JoinBevel
	CompareConstant(JoinBevel,2)
#else
Msg( "Error: Constant not found: JoinBevel\n");
cnt++;
#endif

#ifdef FillSolid
	CompareConstant(FillSolid,0)
#else
Msg( "Error: Constant not found: FillSolid\n");
cnt++;
#endif

#ifdef FillTiled
	CompareConstant(FillTiled,1)
#else
Msg( "Error: Constant not found: FillTiled\n");
cnt++;
#endif

#ifdef FillStippled
	CompareConstant(FillStippled,2)
#else
Msg( "Error: Constant not found: FillStippled\n");
cnt++;
#endif

#ifdef FillOpaqueStippled
	CompareConstant(FillOpaqueStippled,3)
#else
Msg( "Error: Constant not found: FillOpaqueStippled\n");
cnt++;
#endif

#ifdef EvenOddRule
	CompareConstant(EvenOddRule,0)
#else
Msg( "Error: Constant not found: EvenOddRule\n");
cnt++;
#endif

#ifdef WindingRule
	CompareConstant(WindingRule,1)
#else
Msg( "Error: Constant not found: WindingRule\n");
cnt++;
#endif

#ifdef ClipByChildren
	CompareConstant(ClipByChildren,0)
#else
Msg( "Error: Constant not found: ClipByChildren\n");
cnt++;
#endif

#ifdef IncludeInferiors
	CompareConstant(IncludeInferiors,1)
#else
Msg( "Error: Constant not found: IncludeInferiors\n");
cnt++;
#endif

#ifdef Unsorted
	CompareConstant(Unsorted,0)
#else
Msg( "Error: Constant not found: Unsorted\n");
cnt++;
#endif

#ifdef YSorted
	CompareConstant(YSorted,1)
#else
Msg( "Error: Constant not found: YSorted\n");
cnt++;
#endif

#ifdef YXSorted
	CompareConstant(YXSorted,2)
#else
Msg( "Error: Constant not found: YXSorted\n");
cnt++;
#endif

#ifdef YXBanded
	CompareConstant(YXBanded,3)
#else
Msg( "Error: Constant not found: YXBanded\n");
cnt++;
#endif

#ifdef XYBitmap
	CompareConstant(XYBitmap,0)
#else
Msg( "Error: Constant not found: XYBitmap\n");
cnt++;
#endif

#ifdef CoordModeOrigin
	CompareConstant(CoordModeOrigin,0)
#else
Msg( "Error: Constant not found: CoordModeOrigin\n");
cnt++;
#endif

#ifdef CoordModePrevious
	CompareConstant(CoordModePrevious,1)
#else
Msg( "Error: Constant not found: CoordModePrevious\n");
cnt++;
#endif

#ifdef Complex
	CompareConstant(Complex,0)
#else
Msg( "Error: Constant not found: Complex\n");
cnt++;
#endif

#ifdef Nonconvex
	CompareConstant(Nonconvex,1)
#else
Msg( "Error: Constant not found: Nonconvex\n");
cnt++;
#endif

#ifdef Convex
	CompareConstant(Convex,2)
#else
Msg( "Error: Constant not found: Convex\n");
cnt++;
#endif

#ifdef ArcChord
	CompareConstant(ArcChord,0)
#else
Msg( "Error: Constant not found: ArcChord\n");
cnt++;
#endif

#ifdef ArcPieSlice
	CompareConstant(ArcPieSlice,1)
#else
Msg( "Error: Constant not found: ArcPieSlice\n");
cnt++;
#endif

#ifdef GCFunction
	CompareConstant(GCFunction,(1L<<0))
#else
Msg( "Error: Constant not found: GCFunction\n");
cnt++;
#endif

#ifdef GCPlaneMask
	CompareConstant(GCPlaneMask,(1L<<1))
#else
Msg( "Error: Constant not found: GCPlaneMask\n");
cnt++;
#endif

#ifdef GCForeground
	CompareConstant(GCForeground,(1L<<2))
#else
Msg( "Error: Constant not found: GCForeground\n");
cnt++;
#endif

#ifdef GCBackground
	CompareConstant(GCBackground,(1L<<3))
#else
Msg( "Error: Constant not found: GCBackground\n");
cnt++;
#endif

#ifdef GCLineWidth
	CompareConstant(GCLineWidth,(1L<<4))
#else
Msg( "Error: Constant not found: GCLineWidth\n");
cnt++;
#endif

#ifdef GCLineStyle
	CompareConstant(GCLineStyle,(1L<<5))
#else
Msg( "Error: Constant not found: GCLineStyle\n");
cnt++;
#endif

#ifdef GCCapStyle
	CompareConstant(GCCapStyle,(1L<<6))
#else
Msg( "Error: Constant not found: GCCapStyle\n");
cnt++;
#endif

#ifdef GCJoinStyle
	CompareConstant(GCJoinStyle,(1L<<7))
#else
Msg( "Error: Constant not found: GCJoinStyle\n");
cnt++;
#endif

#ifdef GCFillStyle
	CompareConstant(GCFillStyle,(1L<<8))
#else
Msg( "Error: Constant not found: GCFillStyle\n");
cnt++;
#endif

#ifdef GCFillRule
	CompareConstant(GCFillRule,(1L<<9))
#else
Msg( "Error: Constant not found: GCFillRule\n");
cnt++;
#endif

#ifdef GCTile
	CompareConstant(GCTile,(1L<<10))
#else
Msg( "Error: Constant not found: GCTile\n");
cnt++;
#endif

#ifdef GCStipple
	CompareConstant(GCStipple,(1L<<11))
#else
Msg( "Error: Constant not found: GCStipple\n");
cnt++;
#endif

#ifdef GCTileStipXOrigin
	CompareConstant(GCTileStipXOrigin,(1L<<12))
#else
Msg( "Error: Constant not found: GCTileStipXOrigin\n");
cnt++;
#endif

#ifdef GCTileStipYOrigin
	CompareConstant(GCTileStipYOrigin,(1L<<13))
#else
Msg( "Error: Constant not found: GCTileStipYOrigin\n");
cnt++;
#endif

#ifdef GCFont
	CompareConstant(GCFont,(1L<<14))
#else
Msg( "Error: Constant not found: GCFont\n");
cnt++;
#endif

#ifdef GCSubwindowMode
	CompareConstant(GCSubwindowMode,(1L<<15))
#else
Msg( "Error: Constant not found: GCSubwindowMode\n");
cnt++;
#endif

#ifdef GCGraphicsExposures
	CompareConstant(GCGraphicsExposures,(1L<<16))
#else
Msg( "Error: Constant not found: GCGraphicsExposures\n");
cnt++;
#endif

#ifdef GCClipXOrigin
	CompareConstant(GCClipXOrigin,(1L<<17))
#else
Msg( "Error: Constant not found: GCClipXOrigin\n");
cnt++;
#endif

#ifdef GCClipYOrigin
	CompareConstant(GCClipYOrigin,(1L<<18))
#else
Msg( "Error: Constant not found: GCClipYOrigin\n");
cnt++;
#endif

#ifdef GCClipMask
	CompareConstant(GCClipMask,(1L<<19))
#else
Msg( "Error: Constant not found: GCClipMask\n");
cnt++;
#endif

#ifdef GCDashOffset
	CompareConstant(GCDashOffset,(1L<<20))
#else
Msg( "Error: Constant not found: GCDashOffset\n");
cnt++;
#endif

#ifdef GCDashList
	CompareConstant(GCDashList,(1L<<21))
#else
Msg( "Error: Constant not found: GCDashList\n");
cnt++;
#endif

#ifdef GCArcMode
	CompareConstant(GCArcMode,(1L<<22))
#else
Msg( "Error: Constant not found: GCArcMode\n");
cnt++;
#endif

#ifdef GCLastBit
	CompareConstant(GCLastBit,22)
#else
Msg( "Error: Constant not found: GCLastBit\n");
cnt++;
#endif

#ifdef FontChange
	CompareConstant(FontChange,255)
#else
Msg( "Error: Constant not found: FontChange\n");
cnt++;
#endif

#ifdef FontLeftToRight
	CompareConstant(FontLeftToRight,0)
#else
Msg( "Error: Constant not found: FontLeftToRight\n");
cnt++;
#endif

#ifdef FontRightToLeft
	CompareConstant(FontRightToLeft,1)
#else
Msg( "Error: Constant not found: FontRightToLeft\n");
cnt++;
#endif

#ifdef XYPixmap
	CompareConstant(XYPixmap,1)
#else
Msg( "Error: Constant not found: XYPixmap\n");
cnt++;
#endif

#ifdef ZPixmap
	CompareConstant(ZPixmap,2)
#else
Msg( "Error: Constant not found: ZPixmap\n");
cnt++;
#endif

#ifdef AllocNone
	CompareConstant(AllocNone,0)
#else
Msg( "Error: Constant not found: AllocNone\n");
cnt++;
#endif

#ifdef AllocAll
	CompareConstant(AllocAll,1)
#else
Msg( "Error: Constant not found: AllocAll\n");
cnt++;
#endif

#ifdef DoRed
	CompareConstant(DoRed,(1<<0))
#else
Msg( "Error: Constant not found: DoRed\n");
cnt++;
#endif

#ifdef DoGreen
	CompareConstant(DoGreen,(1<<1))
#else
Msg( "Error: Constant not found: DoGreen\n");
cnt++;
#endif

#ifdef DoBlue
	CompareConstant(DoBlue,(1<<2))
#else
Msg( "Error: Constant not found: DoBlue\n");
cnt++;
#endif

#ifdef CursorShape
	CompareConstant(CursorShape,0)
#else
Msg( "Error: Constant not found: CursorShape\n");
cnt++;
#endif

#ifdef TileShape
	CompareConstant(TileShape,1)
#else
Msg( "Error: Constant not found: TileShape\n");
cnt++;
#endif

#ifdef StippleShape
	CompareConstant(StippleShape,2)
#else
Msg( "Error: Constant not found: StippleShape\n");
cnt++;
#endif

#ifdef AutoRepeatModeOff
	CompareConstant(AutoRepeatModeOff,0)
#else
Msg( "Error: Constant not found: AutoRepeatModeOff\n");
cnt++;
#endif

#ifdef AutoRepeatModeOn
	CompareConstant(AutoRepeatModeOn,1)
#else
Msg( "Error: Constant not found: AutoRepeatModeOn\n");
cnt++;
#endif

#ifdef AutoRepeatModeDefault
	CompareConstant(AutoRepeatModeDefault,2)
#else
Msg( "Error: Constant not found: AutoRepeatModeDefault\n");
cnt++;
#endif

#ifdef LedModeOff
	CompareConstant(LedModeOff,0)
#else
Msg( "Error: Constant not found: LedModeOff\n");
cnt++;
#endif

#ifdef LedModeOn
	CompareConstant(LedModeOn,1)
#else
Msg( "Error: Constant not found: LedModeOn\n");
cnt++;
#endif

#ifdef KBKeyClickPercent
	CompareConstant(KBKeyClickPercent,(1L<<0))
#else
Msg( "Error: Constant not found: KBKeyClickPercent\n");
cnt++;
#endif

#ifdef KBBellPercent
	CompareConstant(KBBellPercent,(1L<<1))
#else
Msg( "Error: Constant not found: KBBellPercent\n");
cnt++;
#endif

#ifdef KBBellPitch
	CompareConstant(KBBellPitch,(1L<<2))
#else
Msg( "Error: Constant not found: KBBellPitch\n");
cnt++;
#endif

#ifdef KBBellDuration
	CompareConstant(KBBellDuration,(1L<<3))
#else
Msg( "Error: Constant not found: KBBellDuration\n");
cnt++;
#endif

#ifdef KBLed
	CompareConstant(KBLed,(1L<<4))
#else
Msg( "Error: Constant not found: KBLed\n");
cnt++;
#endif

#ifdef KBLedMode
	CompareConstant(KBLedMode,(1L<<5))
#else
Msg( "Error: Constant not found: KBLedMode\n");
cnt++;
#endif

#ifdef KBKey
	CompareConstant(KBKey,(1L<<6))
#else
Msg( "Error: Constant not found: KBKey\n");
cnt++;
#endif

#ifdef KBAutoRepeatMode
	CompareConstant(KBAutoRepeatMode,(1L<<7))
#else
Msg( "Error: Constant not found: KBAutoRepeatMode\n");
cnt++;
#endif

#ifdef MappingSuccess
	CompareConstant(MappingSuccess,0)
#else
Msg( "Error: Constant not found: MappingSuccess\n");
cnt++;
#endif

#ifdef MappingBusy
	CompareConstant(MappingBusy,1)
#else
Msg( "Error: Constant not found: MappingBusy\n");
cnt++;
#endif

#ifdef MappingFailed
	CompareConstant(MappingFailed,2)
#else
Msg( "Error: Constant not found: MappingFailed\n");
cnt++;
#endif

#ifdef MappingModifier
	CompareConstant(MappingModifier,0)
#else
Msg( "Error: Constant not found: MappingModifier\n");
cnt++;
#endif

#ifdef MappingKeyboard
	CompareConstant(MappingKeyboard,1)
#else
Msg( "Error: Constant not found: MappingKeyboard\n");
cnt++;
#endif

#ifdef MappingPointer
	CompareConstant(MappingPointer,2)
#else
Msg( "Error: Constant not found: MappingPointer\n");
cnt++;
#endif

#ifdef DontPreferBlanking
	CompareConstant(DontPreferBlanking,0)
#else
Msg( "Error: Constant not found: DontPreferBlanking\n");
cnt++;
#endif

#ifdef PreferBlanking
	CompareConstant(PreferBlanking,1)
#else
Msg( "Error: Constant not found: PreferBlanking\n");
cnt++;
#endif

#ifdef DefaultBlanking
	CompareConstant(DefaultBlanking,2)
#else
Msg( "Error: Constant not found: DefaultBlanking\n");
cnt++;
#endif

#ifdef DisableScreenSaver
	CompareConstant(DisableScreenSaver,0)
#else
Msg( "Error: Constant not found: DisableScreenSaver\n");
cnt++;
#endif

#ifdef DisableScreenInterval
	CompareConstant(DisableScreenInterval,0)
#else
Msg( "Error: Constant not found: DisableScreenInterval\n");
cnt++;
#endif

#ifdef DontAllowExposures
	CompareConstant(DontAllowExposures,0)
#else
Msg( "Error: Constant not found: DontAllowExposures\n");
cnt++;
#endif

#ifdef AllowExposures
	CompareConstant(AllowExposures,1)
#else
Msg( "Error: Constant not found: AllowExposures\n");
cnt++;
#endif

#ifdef DefaultExposures
	CompareConstant(DefaultExposures,2)
#else
Msg( "Error: Constant not found: DefaultExposures\n");
cnt++;
#endif

#ifdef ScreenSaverReset
	CompareConstant(ScreenSaverReset,0)
#else
Msg( "Error: Constant not found: ScreenSaverReset\n");
cnt++;
#endif

#ifdef ScreenSaverActive
	CompareConstant(ScreenSaverActive,1)
#else
Msg( "Error: Constant not found: ScreenSaverActive\n");
cnt++;
#endif

#ifdef HostInsert
	CompareConstant(HostInsert,0)
#else
Msg( "Error: Constant not found: HostInsert\n");
cnt++;
#endif

#ifdef HostDelete
	CompareConstant(HostDelete,1)
#else
Msg( "Error: Constant not found: HostDelete\n");
cnt++;
#endif

#ifdef EnableAccess
	CompareConstant(EnableAccess,1)
#else
Msg( "Error: Constant not found: EnableAccess\n");
cnt++;
#endif

#ifdef DisableAccess
	CompareConstant(DisableAccess,0)
#else
Msg( "Error: Constant not found: DisableAccess\n");
cnt++;
#endif

#ifdef StaticGray
	CompareConstant(StaticGray,0)
#else
Msg( "Error: Constant not found: StaticGray\n");
cnt++;
#endif

#ifdef GrayScale
	CompareConstant(GrayScale,1)
#else
Msg( "Error: Constant not found: GrayScale\n");
cnt++;
#endif

#ifdef StaticColor
	CompareConstant(StaticColor,2)
#else
Msg( "Error: Constant not found: StaticColor\n");
cnt++;
#endif

#ifdef PseudoColor
	CompareConstant(PseudoColor,3)
#else
Msg( "Error: Constant not found: PseudoColor\n");
cnt++;
#endif

#ifdef TrueColor
	CompareConstant(TrueColor,4)
#else
Msg( "Error: Constant not found: TrueColor\n");
cnt++;
#endif

#ifdef DirectColor
	CompareConstant(DirectColor,5)
#else
Msg( "Error: Constant not found: DirectColor\n");
cnt++;
#endif

#ifdef LSBFirst
	CompareConstant(LSBFirst,0)
#else
Msg( "Error: Constant not found: LSBFirst\n");
cnt++;
#endif

#ifdef MSBFirst
	CompareConstant(MSBFirst,1)
#else
Msg( "Error: Constant not found: MSBFirst\n");
cnt++;
#endif

#ifdef __i386__
CheckTypeSize(XID,4, 8171, 2)
#elif __ia64__
CheckTypeSize(XID,8, 8171, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8171,0);
#endif

#ifdef __i386__
CheckTypeSize(Atom,4, 8173, 2)
#elif __ia64__
CheckTypeSize(Atom,8, 8173, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8173,0);
#endif

#ifdef __i386__
CheckTypeSize(VisualID,4, 8174, 2)
#elif __ia64__
CheckTypeSize(VisualID,8, 8174, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8174,0);
#endif

#ifdef __i386__
CheckTypeSize(Time,4, 8175, 2)
#elif __ia64__
CheckTypeSize(Time,8, 8175, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8175,0);
#endif

#ifdef __i386__
CheckTypeSize(Window,4, 8176, 2)
#elif __ia64__
CheckTypeSize(Window,8, 8176, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8176,0);
#endif

#ifdef __i386__
CheckTypeSize(Font,4, 8177, 2)
#elif __ia64__
CheckTypeSize(Font,8, 8177, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8177,0);
#endif

#ifdef __i386__
CheckTypeSize(Pixmap,4, 8178, 2)
#elif __ia64__
CheckTypeSize(Pixmap,8, 8178, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8178,0);
#endif

#ifdef __i386__
CheckTypeSize(KeyCode,1, 8179, 2)
#elif __ia64__
CheckTypeSize(KeyCode,1, 8179, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8179,0);
#endif

#ifdef __i386__
CheckTypeSize(Drawable,4, 8727, 2)
#elif __ia64__
CheckTypeSize(Drawable,8, 8727, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8727,0);
#endif

#ifdef __i386__
CheckTypeSize(Cursor,4, 8728, 2)
#elif __ia64__
CheckTypeSize(Cursor,8, 8728, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8728,0);
#endif

#ifdef __i386__
CheckTypeSize(Colormap,4, 8729, 2)
#elif __ia64__
CheckTypeSize(Colormap,8, 8729, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8729,0);
#endif

#ifdef __i386__
CheckTypeSize(GContext,4, 8730, 2)
#elif __ia64__
CheckTypeSize(GContext,8, 8730, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8730,0);
#endif

#ifdef __i386__
CheckTypeSize(KeySym,4, 8731, 2)
#elif __ia64__
CheckTypeSize(KeySym,8, 8731, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8731,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in X11/X.h\n",cnt);
return cnt;
#endif

}
