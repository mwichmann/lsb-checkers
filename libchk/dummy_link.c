int main()
{
	/* We need one function from each library to cause
		 the library to get linked */

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
	pthread_atfork();

	/* libutil */
	login();

	/* libz */
	compress();
}


