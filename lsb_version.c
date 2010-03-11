char* LSB_Versions[] = {"3.0", "3.1", "3.2", "4.0", "4.1"};
char* LSB_Versions_Numeric[] = {30, 31, 32, 40, 41};
char* LSB_Versions_list = "3.0, 3.1, 3.2, 4.0, 4.1";
int num_LSB_Versions = sizeof(LSB_Versions)/sizeof(char *);

int LSB_Version = -1;

/* Default LSB version is 4.1 */
int LSB_Version_default = 4;
