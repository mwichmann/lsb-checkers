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
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10708,0);
#endif

#if __i386__
#define TYPE __cxxabiv1::__array_type_info
CheckTypeSize(TYPE,8,10706,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10706,0);
#endif

#if __i386__
#define TYPE __cxxabiv1::__class_type_info
CheckTypeSize(TYPE,8,10702,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10702,0);
#endif

#if __i386__
#define TYPE __cxxabiv1::__pbase_type_info
CheckTypeSize(TYPE,16,10709,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10709,0);
#endif

#if __i386__
#define TYPE __cxxabiv1::__pointer_type_info
CheckTypeSize(TYPE,16,10710,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10710,0);
#endif

#if __i386__
#define TYPE __cxxabiv1::__function_type_info
CheckTypeSize(TYPE,8,10707,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10707,0);
#endif

#if __i386__
#define TYPE __cxxabiv1::__si_class_type_info
CheckTypeSize(TYPE,12,10703,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10703,0);
#endif

#if __i386__
#define TYPE __cxxabiv1::__vmi_class_type_info
CheckTypeSize(TYPE,24,10704,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10704,0);
#endif

#if __i386__
#define TYPE __cxxabiv1::__fundamental_type_info
CheckTypeSize(TYPE,8,10705,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10705,0);
#endif

#if __i386__
#define TYPE __cxxabiv1::__pointer_to_member_type_info
CheckTypeSize(TYPE,20,10711,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10711,0);
#endif

#if __i386__
#define TYPE __gnu_cxx::stdio_filebuf<char, std::char_traits<char> >
CheckTypeSize(TYPE,140,10600,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10600,0);
#endif

#if __i386__
#define TYPE __gnu_cxx::stdio_filebuf<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,156,10601,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10601,0);
#endif

#if __i386__
#define TYPE std::locale::facet
CheckTypeSize(TYPE,8,10625,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10625,0);
#endif

#if __i386__
#define TYPE std::ios_base::failure
CheckTypeSize(TYPE,260,10622,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10622,0);
#endif

#if __i386__
#define TYPE std::valarray<unsigned int>
CheckTypeSize(TYPE,8,10849,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10849,0);
#endif

#if __i386__
#define TYPE std::basic_iostream<char, std::char_traits<char> >
CheckTypeSize(TYPE,148,10619,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10619,0);
#endif

#if __i386__
#define TYPE std::basic_istream<char, std::char_traits<char> >
CheckTypeSize(TYPE,144,10623,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10623,0);
#endif

#if __i386__
#define TYPE std::basic_ostream<char, std::char_traits<char> >
CheckTypeSize(TYPE,140,10678,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10678,0);
#endif

#if __i386__
#define TYPE std::__num_base
CheckTypeSize(TYPE,1,10673,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10673,0);
#endif

#if __i386__
#define TYPE std::bad_typeid
CheckTypeSize(TYPE,4,10701,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10701,0);
#endif

#if __i386__
#define TYPE std::ctype_base
CheckTypeSize(TYPE,1,10677,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10677,0);
#endif

#if __i386__
#define TYPE std::istrstream
CheckTypeSize(TYPE,236,10693,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10693,0);
#endif

#if __i386__
#define TYPE std::money_base
CheckTypeSize(TYPE,1,10675,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10675,0);
#endif

#if __i386__
#define TYPE std::moneypunct<char, false>
CheckTypeSize(TYPE,40,10639,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10639,0);
#endif

#if __i386__
#define TYPE std::moneypunct<char, true>
CheckTypeSize(TYPE,40,10638,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10638,0);
#endif

#if __i386__
#define TYPE std::moneypunct<wchar_t, false>
CheckTypeSize(TYPE,44,10641,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10641,0);
#endif

#if __i386__
#define TYPE std::moneypunct<wchar_t, true>
CheckTypeSize(TYPE,44,10640,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10640,0);
#endif

#if __i386__
#define TYPE std::ostrstream
CheckTypeSize(TYPE,232,10694,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10694,0);
#endif

#if __i386__
#define TYPE std::__timepunct<char>
CheckTypeSize(TYPE,204,10636,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10636,0);
#endif

#if __i386__
#define TYPE std::__timepunct<wchar_t>
CheckTypeSize(TYPE,204,10637,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10637,0);
#endif

#if __i386__
#define TYPE std::logic_error
CheckTypeSize(TYPE,8,10688,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10688,0);
#endif

#if __i386__
#define TYPE std::range_error
CheckTypeSize(TYPE,8,10614,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10614,0);
#endif

#if __i386__
#define TYPE std::codecvt_base
CheckTypeSize(TYPE,1,10676,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10676,0);
#endif

#if __i386__
#define TYPE std::ctype_byname<char>
CheckTypeSize(TYPE,28,10628,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10628,0);
#endif

#if __i386__
#define TYPE std::ctype_byname<wchar_t>
CheckTypeSize(TYPE,12,10629,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10629,0);
#endif

#if __i386__
#define TYPE std::domain_error
CheckTypeSize(TYPE,8,10610,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10610,0);
#endif

