#include <stdio.h>

int
main ()
{
	int c = 0;

	while ((c = getchar ()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n')
			printf("\n");
		else 
			printf("*");
	}

	return 0;
}
