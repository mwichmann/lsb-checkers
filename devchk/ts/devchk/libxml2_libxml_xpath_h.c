/*
 * Test of libxml2/libxml/xpath.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include <libxml/xmlregexp.h>
struct _xmlXPathCompExpr {} ;
#include "libxml2/libxml/xpath.h"



#ifdef TET_TEST
void libxml2_libxml_xpath_h()
{
#else
int libxml2_libxml_xpath_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in libxml2/libxml/xpath.h\n");
#endif

printf("Checking data structures in libxml2/libxml/xpath.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for XML_XPATH_CHECKNS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XML_XPATH_NOVAR */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for xmlXPathNodeSetGetLength(ns) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for xmlXPathNodeSetItem(ns,index) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for xmlXPathNodeSetIsEmpty(ns) */
#endif

#if defined __i386__
CheckTypeSize(xmlXPathCompExprPtr,4, 14858, 2, 3.1, NULL, 14857, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlXPathCompExprPtr,8, 14858, 11, 3.1, NULL, 14857, NULL)
#elif defined __ia64__
CheckTypeSize(xmlXPathCompExprPtr,8, 14858, 3, 3.1, NULL, 14857, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlXPathCompExprPtr,4, 14858, 6, 3.1, NULL, 14857, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlXPathCompExprPtr,8, 14858, 9, 3.1, NULL, 14857, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlXPathCompExprPtr,4, 14858, 10, 3.1, NULL, 14857, NULL)
#elif defined __s390x__
CheckTypeSize(xmlXPathCompExprPtr,8, 14858, 12, 3.1, NULL, 14857, NULL)
#else
Msg("Find size of xmlXPathCompExprPtr (14858)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14857,NULL);\n",architecture,14858,0);
#endif

#if defined __i386__
CheckTypeSize(xmlXPathObjectType,4, 14863, 2, 3.1, NULL, 14862, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlXPathObjectType,4, 14863, 11, 3.1, NULL, 14862, NULL)
#elif defined __ia64__
CheckTypeSize(xmlXPathObjectType,4, 14863, 3, 3.1, NULL, 14862, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlXPathObjectType,4, 14863, 6, 3.1, NULL, 14862, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlXPathObjectType,4, 14863, 9, 3.1, NULL, 14862, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlXPathObjectType,4, 14863, 10, 3.1, NULL, 14862, NULL)
#elif defined __s390x__
CheckTypeSize(xmlXPathObjectType,4, 14863, 12, 3.1, NULL, 14862, NULL)
#else
Msg("Find size of xmlXPathObjectType (14863)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14862,NULL);\n",architecture,14863,0);
#endif

#if defined __i386__
CheckTypeSize(xmlNodeSet,12, 14865, 2, 3.1, NULL, 14864, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlNodeSet,16, 14865, 11, 3.1, NULL, 14864, NULL)
#elif defined __ia64__
CheckTypeSize(xmlNodeSet,16, 14865, 3, 3.1, NULL, 14864, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlNodeSet,12, 14865, 6, 3.1, NULL, 14864, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlNodeSet,16, 14865, 9, 3.1, NULL, 14864, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlNodeSet,12, 14865, 10, 3.1, NULL, 14864, NULL)
#elif defined __s390x__
CheckTypeSize(xmlNodeSet,16, 14865, 12, 3.1, NULL, 14864, NULL)
#else
Msg("Find size of xmlNodeSet (14865)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14864,NULL);\n",architecture,14865,0);
#endif

#if defined __i386__
CheckTypeSize(xmlNodeSetPtr,4, 14867, 2, 3.1, NULL, 14866, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlNodeSetPtr,8, 14867, 11, 3.1, NULL, 14866, NULL)
#elif defined __ia64__
CheckTypeSize(xmlNodeSetPtr,8, 14867, 3, 3.1, NULL, 14866, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlNodeSetPtr,4, 14867, 6, 3.1, NULL, 14866, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlNodeSetPtr,8, 14867, 9, 3.1, NULL, 14866, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlNodeSetPtr,4, 14867, 10, 3.1, NULL, 14866, NULL)
#elif defined __s390x__
CheckTypeSize(xmlNodeSetPtr,8, 14867, 12, 3.1, NULL, 14866, NULL)
#else
Msg("Find size of xmlNodeSetPtr (14867)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14866,NULL);\n",architecture,14867,0);
#endif

