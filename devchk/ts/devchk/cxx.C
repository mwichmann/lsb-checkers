/*
 * Test of intrinsic types
 */
#include <fstream>
#include <ios>
#include <istream>
#include <iterator>
#include <limits>
#include <locale>
#include <numeric>
#include <stdexcept>
#include <string>
#include <sstream>
#include <valarray>
#include <vector>
#include <backward/strstream>
#include <ext/stdio_filebuf.h>
#include <cxxabi.h>
#include "hdrchk.h"



extern "C" {
#ifdef TET_TEST
void cxx();
#else
int cxx();
#endif
}

#ifdef TET_TEST
void cxx()
{
#else
int cxx()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
#endif

printf("Checking C++ types\n");
#if 0
#define TYPE QBoxLayout
CheckTypeSize(TYPE,,16285,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16285,0);
#endif

#if 0
#define TYPE QClipboard
CheckTypeSize(TYPE,,16388,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16388,0);
#endif

#if 0
#define TYPE QColorDrag
CheckTypeSize(TYPE,,16329,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16329,0);
#endif

#if 0
#define TYPE QDataTable
CheckTypeSize(TYPE,,16400,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16400,0);
#endif

#if 0
#define TYPE QDomEntity
CheckTypeSize(TYPE,,16363,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16363,0);
#endif

#if 0
#define TYPE QDropEvent
CheckTypeSize(TYPE,,16403,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16403,0);
#endif

#if 0
#define TYPE QEventLoop
CheckTypeSize(TYPE,,16415,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16415,0);
#endif

#if 0
#define TYPE QHGroupBox
CheckTypeSize(TYPE,,16314,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16314,0);
#endif

#if 0
#define TYPE QHideEvent
CheckTypeSize(TYPE,,16428,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16428,0);
#endif

#if 0
#define TYPE QImageDrag
CheckTypeSize(TYPE,,16270,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16270,0);
#endif

#if 0
#define TYPE QLCDNumber
CheckTypeSize(TYPE,,16281,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16281,0);
#endif

#if 0
#define TYPE QMoveEvent
CheckTypeSize(TYPE,,16538,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16538,0);
#endif

#if 0
#define TYPE QPopupMenu
CheckTypeSize(TYPE,,16269,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16269,0);
#endif

#if 0
#define TYPE QScrollBar
CheckTypeSize(TYPE,,16341,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16341,0);
#endif

#if 0
#define TYPE QSemaphore
CheckTypeSize(TYPE,,16384,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16384,0);
#endif

#if 0
#define TYPE QSemiModal
CheckTypeSize(TYPE,,16308,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16308,0);
#endif

#if 0
#define TYPE QShowEvent
CheckTypeSize(TYPE,,16511,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16511,0);
#endif

#if 0
#define TYPE QSignalVec
CheckTypeSize(TYPE,,16461,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16461,0);
#endif

#if 0
#define TYPE QSjisCodec
CheckTypeSize(TYPE,,16411,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16411,0);
#endif

#if 0
#define TYPE QSqlCursor
CheckTypeSize(TYPE,,16528,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16528,0);
#endif

#if 0
#define TYPE QSqlDriver
CheckTypeSize(TYPE,,16296,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16296,0);
#endif

#if 0
#define TYPE QSqlRecord
CheckTypeSize(TYPE,,16382,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16382,0);
#endif

#if 0
#define TYPE QSqlResult
CheckTypeSize(TYPE,,16277,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16277,0);
#endif

#if 0
#define TYPE QStatusBar
CheckTypeSize(TYPE,,16405,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16405,0);
#endif

#if 0
#define TYPE QTabDialog
CheckTypeSize(TYPE,,16505,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16505,0);
#endif

#if 0
#define TYPE QTabWidget
CheckTypeSize(TYPE,,16294,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16294,0);
#endif

#if 0
#define TYPE QTableItem
CheckTypeSize(TYPE,,16297,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16297,0);
#endif

#if 0
#define TYPE QTextCodec
CheckTypeSize(TYPE,,16475,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16475,0);
#endif

#if 0
#define TYPE QUtf8Codec
CheckTypeSize(TYPE,,16246,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16246,0);
#endif

#if 0
#define TYPE QVGroupBox
CheckTypeSize(TYPE,,16543,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16543,0);
#endif

#if 0
#define TYPE QValidator
CheckTypeSize(TYPE,,16462,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16462,0);
#endif

#if 0
#define TYPE QWhatsThis
CheckTypeSize(TYPE,,16354,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16354,0);
#endif

#if 0
#define TYPE QWorkspace
CheckTypeSize(TYPE,,16504,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16504,0);
#endif

#if 0
#define TYPE QXmlReader
CheckTypeSize(TYPE,,16362,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16362,0);
#endif

#if 0
#define TYPE QCanvasItem
CheckTypeSize(TYPE,,16255,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16255,0);
#endif

#if 0
#define TYPE QCanvasLine
CheckTypeSize(TYPE,,16432,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16432,0);
#endif

#if 0
#define TYPE QCanvasText
CheckTypeSize(TYPE,,16497,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16497,0);
#endif

#if 0
#define TYPE QCanvasView
CheckTypeSize(TYPE,,16390,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16390,0);
#endif

#if 0
#define TYPE QChildEvent
CheckTypeSize(TYPE,,16459,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16459,0);
#endif

#if 0
#define TYPE QCloseEvent
CheckTypeSize(TYPE,,16544,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16544,0);
#endif

#if 0
#define TYPE QDataSource
CheckTypeSize(TYPE,,16254,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16254,0);
#endif

#if 0
#define TYPE QDataStream
CheckTypeSize(TYPE,,16520,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16520,0);
#endif

#if 0
#define TYPE QDockWindow
CheckTypeSize(TYPE,,16445,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16445,0);
#endif

#if 0
#define TYPE QDomComment
CheckTypeSize(TYPE,,16419,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16419,0);
#endif

#if 0
#define TYPE QDomElement
CheckTypeSize(TYPE,,16295,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16295,0);
#endif

#if 0
#define TYPE QDragObject
CheckTypeSize(TYPE,,16507,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16507,0);
#endif

#if 0
#define TYPE QEucJpCodec
CheckTypeSize(TYPE,,16447,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16447,0);
#endif

#if 0
#define TYPE QEucKrCodec
CheckTypeSize(TYPE,,16346,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16346,0);
#endif

#if 0
#define TYPE QFileDialog
CheckTypeSize(TYPE,,16327,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16327,0);
#endif

#if 0
#define TYPE QFocusEvent
CheckTypeSize(TYPE,,16453,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16453,0);
#endif

#if 0
#define TYPE QFontDialog
CheckTypeSize(TYPE,,16441,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16441,0);
#endif

#if 0
#define TYPE QGridLayout
CheckTypeSize(TYPE,,16463,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16463,0);
#endif

#if 0
#define TYPE QHBoxLayout
CheckTypeSize(TYPE,,16360,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16360,0);
#endif

#if 0
#define TYPE QHttpHeader
CheckTypeSize(TYPE,,16510,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16510,0);
#endif

#if 0
#define TYPE QLayoutItem
CheckTypeSize(TYPE,,16537,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16537,0);
#endif

#if 0
#define TYPE QMainWindow
CheckTypeSize(TYPE,,16404,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16404,0);
#endif

#if 0
#define TYPE QMessageBox
CheckTypeSize(TYPE,,16412,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16412,0);
#endif

#if 0
#define TYPE QMetaObject
CheckTypeSize(TYPE,,16364,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16364,0);
#endif

#if 0
#define TYPE QMimeSource
CheckTypeSize(TYPE,,16470,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16470,0);
#endif

#if 0
#define TYPE QMouseEvent
CheckTypeSize(TYPE,,16454,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16454,0);
#endif

#if 0
#define TYPE QObjectList
CheckTypeSize(TYPE,,16418,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16418,0);
#endif

#if 0
#define TYPE QPaintEvent
CheckTypeSize(TYPE,,16516,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16516,0);
#endif

#if 0
#define TYPE QPointArray
CheckTypeSize(TYPE,,16357,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16357,0);
#endif

#if 0
#define TYPE QPushButton
CheckTypeSize(TYPE,,16522,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16522,0);
#endif

#if 0
#define TYPE QScrollView
CheckTypeSize(TYPE,,16258,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16258,0);
#endif

#if 0
#define TYPE QSpacerItem
CheckTypeSize(TYPE,,16476,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16476,0);
#endif

#if 0
#define TYPE QSpinWidget
CheckTypeSize(TYPE,,16458,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16458,0);
#endif

#if 0
#define TYPE QStoredDrag
CheckTypeSize(TYPE,,16378,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16378,0);
#endif

#if 0
#define TYPE QStyleSheet
CheckTypeSize(TYPE,,16349,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16349,0);
#endif

#if 0
#define TYPE QTextStream
CheckTypeSize(TYPE,,16481,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16481,0);
#endif

#if 0
#define TYPE QTimerEvent
CheckTypeSize(TYPE,,16315,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16315,0);
#endif

#if 0
#define TYPE QToolButton
CheckTypeSize(TYPE,,16423,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16423,0);
#endif

#if 0
#define TYPE QTranslator
CheckTypeSize(TYPE,,16267,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16267,0);
#endif

#if 0
#define TYPE QTsciiCodec
CheckTypeSize(TYPE,,16407,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16407,0);
#endif

#if 0
#define TYPE QUtf16Codec
CheckTypeSize(TYPE,,16332,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16332,0);
#endif

#if 0
#define TYPE QVBoxLayout
CheckTypeSize(TYPE,,16371,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16371,0);
#endif

#if 0
#define TYPE QWheelEvent
CheckTypeSize(TYPE,,16531,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16531,0);
#endif

#if 0
#define TYPE QWidgetItem
CheckTypeSize(TYPE,,16437,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16437,0);
#endif

#if 0
#define TYPE QWidgetList
CheckTypeSize(TYPE,,16523,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16523,0);
#endif

#if 0
#define TYPE QXmlLocator
CheckTypeSize(TYPE,,16268,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16268,0);
#endif

#if 0
#define TYPE QActionGroup
CheckTypeSize(TYPE,,16399,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16399,0);
#endif

#if 0
#define TYPE QApplication
CheckTypeSize(TYPE,,16490,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16490,0);
#endif

#if 0
#define TYPE QButtonGroup
CheckTypeSize(TYPE,,16381,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16381,0);
#endif

#if 0
#define TYPE QColorDialog
CheckTypeSize(TYPE,,16488,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16488,0);
#endif

#if 0
#define TYPE QCommonStyle
CheckTypeSize(TYPE,,16305,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16305,0);
#endif

#if 0
#define TYPE QCustomEvent
CheckTypeSize(TYPE,,16350,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16350,0);
#endif

#if 0
#define TYPE QDataBrowser
CheckTypeSize(TYPE,,16532,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16532,0);
#endif

#if 0
#define TYPE QDomDocument
CheckTypeSize(TYPE,,16338,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16338,0);
#endif

#if 0
#define TYPE QDomNodeList
CheckTypeSize(TYPE,,16355,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16355,0);
#endif

#if 0
#define TYPE QDomNotation
CheckTypeSize(TYPE,,16426,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16426,0);
#endif

#if 0
#define TYPE QDragManager
CheckTypeSize(TYPE,,16352,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16352,0);
#endif

#if 0
#define TYPE QFilePreview
CheckTypeSize(TYPE,,16380,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16380,0);
#endif

#if 0
#define TYPE QGb2312Codec
CheckTypeSize(TYPE,,16452,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16452,0);
#endif

#if 0
#define TYPE QHebrewCodec
CheckTypeSize(TYPE,,16464,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16464,0);
#endif

#if 0
#define TYPE QHostAddress
CheckTypeSize(TYPE,,16530,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16530,0);
#endif

#if 0
#define TYPE QIconFactory
CheckTypeSize(TYPE,,16343,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16343,0);
#endif

#if 0
#define TYPE QImageFormat
CheckTypeSize(TYPE,,16266,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16266,0);
#endif

#if 0
#define TYPE QInputDialog
CheckTypeSize(TYPE,,16501,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16501,0);
#endif

#if 0
#define TYPE QListBoxItem
CheckTypeSize(TYPE,,16336,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16336,0);
#endif

#if 0
#define TYPE QListBoxText
CheckTypeSize(TYPE,,16272,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16272,0);
#endif

#if 0
#define TYPE QPaintDevice
CheckTypeSize(TYPE,,16303,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16303,0);
#endif

#if 0
#define TYPE QPrintDialog
CheckTypeSize(TYPE,,16477,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16477,0);
#endif

#if 0
#define TYPE QProgressBar
CheckTypeSize(TYPE,,16478,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16478,0);
#endif

#if 0
#define TYPE QRadioButton
CheckTypeSize(TYPE,,16393,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16393,0);
#endif

#if 0
#define TYPE QResizeEvent
CheckTypeSize(TYPE,,16430,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16430,0);
#endif

#if 0
#define TYPE QSqlDatabase
CheckTypeSize(TYPE,,16408,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16408,0);
#endif

#if 0
#define TYPE QStylePlugin
CheckTypeSize(TYPE,,16326,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16326,0);
#endif

#if 0
#define TYPE QTabletEvent
CheckTypeSize(TYPE,,16436,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16436,0);
#endif

#if 0
#define TYPE QTextBrowser
CheckTypeSize(TYPE,,16259,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16259,0);
#endif

#if 0
#define TYPE QTextDecoder
CheckTypeSize(TYPE,,16472,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16472,0);
#endif

#if 0
#define TYPE QTextEncoder
CheckTypeSize(TYPE,,16389,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16389,0);
#endif

#if 0
#define TYPE QTextOStream
CheckTypeSize(TYPE,,16460,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16460,0);
#endif

#if 0
#define TYPE QUrlOperator
CheckTypeSize(TYPE,,16282,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16282,0);
#endif

#if 0
#define TYPE QWidgetStack
CheckTypeSize(TYPE,,16347,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16347,0);
#endif

#if 0
#define TYPE QCanvasPixmap
CheckTypeSize(TYPE,,16409,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16409,0);
#endif

#if 0
#define TYPE QCanvasSpline
CheckTypeSize(TYPE,,16440,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16440,0);
#endif

#if 0
#define TYPE QCanvasSprite
CheckTypeSize(TYPE,,16260,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16260,0);
#endif

#if 0
#define TYPE QDateTimeEdit
CheckTypeSize(TYPE,,16276,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16276,0);
#endif

#if 0
#define TYPE QErrorMessage
CheckTypeSize(TYPE,,16365,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16365,0);
#endif

#if 0
#define TYPE QGb18030Codec
CheckTypeSize(TYPE,,16300,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16300,0);
#endif

#if 0
#define TYPE QHButtonGroup
CheckTypeSize(TYPE,,16328,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16328,0);
#endif

#if 0
#define TYPE QIconDragItem
CheckTypeSize(TYPE,,16534,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16534,0);
#endif

#if 0
#define TYPE QIconViewItem
CheckTypeSize(TYPE,,16479,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16479,0);
#endif

#if 0
#define TYPE QIntValidator
CheckTypeSize(TYPE,,16290,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16290,0);
#endif

#if 0
#define TYPE QListViewItem
CheckTypeSize(TYPE,,16491,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16491,0);
#endif

#if 0
#define TYPE QRangeControl
CheckTypeSize(TYPE,,16313,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16313,0);
#endif

#if 0
#define TYPE QServerSocket
CheckTypeSize(TYPE,,16450,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16450,0);
#endif

#if 0
#define TYPE QSignalMapper
CheckTypeSize(TYPE,,16483,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16483,0);
#endif

#if 0
#define TYPE QSocketDevice
CheckTypeSize(TYPE,,16361,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16361,0);
#endif

#if 0
#define TYPE QSplashScreen
CheckTypeSize(TYPE,,16318,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16318,0);
#endif

#if 0
#define TYPE QSqlFieldInfo
CheckTypeSize(TYPE,,16535,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16535,0);
#endif

#if 0
#define TYPE QToolTipGroup
CheckTypeSize(TYPE,,16508,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16508,0);
#endif

#if 0
#define TYPE QVButtonGroup
CheckTypeSize(TYPE,,16387,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16387,0);
#endif

#if 0
#define TYPE QWidgetPlugin
CheckTypeSize(TYPE,,16340,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16340,0);
#endif

#if 0
#define TYPE QCanvasEllipse
CheckTypeSize(TYPE,,16402,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16402,0);
#endif

#if 0
#define TYPE QCanvasPolygon
CheckTypeSize(TYPE,,16514,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16514,0);
#endif

#if 0
#define TYPE QCheckListItem
CheckTypeSize(TYPE,,16482,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16482,0);
#endif

#if 0
#define TYPE QDesktopWidget
CheckTypeSize(TYPE,,16330,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16330,0);
#endif

#if 0
#define TYPE QDragMoveEvent
CheckTypeSize(TYPE,,16401,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16401,0);
#endif

#if 0
#define TYPE QEditorFactory
CheckTypeSize(TYPE,,16414,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16414,0);
#endif

#if 0
#define TYPE QImageConsumer
CheckTypeSize(TYPE,,16456,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16456,0);
#endif

#if 0
#define TYPE QJpUnicodeConv
CheckTypeSize(TYPE,,16521,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16521,0);
#endif

#if 0
#define TYPE QListBoxPixmap
CheckTypeSize(TYPE,,16351,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16351,0);
#endif

#if 0
#define TYPE QMultiLineEdit
CheckTypeSize(TYPE,,16358,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16358,0);
#endif

#if 0
#define TYPE QPtrCollection
CheckTypeSize(TYPE,,16250,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16250,0);
#endif

#if 0
#define TYPE QWaitCondition
CheckTypeSize(TYPE,,16256,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16256,0);
#endif

#if 0
#define TYPE QWidgetIntDict
CheckTypeSize(TYPE,,16424,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16424,0);
#endif

#if 0
#define TYPE QXmlAttributes
CheckTypeSize(TYPE,,16433,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16433,0);
#endif

#if 0
#define TYPE QXmlDTDHandler
CheckTypeSize(TYPE,,16487,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16487,0);
#endif

#if 0
#define TYPE QCheckTableItem
CheckTypeSize(TYPE,,16304,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16304,0);
#endif

#if 0
#define TYPE QComboTableItem
CheckTypeSize(TYPE,,16493,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16493,0);
#endif

#if 0
#define TYPE QConnectionList
CheckTypeSize(TYPE,,16527,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16527,0);
#endif

#if 0
#define TYPE QCustomMenuItem
CheckTypeSize(TYPE,,16367,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16367,0);
#endif

#if 0
#define TYPE QDockAreaLayout
CheckTypeSize(TYPE,,16279,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16279,0);
#endif

#if 0
#define TYPE QDragEnterEvent
CheckTypeSize(TYPE,,16398,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16398,0);
#endif

#if 0
#define TYPE QDragLeaveEvent
CheckTypeSize(TYPE,,16280,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16280,0);
#endif

#if 0
#define TYPE QIMComposeEvent
CheckTypeSize(TYPE,,16471,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16471,0);
#endif

#if 0
#define TYPE QIODeviceSource
CheckTypeSize(TYPE,,16496,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16496,0);
#endif

#if 0
#define TYPE QObjectUserData
CheckTypeSize(TYPE,,16312,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16312,0);
#endif

#if 0
#define TYPE QPolygonScanner
CheckTypeSize(TYPE,,16310,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16310,0);
#endif

#if 0
#define TYPE QProgressDialog
CheckTypeSize(TYPE,,16275,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16275,0);
#endif

#if 0
#define TYPE QSessionManager
CheckTypeSize(TYPE,,16473,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16473,0);
#endif

#if 0
#define TYPE QSocketNotifier
CheckTypeSize(TYPE,,16288,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16288,0);
#endif

#if 0
#define TYPE QSqlPropertyMap
CheckTypeSize(TYPE,,16320,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16320,0);
#endif

#if 0
#define TYPE QXmlDeclHandler
CheckTypeSize(TYPE,,16370,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16370,0);
#endif

#if 0
#define TYPE QXmlInputSource
CheckTypeSize(TYPE,,16498,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16498,0);
#endif

#if 0
#define TYPE QCanvasRectangle
CheckTypeSize(TYPE,,16374,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16374,0);
#endif

#if 0
#define TYPE QDomCDATASection
CheckTypeSize(TYPE,,16480,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16480,0);
#endif

#if 0
#define TYPE QDomDocumentType
CheckTypeSize(TYPE,,16335,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16335,0);
#endif

#if 0
#define TYPE QDoubleValidator
CheckTypeSize(TYPE,,16499,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16499,0);
#endif

#if 0
#define TYPE QGLayoutIterator
CheckTypeSize(TYPE,,16435,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16435,0);
#endif

#if 0
#define TYPE QImageFormatType
CheckTypeSize(TYPE,,16474,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16474,0);
#endif

#if 0
#define TYPE QNetworkProtocol
CheckTypeSize(TYPE,,16311,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16311,0);
#endif

#if 0
#define TYPE QRegExpValidator
CheckTypeSize(TYPE,,16278,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16278,0);
#endif

#if 0
#define TYPE QSqlDriverPlugin
CheckTypeSize(TYPE,,16422,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16422,0);
#endif

#if 0
#define TYPE QSqlResultShared
CheckTypeSize(TYPE,,16448,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16448,0);
#endif

#if 0
#define TYPE QSqlSelectCursor
CheckTypeSize(TYPE,,16293,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16293,0);
#endif

#if 0
#define TYPE QTextCodecPlugin
CheckTypeSize(TYPE,,16339,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16339,0);
#endif

#if 0
#define TYPE QXmlErrorHandler
CheckTypeSize(TYPE,,16503,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16503,0);
#endif

#if 0
#define TYPE QXmlSimpleReader
CheckTypeSize(TYPE,,16427,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16427,0);
#endif

#if 0
#define TYPE QContextMenuEvent
CheckTypeSize(TYPE,,16264,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16264,0);
#endif

#if 0
#define TYPE QDateTimeEditBase
CheckTypeSize(TYPE,,16509,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16509,0);
#endif

#if 0
#define TYPE QDomCharacterData
CheckTypeSize(TYPE,,16397,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16397,0);
#endif

#if 0
#define TYPE QFileIconProvider
CheckTypeSize(TYPE,,16540,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16540,0);
#endif

#if 0
#define TYPE QNetworkOperation
CheckTypeSize(TYPE,,16466,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16466,0);
#endif

#if 0
#define TYPE QSqlEditorFactory
CheckTypeSize(TYPE,,16526,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16526,0);
#endif

#if 0
#define TYPE QDomImplementation
CheckTypeSize(TYPE,,16298,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16298,0);
#endif

#if 0
#define TYPE QDragResponseEvent
CheckTypeSize(TYPE,,16337,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16337,0);
#endif

#if 0
#define TYPE QGuardedPtrPrivate
CheckTypeSize(TYPE,,16489,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16489,0);
#endif

#if 0
#define TYPE QHttpRequestHeader
CheckTypeSize(TYPE,,16506,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16506,0);
#endif

#if 0
#define TYPE QImageFormatPlugin
CheckTypeSize(TYPE,,16446,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16446,0);
#endif

#if 0
#define TYPE QMimeSourceFactory
CheckTypeSize(TYPE,,16271,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16271,0);
#endif

#if 0
#define TYPE QSyntaxHighlighter
CheckTypeSize(TYPE,,16307,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16307,0);
#endif

#if 0
#define TYPE QXmlContentHandler
CheckTypeSize(TYPE,,16451,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16451,0);
#endif

#if 0
#define TYPE QXmlDefaultHandler
CheckTypeSize(TYPE,,16420,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16420,0);
#endif

#if 0
#define TYPE QXmlEntityResolver
CheckTypeSize(TYPE,,16248,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16248,0);
#endif

#if 0
#define TYPE QXmlLexicalHandler
CheckTypeSize(TYPE,,16431,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16431,0);
#endif

#if 0
#define TYPE QDomEntityReference
CheckTypeSize(TYPE,,16457,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16457,0);
#endif

#if 0
#define TYPE QHttpResponseHeader
CheckTypeSize(TYPE,,16396,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16396,0);
#endif

#if 0
#define TYPE QCanvasPolygonalItem
CheckTypeSize(TYPE,,16292,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16292,0);
#endif

#if 0
#define TYPE QDomDocumentFragment
CheckTypeSize(TYPE,,16519,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16519,0);
#endif

#if 0
#define TYPE QObjectCleanupHandler
CheckTypeSize(TYPE,,16249,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16249,0);
#endif

#if 0
#define TYPE QDomProcessingInstruction
CheckTypeSize(TYPE,,16439,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16439,0);
#endif

#if 0
#define TYPE QNetworkProtocolFactoryBase
CheckTypeSize(TYPE,,16359,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16359,0);
#endif

#if 0
#define TYPE QDir
CheckTypeSize(TYPE,,16438,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16438,0);
#endif

#if 0
#define TYPE QDns
CheckTypeSize(TYPE,,16495,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16495,0);
#endif

#if 0
#define TYPE QFtp
CheckTypeSize(TYPE,,16536,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16536,0);
#endif

#if 0
#define TYPE QTab
CheckTypeSize(TYPE,,16309,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16309,0);
#endif

#if 0
#define TYPE QUrl
CheckTypeSize(TYPE,,16324,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16324,0);
#endif

#if 0
#define TYPE QDial
CheckTypeSize(TYPE,,16323,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16323,0);
#endif

#if 0
#define TYPE QFile
CheckTypeSize(TYPE,,16334,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16334,0);
#endif

#if 0
#define TYPE QGrid
CheckTypeSize(TYPE,,16392,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16392,0);
#endif

#if 0
#define TYPE QHBox
CheckTypeSize(TYPE,,16251,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16251,0);
#endif

#if 0
#define TYPE QHttp
CheckTypeSize(TYPE,,16467,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16467,0);
#endif

#if 0
#define TYPE QVBox
CheckTypeSize(TYPE,,16263,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16263,0);
#endif

#if 0
#define TYPE QAccel
CheckTypeSize(TYPE,,16517,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16517,0);
#endif

#if 0
#define TYPE QEvent
CheckTypeSize(TYPE,,16469,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16469,0);
#endif

#if 0
#define TYPE QFrame
CheckTypeSize(TYPE,,16257,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16257,0);
#endif

#if 0
#define TYPE QGDict
CheckTypeSize(TYPE,,16502,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16502,0);
#endif

#if 0
#define TYPE QGList
CheckTypeSize(TYPE,,16301,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16301,0);
#endif

#if 0
#define TYPE QLabel
CheckTypeSize(TYPE,,16348,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16348,0);
#endif

#if 0
#define TYPE QMutex
CheckTypeSize(TYPE,,16319,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16319,0);
#endif

#if 0
#define TYPE QSound
CheckTypeSize(TYPE,,16413,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16413,0);
#endif

#if 0
#define TYPE QStyle
CheckTypeSize(TYPE,,16486,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16486,0);
#endif

#if 0
#define TYPE QTable
CheckTypeSize(TYPE,,16512,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16512,0);
#endif

#if 0
#define TYPE QTimer
CheckTypeSize(TYPE,,16247,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16247,0);
#endif

#if 0
#define TYPE QAction
CheckTypeSize(TYPE,,16529,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16529,0);
#endif

#if 0
#define TYPE QBitmap
CheckTypeSize(TYPE,,16342,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16342,0);
#endif

#if 0
#define TYPE QBuffer
CheckTypeSize(TYPE,,16373,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16373,0);
#endif

#if 0
#define TYPE QButton
CheckTypeSize(TYPE,,16289,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16289,0);
#endif

#if 0
#define TYPE QCanvas
CheckTypeSize(TYPE,,16518,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16518,0);
#endif

#if 0
#define TYPE QDialog
CheckTypeSize(TYPE,,16434,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16434,0);
#endif

#if 0
#define TYPE QGArray
CheckTypeSize(TYPE,,16442,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16442,0);
#endif

#if 0
#define TYPE QGCache
CheckTypeSize(TYPE,,16322,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16322,0);
#endif

#if 0
#define TYPE QHeader
CheckTypeSize(TYPE,,16316,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16316,0);
#endif

#if 0
#define TYPE QLayout
CheckTypeSize(TYPE,,16287,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16287,0);
#endif

#if 0
#define TYPE QObject
CheckTypeSize(TYPE,,16333,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16333,0);
#endif

#if 0
#define TYPE QPixmap
CheckTypeSize(TYPE,,16391,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16391,0);
#endif

#if 0
#define TYPE QSignal
CheckTypeSize(TYPE,,16416,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16416,0);
#endif

#if 0
#define TYPE QSlider
CheckTypeSize(TYPE,,16395,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16395,0);
#endif

#if 0
#define TYPE QSocket
CheckTypeSize(TYPE,,16283,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16283,0);
#endif

#if 0
#define TYPE QTabBar
CheckTypeSize(TYPE,,16425,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16425,0);
#endif

#if 0
#define TYPE QThread
CheckTypeSize(TYPE,,16377,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16377,0);
#endif

#if 0
#define TYPE QWidget
CheckTypeSize(TYPE,,16494,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16494,0);
#endif

#if 0
#define TYPE QWizard
CheckTypeSize(TYPE,,16291,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16291,0);
#endif

#if 0
#define TYPE QAsyncIO
CheckTypeSize(TYPE,,16394,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16394,0);
#endif

#if 0
#define TYPE QCString
CheckTypeSize(TYPE,,16485,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16485,0);
#endif

#if 0
#define TYPE QDomAttr
CheckTypeSize(TYPE,,16353,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16353,0);
#endif

#if 0
#define TYPE QDomNode
CheckTypeSize(TYPE,,16372,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16372,0);
#endif

#if 0
#define TYPE QDomText
CheckTypeSize(TYPE,,16386,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16386,0);
#endif

#if 0
#define TYPE QGPlugin
CheckTypeSize(TYPE,,16299,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16299,0);
#endif

#if 0
#define TYPE QGVector
CheckTypeSize(TYPE,,16252,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16252,0);
#endif

#if 0
#define TYPE QIMEvent
CheckTypeSize(TYPE,,16286,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16286,0);
#endif

#if 0
#define TYPE QIconSet
CheckTypeSize(TYPE,,16375,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16375,0);
#endif

#if 0
#define TYPE QLibrary
CheckTypeSize(TYPE,,16345,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16345,0);
#endif

#if 0
#define TYPE QListBox
CheckTypeSize(TYPE,,16366,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16366,0);
#endif

#if 0
#define TYPE QLocalFs
CheckTypeSize(TYPE,,16513,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16513,0);
#endif

#if 0
#define TYPE QMenuBar
CheckTypeSize(TYPE,,16274,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16274,0);
#endif

#if 0
#define TYPE QPicture
CheckTypeSize(TYPE,,16383,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16383,0);
#endif

#if 0
#define TYPE QPrinter
CheckTypeSize(TYPE,,16410,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16410,0);
#endif

#if 0
#define TYPE QProcess
CheckTypeSize(TYPE,,16265,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16265,0);
#endif

#if 0
#define TYPE QSpinBox
CheckTypeSize(TYPE,,16344,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16344,0);
#endif

#if 0
#define TYPE QSqlForm
CheckTypeSize(TYPE,,16468,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16468,0);
#endif

#if 0
#define TYPE QStrList
CheckTypeSize(TYPE,,16406,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16406,0);
#endif

#if 0
#define TYPE QToolBar
CheckTypeSize(TYPE,,16253,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16253,0);
#endif

#if 0
#define TYPE QToolBox
CheckTypeSize(TYPE,,16465,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16465,0);
#endif

#if 0
#define TYPE QToolTip
CheckTypeSize(TYPE,,16429,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16429,0);
#endif

#if 0
#define TYPE QUriDrag
CheckTypeSize(TYPE,,16369,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16369,0);
#endif

#if 0
#define TYPE QUrlInfo
CheckTypeSize(TYPE,,16455,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16455,0);
#endif

#if 0
#define TYPE QBitArray
CheckTypeSize(TYPE,,16443,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16443,0);
#endif

#if 0
#define TYPE QCheckBox
CheckTypeSize(TYPE,,16444,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16444,0);
#endif

#if 0
#define TYPE QComboBox
CheckTypeSize(TYPE,,16385,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16385,0);
#endif

#if 0
#define TYPE QDataPump
CheckTypeSize(TYPE,,16302,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16302,0);
#endif

#if 0
#define TYPE QDataSink
CheckTypeSize(TYPE,,16421,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16421,0);
#endif

#if 0
#define TYPE QDataView
CheckTypeSize(TYPE,,16525,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16525,0);
#endif

#if 0
#define TYPE QDateEdit
CheckTypeSize(TYPE,,16515,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16515,0);
#endif

#if 0
#define TYPE QDockArea
CheckTypeSize(TYPE,,16484,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16484,0);
#endif

#if 0
#define TYPE QDropSite
CheckTypeSize(TYPE,,16376,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16376,0);
#endif

#if 0
#define TYPE QGbkCodec
CheckTypeSize(TYPE,,16317,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16317,0);
#endif

#if 0
#define TYPE QGridView
CheckTypeSize(TYPE,,16284,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16284,0);
#endif

#if 0
#define TYPE QGroupBox
CheckTypeSize(TYPE,,16273,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16273,0);
#endif

#if 0
#define TYPE QIODevice
CheckTypeSize(TYPE,,16500,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16500,0);
#endif

#if 0
#define TYPE QIconDrag
CheckTypeSize(TYPE,,16368,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16368,0);
#endif

#if 0
#define TYPE QIconView
CheckTypeSize(TYPE,,16492,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16492,0);
#endif

#if 0
#define TYPE QJisCodec
CheckTypeSize(TYPE,,16356,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16356,0);
#endif

#if 0
#define TYPE QKeyEvent
CheckTypeSize(TYPE,,16321,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16321,0);
#endif

#if 0
#define TYPE QLineEdit
CheckTypeSize(TYPE,,16262,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16262,0);
#endif

#if 0
#define TYPE QListView
CheckTypeSize(TYPE,,16325,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16325,0);
#endif

#if 0
#define TYPE QMenuData
CheckTypeSize(TYPE,,16524,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16524,0);
#endif

#if 0
#define TYPE QSizeGrip
CheckTypeSize(TYPE,,16417,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16417,0);
#endif

#if 0
#define TYPE QSplitter
CheckTypeSize(TYPE,,16261,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16261,0);
#endif

#if 0
#define TYPE QSqlError
CheckTypeSize(TYPE,,16449,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16449,0);
#endif

#if 0
#define TYPE QSqlField
CheckTypeSize(TYPE,,16542,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16542,0);
#endif

#if 0
#define TYPE QSqlIndex
CheckTypeSize(TYPE,,16541,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16541,0);
#endif

#if 0
#define TYPE QSqlQuery
CheckTypeSize(TYPE,,16331,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16331,0);
#endif

#if 0
#define TYPE QTextDrag
CheckTypeSize(TYPE,,16379,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16379,0);
#endif

#if 0
#define TYPE QTextEdit
CheckTypeSize(TYPE,,16539,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16539,0);
#endif

#if 0
#define TYPE QTextView
CheckTypeSize(TYPE,,16306,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16306,0);
#endif

#if 0
#define TYPE QTimeEdit
CheckTypeSize(TYPE,,16533,)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16533,0);
#endif

