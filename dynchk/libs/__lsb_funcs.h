#include <stdio.h>
#include <unistd.h>

int __lsb_fprintf(FILE * a0, const char * a1, ... );
int __lsb_fscanf(FILE * a0, const char * a1, ... );
long __lsb_sysconf(int a0);
FILE *__lsb_fopen(const char *,const char *);
void * __lsb_realloc(void *, size_t);
void __lsb_free (void * arg0 );
FILE * __lsb_fopen (const char * arg0 , const char * arg1 );
int __lsb_feof (FILE * arg0 );
void * __lsb_realloc(void * arg0, size_t arg1);
char * __lsb_fgets (char * arg0 , int arg1 , FILE * arg2 );
int __lsb_sscanf(const char *str, const char *format, ...);
int __lsb_fclose (FILE * arg0 );
int __lsb_fflush (FILE * arg0 );
void __lsb_abort ();
