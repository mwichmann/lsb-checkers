#include <stdlib.h>
#include "elfchk.h"
extern struct versym libstdcxx_so_5[];

main()
{
int i=0;

while( libstdcxx_so_5[i].name ) {
	printf("%s\n", libstdcxx_so_5[i++].name );
	}
}

