#include <stdlib.h>
#include "elfchk.h"
struct versym libnss3_so[] = {
	{"CERT_CheckCertValidTimes","NSS_3.2",0,LSB_Security,0,1},
	{"CERT_DestroyCertificate","NSS_3.2",0,LSB_Security,0,1},
	{"CERT_DupCertificate","NSS_3.2",0,LSB_Security,0,1},
	{"CERT_FreeNicknames","NSS_3.2",0,LSB_Security,0,1},
	{"CERT_GetCertNicknames","NSS_3.2",0,LSB_Security,0,1},
	{"CERT_GetDefaultCertDB","NSS_3.2",0,LSB_Security,0,1},
	{"CERT_VerifyCertName","NSS_3.2",0,LSB_Security,0,1},
	{"CERT_VerifyCertNow","NSS_3.2",0,LSB_Security,0,1},
	{"NSS_Init","NSS_3.2",0,LSB_Security,0,1},
	{"NSS_InitReadWrite","NSS_3.2",0,LSB_Security,0,1},
	{"NSS_NoDB_Init","NSS_3.2",0,LSB_Security,0,1},
	{"NSS_Shutdown","NSS_3.2",0,LSB_Security,0,1},
	{"PK11_FindCertFromNickname","NSS_3.2",0,LSB_Security,0,1},
	{"PK11_FindKeyByAnyCert","NSS_3.2",0,LSB_Security,0,1},
	{"PK11_GetSlotName","NSS_3.2",0,LSB_Security,0,1},
	{"PK11_GetTokenName","NSS_3.2",0,LSB_Security,0,1},
	{"PK11_IsHW","NSS_3.2",0,LSB_Security,0,1},
	{"PK11_IsPresent","NSS_3.2",0,LSB_Security,0,1},
	{"PK11_IsReadOnly","NSS_3.2",0,LSB_Security,0,1},
	{"PK11_SetPasswordFunc","NSS_3.2",0,LSB_Security,0,1},
	{"SECKEY_DestroyPrivateKey","NSS_3.2",0,LSB_Security,0,1},
	{0,0}};

struct classinfo *libnss3_so_classinfo[] = {

	NULL	};
