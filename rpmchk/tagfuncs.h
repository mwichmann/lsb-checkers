/* idxtag.c */
extern void checkRpmIdx(RpmFile * file1, RpmHdrIndex * hidx,
			RpmIdxTagFuncRec Tags[], int numtags,
			struct tetj_handle *journal);
extern int checkRpmIdxHEADERSIGNATURES(RpmFile * file1, RpmHdrIndex * hidx,
				       struct tetj_handle *journal);
extern int checkRpmIdxHEADERIMMUTABLE(RpmFile * file1, RpmHdrIndex * hidx,
				      struct tetj_handle *journal);
extern int checkRpmIdxHDRREGIONS(RpmFile * file1, RpmHdrIndex * hidx,
				 struct tetj_handle *journal);
extern int checkRpmIdxHEADERI18NTABLE(RpmFile * file1, RpmHdrIndex * hidx,
				      struct tetj_handle *journal);
extern int checkRpmIdxHEADERSIGBASE(RpmFile * file1, RpmHdrIndex * hidx,
				    struct tetj_handle *journal);
extern int checkRpmIdxSIGSIZE(RpmFile * file1, RpmHdrIndex * hidx,
			      struct tetj_handle *journal);
extern int checkRpmIdxMD5(RpmFile * file1, RpmHdrIndex * hidx,
			  struct tetj_handle *journal);
extern int checkRpmIdxGPG(RpmFile * file1, RpmHdrIndex * hidx,
			  struct tetj_handle *journal);
extern int checkRpmIdxPGP5(RpmFile * file1, RpmHdrIndex * hidx,
			   struct tetj_handle *journal);
extern int checkRpmIdxPGP(RpmFile * file1, RpmHdrIndex * hidx,
			  struct tetj_handle *journal);
extern int checkRpmIdxSHA1(RpmFile * file1, RpmHdrIndex * hidx,
			   struct tetj_handle *journal);
extern int checkRpmIdxDSA(RpmFile * file1, RpmHdrIndex * hidx,
			  struct tetj_handle *journal);
extern int checkRpmIdxRSA(RpmFile * file1, RpmHdrIndex * hidx,
			  struct tetj_handle *journal);
extern int checkRpmIdxNAME(RpmFile * file1, RpmHdrIndex * hidx,
			   struct tetj_handle *journal);
extern int checkRpmIdxVERSION(RpmFile * file1, RpmHdrIndex * hidx,
			      struct tetj_handle *journal);
extern int checkRpmIdxRELEASE(RpmFile * file1, RpmHdrIndex * hidx,
			      struct tetj_handle *journal);
extern int checkRpmIdxSUMMARY(RpmFile * file1, RpmHdrIndex * hidx,
			      struct tetj_handle *journal);
extern int checkRpmIdxDESCRIPTION(RpmFile * file1, RpmHdrIndex * hidx,
				  struct tetj_handle *journal);
extern int checkRpmIdxBUILDTIME(RpmFile * file1, RpmHdrIndex * hidx,
				struct tetj_handle *journal);
extern int checkRpmIdxBUILDHOST(RpmFile * file1, RpmHdrIndex * hidx,
				struct tetj_handle *journal);
extern int checkRpmIdxSIZE(RpmFile * file1, RpmHdrIndex * hidx,
			   struct tetj_handle *journal);
extern int checkRpmIdxDISTRIBUTION(RpmFile * file1, RpmHdrIndex * hidx,
				   struct tetj_handle *journal);
extern int checkRpmIdxVENDOR(RpmFile * file1, RpmHdrIndex * hidx,
			     struct tetj_handle *journal);
extern int checkRpmIdxPACKAGER(RpmFile * file1, RpmHdrIndex * hidx,
			       struct tetj_handle *journal);
extern int checkRpmIdxLICENSE(RpmFile * file1, RpmHdrIndex * hidx,
			      struct tetj_handle *journal);
extern int checkRpmIdxGROUP(RpmFile * file1, RpmHdrIndex * hidx,
			    struct tetj_handle *journal);
extern int checkRpmIdxURL(RpmFile * file1, RpmHdrIndex * hidx,
			  struct tetj_handle *journal);
