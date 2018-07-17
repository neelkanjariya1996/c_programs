#include <stdio.h>

#define IN 1
#define OUT 0

int
main ()
{
	int c = 0, state = 0;
	
//	state = OUT;
	while ((c = getchar ()) != EOF) {
		if (c == ' ' || c == '\t') 
			printf("\n");
		else 
			putchar (c);
	}	
	return 0;
}
