/*
 * Test of gtk-2.0/gtk/gtkenums.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include "gtk-2.0/gtk/gtkenums.h"



#ifdef TET_TEST
void gtk_2_0_gtk_gtkenums_h()
{
#else
int gtk_2_0_gtk_gtkenums_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in gtk-2.0/gtk/gtkenums.h\n");
#endif

printf("Checking data structures in gtk-2.0/gtk/gtkenums.h\n");
#if defined __s390x__
CheckTypeSize(GtkStateType,4, 13125, 12, 3.1, NULL, 13124, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkStateType,4, 13125, 11, 3.1, NULL, 13124, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkStateType,4, 13125, 10, 3.1, NULL, 13124, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkStateType,4, 13125, 9, 3.1, NULL, 13124, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkStateType,4, 13125, 6, 3.1, NULL, 13124, NULL)
#elif defined __ia64__
CheckTypeSize(GtkStateType,4, 13125, 3, 3.1, NULL, 13124, NULL)
#elif defined __i386__
CheckTypeSize(GtkStateType,4, 13125, 2, 3.1, NULL, 13124, NULL)
#else
Msg("Find size of GtkStateType (13125)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13124,NULL);\n",architecture,13125,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkSortType,4, 13158, 12, 3.1, NULL, 13157, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkSortType,4, 13158, 11, 3.1, NULL, 13157, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkSortType,4, 13158, 10, 3.1, NULL, 13157, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkSortType,4, 13158, 9, 3.1, NULL, 13157, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkSortType,4, 13158, 6, 3.1, NULL, 13157, NULL)
#elif defined __ia64__
CheckTypeSize(GtkSortType,4, 13158, 3, 3.1, NULL, 13157, NULL)
#elif defined __i386__
CheckTypeSize(GtkSortType,4, 13158, 2, 3.1, NULL, 13157, NULL)
#else
Msg("Find size of GtkSortType (13158)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13157,NULL);\n",architecture,13158,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkUpdateType,4, 13180, 12, 3.1, NULL, 13179, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkUpdateType,4, 13180, 11, 3.1, NULL, 13179, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkUpdateType,4, 13180, 10, 3.1, NULL, 13179, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkUpdateType,4, 13180, 9, 3.1, NULL, 13179, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkUpdateType,4, 13180, 6, 3.1, NULL, 13179, NULL)
#elif defined __ia64__
CheckTypeSize(GtkUpdateType,4, 13180, 3, 3.1, NULL, 13179, NULL)
#elif defined __i386__
CheckTypeSize(GtkUpdateType,4, 13180, 2, 3.1, NULL, 13179, NULL)
#else
Msg("Find size of GtkUpdateType (13180)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13179,NULL);\n",architecture,13180,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkOrientation,4, 13182, 12, 3.1, NULL, 13181, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkOrientation,4, 13182, 11, 3.1, NULL, 13181, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkOrientation,4, 13182, 10, 3.1, NULL, 13181, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkOrientation,4, 13182, 9, 3.1, NULL, 13181, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkOrientation,4, 13182, 6, 3.1, NULL, 13181, NULL)
#elif defined __ia64__
CheckTypeSize(GtkOrientation,4, 13182, 3, 3.1, NULL, 13181, NULL)
#elif defined __i386__
CheckTypeSize(GtkOrientation,4, 13182, 2, 3.1, NULL, 13181, NULL)
#else
Msg("Find size of GtkOrientation (13182)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13181,NULL);\n",architecture,13182,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkButtonBoxStyle,4, 13216, 12, 3.1, NULL, 13215, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkButtonBoxStyle,4, 13216, 11, 3.1, NULL, 13215, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkButtonBoxStyle,4, 13216, 10, 3.1, NULL, 13215, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkButtonBoxStyle,4, 13216, 9, 3.1, NULL, 13215, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkButtonBoxStyle,4, 13216, 6, 3.1, NULL, 13215, NULL)
#elif defined __ia64__
CheckTypeSize(GtkButtonBoxStyle,4, 13216, 3, 3.1, NULL, 13215, NULL)
#elif defined __i386__
CheckTypeSize(GtkButtonBoxStyle,4, 13216, 2, 3.1, NULL, 13215, NULL)
#else
Msg("Find size of GtkButtonBoxStyle (13216)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13215,NULL);\n",architecture,13216,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkJustification,4, 13238, 12, 3.1, NULL, 13237, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkJustification,4, 13238, 11, 3.1, NULL, 13237, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkJustification,4, 13238, 10, 3.1, NULL, 13237, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkJustification,4, 13238, 9, 3.1, NULL, 13237, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkJustification,4, 13238, 6, 3.1, NULL, 13237, NULL)
#elif defined __ia64__
CheckTypeSize(GtkJustification,4, 13238, 3, 3.1, NULL, 13237, NULL)
#elif defined __i386__
CheckTypeSize(GtkJustification,4, 13238, 2, 3.1, NULL, 13237, NULL)
#else
Msg("Find size of GtkJustification (13238)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13237,NULL);\n",architecture,13238,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTextDirection,4, 13240, 12, 3.1, NULL, 13239, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTextDirection,4, 13240, 11, 3.1, NULL, 13239, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTextDirection,4, 13240, 10, 3.1, NULL, 13239, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTextDirection,4, 13240, 9, 3.1, NULL, 13239, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTextDirection,4, 13240, 6, 3.1, NULL, 13239, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTextDirection,4, 13240, 3, 3.1, NULL, 13239, NULL)
#elif defined __i386__
CheckTypeSize(GtkTextDirection,4, 13240, 2, 3.1, NULL, 13239, NULL)
#else
Msg("Find size of GtkTextDirection (13240)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13239,NULL);\n",architecture,13240,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkWrapMode,4, 13242, 12, 3.1, NULL, 13241, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkWrapMode,4, 13242, 11, 3.1, NULL, 13241, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkWrapMode,4, 13242, 10, 3.1, NULL, 13241, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkWrapMode,4, 13242, 9, 3.1, NULL, 13241, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkWrapMode,4, 13242, 6, 3.1, NULL, 13241, NULL)
#elif defined __ia64__
CheckTypeSize(GtkWrapMode,4, 13242, 3, 3.1, NULL, 13241, NULL)
#elif defined __i386__
CheckTypeSize(GtkWrapMode,4, 13242, 2, 3.1, NULL, 13241, NULL)
#else
Msg("Find size of GtkWrapMode (13242)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13241,NULL);\n",architecture,13242,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkCurveType,4, 13324, 12, 3.1, NULL, 13323, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkCurveType,4, 13324, 11, 3.1, NULL, 13323, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkCurveType,4, 13324, 10, 3.1, NULL, 13323, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkCurveType,4, 13324, 9, 3.1, NULL, 13323, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkCurveType,4, 13324, 6, 3.1, NULL, 13323, NULL)
#elif defined __ia64__
CheckTypeSize(GtkCurveType,4, 13324, 3, 3.1, NULL, 13323, NULL)
#elif defined __i386__
CheckTypeSize(GtkCurveType,4, 13324, 2, 3.1, NULL, 13323, NULL)
#else
Msg("Find size of GtkCurveType (13324)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13323,NULL);\n",architecture,13324,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkPackType,4, 13351, 12, 3.1, NULL, 13350, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkPackType,4, 13351, 11, 3.1, NULL, 13350, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkPackType,4, 13351, 10, 3.1, NULL, 13350, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkPackType,4, 13351, 9, 3.1, NULL, 13350, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkPackType,4, 13351, 6, 3.1, NULL, 13350, NULL)
#elif defined __ia64__
CheckTypeSize(GtkPackType,4, 13351, 3, 3.1, NULL, 13350, NULL)
#elif defined __i386__
CheckTypeSize(GtkPackType,4, 13351, 2, 3.1, NULL, 13350, NULL)
#else
Msg("Find size of GtkPackType (13351)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13350,NULL);\n",architecture,13351,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkArrowType,4, 13411, 12, 3.1, NULL, 13410, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkArrowType,4, 13411, 11, 3.1, NULL, 13410, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkArrowType,4, 13411, 10, 3.1, NULL, 13410, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkArrowType,4, 13411, 9, 3.1, NULL, 13410, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkArrowType,4, 13411, 6, 3.1, NULL, 13410, NULL)
#elif defined __ia64__
CheckTypeSize(GtkArrowType,4, 13411, 3, 3.1, NULL, 13410, NULL)
#elif defined __i386__
CheckTypeSize(GtkArrowType,4, 13411, 2, 3.1, NULL, 13410, NULL)
#else
Msg("Find size of GtkArrowType (13411)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13410,NULL);\n",architecture,13411,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkShadowType,4, 13413, 12, 3.1, NULL, 13412, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkShadowType,4, 13413, 11, 3.1, NULL, 13412, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkShadowType,4, 13413, 10, 3.1, NULL, 13412, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkShadowType,4, 13413, 9, 3.1, NULL, 13412, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkShadowType,4, 13413, 6, 3.1, NULL, 13412, NULL)
#elif defined __ia64__
CheckTypeSize(GtkShadowType,4, 13413, 3, 3.1, NULL, 13412, NULL)
#elif defined __i386__
CheckTypeSize(GtkShadowType,4, 13413, 2, 3.1, NULL, 13412, NULL)
#else
Msg("Find size of GtkShadowType (13413)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13412,NULL);\n",architecture,13413,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkDirectionType,4, 13444, 12, 3.1, NULL, 13443, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkDirectionType,4, 13444, 11, 3.1, NULL, 13443, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkDirectionType,4, 13444, 10, 3.1, NULL, 13443, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkDirectionType,4, 13444, 9, 3.1, NULL, 13443, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkDirectionType,4, 13444, 6, 3.1, NULL, 13443, NULL)
#elif defined __ia64__
CheckTypeSize(GtkDirectionType,4, 13444, 3, 3.1, NULL, 13443, NULL)
#elif defined __i386__
CheckTypeSize(GtkDirectionType,4, 13444, 2, 3.1, NULL, 13443, NULL)
#else
Msg("Find size of GtkDirectionType (13444)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13443,NULL);\n",architecture,13444,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkIconSize,4, 13515, 12, 3.1, NULL, 13514, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkIconSize,4, 13515, 11, 3.1, NULL, 13514, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkIconSize,4, 13515, 10, 3.1, NULL, 13514, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkIconSize,4, 13515, 9, 3.1, NULL, 13514, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkIconSize,4, 13515, 6, 3.1, NULL, 13514, NULL)
#elif defined __ia64__
CheckTypeSize(GtkIconSize,4, 13515, 3, 3.1, NULL, 13514, NULL)
#elif defined __i386__
CheckTypeSize(GtkIconSize,4, 13515, 2, 3.1, NULL, 13514, NULL)
#else
Msg("Find size of GtkIconSize (13515)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13514,NULL);\n",architecture,13515,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkSelectionMode,4, 13578, 12, 3.1, NULL, 13577, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkSelectionMode,4, 13578, 11, 3.1, NULL, 13577, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkSelectionMode,4, 13578, 10, 3.1, NULL, 13577, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkSelectionMode,4, 13578, 9, 3.1, NULL, 13577, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkSelectionMode,4, 13578, 6, 3.1, NULL, 13577, NULL)
#elif defined __ia64__
CheckTypeSize(GtkSelectionMode,4, 13578, 3, 3.1, NULL, 13577, NULL)
#elif defined __i386__
CheckTypeSize(GtkSelectionMode,4, 13578, 2, 3.1, NULL, 13577, NULL)
#else
Msg("Find size of GtkSelectionMode (13578)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13577,NULL);\n",architecture,13578,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkCornerType,4, 13604, 12, 3.1, NULL, 13603, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkCornerType,4, 13604, 11, 3.1, NULL, 13603, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkCornerType,4, 13604, 10, 3.1, NULL, 13603, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkCornerType,4, 13604, 9, 3.1, NULL, 13603, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkCornerType,4, 13604, 6, 3.1, NULL, 13603, NULL)
#elif defined __ia64__
CheckTypeSize(GtkCornerType,4, 13604, 3, 3.1, NULL, 13603, NULL)
#elif defined __i386__
CheckTypeSize(GtkCornerType,4, 13604, 2, 3.1, NULL, 13603, NULL)
#else
Msg("Find size of GtkCornerType (13604)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13603,NULL);\n",architecture,13604,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkPositionType,4, 13629, 12, 3.1, NULL, 13628, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkPositionType,4, 13629, 11, 3.1, NULL, 13628, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkPositionType,4, 13629, 10, 3.1, NULL, 13628, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkPositionType,4, 13629, 9, 3.1, NULL, 13628, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkPositionType,4, 13629, 6, 3.1, NULL, 13628, NULL)
#elif defined __ia64__
CheckTypeSize(GtkPositionType,4, 13629, 3, 3.1, NULL, 13628, NULL)
#elif defined __i386__
CheckTypeSize(GtkPositionType,4, 13629, 2, 3.1, NULL, 13628, NULL)
#else
Msg("Find size of GtkPositionType (13629)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13628,NULL);\n",architecture,13629,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkToolbarStyle,4, 13700, 12, 3.1, NULL, 13699, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkToolbarStyle,4, 13700, 11, 3.1, NULL, 13699, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkToolbarStyle,4, 13700, 10, 3.1, NULL, 13699, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkToolbarStyle,4, 13700, 9, 3.1, NULL, 13699, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkToolbarStyle,4, 13700, 6, 3.1, NULL, 13699, NULL)
#elif defined __ia64__
CheckTypeSize(GtkToolbarStyle,4, 13700, 3, 3.1, NULL, 13699, NULL)
#elif defined __i386__
CheckTypeSize(GtkToolbarStyle,4, 13700, 2, 3.1, NULL, 13699, NULL)
#else
Msg("Find size of GtkToolbarStyle (13700)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13699,NULL);\n",architecture,13700,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkReliefStyle,4, 13712, 12, 3.1, NULL, 13711, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkReliefStyle,4, 13712, 11, 3.1, NULL, 13711, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkReliefStyle,4, 13712, 10, 3.1, NULL, 13711, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkReliefStyle,4, 13712, 9, 3.1, NULL, 13711, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkReliefStyle,4, 13712, 6, 3.1, NULL, 13711, NULL)
#elif defined __ia64__
CheckTypeSize(GtkReliefStyle,4, 13712, 3, 3.1, NULL, 13711, NULL)
#elif defined __i386__
CheckTypeSize(GtkReliefStyle,4, 13712, 2, 3.1, NULL, 13711, NULL)
#else
Msg("Find size of GtkReliefStyle (13712)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13711,NULL);\n",architecture,13712,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkMetricType,4, 13793, 12, 3.1, NULL, 13792, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkMetricType,4, 13793, 11, 3.1, NULL, 13792, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkMetricType,4, 13793, 10, 3.1, NULL, 13792, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkMetricType,4, 13793, 9, 3.1, NULL, 13792, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkMetricType,4, 13793, 6, 3.1, NULL, 13792, NULL)
#elif defined __ia64__
CheckTypeSize(GtkMetricType,4, 13793, 3, 3.1, NULL, 13792, NULL)
#elif defined __i386__
CheckTypeSize(GtkMetricType,4, 13793, 2, 3.1, NULL, 13792, NULL)
#else
Msg("Find size of GtkMetricType (13793)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13792,NULL);\n",architecture,13793,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkAttachOptions,4, 13803, 12, 3.1, NULL, 13802, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkAttachOptions,4, 13803, 11, 3.1, NULL, 13802, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkAttachOptions,4, 13803, 10, 3.1, NULL, 13802, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkAttachOptions,4, 13803, 9, 3.1, NULL, 13802, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkAttachOptions,4, 13803, 6, 3.1, NULL, 13802, NULL)
#elif defined __ia64__
CheckTypeSize(GtkAttachOptions,4, 13803, 3, 3.1, NULL, 13802, NULL)
#elif defined __i386__
CheckTypeSize(GtkAttachOptions,4, 13803, 2, 3.1, NULL, 13802, NULL)
#else
Msg("Find size of GtkAttachOptions (13803)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13802,NULL);\n",architecture,13803,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkMessageType,4, 13835, 12, 3.1, NULL, 13834, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkMessageType,4, 13835, 11, 3.1, NULL, 13834, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkMessageType,4, 13835, 10, 3.1, NULL, 13834, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkMessageType,4, 13835, 9, 3.1, NULL, 13834, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkMessageType,4, 13835, 6, 3.1, NULL, 13834, NULL)
#elif defined __ia64__
CheckTypeSize(GtkMessageType,4, 13835, 3, 3.1, NULL, 13834, NULL)
#elif defined __i386__
CheckTypeSize(GtkMessageType,4, 13835, 2, 3.1, NULL, 13834, NULL)
#else
Msg("Find size of GtkMessageType (13835)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13834,NULL);\n",architecture,13835,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkPolicyType,4, 13843, 12, 3.1, NULL, 13842, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkPolicyType,4, 13843, 11, 3.1, NULL, 13842, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkPolicyType,4, 13843, 10, 3.1, NULL, 13842, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkPolicyType,4, 13843, 9, 3.1, NULL, 13842, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkPolicyType,4, 13843, 6, 3.1, NULL, 13842, NULL)
#elif defined __ia64__
CheckTypeSize(GtkPolicyType,4, 13843, 3, 3.1, NULL, 13842, NULL)
#elif defined __i386__
CheckTypeSize(GtkPolicyType,4, 13843, 2, 3.1, NULL, 13842, NULL)
#else
Msg("Find size of GtkPolicyType (13843)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13842,NULL);\n",architecture,13843,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkResizeMode,4, 13846, 12, 3.1, NULL, 13845, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkResizeMode,4, 13846, 11, 3.1, NULL, 13845, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkResizeMode,4, 13846, 10, 3.1, NULL, 13845, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkResizeMode,4, 13846, 9, 3.1, NULL, 13845, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkResizeMode,4, 13846, 6, 3.1, NULL, 13845, NULL)
#elif defined __ia64__
CheckTypeSize(GtkResizeMode,4, 13846, 3, 3.1, NULL, 13845, NULL)
#elif defined __i386__
CheckTypeSize(GtkResizeMode,4, 13846, 2, 3.1, NULL, 13845, NULL)
#else
Msg("Find size of GtkResizeMode (13846)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13845,NULL);\n",architecture,13846,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkWindowType,4, 13867, 12, 3.1, NULL, 13866, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkWindowType,4, 13867, 11, 3.1, NULL, 13866, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkWindowType,4, 13867, 10, 3.1, NULL, 13866, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkWindowType,4, 13867, 9, 3.1, NULL, 13866, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkWindowType,4, 13867, 6, 3.1, NULL, 13866, NULL)
#elif defined __ia64__
CheckTypeSize(GtkWindowType,4, 13867, 3, 3.1, NULL, 13866, NULL)
#elif defined __i386__
CheckTypeSize(GtkWindowType,4, 13867, 2, 3.1, NULL, 13866, NULL)
#else
Msg("Find size of GtkWindowType (13867)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13866,NULL);\n",architecture,13867,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkWindowPosition,4, 13875, 12, 3.1, NULL, 13874, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkWindowPosition,4, 13875, 11, 3.1, NULL, 13874, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkWindowPosition,4, 13875, 10, 3.1, NULL, 13874, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkWindowPosition,4, 13875, 9, 3.1, NULL, 13874, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkWindowPosition,4, 13875, 6, 3.1, NULL, 13874, NULL)
#elif defined __ia64__
CheckTypeSize(GtkWindowPosition,4, 13875, 3, 3.1, NULL, 13874, NULL)
#elif defined __i386__
CheckTypeSize(GtkWindowPosition,4, 13875, 2, 3.1, NULL, 13874, NULL)
#else
Msg("Find size of GtkWindowPosition (13875)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13874,NULL);\n",architecture,13875,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkExpanderStyle,4, 13885, 12, 3.1, NULL, 13884, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkExpanderStyle,4, 13885, 11, 3.1, NULL, 13884, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkExpanderStyle,4, 13885, 10, 3.1, NULL, 13884, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkExpanderStyle,4, 13885, 9, 3.1, NULL, 13884, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkExpanderStyle,4, 13885, 6, 3.1, NULL, 13884, NULL)
#elif defined __ia64__
CheckTypeSize(GtkExpanderStyle,4, 13885, 3, 3.1, NULL, 13884, NULL)
#elif defined __i386__
CheckTypeSize(GtkExpanderStyle,4, 13885, 2, 3.1, NULL, 13884, NULL)
#else
Msg("Find size of GtkExpanderStyle (13885)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13884,NULL);\n",architecture,13885,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkPathPriorityType,4, 13887, 12, 3.1, NULL, 13886, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkPathPriorityType,4, 13887, 11, 3.1, NULL, 13886, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkPathPriorityType,4, 13887, 10, 3.1, NULL, 13886, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkPathPriorityType,4, 13887, 9, 3.1, NULL, 13886, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkPathPriorityType,4, 13887, 6, 3.1, NULL, 13886, NULL)
#elif defined __ia64__
CheckTypeSize(GtkPathPriorityType,4, 13887, 3, 3.1, NULL, 13886, NULL)
#elif defined __i386__
CheckTypeSize(GtkPathPriorityType,4, 13887, 2, 3.1, NULL, 13886, NULL)
#else
Msg("Find size of GtkPathPriorityType (13887)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13886,NULL);\n",architecture,13887,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkPathType,4, 13910, 12, 3.1, NULL, 13909, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkPathType,4, 13910, 11, 3.1, NULL, 13909, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkPathType,4, 13910, 10, 3.1, NULL, 13909, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkPathType,4, 13910, 9, 3.1, NULL, 13909, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkPathType,4, 13910, 6, 3.1, NULL, 13909, NULL)
#elif defined __ia64__
CheckTypeSize(GtkPathType,4, 13910, 3, 3.1, NULL, 13909, NULL)
#elif defined __i386__
CheckTypeSize(GtkPathType,4, 13910, 2, 3.1, NULL, 13909, NULL)
#else
Msg("Find size of GtkPathType (13910)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13909,NULL);\n",architecture,13910,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkScrollType,4, 13929, 12, 3.1, NULL, 13928, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkScrollType,4, 13929, 11, 3.1, NULL, 13928, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkScrollType,4, 13929, 10, 3.1, NULL, 13928, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkScrollType,4, 13929, 9, 3.1, NULL, 13928, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkScrollType,4, 13929, 6, 3.1, NULL, 13928, NULL)
#elif defined __ia64__
CheckTypeSize(GtkScrollType,4, 13929, 3, 3.1, NULL, 13928, NULL)
#elif defined __i386__
CheckTypeSize(GtkScrollType,4, 13929, 2, 3.1, NULL, 13928, NULL)
#else
Msg("Find size of GtkScrollType (13929)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13928,NULL);\n",architecture,13929,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkMovementStep,4, 13959, 12, 3.1, NULL, 13958, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkMovementStep,4, 13959, 11, 3.1, NULL, 13958, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkMovementStep,4, 13959, 10, 3.1, NULL, 13958, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkMovementStep,4, 13959, 9, 3.1, NULL, 13958, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkMovementStep,4, 13959, 6, 3.1, NULL, 13958, NULL)
#elif defined __ia64__
CheckTypeSize(GtkMovementStep,4, 13959, 3, 3.1, NULL, 13958, NULL)
#elif defined __i386__
CheckTypeSize(GtkMovementStep,4, 13959, 2, 3.1, NULL, 13958, NULL)
#else
Msg("Find size of GtkMovementStep (13959)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13958,NULL);\n",architecture,13959,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkMenuDirectionType,4, 14061, 12, 3.1, NULL, 14060, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkMenuDirectionType,4, 14061, 11, 3.1, NULL, 14060, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkMenuDirectionType,4, 14061, 10, 3.1, NULL, 14060, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkMenuDirectionType,4, 14061, 9, 3.1, NULL, 14060, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkMenuDirectionType,4, 14061, 6, 3.1, NULL, 14060, NULL)
#elif defined __ia64__
CheckTypeSize(GtkMenuDirectionType,4, 14061, 3, 3.1, NULL, 14060, NULL)
#elif defined __i386__
CheckTypeSize(GtkMenuDirectionType,4, 14061, 2, 3.1, NULL, 14060, NULL)
#else
Msg("Find size of GtkMenuDirectionType (14061)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14060,NULL);\n",architecture,14061,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkScrollStep,4, 14249, 12, 3.1, NULL, 14248, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkScrollStep,4, 14249, 11, 3.1, NULL, 14248, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkScrollStep,4, 14249, 10, 3.1, NULL, 14248, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkScrollStep,4, 14249, 9, 3.1, NULL, 14248, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkScrollStep,4, 14249, 6, 3.1, NULL, 14248, NULL)
#elif defined __ia64__
CheckTypeSize(GtkScrollStep,4, 14249, 3, 3.1, NULL, 14248, NULL)
#elif defined __i386__
CheckTypeSize(GtkScrollStep,4, 14249, 2, 3.1, NULL, 14248, NULL)
#else
Msg("Find size of GtkScrollStep (14249)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14248,NULL);\n",architecture,14249,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkDeleteType,4, 14274, 12, 3.1, NULL, 14273, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkDeleteType,4, 14274, 11, 3.1, NULL, 14273, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkDeleteType,4, 14274, 10, 3.1, NULL, 14273, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkDeleteType,4, 14274, 9, 3.1, NULL, 14273, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkDeleteType,4, 14274, 6, 3.1, NULL, 14273, NULL)
#elif defined __ia64__
CheckTypeSize(GtkDeleteType,4, 14274, 3, 3.1, NULL, 14273, NULL)
#elif defined __i386__
CheckTypeSize(GtkDeleteType,4, 14274, 2, 3.1, NULL, 14273, NULL)
#else
Msg("Find size of GtkDeleteType (14274)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14273,NULL);\n",architecture,14274,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkVisibility,4, 14338, 12, 3.1, NULL, 14337, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkVisibility,4, 14338, 11, 3.1, NULL, 14337, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkVisibility,4, 14338, 10, 3.1, NULL, 14337, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkVisibility,4, 14338, 9, 3.1, NULL, 14337, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkVisibility,4, 14338, 6, 3.1, NULL, 14337, NULL)
#elif defined __ia64__
CheckTypeSize(GtkVisibility,4, 14338, 3, 3.1, NULL, 14337, NULL)
#elif defined __i386__
CheckTypeSize(GtkVisibility,4, 14338, 2, 3.1, NULL, 14337, NULL)
#else
Msg("Find size of GtkVisibility (14338)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14337,NULL);\n",architecture,14338,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkIMPreeditStyle,4, 14520, 12, 3.1, NULL, 14519, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkIMPreeditStyle,4, 14520, 11, 3.1, NULL, 14519, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkIMPreeditStyle,4, 14520, 10, 3.1, NULL, 14519, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkIMPreeditStyle,4, 14520, 9, 3.1, NULL, 14519, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkIMPreeditStyle,4, 14520, 6, 3.1, NULL, 14519, NULL)
#elif defined __ia64__
CheckTypeSize(GtkIMPreeditStyle,4, 14520, 3, 3.1, NULL, 14519, NULL)
#elif defined __i386__
CheckTypeSize(GtkIMPreeditStyle,4, 14520, 2, 3.1, NULL, 14519, NULL)
#else
Msg("Find size of GtkIMPreeditStyle (14520)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14519,NULL);\n",architecture,14520,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkAnchorType,4, 14532, 12, 3.1, NULL, 14531, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkAnchorType,4, 14532, 11, 3.1, NULL, 14531, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkAnchorType,4, 14532, 10, 3.1, NULL, 14531, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkAnchorType,4, 14532, 9, 3.1, NULL, 14531, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkAnchorType,4, 14532, 6, 3.1, NULL, 14531, NULL)
#elif defined __ia64__
CheckTypeSize(GtkAnchorType,4, 14532, 3, 3.1, NULL, 14531, NULL)
#elif defined __i386__
CheckTypeSize(GtkAnchorType,4, 14532, 2, 3.1, NULL, 14531, NULL)
#else
Msg("Find size of GtkAnchorType (14532)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14531,NULL);\n",architecture,14532,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkIMStatusStyle,4, 14534, 12, 3.1, NULL, 14533, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkIMStatusStyle,4, 14534, 11, 3.1, NULL, 14533, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkIMStatusStyle,4, 14534, 10, 3.1, NULL, 14533, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkIMStatusStyle,4, 14534, 9, 3.1, NULL, 14533, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkIMStatusStyle,4, 14534, 6, 3.1, NULL, 14533, NULL)
#elif defined __ia64__
CheckTypeSize(GtkIMStatusStyle,4, 14534, 3, 3.1, NULL, 14533, NULL)
#elif defined __i386__
CheckTypeSize(GtkIMStatusStyle,4, 14534, 2, 3.1, NULL, 14533, NULL)
#else
Msg("Find size of GtkIMStatusStyle (14534)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14533,NULL);\n",architecture,14534,0);
#endif

#if 1
CheckTypeSize(GtkPackDirection,4, 32296, 1, 4.0, NULL, 32295, NULL)
#endif

#if 1
CheckTypeSize(GtkPageOrientation,0, 40038, 1, 4.1, NULL, 40037, NULL)
#endif

#if 1
CheckTypeSize(GtkPrintQuality,0, 40040, 1, 4.1, NULL, 40039, NULL)
#endif

#if 1
CheckTypeSize(GtkPrintDuplex,0, 40042, 1, 4.1, NULL, 40041, NULL)
#endif

#if 1
CheckTypeSize(GtkPrintPages,0, 40046, 1, 4.1, NULL, 40045, NULL)
#endif

#if 1
CheckTypeSize(GtkPageSet,0, 40048, 1, 4.1, NULL, 40047, NULL)
#endif

#if 1
CheckTypeSize(GtkNumberUpLayout,0, 40050, 1, 4.1, NULL, 40049, NULL)
#endif

#if 1
CheckTypeSize(GtkUnit,0, 40052, 1, 4.1, NULL, 40051, NULL)
#endif

#if 1
CheckTypeSize(GtkSensitivityType,0, 40060, 1, 4.1, NULL, 40059, NULL)
#endif

#if 1
CheckTypeSize(GtkTreeViewGridLines,0, 40299, 1, 4.1, NULL, 40298, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in gtk-2.0/gtk/gtkenums.h\n\n",pcnt,cnt);
return cnt;
#endif

}