#if __i386__
#define TYPE std::length_error
CheckTypeSize(TYPE,8,10612,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10612,0);
#endif

#if __i386__
#define TYPE std::out_of_range
CheckTypeSize(TYPE,8,10613,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10613,0);
#endif

#if __i386__
#define TYPE std::strstreambuf
CheckTypeSize(TYPE,92,10692,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10692,0);
#endif

#if __i386__
#define TYPE std::bad_exception
CheckTypeSize(TYPE,4,10697,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10697,0);
#endif

#if __i386__
#define TYPE std::basic_filebuf<char, std::char_traits<char> >
CheckTypeSize(TYPE,136,10602,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10602,0);
#endif

#if __i386__
#define TYPE std::basic_filebuf<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,140,10603,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10603,0);
#endif

#if __i386__
#define TYPE std::basic_fstream<char, std::char_traits<char> >
CheckTypeSize(TYPE,284,10606,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10606,0);
#endif

#if __i386__
#define TYPE std::basic_fstream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,292,10609,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10609,0);
#endif

#if __i386__
#define TYPE std::basic_istream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,148,10624,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10624,0);
#endif

#if __i386__
#define TYPE std::basic_ostream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,144,10679,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10679,0);
#endif

#if __i386__
#define TYPE std::messages_base
CheckTypeSize(TYPE,1,10674,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10674,0);
#endif

#if __i386__
#define TYPE std::runtime_error
CheckTypeSize(TYPE,8,10689,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10689,0);
#endif

#if __i386__
#define TYPE std::basic_ifstream<char, std::char_traits<char> >
CheckTypeSize(TYPE,280,10604,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10604,0);
#endif

#if __i386__
#define TYPE std::basic_ifstream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,288,10607,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10607,0);
#endif

#if __i386__
#define TYPE std::basic_iostream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,152,10620,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10620,0);
#endif

#if __i386__
#define TYPE std::basic_ofstream<char, std::char_traits<char> >
CheckTypeSize(TYPE,276,10605,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10605,0);
#endif

#if __i386__
#define TYPE std::basic_ofstream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,284,10608,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10608,0);
#endif

#if __i386__
#define TYPE std::codecvt_byname<char, char, __mbstate_t>
CheckTypeSize(TYPE,8,10656,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10656,0);
#endif

#if __i386__
#define TYPE std::codecvt_byname<wchar_t, char, __mbstate_t>
CheckTypeSize(TYPE,8,10670,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10670,0);
#endif

#if __i386__
#define TYPE std::collate_byname<char>
CheckTypeSize(TYPE,12,10657,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10657,0);
#endif

#if __i386__
#define TYPE std::collate_byname<wchar_t>
CheckTypeSize(TYPE,12,10671,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10671,0);
#endif

#if __i386__
#define TYPE std::overflow_error
CheckTypeSize(TYPE,8,10615,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10615,0);
#endif

#if __i386__
#define TYPE std::basic_streambuf<char, std::char_traits<char> >
CheckTypeSize(TYPE,80,10690,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10690,0);
#endif

#if __i386__
#define TYPE std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,84,10691,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10691,0);
#endif

#if __i386__
#define TYPE std::basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,84,10680,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10680,0);
#endif

#if __i386__
#define TYPE std::basic_stringbuf<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,88,10684,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10684,0);
#endif

#if __i386__
#define TYPE std::messages_byname<char>
CheckTypeSize(TYPE,16,10655,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10655,0);
#endif

#if __i386__
#define TYPE std::messages_byname<wchar_t>
CheckTypeSize(TYPE,16,10669,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10669,0);
#endif

#if __i386__
#define TYPE std::numpunct_byname<char>
CheckTypeSize(TYPE,28,10648,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10648,0);
#endif

#if __i386__
#define TYPE std::numpunct_byname<wchar_t>
CheckTypeSize(TYPE,32,10662,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10662,0);
#endif

#if __i386__
#define TYPE std::time_get_byname<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,8,10764,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10764,0);
#endif

#if __i386__
#define TYPE std::time_get_byname<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,8,10766,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10766,0);
#endif

#if __i386__
#define TYPE std::time_put_byname<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,8,10763,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10763,0);
#endif

#if __i386__
#define TYPE std::time_put_byname<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,8,10765,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10765,0);
#endif

#if __i386__
#define TYPE std::underflow_error
CheckTypeSize(TYPE,8,10616,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10616,0);
#endif

#if __i386__
#define TYPE std::invalid_argument
CheckTypeSize(TYPE,8,10611,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10611,0);
#endif

#if __i386__
#define TYPE std::moneypunct_byname<char, false>
CheckTypeSize(TYPE,44,10644,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10644,0);
#endif

#if __i386__
#define TYPE std::moneypunct_byname<char, true>
CheckTypeSize(TYPE,44,10645,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10645,0);
#endif

#if __i386__
#define TYPE std::moneypunct_byname<wchar_t, false>
CheckTypeSize(TYPE,48,10658,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10658,0);
#endif

