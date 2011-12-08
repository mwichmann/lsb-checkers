/*
 * Test of QtGui/qstyleoption
 */
#include "hdrchk.h"
#include "QtGui/qstyleoption.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qstyleoption();
#else
int QtGui_qstyleoption();
#endif
}


#ifdef TET_TEST
void QtGui_qstyleoption()
{
#else
int QtGui_qstyleoption()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qstyleoption types\n");
#define TYPE QStyleOption
#undef TYPE

#define TYPE QStyleOptionFocusRect
#undef TYPE

#define TYPE QStyleOptionFrame
#undef TYPE

#define TYPE QStyleOptionFrameV2
#undef TYPE

#define TYPE _Z466QFlagsIN19QStyleOptionFrameV212FrameFeatureEE
#undef TYPE

#define TYPE QStyleOptionTabWidgetFrame
#undef TYPE

#define TYPE QStyleOptionTabBarBase
#undef TYPE

#define TYPE QStyleOptionHeader
#undef TYPE

#define TYPE QStyleOptionButton
#undef TYPE

#define TYPE _Z466QFlagsIN18QStyleOptionButton13ButtonFeatureEE
#undef TYPE

#define TYPE QStyleOptionTab
#undef TYPE

#define TYPE _Z426QFlagsIN15QStyleOptionTab12CornerWidgetEE
#undef TYPE

#define TYPE QStyleOptionTabV2
#undef TYPE

#define TYPE QStyleOptionToolBar
#undef TYPE

#define TYPE _Z486QFlagsIN19QStyleOptionToolBar14ToolBarFeatureEE
#undef TYPE

#define TYPE QStyleOptionProgressBar
#undef TYPE

#define TYPE QStyleOptionProgressBarV2
#undef TYPE

#define TYPE QStyleOptionMenuItem
#undef TYPE

#define TYPE QStyleOptionQ3ListViewItem
#undef TYPE

#define TYPE _Z626QFlagsIN26QStyleOptionQ3ListViewItem21Q3ListViewItemFeatureEE
#undef TYPE

#define TYPE QStyleOptionQ3DockWindow
#undef TYPE

#define TYPE QStyleOptionDockWidget
#undef TYPE

#define TYPE QStyleOptionViewItem
#undef TYPE

#define TYPE QStyleOptionToolBox
#undef TYPE

#define TYPE QStyleOptionRubberBand
#undef TYPE

#define TYPE QStyleOptionComplex
#undef TYPE

#define TYPE QStyleOptionSlider
#undef TYPE

#define TYPE QStyleOptionSpinBox
#undef TYPE

#define TYPE QStyleOptionQ3ListView
#undef TYPE

#define TYPE QStyleOptionToolButton
#undef TYPE

#define TYPE _Z546QFlagsIN22QStyleOptionToolButton17ToolButtonFeatureEE
#undef TYPE

#define TYPE QStyleOptionComboBox
#undef TYPE

#define TYPE QStyleOptionTitleBar
#undef TYPE

#define TYPE QStyleOptionGroupBox
#undef TYPE

#define TYPE QStyleHintReturn
#undef TYPE

#define TYPE QStyleHintReturnMask
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qstyleoption types\n\n",pcnt,cnt);
return cnt;
#endif

}
