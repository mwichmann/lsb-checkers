#include <stdlib.h>
#include <stdio.h>
#include "elfchk.h"
extern struct versym libstdcxx_so_5[];

/*
 * FUNC:._ZNKSbIwSt11char_traitsIwESaIwEE12find_last_ofEPKwm@@GLIBCPP_3.2
 * OBJECT:size:._ZNKSbIwSt11char_traitsIwESaIwEE12find_last_ofEPKwm@@GLIBCPP_3.2
 */
int
main()
{
int i=0;

while( libstdcxx_so_5[i].name ) {
	if( libstdcxx_so_5[i].type == 1 ) {
		/* Function */
		printf("FUNC:%s@@%s\n",
				libstdcxx_so_5[i].name,
				libstdcxx_so_5[i].vername );
	} else {
		/* Data */
		printf("OBJECT:%d:%s@@%s\n",
				libstdcxx_so_5[i].size,
				libstdcxx_so_5[i].name,
				libstdcxx_so_5[i].vername );
	}
	i++;
	}
return 0;
}

