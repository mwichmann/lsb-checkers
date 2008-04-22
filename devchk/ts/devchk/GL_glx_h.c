/*
 * Test of GL/glx.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include <wchar.h>
#include <X11/X.h>
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include "GL/glx.h"



#ifdef TET_TEST
void GL_glx_h()
{
#else
int GL_glx_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in GL/glx.h\n");
#endif

printf("Checking data structures in GL/glx.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef GLX_VERSION_1_1
	CompareConstant(GLX_VERSION_1_1,1,13418,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_VERSION_1_1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_VERSION_1_2
	CompareConstant(GLX_VERSION_1_2,1,13419,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_VERSION_1_2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_VERSION_1_3
	CompareConstant(GLX_VERSION_1_3,1,13420,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_VERSION_1_3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_VERSION_1_4
	CompareConstant(GLX_VERSION_1_4,1,13421,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_VERSION_1_4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_EXTENSION_NAME
	CompareConstant(GLX_EXTENSION_NAME,"GLX",13422,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_EXTENSION_NAME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_USE_GL
	CompareConstant(GLX_USE_GL,1,13423,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_USE_GL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_BUFFER_SIZE
	CompareConstant(GLX_BUFFER_SIZE,2,13424,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_BUFFER_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_LEVEL
	CompareConstant(GLX_LEVEL,3,13425,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_LEVEL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_RGBA
	CompareConstant(GLX_RGBA,4,13426,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_RGBA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_DOUBLEBUFFER
	CompareConstant(GLX_DOUBLEBUFFER,5,13427,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_DOUBLEBUFFER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_STEREO
	CompareConstant(GLX_STEREO,6,13428,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_STEREO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_AUX_BUFFERS
	CompareConstant(GLX_AUX_BUFFERS,7,13429,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_AUX_BUFFERS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_RED_SIZE
	CompareConstant(GLX_RED_SIZE,8,13430,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_RED_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_GREEN_SIZE
	CompareConstant(GLX_GREEN_SIZE,9,13431,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_GREEN_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_BLUE_SIZE
	CompareConstant(GLX_BLUE_SIZE,10,13432,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_BLUE_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_ALPHA_SIZE
	CompareConstant(GLX_ALPHA_SIZE,11,13433,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_ALPHA_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_DEPTH_SIZE
	CompareConstant(GLX_DEPTH_SIZE,12,13434,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_DEPTH_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_STENCIL_SIZE
	CompareConstant(GLX_STENCIL_SIZE,13,13435,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_STENCIL_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_ACCUM_RED_SIZE
	CompareConstant(GLX_ACCUM_RED_SIZE,14,13436,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_ACCUM_RED_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_ACCUM_GREEN_SIZE
	CompareConstant(GLX_ACCUM_GREEN_SIZE,15,13437,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_ACCUM_GREEN_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_ACCUM_BLUE_SIZE
	CompareConstant(GLX_ACCUM_BLUE_SIZE,16,13438,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_ACCUM_BLUE_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_ACCUM_ALPHA_SIZE
	CompareConstant(GLX_ACCUM_ALPHA_SIZE,17,13439,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_ACCUM_ALPHA_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_BAD_SCREEN
	CompareConstant(GLX_BAD_SCREEN,1,13440,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_BAD_SCREEN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_BAD_ATTRIBUTE
	CompareConstant(GLX_BAD_ATTRIBUTE,2,13441,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_BAD_ATTRIBUTE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_NO_EXTENSION
	CompareConstant(GLX_NO_EXTENSION,3,13442,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_NO_EXTENSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_BAD_VISUAL
	CompareConstant(GLX_BAD_VISUAL,4,13443,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_BAD_VISUAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_BAD_CONTEXT
	CompareConstant(GLX_BAD_CONTEXT,5,13444,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_BAD_CONTEXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_BAD_VALUE
	CompareConstant(GLX_BAD_VALUE,6,13445,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_BAD_VALUE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_BAD_ENUM
	CompareConstant(GLX_BAD_ENUM,7,13446,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_BAD_ENUM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_VENDOR
	CompareConstant(GLX_VENDOR,1,13447,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_VENDOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_VERSION
	CompareConstant(GLX_VERSION,2,13448,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_VERSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_EXTENSIONS
	CompareConstant(GLX_EXTENSIONS,3,13449,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_EXTENSIONS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_CONFIG_CAVEAT
	CompareConstant(GLX_CONFIG_CAVEAT,0x20,13450,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_CONFIG_CAVEAT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_DONT_CARE
	CompareConstant(GLX_DONT_CARE,0xFFFFFFFF,13451,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_DONT_CARE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_X_VISUAL_TYPE
	CompareConstant(GLX_X_VISUAL_TYPE,0x22,13452,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_X_VISUAL_TYPE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_TRANSPARENT_TYPE
	CompareConstant(GLX_TRANSPARENT_TYPE,0x23,13453,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_TRANSPARENT_TYPE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_TRANSPARENT_INDEX_VALUE
	CompareConstant(GLX_TRANSPARENT_INDEX_VALUE,0x24,13454,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_TRANSPARENT_INDEX_VALUE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_TRANSPARENT_RED_VALUE
	CompareConstant(GLX_TRANSPARENT_RED_VALUE,0x25,13455,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_TRANSPARENT_RED_VALUE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_TRANSPARENT_GREEN_VALUE
	CompareConstant(GLX_TRANSPARENT_GREEN_VALUE,0x26,13456,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_TRANSPARENT_GREEN_VALUE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_TRANSPARENT_BLUE_VALUE
	CompareConstant(GLX_TRANSPARENT_BLUE_VALUE,0x27,13457,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_TRANSPARENT_BLUE_VALUE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_TRANSPARENT_ALPHA_VALUE
	CompareConstant(GLX_TRANSPARENT_ALPHA_VALUE,0x28,13458,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_TRANSPARENT_ALPHA_VALUE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_WINDOW_BIT
	CompareConstant(GLX_WINDOW_BIT,0x00000001,13459,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_WINDOW_BIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_PIXMAP_BIT
	CompareConstant(GLX_PIXMAP_BIT,0x00000002,13460,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_PIXMAP_BIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_PBUFFER_BIT
	CompareConstant(GLX_PBUFFER_BIT,0x00000004,13461,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_PBUFFER_BIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_AUX_BUFFERS_BIT
	CompareConstant(GLX_AUX_BUFFERS_BIT,0x00000010,13462,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_AUX_BUFFERS_BIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_FRONT_LEFT_BUFFER_BIT
	CompareConstant(GLX_FRONT_LEFT_BUFFER_BIT,0x00000001,13463,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_FRONT_LEFT_BUFFER_BIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_FRONT_RIGHT_BUFFER_BIT
	CompareConstant(GLX_FRONT_RIGHT_BUFFER_BIT,0x00000002,13464,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_FRONT_RIGHT_BUFFER_BIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_BACK_LEFT_BUFFER_BIT
	CompareConstant(GLX_BACK_LEFT_BUFFER_BIT,0x00000004,13465,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_BACK_LEFT_BUFFER_BIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_BACK_RIGHT_BUFFER_BIT
	CompareConstant(GLX_BACK_RIGHT_BUFFER_BIT,0x00000008,13466,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_BACK_RIGHT_BUFFER_BIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_DEPTH_BUFFER_BIT
	CompareConstant(GLX_DEPTH_BUFFER_BIT,0x00000020,13467,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_DEPTH_BUFFER_BIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_STENCIL_BUFFER_BIT
	CompareConstant(GLX_STENCIL_BUFFER_BIT,0x00000040,13468,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_STENCIL_BUFFER_BIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_ACCUM_BUFFER_BIT
	CompareConstant(GLX_ACCUM_BUFFER_BIT,0x00000080,13469,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_ACCUM_BUFFER_BIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_NONE
	CompareConstant(GLX_NONE,0x8000,13470,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_NONE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_SLOW_CONFIG
	CompareConstant(GLX_SLOW_CONFIG,0x8001,13471,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_SLOW_CONFIG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_TRUE_COLOR
	CompareConstant(GLX_TRUE_COLOR,0x8002,13472,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_TRUE_COLOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_DIRECT_COLOR
	CompareConstant(GLX_DIRECT_COLOR,0x8003,13473,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_DIRECT_COLOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_PSEUDO_COLOR
	CompareConstant(GLX_PSEUDO_COLOR,0x8004,13474,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_PSEUDO_COLOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_STATIC_COLOR
	CompareConstant(GLX_STATIC_COLOR,0x8005,13475,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_STATIC_COLOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_GRAY_SCALE
	CompareConstant(GLX_GRAY_SCALE,0x8006,13476,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_GRAY_SCALE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_STATIC_GRAY
	CompareConstant(GLX_STATIC_GRAY,0x8007,13477,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_STATIC_GRAY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_TRANSPARENT_RGB
	CompareConstant(GLX_TRANSPARENT_RGB,0x8008,13478,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_TRANSPARENT_RGB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_TRANSPARENT_INDEX
	CompareConstant(GLX_TRANSPARENT_INDEX,0x8009,13479,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_TRANSPARENT_INDEX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_VISUAL_ID
	CompareConstant(GLX_VISUAL_ID,0x800B,13480,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_VISUAL_ID\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_SCREEN
	CompareConstant(GLX_SCREEN,0x800C,13481,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_SCREEN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_NON_CONFORMANT_CONFIG
	CompareConstant(GLX_NON_CONFORMANT_CONFIG,0x800D,13482,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_NON_CONFORMANT_CONFIG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_DRAWABLE_TYPE
	CompareConstant(GLX_DRAWABLE_TYPE,0x8010,13483,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_DRAWABLE_TYPE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_RENDER_TYPE
	CompareConstant(GLX_RENDER_TYPE,0x8011,13484,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_RENDER_TYPE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_X_RENDERABLE
	CompareConstant(GLX_X_RENDERABLE,0x8012,13485,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_X_RENDERABLE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_FBCONFIG_ID
	CompareConstant(GLX_FBCONFIG_ID,0x8013,13486,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_FBCONFIG_ID\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_RGBA_TYPE
	CompareConstant(GLX_RGBA_TYPE,0x8014,13487,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_RGBA_TYPE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_COLOR_INDEX_TYPE
	CompareConstant(GLX_COLOR_INDEX_TYPE,0x8015,13488,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_COLOR_INDEX_TYPE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_MAX_PBUFFER_WIDTH
	CompareConstant(GLX_MAX_PBUFFER_WIDTH,0x8016,13489,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_MAX_PBUFFER_WIDTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_MAX_PBUFFER_HEIGHT
	CompareConstant(GLX_MAX_PBUFFER_HEIGHT,0x8017,13490,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_MAX_PBUFFER_HEIGHT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_MAX_PBUFFER_PIXELS
	CompareConstant(GLX_MAX_PBUFFER_PIXELS,0x8018,13491,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_MAX_PBUFFER_PIXELS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_PRESERVED_CONTENTS
	CompareConstant(GLX_PRESERVED_CONTENTS,0x801B,13492,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_PRESERVED_CONTENTS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_LARGEST_PBUFFER
	CompareConstant(GLX_LARGEST_PBUFFER,0x801C,13493,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_LARGEST_PBUFFER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_WIDTH
	CompareConstant(GLX_WIDTH,0x801D,13494,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_WIDTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_HEIGHT
	CompareConstant(GLX_HEIGHT,0x801E,13495,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_HEIGHT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_EVENT_MASK
	CompareConstant(GLX_EVENT_MASK,0x801F,13496,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_EVENT_MASK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_DAMAGED
	CompareConstant(GLX_DAMAGED,0x8020,13497,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_DAMAGED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_SAVED
	CompareConstant(GLX_SAVED,0x8021,13498,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_SAVED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_WINDOW
	CompareConstant(GLX_WINDOW,0x8022,13499,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_WINDOW\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_PBUFFER
	CompareConstant(GLX_PBUFFER,0x8023,13500,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_PBUFFER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_PBUFFER_HEIGHT
	CompareConstant(GLX_PBUFFER_HEIGHT,0x8040,13501,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_PBUFFER_HEIGHT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_PBUFFER_WIDTH
	CompareConstant(GLX_PBUFFER_WIDTH,0x8041,13502,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_PBUFFER_WIDTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_RGBA_BIT
	CompareConstant(GLX_RGBA_BIT,0x00000001,13503,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_RGBA_BIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_COLOR_INDEX_BIT
	CompareConstant(GLX_COLOR_INDEX_BIT,0x00000002,13504,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_COLOR_INDEX_BIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_PBUFFER_CLOBBER_MASK
	CompareConstant(GLX_PBUFFER_CLOBBER_MASK,0x08000000,13505,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_PBUFFER_CLOBBER_MASK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_SAMPLE_BUFFERS
	CompareConstant(GLX_SAMPLE_BUFFERS,0x186a0,13506,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_SAMPLE_BUFFERS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_SAMPLES
	CompareConstant(GLX_SAMPLES,0x186a1,13507,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_SAMPLES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_ARB_render_texture
	CompareConstant(GLX_ARB_render_texture,1,13508,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_ARB_render_texture\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_EXT_texture_from_pixmap
	CompareConstant(GLX_EXT_texture_from_pixmap,1,13509,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_EXT_texture_from_pixmap\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_BIND_TO_TEXTURE_RGB_EXT
	CompareConstant(GLX_BIND_TO_TEXTURE_RGB_EXT,0x20D0,13510,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_BIND_TO_TEXTURE_RGB_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_BIND_TO_TEXTURE_RGBA_EXT
	CompareConstant(GLX_BIND_TO_TEXTURE_RGBA_EXT,0x20D1,13511,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_BIND_TO_TEXTURE_RGBA_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_BIND_TO_MIPMAP_TEXTURE_EXT
	CompareConstant(GLX_BIND_TO_MIPMAP_TEXTURE_EXT,0x20D2,13512,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_BIND_TO_MIPMAP_TEXTURE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_BIND_TO_TEXTURE_TARGETS_EXT
	CompareConstant(GLX_BIND_TO_TEXTURE_TARGETS_EXT,0x20D3,13513,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_BIND_TO_TEXTURE_TARGETS_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_Y_INVERTED_EXT
	CompareConstant(GLX_Y_INVERTED_EXT,0x20D4,13514,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_Y_INVERTED_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_TEXTURE_FORMAT_EXT
	CompareConstant(GLX_TEXTURE_FORMAT_EXT,0x20D5,13515,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_TEXTURE_FORMAT_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_TEXTURE_TARGET_EXT
	CompareConstant(GLX_TEXTURE_TARGET_EXT,0x20D6,13516,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_TEXTURE_TARGET_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_MIPMAP_TEXTURE_EXT
	CompareConstant(GLX_MIPMAP_TEXTURE_EXT,0x20D7,13517,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_MIPMAP_TEXTURE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_TEXTURE_FORMAT_NONE_EXT
	CompareConstant(GLX_TEXTURE_FORMAT_NONE_EXT,0x20D8,13518,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_TEXTURE_FORMAT_NONE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_TEXTURE_FORMAT_RGB_EXT
	CompareConstant(GLX_TEXTURE_FORMAT_RGB_EXT,0x20D9,13519,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_TEXTURE_FORMAT_RGB_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_TEXTURE_FORMAT_RGBA_EXT
	CompareConstant(GLX_TEXTURE_FORMAT_RGBA_EXT,0x20DA,13520,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_TEXTURE_FORMAT_RGBA_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_TEXTURE_1D_BIT_EXT
	CompareConstant(GLX_TEXTURE_1D_BIT_EXT,0x00000001,13521,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_TEXTURE_1D_BIT_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_TEXTURE_2D_BIT_EXT
	CompareConstant(GLX_TEXTURE_2D_BIT_EXT,0x00000002,13522,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_TEXTURE_2D_BIT_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_TEXTURE_RECTANGLE_BIT_EXT
	CompareConstant(GLX_TEXTURE_RECTANGLE_BIT_EXT,0x00000004,13523,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_TEXTURE_RECTANGLE_BIT_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_TEXTURE_1D_EXT
	CompareConstant(GLX_TEXTURE_1D_EXT,0x20DB,13524,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_TEXTURE_1D_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_TEXTURE_2D_EXT
	CompareConstant(GLX_TEXTURE_2D_EXT,0x20DC,13525,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_TEXTURE_2D_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_TEXTURE_RECTANGLE_EXT
	CompareConstant(GLX_TEXTURE_RECTANGLE_EXT,0x20DD,13526,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_TEXTURE_RECTANGLE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_FRONT_LEFT_EXT
	CompareConstant(GLX_FRONT_LEFT_EXT,0x20DE,13527,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_FRONT_LEFT_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_FRONT_RIGHT_EXT
	CompareConstant(GLX_FRONT_RIGHT_EXT,0x20DF,13528,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_FRONT_RIGHT_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_BACK_LEFT_EXT
	CompareConstant(GLX_BACK_LEFT_EXT,0x20E0,13529,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_BACK_LEFT_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_BACK_RIGHT_EXT
	CompareConstant(GLX_BACK_RIGHT_EXT,0x20E1,13530,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_BACK_RIGHT_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_FRONT_EXT
	CompareConstant(GLX_FRONT_EXT,GLX_FRONT_LEFT_EXT,13531,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_FRONT_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_BACK_EXT
	CompareConstant(GLX_BACK_EXT,GLX_BACK_LEFT_EXT,13532,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_BACK_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_AUX0_EXT
	CompareConstant(GLX_AUX0_EXT,0x20E2,13533,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_AUX0_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_AUX1_EXT
	CompareConstant(GLX_AUX1_EXT,0x20E3,13534,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_AUX1_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_AUX2_EXT
	CompareConstant(GLX_AUX2_EXT,0x20E4,13535,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_AUX2_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_AUX3_EXT
	CompareConstant(GLX_AUX3_EXT,0x20E5,13536,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_AUX3_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_AUX4_EXT
	CompareConstant(GLX_AUX4_EXT,0x20E6,13537,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_AUX4_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_AUX5_EXT
	CompareConstant(GLX_AUX5_EXT,0x20E7,13538,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_AUX5_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_AUX6_EXT
	CompareConstant(GLX_AUX6_EXT,0x20E8,13539,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_AUX6_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_AUX7_EXT
	CompareConstant(GLX_AUX7_EXT,0x20E9,13540,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_AUX7_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_AUX8_EXT
	CompareConstant(GLX_AUX8_EXT,0x20EA,13541,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_AUX8_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_AUX9_EXT
	CompareConstant(GLX_AUX9_EXT,0x20EB,13542,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: GLX_AUX9_EXT\n");
cnt++;
#endif

#endif

#if defined __i386__
CheckTypeSize(GLXContext,4, 8164, 2, 1.0, NULL, 7668, NULL)
#elif defined __ia64__
CheckTypeSize(GLXContext,8, 8164, 3, 1.3, NULL, 7668, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GLXContext,4, 8164, 6, 1.2, NULL, 7668, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GLXContext,4, 8164, 10, 1.3, NULL, 7668, NULL)
#elif defined __powerpc64__
CheckTypeSize(GLXContext,8, 8164, 9, 2.0, NULL, 7668, NULL)
#elif defined __s390x__
CheckTypeSize(GLXContext,8, 8164, 12, 1.3, NULL, 7668, NULL)
#elif defined __x86_64__
CheckTypeSize(GLXContext,8, 8164, 11, 2.0, NULL, 7668, NULL)
#else
Msg("Find size of GLXContext (8164)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,7668,NULL);\n",architecture,8164,0);
#endif

#if defined __i386__
CheckTypeSize(GLXFBConfig,4, 8165, 2, 1.2, NULL, 7671, NULL)
#elif defined __ia64__
CheckTypeSize(GLXFBConfig,8, 8165, 3, 1.3, NULL, 7671, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GLXFBConfig,4, 8165, 6, 1.2, NULL, 7671, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GLXFBConfig,4, 8165, 10, 1.3, NULL, 7671, NULL)
#elif defined __powerpc64__
CheckTypeSize(GLXFBConfig,8, 8165, 9, 2.0, NULL, 7671, NULL)
#elif defined __s390x__
CheckTypeSize(GLXFBConfig,8, 8165, 12, 1.3, NULL, 7671, NULL)
#elif defined __x86_64__
CheckTypeSize(GLXFBConfig,8, 8165, 11, 2.0, NULL, 7671, NULL)
#else
Msg("Find size of GLXFBConfig (8165)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,7671,NULL);\n",architecture,8165,0);
#endif

#if defined __i386__
CheckTypeSize(GLXDrawable,4, 8168, 2, 1.0, NULL, 8171, NULL)
#elif defined __ia64__
CheckTypeSize(GLXDrawable,8, 8168, 3, 1.3, NULL, 8171, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GLXDrawable,4, 8168, 6, 1.2, NULL, 8171, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GLXDrawable,4, 8168, 10, 1.3, NULL, 8171, NULL)
#elif defined __powerpc64__
CheckTypeSize(GLXDrawable,8, 8168, 9, 2.0, NULL, 8171, NULL)
#elif defined __s390x__
CheckTypeSize(GLXDrawable,8, 8168, 12, 1.3, NULL, 8171, NULL)
#elif defined __x86_64__
CheckTypeSize(GLXDrawable,8, 8168, 11, 2.0, NULL, 8171, NULL)
#else
Msg("Find size of GLXDrawable (8168)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,8171,NULL);\n",architecture,8168,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(GLXEvent,96, 8170, 10, 1.0, NULL, 8169, NULL)
#elif defined __x86_64__
CheckTypeSize(GLXEvent,192, 8170, 11, 1.0, NULL, 8169, NULL)
#elif defined __s390x__
CheckTypeSize(GLXEvent,192, 8170, 12, 1.0, NULL, 8169, NULL)
#elif defined __i386__
CheckTypeSize(GLXEvent,96, 8170, 2, 1.0, NULL, 8169, NULL)
#elif defined __ia64__
CheckTypeSize(GLXEvent,192, 8170, 3, 1.0, NULL, 8169, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GLXEvent,96, 8170, 6, 1.0, NULL, 8169, NULL)
#elif defined __powerpc64__
CheckTypeSize(GLXEvent,96, 8170, 9, 1.0, NULL, 8169, NULL)
#else
Msg("Find size of GLXEvent (8170)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.0""',NULL,8169,NULL);\n",architecture,8170,0);
#endif

#if defined __i386__
CheckTypeSize(GLXContextID,4, 8717, 2, 1.0, NULL, 8171, NULL)
#elif defined __ia64__
CheckTypeSize(GLXContextID,8, 8717, 3, 1.3, NULL, 8171, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GLXContextID,4, 8717, 6, 1.2, NULL, 8171, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GLXContextID,4, 8717, 10, 1.3, NULL, 8171, NULL)
#elif defined __powerpc64__
CheckTypeSize(GLXContextID,8, 8717, 9, 2.0, NULL, 8171, NULL)
#elif defined __s390x__
CheckTypeSize(GLXContextID,8, 8717, 12, 1.3, NULL, 8171, NULL)
#elif defined __x86_64__
CheckTypeSize(GLXContextID,8, 8717, 11, 2.0, NULL, 8171, NULL)
#else
Msg("Find size of GLXContextID (8717)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,8171,NULL);\n",architecture,8717,0);
#endif

#if defined __i386__
CheckTypeSize(GLXPixmap,4, 8718, 2, 1.0, NULL, 8171, NULL)
#elif defined __ia64__
CheckTypeSize(GLXPixmap,8, 8718, 3, 1.3, NULL, 8171, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GLXPixmap,4, 8718, 6, 1.2, NULL, 8171, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GLXPixmap,4, 8718, 10, 1.3, NULL, 8171, NULL)
#elif defined __powerpc64__
CheckTypeSize(GLXPixmap,8, 8718, 9, 2.0, NULL, 8171, NULL)
#elif defined __s390x__
CheckTypeSize(GLXPixmap,8, 8718, 12, 1.3, NULL, 8171, NULL)
#elif defined __x86_64__
CheckTypeSize(GLXPixmap,8, 8718, 11, 2.0, NULL, 8171, NULL)
#else
Msg("Find size of GLXPixmap (8718)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,8171,NULL);\n",architecture,8718,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(GLXPbufferClobberEvent,52, 8719, 10, 1.0, NULL, 8167, NULL)
#elif defined __x86_64__
CheckTypeSize(GLXPbufferClobberEvent,72, 8719, 11, 1.0, NULL, 8167, NULL)
#elif defined __s390x__
CheckTypeSize(GLXPbufferClobberEvent,72, 8719, 12, 1.0, NULL, 8167, NULL)
#elif defined __i386__
CheckTypeSize(GLXPbufferClobberEvent,52, 8719, 2, 1.0, NULL, 8167, NULL)
#elif defined __ia64__
CheckTypeSize(GLXPbufferClobberEvent,72, 8719, 3, 1.0, NULL, 8167, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GLXPbufferClobberEvent,52, 8719, 6, 1.0, NULL, 8167, NULL)
#elif defined __powerpc64__
CheckTypeSize(GLXPbufferClobberEvent,52, 8719, 9, 1.0, NULL, 8167, NULL)
#else
Msg("Find size of GLXPbufferClobberEvent (8719)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.0""',NULL,8167,NULL);\n",architecture,8719,0);
#endif

#if defined __i386__
CheckTypeSize(GLXPbuffer,4, 8720, 2, 1.0, NULL, 8171, NULL)
#elif defined __ia64__
CheckTypeSize(GLXPbuffer,8, 8720, 3, 1.3, NULL, 8171, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GLXPbuffer,4, 8720, 6, 1.2, NULL, 8171, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GLXPbuffer,4, 8720, 10, 1.3, NULL, 8171, NULL)
#elif defined __powerpc64__
CheckTypeSize(GLXPbuffer,8, 8720, 9, 2.0, NULL, 8171, NULL)
#elif defined __s390x__
CheckTypeSize(GLXPbuffer,8, 8720, 12, 1.3, NULL, 8171, NULL)
#elif defined __x86_64__
CheckTypeSize(GLXPbuffer,8, 8720, 11, 2.0, NULL, 8171, NULL)
#else
Msg("Find size of GLXPbuffer (8720)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,8171,NULL);\n",architecture,8720,0);
#endif

#if defined __i386__
CheckTypeSize(GLXWindow,4, 8721, 2, 1.0, NULL, 8171, NULL)
#elif defined __ia64__
CheckTypeSize(GLXWindow,8, 8721, 3, 1.3, NULL, 8171, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GLXWindow,4, 8721, 6, 1.2, NULL, 8171, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GLXWindow,4, 8721, 10, 1.3, NULL, 8171, NULL)
#elif defined __powerpc64__
CheckTypeSize(GLXWindow,8, 8721, 9, 2.0, NULL, 8171, NULL)
#elif defined __s390x__
CheckTypeSize(GLXWindow,8, 8721, 12, 1.3, NULL, 8171, NULL)
#elif defined __x86_64__
CheckTypeSize(GLXWindow,8, 8721, 11, 2.0, NULL, 8171, NULL)
#else
Msg("Find size of GLXWindow (8721)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,8171,NULL);\n",architecture,8721,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(GLXFBConfigID,4, 8722, 10, 1.0, NULL, 8171, NULL)
#elif defined __x86_64__
CheckTypeSize(GLXFBConfigID,8, 8722, 11, 1.0, NULL, 8171, NULL)
#elif defined __s390x__
CheckTypeSize(GLXFBConfigID,8, 8722, 12, 1.0, NULL, 8171, NULL)
#elif defined __i386__
CheckTypeSize(GLXFBConfigID,4, 8722, 2, 1.0, NULL, 8171, NULL)
#elif defined __ia64__
CheckTypeSize(GLXFBConfigID,8, 8722, 3, 1.0, NULL, 8171, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GLXFBConfigID,4, 8722, 6, 1.0, NULL, 8171, NULL)
#elif defined __powerpc64__
CheckTypeSize(GLXFBConfigID,4, 8722, 9, 1.0, NULL, 8171, NULL)
#else
Msg("Find size of GLXFBConfigID (8722)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.0""',NULL,8171,NULL);\n",architecture,8722,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(__GLXextFuncPtr,4, 31687, 10, 1.0, NULL, 8726, NULL)
#elif defined __x86_64__
CheckTypeSize(__GLXextFuncPtr,8, 31687, 11, 1.0, NULL, 8726, NULL)
#elif defined __s390x__
CheckTypeSize(__GLXextFuncPtr,8, 31687, 12, 1.0, NULL, 8726, NULL)
#elif defined __i386__
CheckTypeSize(__GLXextFuncPtr,4, 31687, 2, 1.0, NULL, 8726, NULL)
#elif defined __ia64__
CheckTypeSize(__GLXextFuncPtr,8, 31687, 3, 1.0, NULL, 8726, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(__GLXextFuncPtr,4, 31687, 6, 1.0, NULL, 8726, NULL)
#elif defined __powerpc64__
CheckTypeSize(__GLXextFuncPtr,4, 31687, 9, 1.0, NULL, 8726, NULL)
#else
Msg("Find size of __GLXextFuncPtr (31687)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.0""',NULL,8726, NULL);\n",architecture,31687,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in GL/glx.h\n\n",pcnt,cnt);
return cnt;
#endif

}