#if defined __i386__
CheckTypeSize(xmlXPathObject,40, 14868, 2, 3.1, NULL, 14861, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlXPathObject,72, 14868, 11, 3.1, NULL, 14861, NULL)
#elif defined __ia64__
CheckTypeSize(xmlXPathObject,72, 14868, 3, 3.1, NULL, 14861, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlXPathObject,48, 14868, 6, 3.1, NULL, 14861, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlXPathObject,72, 14868, 9, 3.1, NULL, 14861, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlXPathObject,48, 14868, 10, 3.1, NULL, 14861, NULL)
#elif defined __s390x__
CheckTypeSize(xmlXPathObject,72, 14868, 12, 3.1, NULL, 14861, NULL)
#else
Msg("Find size of xmlXPathObject (14868)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14861,NULL);\n",architecture,14868,0);
#endif

#if defined __i386__
CheckTypeSize(xmlXPathObjectPtr,4, 14870, 2, 3.1, NULL, 14869, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlXPathObjectPtr,8, 14870, 11, 3.1, NULL, 14869, NULL)
#elif defined __ia64__
CheckTypeSize(xmlXPathObjectPtr,8, 14870, 3, 3.1, NULL, 14869, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlXPathObjectPtr,4, 14870, 6, 3.1, NULL, 14869, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlXPathObjectPtr,8, 14870, 9, 3.1, NULL, 14869, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlXPathObjectPtr,4, 14870, 10, 3.1, NULL, 14869, NULL)
#elif defined __s390x__
CheckTypeSize(xmlXPathObjectPtr,8, 14870, 12, 3.1, NULL, 14869, NULL)
#else
Msg("Find size of xmlXPathObjectPtr (14870)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14869,NULL);\n",architecture,14870,0);
#endif

#if defined __i386__
CheckTypeSize(xmlXPathConvertFunc,4, 14872, 2, 3.1, NULL, 14871, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlXPathConvertFunc,8, 14872, 11, 3.1, NULL, 14871, NULL)
#elif defined __ia64__
CheckTypeSize(xmlXPathConvertFunc,8, 14872, 3, 3.1, NULL, 14871, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlXPathConvertFunc,4, 14872, 6, 3.1, NULL, 14871, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlXPathConvertFunc,8, 14872, 9, 3.1, NULL, 14871, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlXPathConvertFunc,4, 14872, 10, 3.1, NULL, 14871, NULL)
#elif defined __s390x__
CheckTypeSize(xmlXPathConvertFunc,8, 14872, 12, 3.1, NULL, 14871, NULL)
#else
Msg("Find size of xmlXPathConvertFunc (14872)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14871,NULL);\n",architecture,14872,0);
#endif

#if defined __i386__
CheckTypeSize(xmlXPathType,8, 14873, 2, 3.1, NULL, 14860, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlXPathType,16, 14873, 11, 3.1, NULL, 14860, NULL)
#elif defined __ia64__
CheckTypeSize(xmlXPathType,16, 14873, 3, 3.1, NULL, 14860, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlXPathType,8, 14873, 6, 3.1, NULL, 14860, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlXPathType,16, 14873, 9, 3.1, NULL, 14860, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlXPathType,8, 14873, 10, 3.1, NULL, 14860, NULL)
#elif defined __s390x__
CheckTypeSize(xmlXPathType,16, 14873, 12, 3.1, NULL, 14860, NULL)
#else
Msg("Find size of xmlXPathType (14873)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14860,NULL);\n",architecture,14873,0);
#endif

#if defined __i386__
CheckTypeSize(xmlXPathTypePtr,4, 14875, 2, 3.1, NULL, 14874, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlXPathTypePtr,8, 14875, 11, 3.1, NULL, 14874, NULL)
#elif defined __ia64__
CheckTypeSize(xmlXPathTypePtr,8, 14875, 3, 3.1, NULL, 14874, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlXPathTypePtr,4, 14875, 6, 3.1, NULL, 14874, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlXPathTypePtr,8, 14875, 9, 3.1, NULL, 14874, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlXPathTypePtr,4, 14875, 10, 3.1, NULL, 14874, NULL)
#elif defined __s390x__
CheckTypeSize(xmlXPathTypePtr,8, 14875, 12, 3.1, NULL, 14874, NULL)
#else
Msg("Find size of xmlXPathTypePtr (14875)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14874,NULL);\n",architecture,14875,0);
#endif

