/*
 * Test of libxml2/libxml/valid.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include <libxml/xmlversion.h>
#include <libxml/xmlregexp.h>
#include <libxml/globals.h>

struct _xmlValidState {};
struct _xmlHashTable {};
#include "libxml2/libxml/valid.h"



#ifdef TET_TEST
void libxml2_libxml_valid_h()
{
#else
int libxml2_libxml_valid_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in libxml2/libxml/valid.h\n");
#endif

printf("Checking data structures in libxml2/libxml/valid.h\n");
#if __i386__
CheckTypeSize(xmlValidCtxtPtr,4, 14937, 2, 3.1, NULL, 14936, NULL)
#elif __x86_64__
CheckTypeSize(xmlValidCtxtPtr,8, 14937, 11, 3.1, NULL, 14936, NULL)
#elif __ia64__
CheckTypeSize(xmlValidCtxtPtr,8, 14937, 3, 3.1, NULL, 14936, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlValidCtxtPtr,4, 14937, 6, 3.1, NULL, 14936, NULL)
#elif __powerpc64__
CheckTypeSize(xmlValidCtxtPtr,8, 14937, 9, 3.1, NULL, 14936, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlValidCtxtPtr,4, 14937, 10, 3.1, NULL, 14936, NULL)
#elif __s390x__
CheckTypeSize(xmlValidCtxtPtr,8, 14937, 12, 3.1, NULL, 14936, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14936,NULL);\n",architecture,14937,0);
Msg("Find size of xmlValidCtxtPtr (14937)\n");
#endif

#if __i386__
CheckTypeSize(xmlAttributeTable,0, 14938, 2, 3.1, NULL, 14723, NULL)
#elif __x86_64__
CheckTypeSize(xmlAttributeTable,0, 14938, 11, 3.1, NULL, 14723, NULL)
#elif __ia64__
CheckTypeSize(xmlAttributeTable,0, 14938, 3, 3.1, NULL, 14723, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlAttributeTable,0, 14938, 6, 3.1, NULL, 14723, NULL)
#elif __powerpc64__
CheckTypeSize(xmlAttributeTable,0, 14938, 9, 3.1, NULL, 14723, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlAttributeTable,0, 14938, 10, 3.1, NULL, 14723, NULL)
#elif __s390x__
CheckTypeSize(xmlAttributeTable,0, 14938, 12, 3.1, NULL, 14723, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14723,NULL);\n",architecture,14938,0);
Msg("Find size of xmlAttributeTable (14938)\n");
#endif

#if __i386__
CheckTypeSize(xmlAttributeTablePtr,4, 14940, 2, 3.1, NULL, 14939, NULL)
#elif __x86_64__
CheckTypeSize(xmlAttributeTablePtr,8, 14940, 11, 3.1, NULL, 14939, NULL)
#elif __ia64__
CheckTypeSize(xmlAttributeTablePtr,8, 14940, 3, 3.1, NULL, 14939, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlAttributeTablePtr,4, 14940, 6, 3.1, NULL, 14939, NULL)
#elif __powerpc64__
CheckTypeSize(xmlAttributeTablePtr,8, 14940, 9, 3.1, NULL, 14939, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlAttributeTablePtr,4, 14940, 10, 3.1, NULL, 14939, NULL)
#elif __s390x__
CheckTypeSize(xmlAttributeTablePtr,8, 14940, 12, 3.1, NULL, 14939, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14939,NULL);\n",architecture,14940,0);
Msg("Find size of xmlAttributeTablePtr (14940)\n");
#endif

#if __i386__
CheckTypeSize(xmlElementTypeVal,4, 14943, 2, 3.1, NULL, 14942, NULL)
#elif __x86_64__
CheckTypeSize(xmlElementTypeVal,4, 14943, 11, 3.1, NULL, 14942, NULL)
#elif __ia64__
CheckTypeSize(xmlElementTypeVal,4, 14943, 3, 3.1, NULL, 14942, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlElementTypeVal,4, 14943, 6, 3.1, NULL, 14942, NULL)
#elif __powerpc64__
CheckTypeSize(xmlElementTypeVal,4, 14943, 9, 3.1, NULL, 14942, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlElementTypeVal,4, 14943, 10, 3.1, NULL, 14942, NULL)
#elif __s390x__
CheckTypeSize(xmlElementTypeVal,4, 14943, 12, 3.1, NULL, 14942, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14942,NULL);\n",architecture,14943,0);
Msg("Find size of xmlElementTypeVal (14943)\n");
#endif

#if __i386__
CheckTypeSize(xmlAttributeDefault,4, 14947, 2, 3.1, NULL, 14946, NULL)
#elif __x86_64__
CheckTypeSize(xmlAttributeDefault,4, 14947, 11, 3.1, NULL, 14946, NULL)
#elif __ia64__
CheckTypeSize(xmlAttributeDefault,4, 14947, 3, 3.1, NULL, 14946, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlAttributeDefault,4, 14947, 6, 3.1, NULL, 14946, NULL)
#elif __powerpc64__
CheckTypeSize(xmlAttributeDefault,4, 14947, 9, 3.1, NULL, 14946, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlAttributeDefault,4, 14947, 10, 3.1, NULL, 14946, NULL)
#elif __s390x__
CheckTypeSize(xmlAttributeDefault,4, 14947, 12, 3.1, NULL, 14946, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14946,NULL);\n",architecture,14947,0);
Msg("Find size of xmlAttributeDefault (14947)\n");
#endif

#if __i386__
CheckTypeSize(xmlAttribute,64, 14948, 2, 3.1, NULL, 14944, NULL)
#elif __x86_64__
CheckTypeSize(xmlAttribute,120, 14948, 11, 3.1, NULL, 14944, NULL)
#elif __ia64__
CheckTypeSize(xmlAttribute,120, 14948, 3, 3.1, NULL, 14944, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlAttribute,64, 14948, 6, 3.1, NULL, 14944, NULL)
#elif __powerpc64__
CheckTypeSize(xmlAttribute,120, 14948, 9, 3.1, NULL, 14944, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlAttribute,64, 14948, 10, 3.1, NULL, 14944, NULL)
#elif __s390x__
CheckTypeSize(xmlAttribute,120, 14948, 12, 3.1, NULL, 14944, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14944,NULL);\n",architecture,14948,0);
Msg("Find size of xmlAttribute (14948)\n");
#endif

#if __i386__
CheckTypeSize(xmlAttributePtr,4, 14950, 2, 3.1, NULL, 14949, NULL)
#elif __x86_64__
CheckTypeSize(xmlAttributePtr,8, 14950, 11, 3.1, NULL, 14949, NULL)
#elif __ia64__
CheckTypeSize(xmlAttributePtr,8, 14950, 3, 3.1, NULL, 14949, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlAttributePtr,4, 14950, 6, 3.1, NULL, 14949, NULL)
#elif __powerpc64__
CheckTypeSize(xmlAttributePtr,8, 14950, 9, 3.1, NULL, 14949, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlAttributePtr,4, 14950, 10, 3.1, NULL, 14949, NULL)
#elif __s390x__
CheckTypeSize(xmlAttributePtr,8, 14950, 12, 3.1, NULL, 14949, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14949,NULL);\n",architecture,14950,0);
Msg("Find size of xmlAttributePtr (14950)\n");
#endif

#if __i386__
CheckTypeSize(xmlElement,56, 14951, 2, 3.1, NULL, 14941, NULL)
#elif __x86_64__
CheckTypeSize(xmlElement,112, 14951, 11, 3.1, NULL, 14941, NULL)
#elif __ia64__
CheckTypeSize(xmlElement,112, 14951, 3, 3.1, NULL, 14941, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlElement,56, 14951, 6, 3.1, NULL, 14941, NULL)
#elif __powerpc64__
CheckTypeSize(xmlElement,112, 14951, 9, 3.1, NULL, 14941, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlElement,56, 14951, 10, 3.1, NULL, 14941, NULL)
#elif __s390x__
CheckTypeSize(xmlElement,112, 14951, 12, 3.1, NULL, 14941, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14941,NULL);\n",architecture,14951,0);
Msg("Find size of xmlElement (14951)\n");
#endif

#if __i386__
CheckTypeSize(xmlElementPtr,4, 14953, 2, 3.1, NULL, 14952, NULL)
#elif __x86_64__
CheckTypeSize(xmlElementPtr,8, 14953, 11, 3.1, NULL, 14952, NULL)
#elif __ia64__
CheckTypeSize(xmlElementPtr,8, 14953, 3, 3.1, NULL, 14952, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlElementPtr,4, 14953, 6, 3.1, NULL, 14952, NULL)
#elif __powerpc64__
CheckTypeSize(xmlElementPtr,8, 14953, 9, 3.1, NULL, 14952, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlElementPtr,4, 14953, 10, 3.1, NULL, 14952, NULL)
#elif __s390x__
CheckTypeSize(xmlElementPtr,8, 14953, 12, 3.1, NULL, 14952, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14952,NULL);\n",architecture,14953,0);
Msg("Find size of xmlElementPtr (14953)\n");
#endif

#if __i386__
CheckTypeSize(xmlNotationTable,0, 14954, 2, 3.1, NULL, 14723, NULL)
#elif __x86_64__
CheckTypeSize(xmlNotationTable,0, 14954, 11, 3.1, NULL, 14723, NULL)
#elif __ia64__
CheckTypeSize(xmlNotationTable,0, 14954, 3, 3.1, NULL, 14723, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlNotationTable,0, 14954, 6, 3.1, NULL, 14723, NULL)
#elif __powerpc64__
CheckTypeSize(xmlNotationTable,0, 14954, 9, 3.1, NULL, 14723, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlNotationTable,0, 14954, 10, 3.1, NULL, 14723, NULL)
#elif __s390x__
CheckTypeSize(xmlNotationTable,0, 14954, 12, 3.1, NULL, 14723, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14723,NULL);\n",architecture,14954,0);
Msg("Find size of xmlNotationTable (14954)\n");
#endif

#if __i386__
CheckTypeSize(xmlNotationTablePtr,4, 14956, 2, 3.1, NULL, 14955, NULL)
#elif __x86_64__
CheckTypeSize(xmlNotationTablePtr,8, 14956, 11, 3.1, NULL, 14955, NULL)
#elif __ia64__
CheckTypeSize(xmlNotationTablePtr,8, 14956, 3, 3.1, NULL, 14955, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlNotationTablePtr,4, 14956, 6, 3.1, NULL, 14955, NULL)
#elif __powerpc64__
CheckTypeSize(xmlNotationTablePtr,8, 14956, 9, 3.1, NULL, 14955, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlNotationTablePtr,4, 14956, 10, 3.1, NULL, 14955, NULL)
#elif __s390x__
CheckTypeSize(xmlNotationTablePtr,8, 14956, 12, 3.1, NULL, 14955, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14955,NULL);\n",architecture,14956,0);
Msg("Find size of xmlNotationTablePtr (14956)\n");
#endif

#if __i386__
CheckTypeSize(xmlNotation,12, 14958, 2, 3.1, NULL, 14957, NULL)
#elif __x86_64__
CheckTypeSize(xmlNotation,24, 14958, 11, 3.1, NULL, 14957, NULL)
#elif __ia64__
CheckTypeSize(xmlNotation,24, 14958, 3, 3.1, NULL, 14957, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlNotation,12, 14958, 6, 3.1, NULL, 14957, NULL)
#elif __powerpc64__
CheckTypeSize(xmlNotation,24, 14958, 9, 3.1, NULL, 14957, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlNotation,12, 14958, 10, 3.1, NULL, 14957, NULL)
#elif __s390x__
CheckTypeSize(xmlNotation,24, 14958, 12, 3.1, NULL, 14957, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14957,NULL);\n",architecture,14958,0);
Msg("Find size of xmlNotation (14958)\n");
#endif

#if __i386__
CheckTypeSize(xmlNotationPtr,4, 14960, 2, 3.1, NULL, 14959, NULL)
#elif __x86_64__
CheckTypeSize(xmlNotationPtr,8, 14960, 11, 3.1, NULL, 14959, NULL)
#elif __ia64__
CheckTypeSize(xmlNotationPtr,8, 14960, 3, 3.1, NULL, 14959, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlNotationPtr,4, 14960, 6, 3.1, NULL, 14959, NULL)
#elif __powerpc64__
CheckTypeSize(xmlNotationPtr,8, 14960, 9, 3.1, NULL, 14959, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlNotationPtr,4, 14960, 10, 3.1, NULL, 14959, NULL)
#elif __s390x__
CheckTypeSize(xmlNotationPtr,8, 14960, 12, 3.1, NULL, 14959, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14959,NULL);\n",architecture,14960,0);
Msg("Find size of xmlNotationPtr (14960)\n");
#endif

#if __i386__
CheckTypeSize(xmlID,24, 14963, 2, 3.1, NULL, 14961, NULL)
#elif __x86_64__
CheckTypeSize(xmlID,48, 14963, 11, 3.1, NULL, 14961, NULL)
#elif __ia64__
CheckTypeSize(xmlID,48, 14963, 3, 3.1, NULL, 14961, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlID,24, 14963, 6, 3.1, NULL, 14961, NULL)
#elif __powerpc64__
CheckTypeSize(xmlID,48, 14963, 9, 3.1, NULL, 14961, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlID,24, 14963, 10, 3.1, NULL, 14961, NULL)
#elif __s390x__
CheckTypeSize(xmlID,48, 14963, 12, 3.1, NULL, 14961, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14961,NULL);\n",architecture,14963,0);
Msg("Find size of xmlID (14963)\n");
#endif

#if __i386__
CheckTypeSize(xmlIDPtr,4, 14965, 2, 3.1, NULL, 14964, NULL)
#elif __x86_64__
CheckTypeSize(xmlIDPtr,8, 14965, 11, 3.1, NULL, 14964, NULL)
#elif __ia64__
CheckTypeSize(xmlIDPtr,8, 14965, 3, 3.1, NULL, 14964, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlIDPtr,4, 14965, 6, 3.1, NULL, 14964, NULL)
#elif __powerpc64__
CheckTypeSize(xmlIDPtr,8, 14965, 9, 3.1, NULL, 14964, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlIDPtr,4, 14965, 10, 3.1, NULL, 14964, NULL)
#elif __s390x__
CheckTypeSize(xmlIDPtr,8, 14965, 12, 3.1, NULL, 14964, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14964,NULL);\n",architecture,14965,0);
Msg("Find size of xmlIDPtr (14965)\n");
#endif

#if __i386__
CheckTypeSize(xmlRef,20, 14968, 2, 3.1, NULL, 14966, NULL)
#elif __x86_64__
CheckTypeSize(xmlRef,40, 14968, 11, 3.1, NULL, 14966, NULL)
#elif __ia64__
CheckTypeSize(xmlRef,40, 14968, 3, 3.1, NULL, 14966, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlRef,20, 14968, 6, 3.1, NULL, 14966, NULL)
#elif __powerpc64__
CheckTypeSize(xmlRef,40, 14968, 9, 3.1, NULL, 14966, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlRef,20, 14968, 10, 3.1, NULL, 14966, NULL)
#elif __s390x__
CheckTypeSize(xmlRef,40, 14968, 12, 3.1, NULL, 14966, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14966,NULL);\n",architecture,14968,0);
Msg("Find size of xmlRef (14968)\n");
#endif

#if __i386__
CheckTypeSize(xmlRefPtr,4, 14970, 2, 3.1, NULL, 14969, NULL)
#elif __x86_64__
CheckTypeSize(xmlRefPtr,8, 14970, 11, 3.1, NULL, 14969, NULL)
#elif __ia64__
CheckTypeSize(xmlRefPtr,8, 14970, 3, 3.1, NULL, 14969, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlRefPtr,4, 14970, 6, 3.1, NULL, 14969, NULL)
#elif __powerpc64__
CheckTypeSize(xmlRefPtr,8, 14970, 9, 3.1, NULL, 14969, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlRefPtr,4, 14970, 10, 3.1, NULL, 14969, NULL)
#elif __s390x__
CheckTypeSize(xmlRefPtr,8, 14970, 12, 3.1, NULL, 14969, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14969,NULL);\n",architecture,14970,0);
Msg("Find size of xmlRefPtr (14970)\n");
#endif

#if __i386__
CheckTypeSize(xmlElementTable,0, 14971, 2, 3.1, NULL, 14723, NULL)
#elif __x86_64__
CheckTypeSize(xmlElementTable,0, 14971, 11, 3.1, NULL, 14723, NULL)
#elif __ia64__
CheckTypeSize(xmlElementTable,0, 14971, 3, 3.1, NULL, 14723, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlElementTable,0, 14971, 6, 3.1, NULL, 14723, NULL)
#elif __powerpc64__
CheckTypeSize(xmlElementTable,0, 14971, 9, 3.1, NULL, 14723, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlElementTable,0, 14971, 10, 3.1, NULL, 14723, NULL)
#elif __s390x__
CheckTypeSize(xmlElementTable,0, 14971, 12, 3.1, NULL, 14723, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14723,NULL);\n",architecture,14971,0);
Msg("Find size of xmlElementTable (14971)\n");
#endif

#if __i386__
CheckTypeSize(xmlElementTablePtr,4, 14973, 2, 3.1, NULL, 14972, NULL)
#elif __x86_64__
CheckTypeSize(xmlElementTablePtr,8, 14973, 11, 3.1, NULL, 14972, NULL)
#elif __ia64__
CheckTypeSize(xmlElementTablePtr,8, 14973, 3, 3.1, NULL, 14972, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlElementTablePtr,4, 14973, 6, 3.1, NULL, 14972, NULL)
#elif __powerpc64__
CheckTypeSize(xmlElementTablePtr,8, 14973, 9, 3.1, NULL, 14972, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlElementTablePtr,4, 14973, 10, 3.1, NULL, 14972, NULL)
#elif __s390x__
CheckTypeSize(xmlElementTablePtr,8, 14973, 12, 3.1, NULL, 14972, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14972,NULL);\n",architecture,14973,0);
Msg("Find size of xmlElementTablePtr (14973)\n");
#endif

#if __i386__
CheckTypeSize(xmlIDTable,0, 14974, 2, 3.1, NULL, 14723, NULL)
#elif __x86_64__
CheckTypeSize(xmlIDTable,0, 14974, 11, 3.1, NULL, 14723, NULL)
#elif __ia64__
CheckTypeSize(xmlIDTable,0, 14974, 3, 3.1, NULL, 14723, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlIDTable,0, 14974, 6, 3.1, NULL, 14723, NULL)
#elif __powerpc64__
CheckTypeSize(xmlIDTable,0, 14974, 9, 3.1, NULL, 14723, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlIDTable,0, 14974, 10, 3.1, NULL, 14723, NULL)
#elif __s390x__
CheckTypeSize(xmlIDTable,0, 14974, 12, 3.1, NULL, 14723, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14723,NULL);\n",architecture,14974,0);
Msg("Find size of xmlIDTable (14974)\n");
#endif

#if __i386__
CheckTypeSize(xmlIDTablePtr,4, 14976, 2, 3.1, NULL, 14975, NULL)
#elif __x86_64__
CheckTypeSize(xmlIDTablePtr,8, 14976, 11, 3.1, NULL, 14975, NULL)
#elif __ia64__
CheckTypeSize(xmlIDTablePtr,8, 14976, 3, 3.1, NULL, 14975, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlIDTablePtr,4, 14976, 6, 3.1, NULL, 14975, NULL)
#elif __powerpc64__
CheckTypeSize(xmlIDTablePtr,8, 14976, 9, 3.1, NULL, 14975, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlIDTablePtr,4, 14976, 10, 3.1, NULL, 14975, NULL)
#elif __s390x__
CheckTypeSize(xmlIDTablePtr,8, 14976, 12, 3.1, NULL, 14975, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14975,NULL);\n",architecture,14976,0);
Msg("Find size of xmlIDTablePtr (14976)\n");
#endif

#if __i386__
CheckTypeSize(xmlRefTable,0, 14977, 2, 3.1, NULL, 14723, NULL)
#elif __x86_64__
CheckTypeSize(xmlRefTable,0, 14977, 11, 3.1, NULL, 14723, NULL)
#elif __ia64__
CheckTypeSize(xmlRefTable,0, 14977, 3, 3.1, NULL, 14723, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlRefTable,0, 14977, 6, 3.1, NULL, 14723, NULL)
#elif __powerpc64__
CheckTypeSize(xmlRefTable,0, 14977, 9, 3.1, NULL, 14723, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlRefTable,0, 14977, 10, 3.1, NULL, 14723, NULL)
#elif __s390x__
CheckTypeSize(xmlRefTable,0, 14977, 12, 3.1, NULL, 14723, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14723,NULL);\n",architecture,14977,0);
Msg("Find size of xmlRefTable (14977)\n");
#endif

#if __i386__
CheckTypeSize(xmlRefTablePtr,4, 14979, 2, 3.1, NULL, 14978, NULL)
#elif __x86_64__
CheckTypeSize(xmlRefTablePtr,8, 14979, 11, 3.1, NULL, 14978, NULL)
#elif __ia64__
CheckTypeSize(xmlRefTablePtr,8, 14979, 3, 3.1, NULL, 14978, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlRefTablePtr,4, 14979, 6, 3.1, NULL, 14978, NULL)
#elif __powerpc64__
CheckTypeSize(xmlRefTablePtr,8, 14979, 9, 3.1, NULL, 14978, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlRefTablePtr,4, 14979, 10, 3.1, NULL, 14978, NULL)
#elif __s390x__
CheckTypeSize(xmlRefTablePtr,8, 14979, 12, 3.1, NULL, 14978, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14978, NULL);\n",architecture,14979,0);
Msg("Find size of xmlRefTablePtr (14979)\n");
#endif

extern int xmlIsRef_db(xmlDocPtr, xmlNodePtr, xmlAttrPtr);
CheckInterfacedef(xmlIsRef,xmlIsRef_db);
extern int xmlValidateOneNamespace_db(xmlValidCtxtPtr, xmlDocPtr, xmlNodePtr, const xmlChar *, xmlNsPtr, const xmlChar *);
CheckInterfacedef(xmlValidateOneNamespace,xmlValidateOneNamespace_db);
extern xmlEnumerationPtr xmlCreateEnumeration_db(const xmlChar *);
CheckInterfacedef(xmlCreateEnumeration,xmlCreateEnumeration_db);
extern xmlListPtr xmlGetRefs_db(xmlDocPtr, const xmlChar *);
CheckInterfacedef(xmlGetRefs,xmlGetRefs_db);
extern int xmlIsMixedElement_db(xmlDocPtr, const xmlChar *);
CheckInterfacedef(xmlIsMixedElement,xmlIsMixedElement_db);
extern int xmlValidateNmtokensValue_db(const xmlChar *);
CheckInterfacedef(xmlValidateNmtokensValue,xmlValidateNmtokensValue_db);
extern int xmlValidateNameValue_db(const xmlChar *);
CheckInterfacedef(xmlValidateNameValue,xmlValidateNameValue_db);
extern xmlAttributeTablePtr xmlCopyAttributeTable_db(xmlAttributeTablePtr);
CheckInterfacedef(xmlCopyAttributeTable,xmlCopyAttributeTable_db);
extern xmlElementContentPtr xmlNewDocElementContent_db(xmlDocPtr, const xmlChar *, xmlElementContentType);
CheckInterfacedef(xmlNewDocElementContent,xmlNewDocElementContent_db);
extern int xmlValidateAttributeValue_db(xmlAttributeType, const xmlChar *);
CheckInterfacedef(xmlValidateAttributeValue,xmlValidateAttributeValue_db);
extern void xmlDumpElementDecl_db(xmlBufferPtr, xmlElementPtr);
CheckInterfacedef(xmlDumpElementDecl,xmlDumpElementDecl_db);
extern int xmlRemoveID_db(xmlDocPtr, xmlAttrPtr);
CheckInterfacedef(xmlRemoveID,xmlRemoveID_db);
extern void xmlDumpNotationTable_db(xmlBufferPtr, xmlNotationTablePtr);
CheckInterfacedef(xmlDumpNotationTable,xmlDumpNotationTable_db);
extern void xmlFreeEnumeration_db(xmlEnumerationPtr);
CheckInterfacedef(xmlFreeEnumeration,xmlFreeEnumeration_db);
extern void xmlSnprintfElementContent_db(char *, int, xmlElementContentPtr, int);
CheckInterfacedef(xmlSnprintfElementContent,xmlSnprintfElementContent_db);
extern int xmlValidateNotationUse_db(xmlValidCtxtPtr, xmlDocPtr, const xmlChar *);
CheckInterfacedef(xmlValidateNotationUse,xmlValidateNotationUse_db);
extern int xmlValidateDocument_db(xmlValidCtxtPtr, xmlDocPtr);
CheckInterfacedef(xmlValidateDocument,xmlValidateDocument_db);
extern int xmlValidateOneAttribute_db(xmlValidCtxtPtr, xmlDocPtr, xmlNodePtr, xmlAttrPtr, const xmlChar *);
CheckInterfacedef(xmlValidateOneAttribute,xmlValidateOneAttribute_db);
extern xmlChar * xmlValidNormalizeAttributeValue_db(xmlDocPtr, xmlNodePtr, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlValidNormalizeAttributeValue,xmlValidNormalizeAttributeValue_db);
extern xmlElementPtr xmlGetDtdElementDesc_db(xmlDtdPtr, const xmlChar *);
CheckInterfacedef(xmlGetDtdElementDesc,xmlGetDtdElementDesc_db);
extern int xmlValidateDtd_db(xmlValidCtxtPtr, xmlDocPtr, xmlDtdPtr);
CheckInterfacedef(xmlValidateDtd,xmlValidateDtd_db);
extern int xmlValidateDocumentFinal_db(xmlValidCtxtPtr, xmlDocPtr);
CheckInterfacedef(xmlValidateDocumentFinal,xmlValidateDocumentFinal_db);
extern xmlAttributePtr xmlAddAttributeDecl_db(xmlValidCtxtPtr, xmlDtdPtr, const xmlChar *, const xmlChar *, const xmlChar *, xmlAttributeType, xmlAttributeDefault, const xmlChar *, xmlEnumerationPtr);
CheckInterfacedef(xmlAddAttributeDecl,xmlAddAttributeDecl_db);
extern int xmlValidateNamesValue_db(const xmlChar *);
CheckInterfacedef(xmlValidateNamesValue,xmlValidateNamesValue_db);
extern xmlAttributePtr xmlGetDtdQAttrDesc_db(xmlDtdPtr, const xmlChar *, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlGetDtdQAttrDesc,xmlGetDtdQAttrDesc_db);
extern void xmlFreeDocElementContent_db(xmlDocPtr, xmlElementContentPtr);
CheckInterfacedef(xmlFreeDocElementContent,xmlFreeDocElementContent_db);
extern int xmlValidateElementDecl_db(xmlValidCtxtPtr, xmlDocPtr, xmlElementPtr);
CheckInterfacedef(xmlValidateElementDecl,xmlValidateElementDecl_db);
extern xmlValidCtxtPtr xmlNewValidCtxt_db(void);
CheckInterfacedef(xmlNewValidCtxt,xmlNewValidCtxt_db);
extern int xmlValidateNmtokenValue_db(const xmlChar *);
CheckInterfacedef(xmlValidateNmtokenValue,xmlValidateNmtokenValue_db);
extern xmlElementPtr xmlGetDtdQElementDesc_db(xmlDtdPtr, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlGetDtdQElementDesc,xmlGetDtdQElementDesc_db);
extern xmlNotationTablePtr xmlCopyNotationTable_db(xmlNotationTablePtr);
CheckInterfacedef(xmlCopyNotationTable,xmlCopyNotationTable_db);
extern void xmlDumpNotationDecl_db(xmlBufferPtr, xmlNotationPtr);
CheckInterfacedef(xmlDumpNotationDecl,xmlDumpNotationDecl_db);
extern int xmlValidatePushElement_db(xmlValidCtxtPtr, xmlDocPtr, xmlNodePtr, const xmlChar *);
CheckInterfacedef(xmlValidatePushElement,xmlValidatePushElement_db);
extern int xmlValidateNotationDecl_db(xmlValidCtxtPtr, xmlDocPtr, xmlNotationPtr);
CheckInterfacedef(xmlValidateNotationDecl,xmlValidateNotationDecl_db);
extern xmlNotationPtr xmlAddNotationDecl_db(xmlValidCtxtPtr, xmlDtdPtr, const xmlChar *, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlAddNotationDecl,xmlAddNotationDecl_db);
extern int xmlValidBuildContentModel_db(xmlValidCtxtPtr, xmlElementPtr);
CheckInterfacedef(xmlValidBuildContentModel,xmlValidBuildContentModel_db);
extern int xmlValidatePopElement_db(xmlValidCtxtPtr, xmlDocPtr, xmlNodePtr, const xmlChar *);
CheckInterfacedef(xmlValidatePopElement,xmlValidatePopElement_db);
extern xmlIDPtr xmlAddID_db(xmlValidCtxtPtr, xmlDocPtr, const xmlChar *, xmlAttrPtr);
CheckInterfacedef(xmlAddID,xmlAddID_db);
extern xmlElementContentPtr xmlCopyDocElementContent_db(xmlDocPtr, xmlElementContentPtr);
CheckInterfacedef(xmlCopyDocElementContent,xmlCopyDocElementContent_db);
extern xmlAttributePtr xmlGetDtdAttrDesc_db(xmlDtdPtr, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlGetDtdAttrDesc,xmlGetDtdAttrDesc_db);
extern xmlEnumerationPtr xmlCopyEnumeration_db(xmlEnumerationPtr);
CheckInterfacedef(xmlCopyEnumeration,xmlCopyEnumeration_db);
extern int xmlValidateAttributeDecl_db(xmlValidCtxtPtr, xmlDocPtr, xmlAttributePtr);
CheckInterfacedef(xmlValidateAttributeDecl,xmlValidateAttributeDecl_db);
extern xmlRefPtr xmlAddRef_db(xmlValidCtxtPtr, xmlDocPtr, const xmlChar *, xmlAttrPtr);
CheckInterfacedef(xmlAddRef,xmlAddRef_db);
extern void xmlFreeElementTable_db(xmlElementTablePtr);
CheckInterfacedef(xmlFreeElementTable,xmlFreeElementTable_db);
extern void xmlDumpAttributeTable_db(xmlBufferPtr, xmlAttributeTablePtr);
CheckInterfacedef(xmlDumpAttributeTable,xmlDumpAttributeTable_db);
extern int xmlValidateOneElement_db(xmlValidCtxtPtr, xmlDocPtr, xmlNodePtr);
CheckInterfacedef(xmlValidateOneElement,xmlValidateOneElement_db);
extern int xmlIsID_db(xmlDocPtr, xmlNodePtr, xmlAttrPtr);
CheckInterfacedef(xmlIsID,xmlIsID_db);
extern void xmlFreeIDTable_db(xmlIDTablePtr);
CheckInterfacedef(xmlFreeIDTable,xmlFreeIDTable_db);
extern int xmlRemoveRef_db(xmlDocPtr, xmlAttrPtr);
CheckInterfacedef(xmlRemoveRef,xmlRemoveRef_db);
extern int xmlValidGetValidElements_db(xmlNode *, xmlNode *, const xmlChar * *, int);
CheckInterfacedef(xmlValidGetValidElements,xmlValidGetValidElements_db);
extern void xmlFreeNotationTable_db(xmlNotationTablePtr);
CheckInterfacedef(xmlFreeNotationTable,xmlFreeNotationTable_db);
extern void xmlFreeRefTable_db(xmlRefTablePtr);
CheckInterfacedef(xmlFreeRefTable,xmlFreeRefTable_db);
extern xmlNotationPtr xmlGetDtdNotationDesc_db(xmlDtdPtr, const xmlChar *);
CheckInterfacedef(xmlGetDtdNotationDesc,xmlGetDtdNotationDesc_db);
extern int xmlValidateRoot_db(xmlValidCtxtPtr, xmlDocPtr);
CheckInterfacedef(xmlValidateRoot,xmlValidateRoot_db);
extern xmlElementTablePtr xmlCopyElementTable_db(xmlElementTablePtr);
CheckInterfacedef(xmlCopyElementTable,xmlCopyElementTable_db);
extern xmlElementPtr xmlAddElementDecl_db(xmlValidCtxtPtr, xmlDtdPtr, const xmlChar *, xmlElementTypeVal, xmlElementContentPtr);
CheckInterfacedef(xmlAddElementDecl,xmlAddElementDecl_db);
extern void xmlFreeValidCtxt_db(xmlValidCtxtPtr);
CheckInterfacedef(xmlFreeValidCtxt,xmlFreeValidCtxt_db);
extern int xmlValidateDtdFinal_db(xmlValidCtxtPtr, xmlDocPtr);
CheckInterfacedef(xmlValidateDtdFinal,xmlValidateDtdFinal_db);
extern void xmlDumpElementTable_db(xmlBufferPtr, xmlElementTablePtr);
CheckInterfacedef(xmlDumpElementTable,xmlDumpElementTable_db);
extern void xmlDumpAttributeDecl_db(xmlBufferPtr, xmlAttributePtr);
CheckInterfacedef(xmlDumpAttributeDecl,xmlDumpAttributeDecl_db);
extern int xmlValidateElement_db(xmlValidCtxtPtr, xmlDocPtr, xmlNodePtr);
CheckInterfacedef(xmlValidateElement,xmlValidateElement_db);
extern xmlAttrPtr xmlGetID_db(xmlDocPtr, const xmlChar *);
CheckInterfacedef(xmlGetID,xmlGetID_db);
extern int xmlValidatePushCData_db(xmlValidCtxtPtr, const xmlChar *, int);
CheckInterfacedef(xmlValidatePushCData,xmlValidatePushCData_db);
extern void xmlFreeAttributeTable_db(xmlAttributeTablePtr);
CheckInterfacedef(xmlFreeAttributeTable,xmlFreeAttributeTable_db);
extern int xmlValidGetPotentialChildren_db(xmlElementContent *, const xmlChar * *, int *, int);
CheckInterfacedef(xmlValidGetPotentialChildren,xmlValidGetPotentialChildren_db);
extern xmlChar * xmlValidCtxtNormalizeAttributeValue_db(xmlValidCtxtPtr, xmlDocPtr, xmlNodePtr, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlValidCtxtNormalizeAttributeValue,xmlValidCtxtNormalizeAttributeValue_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in libxml2/libxml/valid.h\n\n",pcnt,cnt);
return cnt;
#endif

}