#if __i386__
#define TYPE __cxxabiv1::__enum_type_info
CheckTypeSize(TYPE,8,10708,2)
#undef TYPE
#elif __ia64__
#define TYPE __cxxabiv1::__enum_type_info
CheckTypeSize(TYPE,16,10708,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE __cxxabiv1::__enum_type_info
CheckTypeSize(TYPE,8,10708,6)
#undef TYPE
#elif __powerpc64__
#define TYPE __cxxabiv1::__enum_type_info
CheckTypeSize(TYPE,16,10708,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE __cxxabiv1::__enum_type_info
CheckTypeSize(TYPE,8,10708,10)
#undef TYPE
#elif __x86_64__
#define TYPE __cxxabiv1::__enum_type_info
CheckTypeSize(TYPE,16,10708,11)
#undef TYPE
#elif __s390x__
#define TYPE __cxxabiv1::__enum_type_info
CheckTypeSize(TYPE,16,10708,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10708,0);
#endif

#if __i386__
#define TYPE __cxxabiv1::__array_type_info
CheckTypeSize(TYPE,8,10706,2)
#undef TYPE
#elif __ia64__
#define TYPE __cxxabiv1::__array_type_info
CheckTypeSize(TYPE,16,10706,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE __cxxabiv1::__array_type_info
CheckTypeSize(TYPE,8,10706,6)
#undef TYPE
#elif __powerpc64__
#define TYPE __cxxabiv1::__array_type_info
CheckTypeSize(TYPE,16,10706,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE __cxxabiv1::__array_type_info
CheckTypeSize(TYPE,8,10706,10)
#undef TYPE
#elif __x86_64__
#define TYPE __cxxabiv1::__array_type_info
CheckTypeSize(TYPE,16,10706,11)
#undef TYPE
#elif __s390x__
#define TYPE __cxxabiv1::__array_type_info
CheckTypeSize(TYPE,16,10706,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10706,0);
#endif

#if __i386__
#define TYPE __cxxabiv1::__class_type_info
CheckTypeSize(TYPE,8,10702,2)
#undef TYPE
#elif __ia64__
#define TYPE __cxxabiv1::__class_type_info
CheckTypeSize(TYPE,16,10702,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE __cxxabiv1::__class_type_info
CheckTypeSize(TYPE,8,10702,6)
#undef TYPE
#elif __powerpc64__
#define TYPE __cxxabiv1::__class_type_info
CheckTypeSize(TYPE,16,10702,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE __cxxabiv1::__class_type_info
CheckTypeSize(TYPE,8,10702,10)
#undef TYPE
#elif __x86_64__
#define TYPE __cxxabiv1::__class_type_info
CheckTypeSize(TYPE,16,10702,11)
#undef TYPE
#elif __s390x__
#define TYPE __cxxabiv1::__class_type_info
CheckTypeSize(TYPE,16,10702,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10702,0);
#endif

#if __i386__
#define TYPE __cxxabiv1::__pbase_type_info
CheckTypeSize(TYPE,16,10709,2)
#undef TYPE
#elif __ia64__
#define TYPE __cxxabiv1::__pbase_type_info
CheckTypeSize(TYPE,32,10709,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE __cxxabiv1::__pbase_type_info
CheckTypeSize(TYPE,16,10709,6)
#undef TYPE
#elif __powerpc64__
#define TYPE __cxxabiv1::__pbase_type_info
CheckTypeSize(TYPE,32,10709,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE __cxxabiv1::__pbase_type_info
CheckTypeSize(TYPE,16,10709,10)
#undef TYPE
#elif __x86_64__
#define TYPE __cxxabiv1::__pbase_type_info
CheckTypeSize(TYPE,32,10709,11)
#undef TYPE
#elif __s390x__
#define TYPE __cxxabiv1::__pbase_type_info
CheckTypeSize(TYPE,32,10709,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10709,0);
#endif

#if __i386__
#define TYPE __cxxabiv1::__pointer_type_info
CheckTypeSize(TYPE,16,10710,2)
#undef TYPE
#elif __ia64__
#define TYPE __cxxabiv1::__pointer_type_info
CheckTypeSize(TYPE,32,10710,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE __cxxabiv1::__pointer_type_info
CheckTypeSize(TYPE,16,10710,6)
#undef TYPE
#elif __powerpc64__
#define TYPE __cxxabiv1::__pointer_type_info
CheckTypeSize(TYPE,32,10710,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE __cxxabiv1::__pointer_type_info
CheckTypeSize(TYPE,16,10710,10)
#undef TYPE
#elif __x86_64__
#define TYPE __cxxabiv1::__pointer_type_info
CheckTypeSize(TYPE,32,10710,11)
#undef TYPE
#elif __s390x__
#define TYPE __cxxabiv1::__pointer_type_info
CheckTypeSize(TYPE,32,10710,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10710,0);
#endif

#if __i386__
#define TYPE __cxxabiv1::__function_type_info
CheckTypeSize(TYPE,8,10707,2)
#undef TYPE
#elif __ia64__
#define TYPE __cxxabiv1::__function_type_info
CheckTypeSize(TYPE,16,10707,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE __cxxabiv1::__function_type_info
CheckTypeSize(TYPE,8,10707,6)
#undef TYPE
#elif __powerpc64__
#define TYPE __cxxabiv1::__function_type_info
CheckTypeSize(TYPE,16,10707,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE __cxxabiv1::__function_type_info
CheckTypeSize(TYPE,8,10707,10)
#undef TYPE
#elif __x86_64__
#define TYPE __cxxabiv1::__function_type_info
CheckTypeSize(TYPE,16,10707,11)
#undef TYPE
#elif __s390x__
#define TYPE __cxxabiv1::__function_type_info
CheckTypeSize(TYPE,16,10707,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10707,0);
#endif

#if __i386__
#define TYPE __cxxabiv1::__si_class_type_info
CheckTypeSize(TYPE,12,10703,2)
#undef TYPE
#elif __ia64__
#define TYPE __cxxabiv1::__si_class_type_info
CheckTypeSize(TYPE,24,10703,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE __cxxabiv1::__si_class_type_info
CheckTypeSize(TYPE,12,10703,6)
#undef TYPE
#elif __powerpc64__
#define TYPE __cxxabiv1::__si_class_type_info
CheckTypeSize(TYPE,24,10703,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE __cxxabiv1::__si_class_type_info
CheckTypeSize(TYPE,12,10703,10)
#undef TYPE
#elif __x86_64__
#define TYPE __cxxabiv1::__si_class_type_info
CheckTypeSize(TYPE,24,10703,11)
#undef TYPE
#elif __s390x__
#define TYPE __cxxabiv1::__si_class_type_info
CheckTypeSize(TYPE,24,10703,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10703,0);
#endif

#if __i386__
#define TYPE __cxxabiv1::__vmi_class_type_info
CheckTypeSize(TYPE,24,10704,2)
#undef TYPE
#elif __ia64__
#define TYPE __cxxabiv1::__vmi_class_type_info
CheckTypeSize(TYPE,40,10704,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE __cxxabiv1::__vmi_class_type_info
CheckTypeSize(TYPE,24,10704,6)
#undef TYPE
#elif __powerpc64__
#define TYPE __cxxabiv1::__vmi_class_type_info
CheckTypeSize(TYPE,40,10704,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE __cxxabiv1::__vmi_class_type_info
CheckTypeSize(TYPE,24,10704,10)
#undef TYPE
#elif __x86_64__
#define TYPE __cxxabiv1::__vmi_class_type_info
CheckTypeSize(TYPE,40,10704,11)
#undef TYPE
#elif __s390x__
#define TYPE __cxxabiv1::__vmi_class_type_info
CheckTypeSize(TYPE,40,10704,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10704,0);
#endif

#if __i386__
#define TYPE __cxxabiv1::__fundamental_type_info
CheckTypeSize(TYPE,8,10705,2)
#undef TYPE
#elif __ia64__
#define TYPE __cxxabiv1::__fundamental_type_info
CheckTypeSize(TYPE,16,10705,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE __cxxabiv1::__fundamental_type_info
CheckTypeSize(TYPE,8,10705,6)
#undef TYPE
#elif __powerpc64__
#define TYPE __cxxabiv1::__fundamental_type_info
CheckTypeSize(TYPE,16,10705,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE __cxxabiv1::__fundamental_type_info
CheckTypeSize(TYPE,8,10705,10)
#undef TYPE
#elif __x86_64__
#define TYPE __cxxabiv1::__fundamental_type_info
CheckTypeSize(TYPE,16,10705,11)
#undef TYPE
#elif __s390x__
#define TYPE __cxxabiv1::__fundamental_type_info
CheckTypeSize(TYPE,16,10705,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10705,0);
#endif

#if __i386__
#define TYPE __cxxabiv1::__pointer_to_member_type_info
CheckTypeSize(TYPE,20,10711,2)
#undef TYPE
#elif __ia64__
#define TYPE __cxxabiv1::__pointer_to_member_type_info
CheckTypeSize(TYPE,40,10711,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE __cxxabiv1::__pointer_to_member_type_info
CheckTypeSize(TYPE,20,10711,6)
#undef TYPE
#elif __powerpc64__
#define TYPE __cxxabiv1::__pointer_to_member_type_info
CheckTypeSize(TYPE,40,10711,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE __cxxabiv1::__pointer_to_member_type_info
CheckTypeSize(TYPE,20,10711,10)
#undef TYPE
#elif __x86_64__
#define TYPE __cxxabiv1::__pointer_to_member_type_info
CheckTypeSize(TYPE,40,10711,11)
#undef TYPE
#elif __s390x__
#define TYPE __cxxabiv1::__pointer_to_member_type_info
CheckTypeSize(TYPE,40,10711,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10711,0);
#endif

#if __i386__
#define TYPE __gnu_cxx::stdio_filebuf<char, std::char_traits<char> >
CheckTypeSize(TYPE,136,10600,2)
#undef TYPE
#elif __ia64__
#define TYPE __gnu_cxx::stdio_filebuf<char, std::char_traits<char> >
CheckTypeSize(TYPE,240,10600,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE __gnu_cxx::stdio_filebuf<char, std::char_traits<char> >
CheckTypeSize(TYPE,136,10600,6)
#undef TYPE
#elif __powerpc64__
#define TYPE __gnu_cxx::stdio_filebuf<char, std::char_traits<char> >
CheckTypeSize(TYPE,240,10600,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE __gnu_cxx::stdio_filebuf<char, std::char_traits<char> >
CheckTypeSize(TYPE,136,10600,10)
#undef TYPE
#elif __x86_64__
#define TYPE __gnu_cxx::stdio_filebuf<char, std::char_traits<char> >
CheckTypeSize(TYPE,240,10600,11)
#undef TYPE
#elif __s390x__
#define TYPE __gnu_cxx::stdio_filebuf<char, std::char_traits<char> >
CheckTypeSize(TYPE,240,10600,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10600,0);
#endif

#if __i386__
#define TYPE __gnu_cxx::stdio_filebuf<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,140,10601,2)
#undef TYPE
#elif __ia64__
#define TYPE __gnu_cxx::stdio_filebuf<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,240,10601,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE __gnu_cxx::stdio_filebuf<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,140,10601,6)
#undef TYPE
#elif __powerpc64__
#define TYPE __gnu_cxx::stdio_filebuf<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,240,10601,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE __gnu_cxx::stdio_filebuf<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,140,10601,10)
#undef TYPE
#elif __x86_64__
#define TYPE __gnu_cxx::stdio_filebuf<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,240,10601,11)
#undef TYPE
#elif __s390x__
#define TYPE __gnu_cxx::stdio_filebuf<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,240,10601,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10601,0);
#endif

#if __i386__
#define TYPE std::locale::facet
CheckTypeSize(TYPE,8,10625,2)
#undef TYPE
#elif __ia64__
#define TYPE std::locale::facet
CheckTypeSize(TYPE,16,10625,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::locale::facet
CheckTypeSize(TYPE,8,10625,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::locale::facet
CheckTypeSize(TYPE,16,10625,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::locale::facet
CheckTypeSize(TYPE,8,10625,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::locale::facet
CheckTypeSize(TYPE,16,10625,11)
#undef TYPE
#elif __s390x__
#define TYPE std::locale::facet
CheckTypeSize(TYPE,16,10625,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10625,0);
#endif

#if __i386__
#define TYPE std::ios_base::failure
CheckTypeSize(TYPE,8,10622,2)
#undef TYPE
#elif __ia64__
#define TYPE std::ios_base::failure
CheckTypeSize(TYPE,16,10622,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::ios_base::failure
CheckTypeSize(TYPE,8,10622,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::ios_base::failure
CheckTypeSize(TYPE,16,10622,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::ios_base::failure
CheckTypeSize(TYPE,8,10622,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::ios_base::failure
CheckTypeSize(TYPE,16,10622,11)
#undef TYPE
#elif __s390x__
#define TYPE std::ios_base::failure
CheckTypeSize(TYPE,16,10622,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10622,0);
#endif

#if __i386__
#define TYPE std::valarray<unsigned int>
CheckTypeSize(TYPE,8,10849,2)
#undef TYPE
#elif __ia64__
#define TYPE std::valarray<unsigned int>
CheckTypeSize(TYPE,16,10849,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::valarray<unsigned int>
CheckTypeSize(TYPE,8,10849,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::valarray<unsigned int>
CheckTypeSize(TYPE,16,10849,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::valarray<unsigned int>
CheckTypeSize(TYPE,8,10849,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::valarray<unsigned int>
CheckTypeSize(TYPE,16,10849,11)
#undef TYPE
#elif __s390x__
#define TYPE std::valarray<unsigned int>
CheckTypeSize(TYPE,16,10849,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10849,0);
#endif

#if __i386__
#define TYPE std::basic_iostream<char, std::char_traits<char> >
CheckTypeSize(TYPE,148,10619,2)
#undef TYPE
#elif __ia64__
#define TYPE std::basic_iostream<char, std::char_traits<char> >
CheckTypeSize(TYPE,288,10619,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::basic_iostream<char, std::char_traits<char> >
CheckTypeSize(TYPE,148,10619,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::basic_iostream<char, std::char_traits<char> >
CheckTypeSize(TYPE,288,10619,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::basic_iostream<char, std::char_traits<char> >
CheckTypeSize(TYPE,148,10619,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::basic_iostream<char, std::char_traits<char> >
CheckTypeSize(TYPE,288,10619,11)
#undef TYPE
#elif __s390x__
#define TYPE std::basic_iostream<char, std::char_traits<char> >
CheckTypeSize(TYPE,288,10619,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10619,0);
#endif

#if __i386__
#define TYPE std::basic_istream<char, std::char_traits<char> >
CheckTypeSize(TYPE,144,10623,2)
#undef TYPE
#elif __ia64__
#define TYPE std::basic_istream<char, std::char_traits<char> >
CheckTypeSize(TYPE,280,10623,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::basic_istream<char, std::char_traits<char> >
CheckTypeSize(TYPE,144,10623,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::basic_istream<char, std::char_traits<char> >
CheckTypeSize(TYPE,280,10623,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::basic_istream<char, std::char_traits<char> >
CheckTypeSize(TYPE,144,10623,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::basic_istream<char, std::char_traits<char> >
CheckTypeSize(TYPE,280,10623,11)
#undef TYPE
#elif __s390x__
#define TYPE std::basic_istream<char, std::char_traits<char> >
CheckTypeSize(TYPE,280,10623,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10623,0);
#endif

#if __i386__
#define TYPE std::basic_ostream<char, std::char_traits<char> >
CheckTypeSize(TYPE,140,10678,2)
#undef TYPE
#elif __ia64__
#define TYPE std::basic_ostream<char, std::char_traits<char> >
CheckTypeSize(TYPE,272,10678,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::basic_ostream<char, std::char_traits<char> >
CheckTypeSize(TYPE,140,10678,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::basic_ostream<char, std::char_traits<char> >
CheckTypeSize(TYPE,272,10678,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::basic_ostream<char, std::char_traits<char> >
CheckTypeSize(TYPE,140,10678,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::basic_ostream<char, std::char_traits<char> >
CheckTypeSize(TYPE,272,10678,11)
#undef TYPE
#elif __s390x__
#define TYPE std::basic_ostream<char, std::char_traits<char> >
CheckTypeSize(TYPE,272,10678,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10678,0);
#endif

#if __i386__
#define TYPE std::__num_base
CheckTypeSize(TYPE,1,10673,2)
#undef TYPE
#elif __ia64__
#define TYPE std::__num_base
CheckTypeSize(TYPE,1,10673,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::__num_base
CheckTypeSize(TYPE,1,10673,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::__num_base
CheckTypeSize(TYPE,1,10673,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::__num_base
CheckTypeSize(TYPE,1,10673,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::__num_base
CheckTypeSize(TYPE,1,10673,11)
#undef TYPE
#elif __s390x__
#define TYPE std::__num_base
CheckTypeSize(TYPE,1,10673,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10673,0);
#endif

#if __i386__
#define TYPE std::bad_typeid
CheckTypeSize(TYPE,4,10701,2)
#undef TYPE
#elif __ia64__
#define TYPE std::bad_typeid
CheckTypeSize(TYPE,8,10701,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::bad_typeid
CheckTypeSize(TYPE,4,10701,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::bad_typeid
CheckTypeSize(TYPE,8,10701,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::bad_typeid
CheckTypeSize(TYPE,4,10701,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::bad_typeid
CheckTypeSize(TYPE,8,10701,11)
#undef TYPE
#elif __s390x__
#define TYPE std::bad_typeid
CheckTypeSize(TYPE,8,10701,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10701,0);
#endif

#if __i386__
#define TYPE std::ctype_base
CheckTypeSize(TYPE,1,10677,2)
#undef TYPE
#elif __ia64__
#define TYPE std::ctype_base
CheckTypeSize(TYPE,1,10677,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::ctype_base
CheckTypeSize(TYPE,1,10677,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::ctype_base
CheckTypeSize(TYPE,1,10677,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::ctype_base
CheckTypeSize(TYPE,1,10677,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::ctype_base
CheckTypeSize(TYPE,1,10677,11)
#undef TYPE
#elif __s390x__
#define TYPE std::ctype_base
CheckTypeSize(TYPE,1,10677,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10677,0);
#endif

#if __i386__
#define TYPE std::istrstream
CheckTypeSize(TYPE,188,10693,2)
#undef TYPE
#elif __ia64__
#define TYPE std::istrstream
CheckTypeSize(TYPE,368,10693,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::istrstream
CheckTypeSize(TYPE,188,10693,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::istrstream
CheckTypeSize(TYPE,368,10693,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::istrstream
CheckTypeSize(TYPE,188,10693,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::istrstream
CheckTypeSize(TYPE,368,10693,11)
#undef TYPE
#elif __s390x__
#define TYPE std::istrstream
CheckTypeSize(TYPE,368,10693,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10693,0);
#endif

#if __i386__
#define TYPE std::money_base
CheckTypeSize(TYPE,1,10675,2)
#undef TYPE
#elif __ia64__
#define TYPE std::money_base
CheckTypeSize(TYPE,1,10675,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::money_base
CheckTypeSize(TYPE,1,10675,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::money_base
CheckTypeSize(TYPE,1,10675,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::money_base
CheckTypeSize(TYPE,1,10675,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::money_base
CheckTypeSize(TYPE,1,10675,11)
#undef TYPE
#elif __s390x__
#define TYPE std::money_base
CheckTypeSize(TYPE,1,10675,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10675,0);
#endif

#if __i386__
#define TYPE std::moneypunct<char, false>
CheckTypeSize(TYPE,12,10639,2)
#undef TYPE
#elif __ia64__
#define TYPE std::moneypunct<char, false>
CheckTypeSize(TYPE,24,10639,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::moneypunct<char, false>
CheckTypeSize(TYPE,12,10639,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::moneypunct<char, false>
CheckTypeSize(TYPE,24,10639,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::moneypunct<char, false>
CheckTypeSize(TYPE,12,10639,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::moneypunct<char, false>
CheckTypeSize(TYPE,24,10639,11)
#undef TYPE
#elif __s390x__
#define TYPE std::moneypunct<char, false>
CheckTypeSize(TYPE,24,10639,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10639,0);
#endif

#if __i386__
#define TYPE std::moneypunct<char, true>
CheckTypeSize(TYPE,12,10638,2)
#undef TYPE
#elif __ia64__
#define TYPE std::moneypunct<char, true>
CheckTypeSize(TYPE,24,10638,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::moneypunct<char, true>
CheckTypeSize(TYPE,12,10638,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::moneypunct<char, true>
CheckTypeSize(TYPE,24,10638,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::moneypunct<char, true>
CheckTypeSize(TYPE,12,10638,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::moneypunct<char, true>
CheckTypeSize(TYPE,24,10638,11)
#undef TYPE
#elif __s390x__
#define TYPE std::moneypunct<char, true>
CheckTypeSize(TYPE,24,10638,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10638,0);
#endif

#if __i386__
#define TYPE std::moneypunct<wchar_t, false>
CheckTypeSize(TYPE,12,10641,2)
#undef TYPE
#elif __ia64__
#define TYPE std::moneypunct<wchar_t, false>
CheckTypeSize(TYPE,24,10641,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::moneypunct<wchar_t, false>
CheckTypeSize(TYPE,12,10641,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::moneypunct<wchar_t, false>
CheckTypeSize(TYPE,24,10641,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::moneypunct<wchar_t, false>
CheckTypeSize(TYPE,12,10641,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::moneypunct<wchar_t, false>
CheckTypeSize(TYPE,24,10641,11)
#undef TYPE
#elif __s390x__
#define TYPE std::moneypunct<wchar_t, false>
CheckTypeSize(TYPE,24,10641,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10641,0);
#endif

#if __i386__
#define TYPE std::moneypunct<wchar_t, true>
CheckTypeSize(TYPE,12,10640,2)
#undef TYPE
#elif __ia64__
#define TYPE std::moneypunct<wchar_t, true>
CheckTypeSize(TYPE,24,10640,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::moneypunct<wchar_t, true>
CheckTypeSize(TYPE,12,10640,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::moneypunct<wchar_t, true>
CheckTypeSize(TYPE,24,10640,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::moneypunct<wchar_t, true>
CheckTypeSize(TYPE,12,10640,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::moneypunct<wchar_t, true>
CheckTypeSize(TYPE,24,10640,11)
#undef TYPE
#elif __s390x__
#define TYPE std::moneypunct<wchar_t, true>
CheckTypeSize(TYPE,24,10640,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10640,0);
#endif

#if __i386__
#define TYPE std::ostrstream
CheckTypeSize(TYPE,184,10694,2)
#undef TYPE
#elif __ia64__
#define TYPE std::ostrstream
CheckTypeSize(TYPE,360,10694,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::ostrstream
CheckTypeSize(TYPE,184,10694,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::ostrstream
CheckTypeSize(TYPE,360,10694,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::ostrstream
CheckTypeSize(TYPE,184,10694,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::ostrstream
CheckTypeSize(TYPE,360,10694,11)
#undef TYPE
#elif __s390x__
#define TYPE std::ostrstream
CheckTypeSize(TYPE,360,10694,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10694,0);
#endif

#if __i386__
#define TYPE std::__timepunct<char>
CheckTypeSize(TYPE,20,10636,2)
#undef TYPE
#elif __ia64__
#define TYPE std::__timepunct<char>
CheckTypeSize(TYPE,40,10636,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::__timepunct<char>
CheckTypeSize(TYPE,20,10636,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::__timepunct<char>
CheckTypeSize(TYPE,40,10636,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::__timepunct<char>
CheckTypeSize(TYPE,20,10636,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::__timepunct<char>
CheckTypeSize(TYPE,40,10636,11)
#undef TYPE
#elif __s390x__
#define TYPE std::__timepunct<char>
CheckTypeSize(TYPE,40,10636,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10636,0);
#endif

#if __i386__
#define TYPE std::__timepunct<wchar_t>
CheckTypeSize(TYPE,20,10637,2)
#undef TYPE
#elif __ia64__
#define TYPE std::__timepunct<wchar_t>
CheckTypeSize(TYPE,40,10637,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::__timepunct<wchar_t>
CheckTypeSize(TYPE,20,10637,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::__timepunct<wchar_t>
CheckTypeSize(TYPE,40,10637,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::__timepunct<wchar_t>
CheckTypeSize(TYPE,20,10637,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::__timepunct<wchar_t>
CheckTypeSize(TYPE,40,10637,11)
#undef TYPE
#elif __s390x__
#define TYPE std::__timepunct<wchar_t>
CheckTypeSize(TYPE,40,10637,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10637,0);
#endif

#if __i386__
#define TYPE std::logic_error
CheckTypeSize(TYPE,8,10688,2)
#undef TYPE
#elif __ia64__
#define TYPE std::logic_error
CheckTypeSize(TYPE,16,10688,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::logic_error
CheckTypeSize(TYPE,8,10688,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::logic_error
CheckTypeSize(TYPE,16,10688,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::logic_error
CheckTypeSize(TYPE,8,10688,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::logic_error
CheckTypeSize(TYPE,16,10688,11)
#undef TYPE
#elif __s390x__
#define TYPE std::logic_error
CheckTypeSize(TYPE,16,10688,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10688,0);
#endif

#if __i386__
#define TYPE std::range_error
CheckTypeSize(TYPE,8,10614,2)
#undef TYPE
#elif __ia64__
#define TYPE std::range_error
CheckTypeSize(TYPE,16,10614,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::range_error
CheckTypeSize(TYPE,8,10614,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::range_error
CheckTypeSize(TYPE,16,10614,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::range_error
CheckTypeSize(TYPE,8,10614,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::range_error
CheckTypeSize(TYPE,16,10614,11)
#undef TYPE
#elif __s390x__
#define TYPE std::range_error
CheckTypeSize(TYPE,16,10614,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10614,0);
#endif

#if __i386__
#define TYPE std::codecvt_base
CheckTypeSize(TYPE,1,10676,2)
#undef TYPE
#elif __ia64__
#define TYPE std::codecvt_base
CheckTypeSize(TYPE,1,10676,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::codecvt_base
CheckTypeSize(TYPE,1,10676,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::codecvt_base
CheckTypeSize(TYPE,1,10676,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::codecvt_base
CheckTypeSize(TYPE,1,10676,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::codecvt_base
CheckTypeSize(TYPE,1,10676,11)
#undef TYPE
#elif __s390x__
#define TYPE std::codecvt_base
CheckTypeSize(TYPE,1,10676,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10676,0);
#endif

#if __i386__
#define TYPE std::ctype_byname<char>
CheckTypeSize(TYPE,544,10628,2)
#undef TYPE
#elif __ia64__
#define TYPE std::ctype_byname<char>
CheckTypeSize(TYPE,576,10628,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::ctype_byname<char>
CheckTypeSize(TYPE,544,10628,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::ctype_byname<char>
CheckTypeSize(TYPE,576,10628,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::ctype_byname<char>
CheckTypeSize(TYPE,544,10628,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::ctype_byname<char>
CheckTypeSize(TYPE,576,10628,11)
#undef TYPE
#elif __s390x__
#define TYPE std::ctype_byname<char>
CheckTypeSize(TYPE,576,10628,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10628,0);
#endif

#if __i386__
#define TYPE std::ctype_byname<wchar_t>
CheckTypeSize(TYPE,1264,10629,2)
#undef TYPE
#elif __ia64__
#define TYPE std::ctype_byname<wchar_t>
CheckTypeSize(TYPE,1344,10629,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::ctype_byname<wchar_t>
CheckTypeSize(TYPE,1264,10629,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::ctype_byname<wchar_t>
CheckTypeSize(TYPE,1344,10629,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::ctype_byname<wchar_t>
CheckTypeSize(TYPE,1264,10629,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::ctype_byname<wchar_t>
CheckTypeSize(TYPE,1344,10629,11)
#undef TYPE
#elif __s390x__
#define TYPE std::ctype_byname<wchar_t>
CheckTypeSize(TYPE,1344,10629,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10629,0);
#endif

#if __i386__
#define TYPE std::domain_error
CheckTypeSize(TYPE,8,10610,2)
#undef TYPE
#elif __ia64__
#define TYPE std::domain_error
CheckTypeSize(TYPE,16,10610,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::domain_error
CheckTypeSize(TYPE,8,10610,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::domain_error
CheckTypeSize(TYPE,16,10610,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::domain_error
CheckTypeSize(TYPE,8,10610,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::domain_error
CheckTypeSize(TYPE,16,10610,11)
#undef TYPE
#elif __s390x__
#define TYPE std::domain_error
CheckTypeSize(TYPE,16,10610,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10610,0);
#endif

#if __i386__
#define TYPE std::length_error
CheckTypeSize(TYPE,8,10612,2)
#undef TYPE
#elif __ia64__
#define TYPE std::length_error
CheckTypeSize(TYPE,16,10612,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::length_error
CheckTypeSize(TYPE,8,10612,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::length_error
CheckTypeSize(TYPE,16,10612,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::length_error
CheckTypeSize(TYPE,8,10612,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::length_error
CheckTypeSize(TYPE,16,10612,11)
#undef TYPE
#elif __s390x__
#define TYPE std::length_error
CheckTypeSize(TYPE,16,10612,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10612,0);
#endif

#if __i386__
#define TYPE std::out_of_range
CheckTypeSize(TYPE,8,10613,2)
#undef TYPE
#elif __ia64__
#define TYPE std::out_of_range
CheckTypeSize(TYPE,16,10613,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::out_of_range
CheckTypeSize(TYPE,8,10613,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::out_of_range
CheckTypeSize(TYPE,16,10613,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::out_of_range
CheckTypeSize(TYPE,8,10613,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::out_of_range
CheckTypeSize(TYPE,16,10613,11)
#undef TYPE
#elif __s390x__
#define TYPE std::out_of_range
CheckTypeSize(TYPE,16,10613,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10613,0);
#endif

#if __i386__
#define TYPE std::strstreambuf
CheckTypeSize(TYPE,44,10692,2)
#undef TYPE
#elif __ia64__
#define TYPE std::strstreambuf
CheckTypeSize(TYPE,88,10692,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::strstreambuf
CheckTypeSize(TYPE,44,10692,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::strstreambuf
CheckTypeSize(TYPE,88,10692,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::strstreambuf
CheckTypeSize(TYPE,44,10692,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::strstreambuf
CheckTypeSize(TYPE,88,10692,11)
#undef TYPE
#elif __s390x__
#define TYPE std::strstreambuf
CheckTypeSize(TYPE,88,10692,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10692,0);
#endif

#if __i386__
#define TYPE std::bad_exception
CheckTypeSize(TYPE,4,10697,2)
#undef TYPE
#elif __ia64__
#define TYPE std::bad_exception
CheckTypeSize(TYPE,8,10697,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::bad_exception
CheckTypeSize(TYPE,4,10697,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::bad_exception
CheckTypeSize(TYPE,8,10697,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::bad_exception
CheckTypeSize(TYPE,4,10697,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::bad_exception
CheckTypeSize(TYPE,8,10697,11)
#undef TYPE
#elif __s390x__
#define TYPE std::bad_exception
CheckTypeSize(TYPE,8,10697,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10697,0);
#endif

#if __i386__
#define TYPE std::basic_filebuf<char, std::char_traits<char> >
CheckTypeSize(TYPE,136,10602,2)
#undef TYPE
#elif __ia64__
#define TYPE std::basic_filebuf<char, std::char_traits<char> >
CheckTypeSize(TYPE,240,10602,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::basic_filebuf<char, std::char_traits<char> >
CheckTypeSize(TYPE,136,10602,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::basic_filebuf<char, std::char_traits<char> >
CheckTypeSize(TYPE,240,10602,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::basic_filebuf<char, std::char_traits<char> >
CheckTypeSize(TYPE,136,10602,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::basic_filebuf<char, std::char_traits<char> >
CheckTypeSize(TYPE,240,10602,11)
#undef TYPE
#elif __s390x__
#define TYPE std::basic_filebuf<char, std::char_traits<char> >
CheckTypeSize(TYPE,240,10602,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10602,0);
#endif

#if __i386__
#define TYPE std::basic_filebuf<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,140,10603,2)
#undef TYPE
#elif __ia64__
#define TYPE std::basic_filebuf<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,240,10603,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::basic_filebuf<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,140,10603,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::basic_filebuf<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,240,10603,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::basic_filebuf<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,140,10603,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::basic_filebuf<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,240,10603,11)
#undef TYPE
#elif __s390x__
#define TYPE std::basic_filebuf<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,240,10603,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10603,0);
#endif

#if __i386__
#define TYPE std::basic_fstream<char, std::char_traits<char> >
CheckTypeSize(TYPE,284,10606,2)
#undef TYPE
#elif __ia64__
#define TYPE std::basic_fstream<char, std::char_traits<char> >
CheckTypeSize(TYPE,528,10606,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::basic_fstream<char, std::char_traits<char> >
CheckTypeSize(TYPE,284,10606,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::basic_fstream<char, std::char_traits<char> >
CheckTypeSize(TYPE,528,10606,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::basic_fstream<char, std::char_traits<char> >
CheckTypeSize(TYPE,284,10606,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::basic_fstream<char, std::char_traits<char> >
CheckTypeSize(TYPE,528,10606,11)
#undef TYPE
#elif __s390x__
#define TYPE std::basic_fstream<char, std::char_traits<char> >
CheckTypeSize(TYPE,528,10606,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10606,0);
#endif

#if __i386__
#define TYPE std::basic_fstream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,292,10609,2)
#undef TYPE
#elif __ia64__
#define TYPE std::basic_fstream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,528,10609,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::basic_fstream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,292,10609,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::basic_fstream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,528,10609,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::basic_fstream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,292,10609,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::basic_fstream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,528,10609,11)
#undef TYPE
#elif __s390x__
#define TYPE std::basic_fstream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,528,10609,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10609,0);
#endif

#if __i386__
#define TYPE std::basic_istream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,148,10624,2)
#undef TYPE
#elif __ia64__
#define TYPE std::basic_istream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,280,10624,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::basic_istream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,148,10624,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::basic_istream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,280,10624,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::basic_istream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,148,10624,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::basic_istream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,280,10624,11)
#undef TYPE
#elif __s390x__
#define TYPE std::basic_istream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,280,10624,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10624,0);
#endif

#if __i386__
#define TYPE std::basic_ostream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,144,10679,2)
#undef TYPE
#elif __ia64__
#define TYPE std::basic_ostream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,272,10679,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::basic_ostream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,144,10679,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::basic_ostream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,272,10679,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::basic_ostream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,144,10679,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::basic_ostream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,272,10679,11)
#undef TYPE
#elif __s390x__
#define TYPE std::basic_ostream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,272,10679,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10679,0);
#endif

#if __i386__
#define TYPE std::messages_base
CheckTypeSize(TYPE,1,10674,2)
#undef TYPE
#elif __ia64__
#define TYPE std::messages_base
CheckTypeSize(TYPE,1,10674,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::messages_base
CheckTypeSize(TYPE,1,10674,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::messages_base
CheckTypeSize(TYPE,1,10674,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::messages_base
CheckTypeSize(TYPE,1,10674,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::messages_base
CheckTypeSize(TYPE,1,10674,11)
#undef TYPE
#elif __s390x__
#define TYPE std::messages_base
CheckTypeSize(TYPE,1,10674,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10674,0);
#endif

#if __i386__
#define TYPE std::runtime_error
CheckTypeSize(TYPE,8,10689,2)
#undef TYPE
#elif __ia64__
#define TYPE std::runtime_error
CheckTypeSize(TYPE,16,10689,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::runtime_error
CheckTypeSize(TYPE,8,10689,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::runtime_error
CheckTypeSize(TYPE,16,10689,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::runtime_error
CheckTypeSize(TYPE,8,10689,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::runtime_error
CheckTypeSize(TYPE,16,10689,11)
#undef TYPE
#elif __s390x__
#define TYPE std::runtime_error
CheckTypeSize(TYPE,16,10689,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10689,0);
#endif

#if __i386__
#define TYPE std::basic_ifstream<char, std::char_traits<char> >
CheckTypeSize(TYPE,280,10604,2)
#undef TYPE
#elif __ia64__
#define TYPE std::basic_ifstream<char, std::char_traits<char> >
CheckTypeSize(TYPE,520,10604,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::basic_ifstream<char, std::char_traits<char> >
CheckTypeSize(TYPE,280,10604,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::basic_ifstream<char, std::char_traits<char> >
CheckTypeSize(TYPE,520,10604,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::basic_ifstream<char, std::char_traits<char> >
CheckTypeSize(TYPE,280,10604,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::basic_ifstream<char, std::char_traits<char> >
CheckTypeSize(TYPE,520,10604,11)
#undef TYPE
#elif __s390x__
#define TYPE std::basic_ifstream<char, std::char_traits<char> >
CheckTypeSize(TYPE,520,10604,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10604,0);
#endif

#if __i386__
#define TYPE std::basic_ifstream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,288,10607,2)
#undef TYPE
#elif __ia64__
#define TYPE std::basic_ifstream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,520,10607,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::basic_ifstream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,288,10607,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::basic_ifstream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,520,10607,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::basic_ifstream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,288,10607,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::basic_ifstream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,520,10607,11)
#undef TYPE
#elif __s390x__
#define TYPE std::basic_ifstream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,520,10607,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10607,0);
#endif

#if __i386__
#define TYPE std::basic_iostream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,152,10620,2)
#undef TYPE
#elif __ia64__
#define TYPE std::basic_iostream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,288,10620,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::basic_iostream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,152,10620,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::basic_iostream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,288,10620,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::basic_iostream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,152,10620,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::basic_iostream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,288,10620,11)
#undef TYPE
#elif __s390x__
#define TYPE std::basic_iostream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,288,10620,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10620,0);
#endif

#if __i386__
#define TYPE std::basic_ofstream<char, std::char_traits<char> >
CheckTypeSize(TYPE,276,10605,2)
#undef TYPE
#elif __ia64__
#define TYPE std::basic_ofstream<char, std::char_traits<char> >
CheckTypeSize(TYPE,512,10605,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::basic_ofstream<char, std::char_traits<char> >
CheckTypeSize(TYPE,276,10605,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::basic_ofstream<char, std::char_traits<char> >
CheckTypeSize(TYPE,512,10605,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::basic_ofstream<char, std::char_traits<char> >
CheckTypeSize(TYPE,276,10605,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::basic_ofstream<char, std::char_traits<char> >
CheckTypeSize(TYPE,512,10605,11)
#undef TYPE
#elif __s390x__
#define TYPE std::basic_ofstream<char, std::char_traits<char> >
CheckTypeSize(TYPE,512,10605,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10605,0);
#endif

#if __i386__
#define TYPE std::basic_ofstream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,284,10608,2)
#undef TYPE
#elif __ia64__
#define TYPE std::basic_ofstream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,512,10608,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::basic_ofstream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,284,10608,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::basic_ofstream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,512,10608,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::basic_ofstream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,284,10608,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::basic_ofstream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,512,10608,11)
#undef TYPE
#elif __s390x__
#define TYPE std::basic_ofstream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,512,10608,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10608,0);
#endif

#if __i386__
#define TYPE std::codecvt_byname<char, char, __mbstate_t>
CheckTypeSize(TYPE,12,10656,2)
#undef TYPE
#elif __ia64__
#define TYPE std::codecvt_byname<char, char, __mbstate_t>
CheckTypeSize(TYPE,24,10656,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::codecvt_byname<char, char, __mbstate_t>
CheckTypeSize(TYPE,12,10656,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::codecvt_byname<char, char, __mbstate_t>
CheckTypeSize(TYPE,24,10656,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::codecvt_byname<char, char, __mbstate_t>
CheckTypeSize(TYPE,12,10656,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::codecvt_byname<char, char, __mbstate_t>
CheckTypeSize(TYPE,24,10656,11)
#undef TYPE
#elif __s390x__
#define TYPE std::codecvt_byname<char, char, __mbstate_t>
CheckTypeSize(TYPE,24,10656,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10656,0);
#endif

#if __i386__
#define TYPE std::codecvt_byname<wchar_t, char, __mbstate_t>
CheckTypeSize(TYPE,12,10670,2)
#undef TYPE
#elif __ia64__
#define TYPE std::codecvt_byname<wchar_t, char, __mbstate_t>
CheckTypeSize(TYPE,24,10670,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::codecvt_byname<wchar_t, char, __mbstate_t>
CheckTypeSize(TYPE,12,10670,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::codecvt_byname<wchar_t, char, __mbstate_t>
CheckTypeSize(TYPE,24,10670,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::codecvt_byname<wchar_t, char, __mbstate_t>
CheckTypeSize(TYPE,12,10670,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::codecvt_byname<wchar_t, char, __mbstate_t>
CheckTypeSize(TYPE,24,10670,11)
#undef TYPE
#elif __s390x__
#define TYPE std::codecvt_byname<wchar_t, char, __mbstate_t>
CheckTypeSize(TYPE,24,10670,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10670,0);
#endif

#if __i386__
#define TYPE std::collate_byname<char>
CheckTypeSize(TYPE,12,10657,2)
#undef TYPE
#elif __ia64__
#define TYPE std::collate_byname<char>
CheckTypeSize(TYPE,24,10657,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::collate_byname<char>
CheckTypeSize(TYPE,12,10657,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::collate_byname<char>
CheckTypeSize(TYPE,24,10657,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::collate_byname<char>
CheckTypeSize(TYPE,12,10657,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::collate_byname<char>
CheckTypeSize(TYPE,24,10657,11)
#undef TYPE
#elif __s390x__
#define TYPE std::collate_byname<char>
CheckTypeSize(TYPE,24,10657,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10657,0);
#endif

#if __i386__
#define TYPE std::collate_byname<wchar_t>
CheckTypeSize(TYPE,12,10671,2)
#undef TYPE
#elif __ia64__
#define TYPE std::collate_byname<wchar_t>
CheckTypeSize(TYPE,24,10671,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::collate_byname<wchar_t>
CheckTypeSize(TYPE,12,10671,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::collate_byname<wchar_t>
CheckTypeSize(TYPE,24,10671,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::collate_byname<wchar_t>
CheckTypeSize(TYPE,12,10671,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::collate_byname<wchar_t>
CheckTypeSize(TYPE,24,10671,11)
#undef TYPE
#elif __s390x__
#define TYPE std::collate_byname<wchar_t>
CheckTypeSize(TYPE,24,10671,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10671,0);
#endif

#if __i386__
#define TYPE std::overflow_error
CheckTypeSize(TYPE,8,10615,2)
#undef TYPE
#elif __ia64__
#define TYPE std::overflow_error
CheckTypeSize(TYPE,16,10615,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::overflow_error
CheckTypeSize(TYPE,8,10615,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::overflow_error
CheckTypeSize(TYPE,16,10615,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::overflow_error
CheckTypeSize(TYPE,8,10615,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::overflow_error
CheckTypeSize(TYPE,16,10615,11)
#undef TYPE
#elif __s390x__
#define TYPE std::overflow_error
CheckTypeSize(TYPE,16,10615,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10615,0);
#endif

#if __i386__
#define TYPE std::basic_streambuf<char, std::char_traits<char> >
CheckTypeSize(TYPE,32,10690,2)
#undef TYPE
#elif __ia64__
#define TYPE std::basic_streambuf<char, std::char_traits<char> >
CheckTypeSize(TYPE,64,10690,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::basic_streambuf<char, std::char_traits<char> >
CheckTypeSize(TYPE,32,10690,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::basic_streambuf<char, std::char_traits<char> >
CheckTypeSize(TYPE,64,10690,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::basic_streambuf<char, std::char_traits<char> >
CheckTypeSize(TYPE,32,10690,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::basic_streambuf<char, std::char_traits<char> >
CheckTypeSize(TYPE,64,10690,11)
#undef TYPE
#elif __s390x__
#define TYPE std::basic_streambuf<char, std::char_traits<char> >
CheckTypeSize(TYPE,64,10690,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10690,0);
#endif

#if __i386__
#define TYPE std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,32,10691,2)
#undef TYPE
#elif __ia64__
#define TYPE std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,64,10691,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,32,10691,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,64,10691,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,32,10691,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,64,10691,11)
#undef TYPE
#elif __s390x__
#define TYPE std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,64,10691,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10691,0);
#endif

#if __i386__
#define TYPE std::basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,40,10680,2)
#undef TYPE
#elif __ia64__
#define TYPE std::basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,80,10680,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,40,10680,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,80,10680,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,40,10680,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,80,10680,11)
#undef TYPE
#elif __s390x__
#define TYPE std::basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,80,10680,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10680,0);
#endif

#if __i386__
#define TYPE std::basic_stringbuf<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,40,10684,2)
#undef TYPE
#elif __ia64__
#define TYPE std::basic_stringbuf<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,80,10684,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::basic_stringbuf<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,40,10684,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::basic_stringbuf<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,80,10684,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::basic_stringbuf<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,40,10684,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::basic_stringbuf<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,80,10684,11)
#undef TYPE
#elif __s390x__
#define TYPE std::basic_stringbuf<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,80,10684,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10684,0);
#endif

#if __i386__
#define TYPE std::messages_byname<char>
CheckTypeSize(TYPE,16,10655,2)
#undef TYPE
#elif __ia64__
#define TYPE std::messages_byname<char>
CheckTypeSize(TYPE,32,10655,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::messages_byname<char>
CheckTypeSize(TYPE,16,10655,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::messages_byname<char>
CheckTypeSize(TYPE,32,10655,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::messages_byname<char>
CheckTypeSize(TYPE,16,10655,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::messages_byname<char>
CheckTypeSize(TYPE,32,10655,11)
#undef TYPE
#elif __s390x__
#define TYPE std::messages_byname<char>
CheckTypeSize(TYPE,32,10655,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10655,0);
#endif

#if __i386__
#define TYPE std::messages_byname<wchar_t>
CheckTypeSize(TYPE,16,10669,2)
#undef TYPE
#elif __ia64__
#define TYPE std::messages_byname<wchar_t>
CheckTypeSize(TYPE,32,10669,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::messages_byname<wchar_t>
CheckTypeSize(TYPE,16,10669,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::messages_byname<wchar_t>
CheckTypeSize(TYPE,32,10669,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::messages_byname<wchar_t>
CheckTypeSize(TYPE,16,10669,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::messages_byname<wchar_t>
CheckTypeSize(TYPE,32,10669,11)
#undef TYPE
#elif __s390x__
#define TYPE std::messages_byname<wchar_t>
CheckTypeSize(TYPE,32,10669,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10669,0);
#endif

#if __i386__
#define TYPE std::numpunct_byname<char>
CheckTypeSize(TYPE,12,10648,2)
#undef TYPE
#elif __ia64__
#define TYPE std::numpunct_byname<char>
CheckTypeSize(TYPE,24,10648,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::numpunct_byname<char>
CheckTypeSize(TYPE,12,10648,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::numpunct_byname<char>
CheckTypeSize(TYPE,24,10648,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::numpunct_byname<char>
CheckTypeSize(TYPE,12,10648,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::numpunct_byname<char>
CheckTypeSize(TYPE,24,10648,11)
#undef TYPE
#elif __s390x__
#define TYPE std::numpunct_byname<char>
CheckTypeSize(TYPE,24,10648,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10648,0);
#endif

#if __i386__
#define TYPE std::numpunct_byname<wchar_t>
CheckTypeSize(TYPE,12,10662,2)
#undef TYPE
#elif __ia64__
#define TYPE std::numpunct_byname<wchar_t>
CheckTypeSize(TYPE,24,10662,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::numpunct_byname<wchar_t>
CheckTypeSize(TYPE,12,10662,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::numpunct_byname<wchar_t>
CheckTypeSize(TYPE,24,10662,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::numpunct_byname<wchar_t>
CheckTypeSize(TYPE,12,10662,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::numpunct_byname<wchar_t>
CheckTypeSize(TYPE,24,10662,11)
#undef TYPE
#elif __s390x__
#define TYPE std::numpunct_byname<wchar_t>
CheckTypeSize(TYPE,24,10662,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10662,0);
#endif

#if __i386__
#define TYPE std::time_get_byname<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,8,10764,2)
#undef TYPE
#elif __ia64__
#define TYPE std::time_get_byname<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10764,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::time_get_byname<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,8,10764,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::time_get_byname<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10764,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::time_get_byname<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,8,10764,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::time_get_byname<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10764,11)
#undef TYPE
#elif __s390x__
#define TYPE std::time_get_byname<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10764,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10764,0);
#endif

#if __i386__
#define TYPE std::time_get_byname<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,8,10766,2)
#undef TYPE
#elif __ia64__
#define TYPE std::time_get_byname<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10766,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::time_get_byname<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,8,10766,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::time_get_byname<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10766,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::time_get_byname<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,8,10766,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::time_get_byname<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10766,11)
#undef TYPE
#elif __s390x__
#define TYPE std::time_get_byname<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10766,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10766,0);
#endif

#if __i386__
#define TYPE std::time_put_byname<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,8,10763,2)
#undef TYPE
#elif __ia64__
#define TYPE std::time_put_byname<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10763,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::time_put_byname<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,8,10763,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::time_put_byname<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10763,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::time_put_byname<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,8,10763,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::time_put_byname<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10763,11)
#undef TYPE
#elif __s390x__
#define TYPE std::time_put_byname<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10763,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10763,0);
#endif

#if __i386__
#define TYPE std::time_put_byname<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,8,10765,2)
#undef TYPE
#elif __ia64__
#define TYPE std::time_put_byname<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10765,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::time_put_byname<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,8,10765,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::time_put_byname<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10765,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::time_put_byname<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,8,10765,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::time_put_byname<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10765,11)
#undef TYPE
#elif __s390x__
#define TYPE std::time_put_byname<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10765,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10765,0);
#endif

#if __i386__
#define TYPE std::underflow_error
CheckTypeSize(TYPE,8,10616,2)
#undef TYPE
#elif __ia64__
#define TYPE std::underflow_error
CheckTypeSize(TYPE,16,10616,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::underflow_error
CheckTypeSize(TYPE,8,10616,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::underflow_error
CheckTypeSize(TYPE,16,10616,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::underflow_error
CheckTypeSize(TYPE,8,10616,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::underflow_error
CheckTypeSize(TYPE,16,10616,11)
#undef TYPE
#elif __s390x__
#define TYPE std::underflow_error
CheckTypeSize(TYPE,16,10616,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10616,0);
#endif

#if __i386__
#define TYPE std::invalid_argument
CheckTypeSize(TYPE,8,10611,2)
#undef TYPE
#elif __ia64__
#define TYPE std::invalid_argument
CheckTypeSize(TYPE,16,10611,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::invalid_argument
CheckTypeSize(TYPE,8,10611,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::invalid_argument
CheckTypeSize(TYPE,16,10611,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::invalid_argument
CheckTypeSize(TYPE,8,10611,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::invalid_argument
CheckTypeSize(TYPE,16,10611,11)
#undef TYPE
#elif __s390x__
#define TYPE std::invalid_argument
CheckTypeSize(TYPE,16,10611,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10611,0);
#endif

#if __i386__
#define TYPE std::moneypunct_byname<char, false>
CheckTypeSize(TYPE,12,10644,2)
#undef TYPE
#elif __ia64__
#define TYPE std::moneypunct_byname<char, false>
CheckTypeSize(TYPE,24,10644,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::moneypunct_byname<char, false>
CheckTypeSize(TYPE,12,10644,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::moneypunct_byname<char, false>
CheckTypeSize(TYPE,24,10644,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::moneypunct_byname<char, false>
CheckTypeSize(TYPE,12,10644,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::moneypunct_byname<char, false>
CheckTypeSize(TYPE,24,10644,11)
#undef TYPE
#elif __s390x__
#define TYPE std::moneypunct_byname<char, false>
CheckTypeSize(TYPE,24,10644,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10644,0);
#endif

#if __i386__
#define TYPE std::moneypunct_byname<char, true>
CheckTypeSize(TYPE,12,10645,2)
#undef TYPE
#elif __ia64__
#define TYPE std::moneypunct_byname<char, true>
CheckTypeSize(TYPE,24,10645,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::moneypunct_byname<char, true>
CheckTypeSize(TYPE,12,10645,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::moneypunct_byname<char, true>
CheckTypeSize(TYPE,24,10645,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::moneypunct_byname<char, true>
CheckTypeSize(TYPE,12,10645,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::moneypunct_byname<char, true>
CheckTypeSize(TYPE,24,10645,11)
#undef TYPE
#elif __s390x__
#define TYPE std::moneypunct_byname<char, true>
CheckTypeSize(TYPE,24,10645,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10645,0);
#endif

#if __i386__
#define TYPE std::moneypunct_byname<wchar_t, false>
CheckTypeSize(TYPE,12,10658,2)
#undef TYPE
#elif __ia64__
#define TYPE std::moneypunct_byname<wchar_t, false>
CheckTypeSize(TYPE,24,10658,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::moneypunct_byname<wchar_t, false>
CheckTypeSize(TYPE,12,10658,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::moneypunct_byname<wchar_t, false>
CheckTypeSize(TYPE,24,10658,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::moneypunct_byname<wchar_t, false>
CheckTypeSize(TYPE,12,10658,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::moneypunct_byname<wchar_t, false>
CheckTypeSize(TYPE,24,10658,11)
#undef TYPE
#elif __s390x__
#define TYPE std::moneypunct_byname<wchar_t, false>
CheckTypeSize(TYPE,24,10658,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10658,0);
#endif

#if __i386__
#define TYPE std::moneypunct_byname<wchar_t, true>
CheckTypeSize(TYPE,12,10659,2)
#undef TYPE
#elif __ia64__
#define TYPE std::moneypunct_byname<wchar_t, true>
CheckTypeSize(TYPE,24,10659,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::moneypunct_byname<wchar_t, true>
CheckTypeSize(TYPE,12,10659,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::moneypunct_byname<wchar_t, true>
CheckTypeSize(TYPE,24,10659,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::moneypunct_byname<wchar_t, true>
CheckTypeSize(TYPE,12,10659,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::moneypunct_byname<wchar_t, true>
CheckTypeSize(TYPE,24,10659,11)
#undef TYPE
#elif __s390x__
#define TYPE std::moneypunct_byname<wchar_t, true>
CheckTypeSize(TYPE,24,10659,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10659,0);
#endif

#if __i386__
#define TYPE std::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,188,10683,2)
#undef TYPE
#elif __ia64__
#define TYPE std::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,368,10683,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,188,10683,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,368,10683,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,188,10683,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,368,10683,11)
#undef TYPE
#elif __s390x__
#define TYPE std::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,368,10683,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10683,0);
#endif

#if __i386__
#define TYPE std::basic_stringstream<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,192,10687,2)
#undef TYPE
#elif __ia64__
#define TYPE std::basic_stringstream<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,368,10687,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::basic_stringstream<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,192,10687,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::basic_stringstream<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,368,10687,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::basic_stringstream<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,192,10687,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::basic_stringstream<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,368,10687,11)
#undef TYPE
#elif __s390x__
#define TYPE std::basic_stringstream<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,368,10687,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10687,0);
#endif

#if __i386__
#define TYPE std::basic_istringstream<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,184,10681,2)
#undef TYPE
#elif __ia64__
#define TYPE std::basic_istringstream<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,360,10681,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::basic_istringstream<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,184,10681,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::basic_istringstream<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,360,10681,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::basic_istringstream<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,184,10681,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::basic_istringstream<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,360,10681,11)
#undef TYPE
#elif __s390x__
#define TYPE std::basic_istringstream<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,360,10681,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10681,0);
#endif

#if __i386__
#define TYPE std::basic_istringstream<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,188,10685,2)
#undef TYPE
#elif __ia64__
#define TYPE std::basic_istringstream<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,360,10685,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::basic_istringstream<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,188,10685,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::basic_istringstream<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,360,10685,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::basic_istringstream<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,188,10685,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::basic_istringstream<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,360,10685,11)
#undef TYPE
#elif __s390x__
#define TYPE std::basic_istringstream<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,360,10685,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10685,0);
#endif

#if __i386__
#define TYPE std::basic_ostringstream<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,180,10682,2)
#undef TYPE
#elif __ia64__
#define TYPE std::basic_ostringstream<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,352,10682,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::basic_ostringstream<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,180,10682,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::basic_ostringstream<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,352,10682,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::basic_ostringstream<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,180,10682,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::basic_ostringstream<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,352,10682,11)
#undef TYPE
#elif __s390x__
#define TYPE std::basic_ostringstream<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,352,10682,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10682,0);
#endif

#if __i386__
#define TYPE std::basic_ostringstream<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,184,10686,2)
#undef TYPE
#elif __ia64__
#define TYPE std::basic_ostringstream<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,352,10686,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::basic_ostringstream<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,184,10686,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::basic_ostringstream<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,352,10686,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::basic_ostringstream<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,184,10686,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::basic_ostringstream<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,352,10686,11)
#undef TYPE
#elif __s390x__
#define TYPE std::basic_ostringstream<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,352,10686,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10686,0);
#endif

#if __i386__
#define TYPE std::__ctype_abstract_base<char>
CheckTypeSize(TYPE,8,10626,2)
#undef TYPE
#elif __ia64__
#define TYPE std::__ctype_abstract_base<char>
CheckTypeSize(TYPE,16,10626,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::__ctype_abstract_base<char>
CheckTypeSize(TYPE,8,10626,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::__ctype_abstract_base<char>
CheckTypeSize(TYPE,16,10626,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::__ctype_abstract_base<char>
CheckTypeSize(TYPE,8,10626,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::__ctype_abstract_base<char>
CheckTypeSize(TYPE,16,10626,11)
#undef TYPE
#elif __s390x__
#define TYPE std::__ctype_abstract_base<char>
CheckTypeSize(TYPE,16,10626,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10626,0);
#endif

#if __i386__
#define TYPE std::__ctype_abstract_base<wchar_t>
CheckTypeSize(TYPE,8,10627,2)
#undef TYPE
#elif __ia64__
#define TYPE std::__ctype_abstract_base<wchar_t>
CheckTypeSize(TYPE,16,10627,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::__ctype_abstract_base<wchar_t>
CheckTypeSize(TYPE,8,10627,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::__ctype_abstract_base<wchar_t>
CheckTypeSize(TYPE,16,10627,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::__ctype_abstract_base<wchar_t>
CheckTypeSize(TYPE,8,10627,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::__ctype_abstract_base<wchar_t>
CheckTypeSize(TYPE,16,10627,11)
#undef TYPE
#elif __s390x__
#define TYPE std::__ctype_abstract_base<wchar_t>
CheckTypeSize(TYPE,16,10627,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10627,0);
#endif

#if __i386__
#define TYPE std::__codecvt_abstract_base<char, char, __mbstate_t>
CheckTypeSize(TYPE,8,10630,2)
#undef TYPE
#elif __ia64__
#define TYPE std::__codecvt_abstract_base<char, char, __mbstate_t>
CheckTypeSize(TYPE,16,10630,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::__codecvt_abstract_base<char, char, __mbstate_t>
CheckTypeSize(TYPE,8,10630,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::__codecvt_abstract_base<char, char, __mbstate_t>
CheckTypeSize(TYPE,16,10630,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::__codecvt_abstract_base<char, char, __mbstate_t>
CheckTypeSize(TYPE,8,10630,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::__codecvt_abstract_base<char, char, __mbstate_t>
CheckTypeSize(TYPE,16,10630,11)
#undef TYPE
#elif __s390x__
#define TYPE std::__codecvt_abstract_base<char, char, __mbstate_t>
CheckTypeSize(TYPE,16,10630,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10630,0);
#endif

#if __i386__
#define TYPE std::__codecvt_abstract_base<wchar_t, char, __mbstate_t>
CheckTypeSize(TYPE,8,10631,2)
#undef TYPE
#elif __ia64__
#define TYPE std::__codecvt_abstract_base<wchar_t, char, __mbstate_t>
CheckTypeSize(TYPE,16,10631,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::__codecvt_abstract_base<wchar_t, char, __mbstate_t>
CheckTypeSize(TYPE,8,10631,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::__codecvt_abstract_base<wchar_t, char, __mbstate_t>
CheckTypeSize(TYPE,16,10631,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::__codecvt_abstract_base<wchar_t, char, __mbstate_t>
CheckTypeSize(TYPE,8,10631,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::__codecvt_abstract_base<wchar_t, char, __mbstate_t>
CheckTypeSize(TYPE,16,10631,11)
#undef TYPE
#elif __s390x__
#define TYPE std::__codecvt_abstract_base<wchar_t, char, __mbstate_t>
CheckTypeSize(TYPE,16,10631,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10631,0);
#endif

#if __i386__
#define TYPE std::ctype<char>
CheckTypeSize(TYPE,544,10598,2)
#undef TYPE
#elif __ia64__
#define TYPE std::ctype<char>
CheckTypeSize(TYPE,576,10598,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::ctype<char>
CheckTypeSize(TYPE,544,10598,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::ctype<char>
CheckTypeSize(TYPE,576,10598,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::ctype<char>
CheckTypeSize(TYPE,544,10598,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::ctype<char>
CheckTypeSize(TYPE,576,10598,11)
#undef TYPE
#elif __s390x__
#define TYPE std::ctype<char>
CheckTypeSize(TYPE,576,10598,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10598,0);
#endif

#if __i386__
#define TYPE std::ctype<wchar_t>
CheckTypeSize(TYPE,1264,10599,2)
#undef TYPE
#elif __ia64__
#define TYPE std::ctype<wchar_t>
CheckTypeSize(TYPE,1344,10599,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::ctype<wchar_t>
CheckTypeSize(TYPE,1264,10599,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::ctype<wchar_t>
CheckTypeSize(TYPE,1344,10599,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::ctype<wchar_t>
CheckTypeSize(TYPE,1264,10599,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::ctype<wchar_t>
CheckTypeSize(TYPE,1344,10599,11)
#undef TYPE
#elif __s390x__
#define TYPE std::ctype<wchar_t>
CheckTypeSize(TYPE,1344,10599,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10599,0);
#endif

#if __i386__
#define TYPE std::codecvt<char, char, __mbstate_t>
CheckTypeSize(TYPE,12,10596,2)
#undef TYPE
#elif __ia64__
#define TYPE std::codecvt<char, char, __mbstate_t>
CheckTypeSize(TYPE,24,10596,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::codecvt<char, char, __mbstate_t>
CheckTypeSize(TYPE,12,10596,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::codecvt<char, char, __mbstate_t>
CheckTypeSize(TYPE,24,10596,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::codecvt<char, char, __mbstate_t>
CheckTypeSize(TYPE,12,10596,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::codecvt<char, char, __mbstate_t>
CheckTypeSize(TYPE,24,10596,11)
#undef TYPE
#elif __s390x__
#define TYPE std::codecvt<char, char, __mbstate_t>
CheckTypeSize(TYPE,24,10596,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10596,0);
#endif

#if __i386__
#define TYPE std::codecvt<wchar_t, char, __mbstate_t>
CheckTypeSize(TYPE,12,10597,2)
#undef TYPE
#elif __ia64__
#define TYPE std::codecvt<wchar_t, char, __mbstate_t>
CheckTypeSize(TYPE,24,10597,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::codecvt<wchar_t, char, __mbstate_t>
CheckTypeSize(TYPE,12,10597,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::codecvt<wchar_t, char, __mbstate_t>
CheckTypeSize(TYPE,24,10597,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::codecvt<wchar_t, char, __mbstate_t>
CheckTypeSize(TYPE,12,10597,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::codecvt<wchar_t, char, __mbstate_t>
CheckTypeSize(TYPE,24,10597,11)
#undef TYPE
#elif __s390x__
#define TYPE std::codecvt<wchar_t, char, __mbstate_t>
CheckTypeSize(TYPE,24,10597,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10597,0);
#endif

#if __i386__
#define TYPE std::collate<char>
CheckTypeSize(TYPE,12,10634,2)
#undef TYPE
#elif __ia64__
#define TYPE std::collate<char>
CheckTypeSize(TYPE,24,10634,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::collate<char>
CheckTypeSize(TYPE,12,10634,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::collate<char>
CheckTypeSize(TYPE,24,10634,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::collate<char>
CheckTypeSize(TYPE,12,10634,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::collate<char>
CheckTypeSize(TYPE,24,10634,11)
#undef TYPE
#elif __s390x__
#define TYPE std::collate<char>
CheckTypeSize(TYPE,24,10634,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10634,0);
#endif

#if __i386__
#define TYPE std::collate<wchar_t>
CheckTypeSize(TYPE,12,10635,2)
#undef TYPE
#elif __ia64__
#define TYPE std::collate<wchar_t>
CheckTypeSize(TYPE,24,10635,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::collate<wchar_t>
CheckTypeSize(TYPE,12,10635,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::collate<wchar_t>
CheckTypeSize(TYPE,24,10635,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::collate<wchar_t>
CheckTypeSize(TYPE,12,10635,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::collate<wchar_t>
CheckTypeSize(TYPE,24,10635,11)
#undef TYPE
#elif __s390x__
#define TYPE std::collate<wchar_t>
CheckTypeSize(TYPE,24,10635,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10635,0);
#endif

#if __i386__
#define TYPE std::num_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,8,10649,2)
#undef TYPE
#elif __ia64__
#define TYPE std::num_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10649,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::num_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,8,10649,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::num_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10649,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::num_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,8,10649,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::num_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10649,11)
#undef TYPE
#elif __s390x__
#define TYPE std::num_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10649,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10649,0);
#endif

#if __i386__
#define TYPE std::num_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,8,10663,2)
#undef TYPE
#elif __ia64__
#define TYPE std::num_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10663,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::num_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,8,10663,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::num_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10663,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::num_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,8,10663,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::num_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10663,11)
#undef TYPE
#elif __s390x__
#define TYPE std::num_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10663,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10663,0);
#endif

#if __i386__
#define TYPE std::num_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,8,10650,2)
#undef TYPE
#elif __ia64__
#define TYPE std::num_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10650,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::num_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,8,10650,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::num_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10650,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::num_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,8,10650,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::num_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10650,11)
#undef TYPE
#elif __s390x__
#define TYPE std::num_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10650,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10650,0);
#endif

#if __i386__
#define TYPE std::num_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,8,10664,2)
#undef TYPE
#elif __ia64__
#define TYPE std::num_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10664,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::num_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,8,10664,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::num_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10664,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::num_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,8,10664,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::num_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10664,11)
#undef TYPE
#elif __s390x__
#define TYPE std::num_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10664,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10664,0);
#endif

#if __i386__
#define TYPE std::bad_cast
CheckTypeSize(TYPE,4,10700,2)
#undef TYPE
#elif __ia64__
#define TYPE std::bad_cast
CheckTypeSize(TYPE,8,10700,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::bad_cast
CheckTypeSize(TYPE,4,10700,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::bad_cast
CheckTypeSize(TYPE,8,10700,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::bad_cast
CheckTypeSize(TYPE,4,10700,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::bad_cast
CheckTypeSize(TYPE,8,10700,11)
#undef TYPE
#elif __s390x__
#define TYPE std::bad_cast
CheckTypeSize(TYPE,8,10700,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10700,0);
#endif

#if __i386__
#define TYPE std::ios_base
CheckTypeSize(TYPE,112,10621,2)
#undef TYPE
#elif __ia64__
#define TYPE std::ios_base
CheckTypeSize(TYPE,216,10621,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::ios_base
CheckTypeSize(TYPE,112,10621,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::ios_base
CheckTypeSize(TYPE,216,10621,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::ios_base
CheckTypeSize(TYPE,112,10621,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::ios_base
CheckTypeSize(TYPE,216,10621,11)
#undef TYPE
#elif __s390x__
#define TYPE std::ios_base
CheckTypeSize(TYPE,216,10621,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10621,0);
#endif

#if __i386__
#define TYPE std::messages<char>
CheckTypeSize(TYPE,16,10642,2)
#undef TYPE
#elif __ia64__
#define TYPE std::messages<char>
CheckTypeSize(TYPE,32,10642,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::messages<char>
CheckTypeSize(TYPE,16,10642,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::messages<char>
CheckTypeSize(TYPE,32,10642,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::messages<char>
CheckTypeSize(TYPE,16,10642,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::messages<char>
CheckTypeSize(TYPE,32,10642,11)
#undef TYPE
#elif __s390x__
#define TYPE std::messages<char>
CheckTypeSize(TYPE,32,10642,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10642,0);
#endif

#if __i386__
#define TYPE std::messages<wchar_t>
CheckTypeSize(TYPE,16,10643,2)
#undef TYPE
#elif __ia64__
#define TYPE std::messages<wchar_t>
CheckTypeSize(TYPE,32,10643,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::messages<wchar_t>
CheckTypeSize(TYPE,16,10643,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::messages<wchar_t>
CheckTypeSize(TYPE,32,10643,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::messages<wchar_t>
CheckTypeSize(TYPE,16,10643,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::messages<wchar_t>
CheckTypeSize(TYPE,32,10643,11)
#undef TYPE
#elif __s390x__
#define TYPE std::messages<wchar_t>
CheckTypeSize(TYPE,32,10643,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10643,0);
#endif

#if __i386__
#define TYPE std::numpunct<char>
CheckTypeSize(TYPE,12,10632,2)
#undef TYPE
#elif __ia64__
#define TYPE std::numpunct<char>
CheckTypeSize(TYPE,24,10632,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::numpunct<char>
CheckTypeSize(TYPE,12,10632,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::numpunct<char>
CheckTypeSize(TYPE,24,10632,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::numpunct<char>
CheckTypeSize(TYPE,12,10632,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::numpunct<char>
CheckTypeSize(TYPE,24,10632,11)
#undef TYPE
#elif __s390x__
#define TYPE std::numpunct<char>
CheckTypeSize(TYPE,24,10632,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10632,0);
#endif

#if __i386__
#define TYPE std::numpunct<wchar_t>
CheckTypeSize(TYPE,12,10633,2)
#undef TYPE
#elif __ia64__
#define TYPE std::numpunct<wchar_t>
CheckTypeSize(TYPE,24,10633,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::numpunct<wchar_t>
CheckTypeSize(TYPE,12,10633,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::numpunct<wchar_t>
CheckTypeSize(TYPE,24,10633,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::numpunct<wchar_t>
CheckTypeSize(TYPE,12,10633,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::numpunct<wchar_t>
CheckTypeSize(TYPE,24,10633,11)
#undef TYPE
#elif __s390x__
#define TYPE std::numpunct<wchar_t>
CheckTypeSize(TYPE,24,10633,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10633,0);
#endif

#if __i386__
#define TYPE std::time_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,8,10653,2)
#undef TYPE
#elif __ia64__
#define TYPE std::time_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10653,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::time_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,8,10653,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::time_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10653,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::time_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,8,10653,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::time_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10653,11)
#undef TYPE
#elif __s390x__
#define TYPE std::time_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10653,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10653,0);
#endif

#if __i386__
#define TYPE std::time_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,8,10667,2)
#undef TYPE
#elif __ia64__
#define TYPE std::time_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10667,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::time_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,8,10667,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::time_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10667,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::time_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,8,10667,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::time_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10667,11)
#undef TYPE
#elif __s390x__
#define TYPE std::time_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10667,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10667,0);
#endif

#if __i386__
#define TYPE std::time_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,8,10651,2)
#undef TYPE
#elif __ia64__
#define TYPE std::time_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10651,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::time_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,8,10651,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::time_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10651,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::time_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,8,10651,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::time_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10651,11)
#undef TYPE
#elif __s390x__
#define TYPE std::time_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10651,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10651,0);
#endif

#if __i386__
#define TYPE std::time_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,8,10665,2)
#undef TYPE
#elif __ia64__
#define TYPE std::time_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10665,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::time_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,8,10665,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::time_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10665,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::time_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,8,10665,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::time_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10665,11)
#undef TYPE
#elif __s390x__
#define TYPE std::time_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10665,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10665,0);
#endif

#if __i386__
#define TYPE std::bad_alloc
CheckTypeSize(TYPE,4,10698,2)
#undef TYPE
#elif __ia64__
#define TYPE std::bad_alloc
CheckTypeSize(TYPE,8,10698,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::bad_alloc
CheckTypeSize(TYPE,4,10698,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::bad_alloc
CheckTypeSize(TYPE,8,10698,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::bad_alloc
CheckTypeSize(TYPE,4,10698,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::bad_alloc
CheckTypeSize(TYPE,8,10698,11)
#undef TYPE
#elif __s390x__
#define TYPE std::bad_alloc
CheckTypeSize(TYPE,8,10698,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10698,0);
#endif

#if __i386__
#define TYPE std::basic_ios<char, std::char_traits<char> >
CheckTypeSize(TYPE,136,10617,2)
#undef TYPE
#elif __ia64__
#define TYPE std::basic_ios<char, std::char_traits<char> >
CheckTypeSize(TYPE,264,10617,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::basic_ios<char, std::char_traits<char> >
CheckTypeSize(TYPE,136,10617,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::basic_ios<char, std::char_traits<char> >
CheckTypeSize(TYPE,264,10617,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::basic_ios<char, std::char_traits<char> >
CheckTypeSize(TYPE,136,10617,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::basic_ios<char, std::char_traits<char> >
CheckTypeSize(TYPE,264,10617,11)
#undef TYPE
#elif __s390x__
#define TYPE std::basic_ios<char, std::char_traits<char> >
CheckTypeSize(TYPE,264,10617,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10617,0);
#endif

#if __i386__
#define TYPE std::basic_ios<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,140,10618,2)
#undef TYPE
#elif __ia64__
#define TYPE std::basic_ios<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,264,10618,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::basic_ios<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,140,10618,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::basic_ios<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,264,10618,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::basic_ios<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,140,10618,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::basic_ios<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,264,10618,11)
#undef TYPE
#elif __s390x__
#define TYPE std::basic_ios<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,264,10618,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10618,0);
#endif

#if __i386__
#define TYPE std::exception
CheckTypeSize(TYPE,4,10696,2)
#undef TYPE
#elif __ia64__
#define TYPE std::exception
CheckTypeSize(TYPE,8,10696,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::exception
CheckTypeSize(TYPE,4,10696,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::exception
CheckTypeSize(TYPE,8,10696,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::exception
CheckTypeSize(TYPE,4,10696,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::exception
CheckTypeSize(TYPE,8,10696,11)
#undef TYPE
#elif __s390x__
#define TYPE std::exception
CheckTypeSize(TYPE,8,10696,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10696,0);
#endif

#if __i386__
#define TYPE std::money_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,8,10646,2)
#undef TYPE
#elif __ia64__
#define TYPE std::money_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10646,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::money_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,8,10646,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::money_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10646,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::money_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,8,10646,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::money_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10646,11)
#undef TYPE
#elif __s390x__
#define TYPE std::money_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10646,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10646,0);
#endif

#if __i386__
#define TYPE std::money_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,8,10660,2)
#undef TYPE
#elif __ia64__
#define TYPE std::money_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10660,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::money_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,8,10660,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::money_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10660,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::money_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,8,10660,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::money_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10660,11)
#undef TYPE
#elif __s390x__
#define TYPE std::money_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10660,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10660,0);
#endif

#if __i386__
#define TYPE std::money_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,8,10647,2)
#undef TYPE
#elif __ia64__
#define TYPE std::money_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10647,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::money_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,8,10647,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::money_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10647,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::money_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,8,10647,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::money_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10647,11)
#undef TYPE
#elif __s390x__
#define TYPE std::money_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10647,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10647,0);
#endif

#if __i386__
#define TYPE std::money_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,8,10661,2)
#undef TYPE
#elif __ia64__
#define TYPE std::money_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10661,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::money_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,8,10661,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::money_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10661,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::money_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,8,10661,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::money_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10661,11)
#undef TYPE
#elif __s390x__
#define TYPE std::money_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10661,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10661,0);
#endif

#if __i386__
#define TYPE std::strstream
CheckTypeSize(TYPE,192,10695,2)
#undef TYPE
#elif __ia64__
#define TYPE std::strstream
CheckTypeSize(TYPE,376,10695,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::strstream
CheckTypeSize(TYPE,192,10695,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::strstream
CheckTypeSize(TYPE,376,10695,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::strstream
CheckTypeSize(TYPE,192,10695,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::strstream
CheckTypeSize(TYPE,376,10695,11)
#undef TYPE
#elif __s390x__
#define TYPE std::strstream
CheckTypeSize(TYPE,376,10695,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10695,0);
#endif

#if __i386__
#define TYPE std::time_base
CheckTypeSize(TYPE,1,10672,2)
#undef TYPE
#elif __ia64__
#define TYPE std::time_base
CheckTypeSize(TYPE,1,10672,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::time_base
CheckTypeSize(TYPE,1,10672,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::time_base
CheckTypeSize(TYPE,1,10672,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::time_base
CheckTypeSize(TYPE,1,10672,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::time_base
CheckTypeSize(TYPE,1,10672,11)
#undef TYPE
#elif __s390x__
#define TYPE std::time_base
CheckTypeSize(TYPE,1,10672,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10672,0);
#endif

#if __i386__
#define TYPE std::type_info
CheckTypeSize(TYPE,8,10699,2)
#undef TYPE
#elif __ia64__
#define TYPE std::type_info
CheckTypeSize(TYPE,16,10699,3)
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::type_info
CheckTypeSize(TYPE,8,10699,6)
#undef TYPE
#elif __powerpc64__
#define TYPE std::type_info
CheckTypeSize(TYPE,16,10699,9)
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::type_info
CheckTypeSize(TYPE,8,10699,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::type_info
CheckTypeSize(TYPE,16,10699,11)
#undef TYPE
#elif __s390x__
#define TYPE std::type_info
CheckTypeSize(TYPE,16,10699,12)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10699,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in C++ types\n\n",pcnt,cnt);
return cnt;
#endif

}