#if defined __i386__
CheckTypeSize(xmlXPathContext,200, 14878, 2, 3.1, NULL, 14859, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlXPathContext,344, 14878, 11, 3.1, NULL, 14859, NULL)
#elif defined __ia64__
CheckTypeSize(xmlXPathContext,344, 14878, 3, 3.1, NULL, 14859, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlXPathContext,200, 14878, 6, 3.1, NULL, 14859, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlXPathContext,344, 14878, 9, 3.1, NULL, 14859, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlXPathContext,200, 14878, 10, 3.1, NULL, 14859, NULL)
#elif defined __s390x__
CheckTypeSize(xmlXPathContext,344, 14878, 12, 3.1, NULL, 14859, NULL)
#else
Msg("Find size of xmlXPathContext (14878)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14859,NULL);\n",architecture,14878,0);
#endif

#if defined __i386__
CheckTypeSize(xmlXPathContextPtr,4, 14880, 2, 3.1, NULL, 14879, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlXPathContextPtr,8, 14880, 11, 3.1, NULL, 14879, NULL)
#elif defined __ia64__
CheckTypeSize(xmlXPathContextPtr,8, 14880, 3, 3.1, NULL, 14879, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlXPathContextPtr,4, 14880, 6, 3.1, NULL, 14879, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlXPathContextPtr,8, 14880, 9, 3.1, NULL, 14879, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlXPathContextPtr,4, 14880, 10, 3.1, NULL, 14879, NULL)
#elif defined __s390x__
CheckTypeSize(xmlXPathContextPtr,8, 14880, 12, 3.1, NULL, 14879, NULL)
#else
Msg("Find size of xmlXPathContextPtr (14880)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14879,NULL);\n",architecture,14880,0);
#endif

#if defined __i386__
CheckTypeSize(xmlXPathParserContext,44, 14882, 2, 3.1, NULL, 14877, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlXPathParserContext,80, 14882, 11, 3.1, NULL, 14877, NULL)
#elif defined __ia64__
CheckTypeSize(xmlXPathParserContext,80, 14882, 3, 3.1, NULL, 14877, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlXPathParserContext,44, 14882, 6, 3.1, NULL, 14877, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlXPathParserContext,80, 14882, 9, 3.1, NULL, 14877, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlXPathParserContext,44, 14882, 10, 3.1, NULL, 14877, NULL)
#elif defined __s390x__
CheckTypeSize(xmlXPathParserContext,80, 14882, 12, 3.1, NULL, 14877, NULL)
#else
Msg("Find size of xmlXPathParserContext (14882)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14877,NULL);\n",architecture,14882,0);
#endif

#if defined __i386__
CheckTypeSize(xmlXPathParserContextPtr,4, 14884, 2, 3.1, NULL, 14883, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlXPathParserContextPtr,8, 14884, 11, 3.1, NULL, 14883, NULL)
#elif defined __ia64__
CheckTypeSize(xmlXPathParserContextPtr,8, 14884, 3, 3.1, NULL, 14883, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlXPathParserContextPtr,4, 14884, 6, 3.1, NULL, 14883, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlXPathParserContextPtr,8, 14884, 9, 3.1, NULL, 14883, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlXPathParserContextPtr,4, 14884, 10, 3.1, NULL, 14883, NULL)
#elif defined __s390x__
CheckTypeSize(xmlXPathParserContextPtr,8, 14884, 12, 3.1, NULL, 14883, NULL)
#else
Msg("Find size of xmlXPathParserContextPtr (14884)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14883,NULL);\n",architecture,14884,0);
#endif

#if defined __i386__
CheckTypeSize(xmlXPathAxisFunc,4, 14886, 2, 3.1, NULL, 14885, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlXPathAxisFunc,8, 14886, 11, 3.1, NULL, 14885, NULL)
#elif defined __ia64__
CheckTypeSize(xmlXPathAxisFunc,8, 14886, 3, 3.1, NULL, 14885, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlXPathAxisFunc,4, 14886, 6, 3.1, NULL, 14885, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlXPathAxisFunc,8, 14886, 9, 3.1, NULL, 14885, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlXPathAxisFunc,4, 14886, 10, 3.1, NULL, 14885, NULL)
#elif defined __s390x__
CheckTypeSize(xmlXPathAxisFunc,8, 14886, 12, 3.1, NULL, 14885, NULL)
#else
Msg("Find size of xmlXPathAxisFunc (14886)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14885,NULL);\n",architecture,14886,0);
#endif

