/*
 * Test of X11/Xresource.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include <wchar.h>
#include <X11/X.h>
#include <X11/Xlib.h>

#include "X11/Xresource.h"



#ifdef TET_TEST
void X11_Xresource_h()
{
#else
int X11_Xresource_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in X11/Xresource.h\n");
#endif

printf("Checking data structures in X11/Xresource.h\n");
#if defined __s390x__
CheckTypeSize(XrmQuark,4, 9542, 12, 1.3, NULL, 6, NULL)
#elif defined __x86_64__
CheckTypeSize(XrmQuark,4, 9542, 11, 2.0, NULL, 6, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XrmQuark,4, 9542, 10, 1.3, NULL, 6, NULL)
#elif defined __powerpc64__
CheckTypeSize(XrmQuark,4, 9542, 9, 2.0, NULL, 6, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XrmQuark,4, 9542, 6, 1.2, NULL, 6, NULL)
#elif defined __ia64__
CheckTypeSize(XrmQuark,4, 9542, 3, 1.3, NULL, 6, NULL)
#elif defined __i386__
CheckTypeSize(XrmQuark,4, 9542, 2, 1.2, NULL, 6, NULL)
#else
Msg("Find size of XrmQuark (9542)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,6,NULL);\n",architecture,9542,0);
#endif

#if defined __s390x__
CheckTypeSize(XrmQuarkList,8, 9543, 12, 1.3, NULL, 60, NULL)
#elif defined __x86_64__
CheckTypeSize(XrmQuarkList,8, 9543, 11, 2.0, NULL, 60, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XrmQuarkList,4, 9543, 10, 1.3, NULL, 60, NULL)
#elif defined __powerpc64__
CheckTypeSize(XrmQuarkList,8, 9543, 9, 2.0, NULL, 60, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XrmQuarkList,4, 9543, 6, 1.2, NULL, 60, NULL)
#elif defined __ia64__
CheckTypeSize(XrmQuarkList,8, 9543, 3, 1.3, NULL, 60, NULL)
#elif defined __i386__
CheckTypeSize(XrmQuarkList,4, 9543, 2, 1.2, NULL, 60, NULL)
#else
Msg("Find size of XrmQuarkList (9543)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,60,NULL);\n",architecture,9543,0);
#endif

#if defined __s390x__
CheckTypeSize(XrmString,8, 9544, 12, 1.3, NULL, 63, NULL)
#elif defined __x86_64__
CheckTypeSize(XrmString,8, 9544, 11, 2.0, NULL, 63, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XrmString,4, 9544, 10, 1.3, NULL, 63, NULL)
#elif defined __powerpc64__
CheckTypeSize(XrmString,8, 9544, 9, 2.0, NULL, 63, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XrmString,4, 9544, 6, 1.2, NULL, 63, NULL)
#elif defined __ia64__
CheckTypeSize(XrmString,8, 9544, 3, 1.3, NULL, 63, NULL)
#elif defined __i386__
CheckTypeSize(XrmString,4, 9544, 2, 1.2, NULL, 63, NULL)
#else
Msg("Find size of XrmString (9544)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,63,NULL);\n",architecture,9544,0);
#endif

#if 1
CheckTypeSize(XrmBinding,4, 9546, 1, 1.2, NULL, 9547, NULL)
#endif

#if defined __s390x__
CheckTypeSize(XrmBindingList,8, 9549, 12, 1.3, NULL, 9548, NULL)
#elif defined __x86_64__
CheckTypeSize(XrmBindingList,8, 9549, 11, 2.0, NULL, 9548, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XrmBindingList,4, 9549, 10, 1.3, NULL, 9548, NULL)
#elif defined __powerpc64__
CheckTypeSize(XrmBindingList,8, 9549, 9, 2.0, NULL, 9548, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XrmBindingList,4, 9549, 6, 1.2, NULL, 9548, NULL)
#elif defined __ia64__
CheckTypeSize(XrmBindingList,8, 9549, 3, 1.3, NULL, 9548, NULL)
#elif defined __i386__
CheckTypeSize(XrmBindingList,4, 9549, 2, 1.2, NULL, 9548, NULL)
#else
Msg("Find size of XrmBindingList (9549)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9548,NULL);\n",architecture,9549,0);
#endif

#if defined __s390x__
CheckTypeSize(XrmName,4, 9550, 12, 1.3, NULL, 9542, NULL)
#elif defined __x86_64__
CheckTypeSize(XrmName,4, 9550, 11, 2.0, NULL, 9542, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XrmName,4, 9550, 10, 1.3, NULL, 9542, NULL)
#elif defined __powerpc64__
CheckTypeSize(XrmName,4, 9550, 9, 2.0, NULL, 9542, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XrmName,4, 9550, 6, 1.2, NULL, 9542, NULL)
#elif defined __ia64__
CheckTypeSize(XrmName,4, 9550, 3, 1.3, NULL, 9542, NULL)
#elif defined __i386__
CheckTypeSize(XrmName,4, 9550, 2, 1.2, NULL, 9542, NULL)
#else
Msg("Find size of XrmName (9550)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9542,NULL);\n",architecture,9550,0);
#endif

#if defined __s390x__
CheckTypeSize(XrmNameList,8, 9551, 12, 1.3, NULL, 9543, NULL)
#elif defined __x86_64__
CheckTypeSize(XrmNameList,8, 9551, 11, 2.0, NULL, 9543, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XrmNameList,4, 9551, 10, 1.3, NULL, 9543, NULL)
#elif defined __powerpc64__
CheckTypeSize(XrmNameList,8, 9551, 9, 2.0, NULL, 9543, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XrmNameList,4, 9551, 6, 1.2, NULL, 9543, NULL)
#elif defined __ia64__
CheckTypeSize(XrmNameList,8, 9551, 3, 1.3, NULL, 9543, NULL)
#elif defined __i386__
CheckTypeSize(XrmNameList,4, 9551, 2, 1.2, NULL, 9543, NULL)
#else
Msg("Find size of XrmNameList (9551)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9543,NULL);\n",architecture,9551,0);
#endif

#if defined __s390x__
CheckTypeSize(XrmClass,4, 9552, 12, 1.3, NULL, 9542, NULL)
#elif defined __x86_64__
CheckTypeSize(XrmClass,4, 9552, 11, 2.0, NULL, 9542, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XrmClass,4, 9552, 10, 1.3, NULL, 9542, NULL)
#elif defined __powerpc64__
CheckTypeSize(XrmClass,4, 9552, 9, 2.0, NULL, 9542, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XrmClass,4, 9552, 6, 1.2, NULL, 9542, NULL)
#elif defined __ia64__
CheckTypeSize(XrmClass,4, 9552, 3, 1.3, NULL, 9542, NULL)
#elif defined __i386__
CheckTypeSize(XrmClass,4, 9552, 2, 1.2, NULL, 9542, NULL)
#else
Msg("Find size of XrmClass (9552)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9542,NULL);\n",architecture,9552,0);
#endif

#if defined __s390x__
CheckTypeSize(XrmClassList,8, 9553, 12, 1.3, NULL, 9543, NULL)
#elif defined __x86_64__
CheckTypeSize(XrmClassList,8, 9553, 11, 2.0, NULL, 9543, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XrmClassList,4, 9553, 10, 1.3, NULL, 9543, NULL)
#elif defined __powerpc64__
CheckTypeSize(XrmClassList,8, 9553, 9, 2.0, NULL, 9543, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XrmClassList,4, 9553, 6, 1.2, NULL, 9543, NULL)
#elif defined __ia64__
CheckTypeSize(XrmClassList,8, 9553, 3, 1.3, NULL, 9543, NULL)
#elif defined __i386__
CheckTypeSize(XrmClassList,4, 9553, 2, 1.2, NULL, 9543, NULL)
#else
Msg("Find size of XrmClassList (9553)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9543,NULL);\n",architecture,9553,0);
#endif

#if defined __s390x__
CheckTypeSize(XrmRepresentation,4, 9554, 12, 1.3, NULL, 9542, NULL)
#elif defined __x86_64__
CheckTypeSize(XrmRepresentation,4, 9554, 11, 2.0, NULL, 9542, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XrmRepresentation,4, 9554, 10, 1.3, NULL, 9542, NULL)
#elif defined __powerpc64__
CheckTypeSize(XrmRepresentation,4, 9554, 9, 2.0, NULL, 9542, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XrmRepresentation,4, 9554, 6, 1.2, NULL, 9542, NULL)
#elif defined __ia64__
CheckTypeSize(XrmRepresentation,4, 9554, 3, 1.3, NULL, 9542, NULL)
#elif defined __i386__
CheckTypeSize(XrmRepresentation,4, 9554, 2, 1.2, NULL, 9542, NULL)
#else
Msg("Find size of XrmRepresentation (9554)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9542,NULL);\n",architecture,9554,0);
#endif

#if defined __s390x__
CheckTypeSize(XrmValue,16, 9556, 12, 1.3, NULL, 9555, NULL)
#elif defined __x86_64__
CheckTypeSize(XrmValue,16, 9556, 11, 2.0, NULL, 9555, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XrmValue,8, 9556, 10, 1.3, NULL, 9555, NULL)
#elif defined __powerpc64__
CheckTypeSize(XrmValue,16, 9556, 9, 2.0, NULL, 9555, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XrmValue,8, 9556, 6, 1.2, NULL, 9555, NULL)
#elif defined __ia64__
CheckTypeSize(XrmValue,16, 9556, 3, 1.3, NULL, 9555, NULL)
#elif defined __i386__
CheckTypeSize(XrmValue,8, 9556, 2, 1.2, NULL, 9555, NULL)
#else
Msg("Find size of XrmValue (9556)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9555,NULL);\n",architecture,9556,0);
#endif

#if defined __s390x__
CheckTypeSize(XrmValuePtr,8, 9559, 12, 1.3, NULL, 9558, NULL)
#elif defined __x86_64__
CheckTypeSize(XrmValuePtr,8, 9559, 11, 2.0, NULL, 9558, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XrmValuePtr,4, 9559, 10, 1.3, NULL, 9558, NULL)
#elif defined __powerpc64__
CheckTypeSize(XrmValuePtr,8, 9559, 9, 2.0, NULL, 9558, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XrmValuePtr,4, 9559, 6, 1.2, NULL, 9558, NULL)
#elif defined __ia64__
CheckTypeSize(XrmValuePtr,8, 9559, 3, 1.3, NULL, 9558, NULL)
#elif defined __i386__
CheckTypeSize(XrmValuePtr,4, 9559, 2, 1.2, NULL, 9558, NULL)
#else
Msg("Find size of XrmValuePtr (9559)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9558,NULL);\n",architecture,9559,0);
#endif

#if defined __s390x__
CheckTypeSize(XrmHashBucket,8, 9560, 12, 1.3, NULL, 7107, NULL)
#elif defined __x86_64__
CheckTypeSize(XrmHashBucket,8, 9560, 11, 2.0, NULL, 7107, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XrmHashBucket,4, 9560, 10, 1.3, NULL, 7107, NULL)
#elif defined __powerpc64__
CheckTypeSize(XrmHashBucket,8, 9560, 9, 2.0, NULL, 7107, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XrmHashBucket,4, 9560, 6, 1.2, NULL, 7107, NULL)
#elif defined __ia64__
CheckTypeSize(XrmHashBucket,8, 9560, 3, 1.3, NULL, 7107, NULL)
#elif defined __i386__
CheckTypeSize(XrmHashBucket,4, 9560, 2, 1.2, NULL, 7107, NULL)
#else
Msg("Find size of XrmHashBucket (9560)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,7107,NULL);\n",architecture,9560,0);
#endif

#if defined __s390x__
CheckTypeSize(XrmHashTable,8, 9562, 12, 1.3, NULL, 9561, NULL)
#elif defined __x86_64__
CheckTypeSize(XrmHashTable,8, 9562, 11, 2.0, NULL, 9561, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XrmHashTable,4, 9562, 10, 1.3, NULL, 9561, NULL)
#elif defined __powerpc64__
CheckTypeSize(XrmHashTable,8, 9562, 9, 2.0, NULL, 9561, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XrmHashTable,4, 9562, 6, 1.2, NULL, 9561, NULL)
#elif defined __ia64__
CheckTypeSize(XrmHashTable,8, 9562, 3, 1.3, NULL, 9561, NULL)
#elif defined __i386__
CheckTypeSize(XrmHashTable,4, 9562, 2, 1.2, NULL, 9561, NULL)
#else
Msg("Find size of XrmHashTable (9562)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9561,NULL);\n",architecture,9562,0);
#endif

#if defined __s390x__
CheckTypeSize(XrmDatabase,8, 9564, 12, 1.3, NULL, 7107, NULL)
#elif defined __x86_64__
CheckTypeSize(XrmDatabase,8, 9564, 11, 2.0, NULL, 7107, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XrmDatabase,4, 9564, 10, 1.3, NULL, 7107, NULL)
#elif defined __powerpc64__
CheckTypeSize(XrmDatabase,8, 9564, 9, 2.0, NULL, 7107, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XrmDatabase,4, 9564, 6, 1.2, NULL, 7107, NULL)
#elif defined __ia64__
CheckTypeSize(XrmDatabase,8, 9564, 3, 1.3, NULL, 7107, NULL)
#elif defined __i386__
CheckTypeSize(XrmDatabase,4, 9564, 2, 1.2, NULL, 7107, NULL)
#else
Msg("Find size of XrmDatabase (9564)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,7107,NULL);\n",architecture,9564,0);
#endif

#if 1
CheckTypeSize(XrmOptionKind,4, 9569, 1, 1.2, NULL, 9568, NULL)
#endif

#if defined __s390x__
CheckTypeSize(XrmOptionDescRec,32, 9571, 12, 1.3, NULL, 9570, NULL)
#elif defined __x86_64__
CheckTypeSize(XrmOptionDescRec,32, 9571, 11, 2.0, NULL, 9570, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XrmOptionDescRec,16, 9571, 10, 1.3, NULL, 9570, NULL)
#elif defined __powerpc64__
CheckTypeSize(XrmOptionDescRec,32, 9571, 9, 2.0, NULL, 9570, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XrmOptionDescRec,16, 9571, 6, 1.2, NULL, 9570, NULL)
#elif defined __ia64__
CheckTypeSize(XrmOptionDescRec,32, 9571, 3, 1.3, NULL, 9570, NULL)
#elif defined __i386__
CheckTypeSize(XrmOptionDescRec,16, 9571, 2, 1.2, NULL, 9570, NULL)
#else
Msg("Find size of XrmOptionDescRec (9571)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9570,NULL);\n",architecture,9571,0);
#endif

#if defined __s390x__
CheckTypeSize(XrmOptionDescList,8, 9574, 12, 1.3, NULL, 9573, NULL)
#elif defined __x86_64__
CheckTypeSize(XrmOptionDescList,8, 9574, 11, 2.0, NULL, 9573, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XrmOptionDescList,4, 9574, 10, 1.3, NULL, 9573, NULL)
#elif defined __powerpc64__
CheckTypeSize(XrmOptionDescList,8, 9574, 9, 2.0, NULL, 9573, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XrmOptionDescList,4, 9574, 6, 1.2, NULL, 9573, NULL)
#elif defined __ia64__
CheckTypeSize(XrmOptionDescList,8, 9574, 3, 1.3, NULL, 9573, NULL)
#elif defined __i386__
CheckTypeSize(XrmOptionDescList,4, 9574, 2, 1.2, NULL, 9573, NULL)
#else
Msg("Find size of XrmOptionDescList (9574)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9573, NULL);\n",architecture,9574,0);
#endif

extern void XrmCombineDatabase_db(XrmDatabase, XrmDatabase *, int);
CheckInterfacedef(XrmCombineDatabase,XrmCombineDatabase_db);
extern int XrmCombineFileDatabase_db(const char *, XrmDatabase *, int);
CheckInterfacedef(XrmCombineFileDatabase,XrmCombineFileDatabase_db);
extern void XrmDestroyDatabase_db(XrmDatabase);
CheckInterfacedef(XrmDestroyDatabase,XrmDestroyDatabase_db);
extern int XrmEnumerateDatabase_db(XrmDatabase, XrmNameList, XrmClassList, int, int(*fptr0)(XrmDatabase *,XrmBindingList,XrmQuarkList,XrmRepresentation *,XrmValue *,XPointer)
, XPointer);
CheckInterfacedef(XrmEnumerateDatabase,XrmEnumerateDatabase_db);
extern XrmDatabase XrmGetDatabase_db(Display *);
CheckInterfacedef(XrmGetDatabase,XrmGetDatabase_db);
extern XrmDatabase XrmGetFileDatabase_db(const char *);
CheckInterfacedef(XrmGetFileDatabase,XrmGetFileDatabase_db);
extern int XrmGetResource_db(XrmDatabase, const char *, const char *, char * *, XrmValue *);
CheckInterfacedef(XrmGetResource,XrmGetResource_db);
extern XrmDatabase XrmGetStringDatabase_db(const char *);
CheckInterfacedef(XrmGetStringDatabase,XrmGetStringDatabase_db);
extern const char * XrmLocaleOfDatabase_db(XrmDatabase);
CheckInterfacedef(XrmLocaleOfDatabase,XrmLocaleOfDatabase_db);
extern void XrmMergeDatabases_db(XrmDatabase, XrmDatabase *);
CheckInterfacedef(XrmMergeDatabases,XrmMergeDatabases_db);
extern void XrmParseCommand_db(XrmDatabase *, XrmOptionDescList, int, const char *, int *, char * *);
CheckInterfacedef(XrmParseCommand,XrmParseCommand_db);
extern XrmQuark XrmPermStringToQuark_db(const char *);
CheckInterfacedef(XrmPermStringToQuark,XrmPermStringToQuark_db);
extern void XrmPutFileDatabase_db(XrmDatabase, const char *);
CheckInterfacedef(XrmPutFileDatabase,XrmPutFileDatabase_db);
extern void XrmPutLineResource_db(XrmDatabase *, const char *);
CheckInterfacedef(XrmPutLineResource,XrmPutLineResource_db);
extern void XrmPutResource_db(XrmDatabase *, const char *, const char *, XrmValue *);
CheckInterfacedef(XrmPutResource,XrmPutResource_db);
extern void XrmPutStringResource_db(XrmDatabase *, const char *, const char *);
CheckInterfacedef(XrmPutStringResource,XrmPutStringResource_db);
extern int XrmQGetResource_db(XrmDatabase, XrmNameList, XrmClassList, XrmRepresentation *, XrmValue *);
CheckInterfacedef(XrmQGetResource,XrmQGetResource_db);
extern int XrmQGetSearchList_db(XrmDatabase, XrmNameList, XrmClassList, XrmSearchList, int);
CheckInterfacedef(XrmQGetSearchList,XrmQGetSearchList_db);
extern int XrmQGetSearchResource_db(XrmSearchList, XrmName, XrmClass, XrmRepresentation *, XrmValue *);
CheckInterfacedef(XrmQGetSearchResource,XrmQGetSearchResource_db);
extern void XrmQPutResource_db(XrmDatabase *, XrmBindingList, XrmQuarkList, XrmRepresentation, XrmValue *);
CheckInterfacedef(XrmQPutResource,XrmQPutResource_db);
extern void XrmQPutStringResource_db(XrmDatabase *, XrmBindingList, XrmQuarkList, const char *);
CheckInterfacedef(XrmQPutStringResource,XrmQPutStringResource_db);
extern XrmString XrmQuarkToString_db(XrmQuark);
CheckInterfacedef(XrmQuarkToString,XrmQuarkToString_db);
extern void XrmSetDatabase_db(Display *, XrmDatabase);
CheckInterfacedef(XrmSetDatabase,XrmSetDatabase_db);
extern void XrmStringToBindingQuarkList_db(const char *, XrmBindingList, XrmQuarkList);
CheckInterfacedef(XrmStringToBindingQuarkList,XrmStringToBindingQuarkList_db);
extern XrmQuark XrmStringToQuark_db(const char *);
CheckInterfacedef(XrmStringToQuark,XrmStringToQuark_db);
extern void XrmStringToQuarkList_db(const char *, XrmQuarkList);
CheckInterfacedef(XrmStringToQuarkList,XrmStringToQuarkList_db);
extern XrmQuark XrmUniqueQuark_db(void);
CheckInterfacedef(XrmUniqueQuark,XrmUniqueQuark_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/Xresource.h\n\n",pcnt,cnt);
return cnt;
#endif

}
