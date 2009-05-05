/*
 * Test of freetype/ttnameid.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include <ft2build.h>
#include FT_FREETYPE_H

#include "freetype/ttnameid.h"



#ifdef TET_TEST
void freetype_ttnameid_h()
{
#else
int freetype_ttnameid_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in freetype/ttnameid.h\n");
#endif

printf("Checking data structures in freetype/ttnameid.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_FULFULDE_NIGERIA
	CompareConstant(TT_MS_LANGID_FULFULDE_NIGERIA,0x0467,10000,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_FULFULDE_NIGERIA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_GALICIAN_SPAIN
	CompareConstant(TT_MS_LANGID_GALICIAN_SPAIN,0x0456,10001,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_GALICIAN_SPAIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_GEORGIAN_GEORGIA
	CompareConstant(TT_MS_LANGID_GEORGIAN_GEORGIA,0x0437,10002,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_GEORGIAN_GEORGIA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_GERMAN_AUSTRIA
	CompareConstant(TT_MS_LANGID_GERMAN_AUSTRIA,0x0c07,10003,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_GERMAN_AUSTRIA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_GERMAN_GERMANY
	CompareConstant(TT_MS_LANGID_GERMAN_GERMANY,0x0407,10004,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_GERMAN_GERMANY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_GERMAN_LIECHTENSTEI
	CompareConstant(TT_MS_LANGID_GERMAN_LIECHTENSTEI,0x1407,10005,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_GERMAN_LIECHTENSTEI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_GERMAN_LUXEMBOURG
	CompareConstant(TT_MS_LANGID_GERMAN_LUXEMBOURG,0x1007,10006,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_GERMAN_LUXEMBOURG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_GERMAN_SWITZERLAND
	CompareConstant(TT_MS_LANGID_GERMAN_SWITZERLAND,0x0807,10007,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_GERMAN_SWITZERLAND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_GREEK_GREECE
	CompareConstant(TT_MS_LANGID_GREEK_GREECE,0x0408,10008,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_GREEK_GREECE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_GUARANI_PARAGUAY
	CompareConstant(TT_MS_LANGID_GUARANI_PARAGUAY,0x0474,10009,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_GUARANI_PARAGUAY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_GUJARATI_INDIA
	CompareConstant(TT_MS_LANGID_GUJARATI_INDIA,0x0447,10010,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_GUJARATI_INDIA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_HAUSA_NIGERIA
	CompareConstant(TT_MS_LANGID_HAUSA_NIGERIA,0x0468,10011,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_HAUSA_NIGERIA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_HAWAIIAN_UNITED_STATES
	CompareConstant(TT_MS_LANGID_HAWAIIAN_UNITED_STATES,0x0475,10012,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_HAWAIIAN_UNITED_STATES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_HEBREW_ISRAEL
	CompareConstant(TT_MS_LANGID_HEBREW_ISRAEL,0x040d,10013,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_HEBREW_ISRAEL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_HINDI_INDIA
	CompareConstant(TT_MS_LANGID_HINDI_INDIA,0x0439,10014,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_HINDI_INDIA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_HUNGARIAN_HUNGARY
	CompareConstant(TT_MS_LANGID_HUNGARIAN_HUNGARY,0x040e,10015,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_HUNGARIAN_HUNGARY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_IBIBIO_NIGERIA
	CompareConstant(TT_MS_LANGID_IBIBIO_NIGERIA,0x0469,10016,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_IBIBIO_NIGERIA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_ICELANDIC_ICELAND
	CompareConstant(TT_MS_LANGID_ICELANDIC_ICELAND,0x040f,10017,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_ICELANDIC_ICELAND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_IGBO_NIGERIA
	CompareConstant(TT_MS_LANGID_IGBO_NIGERIA,0x0470,10018,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_IGBO_NIGERIA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_INDONESIAN_INDONESIA
	CompareConstant(TT_MS_LANGID_INDONESIAN_INDONESIA,0x0421,10019,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_INDONESIAN_INDONESIA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_INUKTITUT_CANADA
	CompareConstant(TT_MS_LANGID_INUKTITUT_CANADA,0x045d,10020,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_INUKTITUT_CANADA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_IRISH_GAELIC_IRELAND
	CompareConstant(TT_MS_LANGID_IRISH_GAELIC_IRELAND,0x043c,10021,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_IRISH_GAELIC_IRELAND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_ITALIAN_ITALY
	CompareConstant(TT_MS_LANGID_ITALIAN_ITALY,0x0410,10022,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_ITALIAN_ITALY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_ITALIAN_SWITZERLAND
	CompareConstant(TT_MS_LANGID_ITALIAN_SWITZERLAND,0x0810,10023,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_ITALIAN_SWITZERLAND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_JAPANESE_JAPAN
	CompareConstant(TT_MS_LANGID_JAPANESE_JAPAN,0x0411,10024,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_JAPANESE_JAPAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_KANNADA_INDIA
	CompareConstant(TT_MS_LANGID_KANNADA_INDIA,0x044b,10025,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_KANNADA_INDIA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_KANURI_NIGERIA
	CompareConstant(TT_MS_LANGID_KANURI_NIGERIA,0x0471,10026,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_KANURI_NIGERIA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_KASHMIRI_PAKISTAN
	CompareConstant(TT_MS_LANGID_KASHMIRI_PAKISTAN,0x0460,10027,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_KASHMIRI_PAKISTAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_KASHMIRI_SASIA
	CompareConstant(TT_MS_LANGID_KASHMIRI_SASIA,0x0860,10028,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_KASHMIRI_SASIA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_KAZAK_KAZAKSTAN
	CompareConstant(TT_MS_LANGID_KAZAK_KAZAKSTAN,0x043f,10029,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_KAZAK_KAZAKSTAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_KHMER_CAMBODIA
	CompareConstant(TT_MS_LANGID_KHMER_CAMBODIA,0x0453,10030,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_KHMER_CAMBODIA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_KIRGHIZ_KIRGHIZSTAN
	CompareConstant(TT_MS_LANGID_KIRGHIZ_KIRGHIZSTAN,0x0440,10031,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_KIRGHIZ_KIRGHIZSTAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_KONKANI_INDIA
	CompareConstant(TT_MS_LANGID_KONKANI_INDIA,0x0457,10032,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_KONKANI_INDIA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_KOREAN_EXTENDED_WANSUNG_KOREA
	CompareConstant(TT_MS_LANGID_KOREAN_EXTENDED_WANSUNG_KOREA,0x0412,10033,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_KOREAN_EXTENDED_WANSUNG_KOREA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_KOREAN_JOHAB_KOREA
	CompareConstant(TT_MS_LANGID_KOREAN_JOHAB_KOREA,0x0812,10034,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_KOREAN_JOHAB_KOREA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_LAO_LAOS
	CompareConstant(TT_MS_LANGID_LAO_LAOS,0x0454,10035,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_LAO_LAOS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_LATIN
	CompareConstant(TT_MS_LANGID_LATIN,0x0476,10036,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_LATIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_LATVIAN_LATVIA
	CompareConstant(TT_MS_LANGID_LATVIAN_LATVIA,0x0426,10037,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_LATVIAN_LATVIA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_LITHUANIAN_LITHUANIA
	CompareConstant(TT_MS_LANGID_LITHUANIAN_LITHUANIA,0x0427,10038,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_LITHUANIAN_LITHUANIA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_MACEDONIAN_MACEDONIA
	CompareConstant(TT_MS_LANGID_MACEDONIAN_MACEDONIA,0x042f,10039,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_MACEDONIAN_MACEDONIA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_MALAYALAM_INDIA
	CompareConstant(TT_MS_LANGID_MALAYALAM_INDIA,0x044c,10040,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_MALAYALAM_INDIA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_MALAY_BRUNEI_DARUSSALAM
	CompareConstant(TT_MS_LANGID_MALAY_BRUNEI_DARUSSALAM,0x083e,10041,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_MALAY_BRUNEI_DARUSSALAM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_MALAY_MALAYSIA
	CompareConstant(TT_MS_LANGID_MALAY_MALAYSIA,0x043e,10042,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_MALAY_MALAYSIA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_MALTESE_MALTA
	CompareConstant(TT_MS_LANGID_MALTESE_MALTA,0x043a,10043,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_MALTESE_MALTA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_MANIPURI_INDIA
	CompareConstant(TT_MS_LANGID_MANIPURI_INDIA,0x0458,10044,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_MANIPURI_INDIA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_MAORI_NEW_ZEALAND
	CompareConstant(TT_MS_LANGID_MAORI_NEW_ZEALAND,0x0481,10045,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_MAORI_NEW_ZEALAND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_MARATHI_INDIA
	CompareConstant(TT_MS_LANGID_MARATHI_INDIA,0x044e,10046,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_MARATHI_INDIA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_MOLDAVIAN_MOLDAVIA
	CompareConstant(TT_MS_LANGID_MOLDAVIAN_MOLDAVIA,0x0818,10047,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_MOLDAVIAN_MOLDAVIA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_MONGOLIAN_MONGOLIA
	CompareConstant(TT_MS_LANGID_MONGOLIAN_MONGOLIA,0x0450,10048,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_MONGOLIAN_MONGOLIA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_MONGOLIAN_MONGOLIA_MONGOLIAN
	CompareConstant(TT_MS_LANGID_MONGOLIAN_MONGOLIA_MONGOLIAN,0x0850,10049,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_MONGOLIAN_MONGOLIA_MONGOLIAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_NEPALI_INDIA
	CompareConstant(TT_MS_LANGID_NEPALI_INDIA,0x0861,10050,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_NEPALI_INDIA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_NEPALI_NEPAL
	CompareConstant(TT_MS_LANGID_NEPALI_NEPAL,0x0461,10051,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_NEPALI_NEPAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_NORWEGIAN_NORWAY_BOKMAL
	CompareConstant(TT_MS_LANGID_NORWEGIAN_NORWAY_BOKMAL,0x0414,10052,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_NORWEGIAN_NORWAY_BOKMAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_NORWEGIAN_NORWAY_NYNORSK
	CompareConstant(TT_MS_LANGID_NORWEGIAN_NORWAY_NYNORSK,0x0814,10053,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_NORWEGIAN_NORWAY_NYNORSK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_ORIYA_INDIA
	CompareConstant(TT_MS_LANGID_ORIYA_INDIA,0x0448,10054,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_ORIYA_INDIA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_OROMO_ETHIOPIA
	CompareConstant(TT_MS_LANGID_OROMO_ETHIOPIA,0x0472,10055,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_OROMO_ETHIOPIA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_PAPIAMENTU_NETHERLANDS_ANTILLES
	CompareConstant(TT_MS_LANGID_PAPIAMENTU_NETHERLANDS_ANTILLES,0x0479,10056,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_PAPIAMENTU_NETHERLANDS_ANTILLES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_PASHTO_AFGHANISTAN
	CompareConstant(TT_MS_LANGID_PASHTO_AFGHANISTAN,0x0463,10057,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_PASHTO_AFGHANISTAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_POLISH_POLAND
	CompareConstant(TT_MS_LANGID_POLISH_POLAND,0x0415,10058,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_POLISH_POLAND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_PORTUGUESE_BRAZIL
	CompareConstant(TT_MS_LANGID_PORTUGUESE_BRAZIL,0x0416,10059,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_PORTUGUESE_BRAZIL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_PORTUGUESE_PORTUGAL
	CompareConstant(TT_MS_LANGID_PORTUGUESE_PORTUGAL,0x0816,10060,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_PORTUGUESE_PORTUGAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_PUNJABI_ARABIC_PAKISTAN
	CompareConstant(TT_MS_LANGID_PUNJABI_ARABIC_PAKISTAN,0x0846,10061,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_PUNJABI_ARABIC_PAKISTAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_PUNJABI_INDIA
	CompareConstant(TT_MS_LANGID_PUNJABI_INDIA,0x0446,10062,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_PUNJABI_INDIA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_QUECHUA_BOLIVIA
	CompareConstant(TT_MS_LANGID_QUECHUA_BOLIVIA,0x046b,10063,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_QUECHUA_BOLIVIA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_QUECHUA_ECUADOR
	CompareConstant(TT_MS_LANGID_QUECHUA_ECUADOR,0x086b,10064,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_QUECHUA_ECUADOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_QUECHUA_PERU
	CompareConstant(TT_MS_LANGID_QUECHUA_PERU,0x0c6b,10065,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_QUECHUA_PERU\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_RHAETO_ROMANIC_SWITZERLAND
	CompareConstant(TT_MS_LANGID_RHAETO_ROMANIC_SWITZERLAND,0x0417,10066,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_RHAETO_ROMANIC_SWITZERLAND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_ROMANIAN_ROMANIA
	CompareConstant(TT_MS_LANGID_ROMANIAN_ROMANIA,0x0418,10067,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_ROMANIAN_ROMANIA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_RUSSIAN_MOLDAVIA
	CompareConstant(TT_MS_LANGID_RUSSIAN_MOLDAVIA,0x0819,10068,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_RUSSIAN_MOLDAVIA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_RUSSIAN_RUSSIA
	CompareConstant(TT_MS_LANGID_RUSSIAN_RUSSIA,0x0419,10069,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_RUSSIAN_RUSSIA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_SAAMI_LAPONIA
	CompareConstant(TT_MS_LANGID_SAAMI_LAPONIA,0x043b,10070,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_SAAMI_LAPONIA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_SAMI_INARI_FINLAND
	CompareConstant(TT_MS_LANGID_SAMI_INARI_FINLAND,0x243b,10071,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_SAMI_INARI_FINLAND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_SAMI_LULE_NORWAY
	CompareConstant(TT_MS_LANGID_SAMI_LULE_NORWAY,0x103b,10072,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_SAMI_LULE_NORWAY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_SAMI_LULE_SWEDEN
	CompareConstant(TT_MS_LANGID_SAMI_LULE_SWEDEN,0x143b,10073,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_SAMI_LULE_SWEDEN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_SAMI_NORTHERN_FINLAND
	CompareConstant(TT_MS_LANGID_SAMI_NORTHERN_FINLAND,0x0C3b,10074,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_SAMI_NORTHERN_FINLAND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_SAMI_NORTHERN_NORWAY
	CompareConstant(TT_MS_LANGID_SAMI_NORTHERN_NORWAY,0x043b,10075,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_SAMI_NORTHERN_NORWAY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_SAMI_NORTHERN_SWEDEN
	CompareConstant(TT_MS_LANGID_SAMI_NORTHERN_SWEDEN,0x083b,10076,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_SAMI_NORTHERN_SWEDEN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_SAMI_SKOLT_FINLAND
	CompareConstant(TT_MS_LANGID_SAMI_SKOLT_FINLAND,0x203b,10077,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_SAMI_SKOLT_FINLAND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_SAMI_SOUTHERN_NORWAY
	CompareConstant(TT_MS_LANGID_SAMI_SOUTHERN_NORWAY,0x183b,10078,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_SAMI_SOUTHERN_NORWAY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_SAMI_SOUTHERN_SWEDEN
	CompareConstant(TT_MS_LANGID_SAMI_SOUTHERN_SWEDEN,0x1C3b,10079,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_SAMI_SOUTHERN_SWEDEN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_SANSKRIT_INDIA
	CompareConstant(TT_MS_LANGID_SANSKRIT_INDIA,0x044f,10080,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_SANSKRIT_INDIA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_SCOTTISH_GAELIC_UNITED_KINGDOM
	CompareConstant(TT_MS_LANGID_SCOTTISH_GAELIC_UNITED_KINGDOM,0x083c,10081,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_SCOTTISH_GAELIC_UNITED_KINGDOM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_SEPEDI_SOUTH_AFRICA
	CompareConstant(TT_MS_LANGID_SEPEDI_SOUTH_AFRICA,0x046c,10082,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_SEPEDI_SOUTH_AFRICA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_SERBIAN_BOSNIA_HERZ_CYRILLIC
	CompareConstant(TT_MS_LANGID_SERBIAN_BOSNIA_HERZ_CYRILLIC,0x181a,10083,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_SERBIAN_BOSNIA_HERZ_CYRILLIC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_SERBIAN_BOSNIA_HERZ_LATIN
	CompareConstant(TT_MS_LANGID_SERBIAN_BOSNIA_HERZ_LATIN,0x181a,10084,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_SERBIAN_BOSNIA_HERZ_LATIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_SERBIAN_SERBIA_CYRILLIC
	CompareConstant(TT_MS_LANGID_SERBIAN_SERBIA_CYRILLIC,0x0c1a,10085,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_SERBIAN_SERBIA_CYRILLIC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_SERBIAN_SERBIA_LATIN
	CompareConstant(TT_MS_LANGID_SERBIAN_SERBIA_LATIN,0x081a,10086,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_SERBIAN_SERBIA_LATIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_SINDHI_INDIA
	CompareConstant(TT_MS_LANGID_SINDHI_INDIA,0x0459,10087,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_SINDHI_INDIA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_SINDHI_PAKISTAN
	CompareConstant(TT_MS_LANGID_SINDHI_PAKISTAN,0x0859,10088,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_SINDHI_PAKISTAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_SINHALESE_SRI_LANKA
	CompareConstant(TT_MS_LANGID_SINHALESE_SRI_LANKA,0x045b,10089,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_SINHALESE_SRI_LANKA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_SLOVAK_SLOVAKIA
	CompareConstant(TT_MS_LANGID_SLOVAK_SLOVAKIA,0x041b,10090,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_SLOVAK_SLOVAKIA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_SLOVENE_SLOVENIA
	CompareConstant(TT_MS_LANGID_SLOVENE_SLOVENIA,0x0424,10091,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_SLOVENE_SLOVENIA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_SOMALI_SOMALIA
	CompareConstant(TT_MS_LANGID_SOMALI_SOMALIA,0x0477,10092,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_SOMALI_SOMALIA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_SORBIAN_GERMANY
	CompareConstant(TT_MS_LANGID_SORBIAN_GERMANY,0x042e,10093,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_SORBIAN_GERMANY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_SPANISH_ARGENTINA
	CompareConstant(TT_MS_LANGID_SPANISH_ARGENTINA,0x2c0a,10094,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_SPANISH_ARGENTINA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_SPANISH_BOLIVIA
	CompareConstant(TT_MS_LANGID_SPANISH_BOLIVIA,0x400a,10095,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_SPANISH_BOLIVIA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_SPANISH_CHILE
	CompareConstant(TT_MS_LANGID_SPANISH_CHILE,0x340a,10096,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_SPANISH_CHILE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_SPANISH_COLOMBIA
	CompareConstant(TT_MS_LANGID_SPANISH_COLOMBIA,0x240a,10097,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_SPANISH_COLOMBIA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_SPANISH_COSTA_RICA
	CompareConstant(TT_MS_LANGID_SPANISH_COSTA_RICA,0x140a,10098,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_SPANISH_COSTA_RICA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_SPANISH_DOMINICAN_REPUBLIC
	CompareConstant(TT_MS_LANGID_SPANISH_DOMINICAN_REPUBLIC,0x1c0a,10099,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_SPANISH_DOMINICAN_REPUBLIC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_SPANISH_ECUADOR
	CompareConstant(TT_MS_LANGID_SPANISH_ECUADOR,0x300a,10100,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_SPANISH_ECUADOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_SPANISH_EL_SALVADOR
	CompareConstant(TT_MS_LANGID_SPANISH_EL_SALVADOR,0x440a,10101,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_SPANISH_EL_SALVADOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_SPANISH_GUATEMALA
	CompareConstant(TT_MS_LANGID_SPANISH_GUATEMALA,0x100a,10102,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_SPANISH_GUATEMALA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_SPANISH_HONDURAS
	CompareConstant(TT_MS_LANGID_SPANISH_HONDURAS,0x480a,10103,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_SPANISH_HONDURAS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_SPANISH_LATIN_AMERICA
	CompareConstant(TT_MS_LANGID_SPANISH_LATIN_AMERICA,0xE40aU,10104,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_SPANISH_LATIN_AMERICA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_SPANISH_MEXICO
	CompareConstant(TT_MS_LANGID_SPANISH_MEXICO,0x080a,10105,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_SPANISH_MEXICO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_SPANISH_NICARAGUA
	CompareConstant(TT_MS_LANGID_SPANISH_NICARAGUA,0x4c0a,10106,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_SPANISH_NICARAGUA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_SPANISH_PANAMA
	CompareConstant(TT_MS_LANGID_SPANISH_PANAMA,0x180a,10107,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_SPANISH_PANAMA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_SPANISH_PARAGUAY
	CompareConstant(TT_MS_LANGID_SPANISH_PARAGUAY,0x3c0a,10108,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_SPANISH_PARAGUAY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_SPANISH_PERU
	CompareConstant(TT_MS_LANGID_SPANISH_PERU,0x280a,10109,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_SPANISH_PERU\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_SPANISH_PUERTO_RICO
	CompareConstant(TT_MS_LANGID_SPANISH_PUERTO_RICO,0x500a,10110,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_SPANISH_PUERTO_RICO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_SPANISH_SPAIN_INTERNATIONAL_SORT
	CompareConstant(TT_MS_LANGID_SPANISH_SPAIN_INTERNATIONAL_SORT,0x0c0a,10111,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_SPANISH_SPAIN_INTERNATIONAL_SORT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_SPANISH_SPAIN_TRADITIONAL_SORT
	CompareConstant(TT_MS_LANGID_SPANISH_SPAIN_TRADITIONAL_SORT,0x040a,10112,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_SPANISH_SPAIN_TRADITIONAL_SORT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_SPANISH_UNITED_STATES
	CompareConstant(TT_MS_LANGID_SPANISH_UNITED_STATES,0x540a,10113,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_SPANISH_UNITED_STATES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_SPANISH_URUGUAY
	CompareConstant(TT_MS_LANGID_SPANISH_URUGUAY,0x380a,10114,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_SPANISH_URUGUAY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_SPANISH_VENEZUELA
	CompareConstant(TT_MS_LANGID_SPANISH_VENEZUELA,0x200a,10115,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_SPANISH_VENEZUELA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_SUTU_SOUTH_AFRICA
	CompareConstant(TT_MS_LANGID_SUTU_SOUTH_AFRICA,0x0430,10116,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_SUTU_SOUTH_AFRICA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_SWAHILI_KENYA
	CompareConstant(TT_MS_LANGID_SWAHILI_KENYA,0x0441,10117,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_SWAHILI_KENYA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_SWEDISH_FINLAND
	CompareConstant(TT_MS_LANGID_SWEDISH_FINLAND,0x081d,10118,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_SWEDISH_FINLAND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_SWEDISH_SWEDEN
	CompareConstant(TT_MS_LANGID_SWEDISH_SWEDEN,0x041d,10119,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_SWEDISH_SWEDEN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_SYRIAC_SYRIA
	CompareConstant(TT_MS_LANGID_SYRIAC_SYRIA,0x045a,10120,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_SYRIAC_SYRIA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_TAJIK_TAJIKISTAN
	CompareConstant(TT_MS_LANGID_TAJIK_TAJIKISTAN,0x0428,10121,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_TAJIK_TAJIKISTAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_TAMAZIGHT_MOROCCO
	CompareConstant(TT_MS_LANGID_TAMAZIGHT_MOROCCO,0x045f,10122,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_TAMAZIGHT_MOROCCO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_TAMAZIGHT_MOROCCO_LATIN
	CompareConstant(TT_MS_LANGID_TAMAZIGHT_MOROCCO_LATIN,0x085f,10123,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_TAMAZIGHT_MOROCCO_LATIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_TAMIL_INDIA
	CompareConstant(TT_MS_LANGID_TAMIL_INDIA,0x0449,10124,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_TAMIL_INDIA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_TATAR_TATARSTAN
	CompareConstant(TT_MS_LANGID_TATAR_TATARSTAN,0x0444,10125,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_TATAR_TATARSTAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_TELUGU_INDIA
	CompareConstant(TT_MS_LANGID_TELUGU_INDIA,0x044a,10126,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_TELUGU_INDIA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_THAI_THAILAND
	CompareConstant(TT_MS_LANGID_THAI_THAILAND,0x041e,10127,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_THAI_THAILAND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_TIBETAN_CHINA
	CompareConstant(TT_MS_LANGID_TIBETAN_CHINA,0x0451,10128,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_TIBETAN_CHINA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_TIGRIGNA_ERYTHREA
	CompareConstant(TT_MS_LANGID_TIGRIGNA_ERYTHREA,0x0873,10129,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_TIGRIGNA_ERYTHREA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_TIGRIGNA_ETHIOPIA
	CompareConstant(TT_MS_LANGID_TIGRIGNA_ETHIOPIA,0x0473,10130,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_TIGRIGNA_ETHIOPIA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_TSONGA_SOUTH_AFRICA
	CompareConstant(TT_MS_LANGID_TSONGA_SOUTH_AFRICA,0x0431,10131,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_TSONGA_SOUTH_AFRICA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_TSWANA_SOUTH_AFRICA
	CompareConstant(TT_MS_LANGID_TSWANA_SOUTH_AFRICA,0x0432,10132,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_TSWANA_SOUTH_AFRICA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_TURKISH_TURKEY
	CompareConstant(TT_MS_LANGID_TURKISH_TURKEY,0x041f,10133,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_TURKISH_TURKEY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_TURKMEN_TURKMENISTAN
	CompareConstant(TT_MS_LANGID_TURKMEN_TURKMENISTAN,0x0442,10134,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_TURKMEN_TURKMENISTAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_UIGHUR_CHINA
	CompareConstant(TT_MS_LANGID_UIGHUR_CHINA,0x0480,10135,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_UIGHUR_CHINA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_UKRAINIAN_UKRAINE
	CompareConstant(TT_MS_LANGID_UKRAINIAN_UKRAINE,0x0422,10136,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_UKRAINIAN_UKRAINE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_URDU_INDIA
	CompareConstant(TT_MS_LANGID_URDU_INDIA,0x0820,10137,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_URDU_INDIA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_URDU_PAKISTAN
	CompareConstant(TT_MS_LANGID_URDU_PAKISTAN,0x0420,10138,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_URDU_PAKISTAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_UZBEK_UZBEKISTAN_CYRILLIC
	CompareConstant(TT_MS_LANGID_UZBEK_UZBEKISTAN_CYRILLIC,0x0843,10139,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_UZBEK_UZBEKISTAN_CYRILLIC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_UZBEK_UZBEKISTAN_LATIN
	CompareConstant(TT_MS_LANGID_UZBEK_UZBEKISTAN_LATIN,0x0443,10140,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_UZBEK_UZBEKISTAN_LATIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_VENDA_SOUTH_AFRICA
	CompareConstant(TT_MS_LANGID_VENDA_SOUTH_AFRICA,0x0433,10141,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_VENDA_SOUTH_AFRICA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_VIETNAMESE_VIET_NAM
	CompareConstant(TT_MS_LANGID_VIETNAMESE_VIET_NAM,0x042a,10142,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_VIETNAMESE_VIET_NAM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_WELSH_WALES
	CompareConstant(TT_MS_LANGID_WELSH_WALES,0x0452,10143,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_WELSH_WALES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_XHOSA_SOUTH_AFRICA
	CompareConstant(TT_MS_LANGID_XHOSA_SOUTH_AFRICA,0x0434,10144,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_XHOSA_SOUTH_AFRICA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_YI_CHINA
	CompareConstant(TT_MS_LANGID_YI_CHINA,0x0478,10145,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_YI_CHINA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_YIDDISH_GERMANY
	CompareConstant(TT_MS_LANGID_YIDDISH_GERMANY,0x043d,10146,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_YIDDISH_GERMANY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_YORUBA_NIGERIA
	CompareConstant(TT_MS_LANGID_YORUBA_NIGERIA,0x046a,10147,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_YORUBA_NIGERIA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_ZULU_SOUTH_AFRICA
	CompareConstant(TT_MS_LANGID_ZULU_SOUTH_AFRICA,0x0435,10148,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_ZULU_SOUTH_AFRICA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_NAME_ID_CID_FINDFONT_NAME
	CompareConstant(TT_NAME_ID_CID_FINDFONT_NAME,20,10149,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_NAME_ID_CID_FINDFONT_NAME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_NAME_ID_COPYRIGHT
	CompareConstant(TT_NAME_ID_COPYRIGHT,0,10150,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_NAME_ID_COPYRIGHT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_NAME_ID_DESCRIPTION
	CompareConstant(TT_NAME_ID_DESCRIPTION,10,10151,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_NAME_ID_DESCRIPTION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_NAME_ID_DESIGNER
	CompareConstant(TT_NAME_ID_DESIGNER,9,10152,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_NAME_ID_DESIGNER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_NAME_ID_DESIGNER_URL
	CompareConstant(TT_NAME_ID_DESIGNER_URL,12,10153,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_NAME_ID_DESIGNER_URL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_NAME_ID_FONT_FAMILY
	CompareConstant(TT_NAME_ID_FONT_FAMILY,1,10154,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_NAME_ID_FONT_FAMILY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_NAME_ID_FONT_SUBFAMILY
	CompareConstant(TT_NAME_ID_FONT_SUBFAMILY,2,10155,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_NAME_ID_FONT_SUBFAMILY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_NAME_ID_FULL_NAME
	CompareConstant(TT_NAME_ID_FULL_NAME,4,10156,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_NAME_ID_FULL_NAME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_NAME_ID_LICENSE
	CompareConstant(TT_NAME_ID_LICENSE,13,10157,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_NAME_ID_LICENSE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_NAME_ID_LICENSE_URL
	CompareConstant(TT_NAME_ID_LICENSE_URL,14,10158,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_NAME_ID_LICENSE_URL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_NAME_ID_MAC_FULL_NAME
	CompareConstant(TT_NAME_ID_MAC_FULL_NAME,18,10159,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_NAME_ID_MAC_FULL_NAME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_NAME_ID_MANUFACTURER
	CompareConstant(TT_NAME_ID_MANUFACTURER,8,10160,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_NAME_ID_MANUFACTURER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_NAME_ID_PREFERRED_FAMILY
	CompareConstant(TT_NAME_ID_PREFERRED_FAMILY,16,10161,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_NAME_ID_PREFERRED_FAMILY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_NAME_ID_PREFERRED_SUBFAMILY
	CompareConstant(TT_NAME_ID_PREFERRED_SUBFAMILY,17,10162,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_NAME_ID_PREFERRED_SUBFAMILY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_NAME_ID_PS_NAME
	CompareConstant(TT_NAME_ID_PS_NAME,6,10163,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_NAME_ID_PS_NAME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_NAME_ID_SAMPLE_TEXT
	CompareConstant(TT_NAME_ID_SAMPLE_TEXT,19,10164,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_NAME_ID_SAMPLE_TEXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_NAME_ID_TRADEMARK
	CompareConstant(TT_NAME_ID_TRADEMARK,7,10165,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_NAME_ID_TRADEMARK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_NAME_ID_UNIQUE_ID
	CompareConstant(TT_NAME_ID_UNIQUE_ID,3,10166,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_NAME_ID_UNIQUE_ID\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_NAME_ID_VENDOR_URL
	CompareConstant(TT_NAME_ID_VENDOR_URL,11,10167,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_NAME_ID_VENDOR_URL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_NAME_ID_VERSION_STRING
	CompareConstant(TT_NAME_ID_VERSION_STRING,5,10168,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_NAME_ID_VERSION_STRING\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_PLATFORM_ADOBE
	CompareConstant(TT_PLATFORM_ADOBE,7,10169,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_PLATFORM_ADOBE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_PLATFORM_APPLE_UNICODE
	CompareConstant(TT_PLATFORM_APPLE_UNICODE,0,10170,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_PLATFORM_APPLE_UNICODE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_PLATFORM_CUSTOM
	CompareConstant(TT_PLATFORM_CUSTOM,4,10171,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_PLATFORM_CUSTOM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_PLATFORM_ISO
	CompareConstant(TT_PLATFORM_ISO,2,10172,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_PLATFORM_ISO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_PLATFORM_MACINTOSH
	CompareConstant(TT_PLATFORM_MACINTOSH,1,10173,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_PLATFORM_MACINTOSH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_PLATFORM_MICROSOFT
	CompareConstant(TT_PLATFORM_MICROSOFT,3,10174,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_PLATFORM_MICROSOFT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_MS_LANGID_DIVEHI_MALDIVES */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_MS_LANGID_FRENCH_ZAIRE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_MS_LANGID_KASHMIRI_INDIA */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_MS_LANGID_KIRGHIZ_KIRGHIZ_REPUBLIC */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_MS_LANGID_SOTHO_SOUTHERN_SOUTH_AFRICA */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_MS_LANGID_TIBETAN_BHUTAN */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_MS_LANGID_TIGRIGNA_ERYTREA */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_ALPHABETIC_PRESENTATION_FORMS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_ARABIC */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_UCR_ARABIC_PRESENTATION_FORMS_A
	CompareLongConstant(TT_UCR_ARABIC_PRESENTATION_FORMS_A,TT_UCR_ARABIC_PRESENTATIONS_A,10184,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_UCR_ARABIC_PRESENTATION_FORMS_A\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_UCR_ARABIC_PRESENTATION_FORMS_B
	CompareLongConstant(TT_UCR_ARABIC_PRESENTATION_FORMS_B,TT_UCR_ARABIC_PRESENTATIONS_B,10185,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_UCR_ARABIC_PRESENTATION_FORMS_B\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_ARABIC_PRESENTATIONS_A */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_ARABIC_PRESENTATIONS_B */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_ARMENIAN */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_ARROWS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_BASIC_LATIN */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_BENGALI */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_BLOCK_ELEMENTS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_BOPOMOFO */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_BOX_DRAWING */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_BRAILLE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_CANADIAN_ABORIGINAL_SYLLABICS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_CHEROKEE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_CJK_COMPATIBILITY */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_CJK_COMPATIBILITY_FORMS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_CJK_COMPATIBILITY_IDEOGRAPHS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_CJK_MISC */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_CJK_SYMBOLS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_CJK_UNIFIED_IDEOGRAPHS */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_UCR_COMBINING_DIACRITICAL_MARKS_SYMB
	CompareLongConstant(TT_UCR_COMBINING_DIACRITICAL_MARKS_SYMB, \
	TT_UCR_COMBINING_DIACRITICS_SYMB,10204,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_UCR_COMBINING_DIACRITICAL_MARKS_SYMB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_UCR_COMBINING_DIACRITICAL_MARKS
	CompareLongConstant(TT_UCR_COMBINING_DIACRITICAL_MARKS,TT_UCR_COMBINING_DIACRITICS,10205,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_UCR_COMBINING_DIACRITICAL_MARKS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_COMBINING_DIACRITICS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_COMBINING_DIACRITICS_SYMB */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_COMBINING_HALF_MARKS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_CONTROL_PICTURES */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_CURRENCY_SYMBOLS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_CYRILLIC */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_DESERET */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_DEVANAGARI */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_DINGBATS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_ENCLOSED_ALPHANUMERICS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_ENCLOSED_CJK_LETTERS_MONTHS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_ETHIOPIC */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_GENERAL_PUNCTUATION */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_GEOMETRIC_SHAPES */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_GEORGIAN */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_GOTHIC */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_GREEK */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_GREEK_EXTENDED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_GUJARATI */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_GURMUKHI */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_HALFWIDTH_FULLWIDTH_FORMS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_HANGUL */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_HANGUL_COMPATIBILITY_JAMO */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_HANGUL_JAMO */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_HEBREW */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_HIRAGANA */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_IPA_EXTENSIONS */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_UCR_KANBUN
	CompareLongConstant(TT_UCR_KANBUN,TT_UCR_CJK_MISC,10233,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_UCR_KANBUN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_KANNADA */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_KATAKANA */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_KHMER */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_LAO */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_LATIN1_SUPPLEMENT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_LATIN_EXTENDED_A */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_LATIN_EXTENDED_ADDITIONAL */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_LATIN_EXTENDED_B */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_LETTERLIKE_SYMBOLS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_MALAYALAM */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_MATH_ALPHANUMERIC_SYMBOLS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_MATHEMATICAL_OPERATORS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_MISCELLANEOUS_SYMBOLS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_MISCELLANEOUS_TECHNICAL */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_MONGOLIAN */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_MUSICAL_SYMBOLS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_MYANMAR */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_NUMBER_FORMS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_OCR */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_OGHAM */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_OLD_ITALIC */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_ORIYA */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_PHILIPPINE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_PRIVATE_USE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_PRIVATE_USE_SUPPLEMENTARY */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_RUNIC */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_SINHALA */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_SMALL_FORM_VARIANTS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_SPACING_MODIFIER */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_SPECIALS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_SUPERSCRIPTS_SUBSCRIPTS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_SURROGATES */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_SYRIAC */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_TAGS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_TAMIL */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_TELUGU */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_THAANA */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_THAI */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_TIBETAN */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_VARIATION_SELECTORS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TT_UCR_YI */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_ADOBE_ID_CUSTOM
	CompareConstant(TT_ADOBE_ID_CUSTOM,2,9736,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_ADOBE_ID_CUSTOM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_ADOBE_ID_EXPERT
	CompareConstant(TT_ADOBE_ID_EXPERT,1,9737,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_ADOBE_ID_EXPERT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_ADOBE_ID_LATIN_1
	CompareConstant(TT_ADOBE_ID_LATIN_1,3,9738,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_ADOBE_ID_LATIN_1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_ADOBE_ID_STANDARD
	CompareConstant(TT_ADOBE_ID_STANDARD,0,9739,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_ADOBE_ID_STANDARD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_APPLE_ID_DEFAULT
	CompareConstant(TT_APPLE_ID_DEFAULT,0,9740,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_APPLE_ID_DEFAULT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_APPLE_ID_ISO_10646
	CompareConstant(TT_APPLE_ID_ISO_10646,2,9741,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_APPLE_ID_ISO_10646\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_APPLE_ID_UNICODE_1_1
	CompareConstant(TT_APPLE_ID_UNICODE_1_1,1,9742,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_APPLE_ID_UNICODE_1_1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_APPLE_ID_UNICODE_2_0
	CompareConstant(TT_APPLE_ID_UNICODE_2_0,3,9743,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_APPLE_ID_UNICODE_2_0\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_APPLE_ID_UNICODE_32
	CompareConstant(TT_APPLE_ID_UNICODE_32,4,9744,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_APPLE_ID_UNICODE_32\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_ISO_ID_10646
	CompareConstant(TT_ISO_ID_10646,1,9745,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_ISO_ID_10646\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_ISO_ID_7BIT_ASCII
	CompareConstant(TT_ISO_ID_7BIT_ASCII,0,9746,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_ISO_ID_7BIT_ASCII\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_ISO_ID_8859_1
	CompareConstant(TT_ISO_ID_8859_1,2,9747,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_ISO_ID_8859_1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_ID_ARABIC
	CompareConstant(TT_MAC_ID_ARABIC,4,9748,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_ID_ARABIC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_ID_ARMENIAN
	CompareConstant(TT_MAC_ID_ARMENIAN,24,9749,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_ID_ARMENIAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_ID_BENGALI
	CompareConstant(TT_MAC_ID_BENGALI,13,9750,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_ID_BENGALI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_ID_BURMESE
	CompareConstant(TT_MAC_ID_BURMESE,19,9751,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_ID_BURMESE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_ID_DEVANAGARI
	CompareConstant(TT_MAC_ID_DEVANAGARI,9,9752,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_ID_DEVANAGARI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_ID_GEEZ
	CompareConstant(TT_MAC_ID_GEEZ,28,9753,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_ID_GEEZ\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_ID_GEORGIAN
	CompareConstant(TT_MAC_ID_GEORGIAN,23,9754,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_ID_GEORGIAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_ID_GREEK
	CompareConstant(TT_MAC_ID_GREEK,6,9755,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_ID_GREEK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_ID_GUJARATI
	CompareConstant(TT_MAC_ID_GUJARATI,11,9756,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_ID_GUJARATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_ID_GURMUKHI
	CompareConstant(TT_MAC_ID_GURMUKHI,10,9757,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_ID_GURMUKHI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_ID_HEBREW
	CompareConstant(TT_MAC_ID_HEBREW,5,9758,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_ID_HEBREW\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_ID_JAPANESE
	CompareConstant(TT_MAC_ID_JAPANESE,1,9759,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_ID_JAPANESE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_ID_KANNADA
	CompareConstant(TT_MAC_ID_KANNADA,16,9760,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_ID_KANNADA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_ID_KHMER
	CompareConstant(TT_MAC_ID_KHMER,20,9761,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_ID_KHMER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_ID_KOREAN
	CompareConstant(TT_MAC_ID_KOREAN,3,9762,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_ID_KOREAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_ID_LAOTIAN
	CompareConstant(TT_MAC_ID_LAOTIAN,22,9763,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_ID_LAOTIAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_ID_MALAYALAM
	CompareConstant(TT_MAC_ID_MALAYALAM,17,9764,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_ID_MALAYALAM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_ID_MALDIVIAN
	CompareConstant(TT_MAC_ID_MALDIVIAN,25,9765,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_ID_MALDIVIAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_ID_MONGOLIAN
	CompareConstant(TT_MAC_ID_MONGOLIAN,27,9766,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_ID_MONGOLIAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_ID_ORIYA
	CompareConstant(TT_MAC_ID_ORIYA,12,9767,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_ID_ORIYA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_ID_ROMAN
	CompareConstant(TT_MAC_ID_ROMAN,0,9768,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_ID_ROMAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_ID_RSYMBOL
	CompareConstant(TT_MAC_ID_RSYMBOL,8,9769,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_ID_RSYMBOL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_ID_RUSSIAN
	CompareConstant(TT_MAC_ID_RUSSIAN,7,9770,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_ID_RUSSIAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_ID_SIMPLIFIED_CHINESE
	CompareConstant(TT_MAC_ID_SIMPLIFIED_CHINESE,25,9771,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_ID_SIMPLIFIED_CHINESE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_ID_SINDHI
	CompareConstant(TT_MAC_ID_SINDHI,31,9772,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_ID_SINDHI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_ID_SINHALESE
	CompareConstant(TT_MAC_ID_SINHALESE,18,9773,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_ID_SINHALESE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_ID_SLAVIC
	CompareConstant(TT_MAC_ID_SLAVIC,29,9774,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_ID_SLAVIC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_ID_TAMIL
	CompareConstant(TT_MAC_ID_TAMIL,14,9775,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_ID_TAMIL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_ID_TELUGU
	CompareConstant(TT_MAC_ID_TELUGU,15,9776,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_ID_TELUGU\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_ID_THAI
	CompareConstant(TT_MAC_ID_THAI,21,9777,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_ID_THAI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_ID_TIBETAN
	CompareConstant(TT_MAC_ID_TIBETAN,26,9778,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_ID_TIBETAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_ID_TRADITIONAL_CHINESE
	CompareConstant(TT_MAC_ID_TRADITIONAL_CHINESE,2,9779,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_ID_TRADITIONAL_CHINESE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_ID_UNINTERP
	CompareConstant(TT_MAC_ID_UNINTERP,32,9780,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_ID_UNINTERP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_ID_VIETNAMESE
	CompareConstant(TT_MAC_ID_VIETNAMESE,30,9781,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_ID_VIETNAMESE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_AFRIKAANS
	CompareConstant(TT_MAC_LANGID_AFRIKAANS,141,9782,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_AFRIKAANS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_ALBANIAN
	CompareConstant(TT_MAC_LANGID_ALBANIAN,36,9783,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_ALBANIAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_AMHARIC
	CompareConstant(TT_MAC_LANGID_AMHARIC,85,9784,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_AMHARIC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_ARABIC
	CompareConstant(TT_MAC_LANGID_ARABIC,12,9785,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_ARABIC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_ARMENIAN
	CompareConstant(TT_MAC_LANGID_ARMENIAN,51,9786,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_ARMENIAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_ASSAMESE
	CompareConstant(TT_MAC_LANGID_ASSAMESE,68,9787,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_ASSAMESE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_AYMARA
	CompareConstant(TT_MAC_LANGID_AYMARA,134,9788,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_AYMARA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_AZERBAIJANI
	CompareConstant(TT_MAC_LANGID_AZERBAIJANI,49,9789,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_AZERBAIJANI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_AZERBAIJANI_ARABIC_SCRIPT
	CompareConstant(TT_MAC_LANGID_AZERBAIJANI_ARABIC_SCRIPT,50,9790,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_AZERBAIJANI_ARABIC_SCRIPT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_AZERBAIJANI_CYRILLIC_SCRIPT
	CompareConstant(TT_MAC_LANGID_AZERBAIJANI_CYRILLIC_SCRIPT,49,9791,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_AZERBAIJANI_CYRILLIC_SCRIPT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_AZERBAIJANI_ROMAN_SCRIPT
	CompareConstant(TT_MAC_LANGID_AZERBAIJANI_ROMAN_SCRIPT,150,9792,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_AZERBAIJANI_ROMAN_SCRIPT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_BASQUE
	CompareConstant(TT_MAC_LANGID_BASQUE,129,9793,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_BASQUE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_BENGALI
	CompareConstant(TT_MAC_LANGID_BENGALI,67,9794,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_BENGALI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_BRETON
	CompareConstant(TT_MAC_LANGID_BRETON,142,9795,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_BRETON\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_BULGARIAN
	CompareConstant(TT_MAC_LANGID_BULGARIAN,44,9796,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_BULGARIAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_BURMESE
	CompareConstant(TT_MAC_LANGID_BURMESE,77,9797,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_BURMESE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_BYELORUSSIAN
	CompareConstant(TT_MAC_LANGID_BYELORUSSIAN,46,9798,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_BYELORUSSIAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_CATALAN
	CompareConstant(TT_MAC_LANGID_CATALAN,130,9799,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_CATALAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_CHEWA
	CompareConstant(TT_MAC_LANGID_CHEWA,92,9800,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_CHEWA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_CHINESE_SIMPLIFIED
	CompareConstant(TT_MAC_LANGID_CHINESE_SIMPLIFIED,33,9801,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_CHINESE_SIMPLIFIED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_CHINESE_TRADITIONAL
	CompareConstant(TT_MAC_LANGID_CHINESE_TRADITIONAL,19,9802,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_CHINESE_TRADITIONAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_CROATIAN
	CompareConstant(TT_MAC_LANGID_CROATIAN,18,9803,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_CROATIAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_CZECH
	CompareConstant(TT_MAC_LANGID_CZECH,38,9804,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_CZECH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_DANISH
	CompareConstant(TT_MAC_LANGID_DANISH,7,9805,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_DANISH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_DUTCH
	CompareConstant(TT_MAC_LANGID_DUTCH,4,9806,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_DUTCH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_DZONGKHA
	CompareConstant(TT_MAC_LANGID_DZONGKHA,137,9807,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_DZONGKHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_ENGLISH
	CompareConstant(TT_MAC_LANGID_ENGLISH,0,9808,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_ENGLISH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_ESPERANTO
	CompareConstant(TT_MAC_LANGID_ESPERANTO,94,9809,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_ESPERANTO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_ESTONIAN
	CompareConstant(TT_MAC_LANGID_ESTONIAN,27,9810,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_ESTONIAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_FAEROESE
	CompareConstant(TT_MAC_LANGID_FAEROESE,30,9811,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_FAEROESE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_FARSI
	CompareConstant(TT_MAC_LANGID_FARSI,31,9812,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_FARSI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_FINNISH
	CompareConstant(TT_MAC_LANGID_FINNISH,13,9813,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_FINNISH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_FLEMISH
	CompareConstant(TT_MAC_LANGID_FLEMISH,34,9814,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_FLEMISH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_FRENCH
	CompareConstant(TT_MAC_LANGID_FRENCH,1,9815,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_FRENCH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_GALICIAN
	CompareConstant(TT_MAC_LANGID_GALICIAN,140,9816,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_GALICIAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_GALLA
	CompareConstant(TT_MAC_LANGID_GALLA,87,9817,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_GALLA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_GEORGIAN
	CompareConstant(TT_MAC_LANGID_GEORGIAN,52,9818,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_GEORGIAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_GERMAN
	CompareConstant(TT_MAC_LANGID_GERMAN,2,9819,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_GERMAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_GREEK
	CompareConstant(TT_MAC_LANGID_GREEK,14,9820,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_GREEK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_GREEK_POLYTONIC
	CompareConstant(TT_MAC_LANGID_GREEK_POLYTONIC,148,9821,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_GREEK_POLYTONIC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_GREELANDIC
	CompareConstant(TT_MAC_LANGID_GREELANDIC,149,9822,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_GREELANDIC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_GUARANI
	CompareConstant(TT_MAC_LANGID_GUARANI,133,9823,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_GUARANI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_GUJARATI
	CompareConstant(TT_MAC_LANGID_GUJARATI,69,9824,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_GUJARATI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_HEBREW
	CompareConstant(TT_MAC_LANGID_HEBREW,10,9825,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_HEBREW\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_HINDI
	CompareConstant(TT_MAC_LANGID_HINDI,21,9826,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_HINDI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_HUNGARIAN
	CompareConstant(TT_MAC_LANGID_HUNGARIAN,26,9827,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_HUNGARIAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_ICELANDIC
	CompareConstant(TT_MAC_LANGID_ICELANDIC,15,9828,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_ICELANDIC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_INDONESIAN
	CompareConstant(TT_MAC_LANGID_INDONESIAN,81,9829,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_INDONESIAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_INUKTITUT
	CompareConstant(TT_MAC_LANGID_INUKTITUT,143,9830,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_INUKTITUT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_IRISH
	CompareConstant(TT_MAC_LANGID_IRISH,35,9831,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_IRISH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_IRISH_GAELIC
	CompareConstant(TT_MAC_LANGID_IRISH_GAELIC,146,9832,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_IRISH_GAELIC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_ITALIAN
	CompareConstant(TT_MAC_LANGID_ITALIAN,3,9833,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_ITALIAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_JAPANESE
	CompareConstant(TT_MAC_LANGID_JAPANESE,11,9834,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_JAPANESE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_JAVANESE
	CompareConstant(TT_MAC_LANGID_JAVANESE,138,9835,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_JAVANESE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_KANNADA
	CompareConstant(TT_MAC_LANGID_KANNADA,73,9836,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_KANNADA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_KASHMIRI
	CompareConstant(TT_MAC_LANGID_KASHMIRI,61,9837,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_KASHMIRI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_KAZAKH
	CompareConstant(TT_MAC_LANGID_KAZAKH,48,9838,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_KAZAKH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_KHMER
	CompareConstant(TT_MAC_LANGID_KHMER,78,9839,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_KHMER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_KIRGHIZ
	CompareConstant(TT_MAC_LANGID_KIRGHIZ,54,9840,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_KIRGHIZ\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_KOREAN
	CompareConstant(TT_MAC_LANGID_KOREAN,23,9841,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_KOREAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_KURDISH
	CompareConstant(TT_MAC_LANGID_KURDISH,60,9842,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_KURDISH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_LAO
	CompareConstant(TT_MAC_LANGID_LAO,79,9843,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_LAO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_LATIN
	CompareConstant(TT_MAC_LANGID_LATIN,131,9844,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_LATIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_LETTISH
	CompareConstant(TT_MAC_LANGID_LETTISH,28,9845,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_LETTISH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_LITHUANIAN
	CompareConstant(TT_MAC_LANGID_LITHUANIAN,24,9846,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_LITHUANIAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_MACEDONIAN
	CompareConstant(TT_MAC_LANGID_MACEDONIAN,43,9847,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_MACEDONIAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_MALAGASY
	CompareConstant(TT_MAC_LANGID_MALAGASY,93,9848,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_MALAGASY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_MALAYALAM
	CompareConstant(TT_MAC_LANGID_MALAYALAM,72,9849,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_MALAYALAM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_MALAY_ARABIC_SCRIPT
	CompareConstant(TT_MAC_LANGID_MALAY_ARABIC_SCRIPT,84,9850,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_MALAY_ARABIC_SCRIPT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_MALAY_ROMAN_SCRIPT
	CompareConstant(TT_MAC_LANGID_MALAY_ROMAN_SCRIPT,83,9851,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_MALAY_ROMAN_SCRIPT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_MALTESE
	CompareConstant(TT_MAC_LANGID_MALTESE,16,9852,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_MALTESE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_MANX_GAELIC
	CompareConstant(TT_MAC_LANGID_MANX_GAELIC,145,9853,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_MANX_GAELIC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_MARATHI
	CompareConstant(TT_MAC_LANGID_MARATHI,66,9854,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_MARATHI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_MOLDAVIAN
	CompareConstant(TT_MAC_LANGID_MOLDAVIAN,53,9855,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_MOLDAVIAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_MONGOLIAN
	CompareConstant(TT_MAC_LANGID_MONGOLIAN,57,9856,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_MONGOLIAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_MONGOLIAN_CYRILLIC_SCRIPT
	CompareConstant(TT_MAC_LANGID_MONGOLIAN_CYRILLIC_SCRIPT,58,9857,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_MONGOLIAN_CYRILLIC_SCRIPT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_MONGOLIAN_MONGOLIAN_SCRIPT
	CompareConstant(TT_MAC_LANGID_MONGOLIAN_MONGOLIAN_SCRIPT,57,9858,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_MONGOLIAN_MONGOLIAN_SCRIPT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_NEPALI
	CompareConstant(TT_MAC_LANGID_NEPALI,64,9859,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_NEPALI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_NORWEGIAN
	CompareConstant(TT_MAC_LANGID_NORWEGIAN,9,9860,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_NORWEGIAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_ORIYA
	CompareConstant(TT_MAC_LANGID_ORIYA,71,9861,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_ORIYA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_PASHTO
	CompareConstant(TT_MAC_LANGID_PASHTO,59,9862,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_PASHTO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_POLISH
	CompareConstant(TT_MAC_LANGID_POLISH,25,9863,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_POLISH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_PORTUGUESE
	CompareConstant(TT_MAC_LANGID_PORTUGUESE,8,9864,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_PORTUGUESE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_PUNJABI
	CompareConstant(TT_MAC_LANGID_PUNJABI,70,9865,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_PUNJABI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_QUECHUA
	CompareConstant(TT_MAC_LANGID_QUECHUA,132,9866,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_QUECHUA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_ROMANIAN
	CompareConstant(TT_MAC_LANGID_ROMANIAN,37,9867,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_ROMANIAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_RUANDA
	CompareConstant(TT_MAC_LANGID_RUANDA,90,9868,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_RUANDA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_RUNDI
	CompareConstant(TT_MAC_LANGID_RUNDI,91,9869,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_RUNDI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_RUSSIAN
	CompareConstant(TT_MAC_LANGID_RUSSIAN,32,9870,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_RUSSIAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_SAAMISK
	CompareConstant(TT_MAC_LANGID_SAAMISK,29,9871,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_SAAMISK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_SANSKRIT
	CompareConstant(TT_MAC_LANGID_SANSKRIT,65,9872,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_SANSKRIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_SCOTTISH_GAELIC
	CompareConstant(TT_MAC_LANGID_SCOTTISH_GAELIC,144,9873,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_SCOTTISH_GAELIC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_SERBIAN
	CompareConstant(TT_MAC_LANGID_SERBIAN,42,9874,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_SERBIAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_SINDHI
	CompareConstant(TT_MAC_LANGID_SINDHI,62,9875,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_SINDHI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_SINHALESE
	CompareConstant(TT_MAC_LANGID_SINHALESE,76,9876,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_SINHALESE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_SLOVAK
	CompareConstant(TT_MAC_LANGID_SLOVAK,39,9877,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_SLOVAK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_SLOVENIAN
	CompareConstant(TT_MAC_LANGID_SLOVENIAN,40,9878,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_SLOVENIAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_SOMALI
	CompareConstant(TT_MAC_LANGID_SOMALI,88,9879,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_SOMALI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_SPANISH
	CompareConstant(TT_MAC_LANGID_SPANISH,6,9880,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_SPANISH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_SUNDANESE
	CompareConstant(TT_MAC_LANGID_SUNDANESE,139,9881,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_SUNDANESE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_SWAHILI
	CompareConstant(TT_MAC_LANGID_SWAHILI,89,9882,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_SWAHILI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_SWEDISH
	CompareConstant(TT_MAC_LANGID_SWEDISH,5,9883,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_SWEDISH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_TAGALOG
	CompareConstant(TT_MAC_LANGID_TAGALOG,82,9884,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_TAGALOG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_TAJIKI
	CompareConstant(TT_MAC_LANGID_TAJIKI,55,9885,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_TAJIKI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_TAMIL
	CompareConstant(TT_MAC_LANGID_TAMIL,74,9886,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_TAMIL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_TATAR
	CompareConstant(TT_MAC_LANGID_TATAR,135,9887,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_TATAR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_TELUGU
	CompareConstant(TT_MAC_LANGID_TELUGU,75,9888,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_TELUGU\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_THAI
	CompareConstant(TT_MAC_LANGID_THAI,22,9889,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_THAI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_TIBETAN
	CompareConstant(TT_MAC_LANGID_TIBETAN,63,9890,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_TIBETAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_TIGRINYA
	CompareConstant(TT_MAC_LANGID_TIGRINYA,86,9891,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_TIGRINYA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_TONGAN
	CompareConstant(TT_MAC_LANGID_TONGAN,147,9892,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_TONGAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_TURKISH
	CompareConstant(TT_MAC_LANGID_TURKISH,17,9893,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_TURKISH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_TURKMEN
	CompareConstant(TT_MAC_LANGID_TURKMEN,56,9894,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_TURKMEN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_UIGHUR
	CompareConstant(TT_MAC_LANGID_UIGHUR,136,9895,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_UIGHUR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_UKRAINIAN
	CompareConstant(TT_MAC_LANGID_UKRAINIAN,45,9896,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_UKRAINIAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_URDU
	CompareConstant(TT_MAC_LANGID_URDU,20,9897,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_URDU\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_UZBEK
	CompareConstant(TT_MAC_LANGID_UZBEK,47,9898,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_UZBEK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_VIETNAMESE
	CompareConstant(TT_MAC_LANGID_VIETNAMESE,80,9899,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_VIETNAMESE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_WELSH
	CompareConstant(TT_MAC_LANGID_WELSH,128,9900,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_WELSH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MAC_LANGID_YIDDISH
	CompareConstant(TT_MAC_LANGID_YIDDISH,41,9901,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MAC_LANGID_YIDDISH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_ID_BIG_5
	CompareConstant(TT_MS_ID_BIG_5,4,9902,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_ID_BIG_5\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_ID_GB2312
	CompareConstant(TT_MS_ID_GB2312,3,9903,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_ID_GB2312\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_ID_JOHAB
	CompareConstant(TT_MS_ID_JOHAB,6,9904,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_ID_JOHAB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_ID_SJIS
	CompareConstant(TT_MS_ID_SJIS,2,9905,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_ID_SJIS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_ID_SYMBOL_CS
	CompareConstant(TT_MS_ID_SYMBOL_CS,0,9906,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_ID_SYMBOL_CS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_ID_UCS_4
	CompareConstant(TT_MS_ID_UCS_4,10,9907,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_ID_UCS_4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_ID_UNICODE_CS
	CompareConstant(TT_MS_ID_UNICODE_CS,1,9908,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_ID_UNICODE_CS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_ID_WANSUNG
	CompareConstant(TT_MS_ID_WANSUNG,5,9909,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_ID_WANSUNG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_AFRIKAANS_SOUTH_AFRICA
	CompareConstant(TT_MS_LANGID_AFRIKAANS_SOUTH_AFRICA,0x0436,9910,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_AFRIKAANS_SOUTH_AFRICA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_ALBANIAN_ALBANIA
	CompareConstant(TT_MS_LANGID_ALBANIAN_ALBANIA,0x041c,9911,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_ALBANIAN_ALBANIA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_AMHARIC_ETHIOPIA
	CompareConstant(TT_MS_LANGID_AMHARIC_ETHIOPIA,0x045e,9912,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_AMHARIC_ETHIOPIA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_ARABIC_ALGERIA
	CompareConstant(TT_MS_LANGID_ARABIC_ALGERIA,0x1401,9913,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_ARABIC_ALGERIA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_ARABIC_BAHRAIN
	CompareConstant(TT_MS_LANGID_ARABIC_BAHRAIN,0x3c01,9914,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_ARABIC_BAHRAIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_ARABIC_EGYPT
	CompareConstant(TT_MS_LANGID_ARABIC_EGYPT,0x0c01,9915,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_ARABIC_EGYPT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_ARABIC_GENERAL
	CompareConstant(TT_MS_LANGID_ARABIC_GENERAL,0x0001,9916,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_ARABIC_GENERAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_ARABIC_IRAQ
	CompareConstant(TT_MS_LANGID_ARABIC_IRAQ,0x0801,9917,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_ARABIC_IRAQ\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_ARABIC_JORDAN
	CompareConstant(TT_MS_LANGID_ARABIC_JORDAN,0x2c01,9918,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_ARABIC_JORDAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_ARABIC_KUWAIT
	CompareConstant(TT_MS_LANGID_ARABIC_KUWAIT,0x3401,9919,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_ARABIC_KUWAIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_ARABIC_LEBANON
	CompareConstant(TT_MS_LANGID_ARABIC_LEBANON,0x3001,9920,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_ARABIC_LEBANON\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_ARABIC_LIBYA
	CompareConstant(TT_MS_LANGID_ARABIC_LIBYA,0x1001,9921,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_ARABIC_LIBYA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_ARABIC_MOROCCO
	CompareConstant(TT_MS_LANGID_ARABIC_MOROCCO,0x1801,9922,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_ARABIC_MOROCCO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_ARABIC_OMAN
	CompareConstant(TT_MS_LANGID_ARABIC_OMAN,0x2001,9923,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_ARABIC_OMAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_ARABIC_QATAR
	CompareConstant(TT_MS_LANGID_ARABIC_QATAR,0x4001,9924,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_ARABIC_QATAR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_ARABIC_SAUDI_ARABIA
	CompareConstant(TT_MS_LANGID_ARABIC_SAUDI_ARABIA,0x0401,9925,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_ARABIC_SAUDI_ARABIA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_ARABIC_SYRIA
	CompareConstant(TT_MS_LANGID_ARABIC_SYRIA,0x2801,9926,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_ARABIC_SYRIA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_ARABIC_TUNISIA
	CompareConstant(TT_MS_LANGID_ARABIC_TUNISIA,0x1c01,9927,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_ARABIC_TUNISIA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_ARABIC_UAE
	CompareConstant(TT_MS_LANGID_ARABIC_UAE,0x3801,9928,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_ARABIC_UAE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_ARABIC_YEMEN
	CompareConstant(TT_MS_LANGID_ARABIC_YEMEN,0x2401,9929,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_ARABIC_YEMEN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_ARMENIAN_ARMENIA
	CompareConstant(TT_MS_LANGID_ARMENIAN_ARMENIA,0x042b,9930,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_ARMENIAN_ARMENIA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_ASSAMESE_INDIA
	CompareConstant(TT_MS_LANGID_ASSAMESE_INDIA,0x044d,9931,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_ASSAMESE_INDIA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_AZERI_AZERBAIJAN_CYRILLIC
	CompareConstant(TT_MS_LANGID_AZERI_AZERBAIJAN_CYRILLIC,0x082c,9932,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_AZERI_AZERBAIJAN_CYRILLIC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_AZERI_AZERBAIJAN_LATIN
	CompareConstant(TT_MS_LANGID_AZERI_AZERBAIJAN_LATIN,0x042c,9933,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_AZERI_AZERBAIJAN_LATIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_BASQUE_SPAIN
	CompareConstant(TT_MS_LANGID_BASQUE_SPAIN,0x042d,9934,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_BASQUE_SPAIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_BELARUSIAN_BELARUS
	CompareConstant(TT_MS_LANGID_BELARUSIAN_BELARUS,0x0423,9935,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_BELARUSIAN_BELARUS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_BENGALI_BANGLADESH
	CompareConstant(TT_MS_LANGID_BENGALI_BANGLADESH,0x0845,9936,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_BENGALI_BANGLADESH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_BENGALI_INDIA
	CompareConstant(TT_MS_LANGID_BENGALI_INDIA,0x0445,9937,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_BENGALI_INDIA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_BOSNIAN_BOSNIA_HERZEGOVINA
	CompareConstant(TT_MS_LANGID_BOSNIAN_BOSNIA_HERZEGOVINA,0x141a,9938,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_BOSNIAN_BOSNIA_HERZEGOVINA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_BULGARIAN_BULGARIA
	CompareConstant(TT_MS_LANGID_BULGARIAN_BULGARIA,0x0402,9939,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_BULGARIAN_BULGARIA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_BURMESE_MYANMAR
	CompareConstant(TT_MS_LANGID_BURMESE_MYANMAR,0x0455,9940,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_BURMESE_MYANMAR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_CATALAN_SPAIN
	CompareConstant(TT_MS_LANGID_CATALAN_SPAIN,0x0403,9941,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_CATALAN_SPAIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_CHEROKEE_UNITED_STATES
	CompareConstant(TT_MS_LANGID_CHEROKEE_UNITED_STATES,0x045c,9942,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_CHEROKEE_UNITED_STATES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_CHINESE_GENERAL
	CompareConstant(TT_MS_LANGID_CHINESE_GENERAL,0x0004,9943,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_CHINESE_GENERAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_CHINESE_HONG_KONG
	CompareConstant(TT_MS_LANGID_CHINESE_HONG_KONG,0x0c04,9944,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_CHINESE_HONG_KONG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_CHINESE_MACAU
	CompareConstant(TT_MS_LANGID_CHINESE_MACAU,0x1404,9945,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_CHINESE_MACAU\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_CHINESE_PRC
	CompareConstant(TT_MS_LANGID_CHINESE_PRC,0x0804,9946,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_CHINESE_PRC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_CHINESE_SINGAPORE
	CompareConstant(TT_MS_LANGID_CHINESE_SINGAPORE,0x1004,9947,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_CHINESE_SINGAPORE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_CHINESE_TAIWAN
	CompareConstant(TT_MS_LANGID_CHINESE_TAIWAN,0x0404,9948,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_CHINESE_TAIWAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_CLASSIC_LITHUANIAN_LITHUANIA
	CompareConstant(TT_MS_LANGID_CLASSIC_LITHUANIAN_LITHUANIA,0x0827,9949,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_CLASSIC_LITHUANIAN_LITHUANIA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_CROATIAN_BOSNIA_HERZEGOVINA
	CompareConstant(TT_MS_LANGID_CROATIAN_BOSNIA_HERZEGOVINA,0x101a,9950,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_CROATIAN_BOSNIA_HERZEGOVINA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_CROATIAN_CROATIA
	CompareConstant(TT_MS_LANGID_CROATIAN_CROATIA,0x041a,9951,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_CROATIAN_CROATIA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_CZECH_CZECH_REPUBLIC
	CompareConstant(TT_MS_LANGID_CZECH_CZECH_REPUBLIC,0x0405,9952,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_CZECH_CZECH_REPUBLIC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_DANISH_DENMARK
	CompareConstant(TT_MS_LANGID_DANISH_DENMARK,0x0406,9953,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_DANISH_DENMARK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_DHIVEHI_MALDIVES
	CompareConstant(TT_MS_LANGID_DHIVEHI_MALDIVES,0x0465,9954,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_DHIVEHI_MALDIVES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_DUTCH_BELGIUM
	CompareConstant(TT_MS_LANGID_DUTCH_BELGIUM,0x0813,9955,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_DUTCH_BELGIUM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_DUTCH_NETHERLANDS
	CompareConstant(TT_MS_LANGID_DUTCH_NETHERLANDS,0x0413,9956,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_DUTCH_NETHERLANDS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_DZONGHKA_BHUTAN
	CompareConstant(TT_MS_LANGID_DZONGHKA_BHUTAN,0x0851,9957,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_DZONGHKA_BHUTAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_EDO_NIGERIA
	CompareConstant(TT_MS_LANGID_EDO_NIGERIA,0x0466,9958,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_EDO_NIGERIA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_ENGLISH_AUSTRALIA
	CompareConstant(TT_MS_LANGID_ENGLISH_AUSTRALIA,0x0c09,9959,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_ENGLISH_AUSTRALIA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_ENGLISH_BELIZE
	CompareConstant(TT_MS_LANGID_ENGLISH_BELIZE,0x2809,9960,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_ENGLISH_BELIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_ENGLISH_CANADA
	CompareConstant(TT_MS_LANGID_ENGLISH_CANADA,0x1009,9961,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_ENGLISH_CANADA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_ENGLISH_CARIBBEAN
	CompareConstant(TT_MS_LANGID_ENGLISH_CARIBBEAN,0x2409,9962,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_ENGLISH_CARIBBEAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_ENGLISH_GENERAL
	CompareConstant(TT_MS_LANGID_ENGLISH_GENERAL,0x0009,9963,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_ENGLISH_GENERAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_ENGLISH_HONG_KONG
	CompareConstant(TT_MS_LANGID_ENGLISH_HONG_KONG,0x3c09,9964,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_ENGLISH_HONG_KONG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_ENGLISH_INDIA
	CompareConstant(TT_MS_LANGID_ENGLISH_INDIA,0x4009,9965,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_ENGLISH_INDIA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_ENGLISH_INDONESIA
	CompareConstant(TT_MS_LANGID_ENGLISH_INDONESIA,0x3809,9966,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_ENGLISH_INDONESIA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_ENGLISH_IRELAND
	CompareConstant(TT_MS_LANGID_ENGLISH_IRELAND,0x1809,9967,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_ENGLISH_IRELAND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_ENGLISH_JAMAICA
	CompareConstant(TT_MS_LANGID_ENGLISH_JAMAICA,0x2009,9968,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_ENGLISH_JAMAICA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_ENGLISH_MALAYSIA
	CompareConstant(TT_MS_LANGID_ENGLISH_MALAYSIA,0x4409,9969,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_ENGLISH_MALAYSIA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_ENGLISH_NEW_ZEALAND
	CompareConstant(TT_MS_LANGID_ENGLISH_NEW_ZEALAND,0x1409,9970,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_ENGLISH_NEW_ZEALAND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_ENGLISH_PHILIPPINES
	CompareConstant(TT_MS_LANGID_ENGLISH_PHILIPPINES,0x3409,9971,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_ENGLISH_PHILIPPINES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_ENGLISH_SINGAPORE
	CompareConstant(TT_MS_LANGID_ENGLISH_SINGAPORE,0x4809,9972,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_ENGLISH_SINGAPORE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_ENGLISH_SOUTH_AFRICA
	CompareConstant(TT_MS_LANGID_ENGLISH_SOUTH_AFRICA,0x1c09,9973,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_ENGLISH_SOUTH_AFRICA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_ENGLISH_TRINIDAD
	CompareConstant(TT_MS_LANGID_ENGLISH_TRINIDAD,0x2c09,9974,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_ENGLISH_TRINIDAD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_ENGLISH_UNITED_KINGDOM
	CompareConstant(TT_MS_LANGID_ENGLISH_UNITED_KINGDOM,0x0809,9975,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_ENGLISH_UNITED_KINGDOM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_ENGLISH_UNITED_STATES
	CompareConstant(TT_MS_LANGID_ENGLISH_UNITED_STATES,0x0409,9976,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_ENGLISH_UNITED_STATES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_ENGLISH_ZIMBABWE
	CompareConstant(TT_MS_LANGID_ENGLISH_ZIMBABWE,0x3009,9977,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_ENGLISH_ZIMBABWE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_ESTONIAN_ESTONIA
	CompareConstant(TT_MS_LANGID_ESTONIAN_ESTONIA,0x0425,9978,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_ESTONIAN_ESTONIA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_FAEROESE_FAEROE_ISLANDS
	CompareConstant(TT_MS_LANGID_FAEROESE_FAEROE_ISLANDS,0x0438,9979,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_FAEROESE_FAEROE_ISLANDS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_FARSI_IRAN
	CompareConstant(TT_MS_LANGID_FARSI_IRAN,0x0429,9980,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_FARSI_IRAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_FILIPINO_PHILIPPINES
	CompareConstant(TT_MS_LANGID_FILIPINO_PHILIPPINES,0x0464,9981,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_FILIPINO_PHILIPPINES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_FINNISH_FINLAND
	CompareConstant(TT_MS_LANGID_FINNISH_FINLAND,0x040b,9982,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_FINNISH_FINLAND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_FRENCH_BELGIUM
	CompareConstant(TT_MS_LANGID_FRENCH_BELGIUM,0x080c,9983,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_FRENCH_BELGIUM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_FRENCH_CAMEROON
	CompareConstant(TT_MS_LANGID_FRENCH_CAMEROON,0x2c0c,9984,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_FRENCH_CAMEROON\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_FRENCH_CANADA
	CompareConstant(TT_MS_LANGID_FRENCH_CANADA,0x0c0c,9985,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_FRENCH_CANADA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_FRENCH_CONGO
	CompareConstant(TT_MS_LANGID_FRENCH_CONGO,0x240c,9986,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_FRENCH_CONGO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_FRENCH_COTE_D_IVOIRE
	CompareConstant(TT_MS_LANGID_FRENCH_COTE_D_IVOIRE,0x300c,9987,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_FRENCH_COTE_D_IVOIRE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_FRENCH_FRANCE
	CompareConstant(TT_MS_LANGID_FRENCH_FRANCE,0x040c,9988,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_FRENCH_FRANCE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_FRENCH_HAITI
	CompareConstant(TT_MS_LANGID_FRENCH_HAITI,0x3c0c,9989,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_FRENCH_HAITI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_FRENCH_LUXEMBOURG
	CompareConstant(TT_MS_LANGID_FRENCH_LUXEMBOURG,0x140c,9990,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_FRENCH_LUXEMBOURG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_FRENCH_MALI
	CompareConstant(TT_MS_LANGID_FRENCH_MALI,0x340c,9991,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_FRENCH_MALI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_FRENCH_MONACO
	CompareConstant(TT_MS_LANGID_FRENCH_MONACO,0x180c,9992,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_FRENCH_MONACO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_FRENCH_MOROCCO
	CompareConstant(TT_MS_LANGID_FRENCH_MOROCCO,0x380c,9993,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_FRENCH_MOROCCO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_FRENCH_NORTH_AFRICA
	CompareConstant(TT_MS_LANGID_FRENCH_NORTH_AFRICA,0xE40cU,9994,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_FRENCH_NORTH_AFRICA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_FRENCH_REUNION
	CompareConstant(TT_MS_LANGID_FRENCH_REUNION,0x200c,9995,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_FRENCH_REUNION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_FRENCH_SENEGAL
	CompareConstant(TT_MS_LANGID_FRENCH_SENEGAL,0x280c,9996,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_FRENCH_SENEGAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_FRENCH_SWITZERLAND
	CompareConstant(TT_MS_LANGID_FRENCH_SWITZERLAND,0x100c,9997,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_FRENCH_SWITZERLAND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_FRENCH_WEST_INDIES
	CompareConstant(TT_MS_LANGID_FRENCH_WEST_INDIES,0x1c0c,9998,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_FRENCH_WEST_INDIES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TT_MS_LANGID_FRISIAN_NETHERLANDS
	CompareConstant(TT_MS_LANGID_FRISIAN_NETHERLANDS,0x0462,9999,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: TT_MS_LANGID_FRISIAN_NETHERLANDS\n");
cnt++;
#endif

#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in freetype/ttnameid.h\n\n",pcnt,cnt);
return cnt;
#endif

}
