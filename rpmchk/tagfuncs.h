/* idxtag.c */
extern void checkRpmIdx(RpmFile *file1, RpmHdrIndex *hidx, RpmIdxTagFuncRec Tags[], int numtags, struct tetj_handle *journal);
extern void checkRpmIdxHEADERSIGNATURES(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxHEADERIMMUTABLE(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxHDRREGIONS(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxHEADERI18NTABLE(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxHEADERSIGBASE(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxSIGSIZE(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxMD5(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxGPG(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxPGP5(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxPGP(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxSHA1HEADER(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxDSAHEADER(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxRSAHEADER(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxNAME(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxVERSION(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxRELEASE(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxSUMMARY(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxDESCRIPTION(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxBUILDTIME(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxBUILDHOST(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxSIZE(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxLICENSE(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxGROUP(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxOS(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxARCH(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxOLDFILENAMES(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxFILESIZES(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxFILEMODES(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxFILERDEVS(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxFILEMTIMES(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxFILEMD5S(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxFILELINKTOS(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxFILEFLAGS(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxFILEUSERNAME(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxFILEGROUPNAME(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxSOURCERPM(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxFILEVERIFYFLAGS(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxARCHIVESIZE(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxPAYLOADSIZE(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxPROVIDENAME(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxOBSOLETENAME(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxCONFLICTNAME(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxREQUIREFLAGS(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxREQUIRENAME(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxRPMVERSION(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxCHANGELOGTIME(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxCHANGELOGNAME(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxCHANGELOGTEXT(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxPREINPROG(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxPOSTINPROG(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxPREUNPROG(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxPOSTUNPROG(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxCOOKIE(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxFILEDEVICES(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxFILEINODES(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxFILELANGS(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxPROVIDEFLAGS(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxPROVIDEVERSION(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxDIRINDEXES(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxBASENAMES(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxDIRNAMES(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxOPTFLAGS(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxPAYLOADFORMAT(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxPAYLOADCOMPRESSOR(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxREQUIREVERSION(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxPAYLOADFLAGS(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxRHNPLATFORM(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxPLATFORM(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxOBSOLETEFLAGS(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxCONFLICTFLAGS(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxOBSOLETEVERSION(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
extern void checkRpmIdxCONFLICTVERSION(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal);
