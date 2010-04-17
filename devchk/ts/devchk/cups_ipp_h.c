/*
 * Test of cups/ipp.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include "cups/ipp.h"



#ifdef TET_TEST
void cups_ipp_h()
{
#else
int cups_ipp_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in cups/ipp.h\n");
#endif

printf("Checking data structures in cups/ipp.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef IPP_VERSION
	CompareStringConstant(IPP_VERSION,"\001\001",20197,architecture,4.1,NULL)
#else
Msg( "Error: Constant not found: IPP_VERSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPP_PORT
	CompareConstant(IPP_PORT,631,20198,architecture,4.1,NULL)
#else
Msg( "Error: Constant not found: IPP_PORT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPP_MAX_LENGTH
	CompareConstant(IPP_MAX_LENGTH,32767,20199,architecture,4.1,NULL)
#else
Msg( "Error: Constant not found: IPP_MAX_LENGTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPP_MAX_NAME
	CompareConstant(IPP_MAX_NAME,256,20200,architecture,4.1,NULL)
#else
Msg( "Error: Constant not found: IPP_MAX_NAME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPP_MAX_VALUES
	CompareConstant(IPP_MAX_VALUES,8,20201,architecture,4.1,NULL)
#else
Msg( "Error: Constant not found: IPP_MAX_VALUES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for IPP_JOB_CANCELLED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for CUPS_ADD_PRINTER */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for CUPS_ADD_CLASS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IPP_ERROR_JOB_CANCELLED */
#endif

#if 1
CheckTypeSize(ipp_tag_t,0, 39961, 1, 4.1, NULL, 39960, NULL)
#endif

#if 1
CheckTypeSize(ipp_res_t,0, 39963, 1, 4.1, NULL, 39962, NULL)
#endif

#if 1
CheckTypeSize(ipp_finish_t,0, 39965, 1, 4.1, NULL, 39964, NULL)
#endif

#if 1
CheckTypeSize(ipp_orient_t,0, 39967, 1, 4.1, NULL, 39966, NULL)
#endif

#if 1
CheckTypeSize(ipp_quality_t,0, 39969, 1, 4.1, NULL, 39968, NULL)
#endif

#if 1
CheckTypeSize(ipp_pstate_t,0, 39972, 1, 4.1, NULL, 39971, NULL)
#endif

#if 1
CheckTypeSize(ipp_state_t,0, 39974, 1, 4.1, NULL, 39973, NULL)
#endif

#if 1
CheckTypeSize(ipp_op_t,0, 39976, 1, 4.1, NULL, 39975, NULL)
#endif

#if 1
CheckTypeSize(ipp_uchar_t,0, 39978, 1, 4.1, NULL, 3, NULL)
#endif

#if 1
CheckTypeSize(union ipp_request_u,0, 39987, 1, , NULL, 0, NULL)
Msg("Missing member data for ipp_request_u on All\n");
CheckOffset(union ipp_request_u,any,0,1,219534)
CheckOffset(union ipp_request_u,op,0,1,219535)
CheckOffset(union ipp_request_u,status,0,1,219536)
CheckOffset(union ipp_request_u,event,0,1,219537)
#endif

#if 1
CheckTypeSize(ipp_request_t,0, 39988, 1, 4.1, NULL, 39987, NULL)
#endif

#if 1
CheckTypeSize(ipp_t,0, 39989, 1, 4.1, NULL, 40003, NULL)
#endif

#if 1
CheckTypeSize(union ipp_value_u,0, 39996, 1, , NULL, 0, NULL)
Msg("Missing member data for ipp_value_u on All\n");
CheckOffset(union ipp_value_u,integer,0,1,219547)
CheckOffset(union ipp_value_u,boolean,0,1,219548)
CheckOffset(union ipp_value_u,date,0,1,219549)
CheckOffset(union ipp_value_u,resolution,0,1,219550)
CheckOffset(union ipp_value_u,range,0,1,219551)
CheckOffset(union ipp_value_u,string,0,1,219552)
CheckOffset(union ipp_value_u,unknown,0,1,219553)
CheckOffset(union ipp_value_u,collection,0,1,219554)
#endif

#if 1
CheckTypeSize(ipp_value_t,0, 39997, 1, 4.1, NULL, 39996, NULL)
#endif

#if 1
CheckTypeSize(struct ipp_attribute_s,0, 40000, 1, , NULL, 0, NULL)
Msg("Missing member data for ipp_attribute_s on All\n");
CheckOffset(struct ipp_attribute_s,next,0,1,219555)
CheckOffset(struct ipp_attribute_s,group_tag,0,1,219556)
CheckOffset(struct ipp_attribute_s,value_tag,0,1,219557)
CheckOffset(struct ipp_attribute_s,name,0,1,219558)
CheckOffset(struct ipp_attribute_s,num_values,0,1,219559)
CheckOffset(struct ipp_attribute_s,values,0,1,219560)
#endif

