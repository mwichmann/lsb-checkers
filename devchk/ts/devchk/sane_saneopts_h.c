/*
 * Test of sane/saneopts.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "sane/saneopts.h"



#ifdef TET_TEST
void sane_saneopts_h()
{
#else
int sane_saneopts_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

Msg("Checking data structures in sane/saneopts.h\n");
#if _LSB_DEFAULT_ARCH
cnt++;
#ifndef saneopts_h
Msg( "Error: Constant not found: saneopts_h\n");
#else
pcnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_I18N(text) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_NUM_OPTIONS
	CompareStringConstant(SANE_NAME_NUM_OPTIONS,"",20737,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_NUM_OPTIONS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_STANDARD
	CompareStringConstant(SANE_NAME_STANDARD,"standard",20738,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_STANDARD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_GEOMETRY
	CompareStringConstant(SANE_NAME_GEOMETRY,"geometry",20739,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_GEOMETRY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_ENHANCEMENT
	CompareStringConstant(SANE_NAME_ENHANCEMENT,"enhancement",20740,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_ENHANCEMENT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_ADVANCED
	CompareStringConstant(SANE_NAME_ADVANCED,"advanced",20741,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_ADVANCED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_SENSORS
	CompareStringConstant(SANE_NAME_SENSORS,"sensors",20742,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_SENSORS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_PREVIEW
	CompareStringConstant(SANE_NAME_PREVIEW,"preview",20743,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_PREVIEW\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_GRAY_PREVIEW
	CompareStringConstant(SANE_NAME_GRAY_PREVIEW,"preview-in-gray",20744,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_GRAY_PREVIEW\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_BIT_DEPTH
	CompareStringConstant(SANE_NAME_BIT_DEPTH,"depth",20745,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_BIT_DEPTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_SCAN_MODE
	CompareStringConstant(SANE_NAME_SCAN_MODE,"mode",20746,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_SCAN_MODE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_SCAN_SPEED
	CompareStringConstant(SANE_NAME_SCAN_SPEED,"speed",20747,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_SCAN_SPEED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_SCAN_SOURCE
	CompareStringConstant(SANE_NAME_SCAN_SOURCE,"source",20748,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_SCAN_SOURCE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_BACKTRACK
	CompareStringConstant(SANE_NAME_BACKTRACK,"backtrack",20749,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_BACKTRACK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_SCAN_TL_X
	CompareStringConstant(SANE_NAME_SCAN_TL_X,"tl-x",20750,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_SCAN_TL_X\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_SCAN_TL_Y
	CompareStringConstant(SANE_NAME_SCAN_TL_Y,"tl-y",20751,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_SCAN_TL_Y\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_SCAN_BR_X
	CompareStringConstant(SANE_NAME_SCAN_BR_X,"br-x",20752,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_SCAN_BR_X\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_SCAN_BR_Y
	CompareStringConstant(SANE_NAME_SCAN_BR_Y,"br-y",20753,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_SCAN_BR_Y\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_SCAN_RESOLUTION
	CompareStringConstant(SANE_NAME_SCAN_RESOLUTION,"resolution",20754,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_SCAN_RESOLUTION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_SCAN_X_RESOLUTION
	CompareStringConstant(SANE_NAME_SCAN_X_RESOLUTION,"x-resolution",20755,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_SCAN_X_RESOLUTION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_SCAN_Y_RESOLUTION
	CompareStringConstant(SANE_NAME_SCAN_Y_RESOLUTION,"y-resolution",20756,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_SCAN_Y_RESOLUTION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_PAGE_WIDTH
	CompareStringConstant(SANE_NAME_PAGE_WIDTH,"page-width",20757,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_PAGE_WIDTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_PAGE_HEIGHT
	CompareStringConstant(SANE_NAME_PAGE_HEIGHT,"page-height",20758,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_PAGE_HEIGHT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_CUSTOM_GAMMA
	CompareStringConstant(SANE_NAME_CUSTOM_GAMMA,"custom-gamma",20759,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_CUSTOM_GAMMA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_GAMMA_VECTOR
	CompareStringConstant(SANE_NAME_GAMMA_VECTOR,"gamma-table",20760,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_GAMMA_VECTOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_GAMMA_VECTOR_R
	CompareStringConstant(SANE_NAME_GAMMA_VECTOR_R,"red-gamma-table",20761,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_GAMMA_VECTOR_R\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_GAMMA_VECTOR_G
	CompareStringConstant(SANE_NAME_GAMMA_VECTOR_G,"green-gamma-table",20762,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_GAMMA_VECTOR_G\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_GAMMA_VECTOR_B
	CompareStringConstant(SANE_NAME_GAMMA_VECTOR_B,"blue-gamma-table",20763,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_GAMMA_VECTOR_B\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_BRIGHTNESS
	CompareStringConstant(SANE_NAME_BRIGHTNESS,"brightness",20764,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_BRIGHTNESS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_CONTRAST
	CompareStringConstant(SANE_NAME_CONTRAST,"contrast",20765,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_CONTRAST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_GRAIN_SIZE
	CompareStringConstant(SANE_NAME_GRAIN_SIZE,"grain",20766,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_GRAIN_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_HALFTONE
	CompareStringConstant(SANE_NAME_HALFTONE,"halftoning",20767,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_HALFTONE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_BLACK_LEVEL
	CompareStringConstant(SANE_NAME_BLACK_LEVEL,"black-level",20768,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_BLACK_LEVEL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_WHITE_LEVEL
	CompareStringConstant(SANE_NAME_WHITE_LEVEL,"white-level",20769,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_WHITE_LEVEL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_WHITE_LEVEL_R
	CompareStringConstant(SANE_NAME_WHITE_LEVEL_R,"white-level-r",20770,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_WHITE_LEVEL_R\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_WHITE_LEVEL_G
	CompareStringConstant(SANE_NAME_WHITE_LEVEL_G,"white-level-g",20771,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_WHITE_LEVEL_G\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_WHITE_LEVEL_B
	CompareStringConstant(SANE_NAME_WHITE_LEVEL_B,"white-level-b",20772,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_WHITE_LEVEL_B\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_SHADOW
	CompareStringConstant(SANE_NAME_SHADOW,"shadow",20773,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_SHADOW\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_SHADOW_R
	CompareStringConstant(SANE_NAME_SHADOW_R,"shadow-r",20774,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_SHADOW_R\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_SHADOW_G
	CompareStringConstant(SANE_NAME_SHADOW_G,"shadow-g",20775,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_SHADOW_G\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_SHADOW_B
	CompareStringConstant(SANE_NAME_SHADOW_B,"shadow-b",20776,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_SHADOW_B\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_HIGHLIGHT
	CompareStringConstant(SANE_NAME_HIGHLIGHT,"highlight",20777,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_HIGHLIGHT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_HIGHLIGHT_R
	CompareStringConstant(SANE_NAME_HIGHLIGHT_R,"highlight-r",20778,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_HIGHLIGHT_R\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_HIGHLIGHT_G
	CompareStringConstant(SANE_NAME_HIGHLIGHT_G,"highlight-g",20779,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_HIGHLIGHT_G\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_HIGHLIGHT_B
	CompareStringConstant(SANE_NAME_HIGHLIGHT_B,"highlight-b",20780,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_HIGHLIGHT_B\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_HUE
	CompareStringConstant(SANE_NAME_HUE,"hue",20781,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_HUE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_SATURATION
	CompareStringConstant(SANE_NAME_SATURATION,"saturation",20782,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_SATURATION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_FILE
	CompareStringConstant(SANE_NAME_FILE,"filename",20783,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_FILE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_HALFTONE_DIMENSION
	CompareStringConstant(SANE_NAME_HALFTONE_DIMENSION,"halftone-size",20784,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_HALFTONE_DIMENSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_HALFTONE_PATTERN
	CompareStringConstant(SANE_NAME_HALFTONE_PATTERN,"halftone-pattern",20785,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_HALFTONE_PATTERN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_RESOLUTION_BIND
	CompareStringConstant(SANE_NAME_RESOLUTION_BIND,"resolution-bind",20786,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_RESOLUTION_BIND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_NEGATIVE
	CompareStringConstant(SANE_NAME_NEGATIVE,"negative",20787,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_NEGATIVE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_QUALITY_CAL
	CompareStringConstant(SANE_NAME_QUALITY_CAL,"quality-cal",20788,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_QUALITY_CAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_DOR
	CompareStringConstant(SANE_NAME_DOR,"double-res",20789,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_DOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_RGB_BIND
	CompareStringConstant(SANE_NAME_RGB_BIND,"rgb-bind",20790,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_RGB_BIND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_THRESHOLD
	CompareStringConstant(SANE_NAME_THRESHOLD,"threshold",20791,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_THRESHOLD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_ANALOG_GAMMA
	CompareStringConstant(SANE_NAME_ANALOG_GAMMA,"analog-gamma",20792,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_ANALOG_GAMMA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_ANALOG_GAMMA_R
	CompareStringConstant(SANE_NAME_ANALOG_GAMMA_R,"analog-gamma-r",20793,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_ANALOG_GAMMA_R\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_ANALOG_GAMMA_G
	CompareStringConstant(SANE_NAME_ANALOG_GAMMA_G,"analog-gamma-g",20794,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_ANALOG_GAMMA_G\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_ANALOG_GAMMA_B
	CompareStringConstant(SANE_NAME_ANALOG_GAMMA_B,"analog-gamma-b",20795,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_ANALOG_GAMMA_B\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_ANALOG_GAMMA_BIND
	CompareStringConstant(SANE_NAME_ANALOG_GAMMA_BIND,"analog-gamma-bind",20796,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_ANALOG_GAMMA_BIND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_WARMUP
	CompareStringConstant(SANE_NAME_WARMUP,"warmup",20797,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_WARMUP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_CAL_EXPOS_TIME
	CompareStringConstant(SANE_NAME_CAL_EXPOS_TIME,"cal-exposure-time",20798,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_CAL_EXPOS_TIME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_CAL_EXPOS_TIME_R
	CompareStringConstant(SANE_NAME_CAL_EXPOS_TIME_R,"cal-exposure-time-r",20799,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_CAL_EXPOS_TIME_R\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_CAL_EXPOS_TIME_G
	CompareStringConstant(SANE_NAME_CAL_EXPOS_TIME_G,"cal-exposure-time-g",20800,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_CAL_EXPOS_TIME_G\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_CAL_EXPOS_TIME_B
	CompareStringConstant(SANE_NAME_CAL_EXPOS_TIME_B,"cal-exposure-time-b",20801,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_CAL_EXPOS_TIME_B\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_SCAN_EXPOS_TIME
	CompareStringConstant(SANE_NAME_SCAN_EXPOS_TIME,"scan-exposure-time",20802,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_SCAN_EXPOS_TIME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_SCAN_EXPOS_TIME_R
	CompareStringConstant(SANE_NAME_SCAN_EXPOS_TIME_R,"scan-exposure-time-r",20803,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_SCAN_EXPOS_TIME_R\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_SCAN_EXPOS_TIME_G
	CompareStringConstant(SANE_NAME_SCAN_EXPOS_TIME_G,"scan-exposure-time-g",20804,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_SCAN_EXPOS_TIME_G\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_SCAN_EXPOS_TIME_B
	CompareStringConstant(SANE_NAME_SCAN_EXPOS_TIME_B,"scan-exposure-time-b",20805,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_SCAN_EXPOS_TIME_B\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_SELECT_EXPOSURE_TIME
	CompareStringConstant(SANE_NAME_SELECT_EXPOSURE_TIME,"select-exposure-time",20806,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_SELECT_EXPOSURE_TIME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_CAL_LAMP_DEN
	CompareStringConstant(SANE_NAME_CAL_LAMP_DEN,"cal-lamp-density",20807,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_CAL_LAMP_DEN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_SCAN_LAMP_DEN
	CompareStringConstant(SANE_NAME_SCAN_LAMP_DEN,"scan-lamp-density",20808,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_SCAN_LAMP_DEN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_SELECT_LAMP_DENSITY
	CompareStringConstant(SANE_NAME_SELECT_LAMP_DENSITY,"select-lamp-density",20809,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_SELECT_LAMP_DENSITY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_LAMP_OFF_AT_EXIT
	CompareStringConstant(SANE_NAME_LAMP_OFF_AT_EXIT,"lamp-off-at-exit",20810,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_LAMP_OFF_AT_EXIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_SCAN
	CompareStringConstant(SANE_NAME_SCAN,"scan",20811,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_SCAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_EMAIL
	CompareStringConstant(SANE_NAME_EMAIL,"email",20812,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_EMAIL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_FAX
	CompareStringConstant(SANE_NAME_FAX,"fax",20813,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_FAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_COPY
	CompareStringConstant(SANE_NAME_COPY,"copy",20814,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_COPY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_PDF
	CompareStringConstant(SANE_NAME_PDF,"pdf",20815,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_PDF\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_CANCEL
	CompareStringConstant(SANE_NAME_CANCEL,"cancel",20816,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_CANCEL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_PAGE_LOADED
	CompareStringConstant(SANE_NAME_PAGE_LOADED,"page-loaded",20817,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_PAGE_LOADED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_NAME_COVER_OPEN
	CompareStringConstant(SANE_NAME_COVER_OPEN,"cover-open",20818,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_NAME_COVER_OPEN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_NUM_OPTIONS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_STANDARD */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_GEOMETRY */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_ENHANCEMENT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_ADVANCED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_SENSORS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_PREVIEW */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_GRAY_PREVIEW */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_BIT_DEPTH */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_SCAN_MODE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_SCAN_SPEED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_SCAN_SOURCE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_BACKTRACK */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_SCAN_TL_X */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_SCAN_TL_Y */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_SCAN_BR_X */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_SCAN_BR_Y */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_SCAN_RESOLUTION */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_SCAN_X_RESOLUTION */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_SCAN_Y_RESOLUTION */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_PAGE_WIDTH */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_PAGE_HEIGHT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_CUSTOM_GAMMA */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_GAMMA_VECTOR */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_GAMMA_VECTOR_R */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_GAMMA_VECTOR_G */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_GAMMA_VECTOR_B */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_BRIGHTNESS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_CONTRAST */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_GRAIN_SIZE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_HALFTONE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_BLACK_LEVEL */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_WHITE_LEVEL */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_WHITE_LEVEL_R */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_WHITE_LEVEL_G */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_WHITE_LEVEL_B */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_SHADOW */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_SHADOW_R */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_SHADOW_G */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_SHADOW_B */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_HIGHLIGHT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_HIGHLIGHT_R */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_HIGHLIGHT_G */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_HIGHLIGHT_B */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_HUE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_SATURATION */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_FILE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_HALFTONE_DIMENSION */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_HALFTONE_PATTERN */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_RESOLUTION_BIND */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_NEGATIVE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_QUALITY_CAL */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_DOR */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_RGB_BIND */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_THRESHOLD */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_ANALOG_GAMMA */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_ANALOG_GAMMA_R */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_ANALOG_GAMMA_G */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_ANALOG_GAMMA_B */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_ANALOG_GAMMA_BIND */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_WARMUP */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_CAL_EXPOS_TIME */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_CAL_EXPOS_TIME_R */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_CAL_EXPOS_TIME_G */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_CAL_EXPOS_TIME_B */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_SCAN_EXPOS_TIME */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_SCAN_EXPOS_TIME_R */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_SCAN_EXPOS_TIME_G */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_SCAN_EXPOS_TIME_B */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_SELECT_EXPOSURE_TIME */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_CAL_LAMP_DEN */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_SCAN_LAMP_DEN */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_SELECT_LAMP_DENSITY */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_TITLE_LAMP_OFF_AT_EXIT */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_TITLE_SCAN
	CompareStringConstant(SANE_TITLE_SCAN,"Scan button",20893,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_TITLE_SCAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_TITLE_EMAIL
	CompareStringConstant(SANE_TITLE_EMAIL,"Email button",20894,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_TITLE_EMAIL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_TITLE_FAX
	CompareStringConstant(SANE_TITLE_FAX,"Fax button",20895,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_TITLE_FAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_TITLE_COPY
	CompareStringConstant(SANE_TITLE_COPY,"Copy button",20896,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_TITLE_COPY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_TITLE_PDF
	CompareStringConstant(SANE_TITLE_PDF,"PDF button",20897,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_TITLE_PDF\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_TITLE_CANCEL
	CompareStringConstant(SANE_TITLE_CANCEL,"Cancel button",20898,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_TITLE_CANCEL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_TITLE_PAGE_LOADED
	CompareStringConstant(SANE_TITLE_PAGE_LOADED,"Page loaded",20899,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_TITLE_PAGE_LOADED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_TITLE_COVER_OPEN
	CompareStringConstant(SANE_TITLE_COVER_OPEN,"Cover open",20900,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_TITLE_COVER_OPEN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_NUM_OPTIONS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_STANDARD */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_GEOMETRY */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_ENHANCEMENT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_ADVANCED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_SENSORS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_PREVIEW */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_GRAY_PREVIEW */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_BIT_DEPTH */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_SCAN_MODE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_SCAN_SPEED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_SCAN_SOURCE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_BACKTRACK */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_SCAN_TL_X */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_SCAN_TL_Y */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_SCAN_BR_X */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_SCAN_BR_Y */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_SCAN_RESOLUTION */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_SCAN_X_RESOLUTION */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_SCAN_Y_RESOLUTION */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_PAGE_WIDTH */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_PAGE_HEIGHT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_CUSTOM_GAMMA */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_GAMMA_VECTOR */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_GAMMA_VECTOR_R */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_GAMMA_VECTOR_G */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_GAMMA_VECTOR_B */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_BRIGHTNESS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_CONTRAST */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_GRAIN_SIZE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_HALFTONE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_BLACK_LEVEL */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_WHITE_LEVEL */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_WHITE_LEVEL_R */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_WHITE_LEVEL_G */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_WHITE_LEVEL_B */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_SHADOW */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_SHADOW_R */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_SHADOW_G */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_SHADOW_B */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_HIGHLIGHT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_HIGHLIGHT_R */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_HIGHLIGHT_G */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_HIGHLIGHT_B */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_HUE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_SATURATION */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_FILE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_HALFTONE_DIMENSION */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_HALFTONE_PATTERN */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_RESOLUTION_BIND */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_NEGATIVE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_QUALITY_CAL */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_DOR */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_RGB_BIND */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_THRESHOLD */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_ANALOG_GAMMA */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_ANALOG_GAMMA_R */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_ANALOG_GAMMA_G */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_ANALOG_GAMMA_B */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_ANALOG_GAMMA_BIND */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_WARMUP */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_CAL_EXPOS_TIME */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_CAL_EXPOS_TIME_R */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_CAL_EXPOS_TIME_G */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_CAL_EXPOS_TIME_B */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_SCAN_EXPOS_TIME */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_SCAN_EXPOS_TIME_R */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_SCAN_EXPOS_TIME_G */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_SCAN_EXPOS_TIME_B */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_SELECT_EXPOSURE_TIME */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_CAL_LAMP_DEN */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_SCAN_LAMP_DEN */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_SELECT_LAMP_DENSITY */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_LAMP_OFF_AT_EXIT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_SCAN */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_EMAIL */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_FAX */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_COPY */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_PDF */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_CANCEL */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_PAGE_LOADED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_DESC_COVER_OPEN */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_VALUE_SCAN_MODE_COLOR */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_VALUE_SCAN_MODE_GRAY */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_VALUE_SCAN_MODE_LINEART */
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in sane/saneopts.h\n\n",pcnt,cnt);
return cnt;
#endif

}