#if defined __i386__
CheckTypeSize(xmlXPathAxis,8, 14887, 2, 3.1, NULL, 14876, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlXPathAxis,16, 14887, 11, 3.1, NULL, 14876, NULL)
#elif defined __ia64__
CheckTypeSize(xmlXPathAxis,16, 14887, 3, 3.1, NULL, 14876, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlXPathAxis,8, 14887, 6, 3.1, NULL, 14876, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlXPathAxis,16, 14887, 9, 3.1, NULL, 14876, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlXPathAxis,8, 14887, 10, 3.1, NULL, 14876, NULL)
#elif defined __s390x__
CheckTypeSize(xmlXPathAxis,16, 14887, 12, 3.1, NULL, 14876, NULL)
#else
Msg("Find size of xmlXPathAxis (14887)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14876,NULL);\n",architecture,14887,0);
#endif

#if defined __i386__
CheckTypeSize(xmlXPathAxisPtr,4, 14889, 2, 3.1, NULL, 14888, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlXPathAxisPtr,8, 14889, 11, 3.1, NULL, 14888, NULL)
#elif defined __ia64__
CheckTypeSize(xmlXPathAxisPtr,8, 14889, 3, 3.1, NULL, 14888, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlXPathAxisPtr,4, 14889, 6, 3.1, NULL, 14888, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlXPathAxisPtr,8, 14889, 9, 3.1, NULL, 14888, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlXPathAxisPtr,4, 14889, 10, 3.1, NULL, 14888, NULL)
#elif defined __s390x__
CheckTypeSize(xmlXPathAxisPtr,8, 14889, 12, 3.1, NULL, 14888, NULL)
#else
Msg("Find size of xmlXPathAxisPtr (14889)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14888,NULL);\n",architecture,14889,0);
#endif

#if defined __i386__
CheckTypeSize(xmlXPathVariableLookupFunc,4, 14891, 2, 3.1, NULL, 14890, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlXPathVariableLookupFunc,8, 14891, 11, 3.1, NULL, 14890, NULL)
#elif defined __ia64__
CheckTypeSize(xmlXPathVariableLookupFunc,8, 14891, 3, 3.1, NULL, 14890, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlXPathVariableLookupFunc,4, 14891, 6, 3.1, NULL, 14890, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlXPathVariableLookupFunc,8, 14891, 9, 3.1, NULL, 14890, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlXPathVariableLookupFunc,4, 14891, 10, 3.1, NULL, 14890, NULL)
#elif defined __s390x__
CheckTypeSize(xmlXPathVariableLookupFunc,8, 14891, 12, 3.1, NULL, 14890, NULL)
#else
Msg("Find size of xmlXPathVariableLookupFunc (14891)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14890,NULL);\n",architecture,14891,0);
#endif

#if defined __i386__
CheckTypeSize(xmlXPathFunction,4, 14893, 2, 3.1, NULL, 14892, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlXPathFunction,8, 14893, 11, 3.1, NULL, 14892, NULL)
#elif defined __ia64__
CheckTypeSize(xmlXPathFunction,8, 14893, 3, 3.1, NULL, 14892, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlXPathFunction,4, 14893, 6, 3.1, NULL, 14892, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlXPathFunction,8, 14893, 9, 3.1, NULL, 14892, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlXPathFunction,4, 14893, 10, 3.1, NULL, 14892, NULL)
#elif defined __s390x__
CheckTypeSize(xmlXPathFunction,8, 14893, 12, 3.1, NULL, 14892, NULL)
#else
Msg("Find size of xmlXPathFunction (14893)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14892,NULL);\n",architecture,14893,0);
#endif