#if 1
CheckTypeSize(ipp_attribute_t,0, 40001, 1, 4.1, NULL, 40000, NULL)
#endif

#if 1
CheckTypeSize(struct ipp_s,0, 40003, 1, , NULL, 0, NULL)
Msg("Missing member data for ipp_s on All\n");
CheckOffset(struct ipp_s,state,0,1,219561)
CheckOffset(struct ipp_s,request,0,1,219562)
CheckOffset(struct ipp_s,attrs,0,1,219563)
CheckOffset(struct ipp_s,last,0,1,219564)
CheckOffset(struct ipp_s,current,0,1,219565)
CheckOffset(struct ipp_s,curtag,0,1,219566)
#endif

extern ipp_attribute_t * ippAddBoolean_db(ipp_t *, ipp_tag_t, const char *, char);
CheckInterfacedef(ippAddBoolean,ippAddBoolean_db);
extern ipp_attribute_t * ippAddBooleans_db(ipp_t *, ipp_tag_t, const char *, int, const char *);
CheckInterfacedef(ippAddBooleans,ippAddBooleans_db);
extern ipp_attribute_t * ippAddDate_db(ipp_t *, ipp_tag_t, const char *, const ipp_uchar_t *);
CheckInterfacedef(ippAddDate,ippAddDate_db);
extern ipp_attribute_t * ippAddInteger_db(ipp_t *, ipp_tag_t, ipp_tag_t, const char *, int);
CheckInterfacedef(ippAddInteger,ippAddInteger_db);
extern ipp_attribute_t * ippAddIntegers_db(ipp_t *, ipp_tag_t, ipp_tag_t, const char *, int, const int *);
CheckInterfacedef(ippAddIntegers,ippAddIntegers_db);
extern ipp_attribute_t * ippAddRange_db(ipp_t *, ipp_tag_t, const char *, int, int);
CheckInterfacedef(ippAddRange,ippAddRange_db);
extern ipp_attribute_t * ippAddRanges_db(ipp_t *, ipp_tag_t, const char *, int, const int *, const int *);
CheckInterfacedef(ippAddRanges,ippAddRanges_db);
extern ipp_attribute_t * ippAddResolution_db(ipp_t *, ipp_tag_t, const char *, ipp_res_t, int, int);
CheckInterfacedef(ippAddResolution,ippAddResolution_db);
extern ipp_attribute_t * ippAddResolutions_db(ipp_t *, ipp_tag_t, const char *, int, ipp_res_t, const int *, const int *);
CheckInterfacedef(ippAddResolutions,ippAddResolutions_db);
extern ipp_attribute_t * ippAddSeparator_db(ipp_t *);
CheckInterfacedef(ippAddSeparator,ippAddSeparator_db);
extern ipp_attribute_t * ippAddString_db(ipp_t *, ipp_tag_t, ipp_tag_t, const char *, const char *, const char *);
CheckInterfacedef(ippAddString,ippAddString_db);
extern ipp_attribute_t * ippAddStrings_db(ipp_t *, ipp_tag_t, ipp_tag_t, const char *, int, const char *, const char *const  *);
CheckInterfacedef(ippAddStrings,ippAddStrings_db);
extern time_t ippDateToTime_db(const ipp_uchar_t *);
CheckInterfacedef(ippDateToTime,ippDateToTime_db);
extern void ippDelete_db(ipp_t *);
CheckInterfacedef(ippDelete,ippDelete_db);
extern const char * ippErrorString_db(ipp_status_t);
CheckInterfacedef(ippErrorString,ippErrorString_db);
extern ipp_attribute_t * ippFindAttribute_db(ipp_t *, const char *, ipp_tag_t);
CheckInterfacedef(ippFindAttribute,ippFindAttribute_db);
extern ipp_attribute_t * ippFindNextAttribute_db(ipp_t *, const char *, ipp_tag_t);
CheckInterfacedef(ippFindNextAttribute,ippFindNextAttribute_db);
extern size_t ippLength_db(ipp_t *);
CheckInterfacedef(ippLength,ippLength_db);
extern ipp_t * ippNew_db(void);
CheckInterfacedef(ippNew,ippNew_db);
extern ipp_state_t ippRead_db(http_t *, ipp_t *);
CheckInterfacedef(ippRead,ippRead_db);
extern const ipp_uchar_t * ippTimeToDate_db(time_t);
CheckInterfacedef(ippTimeToDate,ippTimeToDate_db);
extern ipp_state_t ippWrite_db(http_t *, ipp_t *);
CheckInterfacedef(ippWrite,ippWrite_db);
extern int ippPort_db(void);
CheckInterfacedef(ippPort,ippPort_db);
extern void ippSetPort_db(int);
CheckInterfacedef(ippSetPort,ippSetPort_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in cups/ipp.h\n\n",pcnt,cnt);
return cnt;
#endif

}
