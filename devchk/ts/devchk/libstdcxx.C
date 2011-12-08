/*
 * Test of libstdcxx
 */
#include "hdrchk.h"


extern "C" {
#ifdef TET_TEST
void libstdcxx();
#else
int libstdcxx();
#endif
}


#ifdef TET_TEST
void libstdcxx()
{
#else
int libstdcxx()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking libstdcxx types\n");
#define TYPE std::codecvt<char, char, __mbstate_t>
#if defined __i386__
CheckTypeSize(TYPE, 12, 10596, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 24, 10596, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 12, 10596, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 24, 10596, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 12, 10596, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 24, 10596, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 24, 10596, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10596,?);
#endif
#undef TYPE

#define TYPE std::codecvt<wchar_t, char, __mbstate_t>
#if defined __i386__
CheckTypeSize(TYPE, 12, 10597, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 24, 10597, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 12, 10597, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 24, 10597, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 12, 10597, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 24, 10597, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 24, 10597, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10597,?);
#endif
#undef TYPE

#define TYPE std::ctype<char>
#if defined __i386__
CheckTypeSize(TYPE, 544, 10598, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 576, 10598, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 544, 10598, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 576, 10598, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 544, 10598, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 576, 10598, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 576, 10598, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10598,?);
#endif
#undef TYPE

#define TYPE std::ctype<wchar_t>
#if defined __i386__
CheckTypeSize(TYPE, 1264, 10599, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 1344, 10599, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 1264, 10599, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 1344, 10599, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 1264, 10599, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 1344, 10599, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 1344, 10599, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10599,?);
#endif
#undef TYPE

#define TYPE __gnu_cxx::stdio_filebuf<char, std::char_traits<char> >
#if defined __i386__
CheckTypeSize(TYPE, 136, 10600, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 240, 10600, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 136, 10600, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 240, 10600, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 136, 10600, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 240, 10600, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 240, 10600, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10600,?);
#endif
#undef TYPE

#define TYPE __gnu_cxx::stdio_filebuf<wchar_t, std::char_traits<wchar_t> >
#if defined __i386__
CheckTypeSize(TYPE, 140, 10601, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 240, 10601, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 140, 10601, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 240, 10601, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 140, 10601, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 240, 10601, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 240, 10601, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10601,?);
#endif
#undef TYPE

#define TYPE std::basic_filebuf<char, std::char_traits<char> >
#if defined __i386__
CheckTypeSize(TYPE, 136, 10602, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 240, 10602, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 136, 10602, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 240, 10602, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 136, 10602, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 240, 10602, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 240, 10602, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10602,?);
#endif
#undef TYPE

#define TYPE std::basic_filebuf<wchar_t, std::char_traits<wchar_t> >
#if defined __i386__
CheckTypeSize(TYPE, 140, 10603, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 240, 10603, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 140, 10603, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 240, 10603, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 140, 10603, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 240, 10603, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 240, 10603, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10603,?);
#endif
#undef TYPE

#define TYPE std::basic_ifstream<char, std::char_traits<char> >
#if defined __i386__
CheckTypeSize(TYPE, 280, 10604, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 520, 10604, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 280, 10604, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 520, 10604, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 280, 10604, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 520, 10604, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 520, 10604, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10604,?);
#endif
#undef TYPE

#define TYPE std::basic_ostringstream<char, std::char_traits<char>, std::allocator<char> >
#if defined __i386__
CheckTypeSize(TYPE, 180, 10605, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 352, 10605, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 180, 10605, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 352, 10605, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 180, 10605, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 352, 10605, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 352, 10605, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10605,?);
#endif
#undef TYPE

#define TYPE std::basic_fstream<char, std::char_traits<char> >
#if defined __i386__
CheckTypeSize(TYPE, 284, 10606, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 528, 10606, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 284, 10606, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 528, 10606, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 284, 10606, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 528, 10606, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 528, 10606, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10606,?);
#endif
#undef TYPE

#define TYPE std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >
#if defined __i386__
CheckTypeSize(TYPE, 32, 10607, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 64, 10607, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 32, 10607, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 64, 10607, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 32, 10607, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 64, 10607, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 64, 10607, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10607,?);
#endif
#undef TYPE

#define TYPE std::basic_ofstream<wchar_t, std::char_traits<wchar_t> >
#if defined __i386__
CheckTypeSize(TYPE, 284, 10608, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 512, 10608, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 284, 10608, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 512, 10608, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 284, 10608, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 512, 10608, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 512, 10608, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10608,?);
#endif
#undef TYPE

#define TYPE std::basic_fstream<wchar_t, std::char_traits<wchar_t> >
#if defined __i386__
CheckTypeSize(TYPE, 292, 10609, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 528, 10609, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 292, 10609, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 528, 10609, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 292, 10609, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 528, 10609, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 528, 10609, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10609,?);
#endif
#undef TYPE

#define TYPE std::domain_error
#if defined __i386__
CheckTypeSize(TYPE, 8, 10610, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 16, 10610, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 8, 10610, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 16, 10610, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 8, 10610, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 16, 10610, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 16, 10610, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10610,?);
#endif
#undef TYPE

#define TYPE std::invalid_argument
#if defined __i386__
CheckTypeSize(TYPE, 8, 10611, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 16, 10611, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 8, 10611, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 16, 10611, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 8, 10611, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 16, 10611, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 16, 10611, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10611,?);
#endif
#undef TYPE

#define TYPE std::length_error
#if defined __i386__
CheckTypeSize(TYPE, 8, 10612, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 16, 10612, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 8, 10612, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 16, 10612, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 8, 10612, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 16, 10612, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 16, 10612, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10612,?);
#endif
#undef TYPE

#define TYPE std::out_of_range
#if defined __i386__
CheckTypeSize(TYPE, 8, 10613, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 16, 10613, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 8, 10613, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 16, 10613, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 8, 10613, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 16, 10613, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 16, 10613, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10613,?);
#endif
#undef TYPE

#define TYPE std::range_error
#if defined __i386__
CheckTypeSize(TYPE, 8, 10614, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 16, 10614, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 8, 10614, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 16, 10614, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 8, 10614, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 16, 10614, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 16, 10614, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10614,?);
#endif
#undef TYPE

#define TYPE std::overflow_error
#if defined __i386__
CheckTypeSize(TYPE, 8, 10615, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 16, 10615, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 8, 10615, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 16, 10615, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 8, 10615, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 16, 10615, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 16, 10615, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10615,?);
#endif
#undef TYPE

#define TYPE std::underflow_error
#if defined __i386__
CheckTypeSize(TYPE, 8, 10616, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 16, 10616, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 8, 10616, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 16, 10616, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 8, 10616, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 16, 10616, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 16, 10616, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10616,?);
#endif
#undef TYPE

#define TYPE std::basic_ios<char, std::char_traits<char> >
#if defined __i386__
CheckTypeSize(TYPE, 136, 10617, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 264, 10617, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 136, 10617, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 264, 10617, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 136, 10617, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 264, 10617, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 264, 10617, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10617,?);
#endif
#undef TYPE

#define TYPE std::basic_ios<wchar_t, std::char_traits<wchar_t> >
#if defined __i386__
CheckTypeSize(TYPE, 140, 10618, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 264, 10618, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 140, 10618, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 264, 10618, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 140, 10618, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 264, 10618, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 264, 10618, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10618,?);
#endif
#undef TYPE

#define TYPE std::basic_iostream<char, std::char_traits<char> >
#if defined __i386__
CheckTypeSize(TYPE, 148, 10619, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 288, 10619, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 148, 10619, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 288, 10619, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 148, 10619, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 288, 10619, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 288, 10619, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10619,?);
#endif
#undef TYPE

#define TYPE std::basic_iostream<wchar_t, std::char_traits<wchar_t> >
#if defined __i386__
CheckTypeSize(TYPE, 152, 10620, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 288, 10620, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 152, 10620, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 288, 10620, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 152, 10620, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 288, 10620, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 288, 10620, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10620,?);
#endif
#undef TYPE

#define TYPE std::ios_base
#if defined __i386__
CheckTypeSize(TYPE, 112, 10621, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 216, 10621, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 112, 10621, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 216, 10621, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 112, 10621, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 216, 10621, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 216, 10621, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10621,?);
#endif
#undef TYPE

#define TYPE std::ios_base::failure
#if defined __i386__
CheckTypeSize(TYPE, 8, 10622, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 16, 10622, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 8, 10622, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 16, 10622, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 8, 10622, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 16, 10622, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 16, 10622, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10622,?);
#endif
#undef TYPE

#define TYPE std::basic_istream<char, std::char_traits<char> >
#if defined __i386__
CheckTypeSize(TYPE, 144, 10623, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 280, 10623, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 144, 10623, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 280, 10623, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 144, 10623, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 280, 10623, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 280, 10623, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10623,?);
#endif
#undef TYPE

#define TYPE std::basic_istream<wchar_t, std::char_traits<wchar_t> >
#if defined __i386__
CheckTypeSize(TYPE, 148, 10624, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 280, 10624, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 148, 10624, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 280, 10624, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 148, 10624, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 280, 10624, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 280, 10624, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10624,?);
#endif
#undef TYPE

#define TYPE std::locale::facet
#if defined __i386__
CheckTypeSize(TYPE, 8, 10625, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 16, 10625, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 8, 10625, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 16, 10625, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 8, 10625, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 16, 10625, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 16, 10625, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10625,?);
#endif
#undef TYPE

#define TYPE std::__ctype_abstract_base<char>
#if defined __i386__
CheckTypeSize(TYPE, 8, 10626, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 16, 10626, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 8, 10626, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 16, 10626, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 8, 10626, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 16, 10626, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 16, 10626, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10626,?);
#endif
#undef TYPE

#define TYPE std::__ctype_abstract_base<wchar_t>
#if defined __i386__
CheckTypeSize(TYPE, 8, 10627, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 16, 10627, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 8, 10627, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 16, 10627, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 8, 10627, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 16, 10627, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 16, 10627, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10627,?);
#endif
#undef TYPE

#define TYPE std::ctype_byname<char>
#if defined __i386__
CheckTypeSize(TYPE, 544, 10628, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 576, 10628, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 544, 10628, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 576, 10628, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 544, 10628, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 576, 10628, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 576, 10628, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10628,?);
#endif
#undef TYPE

#define TYPE std::ctype_byname<wchar_t>
#if defined __i386__
CheckTypeSize(TYPE, 1264, 10629, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 1344, 10629, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 1264, 10629, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 1344, 10629, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 1264, 10629, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 1344, 10629, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 1344, 10629, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10629,?);
#endif
#undef TYPE

#define TYPE std::__codecvt_abstract_base<char, char, __mbstate_t>
#if defined __i386__
CheckTypeSize(TYPE, 8, 10630, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 16, 10630, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 8, 10630, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 16, 10630, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 8, 10630, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 16, 10630, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 16, 10630, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10630,?);
#endif
#undef TYPE

#define TYPE std::__codecvt_abstract_base<wchar_t, char, __mbstate_t>
#if defined __i386__
CheckTypeSize(TYPE, 8, 10631, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 16, 10631, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 8, 10631, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 16, 10631, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 8, 10631, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 16, 10631, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 16, 10631, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10631,?);
#endif
#undef TYPE

#define TYPE std::numpunct<char>
#if defined __i386__
CheckTypeSize(TYPE, 12, 10632, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 24, 10632, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 12, 10632, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 24, 10632, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 12, 10632, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 24, 10632, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 24, 10632, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10632,?);
#endif
#undef TYPE

#define TYPE std::numpunct<wchar_t>
#if defined __i386__
CheckTypeSize(TYPE, 12, 10633, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 24, 10633, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 12, 10633, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 24, 10633, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 12, 10633, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 24, 10633, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 24, 10633, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10633,?);
#endif
#undef TYPE

#define TYPE std::collate<char>
#if defined __i386__
CheckTypeSize(TYPE, 12, 10634, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 24, 10634, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 12, 10634, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 24, 10634, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 12, 10634, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 24, 10634, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 24, 10634, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10634,?);
#endif
#undef TYPE

#define TYPE std::collate<wchar_t>
#if defined __i386__
CheckTypeSize(TYPE, 12, 10635, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 24, 10635, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 12, 10635, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 24, 10635, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 12, 10635, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 24, 10635, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 24, 10635, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10635,?);
#endif
#undef TYPE

#define TYPE std::__timepunct<char>
#if defined __i386__
CheckTypeSize(TYPE, 20, 10636, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 40, 10636, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 20, 10636, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 40, 10636, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 20, 10636, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 40, 10636, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 40, 10636, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10636,?);
#endif
#undef TYPE

#define TYPE std::__timepunct<wchar_t>
#if defined __i386__
CheckTypeSize(TYPE, 20, 10637, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 40, 10637, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 20, 10637, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 40, 10637, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 20, 10637, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 40, 10637, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 40, 10637, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10637,?);
#endif
#undef TYPE

#define TYPE std::moneypunct<char, true>
#if defined __i386__
CheckTypeSize(TYPE, 12, 10638, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 24, 10638, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 12, 10638, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 24, 10638, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 12, 10638, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 24, 10638, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 24, 10638, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10638,?);
#endif
#undef TYPE

#define TYPE std::moneypunct<char, false>
#if defined __i386__
CheckTypeSize(TYPE, 12, 10639, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 24, 10639, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 12, 10639, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 24, 10639, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 12, 10639, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 24, 10639, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 24, 10639, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10639,?);
#endif
#undef TYPE

#define TYPE std::moneypunct<wchar_t, true>
#if defined __i386__
CheckTypeSize(TYPE, 12, 10640, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 24, 10640, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 12, 10640, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 24, 10640, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 12, 10640, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 24, 10640, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 24, 10640, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10640,?);
#endif
#undef TYPE

#define TYPE std::moneypunct<wchar_t, false>
#if defined __i386__
CheckTypeSize(TYPE, 12, 10641, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 24, 10641, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 12, 10641, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 24, 10641, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 12, 10641, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 24, 10641, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 24, 10641, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10641,?);
#endif
#undef TYPE

#define TYPE std::messages<char>
#if defined __i386__
CheckTypeSize(TYPE, 16, 10642, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 32, 10642, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 16, 10642, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 32, 10642, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 16, 10642, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 32, 10642, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 32, 10642, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10642,?);
#endif
#undef TYPE

#define TYPE std::messages<wchar_t>
#if defined __i386__
CheckTypeSize(TYPE, 16, 10643, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 32, 10643, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 16, 10643, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 32, 10643, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 16, 10643, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 32, 10643, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 32, 10643, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10643,?);
#endif
#undef TYPE

#define TYPE std::moneypunct_byname<char, false>
#if defined __i386__
CheckTypeSize(TYPE, 12, 10644, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 24, 10644, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 12, 10644, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 24, 10644, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 12, 10644, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 24, 10644, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 24, 10644, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10644,?);
#endif
#undef TYPE

#define TYPE std::moneypunct_byname<char, true>
#if defined __i386__
CheckTypeSize(TYPE, 12, 10645, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 24, 10645, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 12, 10645, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 24, 10645, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 12, 10645, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 24, 10645, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 24, 10645, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10645,?);
#endif
#undef TYPE

#define TYPE std::money_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
#if defined __i386__
CheckTypeSize(TYPE, 8, 10646, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 16, 10646, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 8, 10646, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 16, 10646, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 8, 10646, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 16, 10646, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 16, 10646, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10646,?);
#endif
#undef TYPE

#define TYPE std::money_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
#if defined __i386__
CheckTypeSize(TYPE, 8, 10647, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 16, 10647, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 8, 10647, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 16, 10647, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 8, 10647, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 16, 10647, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 16, 10647, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10647,?);
#endif
#undef TYPE

#define TYPE std::numpunct_byname<char>
#if defined __i386__
CheckTypeSize(TYPE, 12, 10648, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 24, 10648, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 12, 10648, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 24, 10648, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 12, 10648, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 24, 10648, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 24, 10648, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10648,?);
#endif
#undef TYPE

#define TYPE std::num_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
#if defined __i386__
CheckTypeSize(TYPE, 8, 10649, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 16, 10649, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 8, 10649, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 16, 10649, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 8, 10649, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 16, 10649, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 16, 10649, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10649,?);
#endif
#undef TYPE

#define TYPE std::time_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
#if defined __i386__
CheckTypeSize(TYPE, 8, 10650, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 16, 10650, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 8, 10650, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 16, 10650, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 8, 10650, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 16, 10650, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 16, 10650, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10650,?);
#endif
#undef TYPE

#define TYPE std::time_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
#if defined __i386__
CheckTypeSize(TYPE, 8, 10653, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 16, 10653, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 8, 10653, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 16, 10653, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 8, 10653, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 16, 10653, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 16, 10653, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10653,?);
#endif
#undef TYPE

#define TYPE std::messages_byname<char>
#if defined __i386__
CheckTypeSize(TYPE, 16, 10655, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 32, 10655, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 16, 10655, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 32, 10655, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 16, 10655, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 32, 10655, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 32, 10655, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10655,?);
#endif
#undef TYPE

#define TYPE std::codecvt_byname<char, char, __mbstate_t>
#if defined __i386__
CheckTypeSize(TYPE, 12, 10656, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 24, 10656, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 12, 10656, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 24, 10656, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 12, 10656, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 24, 10656, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 24, 10656, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10656,?);
#endif
#undef TYPE

#define TYPE std::collate_byname<char>
#if defined __i386__
CheckTypeSize(TYPE, 12, 10657, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 24, 10657, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 12, 10657, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 24, 10657, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 12, 10657, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 24, 10657, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 24, 10657, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10657,?);
#endif
#undef TYPE

#define TYPE std::moneypunct_byname<wchar_t, true>
#if defined __i386__
CheckTypeSize(TYPE, 12, 10659, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 24, 10659, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 12, 10659, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 24, 10659, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 12, 10659, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 24, 10659, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 24, 10659, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10659,?);
#endif
#undef TYPE

#define TYPE std::money_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
#if defined __i386__
CheckTypeSize(TYPE, 8, 10660, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 16, 10660, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 8, 10660, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 16, 10660, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 8, 10660, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 16, 10660, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 16, 10660, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10660,?);
#endif
#undef TYPE

#define TYPE std::money_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
#if defined __i386__
CheckTypeSize(TYPE, 8, 10661, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 16, 10661, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 8, 10661, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 16, 10661, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 8, 10661, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 16, 10661, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 16, 10661, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10661,?);
#endif
#undef TYPE

#define TYPE std::numpunct_byname<wchar_t>
#if defined __i386__
CheckTypeSize(TYPE, 12, 10662, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 24, 10662, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 12, 10662, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 24, 10662, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 12, 10662, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 24, 10662, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 24, 10662, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10662,?);
#endif
#undef TYPE

#define TYPE std::num_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
#if defined __i386__
CheckTypeSize(TYPE, 8, 10663, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 16, 10663, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 8, 10663, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 16, 10663, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 8, 10663, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 16, 10663, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 16, 10663, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10663,?);
#endif
#undef TYPE

#define TYPE std::num_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
#if defined __i386__
CheckTypeSize(TYPE, 8, 10664, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 16, 10664, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 8, 10664, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 16, 10664, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 8, 10664, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 16, 10664, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 16, 10664, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10664,?);
#endif
#undef TYPE

#define TYPE std::time_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
#if defined __i386__
CheckTypeSize(TYPE, 8, 10665, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 16, 10665, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 8, 10665, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 16, 10665, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 8, 10665, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 16, 10665, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 16, 10665, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10665,?);
#endif
#undef TYPE

#define TYPE std::time_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
#if defined __i386__
CheckTypeSize(TYPE, 8, 10667, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 16, 10667, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 8, 10667, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 16, 10667, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 8, 10667, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 16, 10667, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 16, 10667, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10667,?);
#endif
#undef TYPE

#define TYPE std::collate_byname<wchar_t>
#if defined __i386__
CheckTypeSize(TYPE, 12, 10670, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 24, 10670, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 12, 10670, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 24, 10670, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 12, 10670, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 24, 10670, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 24, 10670, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10670,?);
#endif
#undef TYPE

#define TYPE std::messages_byname<wchar_t>
#if defined __i386__
CheckTypeSize(TYPE, 16, 10671, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 32, 10671, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 16, 10671, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 32, 10671, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 16, 10671, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 32, 10671, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 32, 10671, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10671,?);
#endif
#undef TYPE

#define TYPE std::time_base
Msg("Arch-specific values for std::time_base (10672) seem to be equal\n");
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",1,10672,0);
#if defined __i386__
CheckTypeSize(TYPE, 1, 10672, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 1, 10672, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 1, 10672, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 1, 10672, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 1, 10672, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 1, 10672, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 1, 10672, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10672,?);
#endif
#undef TYPE

#define TYPE std::__num_base
Msg("Arch-specific values for std::__num_base (10673) seem to be equal\n");
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",1,10673,0);
#if defined __i386__
CheckTypeSize(TYPE, 1, 10673, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 1, 10673, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 1, 10673, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 1, 10673, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 1, 10673, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 1, 10673, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 1, 10673, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10673,?);
#endif
#undef TYPE

#define TYPE std::messages_base
Msg("Arch-specific values for std::messages_base (10674) seem to be equal\n");
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",1,10674,0);
#if defined __i386__
CheckTypeSize(TYPE, 1, 10674, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 1, 10674, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 1, 10674, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 1, 10674, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 1, 10674, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 1, 10674, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 1, 10674, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10674,?);
#endif
#undef TYPE

#define TYPE std::money_base
Msg("Arch-specific values for std::money_base (10675) seem to be equal\n");
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",1,10675,0);
#if defined __i386__
CheckTypeSize(TYPE, 1, 10675, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 1, 10675, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 1, 10675, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 1, 10675, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 1, 10675, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 1, 10675, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 1, 10675, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10675,?);
#endif
#undef TYPE

#define TYPE std::codecvt_base
Msg("Arch-specific values for std::codecvt_base (10676) seem to be equal\n");
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",1,10676,0);
#if defined __i386__
CheckTypeSize(TYPE, 1, 10676, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 1, 10676, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 1, 10676, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 1, 10676, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 1, 10676, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 1, 10676, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 1, 10676, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10676,?);
#endif
#undef TYPE

#define TYPE std::ctype_base
Msg("Arch-specific values for std::ctype_base (10677) seem to be equal\n");
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",1,10677,0);
#if defined __i386__
CheckTypeSize(TYPE, 1, 10677, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 1, 10677, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 1, 10677, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 1, 10677, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 1, 10677, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 1, 10677, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 1, 10677, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10677,?);
#endif
#undef TYPE

#define TYPE std::basic_ostream<char, std::char_traits<char> >
#if defined __i386__
CheckTypeSize(TYPE, 140, 10678, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 272, 10678, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 140, 10678, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 272, 10678, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 140, 10678, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 272, 10678, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 272, 10678, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10678,?);
#endif
#undef TYPE

#define TYPE std::basic_ostream<wchar_t, std::char_traits<wchar_t> >
#if defined __i386__
CheckTypeSize(TYPE, 144, 10679, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 272, 10679, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 144, 10679, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 272, 10679, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 144, 10679, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 272, 10679, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 272, 10679, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10679,?);
#endif
#undef TYPE

#define TYPE std::basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >
#if defined __i386__
CheckTypeSize(TYPE, 40, 10680, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 80, 10680, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 40, 10680, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 80, 10680, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 40, 10680, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 80, 10680, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 80, 10680, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10680,?);
#endif
#undef TYPE

#define TYPE std::basic_istringstream<char, std::char_traits<char>, std::allocator<char> >
#if defined __i386__
CheckTypeSize(TYPE, 184, 10681, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 360, 10681, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 184, 10681, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 360, 10681, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 184, 10681, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 360, 10681, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 360, 10681, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10681,?);
#endif
#undef TYPE

#define TYPE std::basic_stringbuf<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
#if defined __i386__
CheckTypeSize(TYPE, 40, 10684, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 80, 10684, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 40, 10684, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 80, 10684, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 40, 10684, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 80, 10684, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 80, 10684, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10684,?);
#endif
#undef TYPE

#define TYPE std::basic_istringstream<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
#if defined __i386__
CheckTypeSize(TYPE, 188, 10685, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 360, 10685, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 188, 10685, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 360, 10685, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 188, 10685, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 360, 10685, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 360, 10685, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10685,?);
#endif
#undef TYPE

#define TYPE std::basic_ostringstream<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
#if defined __i386__
CheckTypeSize(TYPE, 184, 10686, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 352, 10686, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 184, 10686, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 352, 10686, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 184, 10686, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 352, 10686, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 352, 10686, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10686,?);
#endif
#undef TYPE

#define TYPE std::logic_error
#if defined __i386__
CheckTypeSize(TYPE, 8, 10688, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 16, 10688, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 8, 10688, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 16, 10688, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 8, 10688, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 16, 10688, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 16, 10688, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10688,?);
#endif
#undef TYPE

#define TYPE std::runtime_error
#if defined __i386__
CheckTypeSize(TYPE, 8, 10689, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 16, 10689, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 8, 10689, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 16, 10689, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 8, 10689, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 16, 10689, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 16, 10689, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10689,?);
#endif
#undef TYPE

#define TYPE std::basic_streambuf<char, std::char_traits<char> >
#if defined __i386__
CheckTypeSize(TYPE, 32, 10690, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 64, 10690, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 32, 10690, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 64, 10690, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 32, 10690, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 64, 10690, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 64, 10690, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10690,?);
#endif
#undef TYPE

#define TYPE std::exception
#if defined __i386__
CheckTypeSize(TYPE, 4, 10696, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 8, 10696, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 4, 10696, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 8, 10696, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 4, 10696, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 8, 10696, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 8, 10696, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10696,?);
#endif
#undef TYPE

#define TYPE std::bad_exception
#if defined __i386__
CheckTypeSize(TYPE, 4, 10697, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 8, 10697, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 4, 10697, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 8, 10697, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 4, 10697, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 8, 10697, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 8, 10697, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10697,?);
#endif
#undef TYPE

#define TYPE std::bad_alloc
#if defined __i386__
CheckTypeSize(TYPE, 4, 10698, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 8, 10698, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 4, 10698, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 8, 10698, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 4, 10698, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 8, 10698, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 8, 10698, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10698,?);
#endif
#undef TYPE

#define TYPE std::type_info
#if defined __i386__
CheckTypeSize(TYPE, 8, 10699, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 16, 10699, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 8, 10699, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 16, 10699, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 8, 10699, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 16, 10699, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 16, 10699, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10699,?);
#endif
#undef TYPE

#define TYPE std::bad_cast
#if defined __i386__
CheckTypeSize(TYPE, 4, 10700, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 8, 10700, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 4, 10700, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 8, 10700, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 4, 10700, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 8, 10700, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 8, 10700, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10700,?);
#endif
#undef TYPE

#define TYPE std::bad_typeid
#if defined __i386__
CheckTypeSize(TYPE, 4, 10701, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 8, 10701, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 4, 10701, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 8, 10701, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 4, 10701, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 8, 10701, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 8, 10701, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10701,?);
#endif
#undef TYPE

#define TYPE __cxxabiv1::__class_type_info
#if defined __i386__
CheckTypeSize(TYPE, 8, 10702, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 16, 10702, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 8, 10702, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 16, 10702, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 8, 10702, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 16, 10702, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 16, 10702, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10702,?);
#endif
#undef TYPE

#define TYPE __cxxabiv1::__si_class_type_info
#if defined __i386__
CheckTypeSize(TYPE, 12, 10703, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 24, 10703, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 12, 10703, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 24, 10703, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 12, 10703, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 24, 10703, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 24, 10703, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10703,?);
#endif
#undef TYPE

#define TYPE __cxxabiv1::__vmi_class_type_info
#if defined __i386__
CheckTypeSize(TYPE, 24, 10704, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 40, 10704, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 24, 10704, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 40, 10704, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 24, 10704, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 40, 10704, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 40, 10704, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10704,?);
#endif
#undef TYPE

#define TYPE __cxxabiv1::__fundamental_type_info
#if defined __i386__
CheckTypeSize(TYPE, 8, 10705, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 16, 10705, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 8, 10705, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 16, 10705, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 8, 10705, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 16, 10705, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 16, 10705, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10705,?);
#endif
#undef TYPE

#define TYPE __cxxabiv1::__array_type_info
#if defined __i386__
CheckTypeSize(TYPE, 8, 10706, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 16, 10706, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 8, 10706, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 16, 10706, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 8, 10706, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 16, 10706, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 16, 10706, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10706,?);
#endif
#undef TYPE

#define TYPE __cxxabiv1::__function_type_info
#if defined __i386__
CheckTypeSize(TYPE, 8, 10707, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 16, 10707, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 8, 10707, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 16, 10707, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 8, 10707, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 16, 10707, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 16, 10707, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10707,?);
#endif
#undef TYPE

#define TYPE __cxxabiv1::__enum_type_info
#if defined __i386__
CheckTypeSize(TYPE, 8, 10708, 2, '2.0', NULL, 10699, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 16, 10708, 3, '2.0', NULL, 10699, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 8, 10708, 6, '2.0', NULL, 10699, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 16, 10708, 9, '2.0', NULL, 10699, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 8, 10708, 10, '2.0', NULL, 10699, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 16, 10708, 11, '2.0', NULL, 10699, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 16, 10708, 12, '2.0', NULL, 10699, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,10699,NULL);\n",architecture,10708,?);
#endif
#undef TYPE

#define TYPE __cxxabiv1::__pbase_type_info
#if defined __i386__
CheckTypeSize(TYPE, 16, 10709, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 32, 10709, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 16, 10709, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 32, 10709, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 16, 10709, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 32, 10709, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 32, 10709, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10709,?);
#endif
#undef TYPE

#define TYPE __cxxabiv1::__pointer_type_info
#if defined __i386__
CheckTypeSize(TYPE, 16, 10710, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 32, 10710, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 16, 10710, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 32, 10710, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 16, 10710, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 32, 10710, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 32, 10710, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10710,?);
#endif
#undef TYPE

#define TYPE __cxxabiv1::__pointer_to_member_type_info
#if defined __i386__
CheckTypeSize(TYPE, 20, 10711, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 40, 10711, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 20, 10711, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 40, 10711, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 20, 10711, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 40, 10711, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 40, 10711, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10711,?);
#endif
#undef TYPE

#define TYPE std::time_put_byname<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
#if defined __i386__
CheckTypeSize(TYPE, 8, 10763, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 16, 10763, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 8, 10763, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 16, 10763, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 8, 10763, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 16, 10763, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 16, 10763, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10763,?);
#endif
#undef TYPE

#define TYPE std::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >
#if defined __i386__
CheckTypeSize(TYPE, 188, 10764, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 368, 10764, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 188, 10764, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 368, 10764, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 188, 10764, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 368, 10764, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 368, 10764, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10764,?);
#endif
#undef TYPE

#define TYPE std::time_put_byname<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
#if defined __i386__
CheckTypeSize(TYPE, 8, 10765, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 16, 10765, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 8, 10765, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 16, 10765, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 8, 10765, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 16, 10765, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 16, 10765, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10765,?);
#endif
#undef TYPE

#define TYPE std::basic_stringstream<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
#if defined __i386__
CheckTypeSize(TYPE, 192, 10766, 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 368, 10766, 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 192, 10766, 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 368, 10766, 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 192, 10766, 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 368, 10766, 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 368, 10766, 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'2.0',NULL,0,NULL);\n",architecture,10766,?);
#endif
#undef TYPE

#define TYPE _Z
#if defined __i386__
CheckTypeSize(TYPE, 8, , 2, '2.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 16, , 3, '2.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 8, , 6, '2.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 16, , 9, '2.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 8, , 10, '2.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 16, , 11, '2.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 16, , 12, '2.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,NULL,NULL,,NULL);\n",architecture,,?);
#endif
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in libstdcxx types\n\n",pcnt,cnt);
return cnt;
#endif

}
