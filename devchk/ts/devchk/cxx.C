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
#ifdef TET_TEST
int pcnt=0;
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
CheckTypeSize(TYPE,140,10600,10)
#undef TYPE
#elif __x86_64__
#define TYPE __gnu_cxx::stdio_filebuf<char, std::char_traits<char> >
CheckTypeSize(TYPE,240,10600,11)
#undef TYPE
#elif __s390x__
#define TYPE __gnu_cxx::stdio_filebuf<char, std::char_traits<char> >
CheckTypeSize(TYPE,248,10600,12)
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
CheckTypeSize(TYPE,156,10601,10)
#undef TYPE
#elif __x86_64__
#define TYPE __gnu_cxx::stdio_filebuf<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,240,10601,11)
#undef TYPE
#elif __s390x__
#define TYPE __gnu_cxx::stdio_filebuf<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,256,10601,12)
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
CheckTypeSize(TYPE,260,10622,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::ios_base::failure
CheckTypeSize(TYPE,16,10622,11)
#undef TYPE
#elif __s390x__
#define TYPE std::ios_base::failure
CheckTypeSize(TYPE,264,10622,12)
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
CheckTypeSize(TYPE,236,10693,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::istrstream
CheckTypeSize(TYPE,368,10693,11)
#undef TYPE
#elif __s390x__
#define TYPE std::istrstream
CheckTypeSize(TYPE,456,10693,12)
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
CheckTypeSize(TYPE,40,10639,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::moneypunct<char, false>
CheckTypeSize(TYPE,24,10639,11)
#undef TYPE
#elif __s390x__
#define TYPE std::moneypunct<char, false>
CheckTypeSize(TYPE,72,10639,12)
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
CheckTypeSize(TYPE,40,10638,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::moneypunct<char, true>
CheckTypeSize(TYPE,24,10638,11)
#undef TYPE
#elif __s390x__
#define TYPE std::moneypunct<char, true>
CheckTypeSize(TYPE,72,10638,12)
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
CheckTypeSize(TYPE,44,10641,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::moneypunct<wchar_t, false>
CheckTypeSize(TYPE,24,10641,11)
#undef TYPE
#elif __s390x__
#define TYPE std::moneypunct<wchar_t, false>
CheckTypeSize(TYPE,72,10641,12)
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
CheckTypeSize(TYPE,44,10640,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::moneypunct<wchar_t, true>
CheckTypeSize(TYPE,24,10640,11)
#undef TYPE
#elif __s390x__
#define TYPE std::moneypunct<wchar_t, true>
CheckTypeSize(TYPE,72,10640,12)
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
CheckTypeSize(TYPE,232,10694,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::ostrstream
CheckTypeSize(TYPE,360,10694,11)
#undef TYPE
#elif __s390x__
#define TYPE std::ostrstream
CheckTypeSize(TYPE,448,10694,12)
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
CheckTypeSize(TYPE,204,10636,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::__timepunct<char>
CheckTypeSize(TYPE,40,10636,11)
#undef TYPE
#elif __s390x__
#define TYPE std::__timepunct<char>
CheckTypeSize(TYPE,408,10636,12)
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
CheckTypeSize(TYPE,204,10637,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::__timepunct<wchar_t>
CheckTypeSize(TYPE,40,10637,11)
#undef TYPE
#elif __s390x__
#define TYPE std::__timepunct<wchar_t>
CheckTypeSize(TYPE,408,10637,12)
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
CheckTypeSize(TYPE,28,10628,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::ctype_byname<char>
CheckTypeSize(TYPE,576,10628,11)
#undef TYPE
#elif __s390x__
#define TYPE std::ctype_byname<char>
CheckTypeSize(TYPE,56,10628,12)
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
CheckTypeSize(TYPE,12,10629,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::ctype_byname<wchar_t>
CheckTypeSize(TYPE,1344,10629,11)
#undef TYPE
#elif __s390x__
#define TYPE std::ctype_byname<wchar_t>
CheckTypeSize(TYPE,24,10629,12)
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
CheckTypeSize(TYPE,92,10692,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::strstreambuf
CheckTypeSize(TYPE,88,10692,11)
#undef TYPE
#elif __s390x__
#define TYPE std::strstreambuf
CheckTypeSize(TYPE,176,10692,12)
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
CheckTypeSize(TYPE,8,10656,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::codecvt_byname<char, char, __mbstate_t>
CheckTypeSize(TYPE,24,10656,11)
#undef TYPE
#elif __s390x__
#define TYPE std::codecvt_byname<char, char, __mbstate_t>
CheckTypeSize(TYPE,16,10656,12)
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
CheckTypeSize(TYPE,8,10670,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::codecvt_byname<wchar_t, char, __mbstate_t>
CheckTypeSize(TYPE,24,10670,11)
#undef TYPE
#elif __s390x__
#define TYPE std::codecvt_byname<wchar_t, char, __mbstate_t>
CheckTypeSize(TYPE,16,10670,12)
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
CheckTypeSize(TYPE,80,10690,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::basic_streambuf<char, std::char_traits<char> >
CheckTypeSize(TYPE,64,10690,11)
#undef TYPE
#elif __s390x__
#define TYPE std::basic_streambuf<char, std::char_traits<char> >
CheckTypeSize(TYPE,152,10690,12)
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
CheckTypeSize(TYPE,84,10691,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,64,10691,11)
#undef TYPE
#elif __s390x__
#define TYPE std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,152,10691,12)
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
CheckTypeSize(TYPE,84,10680,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,80,10680,11)
#undef TYPE
#elif __s390x__
#define TYPE std::basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,160,10680,12)
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
CheckTypeSize(TYPE,88,10684,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::basic_stringbuf<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,80,10684,11)
#undef TYPE
#elif __s390x__
#define TYPE std::basic_stringbuf<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,160,10684,12)
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
CheckTypeSize(TYPE,28,10648,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::numpunct_byname<char>
CheckTypeSize(TYPE,24,10648,11)
#undef TYPE
#elif __s390x__
#define TYPE std::numpunct_byname<char>
CheckTypeSize(TYPE,48,10648,12)
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
CheckTypeSize(TYPE,32,10662,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::numpunct_byname<wchar_t>
CheckTypeSize(TYPE,24,10662,11)
#undef TYPE
#elif __s390x__
#define TYPE std::numpunct_byname<wchar_t>
CheckTypeSize(TYPE,56,10662,12)
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
CheckTypeSize(TYPE,44,10644,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::moneypunct_byname<char, false>
CheckTypeSize(TYPE,24,10644,11)
#undef TYPE
#elif __s390x__
#define TYPE std::moneypunct_byname<char, false>
CheckTypeSize(TYPE,80,10644,12)
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
CheckTypeSize(TYPE,44,10645,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::moneypunct_byname<char, true>
CheckTypeSize(TYPE,24,10645,11)
#undef TYPE
#elif __s390x__
#define TYPE std::moneypunct_byname<char, true>
CheckTypeSize(TYPE,80,10645,12)
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
CheckTypeSize(TYPE,48,10658,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::moneypunct_byname<wchar_t, false>
CheckTypeSize(TYPE,24,10658,11)
#undef TYPE
#elif __s390x__
#define TYPE std::moneypunct_byname<wchar_t, false>
CheckTypeSize(TYPE,80,10658,12)
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
CheckTypeSize(TYPE,48,10659,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::moneypunct_byname<wchar_t, true>
CheckTypeSize(TYPE,24,10659,11)
#undef TYPE
#elif __s390x__
#define TYPE std::moneypunct_byname<wchar_t, true>
CheckTypeSize(TYPE,80,10659,12)
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
CheckTypeSize(TYPE,232,10683,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,368,10683,11)
#undef TYPE
#elif __s390x__
#define TYPE std::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,448,10683,12)
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
CheckTypeSize(TYPE,240,10687,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::basic_stringstream<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,368,10687,11)
#undef TYPE
#elif __s390x__
#define TYPE std::basic_stringstream<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,448,10687,12)
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
CheckTypeSize(TYPE,228,10681,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::basic_istringstream<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,360,10681,11)
#undef TYPE
#elif __s390x__
#define TYPE std::basic_istringstream<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,440,10681,12)
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
CheckTypeSize(TYPE,236,10685,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::basic_istringstream<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,360,10685,11)
#undef TYPE
#elif __s390x__
#define TYPE std::basic_istringstream<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,440,10685,12)
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
CheckTypeSize(TYPE,224,10682,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::basic_ostringstream<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,352,10682,11)
#undef TYPE
#elif __s390x__
#define TYPE std::basic_ostringstream<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,432,10682,12)
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
CheckTypeSize(TYPE,232,10686,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::basic_ostringstream<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,352,10686,11)
#undef TYPE
#elif __s390x__
#define TYPE std::basic_ostringstream<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,432,10686,12)
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
CheckTypeSize(TYPE,28,10598,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::ctype<char>
CheckTypeSize(TYPE,576,10598,11)
#undef TYPE
#elif __s390x__
#define TYPE std::ctype<char>
CheckTypeSize(TYPE,56,10598,12)
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
CheckTypeSize(TYPE,12,10599,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::ctype<wchar_t>
CheckTypeSize(TYPE,1344,10599,11)
#undef TYPE
#elif __s390x__
#define TYPE std::ctype<wchar_t>
CheckTypeSize(TYPE,24,10599,12)
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
CheckTypeSize(TYPE,8,10596,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::codecvt<char, char, __mbstate_t>
CheckTypeSize(TYPE,24,10596,11)
#undef TYPE
#elif __s390x__
#define TYPE std::codecvt<char, char, __mbstate_t>
CheckTypeSize(TYPE,16,10596,12)
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
CheckTypeSize(TYPE,8,10597,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::codecvt<wchar_t, char, __mbstate_t>
CheckTypeSize(TYPE,24,10597,11)
#undef TYPE
#elif __s390x__
#define TYPE std::codecvt<wchar_t, char, __mbstate_t>
CheckTypeSize(TYPE,16,10597,12)
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
CheckTypeSize(TYPE,108,10621,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::ios_base
CheckTypeSize(TYPE,216,10621,11)
#undef TYPE
#elif __s390x__
#define TYPE std::ios_base
CheckTypeSize(TYPE,208,10621,12)
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
CheckTypeSize(TYPE,24,10632,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::numpunct<char>
CheckTypeSize(TYPE,24,10632,11)
#undef TYPE
#elif __s390x__
#define TYPE std::numpunct<char>
CheckTypeSize(TYPE,40,10632,12)
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
CheckTypeSize(TYPE,28,10633,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::numpunct<wchar_t>
CheckTypeSize(TYPE,24,10633,11)
#undef TYPE
#elif __s390x__
#define TYPE std::numpunct<wchar_t>
CheckTypeSize(TYPE,48,10633,12)
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
CheckTypeSize(TYPE,240,10695,10)
#undef TYPE
#elif __x86_64__
#define TYPE std::strstream
CheckTypeSize(TYPE,376,10695,11)
#undef TYPE
#elif __s390x__
#define TYPE std::strstream
CheckTypeSize(TYPE,464,10695,12)
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
printf("%d c++ types\n",cnt);
return cnt;
#endif

}