extern int checkRpmIdxOS(RpmFile * file1, RpmHdrIndex * hidx,
			 struct tetj_handle *journal);
extern int checkRpmIdxARCH(RpmFile * file1, RpmHdrIndex * hidx,
			   struct tetj_handle *journal);
extern int checkRpmIdxOLDFILENAMES(RpmFile * file1, RpmHdrIndex * hidx,
				   struct tetj_handle *journal);
extern int checkRpmIdxFILESIZES(RpmFile * file1, RpmHdrIndex * hidx,
				struct tetj_handle *journal);
extern int checkRpmIdxFILEMODES(RpmFile * file1, RpmHdrIndex * hidx,
				struct tetj_handle *journal);
extern int checkRpmIdxFILERDEVS(RpmFile * file1, RpmHdrIndex * hidx,
				struct tetj_handle *journal);
extern int checkRpmIdxFILEMTIMES(RpmFile * file1, RpmHdrIndex * hidx,
				 struct tetj_handle *journal);
extern int checkRpmIdxFILEMD5S(RpmFile * file1, RpmHdrIndex * hidx,
			       struct tetj_handle *journal);
extern int checkRpmIdxFILELINKTOS(RpmFile * file1, RpmHdrIndex * hidx,
				  struct tetj_handle *journal);
extern int checkRpmIdxFILEFLAGS(RpmFile * file1, RpmHdrIndex * hidx,
				struct tetj_handle *journal);
extern int checkRpmIdxFILEUSERNAME(RpmFile * file1, RpmHdrIndex * hidx,
				   struct tetj_handle *journal);
extern int checkRpmIdxFILEGROUPNAME(RpmFile * file1, RpmHdrIndex * hidx,
				    struct tetj_handle *journal);
extern int checkRpmIdxSOURCERPM(RpmFile * file1, RpmHdrIndex * hidx,
				struct tetj_handle *journal);
extern int checkRpmIdxFILEVERIFYFLAGS(RpmFile * file1, RpmHdrIndex * hidx,
				      struct tetj_handle *journal);
extern int checkRpmIdxARCHIVESIZE(RpmFile * file1, RpmHdrIndex * hidx,
				  struct tetj_handle *journal);
extern int checkRpmIdxPAYLOADSIZE(RpmFile * file1, RpmHdrIndex * hidx,
				  struct tetj_handle *journal);
extern int checkRpmIdxPROVIDENAME(RpmFile * file1, RpmHdrIndex * hidx,
				  struct tetj_handle *journal);
extern int checkRpmIdxOBSOLETENAME(RpmFile * file1, RpmHdrIndex * hidx,
				   struct tetj_handle *journal);
extern int checkRpmIdxCONFLICTNAME(RpmFile * file1, RpmHdrIndex * hidx,
				   struct tetj_handle *journal);
extern int checkRpmIdxREQUIREFLAGS(RpmFile * file1, RpmHdrIndex * hidx,
				   struct tetj_handle *journal);
extern int checkRpmIdxREQUIRENAME(RpmFile * file1, RpmHdrIndex * hidx,
				  struct tetj_handle *journal);
extern int checkRpmIdxRPMVERSION(RpmFile * file1, RpmHdrIndex * hidx,
				 struct tetj_handle *journal);
extern int checkRpmIdxCHANGELOGTIME(RpmFile * file1, RpmHdrIndex * hidx,
				    struct tetj_handle *journal);
extern int checkRpmIdxCHANGELOGNAME(RpmFile * file1, RpmHdrIndex * hidx,
				    struct tetj_handle *journal);
extern int checkRpmIdxCHANGELOGTEXT(RpmFile * file1, RpmHdrIndex * hidx,
				    struct tetj_handle *journal);
extern int checkRpmIdxPREINPROG(RpmFile * file1, RpmHdrIndex * hidx,
				struct tetj_handle *journal);
extern int checkRpmIdxPOSTINPROG(RpmFile * file1, RpmHdrIndex * hidx,
				 struct tetj_handle *journal);
extern int checkRpmIdxPREUNPROG(RpmFile * file1, RpmHdrIndex * hidx,
				struct tetj_handle *journal);
extern int checkRpmIdxPOSTUNPROG(RpmFile * file1, RpmHdrIndex * hidx,
				 struct tetj_handle *journal);
