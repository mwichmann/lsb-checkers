#include <stdio.h>
#include <unistd.h>

int lsb_fprintf(FILE * a0, const char * a1, ... );
int lsb_fscanf(FILE * a0, const char * a1, ... );
long lsb_sysconf(int a0);
FILE *lsb_fopen(const char *,const char *);
void * lsb_realloc(void *, size_t);
