int main()
{
	/* We need one function from each library to cause
		 the library to get linked */
	printf("This program should never get executed. It does nothing.\n");
	exit(1);

	/* libGL */
	glAccum();

	/* libICE */
	IceAcceptConnection();

	/* libSM */
	SmFreeProperty();

	/* libX11 */
	XActivateScreenSaver();

	/* libXext */
	DPMSCapable();

	/* libXt */
	XtAddActions();

	/* libc */
	alarm();

	/* libcrypt */
	crypt();
	
	/* libdl */
	dlsym();
	
	/* libgcc_s */
	_Unwind_DeleteException();

	/* libm */
	acos();

	/* libncurses */
	addch();

	/* libpam */
	pam_acct_mgmt();

	/* libpthread */
	pthread_kill();

	/* libutil */
	login();

	/* libz */
	compress();

#ifdef _CXXABICHK_
	/* libstdc++ */
	__cxa_pure_virtual();
#endif
}