#if __i386__
#define TYPE std::moneypunct_byname<wchar_t, true>
CheckTypeSize(TYPE,48,10659,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10659,0);
#endif

#if __i386__
#define TYPE std::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,232,10683,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10683,0);
#endif

#if __i386__
#define TYPE std::basic_stringstream<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,240,10687,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10687,0);
#endif

#if __i386__
#define TYPE std::basic_istringstream<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,228,10681,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10681,0);
#endif

#if __i386__
#define TYPE std::basic_istringstream<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,236,10685,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10685,0);
#endif

#if __i386__
#define TYPE std::basic_ostringstream<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,224,10682,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10682,0);
#endif

#if __i386__
#define TYPE std::basic_ostringstream<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,232,10686,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10686,0);
#endif

#if __i386__
#define TYPE std::__ctype_abstract_base<char>
CheckTypeSize(TYPE,8,10626,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10626,0);
#endif

#if __i386__
#define TYPE std::__ctype_abstract_base<wchar_t>
CheckTypeSize(TYPE,8,10627,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10627,0);
#endif

#if __i386__
#define TYPE std::__codecvt_abstract_base<char, char, __mbstate_t>
CheckTypeSize(TYPE,8,10630,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10630,0);
#endif

#if __i386__
#define TYPE std::__codecvt_abstract_base<wchar_t, char, __mbstate_t>
CheckTypeSize(TYPE,8,10631,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10631,0);
#endif

#if __i386__
#define TYPE std::ctype<char>
CheckTypeSize(TYPE,28,10598,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10598,0);
#endif

#if __i386__
#define TYPE std::ctype<wchar_t>
CheckTypeSize(TYPE,12,10599,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10599,0);
#endif

#if __i386__
#define TYPE std::codecvt<char, char, __mbstate_t>
CheckTypeSize(TYPE,8,10596,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10596,0);
#endif

#if __i386__
#define TYPE std::codecvt<wchar_t, char, __mbstate_t>
CheckTypeSize(TYPE,8,10597,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10597,0);
#endif

#if __i386__
#define TYPE std::collate<char>
CheckTypeSize(TYPE,12,10634,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10634,0);
#endif

#if __i386__
#define TYPE std::collate<wchar_t>
CheckTypeSize(TYPE,12,10635,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10635,0);
#endif

#if __i386__
#define TYPE std::num_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,8,10649,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10649,0);
#endif

#if __i386__
#define TYPE std::num_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,8,10663,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10663,0);
#endif

#if __i386__
#define TYPE std::num_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,8,10650,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10650,0);
#endif

#if __i386__
#define TYPE std::num_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,8,10664,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10664,0);
#endif

#if __i386__
#define TYPE std::bad_cast
CheckTypeSize(TYPE,4,10700,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10700,0);
#endif

#if __i386__
#define TYPE std::ios_base
CheckTypeSize(TYPE,108,10621,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10621,0);
#endif

#if __i386__
#define TYPE std::messages<char>
CheckTypeSize(TYPE,16,10642,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10642,0);
#endif

#if __i386__
#define TYPE std::messages<wchar_t>
CheckTypeSize(TYPE,16,10643,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10643,0);
#endif

#if __i386__
#define TYPE std::numpunct<char>
CheckTypeSize(TYPE,24,10632,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10632,0);
#endif

#if __i386__
#define TYPE std::numpunct<wchar_t>
CheckTypeSize(TYPE,28,10633,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10633,0);
#endif

#if __i386__
#define TYPE std::time_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,8,10653,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10653,0);
#endif

#if __i386__
#define TYPE std::time_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,8,10667,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10667,0);
#endif

#if __i386__
#define TYPE std::time_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,8,10651,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10651,0);
#endif

#if __i386__
#define TYPE std::time_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,8,10665,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10665,0);
#endif

#if __i386__
#define TYPE std::bad_alloc
CheckTypeSize(TYPE,4,10698,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10698,0);
#endif

#if __i386__
#define TYPE std::basic_ios<char, std::char_traits<char> >
CheckTypeSize(TYPE,136,10617,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10617,0);
#endif

#if __i386__
#define TYPE std::basic_ios<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,140,10618,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10618,0);
#endif

#if __i386__
#define TYPE std::exception
CheckTypeSize(TYPE,4,10696,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10696,0);
#endif

#if __i386__
#define TYPE std::money_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,8,10646,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10646,0);
#endif

#if __i386__
#define TYPE std::money_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,8,10660,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10660,0);
#endif

#if __i386__
#define TYPE std::money_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,8,10647,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10647,0);
#endif

#if __i386__
#define TYPE std::money_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,8,10661,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10661,0);
#endif

#if __i386__
#define TYPE std::strstream
CheckTypeSize(TYPE,240,10695,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10695,0);
#endif

#if __i386__
#define TYPE std::time_base
CheckTypeSize(TYPE,1,10672,2)
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10672,0);
#endif

#if __i386__
#define TYPE std::type_info
CheckTypeSize(TYPE,8,10699,2)
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
