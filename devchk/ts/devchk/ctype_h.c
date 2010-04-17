/*
 * Test of ctype.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
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
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in ctype.h\n");
#endif

printf("Checking data structures in ctype.h\n");
#if defined __s390x__
CheckEnum("_ISupper",_ISupper,0,53835)
CheckEnum("_ISlower",_ISlower,(0) + 1,53836)
CheckEnum("_ISalpha",_ISalpha,((0) + 1) + 1,53837)
CheckEnum("_ISdigit",_ISdigit,(((0) + 1) + 1) + 1,53838)
CheckEnum("_ISxdigit",_ISxdigit,((((0) + 1) + 1) + 1) + 1,53839)
CheckEnum("_ISspace",_ISspace,(((((0) + 1) + 1) + 1) + 1) + 1,53840)
CheckEnum("_ISprint",_ISprint,((((((0) + 1) + 1) + 1) + 1) + 1) + 1,53841)
CheckEnum("_ISgraph",_ISgraph,(((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1,53842)
CheckEnum("_ISblank",_ISblank,((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,53843)
CheckEnum("_IScntrl",_IScntrl,(((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,53844)
CheckEnum("_ISpunct",_ISpunct,((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,53845)
CheckEnum("_ISalnum",_ISalnum,(((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,53846)
#elif defined __x86_64__
CheckEnum("_ISupper",_ISupper,0,53823)
CheckEnum("_ISlower",_ISlower,(0) + 1,53824)
CheckEnum("_ISalpha",_ISalpha,((0) + 1) + 1,53825)
CheckEnum("_ISdigit",_ISdigit,(((0) + 1) + 1) + 1,53826)
CheckEnum("_ISxdigit",_ISxdigit,((((0) + 1) + 1) + 1) + 1,53827)
CheckEnum("_ISspace",_ISspace,(((((0) + 1) + 1) + 1) + 1) + 1,53828)
CheckEnum("_ISprint",_ISprint,((((((0) + 1) + 1) + 1) + 1) + 1) + 1,53829)
CheckEnum("_ISgraph",_ISgraph,(((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1,53830)
CheckEnum("_ISblank",_ISblank,((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,53831)
CheckEnum("_IScntrl",_IScntrl,(((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,53832)
CheckEnum("_ISpunct",_ISpunct,((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,53833)
CheckEnum("_ISalnum",_ISalnum,(((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,53834)
#elif defined __s390__ && !defined __s390x__
CheckEnum("_ISupper",_ISupper,0,53811)
CheckEnum("_ISlower",_ISlower,(0) + 1,53812)
CheckEnum("_ISalpha",_ISalpha,((0) + 1) + 1,53813)
CheckEnum("_ISdigit",_ISdigit,(((0) + 1) + 1) + 1,53814)
CheckEnum("_ISxdigit",_ISxdigit,((((0) + 1) + 1) + 1) + 1,53815)
CheckEnum("_ISspace",_ISspace,(((((0) + 1) + 1) + 1) + 1) + 1,53816)
CheckEnum("_ISprint",_ISprint,((((((0) + 1) + 1) + 1) + 1) + 1) + 1,53817)
CheckEnum("_ISgraph",_ISgraph,(((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1,53818)
CheckEnum("_ISblank",_ISblank,((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,53819)
CheckEnum("_IScntrl",_IScntrl,(((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,53820)
CheckEnum("_ISpunct",_ISpunct,((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,53821)
CheckEnum("_ISalnum",_ISalnum,(((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,53822)
#elif defined __powerpc64__
CheckEnum("_ISupper",_ISupper,0,53799)
CheckEnum("_ISlower",_ISlower,(0) + 1,53800)
CheckEnum("_ISalpha",_ISalpha,((0) + 1) + 1,53801)
CheckEnum("_ISdigit",_ISdigit,(((0) + 1) + 1) + 1,53802)
CheckEnum("_ISxdigit",_ISxdigit,((((0) + 1) + 1) + 1) + 1,53803)
CheckEnum("_ISspace",_ISspace,(((((0) + 1) + 1) + 1) + 1) + 1,53804)
CheckEnum("_ISprint",_ISprint,((((((0) + 1) + 1) + 1) + 1) + 1) + 1,53805)
CheckEnum("_ISgraph",_ISgraph,(((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1,53806)
CheckEnum("_ISblank",_ISblank,((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,53807)
CheckEnum("_IScntrl",_IScntrl,(((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,53808)
CheckEnum("_ISpunct",_ISpunct,((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,53809)
CheckEnum("_ISalnum",_ISalnum,(((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,53810)
#elif defined __powerpc__ && !defined __powerpc64__
CheckEnum("_ISupper",_ISupper,0,53787)
CheckEnum("_ISlower",_ISlower,(0) + 1,53788)
CheckEnum("_ISalpha",_ISalpha,((0) + 1) + 1,53789)
CheckEnum("_ISdigit",_ISdigit,(((0) + 1) + 1) + 1,53790)
CheckEnum("_ISxdigit",_ISxdigit,((((0) + 1) + 1) + 1) + 1,53791)
CheckEnum("_ISspace",_ISspace,(((((0) + 1) + 1) + 1) + 1) + 1,53792)
CheckEnum("_ISprint",_ISprint,((((((0) + 1) + 1) + 1) + 1) + 1) + 1,53793)
CheckEnum("_ISgraph",_ISgraph,(((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1,53794)
CheckEnum("_ISblank",_ISblank,((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,53795)
CheckEnum("_IScntrl",_IScntrl,(((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,53796)
CheckEnum("_ISpunct",_ISpunct,((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,53797)
CheckEnum("_ISalnum",_ISalnum,(((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,53798)
#elif defined __ia64__
CheckEnum("_ISupper",_ISupper,0,53775)
CheckEnum("_ISlower",_ISlower,(0) + 1,53776)
CheckEnum("_ISalpha",_ISalpha,((0) + 1) + 1,53777)
CheckEnum("_ISdigit",_ISdigit,(((0) + 1) + 1) + 1,53778)
CheckEnum("_ISxdigit",_ISxdigit,((((0) + 1) + 1) + 1) + 1,53779)
CheckEnum("_ISspace",_ISspace,(((((0) + 1) + 1) + 1) + 1) + 1,53780)
CheckEnum("_ISprint",_ISprint,((((((0) + 1) + 1) + 1) + 1) + 1) + 1,53781)
CheckEnum("_ISgraph",_ISgraph,(((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1,53782)
CheckEnum("_ISblank",_ISblank,((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,53783)
CheckEnum("_IScntrl",_IScntrl,(((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,53784)
CheckEnum("_ISpunct",_ISpunct,((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,53785)
CheckEnum("_ISalnum",_ISalnum,(((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,53786)
#elif defined __i386__
CheckEnum("_ISupper",_ISupper,0,29682)
CheckEnum("_ISlower",_ISlower,(0) + 1,29683)
CheckEnum("_ISalpha",_ISalpha,((0) + 1) + 1,29684)
CheckEnum("_ISdigit",_ISdigit,(((0) + 1) + 1) + 1,29685)
CheckEnum("_ISxdigit",_ISxdigit,((((0) + 1) + 1) + 1) + 1,29686)
CheckEnum("_ISspace",_ISspace,(((((0) + 1) + 1) + 1) + 1) + 1,29687)
CheckEnum("_ISprint",_ISprint,((((((0) + 1) + 1) + 1) + 1) + 1) + 1,29688)
CheckEnum("_ISgraph",_ISgraph,(((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1,29689)
CheckEnum("_ISblank",_ISblank,((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,29690)
CheckEnum("_IScntrl",_IScntrl,(((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,29691)
CheckEnum("_ISpunct",_ISpunct,((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,29692)
CheckEnum("_ISalnum",_ISalnum,(((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,29693)
#else
Msg("Find size of anon-ctype.h-13 (8976)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0, NULL);\n",architecture,8976,0);
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