#if defined __i386__
CheckTypeSize(xmlXPathFuncLookupFunc,4, 14895, 2, 3.1, NULL, 14894, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlXPathFuncLookupFunc,8, 14895, 11, 3.1, NULL, 14894, NULL)
#elif defined __ia64__
CheckTypeSize(xmlXPathFuncLookupFunc,8, 14895, 3, 3.1, NULL, 14894, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlXPathFuncLookupFunc,4, 14895, 6, 3.1, NULL, 14894, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlXPathFuncLookupFunc,8, 14895, 9, 3.1, NULL, 14894, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlXPathFuncLookupFunc,4, 14895, 10, 3.1, NULL, 14894, NULL)
#elif defined __s390x__
CheckTypeSize(xmlXPathFuncLookupFunc,8, 14895, 12, 3.1, NULL, 14894, NULL)
#else
Msg("Find size of xmlXPathFuncLookupFunc (14895)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14894,NULL);\n",architecture,14895,0);
#endif

#if defined __i386__
CheckTypeSize(xmlXPathError,4, 15094, 2, 3.1, NULL, 15093, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlXPathError,4, 15094, 11, 3.1, NULL, 15093, NULL)
#elif defined __ia64__
CheckTypeSize(xmlXPathError,4, 15094, 3, 3.1, NULL, 15093, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlXPathError,4, 15094, 6, 3.1, NULL, 15093, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlXPathError,4, 15094, 9, 3.1, NULL, 15093, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlXPathError,4, 15094, 10, 3.1, NULL, 15093, NULL)
#elif defined __s390x__
CheckTypeSize(xmlXPathError,4, 15094, 12, 3.1, NULL, 15093, NULL)
#else
Msg("Find size of xmlXPathError (15094)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,15093,NULL);\n",architecture,15094,0);
#endif

#if defined __i386__
CheckTypeSize(xmlXPathEvalFunc,4, 15096, 2, 3.1, NULL, 15095, NULL)
#elif defined __ia64__
CheckTypeSize(xmlXPathEvalFunc,8, 15096, 3, 3.1, NULL, 15095, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlXPathEvalFunc,4, 15096, 6, 3.1, NULL, 15095, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlXPathEvalFunc,8, 15096, 9, 3.1, NULL, 15095, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlXPathEvalFunc,4, 15096, 10, 3.1, NULL, 15095, NULL)
#elif defined __s390x__
CheckTypeSize(xmlXPathEvalFunc,8, 15096, 12, 3.1, NULL, 15095, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlXPathEvalFunc,8, 15096, 11, 3.1, NULL, 15095, NULL)
#else
Msg("Find size of xmlXPathEvalFunc (15096)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,15095,NULL);\n",architecture,15096,0);
#endif

#if defined __i386__
CheckTypeSize(xmlXPathFunct,8, 15098, 2, 3.1, NULL, 15097, NULL)
#elif defined __ia64__
CheckTypeSize(xmlXPathFunct,16, 15098, 3, 3.1, NULL, 15097, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlXPathFunct,8, 15098, 6, 3.1, NULL, 15097, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlXPathFunct,16, 15098, 9, 3.1, NULL, 15097, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlXPathFunct,8, 15098, 10, 3.1, NULL, 15097, NULL)
#elif defined __s390x__
CheckTypeSize(xmlXPathFunct,16, 15098, 12, 3.1, NULL, 15097, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlXPathFunct,16, 15098, 11, 3.1, NULL, 15097, NULL)
#else
Msg("Find size of xmlXPathFunct (15098)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,15097,NULL);\n",architecture,15098,0);
#endif

#if defined __i386__
CheckTypeSize(xmlXPathVariable,8, 15100, 2, 3.1, NULL, 15099, NULL)
#elif defined __ia64__
CheckTypeSize(xmlXPathVariable,16, 15100, 3, 3.1, NULL, 15099, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlXPathVariable,8, 15100, 6, 3.1, NULL, 15099, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlXPathVariable,16, 15100, 9, 3.1, NULL, 15099, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlXPathVariable,8, 15100, 10, 3.1, NULL, 15099, NULL)
#elif defined __s390x__
CheckTypeSize(xmlXPathVariable,16, 15100, 12, 3.1, NULL, 15099, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlXPathVariable,16, 15100, 11, 3.1, NULL, 15099, NULL)
#else
Msg("Find size of xmlXPathVariable (15100)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,15099,NULL);\n",architecture,15100,0);
#endif