extern int checkRpmIdxCOOKIE(RpmFile * file1, RpmHdrIndex * hidx,
			     struct tetj_handle *journal);
extern int checkRpmIdxFILEDEVICES(RpmFile * file1, RpmHdrIndex * hidx,
				  struct tetj_handle *journal);
extern int checkRpmIdxFILEINODES(RpmFile * file1, RpmHdrIndex * hidx,
				 struct tetj_handle *journal);
extern int checkRpmIdxFILELANGS(RpmFile * file1, RpmHdrIndex * hidx,
				struct tetj_handle *journal);
extern int checkRpmIdxPROVIDEFLAGS(RpmFile * file1, RpmHdrIndex * hidx,
				   struct tetj_handle *journal);
extern int checkRpmIdxPROVIDEVERSION(RpmFile * file1, RpmHdrIndex * hidx,
				     struct tetj_handle *journal);
extern int checkRpmIdxDIRINDEXES(RpmFile * file1, RpmHdrIndex * hidx,
				 struct tetj_handle *journal);
extern int checkRpmIdxBASENAMES(RpmFile * file1, RpmHdrIndex * hidx,
				struct tetj_handle *journal);
extern int checkRpmIdxDIRNAMES(RpmFile * file1, RpmHdrIndex * hidx,
			       struct tetj_handle *journal);
extern int checkRpmIdxOPTFLAGS(RpmFile * file1, RpmHdrIndex * hidx,
			       struct tetj_handle *journal);
extern int checkRpmIdxDISTURL(RpmFile * file1, RpmHdrIndex * hidx,
			      struct tetj_handle *journal);
extern int checkRpmIdxPAYLOADFORMAT(RpmFile * file1, RpmHdrIndex * hidx,
				    struct tetj_handle *journal);
extern int checkRpmIdxPAYLOADCOMPRESSOR(RpmFile * file1,
					RpmHdrIndex * hidx,
					struct tetj_handle *journal);
extern int checkRpmIdxREQUIREVERSION(RpmFile * file1, RpmHdrIndex * hidx,
				     struct tetj_handle *journal);
extern int checkRpmIdxPAYLOADFLAGS(RpmFile * file1, RpmHdrIndex * hidx,
				   struct tetj_handle *journal);
extern int checkRpmIdxRHNPLATFORM(RpmFile * file1, RpmHdrIndex * hidx,
				  struct tetj_handle *journal);
extern int checkRpmIdxPLATFORM(RpmFile * file1, RpmHdrIndex * hidx,
			       struct tetj_handle *journal);
extern int checkRpmIdxOBSOLETEFLAGS(RpmFile * file1, RpmHdrIndex * hidx,
				    struct tetj_handle *journal);
extern int checkRpmIdxCONFLICTFLAGS(RpmFile * file1, RpmHdrIndex * hidx,
				    struct tetj_handle *journal);
extern int checkRpmIdxOBSOLETEVERSION(RpmFile * file1, RpmHdrIndex * hidx,
				      struct tetj_handle *journal);
extern int checkRpmIdxCONFLICTVERSION(RpmFile * file1, RpmHdrIndex * hidx,
				      struct tetj_handle *journal);
extern int checkRpmIdxPREIN(RpmFile * file1, RpmHdrIndex * hidx,
			    struct tetj_handle *journal);
extern int checkRpmIdxPOSTIN(RpmFile * file1, RpmHdrIndex * hidx,
			     struct tetj_handle *journal);
extern int checkRpmIdxPREUN(RpmFile * file1, RpmHdrIndex * hidx,
			    struct tetj_handle *journal);
extern int checkRpmIdxPOSTUN(RpmFile * file1, RpmHdrIndex * hidx,
			     struct tetj_handle *journal);

/* Ensure LSB 3.0 compatibility */
extern int checkRpmIdxSHA1HEADER(RpmFile * file1, RpmHdrIndex * hidx,
				 struct tetj_handle *journal);
extern int checkRpmIdxDSAHEADER(RpmFile * file1, RpmHdrIndex * hidx,
				struct tetj_handle *journal);
extern int checkRpmIdxRSAHEADER(RpmFile * file1, RpmHdrIndex * hidx,
				struct tetj_handle *journal);
