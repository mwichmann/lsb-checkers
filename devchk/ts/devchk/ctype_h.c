/*
 * Test of ctype.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include "ctype.h"



#ifdef TET_TEST
void ctype_h()
{
#else
int ctype_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in ctype.h\n");
#endif

printf("Checking data structures in ctype.h\n");
#if __i386__
CheckEnum("_ISupper",_ISupper,0);
CheckEnum("_ISlower",_ISlower,(0) + 1);
CheckEnum("_ISalpha",_ISalpha,((0) + 1) + 1);
CheckEnum("_ISdigit",_ISdigit,(((0) + 1) + 1) + 1);
CheckEnum("_ISxdigit",_ISxdigit,((((0) + 1) + 1) + 1) + 1);
CheckEnum("_ISspace",_ISspace,(((((0) + 1) + 1) + 1) + 1) + 1);
CheckEnum("_ISprint",_ISprint,((((((0) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("_ISgraph",_ISgraph,(((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("_ISblank",_ISblank,((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("_IScntrl",_IScntrl,(((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("_ISpunct",_ISpunct,((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("_ISalnum",_ISalnum,(((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
#elif __ia64__
CheckEnum("_ISupper",_ISupper,0);
CheckEnum("_ISlower",_ISlower,(0) + 1);
CheckEnum("_ISalpha",_ISalpha,((0) + 1) + 1);
CheckEnum("_ISdigit",_ISdigit,(((0) + 1) + 1) + 1);
CheckEnum("_ISxdigit",_ISxdigit,((((0) + 1) + 1) + 1) + 1);
CheckEnum("_ISspace",_ISspace,(((((0) + 1) + 1) + 1) + 1) + 1);
CheckEnum("_ISprint",_ISprint,((((((0) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("_ISgraph",_ISgraph,(((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("_ISblank",_ISblank,((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("_IScntrl",_IScntrl,(((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("_ISpunct",_ISpunct,((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("_ISalnum",_ISalnum,(((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
#elif __powerpc__ && !__powerpc64__
CheckEnum("_ISupper",_ISupper,0);
CheckEnum("_ISlower",_ISlower,(0) + 1);
CheckEnum("_ISalpha",_ISalpha,((0) + 1) + 1);
CheckEnum("_ISdigit",_ISdigit,(((0) + 1) + 1) + 1);
CheckEnum("_ISxdigit",_ISxdigit,((((0) + 1) + 1) + 1) + 1);
CheckEnum("_ISspace",_ISspace,(((((0) + 1) + 1) + 1) + 1) + 1);
CheckEnum("_ISprint",_ISprint,((((((0) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("_ISgraph",_ISgraph,(((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("_ISblank",_ISblank,((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("_IScntrl",_IScntrl,(((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("_ISpunct",_ISpunct,((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("_ISalnum",_ISalnum,(((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
#elif __s390__ && !__s390x__
CheckEnum("_ISupper",_ISupper,0);
CheckEnum("_ISlower",_ISlower,(0) + 1);
CheckEnum("_ISalpha",_ISalpha,((0) + 1) + 1);
CheckEnum("_ISdigit",_ISdigit,(((0) + 1) + 1) + 1);
CheckEnum("_ISxdigit",_ISxdigit,((((0) + 1) + 1) + 1) + 1);
CheckEnum("_ISspace",_ISspace,(((((0) + 1) + 1) + 1) + 1) + 1);
CheckEnum("_ISprint",_ISprint,((((((0) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("_ISgraph",_ISgraph,(((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("_ISblank",_ISblank,((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("_IScntrl",_IScntrl,(((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("_ISpunct",_ISpunct,((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("_ISalnum",_ISalnum,(((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
#elif __powerpc64__
CheckEnum("_ISupper",_ISupper,0);
CheckEnum("_ISlower",_ISlower,(0) + 1);
CheckEnum("_ISalpha",_ISalpha,((0) + 1) + 1);
CheckEnum("_ISdigit",_ISdigit,(((0) + 1) + 1) + 1);
CheckEnum("_ISxdigit",_ISxdigit,((((0) + 1) + 1) + 1) + 1);
CheckEnum("_ISspace",_ISspace,(((((0) + 1) + 1) + 1) + 1) + 1);
CheckEnum("_ISprint",_ISprint,((((((0) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("_ISgraph",_ISgraph,(((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("_ISblank",_ISblank,((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("_IScntrl",_IScntrl,(((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("_ISpunct",_ISpunct,((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("_ISalnum",_ISalnum,(((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
#elif __s390x__
CheckEnum("_ISupper",_ISupper,0);
CheckEnum("_ISlower",_ISlower,(0) + 1);
CheckEnum("_ISalpha",_ISalpha,((0) + 1) + 1);
CheckEnum("_ISdigit",_ISdigit,(((0) + 1) + 1) + 1);
CheckEnum("_ISxdigit",_ISxdigit,((((0) + 1) + 1) + 1) + 1);
CheckEnum("_ISspace",_ISspace,(((((0) + 1) + 1) + 1) + 1) + 1);
CheckEnum("_ISprint",_ISprint,((((((0) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("_ISgraph",_ISgraph,(((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("_ISblank",_ISblank,((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("_IScntrl",_IScntrl,(((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("_ISpunct",_ISpunct,((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("_ISalnum",_ISalnum,(((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
#elif __x86_64__
CheckEnum("_ISupper",_ISupper,0);
CheckEnum("_ISlower",_ISlower,(0) + 1);
CheckEnum("_ISalpha",_ISalpha,((0) + 1) + 1);
CheckEnum("_ISdigit",_ISdigit,(((0) + 1) + 1) + 1);
CheckEnum("_ISxdigit",_ISxdigit,((((0) + 1) + 1) + 1) + 1);
CheckEnum("_ISspace",_ISspace,(((((0) + 1) + 1) + 1) + 1) + 1);
CheckEnum("_ISprint",_ISprint,((((((0) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("_ISgraph",_ISgraph,(((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("_ISblank",_ISblank,((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("_IScntrl",_IScntrl,(((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("_ISpunct",_ISpunct,((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("_ISalnum",_ISalnum,(((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8976,0);
Msg("Find size of anon-ctype.h-13 (8976)\n");
#endif

extern int _tolower_db(int);
CheckInterfacedef(_tolower,_tolower_db);
extern int _toupper_db(int);
CheckInterfacedef(_toupper,_toupper_db);
extern int isalnum_db(int);
CheckInterfacedef(isalnum,isalnum_db);
extern int isalpha_db(int);
CheckInterfacedef(isalpha,isalpha_db);
extern int isascii_db(int);
CheckInterfacedef(isascii,isascii_db);
extern int iscntrl_db(int);
CheckInterfacedef(iscntrl,iscntrl_db);
extern int isdigit_db(int);
CheckInterfacedef(isdigit,isdigit_db);
extern int isgraph_db(int);
CheckInterfacedef(isgraph,isgraph_db);
extern int islower_db(int);
CheckInterfacedef(islower,islower_db);
extern int isprint_db(int);
CheckInterfacedef(isprint,isprint_db);
extern int ispunct_db(int);
CheckInterfacedef(ispunct,ispunct_db);
extern int isspace_db(int);
CheckInterfacedef(isspace,isspace_db);
extern int isupper_db(int);
CheckInterfacedef(isupper,isupper_db);
extern int isxdigit_db(int);
CheckInterfacedef(isxdigit,isxdigit_db);
extern int toascii_db(int);
CheckInterfacedef(toascii,toascii_db);
extern int tolower_db(int);
CheckInterfacedef(tolower,tolower_db);
extern int toupper_db(int);
CheckInterfacedef(toupper,toupper_db);
extern int isblank_db(int);
CheckInterfacedef(isblank,isblank_db);
extern const unsigned short * * __ctype_b_loc_db(void);
CheckInterfacedef(__ctype_b_loc,__ctype_b_loc_db);
extern const int32_t * * __ctype_toupper_loc_db(void);
CheckInterfacedef(__ctype_toupper_loc,__ctype_toupper_loc_db);
extern const int32_t * * __ctype_tolower_loc_db(void);
CheckInterfacedef(__ctype_tolower_loc,__ctype_tolower_loc_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in ctype.h\n\n",pcnt,cnt);
return cnt;
#endif

}