#if defined __i386__
CheckTypeSize(xmlXPathVariablePtr,4, 15102, 2, 3.1, NULL, 15101, NULL)
#elif defined __ia64__
CheckTypeSize(xmlXPathVariablePtr,8, 15102, 3, 3.1, NULL, 15101, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlXPathVariablePtr,4, 15102, 6, 3.1, NULL, 15101, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlXPathVariablePtr,8, 15102, 9, 3.1, NULL, 15101, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlXPathVariablePtr,4, 15102, 10, 3.1, NULL, 15101, NULL)
#elif defined __s390x__
CheckTypeSize(xmlXPathVariablePtr,8, 15102, 12, 3.1, NULL, 15101, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlXPathVariablePtr,8, 15102, 11, 3.1, NULL, 15101, NULL)
#else
Msg("Find size of xmlXPathVariablePtr (15102)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,15101,NULL);\n",architecture,15102,0);
#endif

#if defined __i386__
CheckTypeSize(xmlXPathFuncPtr,4, 15104, 2, 3.1, NULL, 15103, NULL)
#elif defined __ia64__
CheckTypeSize(xmlXPathFuncPtr,8, 15104, 3, 3.1, NULL, 15103, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlXPathFuncPtr,4, 15104, 6, 3.1, NULL, 15103, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlXPathFuncPtr,8, 15104, 9, 3.1, NULL, 15103, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlXPathFuncPtr,4, 15104, 10, 3.1, NULL, 15103, NULL)
#elif defined __s390x__
CheckTypeSize(xmlXPathFuncPtr,8, 15104, 12, 3.1, NULL, 15103, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlXPathFuncPtr,8, 15104, 11, 3.1, NULL, 15103, NULL)
#else
Msg("Find size of xmlXPathFuncPtr (15104)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,15103, NULL);\n",architecture,15104,0);
#endif

extern double xmlXPathCastNodeToNumber_db(xmlNodePtr);
CheckInterfacedef(xmlXPathCastNodeToNumber,xmlXPathCastNodeToNumber_db);
extern long int xmlXPathOrderDocElems_db(xmlDocPtr);
CheckInterfacedef(xmlXPathOrderDocElems,xmlXPathOrderDocElems_db);
extern void xmlXPathFreeCompExpr_db(xmlXPathCompExprPtr);
CheckInterfacedef(xmlXPathFreeCompExpr,xmlXPathFreeCompExpr_db);
extern int xmlXPathIsInf_db(double);
CheckInterfacedef(xmlXPathIsInf,xmlXPathIsInf_db);
extern xmlXPathContextPtr xmlXPathNewContext_db(xmlDocPtr);
CheckInterfacedef(xmlXPathNewContext,xmlXPathNewContext_db);
extern double xmlXPathCastNodeSetToNumber_db(xmlNodeSetPtr);
CheckInterfacedef(xmlXPathCastNodeSetToNumber,xmlXPathCastNodeSetToNumber_db);
extern int xmlXPathCastNumberToBoolean_db(double);
CheckInterfacedef(xmlXPathCastNumberToBoolean,xmlXPathCastNumberToBoolean_db);
extern int xmlXPathCmpNodes_db(xmlNodePtr, xmlNodePtr);
CheckInterfacedef(xmlXPathCmpNodes,xmlXPathCmpNodes_db);
extern xmlChar * xmlXPathCastNodeSetToString_db(xmlNodeSetPtr);
CheckInterfacedef(xmlXPathCastNodeSetToString,xmlXPathCastNodeSetToString_db);
extern xmlXPathCompExprPtr xmlXPathCtxtCompile_db(xmlXPathContextPtr, const xmlChar *);
CheckInterfacedef(xmlXPathCtxtCompile,xmlXPathCtxtCompile_db);
extern xmlXPathCompExprPtr xmlXPathCompile_db(const xmlChar *);
CheckInterfacedef(xmlXPathCompile,xmlXPathCompile_db);
extern xmlXPathObjectPtr xmlXPathConvertNumber_db(xmlXPathObjectPtr);
CheckInterfacedef(xmlXPathConvertNumber,xmlXPathConvertNumber_db);
extern int xmlXPathIsNaN_db(double);
CheckInterfacedef(xmlXPathIsNaN,xmlXPathIsNaN_db);
extern xmlChar * xmlXPathCastNodeToString_db(xmlNodePtr);
CheckInterfacedef(xmlXPathCastNodeToString,xmlXPathCastNodeToString_db);
extern int xmlXPathCastToBoolean_db(xmlXPathObjectPtr);
CheckInterfacedef(xmlXPathCastToBoolean,xmlXPathCastToBoolean_db);
extern double xmlXPathCastStringToNumber_db(const xmlChar *);
CheckInterfacedef(xmlXPathCastStringToNumber,xmlXPathCastStringToNumber_db);
extern xmlXPathObjectPtr xmlXPathCompiledEval_db(xmlXPathCompExprPtr, xmlXPathContextPtr);
CheckInterfacedef(xmlXPathCompiledEval,xmlXPathCompiledEval_db);
extern void xmlXPathFreeNodeSet_db(xmlNodeSetPtr);
CheckInterfacedef(xmlXPathFreeNodeSet,xmlXPathFreeNodeSet_db);
extern int xmlXPathCastNodeSetToBoolean_db(xmlNodeSetPtr);
CheckInterfacedef(xmlXPathCastNodeSetToBoolean,xmlXPathCastNodeSetToBoolean_db);
extern xmlChar * xmlXPathCastToString_db(xmlXPathObjectPtr);
CheckInterfacedef(xmlXPathCastToString,xmlXPathCastToString_db);
extern xmlChar * xmlXPathCastNumberToString_db(double);
CheckInterfacedef(xmlXPathCastNumberToString,xmlXPathCastNumberToString_db);
extern void xmlXPathFreeObject_db(xmlXPathObjectPtr);
CheckInterfacedef(xmlXPathFreeObject,xmlXPathFreeObject_db);
extern double xmlXPathCastToNumber_db(xmlXPathObjectPtr);
CheckInterfacedef(xmlXPathCastToNumber,xmlXPathCastToNumber_db);
extern xmlXPathObjectPtr xmlXPathConvertBoolean_db(xmlXPathObjectPtr);
CheckInterfacedef(xmlXPathConvertBoolean,xmlXPathConvertBoolean_db);
extern xmlXPathObjectPtr xmlXPathEvalExpression_db(const xmlChar *, xmlXPathContextPtr);
CheckInterfacedef(xmlXPathEvalExpression,xmlXPathEvalExpression_db);
extern int xmlXPathEvalPredicate_db(xmlXPathContextPtr, xmlXPathObjectPtr);
CheckInterfacedef(xmlXPathEvalPredicate,xmlXPathEvalPredicate_db);
extern int xmlXPathCastStringToBoolean_db(const xmlChar *);
CheckInterfacedef(xmlXPathCastStringToBoolean,xmlXPathCastStringToBoolean_db);
extern xmlXPathObjectPtr xmlXPathObjectCopy_db(xmlXPathObjectPtr);
CheckInterfacedef(xmlXPathObjectCopy,xmlXPathObjectCopy_db);
extern xmlNodeSetPtr xmlXPathNodeSetCreate_db(xmlNodePtr);
CheckInterfacedef(xmlXPathNodeSetCreate,xmlXPathNodeSetCreate_db);
extern void xmlXPathFreeContext_db(xmlXPathContextPtr);
CheckInterfacedef(xmlXPathFreeContext,xmlXPathFreeContext_db);
extern void xmlXPathInit_db(void);
CheckInterfacedef(xmlXPathInit,xmlXPathInit_db);
extern xmlXPathObjectPtr xmlXPathConvertString_db(xmlXPathObjectPtr);
CheckInterfacedef(xmlXPathConvertString,xmlXPathConvertString_db);
extern xmlChar * xmlXPathCastBooleanToString_db(int);
CheckInterfacedef(xmlXPathCastBooleanToString,xmlXPathCastBooleanToString_db);
extern xmlXPathObjectPtr xmlXPathEval_db(const xmlChar *, xmlXPathContextPtr);
CheckInterfacedef(xmlXPathEval,xmlXPathEval_db);
extern double xmlXPathCastBooleanToNumber_db(int);
CheckInterfacedef(xmlXPathCastBooleanToNumber,xmlXPathCastBooleanToNumber_db);
extern void xmlXPathFreeNodeSetList_db(xmlXPathObjectPtr);
CheckInterfacedef(xmlXPathFreeNodeSetList,xmlXPathFreeNodeSetList_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in libxml2/libxml/xpath.h\n\n",pcnt,cnt);
return cnt;
#endif

}
